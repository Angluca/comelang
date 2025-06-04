#define VIRTIO_DRIVER_DEEP_DEBUG 1
#define  VIRTIO_FSIMG_TEST 2
#include <stdint.h>
#include <stdarg.h>

extern void putchar(char c);
void* memset(void *dst, int c, unsigned int n) {
    char *cdst = (char *) dst;
    int i;
    for(i = 0; i < n; i++){
        cdst[i] = c;
    }
    return dst;
}

void printint(int val_, int base, int sign) {
    char buf[33];  
    int i = 0;
    int negative = 0;
    unsigned int uval;

    if (sign && val_ < 0) {
        negative = 1;
        uval = -val_;
    } else {
        uval = (unsigned int)val_;
    }

    if (uval == 0) {
        putchar('0');
        return;
    }

    while (uval > 0) {
        int digit = uval % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        uval /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlong(unsigned long val_, int base, int sign)  {
    char buf[65];  
    int i = 0;
    int negative = 0;

    if (sign && (long)val_ < 0) {
        negative = 1;
        val_ = -(long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlonglong(unsigned long long val_, int base, int sign)  {
    char buf[65];
    int i = 0;
    int negative = 0;

    if (sign && (long long)val_ < 0) {
        negative = 1;
        val_ = -(long long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

int printf(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    const char* p;
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }

        p++; 

        if (*p == 'l') {
            int lcount = 1;
            if (*(p+1) == 'l') {
                lcount = 2;
                p++;
            }
            p++;

            switch (*p) {
                case 'x': {
                    if (lcount == 1) {
                        unsigned long val_ = va_arg(ap, unsigned long);
                        printlong(val_, 16, 0);
                    } else {
                        unsigned long long val_ = va_arg(ap, unsigned long long);
                        printlonglong(val_, 16, 0);
                    }
                    break;
                }
                case 'd': {
                    if (lcount == 1) {
                        long val_ = va_arg(ap, long);
                        printlong(val_, 10, 1);
                    } else {
                        long long val_ = va_arg(ap, long long);
                        printlonglong(val_, 10, 1);
                    }
                    break;
                }
                default: {
                    putchar('%');
                    for (int i=0; i<lcount; i++) putchar('l');
                    putchar(*p);
                    break;
                }
            }
        } else {
            switch (*p) {
                case 'd': {
                    int val_ = va_arg(ap, int);
                    printint(val_, 10, 1);
                    break;
                }
                case 'x': {
                    unsigned int val_ = va_arg(ap, unsigned int);
                    printint(val_, 16, 0);
                    break;
                }
                case 'p': {
                    unsigned long val_ = (unsigned long)va_arg(ap, void*);
                    putchar('0'); putchar('x');
                    printlong(val_, 16, 0);
                    break;
                }
                case 's': {
                    const char* s = va_arg(ap, const char*);
                    if (!s) s = "(null)";
                    while (*s) putchar(*s++);
                    break;
                }
                case 'c': {
                    char c = (char)va_arg(ap, int);
                    putchar(c);
                    break;
                }
                case '%': {
                    putchar('%');
                    break;
                }
                default: {
                    putchar('%');
                    putchar(*p);
                    break;
                }
            }
        }
    }

    va_end(ap);
    return 0;
}

void* memmove(void *dst, const void *src, unsigned int n) {
  const char *s;
  char *d;

  if(n == 0)
    return dst;
  
  s = src;
  d = dst;
  if(s < d && s + n > d){
    s += n;
    d += n;
    while(n-- > 0)
      *--d = *--s;
  } else
    while(n-- > 0) {
      *d++ = *s++;
    }

  return dst;
}

void* memcpy(void *dst, const void *src, unsigned int n) {
  return memmove(dst, src, n);
}

// -----------------------------------------------------------------------------
//  virtioblk legacy (MMIO) driver  dynamic queuesize & contiguous vring
// -----------------------------------------------------------------------------
//  * Handles any queue size Q (81024 on QEMU virt)
//  * Allocates one contiguous physical region for desc+avail+used
//  * Implements the full legacy featurenegotiation handshake
//  * Debug prints at init / before notify / after DMA
//  * Simple bump allocator & fs.img smoketest (256 sectors)
// -----------------------------------------------------------------------------
//  20250605   Public Domain / 0BSD

#include <stdint.h>
#include <stddef.h>

/* -----------------------------------------------------------
 *  board / device constants
 * ---------------------------------------------------------*/
#define VIRTIO_MMIO_BASE0   0x10001000UL
#define VIRTIO_MMIO_STRIDE  0x00001000UL
#define VIRTIO_MAX_SLOTS    8

#define SECTOR_SIZE         512
#define FSIMG_SECTORS       256          /* 128 KiB sample image */

/* legacy MMIO registers (offset) */
#define R_MAGIC              0x000
#define R_VERSION            0x004
#define R_DEVICE_ID          0x008
#define R_DEVICE_FEATURES    0x010
#define R_DRIVER_FEATURES    0x020
#define R_GPAGE_SZ           0x028
#define R_Q_SEL              0x030
#define R_Q_NUM              0x034
#define R_Q_ALIGN            0x038
#define R_Q_PFN              0x040
#define R_Q_NOTIFY           0x050
#define R_STATUS             0x070

#define S_ACK        1
#define S_DRIVER     2
#define S_FEATURES_OK 8   /* bit3 */
#define S_DRIVER_OK  4

/* -----------------------------------------------------------
 *  virtqueue structures (legacy layout)
 * ---------------------------------------------------------*/
struct virtq_desc {
    uint64_t addr;
    uint32_t len;
    uint16_t flags;
    uint16_t next;
} __attribute__((packed));

struct virtq_avail {
    uint16_t flags;
    uint16_t idx;
    uint16_t ring[];                /* flexible array */
} __attribute__((packed,aligned(2)));

struct virtq_used_elem { uint32_t id,len; } __attribute__((packed));
struct virtq_used {
    uint16_t flags;
    uint16_t idx;
    struct virtq_used_elem ring[];
} __attribute__((packed,aligned(4)));

#define F_NEXT   1
#define F_WRITE  2

struct virtio_blk_req {
    uint32_t type;
    uint32_t reserved;
    uint64_t sector;
} __attribute__((packed));
#define VBLK_T_IN 0

/* -----------------------------------------------------------
 *  simple bump allocator (4 KiB aligned pages)
 * ---------------------------------------------------------*/
extern char _end[];            /* provided by linker */
static uintptr_t bump = (uintptr_t)_end;

static void *kalloc_page(void)
{
    void *p = (void*)bump;
    bump = (bump + 4095) & ~4095UL;
    bump += 4096;
    return p;
}

static void *kalloc_pages(size_t npages)
{
    void *base = NULL;
    for(size_t i=0;i<npages;i++){
        void *pg = kalloc_page();
        if(i==0) base = pg;
    }
    return base;
}

/* -----------------------------------------------------------
 *  globals
 * ---------------------------------------------------------*/
static uint64_t vbase = 0;          /* MMIO base */
static uint32_t Q     = 0;          /* queue size */

static struct virtq_desc  *desc;
static struct virtq_avail *avail;
static struct virtq_used  *used;
static uint64_t            vq_phys; /* phys addr of contiguous region */
static uint8_t            *vq_area;

static uint16_t aidx = 0;           /* avail index */
static uint8_t  status_byte __attribute__((aligned(4)));
static uint8_t  dma_buf[SECTOR_SIZE] __attribute__((aligned(512)));

/* MMIO helpers */
static inline void mw32(uint64_t b,uint32_t o,uint32_t v){ *(volatile uint32_t*)(b+o)=v; }
static inline uint32_t mr32(uint64_t b,uint32_t o){ return *(volatile uint32_t*)(b+o); }

static void dbg(const char *tag)
{
    printf("[%s] PFN_drv=%lx PFN_dev=%x used.idx=%d  f0=%x f1=%x f2=%x  status=%x\n",
           tag,
           vq_phys>>12, mr32(vbase,R_Q_PFN), used->idx,
           desc[0].flags, desc[1].flags, desc[2].flags,
           mr32(vbase,R_STATUS));
}

/* -----------------------------------------------------------
 *  device & queue initialisation
 * ---------------------------------------------------------*/
void virtio_blk_init(void)
{
    /* 1. probe slots */
    for(int s=0;s<VIRTIO_MAX_SLOTS;s++){
        uint64_t base = VIRTIO_MMIO_BASE0 + s*VIRTIO_MMIO_STRIDE;
        if(mr32(base,R_MAGIC)!=0x74726976) continue;
        if(mr32(base,R_DEVICE_ID)==2){ vbase = base; break; }
    }
    if(!vbase){ puts("virtio-blk not found\n"); while(1);}  
    if(mr32(vbase,R_VERSION)!=1){ puts("not legacy mmio\n"); while(1);}  

    mw32(vbase,R_STATUS,0);
    mw32(vbase,R_STATUS, S_ACK | S_DRIVER);

    /* ---- feature negotiation --------------------------------------- */
    uint32_t devfeat = mr32(vbase, R_DEVICE_FEATURES); /* unused */
    (void)devfeat;
    mw32(vbase, R_DRIVER_FEATURES, 0);                 /* we claim no features */

    uint32_t st = mr32(vbase, R_STATUS) | S_FEATURES_OK;
    mw32(vbase, R_STATUS, st);
    if(!(mr32(vbase,R_STATUS) & S_FEATURES_OK)){
        puts("FEATURES_OK rejected\n");
        while(1);
    }

    mw32(vbase,R_GPAGE_SZ, 4096);
    mw32(vbase,R_Q_SEL,0);
    Q = mr32(vbase,R_Q_NUM);
    printf("device queue size = %d\n", Q);
    if(!Q || Q>1024){ puts("unsupported queue size\n"); while(1);}  

    /* ---- allocate contiguous region for desc + avail + used --------- */
    size_t sz_desc  = 16ULL * Q;
    size_t sz_avail = 4ULL + 2ULL * Q;
    size_t sz_used  = 4ULL + 8ULL * Q;
    size_t sz_total = sz_desc + sz_avail + sz_used;
    size_t npages   = (sz_total + 4095) >> 12;

    vq_area = kalloc_pages(npages);
    memset(vq_area, 0, npages*4096);

    desc  = (struct virtq_desc*)vq_area;
    avail = (struct virtq_avail*)(vq_area + sz_desc);
    used  = (struct virtq_used *)(vq_area + sz_desc + sz_avail);

    vq_phys = (uint64_t)(uintptr_t)vq_area;
    mw32(vbase,R_Q_ALIGN,4096);
    mw32(vbase,R_Q_PFN, (uint32_t)(vq_phys >> 12));

    /* ---- DRIVER_OK () ------------------------------------------ */
    mw32(vbase,R_STATUS, st | S_DRIVER_OK);
    dbg("init");
}

/* -----------------------------------------------------------
 *  sector read (blocking)
 * ---------------------------------------------------------*/
static inline void set_flags(uint16_t f0,uint16_t f1,uint16_t f2){ desc[0].flags=f0; desc[1].flags=f1; desc[2].flags=f2; }

void virtio_blk_read(uint64_t sector, void *dst)
{
    struct virtio_blk_req req = { .type = VBLK_T_IN, .sector = sector };
    status_byte = 0xFF;

    desc[0].addr = (uint64_t)&req;        desc[0].len = sizeof(req);       desc[0].next = 1;
    desc[1].addr = (uint64_t)dma_buf;     desc[1].len = SECTOR_SIZE;       desc[1].next = 2;
    desc[2].addr = (uint64_t)&status_byte;
    desc[2].len  = 1;
    /* flags will be set in one shot below */

    /* descriptor flags */
    set_flags(F_NEXT,                /* head  -> desc1 */
              F_NEXT | F_WRITE,      /* desc1 -> desc2, device writes */
              F_WRITE);              /* status byte, device writes   */

    /* add head (0) to avail ring */
    avail->ring[aidx % Q] = 0;
    __sync_synchronize();            /* ensure all descriptor writes visible */
    avail->idx = ++aidx;             /* publish */

    dbg("before notify");
    mw32(vbase, R_Q_NOTIFY, 0);      /* doorbell */

    /* busywait for device to set status_byte */
    while(status_byte == 0xFF)
        __sync_synchronize();

    dbg("after DMA");
    memcpy(dst, dma_buf, SECTOR_SIZE);
}

/* -----------------------------------------------------------
 *  fs.img reader for quick test
 * ---------------------------------------------------------*/
static uint8_t fsimg_buf[FSIMG_SECTORS * SECTOR_SIZE] __attribute__((aligned(4096)));

void read_fsimg(void)
{
    for(int i = 0; i < FSIMG_SECTORS; i++)
        virtio_blk_read(i, fsimg_buf + i * SECTOR_SIZE);

    printf("fs.img head: %02x %02x %02x %02x",
           fsimg_buf[0], fsimg_buf[1], fsimg_buf[2], fsimg_buf[3]);
}

/* ----------------------------------------------------------- */
#ifdef VIRTIO_FSIMG_TEST
extern void uart_init(void);
int main(void)
{
    uart_init();
    puts("--- virtioblk contiguousring demo ---\n");

    virtio_blk_init();
    read_fsimg();

    puts("done\n");
    while(1);
}
#endif

void timer_handler() {
}

void panic()
{
    puts("panic!");
}

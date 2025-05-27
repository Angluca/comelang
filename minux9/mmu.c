#include <stdint.h>

#define PTE_V (1L << 0)
#define PTE_R (1L << 1)
#define PTE_W (1L << 2)
#define PTE_X (1L << 3)
#define PTE_U (1L << 4)

#define VA2VPN(va, level) ((((uint64_t)(va)) >> (12 + (9 * level))) & 0x1FF)

#define MAXVA (1UL << (9 + 9 + 9 + 12 - 1))
#define PTE2PA(pte) (((pte) >> 10) << 12)
#define PA2PTE(pa) ((((uint64_t)pa) >> 12) << 10)
#define PTE_FLAGS(pte) ((pte) & 0x3FF)
#define PXMASK          0x1FF // 9 bits
#define PXSHIFT(level)  (PGSHIFT+(9*(level)))
#define PGSHIFT 12  // bits of offset within a page
#define PX(level, va) ((((uint64_t) (va)) >> PXSHIFT(level)) & PXMASK)

#define PGSIZE 4096 // bytes per page
#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

#define KERNBASE 0x80000000L
#define PHYSTOP (KERNBASE + 128*512*256)

typedef uint64_t pte_t;
typedef pte_t* pagetable_t; // 512
pagetable_t kernel_pagetable;
typedef uint64_t pde_t;
pte_t * walk(pagetable_t pagetable, uint64_t va, int alloc);

int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm);

typedef unsigned long  int size_t;

/*
void *calloc(size_t nmemb, size_t size);
void free(void *ptr);

void* kalloc()
{
    return calloc(1, PGSIZE);
}

void kfree(void* ptr)
{
    free(ptr);
}
*/

void freerange(void *pa_start, void *pa_end);

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.
void* memset(void *dst, int c, unsigned int n);

struct run {
  struct run *next;
};

struct {
//  struct spinlock lock;
  struct run *freelist;
} kmem;

void
kinit()
{
//  initlock(&kmem.lock, "kmem");
  freerange(_end, (void*)PHYSTOP);
}

void
kfree(void *pa);

void
freerange(void *pa_start, void *pa_end)
{
  char *p;
  p = (char*)PGROUNDUP((uint64_t)pa_start);
  for(; p + PGSIZE <= (char*)pa_end; p += PGSIZE)
    kfree(p);
}

// Free the page of physical memory pointed at by pa,
// which normally should have been returned by a
// call to kalloc().  (The exception is when
// initializing the allocator; see kinit above.)
void
kfree(void *pa)
{
  struct run *r;

  if(((uint64_t)pa % PGSIZE) != 0 || (char*)pa < _end || (uint64_t)pa >= PHYSTOP) {
      while(1);
  }

  // Fill with junk to catch dangling refs.
  memset(pa, 1, PGSIZE);

  r = (struct run*)pa;

//  acquire(&kmem.lock);
  r->next = kmem.freelist;
  kmem.freelist = r;
//  release(&kmem.lock);
}

// Allocate one 4096-byte page of physical memory.
// Returns a pointer that the kernel can use.
// Returns 0 if the memory cannot be allocated.
void *
kalloc(void)
{
  struct run *r;

  //acquire(&kmem.lock);
  r = kmem.freelist;
  if(r)
    kmem.freelist = r->next;
  //release(&kmem.lock);

  if(r)
    memset((char*)r, 5, PGSIZE); // fill with junk
  return (void*)r;
}

void* memset(void *dst, int c, unsigned int n);

extern void puts(const char* s);

int printf(const char* fmt, ...);

#define pa2kva(pa) ((void *)((uint64_t)(pa) + KERNBASE))
//#define pa2kva(pa) ((void *)((uint64_t)(pa) + KERNBASE))

pte_t * walk(pagetable_t pagetable, uint64_t va, int alloc)
{
    if(va >= MAXVA)
        puts("walk");

    for(int level = 2; level > 0; level--) {
printf("level %d PX(level, va) %x\n", level, PX(level, va));
        pte_t *pte = &pagetable[PX(level, va)];
printf("pte %x\n", *pte);
        if(*pte & PTE_V) {
            pagetable = (pagetable_t)PTE2PA(*pte);
printf("PTE2PA %p\n", PTE2PA(*pte));
        } else {
            if(!alloc || (pagetable = (pde_t*)kalloc()) == 0)
                return 0;
            memset(pagetable, 0, PGSIZE);
            *pte = PA2PTE(pagetable) | PTE_V;
        }
    }
    return &pagetable[PX(0, va)];
}


int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm);

void* memmove(void *dst, const void *src, unsigned int n);


int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm)
{
puts("mappages");
    uint64_t a, last;
    pte_t *pte;

    if((va % PGSIZE) != 0)
        puts("mappages: va not aligned");

    if((size % PGSIZE) != 0)
        puts("mappages: size not aligned");

    if(size == 0)
        puts("mappages: size");
  
    a = va;
    last = va + size - PGSIZE;
    for(;;){
        if((pte = walk(pagetable, a, 1)) == 0)
            return -1;
        if(*pte & PTE_V)
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n", va, *pte & 0x3FF, perm);
        *pte = PA2PTE(pa) | perm | PTE_V;
        if(a == last)
            break;
        a += PGSIZE;
        pa += PGSIZE;
    }
    return 0;
}

void dump_physical_memory(uint64_t pa, int count) {
    volatile uint32_t* ptr = (volatile uint32_t*)pa;

    for (int i = 0; i < count; i++) {
        if (i % 4 == 0)
            printf("%p: ", (uint64_t)(ptr + i));

        printf("%p ", ptr[i]);

        if (i % 4 == 3)
            puts("");
    }

    if (count % 4 != 0)
        puts("");
}

/*
void vmprint_rec(pagetable_t pagetable, int level) {
  for (int i = 0; i < 512; i++) {
    pte_t pte = pagetable[i];
    if (pte & PTE_V) {
      uint64 pa = PTE2PA(pte);
      for (int j = 0; j < level; j++)
        puts(".. ");
      printf("pte %d: pa %p\n", i, pa);


      if ((pte & (PTE_R | PTE_W | PTE_X)) != 0) {
        printf(" [leaf]");
      }
      printf(" flags: ");
      if (pte & PTE_R) printf("R");
      if (pte & PTE_W) printf("W");
      if (pte & PTE_X) printf("X");
      if (pte & PTE_U) printf("U");
      puts("");

      if ((pte & (PTE_R | PTE_W | PTE_X)) == 0) {
        vmprint_rec((pagetable_t)(pa), level + 1);
      }
    }
  }
}
*/

#define pa2kva(pa) ((void *)((uint64_t)(pa) + KERNBASE))

void vmprint_rec(pagetable_t pagetable, uint64_t va, int level) {
  for (int i = 0; i < 512; i++) {
    pte_t pte = pagetable[i];
    if (pte & PTE_V) {
      uint64_t pa = PTE2PA(pte);
      uint64_t child_va = va | ((uint64_t)i << (12 + 9 * (2 - level)));  // va

      for (int j = 0; j < level; j++)
        puts("\n.. ");
      printf("VA %p -> PA %p  (pte[%d]) (level %d)\n", child_va, pa, i, level);
      //dump_physical_memory(pa, 8);

      if ((pte & (PTE_R | PTE_W | PTE_X)) != 0) {
        printf(" [leaf]");
      }

      printf(" flags: ");
      if (pte & PTE_R) printf(" R");
      if (pte & PTE_W) printf(" W");
      if (pte & PTE_X) printf(" X");
      if (pte & PTE_U) printf(" U");
      puts("");

      if ((pte & (PTE_R | PTE_W | PTE_X)) == 0) {
        vmprint_rec((pagetable_t)pa, child_va, level + 1);
      }
    }
  }
}

void vmprint(pagetable_t pagetable) {
  puts("page table:\n");
  vmprint_rec(pagetable, 0, 0);
}

pagetable_t kernel_pagetable;

#define SATP_MODE_SV39 (8L << 60)

uint64_t make_satp(pagetable_t pagetable) {
    // pagetable は物理アドレスである必要がある
    uint64_t pa = (uint64_t)pagetable;
    return SATP_MODE_SV39 | (pa >> 12);
}

void enable_mmu(pagetable_t kernel_pagetable) {
    uint64_t satp = make_satp(kernel_pagetable);
    
    // SATP に書き込み（仮想メモリ有効化）
    asm volatile("csrw satp, %0" :: "r"(satp));
            
    // アドレス変換を反映
    asm volatile("sfence.vma zero, zero");
                    
    // mstatus は不要（SATPだけで切り替わる）
}

void mmu_init() {
    kernel_pagetable = (pagetable_t)kalloc();
    memset(kernel_pagetable, 0, PGSIZE);

    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < KERNBASE + PGSIZE*20; addr += PGSIZE) {
        mappages(kernel_pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V);
    }

    // UART
    mappages(kernel_pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V);
    
//    enable_mmu(kernel_pagetable);
}

pagetable_t create_pagetable()
{
    pagetable_t user_pagetable = (pagetable_t)kalloc();
    memset(user_pagetable, 0, PGSIZE);
    
    return user_pagetable;
}

void user_mmu_init(pagetable_t user_pagetable)
{
    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < KERNBASE + PGSIZE*20; addr += PGSIZE) {
        mappages(user_pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V);
    }

    // UART
    mappages(user_pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V);
}

#include "elf.h"
#include "userprog.h" // user_bin, user_bin_len

void* memcpy(void *dst, const void *src, unsigned int n);
// 仮想アドレス va に対応する物理アドレスを返す。
// 対応するPTEが存在しない or 有効でない or Uビットなし → NULLを返す。
void* walkaddr(pagetable_t pagetable, uint64_t va) {
    pte_t *pte = walk(pagetable, va, 0);
    if (pte == 0)
        return 0;
    if ((*pte & PTE_V) == 0)
        return 0;
    if ((*pte & PTE_U) == 0)
        return 0;
    uint64_t pa = PTE2PA(*pte);
    return (void*)(pa + (va & (PGSIZE - 1)));  // ページ内オフセットを足す
}

int copyout(pagetable_t pagetable, uint64_t dstva, void *src, uint64_t len) {
    uint64_t va0 = PGROUNDDOWN(dstva);
    uint64_t off = dstva - va0;
    char *pa;

    while (len > 0) {
        if ((pa = walkaddr(pagetable, va0)) == 0)
            return -1;
        uint64_t n = PGSIZE - off;
        if (n > len) n = len;

        memcpy(pa + off, src, n);
        len -= n;
        src += n;
        va0 += PGSIZE;
        off = 0;
    }
    return 0;
}

uint64_t load_program(pagetable_t pagetable)
{
    struct elfhdr *eh = (struct elfhdr *)user_elf;
    if (eh->magic != ELF_MAGIC)
        return -1;
        
    struct proghdr *ph = (struct proghdr *)(user_elf + eh->phoff);
    
    for (int i = 0; i < eh->phnum; i++, ph++) {
        if (ph->type != ELF_PROG_LOAD)
            continue;

        for (uint64_t va = ph->vaddr; va < ph->vaddr + ph->memsz; va += PGSIZE) {
            void *pa = kalloc();
            memset(pa, 0, PGSIZE);
            mappages(pagetable, va, PGSIZE, (uint64_t)pa, PTE_U | PTE_R | PTE_W | PTE_X | PTE_V);
        }

/*
        // load data
//        memcpy((void*)ph->vaddr, user_elf + ph->off, ph->filesz);
        // セグメントを仮想メモリにコピー（仮想アドレスへ）
        if (copyout(pagetable, ph->vaddr, user_elf + ph->off, ph->filesz) < 0)
            return -1;
*/
        
        void* dst = walkaddr(pagetable, ph->vaddr);
        memcpy(dst, user_elf + ph->off, ph->filesz);
    }
    
    return (uint64_t)eh->entry;
}

void mmu_test()
{
    kinit();
    kernel_pagetable = (pagetable_t)kalloc();
    memset(kernel_pagetable, 0, PGSIZE);
    
    uint64_t va = 0x80000000;         // 任意の仮想アドレス
    uint64_t pa = 0x90000000;     // 任意の物理アドレス（未使用領域ならOK）
    uint64_t va2 = 0x80010000;         // 任意の仮想アドレス
    uint64_t pa2 = 0x90010000;     // 任意の物理アドレス（未使用領域ならOK）
            
    mappages(kernel_pagetable, va, PGSIZE, pa, PTE_R | PTE_W | PTE_V | PTE_U);
    mappages(kernel_pagetable, va2, PGSIZE, pa2, PTE_R | PTE_W | PTE_V | PTE_U);
    printf("Mapped VA 0x%lx -> PA 0x%lx\n", va, pa);
    
    vmprint(kernel_pagetable);
    puts("\n");
    
    
    void* va_ptr = walkaddr(kernel_pagetable, va);
    if (va_ptr)
        printf("SUCCESS VA 0x80000000 maps to PA %p\n", va_ptr);
    else
        puts("walkaddr failed\n");
        
    void* va_ptr2 = walkaddr(kernel_pagetable, va2);
    if (va_ptr)
        printf("SUCCESS VA 0x80010000 maps to PA %p\n", va_ptr2);
    else
        puts("walkaddr failed\n");
}

#include <comelang.h>

struct context {
  uint64_t ra;
  uint64_t sp;
  uint64_t gp;
  uint64_t tp;
  uint64_t t0;
  uint64_t t1;
  uint64_t t2;
  uint64_t t3;
  uint64_t t4;
  uint64_t t5;
  uint64_t t6;
  uint64_t a0;
  uint64_t a1;
  uint64_t a2;
  uint64_t a3;
  uint64_t a4;
  uint64_t a5;
  uint64_t a6;
  uint64_t a7;
  uint64_t s0;
  uint64_t s1;
  uint64_t s2;
  uint64_t s3;
  uint64_t s4;
  uint64_t s5;
  uint64_t s6;
  uint64_t s7;
  uint64_t s8;
  uint64_t s9;
  uint64_t s10;
  uint64_t s11;
  uint64_t mepc;
};

struct cpu  {
    struct proc *proc;          // The process running on this cpu, or null.
    struct context context;     // swtch() here to enter scheduler().
};

struct cpu gCPU;

typedef uint64_t pte_t;
typedef pte_t* pagetable_t; // 512

struct proc {
    struct context context;      // swtch() here to run process
    struct proc *parent;         // Parent process
    char* stack;
    
    pagetable_t pagetable;
};

#define NPROC 128

struct proc* gProc[NPROC];

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.
extern char _code_end[]; // first address after kernel.
extern char stack_top[]; // first address after kernel.

#define HEAP_END (_end + PGSIZE * 256)

int gActiveProc = 0;
int gNumProc = 0;

volatile int gCountTask1 = 0;
volatile int gCountTask2 = 0;

void user_mmu_init(pagetable_t user_pagetable);
pagetable_t create_pagetable();

struct proc* alloc_proc(void (*task)()) {
    struct proc* result = calloc(1, sizeof(struct proc));
    
    memset(result, 0, sizeof(struct proc));
    
    result->stack = calloc(1, 256);
    
    result->context.sp = (uint64_t)(result->stack + 256);
    result->context.ra = (uint64_t)task;
    
    result->pagetable = create_pagetable();
    
    user_mmu_init(result->pagetable);

    gProc[gNumProc++] = result;

    return result;
}

uint64_t load_program(pagetable_t pagetable);

void alloc_prog() 
{
    struct proc* result = calloc(1, sizeof(struct proc));
    
    memset(result, 0, sizeof(struct proc));
    
    result->stack = calloc(1, 256);
    
    result->context.sp = (uint64_t)(result->stack + 256);

    gProc[gNumProc++] = result;
    
    result->pagetable = create_pagetable();
    
    result->context.ra = load_program(result->pagetable);
    
    user_mmu_init(result->pagetable);
}

void load_context(struct context*);
void save_context(struct context*);

void* memset(void *dst, int c, unsigned int n);

void reset_watchdog();
extern volatile char last_key;
void putc(char c);

struct proc* p;
uintptr_t saved_ra;
uintptr_t saved_sp;

void enable_mmu(pagetable_t kernel_pagetable);

void yield() {
    asm volatile ("mv %0, ra" : "=r"(saved_ra));
    asm volatile ("mv %0, sp" : "=r"(saved_sp));
    
    p = gProc[gActiveProc];
    
    save_context(&p->context);
    
    p->context.ra = saved_ra;
    p->context.sp = saved_sp + 16;

    gActiveProc++;
    if(gActiveProc >= gNumProc) {
        gActiveProc = 0;
    }

    if(last_key) {
        putc(last_key);
        last_key = 0;
    }

    reset_watchdog();

    p = gProc[gActiveProc];
    
    enable_mmu(p->pagetable);

    load_context(&p->context);
}


void task1() {
    while(1) {
        puts("1\n");
        puts("[1B]\n");
        puts("[1C]\n");
        puts("[1D]\n");
        "ABCABC".puts();
        {
            var a = s"123";
            puts(a);
            //puts(a.to_string());
        }
        gCountTask1++;
        yield();
    }
}

void task2() {
    while(1) {
        puts("2\n");
        puts("[2B]\n");
        puts("[2C]\n");
        puts("[2D]\n");
        "ABCD".puts();
        {
            var a = s"123";
            puts(a);
            //puts(a.to_string());
        }
        gCountTask2++;
        yield();
    }
}

void plic_init();
void uart_init();
void trap_init();
void uart_rx_init();
void puts_direct(const char* s);

void mmu_init();

#define UART_IRQ 10

void plic_enable(int irq);
void mmu_init();

void mmu_test();
void kinit();

int main()
{
    trap_init();           // mtvecにtrap handler設定
    plic_init();
    plic_enable(UART_IRQ);
    uart_init();
    kinit();
    mmu_init();
    
/*
mmu_test();
a:goto a;
*/
    
    //alloc_prog();
    
    alloc_proc(task1);
    alloc_proc(task2);
    
    char buf[128];
    snprintf(buf, 128, "%d\n", 1+1);
    puts(buf);
    puts(xsprintf("%d\n", 1+1));
    
    struct proc *p = gProc[gActiveProc];
    
    load_context(&p->context);

    while (1);
}

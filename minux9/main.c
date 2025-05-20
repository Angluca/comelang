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

struct proc {
    struct context context;      // swtch() here to run process
    struct proc *parent;         // Parent process
    char* stack;
};

#define NPROC 128

struct proc* gProc[NPROC];

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.

#define HEAP_END (_end + PGSIZE * 256)

int gActiveProc = 0;
int gNumProc = 0;

volatile int gCountTask1 = 0;
volatile int gCountTask2 = 0;

struct proc* alloc_proc(void (*task)()) {
    struct proc* result = calloc(1, sizeof(struct proc));
    
    memset(result, 0, sizeof(struct proc));
    
    result->stack = calloc(1, 256);
    
    result->context.sp = (uint64_t)(result->stack + 256);
    result->context.mepc = (uint64_t)task;

    gProc[gNumProc++] = result;

    return result;
}

void swtch(struct context*, struct context*);
void scheduler();

void yield() {
    gActiveProc++;
    if(gActiveProc >= gNumProc) {
        gActiveProc = 0;
    }
    scheduler();
}

void scheduler() {
    struct proc *p = gProc[gActiveProc];

    swtch(&gCPU.context, &p->context);
}

void task1() {
    while(1) {
        puts("[1A]\n");
        puts("[1B]\n");
        puts("[1C]\n");
        puts("[1D]\n");
        //"ABC".puts();
        gCountTask1++;
        yield();
    }
}

void task2() {
    while(1) {
        puts("[2A]\n");
        puts("[2B]\n");
        puts("[2C]\n");
        puts("[2D]\n");
        //"ABC".puts();
        gCountTask2++;
        yield();
    }
}

void plic_init();
void uart_init();
void trap_init();
void uart_rx_init();
void puts_direct(const char* s);

#define UART_IRQ 10

void plic_enable(int irq);

int main()
{
    trap_init();           // mtvecにtrap handler設定
    plic_init();
    plic_enable(UART_IRQ);
    uart_init();
    puts_direct("[1A]\n");
    
    alloc_proc(task1);
    alloc_proc(task2);
    
    scheduler();

    while (1);
}

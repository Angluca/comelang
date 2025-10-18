/// previous struct definition ///
struct __sFILEX;

struct _xlocale;

struct re_program;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

/// struct definition ///
typedef char* string;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long __int64_t;

typedef unsigned long  long __uint64_t;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
};

typedef union anonymous_typeZ1 __mbstate_t;

typedef union anonymous_typeZ1 __darwin_mbstate_t;

typedef long  int __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int __darwin_rune_t;

typedef int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int __darwin_socklen_t;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long long __darwin_blkcnt_t;

typedef int __darwin_blksize_t;

typedef int __darwin_dev_t;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int __darwin_gid_t;

typedef unsigned int __darwin_id_t;

typedef unsigned long  long __darwin_ino64_t;

typedef unsigned long  long __darwin_ino_t;

typedef unsigned int __darwin_mach_port_name_t;

typedef unsigned int __darwin_mach_port_t;

typedef unsigned short int __darwin_mode_t;

typedef long long __darwin_off_t;

typedef int __darwin_pid_t;

typedef unsigned int __darwin_sigset_t;

typedef int __darwin_suseconds_t;

typedef unsigned int __darwin_uid_t;

typedef unsigned int __darwin_useconds_t;

typedef unsigned char __darwin_uuid_t[16];

typedef char __darwin_uuid_string_t[37];

struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec* __next;
};

struct _opaque_pthread_attr_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_cond_t
{
    long __sig;
    char __opaque[40];
};

struct _opaque_pthread_condattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_mutex_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_mutexattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_once_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_rwlock_t
{
    long __sig;
    char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t
{
    long __sig;
    char __opaque[16];
};

struct _opaque_pthread_t
{
    long __sig;
    struct __darwin_pthread_handler_rec* __cleanup_stack;
    char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;

typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;

typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;

typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;

typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;

typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;

typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;

typedef struct _opaque_pthread_t* __darwin_pthread_t;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int __darwin_wctype_t;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  long u_int64_t;

typedef long long register_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef unsigned long  long user_addr_t;

typedef unsigned long  long user_size_t;

typedef long long user_ssize_t;

typedef long long user_long_t;

typedef unsigned long  long user_ulong_t;

typedef long long user_time_t;

typedef long long user_off_t;

typedef unsigned long  long syscall_arg_t;

typedef unsigned long  int size_t;

typedef long long fpos_t;

struct __sbuf
{
    unsigned char* _base;
    int _size;
};

struct __sFILE
{
    unsigned char* _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void* _cookie;
    int (*_close)(void*);
    int (*_read)(void*,char*,int);
    long long (*_seek)(void*,long long,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf _ub;
    struct __sFILEX* _extra;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    long long _offset;
};

typedef struct __sFILE FILE;

extern struct __sFILE* __stdinp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern struct __sFILE* __stdoutp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern struct __sFILE* __stderrp __attribute__((__swift_attr__("nonisolated(unsafe)")));
typedef long long off_t;

typedef long ssize_t;

extern const int sys_nerr;
extern const char* sys_errlist[];
enum anonymous_typeY1 { P_ALL
,P_PID
,P_PGID
};

typedef enum anonymous_typeY1 idtype_t;

typedef int pid_t;

typedef unsigned int id_t;

typedef int sig_atomic_t;

struct __darwin_arm_exception_state
{
    unsigned int __exception;
    unsigned int __fsr;
    unsigned int __far;
};

struct __darwin_arm_exception_state64
{
    unsigned long  long __far;
    unsigned int __esr;
    unsigned int __exception;
};

struct __darwin_arm_exception_state64_v2
{
    unsigned long  long __far;
    unsigned long  long __esr;
};

struct __darwin_arm_thread_state
{
    unsigned int __r[13];
    unsigned int __sp;
    unsigned int __lr;
    unsigned int __pc;
    unsigned int __cpsr;
};

struct __darwin_arm_thread_state64
{
    unsigned long  long __x[29];
    unsigned long  long __fp;
    unsigned long  long __lr;
    unsigned long  long __sp;
    unsigned long  long __pc;
    unsigned int __cpsr;
    unsigned int __pad;
};

struct __darwin_arm_vfp_state
{
    unsigned int __r[64];
    unsigned int __fpscr;
};

struct __darwin_arm_neon_state64
{
    __uint128_t __v[32];
    unsigned int __fpsr;
    unsigned int __fpcr;
};

struct __darwin_arm_neon_state
{
    __uint128_t __v[16];
    unsigned int __fpsr;
    unsigned int __fpcr;
};

struct __arm_pagein_state
{
    int __pagein_error;
};

struct __darwin_arm_sme_state
{
    unsigned long  long __svcr;
    unsigned long  long __tpidr2_el0;
    unsigned short int __svl_b;
};

struct __darwin_arm_sve_z_state
{
    char __z[16][256];
} __attribute__((aligned(4)));

struct __darwin_arm_sve_p_state
{
    char __p[16][256/8];
} __attribute__((aligned(4)));

struct __darwin_arm_sme_za_state
{
    char __za[4096];
} __attribute__((aligned(4)));

struct __darwin_arm_sme2_state
{
    char __zt0[64];
} __attribute__((aligned(4)));

struct __arm_legacy_debug_state
{
    unsigned int __bvr[16];
    unsigned int __bcr[16];
    unsigned int __wvr[16];
    unsigned int __wcr[16];
};

struct __darwin_arm_debug_state32
{
    unsigned int __bvr[16];
    unsigned int __bcr[16];
    unsigned int __wvr[16];
    unsigned int __wcr[16];
    unsigned long  long __mdscr_el1;
};

struct __darwin_arm_debug_state64
{
    unsigned long  long __bvr[16];
    unsigned long  long __bcr[16];
    unsigned long  long __wvr[16];
    unsigned long  long __wcr[16];
    unsigned long  long __mdscr_el1;
};

struct __darwin_arm_cpmu_state64
{
    unsigned long  long __ctrs[16];
};

struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state __es;
    struct __darwin_arm_thread_state __ss;
    struct __darwin_arm_vfp_state __fs;
};

struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64 __es;
    struct __darwin_arm_thread_state64 __ss;
    struct __darwin_arm_neon_state64 __ns;
};

typedef struct __darwin_mcontext64* mcontext_t;

typedef struct _opaque_pthread_attr_t pthread_attr_t;

struct __darwin_sigaltstack
{
    void* ss_sp;
    unsigned long  int ss_size;
    int ss_flags;
};

typedef struct __darwin_sigaltstack stack_t;

struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int uc_sigmask;
    struct __darwin_sigaltstack uc_stack;
    struct __darwin_ucontext* uc_link;
    unsigned long  int uc_mcsize;
    struct __darwin_mcontext64* uc_mcontext;
};

typedef struct __darwin_ucontext ucontext_t;

typedef unsigned int sigset_t;

typedef unsigned int uid_t;

union sigval
{
int sival_int;
void* sival_ptr;
};

struct sigevent
{
    int sigev_notify;
    int sigev_signo;
    union sigval sigev_value;
    void (*sigev_notify_function)(union sigval);
    struct _opaque_pthread_attr_t* sigev_notify_attributes;
};

struct __siginfo
{
    int si_signo;
    int si_errno;
    int si_code;
    int si_pid;
    unsigned int si_uid;
    int si_status;
    void* si_addr;
    union sigval si_value;
    long si_band;
    unsigned long  int __pad[7];
};

typedef struct __siginfo siginfo_t;

union __sigaction_u
{
void (*__sa_handler)(int);
void (*__sa_sigaction)(int,struct __siginfo*,void*);
};

struct __sigaction
{
    union __sigaction_u __sigaction_u;
    void (*sa_tramp)(void*,int,int,struct __siginfo*,void*);
    unsigned int sa_mask;
    int sa_flags;
};

struct sigaction
{
    union __sigaction_u __sigaction_u;
    unsigned int sa_mask;
    int sa_flags;
};

typedef void (*sig_t)(int);

struct sigvec
{
    void (*sv_handler)(int);
    int sv_mask;
    int sv_flags;
};

struct sigstack
{
    char* ss_sp;
    int ss_onstack;
};

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef char int_least8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef long long int_least64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short int uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long  long uint_least64_t;

typedef char int_fast8_t;

typedef short int_fast16_t;

typedef int int_fast32_t;

typedef long long int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned short int uint_fast16_t;

typedef unsigned int uint_fast32_t;

typedef unsigned long  long uint_fast64_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

struct timeval
{
    long tv_sec;
    int tv_usec;
};

typedef unsigned long  long rlim_t;

struct rusage
{
    struct timeval ru_utime;
    struct timeval ru_stime;
    long ru_maxrss;
    long ru_ixrss;
    long ru_idrss;
    long ru_isrss;
    long ru_minflt;
    long ru_majflt;
    long ru_nswap;
    long ru_inblock;
    long ru_oublock;
    long ru_msgsnd;
    long ru_msgrcv;
    long ru_nsignals;
    long ru_nvcsw;
    long ru_nivcsw;
};

typedef void* rusage_info_t;

struct rusage_info_v0
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
};

struct rusage_info_v1
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
};

struct rusage_info_v2
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
};

struct rusage_info_v3
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
};

struct rusage_info_v4
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
};

struct rusage_info_v5
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
    unsigned long  long ri_flags;
};

struct rusage_info_v6
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
    unsigned long  long ri_flags;
    unsigned long  long ri_user_ptime;
    unsigned long  long ri_system_ptime;
    unsigned long  long ri_pinstructions;
    unsigned long  long ri_pcycles;
    unsigned long  long ri_energy_nj;
    unsigned long  long ri_penergy_nj;
    unsigned long  long ri_secure_time_in_system;
    unsigned long  long ri_secure_ptime_in_system;
    unsigned long  long ri_neural_footprint;
    unsigned long  long ri_lifetime_max_neural_footprint;
    unsigned long  long ri_interval_max_neural_footprint;
    unsigned long  long ri_reserved[9];
};

typedef struct rusage_info_v6 rusage_info_current;

struct rlimit
{
    unsigned long  long rlim_cur;
    unsigned long  long rlim_max;
};

struct proc_rlimit_control_wakeupmon
{
    unsigned int wm_flags;
    int wm_rate;
};

struct anonymous_typeX2
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};

struct anonymous_typeX3
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};

union wait
{
int w_status;
struct anonymous_typeX2 w_T;
struct anonymous_typeX3 w_S;
};

typedef int ct_rune_t;

typedef int rune_t;

typedef int wchar_t;

struct anonymous_typeX4
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX4 div_t;

struct anonymous_typeX5
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX5 ldiv_t;

struct anonymous_typeX6
{
    long long quot;
    long long rem;
};

typedef struct anonymous_typeX6 lldiv_t;

extern int __mb_cur_max;
typedef unsigned long  long malloc_type_id_t;

typedef struct _malloc_zone_t malloc_zone_t;

typedef int dev_t;

typedef unsigned short int mode_t;

extern char* suboptarg;
typedef unsigned long  int rsize_t;

typedef int errno_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef struct _xlocale* locale_t;

struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_n_cs_precedes;
    char int_p_sep_by_space;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

typedef int wint_t;

struct anonymous_typeX7
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};

typedef struct anonymous_typeX7 _RuneEntry;

struct anonymous_typeX8
{
    int __nranges;
    struct anonymous_typeX7* __ranges;
};

typedef struct anonymous_typeX8 _RuneRange;

struct anonymous_typeX9
{
    char __name[14];
    unsigned int __mask;
};

typedef struct anonymous_typeX9 _RuneCharClass;

struct anonymous_typeX10
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long  int,char**);
    int (*__sputrune)(int,char*,unsigned long  int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct anonymous_typeX8 __runetype_ext;
    struct anonymous_typeX8 __maplower_ext;
    struct anonymous_typeX8 __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct anonymous_typeX9* __charclasses;
};

typedef struct anonymous_typeX10 _RuneLocale;

extern struct anonymous_typeX10 _DefaultRuneLocale;
extern struct anonymous_typeX10* _CurrentRuneLocale;
struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
    char* class_name;
};

extern struct sMemHeader* gAllocMem;

extern int gComeDebugLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char* item;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

typedef struct re_program* re_t;

struct re_capture
{
    int start;
    int length;
};

typedef struct re_capture re_capture;

enum { UNUSED
,DOT
,BEGIN
,END
,QUESTIONMARK
,STAR
,PLUS
,CHAR
,CHAR_CLASS
,INV_CHAR_CLASS
,DIGIT
,NOT_DIGIT
,ALPHA
,NOT_ALPHA
,WHITESPACE
,NOT_WHITESPACE
,GROUP
};

typedef struct regex_t regex_t;

struct anonymous_typeX12
{
    struct regex_t* first;
    int id;
};

union anonymous_typeZ11
{
unsigned char ch;
unsigned char* ccl;
struct anonymous_typeX12 group;
};

struct anonymous_typeX14
{
    struct regex_t* first;
    int id;
};

union anonymous_typeZ13
{
unsigned char ch;
unsigned char* ccl;
struct anonymous_typeX14 group;
};

struct regex_t
{
    unsigned char type;
    union anonymous_typeZ13 u;
    struct regex_t* next;
};

struct re_program
{
    struct regex_t* start;
    int group_count;
};

typedef struct re_program regex_program_t;

struct anonymous_typeX15
{
    struct regex_t* pool;
    int pool_capacity;
    int pool_size;
    unsigned char* ccl_buf;
    int ccl_capacity;
    int ccl_idx;
    int group_count;
};

typedef struct anonymous_typeX15 compiler_state;

struct anonymous_typeX16
{
    const char* base;
    struct re_capture* captures;
    int capture_capacity;
    int total_groups;
};

typedef struct anonymous_typeX16 match_context;

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
extern _Bool gComeBareMetal;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    int (*sline_real)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
    _Bool (*no_mutex)(void*);
};

struct tuple2$2char$phsType$ph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1tuple2$2char$phsType$ph$ph
{
    struct tuple2$2char$phsType$ph* item;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev;
    struct list_item$1tuple2$2char$phsType$ph$ph* next;
};

struct list$1tuple2$2char$phsType$ph$ph
{
    struct list_item$1tuple2$2char$phsType$ph$ph* head;
    struct list_item$1tuple2$2char$phsType$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
};

struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    _Bool mUniq;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName;
    char* mAttribute;
};

struct list_item$1sType$ph
{
    struct sType* item;
    struct list_item$1sType$ph* prev;
    struct list_item$1sType$ph* next;
};

struct list$1sType$ph
{
    struct list_item$1sType$ph* head;
    struct list_item$1sType$ph* tail;
    int len;
    struct list_item$1sType$ph* it;
};

struct list_item$1sNode$ph
{
    struct sNode* item;
    struct list_item$1sNode$ph* prev;
    struct list_item$1sNode$ph* next;
};

struct list$1sNode$ph
{
    struct list_item$1sNode$ph* head;
    struct list_item$1sNode$ph* tail;
    int len;
    struct list_item$1sNode$ph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mOriginalLoadVarType;
    struct sType* mChannelType;
    struct list$1sType$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    char* mTupleName;
    char* mAttribute;
    char* mVarAttribute;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mThreadLocal;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mTask;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    struct list$1sNode$ph* mArrayNum;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    int mArrayPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    _Bool mDefferRightValue;
    struct sNode* mTypeOfNode;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    _Bool mComma;
    char* mFunName;
};

struct list_item$1sVar$ph
{
    struct sVar* item;
    struct list_item$1sVar$ph* prev;
    struct list_item$1sVar$ph* next;
};

struct list$1sVar$ph
{
    struct list_item$1sVar$ph* head;
    struct list_item$1sVar$ph* tail;
    int len;
    struct list_item$1sVar$ph* it;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct list$1sVar$ph* mAllVar;
    struct sBlock* mBlock;
    char* mTextBlock;
    char* mTextBlockSName;
    int mTextBlockSline;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    _Bool mConstFun;
    char* mAttribute;
    char* mFunAttribute;
    _Bool mGenericsFun;
    _Bool mImmutable;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
    _Bool mConstFun;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2char$phchar$ph* mHeader;
    struct map$2char$phchar$ph* mHeaderStructs;
};

struct map$2char$phsVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
    struct sVarTable* mVarTable;
    _Bool mOmitSemicolon;
};

struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
    _Bool mStored;
    _Bool mDecrementRefCount;
    struct sType* mObjType;
    char* mObjValue;
    struct sVar* mObjVar;
    _Bool mNoFree;
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1char$ph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2char$phsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObject$ph* prev;
    struct list_item$1sRightValueObject$ph* next;
};

struct list$1sRightValueObject$ph
{
    struct list_item$1sRightValueObject$ph* head;
    struct list_item$1sRightValueObject$ph* tail;
    int len;
    struct list_item$1sRightValueObject$ph* it;
};

struct list_item$1CVALUE$ph
{
    struct CVALUE* item;
    struct list_item$1CVALUE$ph* prev;
    struct list_item$1CVALUE$ph* next;
};

struct list$1CVALUE$ph
{
    struct list_item$1CVALUE$ph* head;
    struct list_item$1CVALUE$ph* tail;
    int len;
    struct list_item$1CVALUE$ph* it;
};

struct sInfo
{
    char* p;
    char* head;
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
    _Bool undefined_array_num_var;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsFun$ph* uniq_funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsClassModule$ph* modules;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType* impl_type;
    struct sType* class_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    _Bool define_struct;
    _Bool in_typedef;
    _Bool in_loop;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    _Bool output_header_file;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2char$phchar$ph* module_params;
    _Bool constructor_;
    struct sClass* defining_class;
    _Bool array_initializer;
    _Bool struct_initializer;
    _Bool va_arg;
    _Bool in_fun_param;
    _Bool inhibits_output_code;
    _Bool inhibits_output_code2;
    _Bool in_generics_fun;
    _Bool in_clone_object;
    _Bool in_conditional_operator;
    char* if_result_var_name;
    struct list$1sVar$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool emb_cpp;
    _Bool gcc_compiler;
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
    _Bool in_offsetof;
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2char$phsGenericsFun$p
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sType$phchar$phbool$
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2char$phchar$ph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2char$phbool$
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct tuple3$3sType$phchar$phsNode$ph* item;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
};

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
};

struct tuple2$2char$phsNode$ph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2char$phsNode$ph$ph
{
    struct tuple2$2char$phsNode$ph* item;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2char$phsNode$ph$ph* next;
};

struct list$1tuple2$2char$phsNode$ph$ph
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* head;
    struct list_item$1tuple2$2char$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
};

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
int printf(const char* anonymous_var_nameX15, ...);
void clearerr(struct __sFILE* anonymous_var_nameX32);
int fclose(struct __sFILE* anonymous_var_nameX33);
int feof(struct __sFILE* anonymous_var_nameX34);
int ferror(struct __sFILE* anonymous_var_nameX35);
int fflush(struct __sFILE* anonymous_var_nameX36);
int fgetc(struct __sFILE* anonymous_var_nameX37);
int fgetpos(struct __sFILE* anonymous_var_nameX38, long long* anonymous_var_nameX39);
char* fgets(char* anonymous_var_nameX40, int __size, struct __sFILE* anonymous_var_nameX41);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX42, const char* anonymous_var_nameX43, ...);
int fputc(int anonymous_var_nameX44, struct __sFILE* anonymous_var_nameX45);
int fputs(const char* anonymous_var_nameX46, struct __sFILE* anonymous_var_nameX47);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX48, const char* anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fscanf(struct __sFILE* anonymous_var_nameX51, const char* anonymous_var_nameX52, ...);
int fseek(struct __sFILE* anonymous_var_nameX53, long anonymous_var_nameX54, int anonymous_var_nameX55);
int fsetpos(struct __sFILE* anonymous_var_nameX56, const long long* anonymous_var_nameX57);
long ftell(struct __sFILE* anonymous_var_nameX58);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX59);
int getchar();
char* gets(char* anonymous_var_nameX60);
void perror(const char* anonymous_var_nameX61);
int putc(int anonymous_var_nameX62, struct __sFILE* anonymous_var_nameX63);
int putchar(int anonymous_var_nameX64);
int puts(const char* anonymous_var_nameX65);
int remove(const char* anonymous_var_nameX66);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX67);
int scanf(const char* anonymous_var_nameX68, ...);
void setbuf(struct __sFILE* anonymous_var_nameX69, char* anonymous_var_nameX70);
int setvbuf(struct __sFILE* anonymous_var_nameX71, char* anonymous_var_nameX72, int anonymous_var_nameX73, unsigned long  int __size);
int sprintf(char* anonymous_var_nameX74, const char* anonymous_var_nameX75, ...);
int sscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, ...);
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX78);
int ungetc(int anonymous_var_nameX79, struct __sFILE* anonymous_var_nameX80);
int vfprintf(struct __sFILE* anonymous_var_nameX81, const char* anonymous_var_nameX82, va_list anonymous_var_nameX83);
int vprintf(const char* anonymous_var_nameX84, va_list anonymous_var_nameX85);
int vsprintf(char* anonymous_var_nameX86, const char* anonymous_var_nameX87, va_list anonymous_var_nameX88);
char* ctermid(char* anonymous_var_nameX89);
struct __sFILE* fdopen(int anonymous_var_nameX90, const char* anonymous_var_nameX91);
int fileno(struct __sFILE* anonymous_var_nameX92);
int pclose(struct __sFILE* anonymous_var_nameX93);
struct __sFILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);
int __srget(struct __sFILE* anonymous_var_nameX96);
int __svfscanf(struct __sFILE* anonymous_var_nameX97, const char* anonymous_var_nameX98, va_list anonymous_var_nameX99);
int __swbuf(int anonymous_var_nameX100, struct __sFILE* anonymous_var_nameX101);
void flockfile(struct __sFILE* anonymous_var_nameX102);
int ftrylockfile(struct __sFILE* anonymous_var_nameX103);
void funlockfile(struct __sFILE* anonymous_var_nameX104);
int getc_unlocked(struct __sFILE* anonymous_var_nameX105);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX106, struct __sFILE* anonymous_var_nameX107);
int putchar_unlocked(int anonymous_var_nameX108);
int getw(struct __sFILE* anonymous_var_nameX109);
int putw(int anonymous_var_nameX110, struct __sFILE* anonymous_var_nameX111);
char* tempnam(const char* __dir, const char* __prefix);
int fseeko(struct __sFILE* __stream, long long __offset, int __whence);
long long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX112);
int vscanf(const char* __format, va_list anonymous_var_nameX113);
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX114);
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX115);
int dprintf(int anonymous_var_nameX116, const char* anonymous_var_nameX117, ...);
int vdprintf(int anonymous_var_nameX118, const char* anonymous_var_nameX119, va_list anonymous_var_nameX120);
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep);
int asprintf(char** anonymous_var_nameX121, const char* anonymous_var_nameX122, ...);
char* ctermid_r(char* anonymous_var_nameX123);
char* fgetln(struct __sFILE* anonymous_var_nameX124, unsigned long  int* __len);
const char* fmtcheck(const char* anonymous_var_nameX125, const char* anonymous_var_nameX126);
int fpurge(struct __sFILE* anonymous_var_nameX127);
void setbuffer(struct __sFILE* anonymous_var_nameX128, char* anonymous_var_nameX129, int __size);
int setlinebuf(struct __sFILE* anonymous_var_nameX130);
int vasprintf(char** anonymous_var_nameX131, const char* anonymous_var_nameX132, va_list anonymous_var_nameX133);
struct __sFILE* funopen(const void* anonymous_var_nameX134, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX163, unsigned int anonymous_var_nameX164);
int getiopolicy_np(int anonymous_var_nameX165, int anonymous_var_nameX166);
int getrlimit(int anonymous_var_nameX167, struct rlimit* anonymous_var_nameX168);
int getrusage(int anonymous_var_nameX169, struct rusage* anonymous_var_nameX170);
int setpriority(int anonymous_var_nameX171, unsigned int anonymous_var_nameX172, int anonymous_var_nameX173);
int setiopolicy_np(int anonymous_var_nameX174, int anonymous_var_nameX175, int anonymous_var_nameX176);
int setrlimit(int anonymous_var_nameX177, const struct rlimit* anonymous_var_nameX178);
int wait(int* anonymous_var_nameX179);
int waitpid(int anonymous_var_nameX180, int* anonymous_var_nameX181, int anonymous_var_nameX182);
int waitid(enum anonymous_typeY1 anonymous_var_nameX183, unsigned int anonymous_var_nameX184, struct __siginfo* anonymous_var_nameX185, int anonymous_var_nameX186);
int wait3(int* anonymous_var_nameX187, int anonymous_var_nameX188, struct rusage* anonymous_var_nameX189);
int wait4(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192, struct rusage* anonymous_var_nameX193);
void* alloca(unsigned long  int __size);
void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_free(void* ptr, unsigned long  long type_id);
void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* anonymous_var_nameX194);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void abort();
int abs(int anonymous_var_nameX195);
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX196);
int atoi(const char* anonymous_var_nameX197);
long atol(const char* anonymous_var_nameX198);
long long atoll(const char* anonymous_var_nameX199);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX4 div(int anonymous_var_nameX202, int anonymous_var_nameX203);
void exit(int anonymous_var_nameX204);
char* getenv(const char* anonymous_var_nameX205);
long labs(long anonymous_var_nameX206);
struct anonymous_typeX5 ldiv(long anonymous_var_nameX207, long anonymous_var_nameX208);
long long llabs(long  long anonymous_var_nameX209);
struct anonymous_typeX6 lldiv(long  long anonymous_var_nameX210, long  long anonymous_var_nameX211);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX212, const char* anonymous_var_nameX213, unsigned long  int __n);
int mbtowc(int* anonymous_var_nameX214, const char* anonymous_var_nameX215, unsigned long  int __n);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX218);
int rand();
void srand(unsigned int anonymous_var_nameX219);
double strtod(const char* anonymous_var_nameX220, char** anonymous_var_nameX221);
float strtof(const char* anonymous_var_nameX222, char** anonymous_var_nameX223);
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX224, char** anonymous_var_nameX225);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX226);
unsigned long  int wcstombs(char* anonymous_var_nameX227, const int* anonymous_var_nameX228, unsigned long  int __n);
int wctomb(char* anonymous_var_nameX229, int anonymous_var_nameX230);
void _Exit(int anonymous_var_nameX231);
long a64l(const char* anonymous_var_nameX232);
double drand48();
char* ecvt(double anonymous_var_nameX233, int anonymous_var_nameX234, int* anonymous_var_nameX235, int* anonymous_var_nameX236);
double erand48(unsigned short int anonymous_var_nameX237[3]);
char* fcvt(double anonymous_var_nameX238, int anonymous_var_nameX239, int* anonymous_var_nameX240, int* anonymous_var_nameX241);
char* gcvt(double anonymous_var_nameX242, int anonymous_var_nameX243, char* anonymous_var_nameX244);
int getsubopt(char** anonymous_var_nameX245, char** anonymous_var_nameX246, char** anonymous_var_nameX247);
int grantpt(int anonymous_var_nameX248);
char* initstate(unsigned int anonymous_var_nameX249, char* anonymous_var_nameX250, unsigned long  int __size);
long jrand48(unsigned short int anonymous_var_nameX251[3]);
char* l64a(long anonymous_var_nameX252);
void lcong48(unsigned short int anonymous_var_nameX253[7]);
long lrand48();
char* mktemp(char* anonymous_var_nameX254);
int mkstemp(char* anonymous_var_nameX255);
long mrand48();
long nrand48(unsigned short int anonymous_var_nameX256[3]);
int posix_openpt(int anonymous_var_nameX257);
char* ptsname(int anonymous_var_nameX258);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen);
int putenv(char* anonymous_var_nameX259);
long random();
int rand_r(unsigned int* anonymous_var_nameX260);
char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);
unsigned short int* seed48(unsigned short int anonymous_var_nameX263[3]);
int setenv(const char* __name, const char* __value, int __overwrite);
void setkey(const char* anonymous_var_nameX264);
char* setstate(const char* anonymous_var_nameX265);
void srand48(long anonymous_var_nameX266);
void srandom(unsigned int anonymous_var_nameX267);
int unlockpt(int anonymous_var_nameX268);
int unsetenv(const char* anonymous_var_nameX269);
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX270, int __datlen);
void arc4random_buf(void* __buf, unsigned long  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
char* cgetcap(char* anonymous_var_nameX273, const char* anonymous_var_nameX274, int anonymous_var_nameX275);
int cgetclose();
int cgetent(char** anonymous_var_nameX276, char** anonymous_var_nameX277, const char* anonymous_var_nameX278);
int cgetfirst(char** anonymous_var_nameX279, char** anonymous_var_nameX280);
int cgetmatch(const char* anonymous_var_nameX281, const char* anonymous_var_nameX282);
int cgetnext(char** anonymous_var_nameX283, char** anonymous_var_nameX284);
int cgetnum(char* anonymous_var_nameX285, const char* anonymous_var_nameX286, long* anonymous_var_nameX287);
int cgetset(const char* anonymous_var_nameX288);
int cgetstr(char* anonymous_var_nameX289, const char* anonymous_var_nameX290, char** anonymous_var_nameX291);
int cgetustr(char* anonymous_var_nameX292, const char* anonymous_var_nameX293, char** anonymous_var_nameX294);
int daemon(int anonymous_var_nameX295, int anonymous_var_nameX296);
char* devname(int anonymous_var_nameX297, unsigned short int anonymous_var_nameX298);
char* devname_r(int anonymous_var_nameX299, unsigned short int anonymous_var_nameX300, char* buf, int len);
char* getbsize(int* anonymous_var_nameX301, long* anonymous_var_nameX302);
int getloadavg(double anonymous_var_nameX303[], int __nelem);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX304);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX317, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX323, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX327);
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp);
long long strtoq(const char* __str, char** __endptr, int __base);
unsigned long  long strtouq(const char* __str, char** __endptr, int __base);
void* memchr(const void* __s, int __c, unsigned long  int __n);
int memcmp(const void* __s1, const void* __s2, unsigned long  int __n);
void* memcpy(void* __dst, const void* __src, unsigned long  int __n);
void* memmove(void* __dst, const void* __src, unsigned long  int __len);
void* memset(void* __b, int __c, unsigned long  int __len);
char* strcat(char* __s1, const char* __s2);
char* strchr(const char* __s, int __c);
int strcmp(const char* __s1, const char* __s2);
int strcoll(const char* __s1, const char* __s2);
char* strcpy(char* __dst, const char* __src);
unsigned long  int strcspn(const char* __s, const char* __charset);
char* strerror(int __errnum);
unsigned long  int strlen(const char* __s);
char* strncat(char* __s1, const char* __s2, unsigned long  int __n);
int strncmp(const char* __s1, const char* __s2, unsigned long  int __n);
char* strncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strpbrk(const char* __s, const char* __charset);
char* strrchr(const char* __s, int __c);
unsigned long  int strspn(const char* __s, const char* __charset);
char* strstr(const char* __big, const char* __little);
char* strtok(char* __str, const char* __sep);
unsigned long  int strxfrm(char* __s1, const char* __s2, unsigned long  int __n);
char* strtok_r(char* __str, const char* __sep, char** __lasts);
int strerror_r(int __errnum, char* __strerrbuf, unsigned long  int __buflen);
char* strdup(const char* __s1);
void* memccpy(void* __dst, const void* __src, int __c, unsigned long  int __n);
char* stpcpy(char* __dst, const char* __src);
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strndup(const char* __s1, unsigned long  int __n);
unsigned long  int strnlen(const char* __s1, unsigned long  int __n);
char* strsignal(int __sig);
int memset_s(void* __s, unsigned long  int __smax, int __c, unsigned long  int __n);
void* memmem(const void* __big, unsigned long  int __big_len, const void* __little, unsigned long  int __little_len);
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int __len);
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int __len);
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int __len);
char* strcasestr(const char* __big, const char* __little);
char* strchrnul(const char* __s, int __c);
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX328, void* anonymous_var_nameX329, long __len);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX330, const void* anonymous_var_nameX331, unsigned long  int __n);
void bcopy(const void* anonymous_var_nameX332, void* anonymous_var_nameX333, unsigned long  int __n);
void bzero(void* anonymous_var_nameX334, unsigned long  int __n);
char* index(const char* anonymous_var_nameX335, int anonymous_var_nameX336);
char* rindex(const char* anonymous_var_nameX337, int anonymous_var_nameX338);
int ffs(int anonymous_var_nameX339);
int strcasecmp(const char* anonymous_var_nameX340, const char* anonymous_var_nameX341);
int strncasecmp(const char* anonymous_var_nameX342, const char* anonymous_var_nameX343, unsigned long  int anonymous_var_nameX344);
int ffsl(long anonymous_var_nameX345);
int ffsll(long  long anonymous_var_nameX346);
int fls(int anonymous_var_nameX347);
int flsl(long anonymous_var_nameX348);
int flsll(long  long anonymous_var_nameX349);
struct _xlocale* duplocale(struct _xlocale* anonymous_var_nameX350);
int freelocale(struct _xlocale* anonymous_var_nameX351);
struct _xlocale* newlocale(int anonymous_var_nameX352, const char* anonymous_var_nameX353, struct _xlocale* anonymous_var_nameX354);
struct _xlocale* uselocale(struct _xlocale* anonymous_var_nameX355);
struct lconv* localeconv();
char* setlocale(int anonymous_var_nameX356, const char* anonymous_var_nameX357);
int* __error();
int isalnum(int anonymous_var_nameX364);
int isalpha(int anonymous_var_nameX365);
int isblank(int anonymous_var_nameX366);
int iscntrl(int anonymous_var_nameX367);
int isdigit(int anonymous_var_nameX368);
int isgraph(int anonymous_var_nameX369);
int islower(int anonymous_var_nameX370);
int isprint(int anonymous_var_nameX371);
int ispunct(int anonymous_var_nameX372);
int isspace(int anonymous_var_nameX373);
int isupper(int anonymous_var_nameX374);
int isxdigit(int anonymous_var_nameX375);
int tolower(int anonymous_var_nameX376);
int toupper(int anonymous_var_nameX377);
int isascii(int anonymous_var_nameX378);
int toascii(int anonymous_var_nameX379);
int _tolower(int anonymous_var_nameX380);
int _toupper(int anonymous_var_nameX381);
int digittoint(int anonymous_var_nameX382);
int ishexnumber(int anonymous_var_nameX383);
int isideogram(int anonymous_var_nameX384);
int isnumber(int anonymous_var_nameX385);
int isphonogram(int anonymous_var_nameX386);
int isrune(int anonymous_var_nameX387);
int isspecial(int anonymous_var_nameX388);
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
int err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static, _Bool cast_type, _Bool no_alignas);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type, _Bool no_static);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
_Bool existance_free_right_value_objects(struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info);
void free_objects_on_break(struct sInfo* info);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(char* value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
void arrange_stack(struct sInfo* info, int top);
struct sNode* parse_function(struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo* info);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
char* get_none_generics_name(char* class_name);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
void output_struct(struct sClass* klass, struct sInfo* info);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_union(char* type_name, struct sInfo* info);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_enum(char* type_name, struct sInfo* info);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sNode* new_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* new_output_node(char* contents, struct sInfo* info);
struct sNode* new_inline_assembler_node(char* source, int num_exps, struct sNode** exps, struct sInfo* info);
struct sNode* new_line_node(struct sInfo* info);
struct sNode* new_sname_node(struct sInfo* info);
struct sNode* new_func_node(struct sInfo* info);
int main(int argc, char** argv);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_print_heap_info(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
_Bool buffer_equals(struct buffer* left, struct buffer* right);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
unsigned char* buffer_head_pointer(struct buffer* self);
struct buffer* charpa_to_buffer(char* self, unsigned long  int len);
struct buffer* charppa_to_buffer(char** self, unsigned long  int len);
struct buffer* shortpa_to_buffer(short* self, unsigned long  int len);
struct buffer* intpa_to_buffer(int* self, unsigned long  int len);
struct buffer* longpa_to_buffer(long* self, unsigned long  int len);
struct buffer* floatpa_to_buffer(float* self, unsigned long  int len);
struct buffer* doublepa_to_buffer(double* self, unsigned long  int len);
char* buffer_printable(struct buffer* self);
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned long  int charpa_length(char* self, unsigned long  int len);
_Bool charppa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shortpa_length(short* self, unsigned long  int len);
unsigned long  int intpa_length(int* self, unsigned long  int len);
unsigned long  int longpa_length(long* self, unsigned long  int len);
unsigned long  int floatpa_length(float* self, unsigned long  int len);
unsigned long  int doublepa_length(double* self, unsigned long  int len);
unsigned int bool_get_hash_key(_Bool value);
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool bool_clone(_Bool self);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xiswascii(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* FILE_read(struct __sFILE* f);
int FILE_write(struct __sFILE* f, char* str);
int FILE_fclose(struct __sFILE* f);
struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
void FILE_on_drop(struct __sFILE* self);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE* f);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
int assert_v2(int exp);
_Bool wchar_t_equals(int left, int right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
void int_times(int self, void* parent, void (*block)(void*,int));
static void match_context_finalize(struct anonymous_typeX16* self);
int re_matchp(struct re_program* pattern, const char* text, int* matchlength, struct re_capture* captures, int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
static void regex_program_t_finalize(struct re_program* self);
static void compiler_state_finalize(struct anonymous_typeX15* self);
struct re_program* re_compile(const char* pattern);
void re_print(struct re_program* pattern);
void clear_captures(struct anonymous_typeX16* ctx);
void snapshot_captures(const struct anonymous_typeX16* ctx, struct re_capture* buffer_);
void restore_captures(struct anonymous_typeX16* ctx, const struct re_capture* buffer_);
struct regex_t* new_token(struct anonymous_typeX15* st);
int append_token(struct regex_t** head, struct regex_t** tail, struct regex_t* token);
struct regex_t* compile_sequence(struct anonymous_typeX15* st, const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t* pattern, const char* text, struct anonymous_typeX16* ctx);
const char* matchstar(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
const char* matchplus(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
const char* matchquestion(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
const char* matchtoken(struct regex_t* token, const char* text, struct anonymous_typeX16* ctx);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
void re_print_internal(struct regex_t* pattern, int depth);
int re_get_group_count(struct re_program* pattern);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int charp_index_regex(char* self, char* reg, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, char* reg, int default_value);
char* charp_strip(char* self);
int charp_index(char* str, char* search_str, int default_value);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
struct list$1char$ph* charp_split_str(char* self, char* str);
int string_rindex(char* str, char* search_str, int default_value);
int string_rindex_regex(char* self, char* reg, int default_value);
char* string_strip(char* self);
int string_index(char* str, char* search_str, int default_value);
int string_index_regex(char* self, char* reg, int default_value);
char* string_replace(char* self, int index, char c);
char* string_multiply(char* str, int n);
_Bool charp_match(char* self, char* reg);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
struct list$1char$ph* charp_scan(char* self, char* reg);
struct list$1char$ph* charp_split(char* self, char* reg);
char* string_sub(char* self, char* reg, char* replace);
struct list$1char$ph* string_split_str(char* self, char* str);
struct list$1char$ph* string_scan(char* self, char* reg);
struct list$1char$ph* string_split(char* self, char* reg);
_Bool string_match(char* self, char* reg);
char* charp_sub(char* self, char* reg, char* replace);
char* charp_sub_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* string_sub_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sClass_finalize(struct sClass* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static void sBlock_finalize(struct sBlock* self);
static void sFun_finalize(struct sFun* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
static void CVALUE_finalize(struct CVALUE* self);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
static void sClassModule_finalize(struct sClassModule* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
static void sCurrentNode_finalize(struct sCurrentNode* self);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
// uniq global variable
char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

struct sMemHeader* gAllocMem;

int gComeDebugLib=0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

// inline function

// body function
int main(int argc, char** argv){
int __result_obj__1;
    come_heap_init(0, 0, 0);
    setlocale(0,"");
    __result_obj__1 = come_main(argc,argv);
    come_heap_final();
    return __result_obj__1;
}

void come_push_stackframe(char* sname, int sline, int id){
_Bool _condtional_value_X1;
    if(({    (_condtional_value_X1=(gNumComeStackFrame<128));    _condtional_value_X1;    })) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
_Bool _condtional_value_X2;
    if(({    (_condtional_value_X2=(gNumComeStackFrame>0));    _condtional_value_X2;    })) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
int i;
_Bool _condtional_value_X3;
_Bool _condtional_value_X4;
_Bool _condtional_value_X5;
_Bool _condtional_value_X6;
void* __right_value2 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 160, "struct buffer*"))));
    buffer_append_format(buf,"%s %d\n",sname,sline);
    for(    ({    (_condtional_value_X3=(i=gNumComeStackFrame-2));    _condtional_value_X3;    });    ({    (_condtional_value_X4=(i>=0));    _condtional_value_X4;    });    ({    (_condtional_value_X5=(i--));    _condtional_value_X5;    })    ){
        buffer_append_format(buf,"%s %d #%d\n",gComeStackFrameSName[i],gComeStackFrameSLine[i],gComeStackFrameID[i]);
    }
    if(({    (_condtional_value_X6=(gComeStackFrameBuffer));    _condtional_value_X6;    })) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void stackframe(){
int i;
_Bool _condtional_value_X7;
_Bool _condtional_value_X8;
_Bool _condtional_value_X9;
    for(    ({    (_condtional_value_X7=(i=gNumComeStackFrame-1));    _condtional_value_X7;    });    ({    (_condtional_value_X8=(i>=0));    _condtional_value_X8;    });    ({    (_condtional_value_X9=(i--));    _condtional_value_X9;    })    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i],gComeStackFrameSLine[i],gComeStackFrameID[i]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__2;
}

void xassert(char* msg, _Bool test){
_Bool _condtional_value_X10;
    printf("%s...",msg);
    if(({    (_condtional_value_X10=(!test));    _condtional_value_X10;    })) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

_Bool die(char* msg){
    perror(msg);
    stackframe_v2();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i;
_Bool _condtional_value_X11;
_Bool _condtional_value_X12;
_Bool _condtional_value_X13;
    gComeDebugLib=come_debug;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    ({    (_condtional_value_X11=(i=0));    _condtional_value_X11;    });    ({    (_condtional_value_X12=(i<gHeapPages.mSizePages));    _condtional_value_X12;    });    ({    (_condtional_value_X13=(i++));    _condtional_value_X13;    })    ){
        gHeapPages.mPages[i]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
_Bool _condtional_value_X14;
_Bool _condtional_value_X15;
struct sMemHeader* it;
int n;
_Bool _condtional_value_X16;
_Bool flag;
_Bool _condtional_value_X17;
int i;
_Bool _condtional_value_X18;
_Bool _condtional_value_X19;
_Bool _condtional_value_X20;
_Bool _condtional_value_X21;
_Bool _condtional_value_X22;
struct sMemHeaderTiny* it_0;
int n_1;
_Bool _condtional_value_X23;
_Bool _condtional_value_X24;
_Bool _condtional_value_X25;
int i_2;
_Bool _condtional_value_X26;
_Bool _condtional_value_X27;
_Bool _condtional_value_X28;
    if(({    (_condtional_value_X14=(gComeStackFrameBuffer));    _condtional_value_X14;    })) {
        free(gComeStackFrameBuffer);
    }
    if(({    (_condtional_value_X15=(gComeDebugLib));    _condtional_value_X15;    })) {
        it=gAllocMem;
        n=0;
        while(({        (_condtional_value_X16=(it));        _condtional_value_X16;        })) {
            n++;
            flag=(_Bool)0;
            printf("#%d ",n);
            if(({            (_condtional_value_X17=(it->class_name));            _condtional_value_X17;            })) {
                printf("%p (%s): ",(char*)it+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it->class_name);
            }
            for(            ({            (_condtional_value_X18=(i=0));            _condtional_value_X18;            });            ({            (_condtional_value_X19=(i<16));            _condtional_value_X19;            });            ({            (_condtional_value_X20=(i++));            _condtional_value_X20;            })            ){
                if(({                (_condtional_value_X21=(it->sname[i]));                _condtional_value_X21;                })) {
                    printf("%s %d #%d, ",it->sname[i],it->sline[i],it->id[i]);
                    flag=(_Bool)1;
                }
            }
            if(({            (_condtional_value_X22=(flag));            _condtional_value_X22;            })) {
                puts("");
            }
            it=it->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    else {
        it_0=(struct sMemHeaderTiny*)gAllocMem;
        n_1=0;
        while(({        (_condtional_value_X23=(it_0));        _condtional_value_X23;        })) {
            n_1++;
            if(({            (_condtional_value_X24=(it_0->class_name));            _condtional_value_X24;            })) {
                printf("#%d %p (%s) %s %d\n",n_1,(char*)it_0+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_0->class_name,it_0->sname,it_0->sline);
            }
            it_0=it_0->next;
        }
        if(({        (_condtional_value_X25=(n_1>0));        _condtional_value_X25;        })) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_1,gNumAlloc,gNumFree);
        }
    }
    for(    ({    (_condtional_value_X26=(i_2=0));    _condtional_value_X26;    });    ({    (_condtional_value_X27=(i_2<gHeapPages.mSizePages));    _condtional_value_X27;    });    ({    (_condtional_value_X28=(i_2++));    _condtional_value_X28;    })    ){
        free(gHeapPages.mPages[i_2]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result;
_Bool _condtional_value_X29;
_Bool _condtional_value_X30;
_Bool _condtional_value_X31;
unsigned long  int free_area;
_Bool _condtional_value_X32;
_Bool _condtional_value_X33;
int new_size_pages;
char** new_pages;
int i;
_Bool _condtional_value_X34;
_Bool _condtional_value_X35;
_Bool _condtional_value_X36;
_Bool _condtional_value_X37;
void* __result_obj__3;
    result=((void*)0);
    size=(size+7&~0x7);
    if(({    (_condtional_value_X29=(size<4096));    _condtional_value_X29;    })) {
        if(({        (_condtional_value_X30=(gHeapPages.mFreeMem[size]));        _condtional_value_X30;        })) {
            result=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result,0,size);
        }
        if(({        (_condtional_value_X31=(result==((void*)0)));        _condtional_value_X31;        })) {
            free_area=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(({            (_condtional_value_X32=(size>=free_area));            _condtional_value_X32;            })) {
                gHeapPages.mCurrentPages++;
                if(({                (_condtional_value_X33=(gHeapPages.mCurrentPages==gHeapPages.mSizePages));                _condtional_value_X33;                })) {
                    new_size_pages=gHeapPages.mSizePages*2;
                    new_pages=calloc(1,sizeof(char*)*new_size_pages);
                    i=0;
                    for(                    ;                    ({                    (_condtional_value_X34=(i<gHeapPages.mSizePages));                    _condtional_value_X34;                    });                    ({                    (_condtional_value_X35=(i++));                    _condtional_value_X35;                    })                    ){
                        new_pages[i]=gHeapPages.mPages[i];
                    }
                    for(                    ;                    ({                    (_condtional_value_X36=(i<new_size_pages));                    _condtional_value_X36;                    });                    ({                    (_condtional_value_X37=(i++));                    _condtional_value_X37;                    })                    ){
                        new_pages[i]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages;
                    gHeapPages.mSizePages=new_size_pages;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result=calloc(1,size);
    }
    __result_obj__3 = result;
    return __result_obj__3;
}

void come_free_mem_of_heap_pool(void* mem){
_Bool _condtional_value_X38;
_Bool _condtional_value_X39;
struct sMemHeader* it;
_Bool _condtional_value_X40;
struct sMemHeader* prev_it;
struct sMemHeader* next_it;
_Bool _condtional_value_X41;
_Bool _condtional_value_X42;
_Bool _condtional_value_X43;
_Bool _condtional_value_X44;
unsigned long  int size;
_Bool _condtional_value_X45;
_Bool _condtional_value_X46;
struct sMemHeaderTiny* it_3;
_Bool _condtional_value_X47;
struct sMemHeaderTiny* prev_it_4;
struct sMemHeaderTiny* next_it_5;
_Bool _condtional_value_X48;
_Bool _condtional_value_X49;
_Bool _condtional_value_X50;
_Bool _condtional_value_X51;
unsigned long  int size_6;
_Bool _condtional_value_X52;
_Bool _condtional_value_X53;
    if(({    (_condtional_value_X38=(mem));    _condtional_value_X38;    })) {
        if(({        (_condtional_value_X39=(gComeDebugLib));        _condtional_value_X39;        })) {
            it=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(({            (_condtional_value_X40=(it->allocated!=177783));            _condtional_value_X40;            })) {
                return;
            }
            it->allocated=0;
            prev_it=it->prev;
            next_it=it->next;
            if(({            (_condtional_value_X41=(gAllocMem==it));            _condtional_value_X41;            })) {
                gAllocMem=next_it;
                if(({                (_condtional_value_X42=(gAllocMem));                _condtional_value_X42;                })) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(({                (_condtional_value_X43=(prev_it));                _condtional_value_X43;                })) {
                    prev_it->next=next_it;
                }
                if(({                (_condtional_value_X44=(next_it));                _condtional_value_X44;                })) {
                    next_it->prev=prev_it;
                }
            }
            size=it->size;
            if(({            (_condtional_value_X45=(size<4096));            _condtional_value_X45;            })) {
                if(({                (_condtional_value_X46=(gHeapPages.mFreeMem[size]==((void*)0)));                _condtional_value_X46;                })) {
                    it->free_next=((void*)0);
                    gHeapPages.mFreeMem[size]=(struct sMemHeaderTiny*)it;
                }
                else {
                    it->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size];
                    gHeapPages.mFreeMem[size]=(struct sMemHeaderTiny*)it;
                }
            }
            else {
                free(it);
            }
            gNumFree++;
        }
        else {
            it_3=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(({            (_condtional_value_X47=(it_3->allocated!=177783));            _condtional_value_X47;            })) {
                return;
            }
            it_3->allocated=0;
            prev_it_4=it_3->prev;
            next_it_5=it_3->next;
            if(({            (_condtional_value_X48=(gAllocMem==it_3));            _condtional_value_X48;            })) {
                gAllocMem=(struct sMemHeader*)next_it_5;
                if(({                (_condtional_value_X49=(gAllocMem));                _condtional_value_X49;                })) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(({                (_condtional_value_X50=(prev_it_4));                _condtional_value_X50;                })) {
                    prev_it_4->next=next_it_5;
                }
                if(({                (_condtional_value_X51=(next_it_5));                _condtional_value_X51;                })) {
                    next_it_5->prev=prev_it_4;
                }
            }
            size_6=it_3->size;
            if(({            (_condtional_value_X52=(size_6<4096));            _condtional_value_X52;            })) {
                if(({                (_condtional_value_X53=(gHeapPages.mFreeMem[size_6]==((void*)0)));                _condtional_value_X53;                })) {
                    it_3->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_6]=it_3;
                }
                else {
                    it_3->free_next=gHeapPages.mFreeMem[size_6];
                    gHeapPages.mFreeMem[size_6]=it_3;
                }
            }
            else {
                free(it_3);
            }
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
_Bool _condtional_value_X54;
void* result;
struct sMemHeader* it;
_Bool _condtional_value_X55;
int i;
_Bool _condtional_value_X56;
_Bool _condtional_value_X57;
_Bool _condtional_value_X58;
int i_7;
_Bool _condtional_value_X59;
_Bool _condtional_value_X60;
_Bool _condtional_value_X61;
_Bool _condtional_value_X62;
void* __result_obj__4;
void* result_8;
struct sMemHeaderTiny* it_9;
_Bool _condtional_value_X63;
void* __result_obj__5;
memset(&i, 0, sizeof(int));
memset(&i_7, 0, sizeof(int));
    if(({    (_condtional_value_X54=(gComeDebugLib));    _condtional_value_X54;    })) {
        result=alloc_from_pages(size+sizeof(struct sMemHeader));
        it=result;
        it->allocated=177783;
        it->size=size+sizeof(struct sMemHeader);
        it->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(({        (_condtional_value_X55=(gNumComeStackFrame<16));        _condtional_value_X55;        })) {
            for(            ({            (_condtional_value_X56=(i=0));            _condtional_value_X56;            });            ({            (_condtional_value_X57=(i<gNumComeStackFrame));            _condtional_value_X57;            });            ({            (_condtional_value_X58=(i++));            _condtional_value_X58;            })            ){
                it->sname[i]=gComeStackFrameSName[i];
                it->sline[i]=gComeStackFrameSLine[i];
                it->id[i]=gComeStackFrameID[i];
            }
        }
        else {
            for(            ({            (_condtional_value_X59=(i_7=0));            _condtional_value_X59;            });            ({            (_condtional_value_X60=(i_7<16));            _condtional_value_X60;            });            ({            (_condtional_value_X61=(i_7++));            _condtional_value_X61;            })            ){
                it->sname[i_7]=gComeStackFrameSName[gNumComeStackFrame-1-i_7];
                it->sline[i_7]=gComeStackFrameSLine[gNumComeStackFrame-1-i_7];
                it->id[i_7]=gComeStackFrameID[gNumComeStackFrame-1-i_7];
            }
        }
        come_pop_stackframe_v2();
        it->next=gAllocMem;
        it->prev=((void*)0);
        it->class_name=class_name;
        if(({        (_condtional_value_X62=(gAllocMem));        _condtional_value_X62;        })) {
            gAllocMem->prev=it;
        }
        gAllocMem=it;
        gNumAlloc++;
        __result_obj__4 = (char*)result+sizeof(struct sMemHeader);
        return __result_obj__4;
    }
    else {
        result_8=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_9=result_8;
        it_9->allocated=177783;
        it_9->class_name=class_name;
        it_9->sname=sname;
        it_9->sline=sline;
        it_9->size=size+sizeof(struct sMemHeaderTiny);
        it_9->free_next=((void*)0);
        it_9->next=(struct sMemHeaderTiny*)gAllocMem;
        it_9->prev=((void*)0);
        if(({        (_condtional_value_X63=(gAllocMem));        _condtional_value_X63;        })) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_9;
        }
        gAllocMem=(struct sMemHeader*)it_9;
        gNumAlloc++;
        __result_obj__5 = (char*)result_8+sizeof(struct sMemHeaderTiny);
        return __result_obj__5;
    }
}

void come_print_heap_info(void* mem){
_Bool _condtional_value_X64;
struct sMemHeader* it;
_Bool _condtional_value_X65;
_Bool _condtional_value_X66;
int i;
_Bool _condtional_value_X67;
_Bool _condtional_value_X68;
_Bool _condtional_value_X69;
_Bool _condtional_value_X70;
struct sMemHeaderTiny* it_10;
_Bool _condtional_value_X71;
    if(({    (_condtional_value_X64=(gComeDebugLib));    _condtional_value_X64;    })) {
        it=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(({        (_condtional_value_X65=(it->allocated!=177783));        _condtional_value_X65;        })) {
            return;
        }
        printf("%p ",mem);
        if(({        (_condtional_value_X66=(it->class_name));        _condtional_value_X66;        })) {
            printf("(%s): ",it->class_name);
        }
        for(        ({        (_condtional_value_X67=(i=0));        _condtional_value_X67;        });        ({        (_condtional_value_X68=(i<16));        _condtional_value_X68;        });        ({        (_condtional_value_X69=(i++));        _condtional_value_X69;        })        ){
            if(({            (_condtional_value_X70=(it->sname[i]));            _condtional_value_X70;            })) {
                printf("%s %d #%d, ",it->sname[i],it->sline[i],it->id[i]);
            }
        }
        puts("");
    }
    else {
        it_10=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(({        (_condtional_value_X71=(it_10->allocated!=177783));        _condtional_value_X71;        })) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_10->class_name,it_10->sname,it_10->sline);
    }
}

char* come_dynamic_typeof(void* mem){
_Bool _condtional_value_X72;
struct sMemHeader* it;
_Bool _condtional_value_X73;
char* __result_obj__6;
struct sMemHeaderTiny* it_11;
_Bool _condtional_value_X74;
char* __result_obj__7;
    if(({    (_condtional_value_X72=(gComeDebugLib));    _condtional_value_X72;    })) {
        it=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(({        (_condtional_value_X73=(it->allocated!=177783));        _condtional_value_X73;        })) {
            printf("invalid heap object(%p)(1)\n",it);
            exit(2);
        }
        __result_obj__6 = it->class_name;
        return __result_obj__6;
    }
    else {
        it_11=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(({        (_condtional_value_X74=(it_11->allocated!=177783));        _condtional_value_X74;        })) {
            printf("invalid heap object(%p)(2)\n",it_11);
            exit(2);
        }
        __result_obj__7 = it_11->class_name;
        return __result_obj__7;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem;
unsigned long  int* ref_count;
unsigned long  int* size2;
void* __result_obj__8;
    mem=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count=(unsigned long  int*)mem;
    *ref_count=0;
    size2=(unsigned long  int*)(mem+sizeof(unsigned long  int));
    *size2=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__8 = mem+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__8;
}

void come_free(void* mem){
_Bool _condtional_value_X75;
unsigned long  int* ref_count;
    if(({    (_condtional_value_X75=(mem==((void*)0)));    _condtional_value_X75;    })) {
        return;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
_Bool _condtional_value_X76;
void* __result_obj__9;
char* mem;
unsigned long  int* size_p;
unsigned long  int size;
void* result;
void* __result_obj__10;
    if(({    (_condtional_value_X76=(!block));    _condtional_value_X76;    })) {
        __result_obj__9 = ((void*)0);
        return __result_obj__9;
    }
    mem=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p=(unsigned long  int*)(mem+sizeof(unsigned long  int));
    size=*size_p-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result=come_calloc_v2(1,size,sname,sline,class_name);
    memcpy(result,block,size);
    __result_obj__10 = result;
    return __result_obj__10;
}

void* come_increment_ref_count(void* mem){
_Bool _condtional_value_X77;
void* __result_obj__11;
unsigned long  int* ref_count;
void* __result_obj__12;
    if(({    (_condtional_value_X77=(mem==((void*)0)));    _condtional_value_X77;    })) {
        __result_obj__11 = mem;
        return __result_obj__11;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count)++;
    __result_obj__12 = mem;
    return __result_obj__12;
}

void* come_print_ref_count(void* mem){
_Bool _condtional_value_X78;
void* __result_obj__13;
unsigned long  int* ref_count;
void* __result_obj__14;
    if(({    (_condtional_value_X78=(mem==((void*)0)));    _condtional_value_X78;    })) {
        __result_obj__13 = mem;
        return __result_obj__13;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count);
    __result_obj__14 = mem;
    return __result_obj__14;
}

int come_get_ref_count(void* mem){
_Bool _condtional_value_X79;
unsigned long  int* ref_count;
    if(({    (_condtional_value_X79=(mem==((void*)0)));    _condtional_value_X79;    })) {
        return 0;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
_Bool _condtional_value_X80;
_Bool _condtional_value_X81;
void* __result_obj__15;
_Bool _condtional_value_X82;
void* __result_obj__16;
unsigned long  int* ref_count;
_Bool _condtional_value_X83;
unsigned long  int count;
_Bool _condtional_value_X84;
_Bool _condtional_value_X85;
void (*finalizer)(void*);
void* __result_obj__17;
void* __result_obj__18;
memset(&finalizer, 0, sizeof(void (*)(void*)));
    if(({    (_condtional_value_X80=(result_obj));    _condtional_value_X80;    })) {
        if(({        (_condtional_value_X81=(mem==result_obj));        _condtional_value_X81;        })) {
            __result_obj__15 = mem;
            return __result_obj__15;
        }
    }
    if(({    (_condtional_value_X82=(mem==((void*)0)));    _condtional_value_X82;    })) {
        __result_obj__16 = ((void*)0);
        return __result_obj__16;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(({    (_condtional_value_X83=(!no_decrement));    _condtional_value_X83;    })) {
        (*ref_count)--;
    }
    count=*ref_count;
    if(({    (_condtional_value_X84=(!no_free&&count<=0));    _condtional_value_X84;    })) {
        if(({        (_condtional_value_X85=(protocol_obj&&protocol_fun));        _condtional_value_X85;        })) {
            finalizer=protocol_fun;
            finalizer(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__17 = ((void*)0);
        return __result_obj__17;
    }
    __result_obj__18 = mem;
    return __result_obj__18;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
_Bool _condtional_value_X86;
_Bool _condtional_value_X87;
_Bool _condtional_value_X88;
_Bool _condtional_value_X89;
_Bool _condtional_value_X90;
_Bool _condtional_value_X91;
void (*finalizer)(void*);
void (*finalizer_12)(void*);
_Bool _condtional_value_X92;
void (*finalizer_13)(void*);
unsigned long  int* ref_count;
_Bool _condtional_value_X93;
unsigned long  int count;
_Bool _condtional_value_X94;
_Bool _condtional_value_X95;
_Bool _condtional_value_X96;
_Bool _condtional_value_X97;
void (*finalizer_14)(void*);
_Bool _condtional_value_X98;
void (*finalizer_15)(void*);
_Bool _condtional_value_X99;
void (*finalizer_16)(void*);
memset(&finalizer, 0, sizeof(void (*)(void*)));
memset(&finalizer_12, 0, sizeof(void (*)(void*)));
memset(&finalizer_13, 0, sizeof(void (*)(void*)));
memset(&finalizer_14, 0, sizeof(void (*)(void*)));
memset(&finalizer_15, 0, sizeof(void (*)(void*)));
memset(&finalizer_16, 0, sizeof(void (*)(void*)));
    if(({    (_condtional_value_X86=(result_obj));    _condtional_value_X86;    })) {
        if(({        (_condtional_value_X87=(mem==result_obj));        _condtional_value_X87;        })) {
            return;
        }
    }
    if(({    (_condtional_value_X88=(mem==((void*)0)));    _condtional_value_X88;    })) {
        return;
    }
    if(({    (_condtional_value_X89=(call_finalizer_only));    _condtional_value_X89;    })) {
        if(({        (_condtional_value_X90=(fun));        _condtional_value_X90;        })) {
            if(({            (_condtional_value_X91=(protocol_obj&&protocol_fun));            _condtional_value_X91;            })) {
                finalizer=protocol_fun;
                finalizer(protocol_obj);
            }
            finalizer_12=fun;
            finalizer_12(mem);
        }
        else {
            if(({            (_condtional_value_X92=(protocol_obj&&protocol_fun));            _condtional_value_X92;            })) {
                finalizer_13=protocol_fun;
                finalizer_13(protocol_obj);
            }
        }
    }
    else {
        ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(({        (_condtional_value_X93=(!no_decrement));        _condtional_value_X93;        })) {
            (*ref_count)--;
        }
        count=*ref_count;
        if(({        (_condtional_value_X94=(!no_free&&count<=0));        _condtional_value_X94;        })) {
            if(({            (_condtional_value_X95=(mem));            _condtional_value_X95;            })) {
                if(({                (_condtional_value_X96=(fun));                _condtional_value_X96;                })) {
                    if(({                    (_condtional_value_X97=(protocol_obj&&protocol_fun));                    _condtional_value_X97;                    })) {
                        finalizer_14=protocol_fun;
                        finalizer_14(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(({                    (_condtional_value_X98=(fun));                    _condtional_value_X98;                    })) {
                        finalizer_15=fun;
                        finalizer_15(mem);
                    }
                }
                else {
                    if(({                    (_condtional_value_X99=(protocol_obj&&protocol_fun));                    _condtional_value_X99;                    })) {
                        finalizer_16=protocol_fun;
                        finalizer_16(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
_Bool _condtional_value_X100;
char* __result_obj__19;
int len;
void* __right_value4 = (void*)0;
char* result;
char* __result_obj__20;
    if(({    (_condtional_value_X100=(str==((void*)0)));    _condtional_value_X100;    })) {
        __result_obj__19 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__19 = come_decrement_ref_count(__result_obj__19, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__19;
    }
    len=strlen(str)+1;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len)), "/usr/local/include/comelang.h", 920, "char*"));
    strncpy(result,str,len);
    __result_obj__20 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__20 = come_decrement_ref_count(__result_obj__20, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__20;
}

void come_push_stackframe_v2(char* sname, int sline, int id){
    come_push_stackframe(sname,sline,id);
}

void come_pop_stackframe_v2(){
    come_pop_stackframe();
}

void come_save_stackframe_v2(char* sname, int sline){
    come_save_stackframe(sname,sline);
}

void stackframe_v2(){
    stackframe();
}

char* come_get_stackframe_v2(){
void* __right_value5 = (void*)0;
char* __result_obj__21;
    __result_obj__21 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__21 = come_decrement_ref_count(__result_obj__21, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__21;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__22;
    __result_obj__22 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__22;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__23;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2955, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__23 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__23, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__23;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__24;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2965, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__24 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__24, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__24;
}

void buffer_finalize(struct buffer* self){
_Bool _condtional_value_X101;
    if(({    (_condtional_value_X101=(self&&self->buf));    _condtional_value_X101;    })) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
_Bool _condtional_value_X102;
struct buffer* __result_obj__25;
void* __right_value8 = (void*)0;
struct buffer* result;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__26;
    if(({    (_condtional_value_X102=(self==((void*)0)));    _condtional_value_X102;    })) {
        __result_obj__25 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__25, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__25;
    }
    result=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2985, "struct buffer*"));
    result->size=self->size;
    __dec_obj3=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2988, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0);
    result->len=self->len;
    memcpy(result->buf,self->buf,self->len);
    __result_obj__26 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__26, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__26;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
_Bool _condtional_value_X103;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__27;
    if(({    (_condtional_value_X103=(left==((void*)0)||right==((void*)0)));    _condtional_value_X103;    })) {
        return (_Bool)0;
    }
    __result_obj__27 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1, 0, (void*)0));
    return __result_obj__27;
}

int buffer_length(struct buffer* self){
_Bool _condtional_value_X104;
    if(({    (_condtional_value_X104=(self==((void*)0)));    _condtional_value_X104;    })) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
_Bool _condtional_value_X105;
    if(({    (_condtional_value_X105=(self==((void*)0)));    _condtional_value_X105;    })) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
_Bool _condtional_value_X106;
    if(({    (_condtional_value_X106=(self==((void*)0)));    _condtional_value_X106;    })) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
_Bool _condtional_value_X107;
struct buffer* __result_obj__28;
_Bool _condtional_value_X108;
void* __right_value12 = (void*)0;
char* old_buf;
int old_len;
int new_size;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__29;
    if(({    (_condtional_value_X107=(self==((void*)0)||mem==((void*)0)));    _condtional_value_X107;    })) {
        __result_obj__28 = self;
        return __result_obj__28;
    }
    if(({    (_condtional_value_X108=(self->len+size+1+1>=self->size));    _condtional_value_X108;    })) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3036, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/comelang.h", 3040, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__29 = self;
    return __result_obj__29;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
_Bool _condtional_value_X109;
struct buffer* __result_obj__30;
_Bool _condtional_value_X110;
void* __right_value14 = (void*)0;
char* old_buf;
int old_len;
int new_size;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__31;
    if(({    (_condtional_value_X109=(self==((void*)0)));    _condtional_value_X109;    })) {
        __result_obj__30 = ((void*)0);
        return __result_obj__30;
    }
    if(({    (_condtional_value_X110=(self->len+1+1+1>=self->size));    _condtional_value_X110;    })) {
        old_buf=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3059, "char*"));
        old_len=self->len;
        new_size=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/comelang.h", 3063, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__31 = self;
    return __result_obj__31;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
_Bool _condtional_value_X111;
struct buffer* __result_obj__32;
int size;
_Bool _condtional_value_X112;
void* __right_value16 = (void*)0;
char* old_buf;
int old_len;
int new_size;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__33;
    if(({    (_condtional_value_X111=(self==((void*)0)||mem==((void*)0)));    _condtional_value_X111;    })) {
        __result_obj__32 = self;
        return __result_obj__32;
    }
    size=strlen(mem);
    if(({    (_condtional_value_X112=(self->len+size+1+1>=self->size));    _condtional_value_X112;    })) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3085, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/comelang.h", 3089, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__33 = self;
    return __result_obj__33;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
_Bool _condtional_value_X113;
struct buffer* __result_obj__34;
va_list args;
char* result;
int len;
_Bool _condtional_value_X114;
struct buffer* __result_obj__35;
void* __right_value18 = (void*)0;
char* mem;
int size;
_Bool _condtional_value_X115;
void* __right_value19 = (void*)0;
char* old_buf;
int old_len;
int new_size;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__36;
result = (void*)0;
    if(({    (_condtional_value_X113=(self==((void*)0)||msg==((void*)0)));    _condtional_value_X113;    })) {
        __result_obj__34 = self;
        return __result_obj__34;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(({    (_condtional_value_X114=(len<0));    _condtional_value_X114;    })) {
        __result_obj__35 = self;
        return __result_obj__35;
    }
    mem=(char*)come_increment_ref_count(__builtin_string(result));
    size=strlen(mem);
    if(({    (_condtional_value_X115=(self->len+size+1+1>=self->size));    _condtional_value_X115;    })) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3133, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/comelang.h", 3137, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    free(result);
    __result_obj__36 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__36;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
_Bool _condtional_value_X116;
struct buffer* __result_obj__37;
int size;
_Bool _condtional_value_X117;
void* __right_value21 = (void*)0;
char* old_buf;
int old_len;
int new_size;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__38;
    if(({    (_condtional_value_X116=(self==((void*)0)||mem==((void*)0)));    _condtional_value_X116;    })) {
        __result_obj__37 = self;
        return __result_obj__37;
    }
    size=strlen(mem)+1;
    if(({    (_condtional_value_X117=(self->len+size+1+1+1>=self->size));    _condtional_value_X117;    })) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3159, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/comelang.h", 3163, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__38 = self;
    return __result_obj__38;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
_Bool _condtional_value_X118;
struct buffer* __result_obj__39;
int* mem;
int size;
_Bool _condtional_value_X119;
void* __right_value23 = (void*)0;
char* old_buf;
int old_len;
int new_size;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__40;
    if(({    (_condtional_value_X118=(self==((void*)0)));    _condtional_value_X118;    })) {
        __result_obj__39 = ((void*)0);
        return __result_obj__39;
    }
    mem=&value;
    size=sizeof(int);
    if(({    (_condtional_value_X119=(self->len+size+1+1>=self->size));    _condtional_value_X119;    })) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3186, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/comelang.h", 3190, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__40 = self;
    return __result_obj__40;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem;
int size;
_Bool _condtional_value_X120;
void* __right_value25 = (void*)0;
char* old_buf;
int old_len;
int new_size;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__41;
    mem=&value;
    size=sizeof(long);
    if(({    (_condtional_value_X120=(self->len+size+1+1>=self->size));    _condtional_value_X120;    })) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3209, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/comelang.h", 3213, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__41 = self;
    return __result_obj__41;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
_Bool _condtional_value_X121;
struct buffer* __result_obj__42;
short* mem;
int size;
_Bool _condtional_value_X122;
void* __right_value27 = (void*)0;
char* old_buf;
int old_len;
int new_size;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__43;
    if(({    (_condtional_value_X121=(self==((void*)0)));    _condtional_value_X121;    })) {
        __result_obj__42 = ((void*)0);
        return __result_obj__42;
    }
    mem=&value;
    size=sizeof(short);
    if(({    (_condtional_value_X122=(self->len+size+1+1>=self->size));    _condtional_value_X122;    })) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3236, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/comelang.h", 3240, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__43 = self;
    return __result_obj__43;
}

struct buffer* buffer_alignment(struct buffer* self){
_Bool _condtional_value_X123;
struct buffer* __result_obj__44;
int len;
_Bool _condtional_value_X124;
int new_size;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i;
_Bool _condtional_value_X125;
_Bool _condtional_value_X126;
_Bool _condtional_value_X127;
struct buffer* __result_obj__45;
    if(({    (_condtional_value_X123=(self==((void*)0)));    _condtional_value_X123;    })) {
        __result_obj__44 = ((void*)0);
        return __result_obj__44;
    }
    len=self->len;
    len=(len+3)&~3;
    if(({    (_condtional_value_X124=(len>=self->size));    _condtional_value_X124;    })) {
        new_size=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/comelang.h", 3264, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
        self->size=new_size;
    }
    for(    ({    (_condtional_value_X125=(i=self->len));    _condtional_value_X125;    });    ({    (_condtional_value_X126=(i<len));    _condtional_value_X126;    });    ({    (_condtional_value_X127=(i++));    _condtional_value_X127;    })    ){
        self->buf[i]=0;
    }
    self->len=len;
    __result_obj__45 = self;
    return __result_obj__45;
}

int buffer_compare(struct buffer* left, struct buffer* right){
_Bool _condtional_value_X128;
_Bool _condtional_value_X129;
_Bool _condtional_value_X130;
    if(({    (_condtional_value_X128=(left==((void*)0)&&right==((void*)0)));    _condtional_value_X128;    })) {
        return 0;
    }
    else if(({    (_condtional_value_X129=(left==((void*)0)));    _condtional_value_X129;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X130=(right==((void*)0)));    _condtional_value_X130;    })) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct buffer* result;
_Bool _condtional_value_X131;
struct buffer* __result_obj__46;
struct buffer* __result_obj__47;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3294, "struct buffer*"))));
    if(({    (_condtional_value_X131=(self==((void*)0)));    _condtional_value_X131;    })) {
        __result_obj__46 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__46, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__46;
    }
    buffer_append_str(result,self);
    __result_obj__47 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__47;
}

char* buffer_to_string(struct buffer* self){
_Bool _condtional_value_X132;
void* __right_value32 = (void*)0;
char* __result_obj__48;
void* __right_value33 = (void*)0;
char* __result_obj__49;
    if(({    (_condtional_value_X132=(self==((void*)0)));    _condtional_value_X132;    })) {
        __result_obj__48 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__48 = come_decrement_ref_count(__result_obj__48, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__48;
    }
    __result_obj__49 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__49;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__50;
    __result_obj__50 = self->buf;
    return __result_obj__50;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result;
struct buffer* __result_obj__51;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3321, "struct buffer*"))));
    buffer_append(result,self,sizeof(char)*len);
    __result_obj__51 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__51, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__51;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result;
int i;
_Bool _condtional_value_X133;
_Bool _condtional_value_X134;
_Bool _condtional_value_X135;
struct buffer* __result_obj__52;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3328, "struct buffer*"))));
    for(    ({    (_condtional_value_X133=(i=0));    _condtional_value_X133;    });    ({    (_condtional_value_X134=(i<len));    _condtional_value_X134;    });    ({    (_condtional_value_X135=(i++));    _condtional_value_X135;    })    ){
        buffer_append(result,self[i],strlen(self[i]));
    }
    __result_obj__52 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__52, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__52;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result;
struct buffer* __result_obj__53;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3337, "struct buffer*"))));
    buffer_append(result,(char*)self,sizeof(short)*len);
    __result_obj__53 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__53, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__53;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result;
struct buffer* __result_obj__54;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3344, "struct buffer*"))));
    buffer_append(result,(char*)self,sizeof(int)*len);
    __result_obj__54 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__54, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__54;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result;
struct buffer* __result_obj__55;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3351, "struct buffer*"))));
    buffer_append(result,(char*)self,sizeof(long)*len);
    __result_obj__55 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__55, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__55;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result;
struct buffer* __result_obj__56;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3358, "struct buffer*"))));
    buffer_append(result,(char*)self,sizeof(float)*len);
    __result_obj__56 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__56, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__56;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result;
struct buffer* __result_obj__57;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3365, "struct buffer*"))));
    buffer_append(result,(char*)self,sizeof(double)*len);
    __result_obj__57 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__57, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__57;
}

char* buffer_printable(struct buffer* self){
int len;
void* __right_value48 = (void*)0;
char* result;
int n;
int i;
_Bool _condtional_value_X136;
_Bool _condtional_value_X137;
_Bool _condtional_value_X138;
unsigned char c;
_Bool _condtional_value_X139;
_Bool _condtional_value_X140;
char* __result_obj__58;
    len=self->len;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/comelang.h", 3373, "char*"));
    n=0;
    for(    ({    (_condtional_value_X136=(i=0));    _condtional_value_X136;    });    ({    (_condtional_value_X137=(i<len));    _condtional_value_X137;    });    ({    (_condtional_value_X138=(i++));    _condtional_value_X138;    })    ){
        c=self->buf[i];
        if(({        (_condtional_value_X139=((c>=0&&c<32)||c==127));        _condtional_value_X139;        })) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else if(({        (_condtional_value_X140=(c>127));        _condtional_value_X140;        })) {
            result[n++]=63;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
    __result_obj__58 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__58;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i;
_Bool _condtional_value_X141;
_Bool _condtional_value_X142;
_Bool _condtional_value_X143;
struct list$1char$* __result_obj__60;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X141=(i=0));    _condtional_value_X141;    });    ({    (_condtional_value_X142=(i<num_value));    _condtional_value_X142;    });    ({    (_condtional_value_X143=(i++));    _condtional_value_X143;    })    ){
        list$1char$_push_back(self,values[i]);
    }
    __result_obj__60 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__60, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__60;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
_Bool _condtional_value_X144;
void* __right_value50 = (void*)0;
struct list_item$1char$* litem;
_Bool _condtional_value_X145;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_17;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_18;
struct list$1char$* __result_obj__59;
    if(({    (_condtional_value_X144=(self->len==0));    _condtional_value_X144;    })) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1char$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X145=(self->len==1));    _condtional_value_X145;    })) {
        litem_17=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1char$*"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1char$*"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result_obj__59 = self;
    return __result_obj__59;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it;
_Bool _condtional_value_X146;
struct list_item$1char$* prev_it;
    it=self->head;
    while(({    (_condtional_value_X146=(it!=((void*)0)));    _condtional_value_X146;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__61;
    __result_obj__61 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3414, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__61, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__61;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i;
_Bool _condtional_value_X147;
_Bool _condtional_value_X148;
_Bool _condtional_value_X149;
struct list$1char$p* __result_obj__63;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X147=(i=0));    _condtional_value_X147;    });    ({    (_condtional_value_X148=(i<num_value));    _condtional_value_X148;    });    ({    (_condtional_value_X149=(i++));    _condtional_value_X149;    })    ){
        list$1char$p_push_back(self,values[i]);
    }
    __result_obj__63 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__63, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__63;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
_Bool _condtional_value_X150;
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem;
_Bool _condtional_value_X151;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_19;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_20;
struct list$1char$p* __result_obj__62;
    if(({    (_condtional_value_X150=(self->len==0));    _condtional_value_X150;    })) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1char$p*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X151=(self->len==1));    _condtional_value_X151;    })) {
        litem_19=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1char$p*"))));
        litem_19->prev=self->head;
        litem_19->next=((void*)0);
        litem_19->item=item;
        self->tail=litem_19;
        self->head->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1char$p*"))));
        litem_20->prev=self->tail;
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail->next=litem_20;
        self->tail=litem_20;
    }
    self->len++;
    __result_obj__62 = self;
    return __result_obj__62;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it;
_Bool _condtional_value_X152;
struct list_item$1char$p* prev_it;
    it=self->head;
    while(({    (_condtional_value_X152=(it!=((void*)0)));    _condtional_value_X152;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__64;
    __result_obj__64 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3419, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__64, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__64;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i;
_Bool _condtional_value_X153;
_Bool _condtional_value_X154;
_Bool _condtional_value_X155;
struct list$1short$* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X153=(i=0));    _condtional_value_X153;    });    ({    (_condtional_value_X154=(i<num_value));    _condtional_value_X154;    });    ({    (_condtional_value_X155=(i++));    _condtional_value_X155;    })    ){
        list$1short$_push_back(self,values[i]);
    }
    __result_obj__66 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__66, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__66;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
_Bool _condtional_value_X156;
void* __right_value60 = (void*)0;
struct list_item$1short$* litem;
_Bool _condtional_value_X157;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_21;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_22;
struct list$1short$* __result_obj__65;
    if(({    (_condtional_value_X156=(self->len==0));    _condtional_value_X156;    })) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1short$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X157=(self->len==1));    _condtional_value_X157;    })) {
        litem_21=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1short$*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1short$*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__65 = self;
    return __result_obj__65;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it;
_Bool _condtional_value_X158;
struct list_item$1short$* prev_it;
    it=self->head;
    while(({    (_condtional_value_X158=(it!=((void*)0)));    _condtional_value_X158;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__67;
    __result_obj__67 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3424, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__67, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__67;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i;
_Bool _condtional_value_X159;
_Bool _condtional_value_X160;
_Bool _condtional_value_X161;
struct list$1int$* __result_obj__69;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X159=(i=0));    _condtional_value_X159;    });    ({    (_condtional_value_X160=(i<num_value));    _condtional_value_X160;    });    ({    (_condtional_value_X161=(i++));    _condtional_value_X161;    })    ){
        list$1int$_push_back(self,values[i]);
    }
    __result_obj__69 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__69, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__69;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
_Bool _condtional_value_X162;
void* __right_value65 = (void*)0;
struct list_item$1int$* litem;
_Bool _condtional_value_X163;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_23;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_24;
struct list$1int$* __result_obj__68;
    if(({    (_condtional_value_X162=(self->len==0));    _condtional_value_X162;    })) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X163=(self->len==1));    _condtional_value_X163;    })) {
        litem_23=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1int$*"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1int$*"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result_obj__68 = self;
    return __result_obj__68;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it;
_Bool _condtional_value_X164;
struct list_item$1int$* prev_it;
    it=self->head;
    while(({    (_condtional_value_X164=(it!=((void*)0)));    _condtional_value_X164;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__70;
    __result_obj__70 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3429, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__70, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__70;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i;
_Bool _condtional_value_X165;
_Bool _condtional_value_X166;
_Bool _condtional_value_X167;
struct list$1long$* __result_obj__72;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X165=(i=0));    _condtional_value_X165;    });    ({    (_condtional_value_X166=(i<num_value));    _condtional_value_X166;    });    ({    (_condtional_value_X167=(i++));    _condtional_value_X167;    })    ){
        list$1long$_push_back(self,values[i]);
    }
    __result_obj__72 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__72, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__72;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
_Bool _condtional_value_X168;
void* __right_value70 = (void*)0;
struct list_item$1long$* litem;
_Bool _condtional_value_X169;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_25;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_26;
struct list$1long$* __result_obj__71;
    if(({    (_condtional_value_X168=(self->len==0));    _condtional_value_X168;    })) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1long$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X169=(self->len==1));    _condtional_value_X169;    })) {
        litem_25=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1long$*"))));
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1long$*"))));
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        litem_26->item=item;
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result_obj__71 = self;
    return __result_obj__71;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it;
_Bool _condtional_value_X170;
struct list_item$1long$* prev_it;
    it=self->head;
    while(({    (_condtional_value_X170=(it!=((void*)0)));    _condtional_value_X170;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__73;
    __result_obj__73 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3434, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__73, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__73;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i;
_Bool _condtional_value_X171;
_Bool _condtional_value_X172;
_Bool _condtional_value_X173;
struct list$1float$* __result_obj__75;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X171=(i=0));    _condtional_value_X171;    });    ({    (_condtional_value_X172=(i<num_value));    _condtional_value_X172;    });    ({    (_condtional_value_X173=(i++));    _condtional_value_X173;    })    ){
        list$1float$_push_back(self,values[i]);
    }
    __result_obj__75 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__75, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__75;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
_Bool _condtional_value_X174;
void* __right_value75 = (void*)0;
struct list_item$1float$* litem;
_Bool _condtional_value_X175;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_27;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_28;
struct list$1float$* __result_obj__74;
    if(({    (_condtional_value_X174=(self->len==0));    _condtional_value_X174;    })) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1float$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X175=(self->len==1));    _condtional_value_X175;    })) {
        litem_27=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1float$*"))));
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        litem_27->item=item;
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        litem_28=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1float$*"))));
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it;
_Bool _condtional_value_X176;
struct list_item$1float$* prev_it;
    it=self->head;
    while(({    (_condtional_value_X176=(it!=((void*)0)));    _condtional_value_X176;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__76;
    __result_obj__76 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3439, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__76, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__76;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i;
_Bool _condtional_value_X177;
_Bool _condtional_value_X178;
_Bool _condtional_value_X179;
struct list$1double$* __result_obj__78;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X177=(i=0));    _condtional_value_X177;    });    ({    (_condtional_value_X178=(i<num_value));    _condtional_value_X178;    });    ({    (_condtional_value_X179=(i++));    _condtional_value_X179;    })    ){
        list$1double$_push_back(self,values[i]);
    }
    __result_obj__78 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__78, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__78;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
_Bool _condtional_value_X180;
void* __right_value80 = (void*)0;
struct list_item$1double$* litem;
_Bool _condtional_value_X181;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_29;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_30;
struct list$1double$* __result_obj__77;
    if(({    (_condtional_value_X180=(self->len==0));    _condtional_value_X180;    })) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1double$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X181=(self->len==1));    _condtional_value_X181;    })) {
        litem_29=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1double$*"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1double$*"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result_obj__77 = self;
    return __result_obj__77;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it;
_Bool _condtional_value_X182;
struct list_item$1double$* prev_it;
    it=self->head;
    while(({    (_condtional_value_X182=(it!=((void*)0)));    _condtional_value_X182;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__79;
    __result_obj__79 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3444, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__79, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__79;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
_Bool _condtional_value_X183;
_Bool _condtional_value_X184;
_Bool _condtional_value_X185;
    if(({    (_condtional_value_X183=(self==((void*)0)&&right==((void*)0)));    _condtional_value_X183;    })) {
        return (_Bool)1;
    }
    else if(({    (_condtional_value_X184=(self==((void*)0)));    _condtional_value_X184;    })) {
        return (_Bool)0;
    }
    else if(({    (_condtional_value_X185=(right==((void*)0)));    _condtional_value_X185;    })) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
_Bool _condtional_value_X186;
_Bool _condtional_value_X187;
_Bool _condtional_value_X188;
    if(({    (_condtional_value_X186=(self==((void*)0)&&right==((void*)0)));    _condtional_value_X186;    })) {
        return (_Bool)1;
    }
    else if(({    (_condtional_value_X187=(self==((void*)0)));    _condtional_value_X187;    })) {
        return (_Bool)0;
    }
    else if(({    (_condtional_value_X188=(right==((void*)0)));    _condtional_value_X188;    })) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right){
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right){
_Bool _condtional_value_X189;
_Bool _condtional_value_X190;
_Bool _condtional_value_X191;
    if(({    (_condtional_value_X189=(self==((void*)0)&&right==((void*)0)));    _condtional_value_X189;    })) {
        return (_Bool)1;
    }
    else if(({    (_condtional_value_X190=(self==((void*)0)));    _condtional_value_X190;    })) {
        return (_Bool)0;
    }
    else if(({    (_condtional_value_X191=(right==((void*)0)));    _condtional_value_X191;    })) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
_Bool _condtional_value_X192;
_Bool _condtional_value_X193;
_Bool _condtional_value_X194;
    if(({    (_condtional_value_X192=(self==((void*)0)&&right==((void*)0)));    _condtional_value_X192;    })) {
        return (_Bool)1;
    }
    else if(({    (_condtional_value_X193=(self==((void*)0)));    _condtional_value_X193;    })) {
        return (_Bool)0;
    }
    else if(({    (_condtional_value_X194=(right==((void*)0)));    _condtional_value_X194;    })) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
_Bool _condtional_value_X195;
_Bool _condtional_value_X196;
_Bool _condtional_value_X197;
    if(({    (_condtional_value_X195=(self==((void*)0)&&right==((void*)0)));    _condtional_value_X195;    })) {
        return (_Bool)0;
    }
    else if(({    (_condtional_value_X196=(self==((void*)0)));    _condtional_value_X196;    })) {
        return (_Bool)1;
    }
    else if(({    (_condtional_value_X197=(right==((void*)0)));    _condtional_value_X197;    })) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
_Bool _condtional_value_X198;
_Bool _condtional_value_X199;
_Bool _condtional_value_X200;
    if(({    (_condtional_value_X198=(self==((void*)0)&&right==((void*)0)));    _condtional_value_X198;    })) {
        return (_Bool)0;
    }
    else if(({    (_condtional_value_X199=(self==((void*)0)));    _condtional_value_X199;    })) {
        return (_Bool)1;
    }
    else if(({    (_condtional_value_X200=(right==((void*)0)));    _condtional_value_X200;    })) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
_Bool _condtional_value_X201;
void* __right_value84 = (void*)0;
char* __result_obj__80;
int len;
void* __right_value85 = (void*)0;
char* result;
char* __result_obj__81;
    if(({    (_condtional_value_X201=(self==((void*)0)||right==((void*)0)));    _condtional_value_X201;    })) {
        __result_obj__80 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__80;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/usr/local/include/comelang.h", 3673, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__81 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__81;
}

char* string_operator_add(char* self, char* right){
_Bool _condtional_value_X202;
void* __right_value86 = (void*)0;
char* __result_obj__82;
int len;
void* __right_value87 = (void*)0;
char* result;
char* __result_obj__83;
    if(({    (_condtional_value_X202=(self==((void*)0)||right==((void*)0)));    _condtional_value_X202;    })) {
        __result_obj__82 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__82;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/usr/local/include/comelang.h", 3688, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__83 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__83;
}

char* charp_operator_mult(char* self, int right){
_Bool _condtional_value_X203;
void* __right_value88 = (void*)0;
char* __result_obj__84;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf;
int i;
_Bool _condtional_value_X204;
_Bool _condtional_value_X205;
_Bool _condtional_value_X206;
void* __right_value91 = (void*)0;
char* __result_obj__85;
    if(({    (_condtional_value_X203=(self==((void*)0)));    _condtional_value_X203;    })) {
        __result_obj__84 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__84;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3701, "struct buffer*"))));
    for(    ({    (_condtional_value_X204=(i=0));    _condtional_value_X204;    });    ({    (_condtional_value_X205=(i<right));    _condtional_value_X205;    });    ({    (_condtional_value_X206=(i++));    _condtional_value_X206;    })    ){
        buffer_append_str(buf,self);
    }
    __result_obj__85 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__85;
}

char* string_operator_mult(char* self, int right){
_Bool _condtional_value_X207;
void* __right_value92 = (void*)0;
char* __result_obj__86;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf;
int i;
_Bool _condtional_value_X208;
_Bool _condtional_value_X209;
_Bool _condtional_value_X210;
void* __right_value95 = (void*)0;
char* __result_obj__87;
    if(({    (_condtional_value_X207=(self==((void*)0)));    _condtional_value_X207;    })) {
        __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__86;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3715, "struct buffer*"))));
    for(    ({    (_condtional_value_X208=(i=0));    _condtional_value_X208;    });    ({    (_condtional_value_X209=(i<right));    _condtional_value_X209;    });    ({    (_condtional_value_X210=(i++));    _condtional_value_X210;    })    ){
        buffer_append_str(buf,self);
    }
    __result_obj__87 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__87 = come_decrement_ref_count(__result_obj__87, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__87;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result;
int i;
_Bool _condtional_value_X211;
_Bool _condtional_value_X212;
_Bool _condtional_value_X213;
_Bool _condtional_value_X214;
    result=(_Bool)0;
    for(    ({    (_condtional_value_X211=(i=0));    _condtional_value_X211;    });    ({    (_condtional_value_X212=(i<len));    _condtional_value_X212;    });    ({    (_condtional_value_X213=(i++));    _condtional_value_X213;    })    ){
        if(({        (_condtional_value_X214=(strncmp(self[i],str,strlen(self[i]))==0));        _condtional_value_X214;        })) {
            result=(_Bool)1;
            break;
        }
    }
    return result;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int _Bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
_Bool _condtional_value_X215;
int result;
char* p;
_Bool _condtional_value_X216;
    if(({    (_condtional_value_X215=(value==((void*)0)));    _condtional_value_X215;    })) {
        return 0;
    }
    result=0;
    p=value;
    while(({    (_condtional_value_X216=(*p));    _condtional_value_X216;    })) {
        result+=(*p);
        p++;
    }
    return result;
}

unsigned int string_get_hash_key(char* value){
_Bool _condtional_value_X217;
int result;
char* p;
_Bool _condtional_value_X218;
    if(({    (_condtional_value_X217=(value==((void*)0)));    _condtional_value_X217;    })) {
        return 0;
    }
    result=0;
    p=value;
    while(({    (_condtional_value_X218=(*p));    _condtional_value_X218;    })) {
        result+=(*p);
        p++;
    }
    return result;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
    return self;
}

_Bool _Bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

_Bool xiswalpha(int c){
_Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result;
}

_Bool xiswblank(int c){
    return c==32||c==9;
}

_Bool xiswdigit(int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xiswascii(int c){
_Bool result;
    result=(c>=32&&c<=126);
    return result;
}

_Bool xisalpha(char c){
_Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result;
    result=(c>=32&&c<=126);
    return result;
}

_Bool xispunct(char c){
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
}

int string_length(char* str){
_Bool _condtional_value_X219;
    if(({    (_condtional_value_X219=(str==((void*)0)));    _condtional_value_X219;    })) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
_Bool _condtional_value_X220;
    if(({    (_condtional_value_X220=(str==((void*)0)));    _condtional_value_X220;    })) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
_Bool _condtional_value_X221;
void* __right_value96 = (void*)0;
char* __result_obj__88;
int len;
void* __right_value97 = (void*)0;
char* result;
int i;
_Bool _condtional_value_X222;
_Bool _condtional_value_X223;
_Bool _condtional_value_X224;
char* __result_obj__89;
    if(({    (_condtional_value_X221=(str==((void*)0)));    _condtional_value_X221;    })) {
        __result_obj__88 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__88 = come_decrement_ref_count(__result_obj__88, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__88;
    }
    len=strlen(str);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/usr/local/include/comelang.h", 3983, "char*"));
    for(    ({    (_condtional_value_X222=(i=0));    _condtional_value_X222;    });    ({    (_condtional_value_X223=(i<len));    _condtional_value_X223;    });    ({    (_condtional_value_X224=(i++));    _condtional_value_X224;    })    ){
        result[i]=str[len-i-1];
    }
    result[len]=0;
    __result_obj__89 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__89 = come_decrement_ref_count(__result_obj__89, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__89;
}

char* string_operator_load_range_element(char* str, int head, int tail){
_Bool _condtional_value_X225;
void* __right_value98 = (void*)0;
char* __result_obj__90;
int len;
_Bool _condtional_value_X226;
_Bool _condtional_value_X227;
_Bool _condtional_value_X228;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__91;
_Bool _condtional_value_X229;
_Bool _condtional_value_X230;
_Bool _condtional_value_X231;
void* __right_value101 = (void*)0;
char* __result_obj__92;
_Bool _condtional_value_X232;
void* __right_value102 = (void*)0;
char* __result_obj__93;
void* __right_value103 = (void*)0;
char* result;
char* __result_obj__94;
    if(({    (_condtional_value_X225=(str==((void*)0)));    _condtional_value_X225;    })) {
        __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__90;
    }
    len=strlen(str);
    if(({    (_condtional_value_X226=(head<0));    _condtional_value_X226;    })) {
        head+=len;
    }
    if(({    (_condtional_value_X227=(tail<0));    _condtional_value_X227;    })) {
        tail+=len+1;
    }
    if(({    (_condtional_value_X228=(head>tail));    _condtional_value_X228;    })) {
        __result_obj__91 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__91 = come_decrement_ref_count(__result_obj__91, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__91;
    }
    if(({    (_condtional_value_X229=(head<0));    _condtional_value_X229;    })) {
        head=0;
    }
    if(({    (_condtional_value_X230=(tail>=len));    _condtional_value_X230;    })) {
        tail=len;
    }
    if(({    (_condtional_value_X231=(head==tail));    _condtional_value_X231;    })) {
        __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__92;
    }
    if(({    (_condtional_value_X232=(tail-head+1<1));    _condtional_value_X232;    })) {
        __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__93;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4029, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__94 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__94;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
_Bool _condtional_value_X233;
void* __right_value104 = (void*)0;
char* __result_obj__95;
int len;
_Bool _condtional_value_X234;
_Bool _condtional_value_X235;
_Bool _condtional_value_X236;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__96;
_Bool _condtional_value_X237;
_Bool _condtional_value_X238;
_Bool _condtional_value_X239;
void* __right_value107 = (void*)0;
char* __result_obj__97;
_Bool _condtional_value_X240;
void* __right_value108 = (void*)0;
char* __result_obj__98;
void* __right_value109 = (void*)0;
char* result;
char* __result_obj__99;
    if(({    (_condtional_value_X233=(str==((void*)0)));    _condtional_value_X233;    })) {
        __result_obj__95 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__95 = come_decrement_ref_count(__result_obj__95, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__95;
    }
    len=strlen(str);
    if(({    (_condtional_value_X234=(head<0));    _condtional_value_X234;    })) {
        head+=len;
    }
    if(({    (_condtional_value_X235=(tail<0));    _condtional_value_X235;    })) {
        tail+=len+1;
    }
    if(({    (_condtional_value_X236=(head>tail));    _condtional_value_X236;    })) {
        __result_obj__96 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__96;
    }
    if(({    (_condtional_value_X237=(head<0));    _condtional_value_X237;    })) {
        head=0;
    }
    if(({    (_condtional_value_X238=(tail>=len));    _condtional_value_X238;    })) {
        tail=len;
    }
    if(({    (_condtional_value_X239=(head==tail));    _condtional_value_X239;    })) {
        __result_obj__97 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__97;
    }
    if(({    (_condtional_value_X240=(tail-head+1<1));    _condtional_value_X240;    })) {
        __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__98;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4072, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__99 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__99 = come_decrement_ref_count(__result_obj__99, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__99;
}

char* charp_substring(char* str, int head, int tail){
_Bool _condtional_value_X241;
void* __right_value110 = (void*)0;
char* __result_obj__100;
int len;
_Bool _condtional_value_X242;
_Bool _condtional_value_X243;
_Bool _condtional_value_X244;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__101;
_Bool _condtional_value_X245;
_Bool _condtional_value_X246;
_Bool _condtional_value_X247;
void* __right_value113 = (void*)0;
char* __result_obj__102;
_Bool _condtional_value_X248;
void* __right_value114 = (void*)0;
char* __result_obj__103;
void* __right_value115 = (void*)0;
char* result;
char* __result_obj__104;
    if(({    (_condtional_value_X241=(str==((void*)0)));    _condtional_value_X241;    })) {
        __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__100;
    }
    len=strlen(str);
    if(({    (_condtional_value_X242=(head<0));    _condtional_value_X242;    })) {
        head+=len;
    }
    if(({    (_condtional_value_X243=(tail<0));    _condtional_value_X243;    })) {
        tail+=len+1;
    }
    if(({    (_condtional_value_X244=(head>tail));    _condtional_value_X244;    })) {
        __result_obj__101 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__101;
    }
    if(({    (_condtional_value_X245=(head<0));    _condtional_value_X245;    })) {
        head=0;
    }
    if(({    (_condtional_value_X246=(tail>=len));    _condtional_value_X246;    })) {
        tail=len;
    }
    if(({    (_condtional_value_X247=(head==tail));    _condtional_value_X247;    })) {
        __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__102;
    }
    if(({    (_condtional_value_X248=(tail-head+1<1));    _condtional_value_X248;    })) {
        __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__103;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4115, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__104 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__104;
}

char* xsprintf(char* msg, ...){
_Bool _condtional_value_X249;
void* __right_value116 = (void*)0;
char* __result_obj__105;
va_list args;
char* result;
int len;
_Bool _condtional_value_X250;
void* __right_value117 = (void*)0;
char* __result_obj__106;
void* __right_value118 = (void*)0;
char* result2;
char* __result_obj__107;
result = (void*)0;
    if(({    (_condtional_value_X249=(msg==((void*)0)));    _condtional_value_X249;    })) {
        __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__105;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(({    (_condtional_value_X250=(len<0));    _condtional_value_X250;    })) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__106;
    }
    result2=(char*)come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__107 = (char*)come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__107;
}

char* charp_delete(char* str, int head, int tail){
_Bool _condtional_value_X251;
void* __right_value119 = (void*)0;
char* __result_obj__108;
int len;
_Bool _condtional_value_X252;
void* __right_value120 = (void*)0;
char* __result_obj__109;
_Bool _condtional_value_X253;
_Bool _condtional_value_X254;
_Bool _condtional_value_X255;
_Bool _condtional_value_X256;
void* __right_value121 = (void*)0;
char* __result_obj__110;
_Bool _condtional_value_X257;
void* __right_value122 = (void*)0;
char* result;
char* __result_obj__111;
    if(({    (_condtional_value_X251=(str==((void*)0)));    _condtional_value_X251;    })) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__108;
    }
    len=strlen(str);
    if(({    (_condtional_value_X252=(strcmp(str,"")==0));    _condtional_value_X252;    })) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__109;
    }
    if(({    (_condtional_value_X253=(head<0));    _condtional_value_X253;    })) {
        head+=len;
    }
    if(({    (_condtional_value_X254=(tail<0));    _condtional_value_X254;    })) {
        tail+=len+1;
    }
    if(({    (_condtional_value_X255=(head<0));    _condtional_value_X255;    })) {
        head=0;
    }
    if(({    (_condtional_value_X256=(tail<0));    _condtional_value_X256;    })) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__110;
    }
    if(({    (_condtional_value_X257=(tail>=len));    _condtional_value_X257;    })) {
        tail=len;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len-(tail-head)+1)), "/usr/local/include/comelang.h", 4177, "char*"));
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    result[len-(tail-head)]=0;
    __result_obj__111 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__111;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__112 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__112, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__112;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X259;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X259=(it!=((void*)0)));    _condtional_value_X259;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _condtional_value_X260;
    if(({    (_condtional_value_X260=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X260;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X265;
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj13;
_Bool _condtional_value_X266;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_31;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_32;
char* __dec_obj15;
struct list$1char$ph* __result_obj__114;
    if(({    (_condtional_value_X265=(self->len==0));    _condtional_value_X265;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj13=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X266=(self->len==1));    _condtional_value_X266;    })) {
        litem_31=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1char$ph*"))));
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        __dec_obj14=litem_31->item,
        litem_31->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        litem_32=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1char$ph*"))));
        litem_32->prev=self->tail;
        litem_32->next=((void*)0);
        __dec_obj15=litem_32->item,
        litem_32->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_32;
        self->tail=litem_32;
    }
    self->len++;
    __result_obj__114 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__114;
}

struct list$1char$ph* charp_split_char(char* self, char c){
_Bool _condtional_value_X258;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__113;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str;
int i;
_Bool _condtional_value_X261;
_Bool _condtional_value_X262;
_Bool _condtional_value_X263;
_Bool _condtional_value_X264;
void* __right_value132 = (void*)0;
_Bool _condtional_value_X267;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__115;
    if(({    (_condtional_value_X258=(self==((void*)0)));    _condtional_value_X258;    })) {
        __result_obj__113 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4190, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__113, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__113;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4193, "struct list$1char$ph*"))));
    str=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4195, "struct buffer*"))));
    for(    ({    (_condtional_value_X261=(i=0));    _condtional_value_X261;    });    ({    (_condtional_value_X262=(i<charp_length(self)));    _condtional_value_X262;    });    ({    (_condtional_value_X263=(i++));    _condtional_value_X263;    })    ){
        if(({        (_condtional_value_X264=(self[i]==c));        _condtional_value_X264;        })) {
            list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(str->buf)));
            buffer_reset(str);
        }
        else {
            buffer_append_char(str,self[i]);
        }
    }
    if(({    (_condtional_value_X267=(buffer_length(str)!=0));    _condtional_value_X267;    })) {
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(str->buf)));
    }
    __result_obj__115 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__115, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__115;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__116;
    __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__116;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__117;
    __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__117;
}

char* charp_printable(char* str){
int len;
void* __right_value136 = (void*)0;
char* result;
int n;
int i;
_Bool _condtional_value_X268;
_Bool _condtional_value_X269;
_Bool _condtional_value_X270;
char c;
_Bool _condtional_value_X271;
char* __result_obj__118;
    len=charp_length(str);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/comelang.h", 4227, "char*"));
    n=0;
    for(    ({    (_condtional_value_X268=(i=0));    _condtional_value_X268;    });    ({    (_condtional_value_X269=(i<len));    _condtional_value_X269;    });    ({    (_condtional_value_X270=(i++));    _condtional_value_X270;    })    ){
        c=str[i];
        if(({        (_condtional_value_X271=((c>=0&&c<32)||c==127));        _condtional_value_X271;        })) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
    __result_obj__118 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__118;
}

char* charp_sub_plain(char* self, char* str, char* replace){
_Bool _condtional_value_X272;
void* __right_value137 = (void*)0;
char* __result_obj__119;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result;
char* p;
_Bool _condtional_value_X273;
char* p2;
_Bool _condtional_value_X274;
_Bool _condtional_value_X275;
void* __right_value140 = (void*)0;
char* __result_obj__120;
    if(({    (_condtional_value_X272=(str==((void*)0)||replace==((void*)0)));    _condtional_value_X272;    })) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__119;
    }
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4255, "struct buffer*"))));
    p=self;
    while(({    (_condtional_value_X273=((_Bool)1));    _condtional_value_X273;    })) {
        p2=strstr(p,str);
        if(({        (_condtional_value_X274=(p2==((void*)0)));        _condtional_value_X274;        })) {
            p2=p;
            while(({            (_condtional_value_X275=(*p2));            _condtional_value_X275;            })) {
                p2++;
            }
            buffer_append(result,p,p2-p);
            break;
        }
        buffer_append(result,p,p2-p);
        buffer_append_str(result,replace);
        p=p2+strlen(str);
    }
    __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__120;
}

char* xbasename(char* path){
_Bool _condtional_value_X276;
void* __right_value141 = (void*)0;
char* __result_obj__121;
char* p;
_Bool _condtional_value_X277;
_Bool _condtional_value_X278;
_Bool _condtional_value_X279;
void* __right_value142 = (void*)0;
char* __result_obj__122;
void* __right_value143 = (void*)0;
char* __result_obj__123;
void* __right_value144 = (void*)0;
char* __result_obj__124;
    if(({    (_condtional_value_X276=(path==((void*)0)));    _condtional_value_X276;    })) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__121;
    }
    p=path+strlen(path);
    while(({    (_condtional_value_X277=(p>=path));    _condtional_value_X277;    })) {
        if(({        (_condtional_value_X278=(*p==47));        _condtional_value_X278;        })) {
            break;
        }
        else {
            p--;
        }
    }
    if(({    (_condtional_value_X279=(p<path));    _condtional_value_X279;    })) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__122;
    }
    else {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__123;
    }
    __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__124;
}

char* xnoextname(char* path){
_Bool _condtional_value_X280;
void* __right_value145 = (void*)0;
char* __result_obj__125;
void* __right_value146 = (void*)0;
char* path2;
char* p;
_Bool _condtional_value_X281;
_Bool _condtional_value_X282;
_Bool _condtional_value_X283;
void* __right_value147 = (void*)0;
char* __result_obj__126;
void* __right_value148 = (void*)0;
char* __result_obj__127;
void* __right_value149 = (void*)0;
char* __result_obj__128;
    if(({    (_condtional_value_X280=(path==((void*)0)));    _condtional_value_X280;    })) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__125;
    }
    path2=(char*)come_increment_ref_count(xbasename(path));
    p=path2+strlen(path2);
    while(({    (_condtional_value_X281=(p>=path2));    _condtional_value_X281;    })) {
        if(({        (_condtional_value_X282=(*p==46));        _condtional_value_X282;        })) {
            break;
        }
        else {
            p--;
        }
    }
    if(({    (_condtional_value_X283=(p<path2));    _condtional_value_X283;    })) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__126;
    }
    else {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2,0,p-path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__127;
    }
    __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__128;
}

char* xextname(char* path){
_Bool _condtional_value_X284;
void* __right_value150 = (void*)0;
char* __result_obj__129;
char* p;
_Bool _condtional_value_X285;
_Bool _condtional_value_X286;
_Bool _condtional_value_X287;
void* __right_value151 = (void*)0;
char* __result_obj__130;
void* __right_value152 = (void*)0;
char* __result_obj__131;
void* __right_value153 = (void*)0;
char* __result_obj__132;
    if(({    (_condtional_value_X284=(path==((void*)0)));    _condtional_value_X284;    })) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__129;
    }
    p=path+strlen(path);
    while(({    (_condtional_value_X285=(p>=path));    _condtional_value_X285;    })) {
        if(({        (_condtional_value_X286=(*p==46));        _condtional_value_X286;        })) {
            break;
        }
        else {
            p--;
        }
    }
    if(({    (_condtional_value_X287=(p<path));    _condtional_value_X287;    })) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__130;
    }
    else {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__131;
    }
    __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__132;
}

char* bool_to_string(_Bool self){
_Bool _condtional_value_X288;
void* __right_value154 = (void*)0;
char* __result_obj__133;
void* __right_value155 = (void*)0;
char* __result_obj__134;
    if(({    (_condtional_value_X288=(self));    _condtional_value_X288;    })) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__133;
    }
    else {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__134;
    }
}

char* _Bool_to_string(_Bool self){
_Bool _condtional_value_X289;
void* __right_value156 = (void*)0;
char* __result_obj__135;
void* __right_value157 = (void*)0;
char* __result_obj__136;
    if(({    (_condtional_value_X289=(self));    _condtional_value_X289;    })) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__135;
    }
    else {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__136;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__137;
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__137;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__138;
    __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__138;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__139;
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__139;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__140;
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__140;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__141;
    __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__141;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__142;
    __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__142;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__143;
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__143;
}

char* string_to_string(char* self){
_Bool _condtional_value_X290;
void* __right_value165 = (void*)0;
char* __result_obj__144;
void* __right_value166 = (void*)0;
char* __result_obj__145;
    if(({    (_condtional_value_X290=(self==((void*)0)));    _condtional_value_X290;    })) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__144;
    }
    __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__145;
}

char* charp_to_string(char* self){
_Bool _condtional_value_X291;
void* __right_value167 = (void*)0;
char* __result_obj__146;
void* __right_value168 = (void*)0;
char* __result_obj__147;
    if(({    (_condtional_value_X291=(self==((void*)0)));    _condtional_value_X291;    })) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__146;
    }
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__147;
}

int bool_compare(_Bool left, _Bool right){
_Bool _condtional_value_X292;
_Bool _condtional_value_X293;
_Bool _condtional_value_X294;
    if(({    (_condtional_value_X292=(!left&&right));    _condtional_value_X292;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X293=(left&&right));    _condtional_value_X293;    })) {
        return 0;
    }
    else if(({    (_condtional_value_X294=(!left&&!right));    _condtional_value_X294;    })) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int _Bool_compare(_Bool left, _Bool right){
_Bool _condtional_value_X295;
_Bool _condtional_value_X296;
_Bool _condtional_value_X297;
    if(({    (_condtional_value_X295=(!left&&right));    _condtional_value_X295;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X296=(left&&right));    _condtional_value_X296;    })) {
        return 0;
    }
    else if(({    (_condtional_value_X297=(!left&&!right));    _condtional_value_X297;    })) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
_Bool _condtional_value_X298;
_Bool _condtional_value_X299;
    if(({    (_condtional_value_X298=(left<right));    _condtional_value_X298;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X299=(left>right));    _condtional_value_X299;    })) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
_Bool _condtional_value_X300;
_Bool _condtional_value_X301;
    if(({    (_condtional_value_X300=(left<right));    _condtional_value_X300;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X301=(left>right));    _condtional_value_X301;    })) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
_Bool _condtional_value_X302;
_Bool _condtional_value_X303;
    if(({    (_condtional_value_X302=(left<right));    _condtional_value_X302;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X303=(left>right));    _condtional_value_X303;    })) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
_Bool _condtional_value_X304;
_Bool _condtional_value_X305;
    if(({    (_condtional_value_X304=(left<right));    _condtional_value_X304;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X305=(left>right));    _condtional_value_X305;    })) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
_Bool _condtional_value_X306;
_Bool _condtional_value_X307;
    if(({    (_condtional_value_X306=(left<right));    _condtional_value_X306;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X307=(left>right));    _condtional_value_X307;    })) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
_Bool _condtional_value_X308;
_Bool _condtional_value_X309;
    if(({    (_condtional_value_X308=(left<right));    _condtional_value_X308;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X309=(left>right));    _condtional_value_X309;    })) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
_Bool _condtional_value_X310;
_Bool _condtional_value_X311;
    if(({    (_condtional_value_X310=(left<right));    _condtional_value_X310;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X311=(left>right));    _condtional_value_X311;    })) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
_Bool _condtional_value_X312;
_Bool _condtional_value_X313;
_Bool _condtional_value_X314;
    if(({    (_condtional_value_X312=(left==((void*)0)&&right==((void*)0)));    _condtional_value_X312;    })) {
        return 0;
    }
    else if(({    (_condtional_value_X313=(left==((void*)0)));    _condtional_value_X313;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X314=(right==((void*)0)));    _condtional_value_X314;    })) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
_Bool _condtional_value_X315;
_Bool _condtional_value_X316;
_Bool _condtional_value_X317;
    if(({    (_condtional_value_X315=(left==((void*)0)&&right==((void*)0)));    _condtional_value_X315;    })) {
        return 0;
    }
    else if(({    (_condtional_value_X316=(left==((void*)0)));    _condtional_value_X316;    })) {
        return -1;
    }
    else if(({    (_condtional_value_X317=(right==((void*)0)));    _condtional_value_X317;    })) {
        return 1;
    }
    return strcmp(left,right);
}

char* FILE_read(struct __sFILE* f){
_Bool _condtional_value_X318;
void* __right_value169 = (void*)0;
char* __result_obj__148;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct buffer* buf;
_Bool _condtional_value_X319;
int size;
_Bool _condtional_value_X320;
void* __right_value172 = (void*)0;
char* __result_obj__149;
    if(({    (_condtional_value_X318=(f==((void*)0)));    _condtional_value_X318;    })) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__148;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4620, "struct buffer*"))));
    while(({    (_condtional_value_X319=(1));    _condtional_value_X319;    })) {
        char buf2[1024];
        memset(&buf2, 0, sizeof(char)        *(1024)        );
        size=fread(buf2,1,1024,f);
        buffer_append(buf,buf2,size);
        if(({        (_condtional_value_X320=(size<1024));        _condtional_value_X320;        })) {
            break;
        }
    }
    __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value172=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__149;
}

int FILE_write(struct __sFILE* f, char* str){
_Bool _condtional_value_X321;
    if(({    (_condtional_value_X321=(f==((void*)0)||str==((void*)0)));    _condtional_value_X321;    })) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct __sFILE* f){
_Bool _condtional_value_X322;
int result;
_Bool _condtional_value_X323;
    if(({    (_condtional_value_X322=(f==((void*)0)));    _condtional_value_X322;    })) {
        return -1;
    }
    result=fclose(f);
    if(({    (_condtional_value_X323=(result<0));    _condtional_value_X323;    })) {
        return result;
    }
    return result;
}

struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...){
_Bool _condtional_value_X324;
struct __sFILE* __result_obj__150;
va_list args;
int result;
_Bool _condtional_value_X325;
struct __sFILE* __result_obj__151;
struct __sFILE* __result_obj__152;
    if(({    (_condtional_value_X324=(f==((void*)0)||msg==((void*)0)));    _condtional_value_X324;    })) {
        __result_obj__150 = f;
        return __result_obj__150;
    }
    char msg2[1024*2*2*2];
    memset(&msg2, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args,msg);
    vsnprintf(msg2,1024*2*2*2,msg,args);
    __builtin_va_end(args);
    result=fprintf(f,"%s",msg2);
    if(({    (_condtional_value_X325=(result<0));    _condtional_value_X325;    })) {
        __result_obj__151 = f;
        return __result_obj__151;
    }
    __result_obj__152 = f;
    return __result_obj__152;
}

void FILE_on_drop(struct __sFILE* self){
_Bool _condtional_value_X326;
    if(({    (_condtional_value_X326=(self));    _condtional_value_X326;    })) {
        fclose(self);
    }
}

int charp_write(char* self, char* file_name, _Bool append){
_Bool _condtional_value_X327;
struct __sFILE* f;
_Bool _condtional_value_X328;
_Bool _condtional_value_X329;
int result;
_Bool _condtional_value_X330;
int result2;
_Bool _condtional_value_X331;
f = (void*)0;
    if(({    (_condtional_value_X327=(self==((void*)0)||file_name==((void*)0)));    _condtional_value_X327;    })) {
        return -1;
    }
    if(({    (_condtional_value_X328=(append));    _condtional_value_X328;    })) {
        f=fopen(file_name,"a");
    }
    else {
        f=fopen(file_name,"w");
    }
    if(({    (_condtional_value_X329=(f==((void*)0)));    _condtional_value_X329;    })) {
        return -1;
    }
    result=fwrite(self,strlen(self),1,f);
    if(({    (_condtional_value_X330=(result<0));    _condtional_value_X330;    })) {
        return result;
    }
    result2=fclose(f);
    if(({    (_condtional_value_X331=(result2<0));    _condtional_value_X331;    })) {
        return result2;
    }
    return result;
}

char* charp_read(char* file_name){
_Bool _condtional_value_X332;
void* __right_value173 = (void*)0;
char* __result_obj__153;
struct __sFILE* f;
_Bool _condtional_value_X333;
void* __right_value174 = (void*)0;
char* __result_obj__154;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct buffer* buf;
_Bool _condtional_value_X334;
int size;
_Bool _condtional_value_X335;
void* __right_value177 = (void*)0;
char* result;
int result2;
_Bool _condtional_value_X336;
void* __right_value178 = (void*)0;
char* __result_obj__155;
char* __result_obj__156;
    if(({    (_condtional_value_X332=(file_name==((void*)0)));    _condtional_value_X332;    })) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__153;
    }
    f=fopen(file_name,"r");
    if(({    (_condtional_value_X333=(f==((void*)0)));    _condtional_value_X333;    })) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__154;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4732, "struct buffer*"))));
    while(({    (_condtional_value_X334=(1));    _condtional_value_X334;    })) {
        char buf2[1024];
        memset(&buf2, 0, sizeof(char)        *(1024)        );
        size=fread(buf2,1,1024,f);
        buffer_append(buf,buf2,size);
        if(({        (_condtional_value_X335=(size<1024));        _condtional_value_X335;        })) {
            break;
        }
    }
    result=(char*)come_increment_ref_count(buffer_to_string(buf));
    result2=fclose(f);
    if(({    (_condtional_value_X336=(result2<0));    _condtional_value_X336;    })) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__155;
    }
    __result_obj__156 = (char*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__156;
}

struct list$1char$ph* FILE_readlines(struct __sFILE* f){
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct list$1char$ph* result;
_Bool _condtional_value_X337;
struct list$1char$ph* __result_obj__157;
_Bool _condtional_value_X338;
_Bool _condtional_value_X339;
void* __right_value181 = (void*)0;
struct list$1char$ph* __result_obj__158;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4759, "struct list$1char$ph*"))));
    if(({    (_condtional_value_X337=(f==((void*)0)));    _condtional_value_X337;    })) {
        __result_obj__157 = (struct list$1char$ph*)come_increment_ref_count(result);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__157, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__157;
    }
    while(({    (_condtional_value_X338=(1));    _condtional_value_X338;    })) {
        char buf[1024];
        memset(&buf, 0, sizeof(char)        *(1024)        );
        if(({        (_condtional_value_X339=(fgets(buf,1024,f)==((void*)0)));        _condtional_value_X339;        })) {
            break;
        }
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(buf)));
    }
    __result_obj__158 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__158, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__158;
}

char* charp_puts(char* self){
_Bool _condtional_value_X340;
void* __right_value182 = (void*)0;
char* __result_obj__159;
void* __right_value183 = (void*)0;
char* __result_obj__160;
    if(({    (_condtional_value_X340=(self==((void*)0)));    _condtional_value_X340;    })) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value182=__builtin_string(""))));
        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__159;
    }
    puts(self);
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value183=__builtin_string(self))));
    (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__160;
}

char* charp_print(char* self){
_Bool _condtional_value_X341;
void* __right_value184 = (void*)0;
char* __result_obj__161;
void* __right_value185 = (void*)0;
char* __result_obj__162;
    if(({    (_condtional_value_X341=(self==((void*)0)));    _condtional_value_X341;    })) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value184=__builtin_string(""))));
        (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__161;
    }
    printf("%s",self);
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value185=__builtin_string(self))));
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__162;
}

char* charp_printf(char* self, ...){
_Bool _condtional_value_X342;
void* __right_value186 = (void*)0;
char* __result_obj__163;
char* msg2;
va_list args;
void* __right_value187 = (void*)0;
char* __result_obj__164;
msg2 = (void*)0;
    if(({    (_condtional_value_X342=(self==((void*)0)));    _condtional_value_X342;    })) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value186=__builtin_string(""))));
        (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__163;
    }
    __builtin_va_start(args,self);
    vasprintf(&msg2,self,args);
    __builtin_va_end(args);
    printf("%s",msg2);
    free(msg2);
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value187=__builtin_string(self))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__164;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

int assert_v2(int exp){
_Bool _condtional_value_X343;
    if(({    (_condtional_value_X343=(exp));    _condtional_value_X343;    })) {
    }
    else {
        puts("assert failure");
        stackframe_v2();
        exit(2);
    }
}

_Bool wchar_t_equals(int left, int right){
    return left==right;
}

_Bool wchar_t_operator_equals(int left, int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(int left, int right){
    return left!=right;
}

unsigned int wchar_t_get_hash_key(int value){
    return value;
}

unsigned int wchar_tp_get_hash_key(int* value){
unsigned int result;
int* p;
_Bool _condtional_value_X344;
    result=0;
    p=value;
    while(({    (_condtional_value_X344=(*p));    _condtional_value_X344;    })) {
        result+=*p;
        p++;
    }
    return result;
}

char* wchar_t_to_string(int wc){
void* __right_value188 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value188=xsprintf("%ls",wc))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__165;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i;
_Bool _condtional_value_X345;
_Bool _condtional_value_X346;
_Bool _condtional_value_X347;
    for(    ({    (_condtional_value_X345=(i=0));    _condtional_value_X345;    });    ({    (_condtional_value_X346=(i<self));    _condtional_value_X346;    });    ({    (_condtional_value_X347=(i++));    _condtional_value_X347;    })    ){
        block(parent,i);
    }
}

static void match_context_finalize(struct anonymous_typeX16* self){
}

int re_matchp(struct re_program* pattern, const char* text, int* matchlength, struct re_capture* captures, int max_captures){
_Bool _condtional_value_X348;
struct re_program* program;
struct regex_t* start;
_Bool _condtional_value_X349;
struct anonymous_typeX16 ctx;
_Bool _condtional_value_X350;
_Bool _condtional_value_X351;
_Bool _condtional_value_X352;
_Bool _condtional_value_X353;
_Bool _condtional_value_X354;
int __result_obj__166;
int __result_obj__167;
_Bool _condtional_value_X355;
_Bool _condtional_value_X356;
_Bool _condtional_value_X357;
_Bool _condtional_value_X358;
int __result_obj__168;
int __result_obj__169;
_Bool _condtional_value_X359;
int __result_obj__170;
memset(&ctx, 0, sizeof(struct anonymous_typeX16));
    *matchlength=0;
    if(({    (_condtional_value_X348=(pattern==0));    _condtional_value_X348;    })) {
        return -1;
    }
    program=(struct re_program*)pattern;
    start=program->start;
    if(({    (_condtional_value_X349=(start==0));    _condtional_value_X349;    })) {
        return -1;
    }
    ctx.base=text;
    ctx.captures=(((captures!=0&&max_captures>0))?(captures):(0));
    ctx.capture_capacity=(((captures!=0&&max_captures>0))?(max_captures):(0));
    if(({    (_condtional_value_X350=(ctx.capture_capacity>64));    _condtional_value_X350;    })) {
        ctx.capture_capacity=64;
    }
    ctx.total_groups=program->group_count;
    if(({    (_condtional_value_X351=(ctx.captures!=0));    _condtional_value_X351;    })) {
        clear_captures(&ctx);
    }
    if(({    (_condtional_value_X352=(start->type==(2)));    _condtional_value_X352;    })) {
        const char* end=matchpattern(start->next,text,&ctx);
        if(({        (_condtional_value_X353=(end!=0));        _condtional_value_X353;        })) {
            *matchlength=(int)(end-text);
            if(({            (_condtional_value_X354=(ctx.captures!=0));            _condtional_value_X354;            })) {
            }
            __result_obj__166 = 0;
            come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
            return __result_obj__166;
        }
        __result_obj__167 = -1;
        come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        return __result_obj__167;
    }
    else {
        const char* cursor=text;
        while(({        (_condtional_value_X355=(1));        _condtional_value_X355;        })) {
            if(({            (_condtional_value_X356=(ctx.captures!=0));            _condtional_value_X356;            })) {
                clear_captures(&ctx);
            }
            const char* end_33=matchpattern(start,cursor,&ctx);
            if(({            (_condtional_value_X357=(end_33!=0));            _condtional_value_X357;            })) {
                if(({                (_condtional_value_X358=(*cursor==0&&cursor!=text));                _condtional_value_X358;                })) {
                    __result_obj__168 = -1;
                    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    return __result_obj__168;
                }
                *matchlength=(int)(end_33-cursor);
                __result_obj__169 = (int)(cursor-text);
                come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
                return __result_obj__169;
            }
            if(({            (_condtional_value_X359=(*cursor==0));            _condtional_value_X359;            })) {
                break;
            }
            cursor+=1;
        }
    }
    __result_obj__170 = -1;
    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    return __result_obj__170;
}

int re_match(const char* pattern, const char* text, int* matchlength){
    return re_matchp(re_compile(pattern),text,matchlength,(struct re_capture*)0,0);
}

static void regex_program_t_finalize(struct re_program* self){
}

static void compiler_state_finalize(struct anonymous_typeX15* self){
}

struct re_program* re_compile(const char* pattern){
static struct re_program program;
struct anonymous_typeX15 state;
_Bool _condtional_value_X360;
int pos;
struct regex_t* head;
_Bool _condtional_value_X361;
struct re_program* __result_obj__171;
struct re_program* __result_obj__172;
memset(&program, 0, sizeof(struct re_program));
memset(&state, 0, sizeof(struct anonymous_typeX15));
    static struct regex_t re_compiled[64];
    memset(&re_compiled, 0, sizeof(struct regex_t)    *(64)    );
    static unsigned char ccl_buf[40];
    memset(&ccl_buf, 0, sizeof(unsigned char)    *(40)    );
    state.pool=re_compiled;
    state.pool_capacity=64;
    state.pool_size=0;
    state.ccl_buf=ccl_buf;
    state.ccl_capacity=40;
    state.ccl_idx=1;
    state.group_count=0;
    if(({    (_condtional_value_X360=(state.ccl_capacity>0));    _condtional_value_X360;    })) {
        state.ccl_buf[0]=0;
    }
    pos=0;
    head=compile_sequence(&state,pattern,&pos,0);
    if(({    (_condtional_value_X361=((head==0)||(pattern[pos]!=0)));    _condtional_value_X361;    })) {
        __result_obj__171 = ((void*)0);
        come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        return __result_obj__171;
    }
    program.start=head;
    program.group_count=state.group_count;
    __result_obj__172 = (struct re_program*)&program;
    come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    return __result_obj__172;
}

void re_print(struct re_program* pattern){
_Bool _condtional_value_X362;
struct re_program* program;
_Bool _condtional_value_X363;
    if(({    (_condtional_value_X362=(pattern==0));    _condtional_value_X362;    })) {
        return;
    }
    program=(struct re_program*)pattern;
    if(({    (_condtional_value_X363=(program->start==0));    _condtional_value_X363;    })) {
        return;
    }
    re_print_internal(program->start,0);
}

void clear_captures(struct anonymous_typeX16* ctx){
_Bool _condtional_value_X364;
int i;
_Bool _condtional_value_X365;
_Bool _condtional_value_X366;
_Bool _condtional_value_X367;
    if(({    (_condtional_value_X364=((ctx->captures==0)||(ctx->capture_capacity<=0)));    _condtional_value_X364;    })) {
        return;
    }
    for(    ({    (_condtional_value_X365=(i=0));    _condtional_value_X365;    });    ({    (_condtional_value_X366=(i<ctx->capture_capacity));    _condtional_value_X366;    });    ({    (_condtional_value_X367=(++i));    _condtional_value_X367;    })    ){
        ctx->captures[i].start=-1;
        ctx->captures[i].length=0;
    }
}

void snapshot_captures(const struct anonymous_typeX16* ctx, struct re_capture* buffer_){
_Bool _condtional_value_X368;
    if(({    (_condtional_value_X368=((ctx->captures==0)||(ctx->capture_capacity<=0)));    _condtional_value_X368;    })) {
        return;
    }
    memcpy(buffer_,ctx->captures,sizeof(struct re_capture)*ctx->capture_capacity);
}

void restore_captures(struct anonymous_typeX16* ctx, const struct re_capture* buffer_){
_Bool _condtional_value_X369;
    if(({    (_condtional_value_X369=((ctx->captures==0)||(ctx->capture_capacity<=0)));    _condtional_value_X369;    })) {
        return;
    }
    memcpy(ctx->captures,buffer_,sizeof(struct re_capture)*ctx->capture_capacity);
}

struct regex_t* new_token(struct anonymous_typeX15* st){
_Bool _condtional_value_X370;
struct regex_t* __result_obj__173;
struct regex_t* token;
struct regex_t* __result_obj__174;
    if(({    (_condtional_value_X370=(st->pool_size>=st->pool_capacity));    _condtional_value_X370;    })) {
        __result_obj__173 = ((void*)0);
        return __result_obj__173;
    }
    token=&st->pool[st->pool_size++];
    token->type=(0);
    token->u.ccl=0;
    token->next=0;
    token->u.group.first=0;
    token->u.group.id=0;
    __result_obj__174 = token;
    return __result_obj__174;
}

int append_token(struct regex_t** head, struct regex_t** tail, struct regex_t* token){
_Bool _condtional_value_X371;
_Bool _condtional_value_X372;
    if(({    (_condtional_value_X371=(token==0));    _condtional_value_X371;    })) {
        return 0;
    }
    if(({    (_condtional_value_X372=(*head==0));    _condtional_value_X372;    })) {
        *head=token;
    }
    else {
        (*tail)->next=token;
    }
    *tail=token;
    return 1;
}

struct regex_t* compile_sequence(struct anonymous_typeX15* st, const char* pattern, int* pos, int in_group){
struct regex_t* head;
struct regex_t* tail;
_Bool _condtional_value_X373;
char c;
_Bool _condtional_value_X374;
struct regex_t* token;
_Bool _condtional_value_X375;
struct regex_t* __result_obj__175;
_Bool _condtional_value_X376;
struct regex_t* __result_obj__176;
_Bool _condtional_value_X377;
struct regex_t* __result_obj__177;
_Bool _condtional_value_X378;
struct regex_t* __result_obj__178;
_Bool _condtional_value_X379;
struct regex_t* __result_obj__179;
_Bool _condtional_value_X380;
struct regex_t* __result_obj__180;
_Bool _condtional_value_X381;
struct regex_t* __result_obj__181;
_Bool _condtional_value_X382;
struct regex_t* __result_obj__182;
int buf_begin;
int negated;
_Bool _condtional_value_X383;
_Bool _condtional_value_X384;
struct regex_t* __result_obj__183;
_Bool _condtional_value_X385;
struct regex_t* __result_obj__184;
_Bool _condtional_value_X386;
_Bool _condtional_value_X387;
_Bool _condtional_value_X388;
struct regex_t* __result_obj__185;
_Bool _condtional_value_X389;
struct regex_t* __result_obj__186;
_Bool _condtional_value_X390;
struct regex_t* __result_obj__187;
_Bool _condtional_value_X391;
struct regex_t* __result_obj__188;
_Bool _condtional_value_X392;
struct regex_t* __result_obj__189;
_Bool _condtional_value_X393;
struct regex_t* __result_obj__190;
struct regex_t* inner;
_Bool _condtional_value_X394;
struct regex_t* __result_obj__191;
_Bool _condtional_value_X395;
struct regex_t* __result_obj__192;
_Bool _condtional_value_X396;
struct regex_t* __result_obj__193;
_Bool _condtional_value_X397;
struct regex_t* __result_obj__194;
_Bool _condtional_value_X398;
struct regex_t* __result_obj__195;
_Bool _condtional_value_X399;
struct regex_t* __result_obj__196;
struct regex_t* sentinel;
_Bool _condtional_value_X400;
struct regex_t* __result_obj__197;
_Bool _condtional_value_X401;
struct regex_t* __result_obj__198;
    head=(struct regex_t*)0;
    tail=(struct regex_t*)0;
    while(({    (_condtional_value_X373=(pattern[*pos]!=0));    _condtional_value_X373;    })) {
        c=pattern[*pos];
        if(({        (_condtional_value_X374=(in_group&&(c==41)));        _condtional_value_X374;        })) {
            break;
        }
        token=(struct regex_t*)0;
        switch (        c) {
            case 94:
            {
                token=new_token(st);
                if(({                (_condtional_value_X375=(token==0));                _condtional_value_X375;                })) {
                    __result_obj__175 = ((void*)0);
                    return __result_obj__175;
                }
                token->type=(2);
                (*pos)++;
            }
            break;
            case 36:
            {
                token=new_token(st);
                if(({                (_condtional_value_X376=(token==0));                _condtional_value_X376;                })) {
                    __result_obj__176 = ((void*)0);
                    return __result_obj__176;
                }
                token->type=(3);
                (*pos)++;
            }
            break;
            case 46:
            {
                token=new_token(st);
                if(({                (_condtional_value_X377=(token==0));                _condtional_value_X377;                })) {
                    __result_obj__177 = ((void*)0);
                    return __result_obj__177;
                }
                token->type=(1);
                (*pos)++;
            }
            break;
            case 42:
            {
                token=new_token(st);
                if(({                (_condtional_value_X378=(token==0));                _condtional_value_X378;                })) {
                    __result_obj__178 = ((void*)0);
                    return __result_obj__178;
                }
                token->type=(5);
                (*pos)++;
            }
            break;
            case 43:
            {
                token=new_token(st);
                if(({                (_condtional_value_X379=(token==0));                _condtional_value_X379;                })) {
                    __result_obj__179 = ((void*)0);
                    return __result_obj__179;
                }
                token->type=(6);
                (*pos)++;
            }
            break;
            case 63:
            {
                token=new_token(st);
                if(({                (_condtional_value_X380=(token==0));                _condtional_value_X380;                })) {
                    __result_obj__180 = ((void*)0);
                    return __result_obj__180;
                }
                token->type=(4);
                (*pos)++;
            }
            break;
            case 92:
            {
                (*pos)++;
                if(({                (_condtional_value_X381=(pattern[*pos]==0));                _condtional_value_X381;                })) {
                    __result_obj__181 = ((void*)0);
                    return __result_obj__181;
                }
                token=new_token(st);
                if(({                (_condtional_value_X382=(token==0));                _condtional_value_X382;                })) {
                    __result_obj__182 = ((void*)0);
                    return __result_obj__182;
                }
                switch (                pattern[*pos]) {
                    case 100:
                    token->type=(10);
                    break;
                    case 68:
                    token->type=(11);
                    break;
                    case 119:
                    token->type=(12);
                    break;
                    case 87:
                    token->type=(13);
                    break;
                    case 115:
                    token->type=(14);
                    break;
                    case 83:
                    token->type=(15);
                    break;
                    default:
                    {
                        token->type=(7);
                        token->u.ch=(unsigned char)pattern[*pos];
                    }
                    break;
                }
                (*pos)++;
            }
            break;
            case 91:
            {
                buf_begin=st->ccl_idx;
                negated=0;
                (*pos)++;
                if(({                (_condtional_value_X383=(pattern[*pos]==94));                _condtional_value_X383;                })) {
                    negated=1;
                    (*pos)++;
                    if(({                    (_condtional_value_X384=(pattern[*pos]==0));                    _condtional_value_X384;                    })) {
                        __result_obj__183 = ((void*)0);
                        return __result_obj__183;
                    }
                }
                if(({                (_condtional_value_X385=(pattern[*pos]==0));                _condtional_value_X385;                })) {
                    __result_obj__184 = ((void*)0);
                    return __result_obj__184;
                }
                while(({                (_condtional_value_X386=((pattern[*pos]!=0)&&(pattern[*pos]!=93)));                _condtional_value_X386;                })) {
                    if(({                    (_condtional_value_X387=(pattern[*pos]==92));                    _condtional_value_X387;                    })) {
                        if(({                        (_condtional_value_X388=(st->ccl_idx>=(st->ccl_capacity-1)));                        _condtional_value_X388;                        })) {
                            __result_obj__185 = ((void*)0);
                            return __result_obj__185;
                        }
                        st->ccl_buf[st->ccl_idx++]=92;
                        (*pos)++;
                        if(({                        (_condtional_value_X389=(pattern[*pos]==0));                        _condtional_value_X389;                        })) {
                            __result_obj__186 = ((void*)0);
                            return __result_obj__186;
                        }
                    }
                    if(({                    (_condtional_value_X390=(st->ccl_idx>=st->ccl_capacity));                    _condtional_value_X390;                    })) {
                        __result_obj__187 = ((void*)0);
                        return __result_obj__187;
                    }
                    st->ccl_buf[st->ccl_idx++]=(unsigned char)pattern[*pos];
                    (*pos)++;
                }
                if(({                (_condtional_value_X391=(pattern[*pos]!=93));                _condtional_value_X391;                })) {
                    __result_obj__188 = ((void*)0);
                    return __result_obj__188;
                }
                if(({                (_condtional_value_X392=(st->ccl_idx>=st->ccl_capacity));                _condtional_value_X392;                })) {
                    __result_obj__189 = ((void*)0);
                    return __result_obj__189;
                }
                st->ccl_buf[st->ccl_idx++]=0;
                token=new_token(st);
                if(({                (_condtional_value_X393=(token==0));                _condtional_value_X393;                })) {
                    __result_obj__190 = ((void*)0);
                    return __result_obj__190;
                }
                token->type=((negated)?((9)):((8)));
                token->u.ccl=&st->ccl_buf[buf_begin];
                (*pos)++;
            }
            break;
            case 40:
            {
                (*pos)++;
                inner=compile_sequence(st,pattern,pos,1);
                if(({                (_condtional_value_X394=(inner==0));                _condtional_value_X394;                })) {
                    __result_obj__191 = ((void*)0);
                    return __result_obj__191;
                }
                if(({                (_condtional_value_X395=(pattern[*pos]!=41));                _condtional_value_X395;                })) {
                    __result_obj__192 = ((void*)0);
                    return __result_obj__192;
                }
                token=new_token(st);
                if(({                (_condtional_value_X396=(token==0));                _condtional_value_X396;                })) {
                    __result_obj__193 = ((void*)0);
                    return __result_obj__193;
                }
                token->type=(16);
                token->u.group.first=inner;
                token->u.group.id=++st->group_count;
                (*pos)++;
            }
            break;
            case 41:
            {
                token=new_token(st);
                if(({                (_condtional_value_X397=(token==0));                _condtional_value_X397;                })) {
                    __result_obj__194 = ((void*)0);
                    return __result_obj__194;
                }
                token->type=(7);
                token->u.ch=(unsigned char)c;
                (*pos)++;
            }
            break;
            default:
            {
                token=new_token(st);
                if(({                (_condtional_value_X398=(token==0));                _condtional_value_X398;                })) {
                    __result_obj__195 = ((void*)0);
                    return __result_obj__195;
                }
                token->type=(7);
                token->u.ch=(unsigned char)c;
                (*pos)++;
            }
            break;
        }
        if(({        (_condtional_value_X399=(!append_token(&head,&tail,token)));        _condtional_value_X399;        })) {
            __result_obj__196 = ((void*)0);
            return __result_obj__196;
        }
    }
    sentinel=new_token(st);
    if(({    (_condtional_value_X400=(sentinel==0));    _condtional_value_X400;    })) {
        __result_obj__197 = ((void*)0);
        return __result_obj__197;
    }
    sentinel->type=(0);
    sentinel->next=0;
    if(({    (_condtional_value_X401=(head==0));    _condtional_value_X401;    })) {
        head=sentinel;
    }
    else {
        tail->next=sentinel;
    }
    __result_obj__198 = head;
    return __result_obj__198;
}

const char* matchpattern(struct regex_t* pattern, const char* text, struct anonymous_typeX16* ctx){
_Bool _condtional_value_X402;
const char* __result_obj__199;
struct regex_t* current;
_Bool _condtional_value_X403;
struct regex_t* next;
_Bool _condtional_value_X404;
_Bool _condtional_value_X405;
const char* __result_obj__200;
const char* __result_obj__201;
_Bool _condtional_value_X406;
_Bool _condtional_value_X407;
const char* __result_obj__202;
const char* __result_obj__203;
_Bool _condtional_value_X408;
_Bool _condtional_value_X409;
const char* __result_obj__204;
const char* __result_obj__205;
_Bool _condtional_value_X410;
_Bool _condtional_value_X411;
const char* __result_obj__206;
_Bool _condtional_value_X412;
const char* __result_obj__207;
const char* __result_obj__208;
    if(({    (_condtional_value_X402=((pattern==0)||(pattern->type==(0))));    _condtional_value_X402;    })) {
        __result_obj__199 = text;
        return __result_obj__199;
    }
    struct re_capture snapshot[64];
    memset(&snapshot, 0, sizeof(struct re_capture)    *(64)    );
    snapshot_captures(ctx,snapshot);
    current=pattern;
    const char* cursor=text;
    while(({    (_condtional_value_X403=(current!=0&&current->type!=(0)));    _condtional_value_X403;    })) {
        next=current->next;
        if(({        (_condtional_value_X404=((next!=0)&&(next->type==(4))));        _condtional_value_X404;        })) {
            const char* result=matchquestion(current,next->next,cursor,ctx);
            if(({            (_condtional_value_X405=(result!=0));            _condtional_value_X405;            })) {
                __result_obj__200 = result;
                return __result_obj__200;
            }
            restore_captures(ctx,snapshot);
            __result_obj__201 = ((void*)0);
            return __result_obj__201;
        }
        else if(({        (_condtional_value_X406=((next!=0)&&(next->type==(5))));        _condtional_value_X406;        })) {
            const char* result_34=matchstar(current,next->next,cursor,ctx);
            if(({            (_condtional_value_X407=(result_34!=0));            _condtional_value_X407;            })) {
                __result_obj__202 = result_34;
                return __result_obj__202;
            }
            restore_captures(ctx,snapshot);
            __result_obj__203 = ((void*)0);
            return __result_obj__203;
        }
        else if(({        (_condtional_value_X408=((next!=0)&&(next->type==(6))));        _condtional_value_X408;        })) {
            const char* result_35=matchplus(current,next->next,cursor,ctx);
            if(({            (_condtional_value_X409=(result_35!=0));            _condtional_value_X409;            })) {
                __result_obj__204 = result_35;
                return __result_obj__204;
            }
            restore_captures(ctx,snapshot);
            __result_obj__205 = ((void*)0);
            return __result_obj__205;
        }
        else if(({        (_condtional_value_X410=(current->type==(3)));        _condtional_value_X410;        })) {
            if(({            (_condtional_value_X411=(*cursor!=0));            _condtional_value_X411;            })) {
                restore_captures(ctx,snapshot);
                __result_obj__206 = ((void*)0);
                return __result_obj__206;
            }
            current=current->next;
        }
        else {
            const char* after=matchtoken(current,cursor,ctx);
            if(({            (_condtional_value_X412=(after==0));            _condtional_value_X412;            })) {
                restore_captures(ctx,snapshot);
                __result_obj__207 = ((void*)0);
                return __result_obj__207;
            }
            cursor=after;
            current=current->next;
        }
    }
    __result_obj__208 = cursor;
    return __result_obj__208;
}

const char* matchstar(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx){
_Bool _condtional_value_X413;
_Bool _condtional_value_X414;
const char* __result_obj__209;
const char* __result_obj__210;
    struct re_capture snapshot_entry[64];
    memset(&snapshot_entry, 0, sizeof(struct re_capture)    *(64)    );
    snapshot_captures(ctx,snapshot_entry);
    const char* consume=matchtoken(token,text,ctx);
    while(({    (_condtional_value_X413=((consume!=0)&&(consume!=text)));    _condtional_value_X413;    })) {
        struct re_capture snapshot_after_token[64];
        memset(&snapshot_after_token, 0, sizeof(struct re_capture)        *(64)        );
        snapshot_captures(ctx,snapshot_after_token);
        const char* recursive=matchstar(token,rest,consume,ctx);
        if(({        (_condtional_value_X414=(recursive!=0));        _condtional_value_X414;        })) {
            __result_obj__209 = recursive;
            return __result_obj__209;
        }
        restore_captures(ctx,snapshot_after_token);
        consume=matchtoken(token,consume,ctx);
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__210 = matchpattern(rest,text,ctx);
    return __result_obj__210;
}

const char* matchplus(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx){
_Bool _condtional_value_X415;
const char* __result_obj__211;
_Bool _condtional_value_X416;
const char* __result_obj__212;
const char* __result_obj__213;
    struct re_capture snapshot_entry[64];
    memset(&snapshot_entry, 0, sizeof(struct re_capture)    *(64)    );
    snapshot_captures(ctx,snapshot_entry);
    const char* first=matchtoken(token,text,ctx);
    if(({    (_condtional_value_X415=((first==0)||(first==text)));    _condtional_value_X415;    })) {
        restore_captures(ctx,snapshot_entry);
        __result_obj__211 = ((void*)0);
        return __result_obj__211;
    }
    const char* result=matchstar(token,rest,first,ctx);
    if(({    (_condtional_value_X416=(result!=0));    _condtional_value_X416;    })) {
        __result_obj__212 = result;
        return __result_obj__212;
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__213 = ((void*)0);
    return __result_obj__213;
}

const char* matchquestion(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx){
_Bool _condtional_value_X417;
const char* __result_obj__214;
_Bool _condtional_value_X418;
const char* __result_obj__215;
_Bool _condtional_value_X419;
const char* __result_obj__216;
const char* __result_obj__217;
    struct re_capture snapshot_entry[64];
    memset(&snapshot_entry, 0, sizeof(struct re_capture)    *(64)    );
    snapshot_captures(ctx,snapshot_entry);
    const char* skipped=matchpattern(rest,text,ctx);
    if(({    (_condtional_value_X417=(skipped!=0));    _condtional_value_X417;    })) {
        __result_obj__214 = skipped;
        return __result_obj__214;
    }
    restore_captures(ctx,snapshot_entry);
    const char* consumed=matchtoken(token,text,ctx);
    if(({    (_condtional_value_X418=((consumed==0)||(consumed==text)));    _condtional_value_X418;    })) {
        restore_captures(ctx,snapshot_entry);
        __result_obj__215 = ((void*)0);
        return __result_obj__215;
    }
    const char* with=matchpattern(rest,consumed,ctx);
    if(({    (_condtional_value_X419=(with!=0));    _condtional_value_X419;    })) {
        __result_obj__216 = with;
        return __result_obj__216;
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__217 = ((void*)0);
    return __result_obj__217;
}

const char* matchtoken(struct regex_t* token, const char* text, struct anonymous_typeX16* ctx){
const char* __result_obj__218;
const char* __result_obj__219;
const char* __result_obj__220;
const char* __result_obj__221;
const char* __result_obj__222;
const char* __result_obj__223;
const char* __result_obj__224;
const char* __result_obj__225;
const char* __result_obj__226;
const char* __result_obj__227;
_Bool _condtional_value_X420;
const char* __result_obj__228;
_Bool _condtional_value_X421;
int idx;
_Bool _condtional_value_X422;
const char* __result_obj__229;
const char* __result_obj__230;
const char* __result_obj__231;
const char* __result_obj__232;
    switch (    token->type) {
        case (1):
        __result_obj__218 = (((*text!=0&&matchdot(*text)))?(text+1):(0));
        return __result_obj__218;
        case (7):
        __result_obj__219 = (((*text!=0&&token->u.ch==(unsigned char)*text))?(text+1):(0));
        return __result_obj__219;
        case (8):
        __result_obj__220 = (((*text!=0&&matchcharclass(*text,(const char*)token->u.ccl)))?(text+1):(0));
        return __result_obj__220;
        case (9):
        __result_obj__221 = (((*text!=0&&!matchcharclass(*text,(const char*)token->u.ccl)))?(text+1):(0));
        return __result_obj__221;
        case (10):
        __result_obj__222 = (((*text!=0&&matchdigit(*text)))?(text+1):(0));
        return __result_obj__222;
        case (11):
        __result_obj__223 = (((*text!=0&&!matchdigit(*text)))?(text+1):(0));
        return __result_obj__223;
        case (12):
        __result_obj__224 = (((*text!=0&&matchalphanum(*text)))?(text+1):(0));
        return __result_obj__224;
        case (13):
        __result_obj__225 = (((*text!=0&&!matchalphanum(*text)))?(text+1):(0));
        return __result_obj__225;
        case (14):
        __result_obj__226 = (((*text!=0&&matchwhitespace(*text)))?(text+1):(0));
        return __result_obj__226;
        case (15):
        __result_obj__227 = (((*text!=0&&!matchwhitespace(*text)))?(text+1):(0));
        return __result_obj__227;
        case (16):
        {
            struct re_capture snapshot[64];
            memset(&snapshot, 0, sizeof(struct re_capture)            *(64)            );
            snapshot_captures(ctx,snapshot);
            const char* start=text;
            const char* end=matchpattern(token->u.group.first,text,ctx);
            if(({            (_condtional_value_X420=(end==0));            _condtional_value_X420;            })) {
                restore_captures(ctx,snapshot);
                __result_obj__228 = ((void*)0);
                return __result_obj__228;
            }
            if(({            (_condtional_value_X421=(token->u.group.id>0&&ctx->captures!=0));            _condtional_value_X421;            })) {
                idx=token->u.group.id-1;
                if(({                (_condtional_value_X422=(idx<ctx->capture_capacity));                _condtional_value_X422;                })) {
                    ctx->captures[idx].start=(int)(start-ctx->base);
                    ctx->captures[idx].length=(int)(end-start);
                }
            }
            __result_obj__229 = end;
            return __result_obj__229;
        }
        case (2):
        __result_obj__230 = (((text==ctx->base))?(text):(0));
        return __result_obj__230;
        case (3):
        __result_obj__231 = (((*text==0))?(text):(0));
        return __result_obj__231;
        default:
        break;
    }
    __result_obj__232 = (const char*)0;
    return __result_obj__232;
}

int matchdigit(char c){
    return isdigit((unsigned char)c);
}

int matchalpha(char c){
    return isalpha((unsigned char)c);
}

int matchwhitespace(char c){
    return isspace((unsigned char)c);
}

int matchalphanum(char c){
    return ((c==95)||matchalpha(c)||matchdigit(c));
}

int matchrange(char c, const char* str){
    return ((c!=45)&&(str[0]!=0)&&(str[0]!=45)&&(str[1]==45)&&(str[2]!=0)&&((c>=str[0])&&(c<=str[2])));
}

int matchdot(char c){
    return c!=10&&c!=13;
}

int ismetachar(char c){
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68));
}

int matchmetachar(char c, const char* str){
    switch (    str[0]) {
        case 100:
        return matchdigit(c);
        case 68:
        return !matchdigit(c);
        case 119:
        return matchalphanum(c);
        case 87:
        return !matchalphanum(c);
        case 115:
        return matchwhitespace(c);
        case 83:
        return !matchwhitespace(c);
        default:
        return (c==str[0]);
    }
}

int matchcharclass(char c, const char* str){
_Bool _condtional_value_X423;
_Bool _condtional_value_X424;
_Bool _condtional_value_X425;
_Bool _condtional_value_X426;
_Bool _condtional_value_X427;
_Bool _condtional_value_X428;
_Bool _condtional_value_X429;
    do {
        if(({        (_condtional_value_X423=(matchrange(c,str)));        _condtional_value_X423;        })) {
            return 1;
        }
        else if(({        (_condtional_value_X424=(str[0]==92));        _condtional_value_X424;        })) {
            str+=1;
            if(({            (_condtional_value_X425=(matchmetachar(c,str)));            _condtional_value_X425;            })) {
                return 1;
            }
            else if(({            (_condtional_value_X426=((c==str[0])&&!ismetachar(c)));            _condtional_value_X426;            })) {
                return 1;
            }
        }
        else if(({        (_condtional_value_X427=(c==str[0]));        _condtional_value_X427;        })) {
            if(({            (_condtional_value_X428=(c==45));            _condtional_value_X428;            })) {
                return ((str[-1]==0)||(str[1]==0));
            }
            else {
                return 1;
            }
        }
    } while(({    (_condtional_value_X429=(*str++!=0));    _condtional_value_X429;    }));
    return 0;
}

void re_print_internal(struct regex_t* pattern, int depth){
_Bool _condtional_value_X430;
int i;
_Bool _condtional_value_X431;
_Bool _condtional_value_X432;
_Bool _condtional_value_X433;
_Bool _condtional_value_X434;
_Bool _condtional_value_X435;
_Bool _condtional_value_X436;
_Bool _condtional_value_X437;
    const char* types[]={
    "UNUSED", "DOT", "BEGIN", "END", "QUESTIONMARK", "STAR", "PLUS", "CHAR",
    "CHAR_CLASS", "INV_CHAR_CLASS", "DIGIT", "NOT_DIGIT", "ALPHA", "NOT_ALPHA",
    "WHITESPACE", "NOT_WHITESPACE", "GROUP"
  };
    while(({    (_condtional_value_X430=(pattern!=0&&pattern->type!=(0)));    _condtional_value_X430;    })) {
        for(        ({        (_condtional_value_X431=(i=0));        _condtional_value_X431;        });        ({        (_condtional_value_X432=(i<depth));        _condtional_value_X432;        });        ({        (_condtional_value_X433=(++i));        _condtional_value_X433;        })        ){
            putchar(32);
        }
        printf("type: %s",types[pattern->type]);
        if(({        (_condtional_value_X434=((pattern->type==(8))||(pattern->type==(9))));        _condtional_value_X434;        })) {
            printf(" [");
            const unsigned char* ccl=pattern->u.ccl;
            while(({            (_condtional_value_X435=(*ccl!=0&&*ccl!=93));            _condtional_value_X435;            })) {
                printf("%c",*ccl);
                ++ccl;
            }
            printf("]");
        }
        else if(({        (_condtional_value_X436=(pattern->type==(7)));        _condtional_value_X436;        })) {
            printf(" '%c'",pattern->u.ch);
        }
        else if(({        (_condtional_value_X437=(pattern->type==(16)));        _condtional_value_X437;        })) {
            printf(" id=%d\n",pattern->u.group.id);
            re_print_internal(pattern->u.group.first,depth+2);
            pattern=pattern->next;
            continue;
        }
        printf("\n");
        pattern=pattern->next;
    }
}

int re_get_group_count(struct re_program* pattern){
_Bool _condtional_value_X438;
struct re_program* program;
    if(({    (_condtional_value_X438=(pattern==0));    _condtional_value_X438;    })) {
        return 0;
    }
    program=(struct re_program*)pattern;
    return program->group_count;
}

char* string_lower_case(char* str){
void* __right_value189 = (void*)0;
char* result;
int i;
_Bool _condtional_value_X439;
_Bool _condtional_value_X440;
_Bool _condtional_value_X441;
_Bool _condtional_value_X442;
char* __result_obj__233;
    result=(char*)come_increment_ref_count(__builtin_string(str));
    for(    ({    (_condtional_value_X439=(i=0));    _condtional_value_X439;    });    ({    (_condtional_value_X440=(i<strlen(str)));    _condtional_value_X440;    });    ({    (_condtional_value_X441=(i++));    _condtional_value_X441;    })    ){
        if(({        (_condtional_value_X442=(str[i]>=65&&str[i]<=90));        _condtional_value_X442;        })) {
            result[i]=str[i]-65+97;
        }
    }
    __result_obj__233 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__233;
}

char* string_upper_case(char* str){
void* __right_value190 = (void*)0;
char* result;
int i;
_Bool _condtional_value_X443;
_Bool _condtional_value_X444;
_Bool _condtional_value_X445;
_Bool _condtional_value_X446;
char* __result_obj__234;
    result=(char*)come_increment_ref_count(__builtin_string(str));
    for(    ({    (_condtional_value_X443=(i=0));    _condtional_value_X443;    });    ({    (_condtional_value_X444=(i<strlen(str)));    _condtional_value_X444;    });    ({    (_condtional_value_X445=(i++));    _condtional_value_X445;    })    ){
        if(({        (_condtional_value_X446=(str[i]>=97&&str[i]<=122));        _condtional_value_X446;        })) {
            result[i]=str[i]-97+65;
        }
    }
    __result_obj__234 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__234 = come_decrement_ref_count(__result_obj__234, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__234;
}

int charp_index_regex(char* self, char* reg, int default_value){
_Bool _condtional_value_X447;
struct re_program* re;
int result;
int offset;
int n;
int result_36;
_Bool _condtional_value_X448;
int matchlength;
int max_captures;
int regex_result;
_Bool _condtional_value_X449;
    if(({    (_condtional_value_X447=(reg==((void*)0)));    _condtional_value_X447;    })) {
        return default_value;
    }
    re=re_compile(reg);
    result=default_value;
    offset=0;
    n=0;
    result_36=default_value;
    while(({    (_condtional_value_X448=((_Bool)1));    _condtional_value_X448;    })) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures];
        memset(&captures, 0, sizeof(struct re_capture)        *(max_captures)        );
        regex_result=re_matchp(re,self,&matchlength,captures,max_captures);
        if(({        (_condtional_value_X449=(regex_result>=0));        _condtional_value_X449;        })) {
            result_36=regex_result;
            break;
        }
        {
            break;
        }
    }
    return result_36;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len;
char* p;
_Bool _condtional_value_X450;
_Bool _condtional_value_X451;
    len=strlen(search_str);
    p=str+strlen(str)-len;
    while(({    (_condtional_value_X450=(p>=str));    _condtional_value_X450;    })) {
        if(({        (_condtional_value_X451=(strncmp(p,search_str,len)==0));        _condtional_value_X451;        })) {
            return p-str;
        }
        p--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, char* reg, int default_value){
_Bool _condtional_value_X452;
struct re_program* re;
int result;
int offset;
int n;
void* __right_value191 = (void*)0;
char* self2;
int result_37;
_Bool _condtional_value_X453;
int matchlength;
int max_captures;
int regex_result;
_Bool _condtional_value_X454;
int __result_obj__235;
    if(({    (_condtional_value_X452=(reg==((void*)0)));    _condtional_value_X452;    })) {
        return default_value;
    }
    re=re_compile(reg);
    result=default_value;
    offset=0;
    n=0;
    self2=(char*)come_increment_ref_count(charp_reverse(self));
    result_37=default_value;
    while(({    (_condtional_value_X453=((_Bool)1));    _condtional_value_X453;    })) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures];
        memset(&captures, 0, sizeof(struct re_capture)        *(max_captures)        );
        regex_result=re_matchp(re,self2,&matchlength,captures,max_captures);
        if(({        (_condtional_value_X454=(regex_result>=0));        _condtional_value_X454;        })) {
            result_37=strlen(self)-matchlength;
            break;
        }
        {
            break;
        }
    }
    __result_obj__235 = result_37;
    (self2 = come_decrement_ref_count(self2, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__235;
}

char* charp_strip(char* self){
void* __right_value192 = (void*)0;
char* result;
int len;
_Bool _condtional_value_X455;
_Bool _condtional_value_X456;
_Bool _condtional_value_X457;
char* __result_obj__236;
    result=(char*)come_increment_ref_count(__builtin_string(self));
    len=strlen(self);
    if(({    (_condtional_value_X455=(self[len-1]==10));    _condtional_value_X455;    })) {
        result[len-1]=0;
    }
    else if(({    (_condtional_value_X456=(self[len-1]==13));    _condtional_value_X456;    })) {
        result[len-1]=0;
    }
    else if(({    (_condtional_value_X457=(len>2&&self[len-2]==13&&self[len-1]==10));    _condtional_value_X457;    })) {
        result[len-2]=0;
    }
    __result_obj__236 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__236 = come_decrement_ref_count(__result_obj__236, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__236;
}

int charp_index(char* str, char* search_str, int default_value){
char* head;
_Bool _condtional_value_X458;
    head=strstr(str,search_str);
    if(({    (_condtional_value_X458=(head==((void*)0)));    _condtional_value_X458;    })) {
        return default_value;
    }
    return head-str;
}

char* string_chomp(char* str){
void* __right_value193 = (void*)0;
char* result;
_Bool _condtional_value_X459;
void* __right_value194 = (void*)0;
char* __result_obj__237;
char* __result_obj__238;
    result=(char*)come_increment_ref_count(__builtin_string(str));
    if(({    (_condtional_value_X459=(result[string_length(result)-1]==10));    _condtional_value_X459;    })) {
        __result_obj__237 = (char*)come_increment_ref_count(((char*)(__right_value194=charp_substring(result,0,-2))));
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__237 = come_decrement_ref_count(__result_obj__237, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__237;
    }
    __result_obj__238 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__238 = come_decrement_ref_count(__result_obj__238, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__238;
}

char* xrealpath(char* path){
_Bool _condtional_value_X460;
void* __right_value195 = (void*)0;
char* __result_obj__239;
char* result;
void* __right_value196 = (void*)0;
char* result2;
char* __result_obj__240;
    if(({    (_condtional_value_X460=(path==((void*)0)));    _condtional_value_X460;    })) {
        __result_obj__239 = (char*)come_increment_ref_count(((char*)(__right_value195=__builtin_string(""))));
        (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__239 = come_decrement_ref_count(__result_obj__239, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__239;
    }
    result=realpath(path,((void*)0));
    result2=(char*)come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__240 = (char*)come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__240 = come_decrement_ref_count(__result_obj__240, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__240;
}

char* charp_replace(char* self, int index, char c){
int len;
_Bool _condtional_value_X461;
void* __right_value197 = (void*)0;
char* __result_obj__241;
_Bool _condtional_value_X462;
_Bool _condtional_value_X463;
_Bool _condtional_value_X464;
void* __right_value198 = (void*)0;
char* __result_obj__242;
    len=strlen(self);
    if(({    (_condtional_value_X461=(strcmp(self,"")==0));    _condtional_value_X461;    })) {
        __result_obj__241 = (char*)come_increment_ref_count(((char*)(__right_value197=__builtin_string(self))));
        (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__241 = come_decrement_ref_count(__result_obj__241, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__241;
    }
    if(({    (_condtional_value_X462=(index<0));    _condtional_value_X462;    })) {
        index+=len;
    }
    if(({    (_condtional_value_X463=(index>=len));    _condtional_value_X463;    })) {
        index=len-1;
    }
    if(({    (_condtional_value_X464=(index<0));    _condtional_value_X464;    })) {
        index=0;
    }
    self[index]=c;
    __result_obj__242 = (char*)come_increment_ref_count(((char*)(__right_value198=__builtin_string(self))));
    (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__242 = come_decrement_ref_count(__result_obj__242, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__242;
}

char* charp_multiply(char* str, int n){
int len;
void* __right_value199 = (void*)0;
char* result;
int i;
_Bool _condtional_value_X465;
_Bool _condtional_value_X466;
_Bool _condtional_value_X467;
char* __result_obj__243;
    len=strlen(str)*n+1;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len)), "/usr/local/include/comelang.h", 6072, "char*"));
    result[0]=0;
    for(    ({    (_condtional_value_X465=(i=0));    _condtional_value_X465;    });    ({    (_condtional_value_X466=(i<n));    _condtional_value_X466;    });    ({    (_condtional_value_X467=(i++));    _condtional_value_X467;    })    ){
        strcat(result,str);
    }
    __result_obj__243 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__243 = come_decrement_ref_count(__result_obj__243, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__243;
}

struct list$1char$ph* charp_split_str(char* self, char* str){
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1char$ph* result;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct buffer* buf;
int i;
_Bool _condtional_value_X468;
_Bool _condtional_value_X469;
_Bool _condtional_value_X470;
_Bool _condtional_value_X471;
void* __right_value204 = (void*)0;
_Bool _condtional_value_X472;
void* __right_value205 = (void*)0;
struct list$1char$ph* __result_obj__244;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6087, "struct list$1char$ph*"))));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 6089, "struct buffer*"))));
    for(    ({    (_condtional_value_X468=(i=0));    _condtional_value_X468;    });    ({    (_condtional_value_X469=(i<charp_length(self)));    _condtional_value_X469;    });    ({    (_condtional_value_X470=(i++));    _condtional_value_X470;    })    ){
        if(({        (_condtional_value_X471=(strstr(self+i,str)==self+i));        _condtional_value_X471;        })) {
            list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(buf->buf)));
            buffer_reset(buf);
            i+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf,self[i]);
        }
    }
    if(({    (_condtional_value_X472=(buffer_length(buf)!=0));    _condtional_value_X472;    })) {
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(buf->buf)));
    }
    __result_obj__244 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__244, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__244;
}

int string_rindex(char* str, char* search_str, int default_value){
    return charp_rindex(str,search_str,default_value);
}

int string_rindex_regex(char* self, char* reg, int default_value){
    return charp_rindex_regex(self,reg,default_value);
}

char* string_strip(char* self){
void* __right_value206 = (void*)0;
char* __result_obj__245;
    __result_obj__245 = (char*)come_increment_ref_count(((char*)(__right_value206=charp_strip(self))));
    (__right_value206 = come_decrement_ref_count(__right_value206, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__245 = come_decrement_ref_count(__result_obj__245, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__245;
}

int string_index(char* str, char* search_str, int default_value){
    return charp_index(str,search_str,default_value);
}

int string_index_regex(char* self, char* reg, int default_value){
    return charp_index_regex(self,reg,default_value);
}

char* string_replace(char* self, int index, char c){
void* __right_value207 = (void*)0;
char* __result_obj__246;
    __result_obj__246 = (char*)come_increment_ref_count(((char*)(__right_value207=charp_replace(self,index,c))));
    (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__246 = come_decrement_ref_count(__result_obj__246, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__246;
}

char* string_multiply(char* str, int n){
void* __right_value208 = (void*)0;
char* __result_obj__247;
    __result_obj__247 = (char*)come_increment_ref_count(((char*)(__right_value208=charp_multiply(str,n))));
    (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__247 = come_decrement_ref_count(__result_obj__247, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__247;
}

_Bool charp_match(char* self, char* reg){
_Bool _condtional_value_X473;
struct re_program* re;
int offset;
int n;
int matchlength;
int max_captures;
int regex_result;
_Bool _condtional_value_X474;
_Bool __result_obj__248;
_Bool __result_obj__249;
    if(({    (_condtional_value_X473=(reg==((void*)0)));    _condtional_value_X473;    })) {
        return (_Bool)0;
    }
    re=re_compile(reg);
    offset=0;
    n=0;
    matchlength=0;
    max_captures=8;
    struct re_capture captures[max_captures];
    memset(&captures, 0, sizeof(struct re_capture)    *(max_captures)    );
    regex_result=re_matchp(re,self,&matchlength,captures,max_captures);
    if(({    (_condtional_value_X474=(regex_result>=0));    _condtional_value_X474;    })) {
        __result_obj__248 = (_Bool)1;
        return __result_obj__248;
    }
    else {
        __result_obj__249 = (_Bool)0;
        return __result_obj__249;
    }
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X478;
void* __right_value214 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj16;
_Bool _condtional_value_X479;
void* __right_value215 = (void*)0;
struct list_item$1char$ph* litem_38;
char* __dec_obj17;
void* __right_value216 = (void*)0;
struct list_item$1char$ph* litem_39;
char* __dec_obj18;
struct list$1char$ph* __result_obj__251;
    if(({    (_condtional_value_X478=(self->len==0));    _condtional_value_X478;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value214=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj16=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X479=(self->len==1));    _condtional_value_X479;    })) {
        litem_38=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value215=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1char$ph*"))));
        litem_38->prev=self->head;
        litem_38->next=((void*)0);
        __dec_obj17=litem_38->item,
        litem_38->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_38;
        self->head->next=litem_38;
    }
    else {
        litem_39=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value216=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1char$ph*"))));
        litem_39->prev=self->tail;
        litem_39->next=((void*)0);
        __dec_obj18=litem_39->item,
        litem_39->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_39;
        self->tail=litem_39;
    }
    self->len++;
    __result_obj__251 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__251;
}

struct list$1char$ph* charp_scan(char* self, char* reg){
_Bool _condtional_value_X475;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct list$1char$ph* __result_obj__250;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct list$1char$ph* result;
struct re_program* re;
int offset;
int n;
int group_count;
_Bool _condtional_value_X476;
int matchlength;
int max_captures;
int regex_result;
_Bool _condtional_value_X477;
void* __right_value213 = (void*)0;
char* str;
_Bool _condtional_value_X480;
_Bool _condtional_value_X481;
int i;
_Bool _condtional_value_X482;
_Bool _condtional_value_X483;
_Bool _condtional_value_X484;
struct re_capture cp;
void* __right_value217 = (void*)0;
char* match_string;
_Bool _condtional_value_X485;
struct list$1char$ph* __result_obj__252;
    if(({    (_condtional_value_X475=(reg==((void*)0)||reg==((void*)0)));    _condtional_value_X475;    })) {
        __result_obj__250 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value210=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6175, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value210, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__250, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__250;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6177, "struct list$1char$ph*"))));
    re=re_compile(reg);
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(({    (_condtional_value_X476=((_Bool)1));    _condtional_value_X476;    })) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures];
        memset(&captures, 0, sizeof(struct re_capture)        *(max_captures)        );
        regex_result=re_matchp(re,self+offset,&matchlength,captures,max_captures);
        if(({        (_condtional_value_X477=(regex_result>=0&&group_count==0));        _condtional_value_X477;        })) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            list$1char$ph_add(result,(char*)come_increment_ref_count(str));
            if(({            (_condtional_value_X480=(matchlength==0));            _condtional_value_X480;            })) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(({        (_condtional_value_X481=(regex_result>=0&&group_count>0));        _condtional_value_X481;        })) {
            for(            ({            (_condtional_value_X482=(i=0));            _condtional_value_X482;            });            ({            (_condtional_value_X483=(i<group_count));            _condtional_value_X483;            });            ({            (_condtional_value_X484=(i++));            _condtional_value_X484;            })            ){
                cp=captures[i];
                match_string=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(result,(char*)come_increment_ref_count(match_string));
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(({            (_condtional_value_X485=(matchlength==0));            _condtional_value_X485;            })) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
        }
        else {
            break;
        }
    }
    __result_obj__252 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__252, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__252;
}

struct list$1char$ph* charp_split(char* self, char* reg){
_Bool _condtional_value_X486;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1char$ph* __result_obj__253;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct list$1char$ph* result;
struct re_program* re;
int offset;
int n;
int group_count;
_Bool _condtional_value_X487;
int matchlength;
int max_captures;
int regex_result;
_Bool _condtional_value_X488;
void* __right_value222 = (void*)0;
char* str;
_Bool _condtional_value_X489;
_Bool _condtional_value_X490;
void* __right_value223 = (void*)0;
char* str_40;
struct list$1char$ph* __result_obj__254;
    if(({    (_condtional_value_X486=(reg==((void*)0)||reg==((void*)0)));    _condtional_value_X486;    })) {
        __result_obj__253 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value219=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6234, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value219, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__253, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__253;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6237, "struct list$1char$ph*"))));
    re=re_compile(reg);
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(({    (_condtional_value_X487=((_Bool)1));    _condtional_value_X487;    })) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures];
        memset(&captures, 0, sizeof(struct re_capture)        *(max_captures)        );
        regex_result=re_matchp(re,self+offset,&matchlength,captures,max_captures);
        if(({        (_condtional_value_X488=(regex_result>=0&&group_count==0));        _condtional_value_X488;        })) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            list$1char$ph_add(result,(char*)come_increment_ref_count(str));
            if(({            (_condtional_value_X489=(matchlength==0));            _condtional_value_X489;            })) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    if(({    (_condtional_value_X490=(offset<charp_length(self)));    _condtional_value_X490;    })) {
        str_40=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(str_40));
        (str_40 = come_decrement_ref_count(str_40, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__254 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__254, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__254;
}

char* string_sub(char* self, char* reg, char* replace){
void* __right_value224 = (void*)0;
char* __result_obj__255;
    __result_obj__255 = (char*)come_increment_ref_count(((char*)(__right_value224=charp_sub(self,reg,replace))));
    (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__255 = come_decrement_ref_count(__result_obj__255, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__255;
}

struct list$1char$ph* string_split_str(char* self, char* str){
void* __right_value225 = (void*)0;
struct list$1char$ph* __result_obj__256;
    __result_obj__256 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value225=charp_split_str(self,str))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value225, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__256, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__256;
}

struct list$1char$ph* string_scan(char* self, char* reg){
void* __right_value226 = (void*)0;
struct list$1char$ph* __result_obj__257;
    __result_obj__257 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value226=charp_scan(self,reg))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value226, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__257, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__257;
}

struct list$1char$ph* string_split(char* self, char* reg){
void* __right_value227 = (void*)0;
struct list$1char$ph* __result_obj__258;
    __result_obj__258 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value227=charp_split(self,reg))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value227, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__258, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__258;
}

_Bool string_match(char* self, char* reg){
    return charp_match(self,reg);
}

char* charp_sub(char* self, char* reg, char* replace){
_Bool _condtional_value_X491;
void* __right_value228 = (void*)0;
char* __result_obj__259;
struct re_program* re;
int offset;
int n;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct buffer* result;
int group_count;
_Bool _condtional_value_X492;
int matchlength;
int max_captures;
int regex_result;
_Bool _condtional_value_X493;
void* __right_value231 = (void*)0;
char* str;
_Bool _condtional_value_X494;
void* __right_value232 = (void*)0;
char* str_41;
void* __right_value233 = (void*)0;
char* __result_obj__260;
    if(({    (_condtional_value_X491=(reg==((void*)0)||reg==((void*)0)));    _condtional_value_X491;    })) {
        __result_obj__259 = (char*)come_increment_ref_count(((char*)(__right_value228=__builtin_string(""))));
        (__right_value228 = come_decrement_ref_count(__right_value228, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__259 = come_decrement_ref_count(__result_obj__259, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__259;
    }
    re=re_compile(reg);
    offset=0;
    n=0;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 6319, "struct buffer*"))));
    group_count=re_get_group_count(re);
    while(({    (_condtional_value_X492=((_Bool)1));    _condtional_value_X492;    })) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures];
        memset(&captures, 0, sizeof(struct re_capture)        *(max_captures)        );
        regex_result=re_matchp(re,self+offset,&matchlength,captures,max_captures);
        if(({        (_condtional_value_X493=(regex_result>=0&&group_count==0));        _condtional_value_X493;        })) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str);
            buffer_append_str(result,replace);
            if(({            (_condtional_value_X494=(matchlength==0));            _condtional_value_X494;            })) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_41=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
            buffer_append_str(result,str_41);
            (str_41 = come_decrement_ref_count(str_41, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_41 = come_decrement_ref_count(str_41, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__260 = (char*)come_increment_ref_count(((char*)(__right_value233=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__260 = come_decrement_ref_count(__result_obj__260, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__260;
}

char* charp_sub_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*)){
_Bool _condtional_value_X495;
void* __right_value234 = (void*)0;
char* __result_obj__261;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct buffer* result;
struct re_program* re;
int offset;
int n;
int group_count;
_Bool _condtional_value_X496;
int matchlength;
int max_captures;
int regex_result;
_Bool _condtional_value_X497;
void* __right_value237 = (void*)0;
char* str;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct list$1char$ph* group_strings;
void* __right_value240 = (void*)0;
char* match_string;
void* __right_value241 = (void*)0;
char* block_result;
_Bool _condtional_value_X498;
_Bool _condtional_value_X499;
void* __right_value242 = (void*)0;
char* str_42;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct list$1char$ph* group_strings_43;
int i;
_Bool _condtional_value_X500;
_Bool _condtional_value_X501;
_Bool _condtional_value_X502;
struct re_capture cp;
void* __right_value245 = (void*)0;
char* match_string_44;
void* __right_value246 = (void*)0;
char* match_string_45;
void* __right_value247 = (void*)0;
char* block_result_46;
_Bool _condtional_value_X503;
void* __right_value248 = (void*)0;
char* str_47;
void* __right_value249 = (void*)0;
char* __result_obj__262;
    if(({    (_condtional_value_X495=(reg==((void*)0)||reg==((void*)0)));    _condtional_value_X495;    })) {
        __result_obj__261 = (char*)come_increment_ref_count(((char*)(__right_value234=__builtin_string(""))));
        (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__261 = come_decrement_ref_count(__result_obj__261, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__261;
    }
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 6361, "struct buffer*"))));
    re=re_compile(reg);
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(({    (_condtional_value_X496=((_Bool)1));    _condtional_value_X496;    })) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures];
        memset(&captures, 0, sizeof(struct re_capture)        *(max_captures)        );
        regex_result=re_matchp(re,self+offset,&matchlength,captures,max_captures);
        if(({        (_condtional_value_X497=(regex_result>=0&&group_count==0));        _condtional_value_X497;        })) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str);
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6384, "struct list$1char$ph*"))));
            match_string=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            buffer_append_str(result,block_result);
            if(({            (_condtional_value_X498=(matchlength==0));            _condtional_value_X498;            })) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(({        (_condtional_value_X499=(regex_result>=0&&group_count>0));        _condtional_value_X499;        })) {
            str_42=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str_42);
            group_strings_43=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6406, "struct list$1char$ph*"))));
            for(            ({            (_condtional_value_X500=(i=0));            _condtional_value_X500;            });            ({            (_condtional_value_X501=(i<group_count));            _condtional_value_X501;            });            ({            (_condtional_value_X502=(i++));            _condtional_value_X502;            })            ){
                cp=captures[i];
                match_string_44=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(group_strings_43,(char*)come_increment_ref_count(match_string_44));
                (match_string_44 = come_decrement_ref_count(match_string_44, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_45=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result_46=(char*)come_increment_ref_count(block(parent,match_string_45,group_strings_43));
            buffer_append_str(result,block_result_46);
            if(({            (_condtional_value_X503=(matchlength==0));            _condtional_value_X503;            })) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str_42 = come_decrement_ref_count(str_42, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_45 = come_decrement_ref_count(match_string_45, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_46 = come_decrement_ref_count(block_result_46, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_47=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
            buffer_append_str(result,str_47);
            (str_47 = come_decrement_ref_count(str_47, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_47 = come_decrement_ref_count(str_47, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__262 = (char*)come_increment_ref_count(((char*)(__right_value249=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value249 = come_decrement_ref_count(__right_value249, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__262 = come_decrement_ref_count(__result_obj__262, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__262;
}

struct list$1char$ph* charp_scan_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*)){
_Bool _condtional_value_X504;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1char$ph* __result_obj__263;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct list$1char$ph* result;
struct re_program* re;
int offset;
int n;
int group_count;
_Bool _condtional_value_X505;
int matchlength;
int max_captures;
int regex_result;
_Bool _condtional_value_X506;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1char$ph* group_strings;
void* __right_value256 = (void*)0;
char* match_string;
void* __right_value257 = (void*)0;
char* block_result;
_Bool _condtional_value_X507;
_Bool _condtional_value_X508;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1char$ph* group_strings_48;
int i;
_Bool _condtional_value_X509;
_Bool _condtional_value_X510;
_Bool _condtional_value_X511;
struct re_capture cp;
void* __right_value260 = (void*)0;
char* match_string_49;
void* __right_value261 = (void*)0;
char* match_string_50;
void* __right_value262 = (void*)0;
char* block_result_51;
_Bool _condtional_value_X512;
struct list$1char$ph* __result_obj__264;
    if(({    (_condtional_value_X504=(reg==((void*)0)||reg==((void*)0)));    _condtional_value_X504;    })) {
        __result_obj__263 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value251=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6440, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value251, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__263, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__263;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6442, "struct list$1char$ph*"))));
    re=re_compile(reg);
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(({    (_condtional_value_X505=((_Bool)1));    _condtional_value_X505;    })) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures];
        memset(&captures, 0, sizeof(struct re_capture)        *(max_captures)        );
        regex_result=re_matchp(re,self+offset,&matchlength,captures,max_captures);
        if(({        (_condtional_value_X506=(regex_result>=0&&group_count==0));        _condtional_value_X506;        })) {
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6461, "struct list$1char$ph*"))));
            match_string=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            list$1char$ph_add(result,(char*)come_increment_ref_count(block_result));
            if(({            (_condtional_value_X507=(matchlength==0));            _condtional_value_X507;            })) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(({        (_condtional_value_X508=(regex_result>=0&&group_count>0));        _condtional_value_X508;        })) {
            group_strings_48=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6478, "struct list$1char$ph*"))));
            for(            ({            (_condtional_value_X509=(i=0));            _condtional_value_X509;            });            ({            (_condtional_value_X510=(i<group_count));            _condtional_value_X510;            });            ({            (_condtional_value_X511=(i++));            _condtional_value_X511;            })            ){
                cp=captures[i];
                match_string_49=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(group_strings_48,(char*)come_increment_ref_count(match_string_49));
                (match_string_49 = come_decrement_ref_count(match_string_49, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_50=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result_51=(char*)come_increment_ref_count(block(parent,match_string_50,group_strings_48));
            list$1char$ph_add(result,(char*)come_increment_ref_count(block_result_51));
            if(({            (_condtional_value_X512=(matchlength==0));            _condtional_value_X512;            })) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_50 = come_decrement_ref_count(match_string_50, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_51 = come_decrement_ref_count(block_result_51, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__264 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__264, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__264;
}

char* string_sub_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*)){
void* __right_value263 = (void*)0;
char* __result_obj__265;
    __result_obj__265 = (char*)come_increment_ref_count(((char*)(__right_value263=charp_sub_block(self,reg,parent,block))));
    (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__265 = come_decrement_ref_count(__result_obj__265, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__265;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__266;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__266 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__266, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__266;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X513;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X513=(it!=((void*)0)));    _condtional_value_X513;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X514;
    if(({    (_condtional_value_X514=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X514;    })) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X515;
_Bool _condtional_value_X516;
    if(({    (_condtional_value_X515=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X515;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X516=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X516;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sType_finalize(struct sType* self){
_Bool _condtional_value_X517;
_Bool _condtional_value_X518;
_Bool _condtional_value_X519;
_Bool _condtional_value_X522;
_Bool _condtional_value_X523;
_Bool _condtional_value_X524;
_Bool _condtional_value_X525;
_Bool _condtional_value_X526;
_Bool _condtional_value_X527;
_Bool _condtional_value_X528;
_Bool _condtional_value_X529;
_Bool _condtional_value_X532;
_Bool _condtional_value_X533;
_Bool _condtional_value_X534;
_Bool _condtional_value_X535;
_Bool _condtional_value_X536;
    if(({    (_condtional_value_X517=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X517;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X518=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X518;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X519=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X519;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X522=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X522;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X523=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X523;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X524=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X524;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X525=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X525;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X526=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X526;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X527=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X527;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X528=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X528;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X529=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X529;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X532=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X532;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X533=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X533;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X534=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X534;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X535=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X535;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X536=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X536;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X520;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X520=(it!=((void*)0)));    _condtional_value_X520;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _condtional_value_X521;
    if(({    (_condtional_value_X521=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X521;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X530;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X530=(it!=((void*)0)));    _condtional_value_X530;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _condtional_value_X531;
    if(({    (_condtional_value_X531=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X531;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X537;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X537=(it!=((void*)0)));    _condtional_value_X537;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sClass_finalize(struct sClass* self){
_Bool _condtional_value_X538;
_Bool _condtional_value_X539;
_Bool _condtional_value_X540;
_Bool _condtional_value_X541;
    if(({    (_condtional_value_X538=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X538;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X539=(self!=((void*)0)&&self->mFields!=((void*)0)));    _condtional_value_X539;    })) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X540=(self!=((void*)0)&&self->mParentClassName!=((void*)0)));    _condtional_value_X540;    })) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X541=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X541;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info){
void* __right_value264 = (void*)0;
char* __dec_obj19;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj20;
struct sClass* __result_obj__267;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    self->mUniq=uniq_;
    __dec_obj19=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj20=self->mFields,
    self->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "./common.h", 81, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__267 = (struct sClass*)come_increment_ref_count(self);
    come_call_finalizer(sClass_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, __result_obj__267, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__267;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X545;
_Bool _condtional_value_X546;
_Bool _condtional_value_X547;
struct sClass* __result_obj__268;
_Bool _condtional_value_X548;
_Bool _condtional_value_X549;
struct sClass* __result_obj__269;
struct sClass* __result_obj__270;
struct sClass* __result_obj__271;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X545=((_Bool)1));    _condtional_value_X545;    })) {
        if(({        (_condtional_value_X546=(self->item_existance[it]));        _condtional_value_X546;        })) {
            if(({            (_condtional_value_X547=(string_equals(self->keys[it],key)));            _condtional_value_X547;            })) {
                __result_obj__268 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__268, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__268;
            }
            it++;
            if(({            (_condtional_value_X548=(it>=self->size));            _condtional_value_X548;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X549=(it==hash));            _condtional_value_X549;            })) {
                __result_obj__269 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__269, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__269;
            }
        }
        else {
            __result_obj__270 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__270, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__270;
        }
    }
    __result_obj__271 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__271, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__271;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X550;
_Bool _condtional_value_X551;
_Bool _condtional_value_X552;
struct sClass* __result_obj__272;
_Bool _condtional_value_X553;
_Bool _condtional_value_X554;
struct sClass* __result_obj__273;
struct sClass* __result_obj__274;
struct sClass* __result_obj__275;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X550=((_Bool)1));    _condtional_value_X550;    })) {
        if(({        (_condtional_value_X551=(self->item_existance[it]));        _condtional_value_X551;        })) {
            if(({            (_condtional_value_X552=(string_equals(self->keys[it],key)));            _condtional_value_X552;            })) {
                __result_obj__272 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__272, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__272;
            }
            it++;
            if(({            (_condtional_value_X553=(it>=self->size));            _condtional_value_X553;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X554=(it==hash));            _condtional_value_X554;            })) {
                __result_obj__273 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__273, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__273;
            }
        }
        else {
            __result_obj__274 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__274, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__274;
        }
    }
    __result_obj__275 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__275, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__275;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
_Bool _condtional_value_X557;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X574;
_Bool _condtional_value_X575;
_Bool _condtional_value_X576;
_Bool _condtional_value_X577;
_Bool _condtional_value_X602;
_Bool _condtional_value_X603;
_Bool _condtional_value_X604;
_Bool _condtional_value_X605;
_Bool _condtional_value_X606;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X609;
_Bool _condtional_value_X610;
_Bool _condtional_value_X613;
_Bool _condtional_value_X614;
_Bool _condtional_value_X615;
struct map$2char$phsClass$ph* __result_obj__296;
    if(({    (_condtional_value_X557=(self->len*10>=self->size));    _condtional_value_X557;    })) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X574=((_Bool)1));    _condtional_value_X574;    })) {
        if(({        (_condtional_value_X575=(self->item_existance[it]));        _condtional_value_X575;        })) {
            if(({            (_condtional_value_X576=(string_equals(self->keys[it],key)));            _condtional_value_X576;            })) {
                if(({                (_condtional_value_X577=(1));                _condtional_value_X577;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X602=(1));                _condtional_value_X602;                })) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X603=(it>=self->size));            _condtional_value_X603;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X604=(it==hash));            _condtional_value_X604;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X605=(1));            _condtional_value_X605;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X606=(1));            _condtional_value_X606;            })) {
                self->items[it]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X609=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X609;    });    ({    (_condtional_value_X610=(!list$1char$ph_end(self->key_list)));    _condtional_value_X610;    });    ({    (_condtional_value_X613=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X613;    })    ){
        if(({        (_condtional_value_X614=(string_equals(it2,key)));        _condtional_value_X614;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X615=(!same_key_exist));    _condtional_value_X615;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__296 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__296;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size;
void* __right_value275 = (void*)0;
char** keys;
void* __right_value276 = (void*)0;
struct sClass** items;
void* __right_value277 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X560;
_Bool _condtional_value_X561;
_Bool _condtional_value_X564;
struct sClass* default_value;
void* __right_value278 = (void*)0;
struct sClass* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X570;
_Bool _condtional_value_X571;
_Bool _condtional_value_X572;
_Bool _condtional_value_X573;
struct sClass* default_value_54;
void* __right_value279 = (void*)0;
default_value = (void*)0;
default_value_54 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value275=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2221, "char**"))));
    items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value276=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size)), "/usr/local/include/comelang.h", 2222, "struct sClass**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value277=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2223, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X560=(it=map$2char$phsClass$ph_begin(self)));    _condtional_value_X560;    });    ({    (_condtional_value_X561=(!map$2char$phsClass$ph_end(self)));    _condtional_value_X561;    });    ({    (_condtional_value_X564=(it=map$2char$phsClass$ph_next(self)));    _condtional_value_X564;    })    ){
        memset(&default_value,0,sizeof(struct sClass*));
        it2=((struct sClass*)(__right_value278=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value))));
        come_call_finalizer(sClass_finalize, __right_value278, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X570=((_Bool)1));        _condtional_value_X570;        })) {
            if(({            (_condtional_value_X571=(item_existance[n]));            _condtional_value_X571;            })) {
                n++;
                if(({                (_condtional_value_X572=(n>=size));                _condtional_value_X572;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X573=(n==hash));                _condtional_value_X573;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sClass*)(__right_value279=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value_54))));
                come_call_finalizer(sClass_finalize, __right_value279, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sClass_finalize, default_value_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
_Bool _condtional_value_X558;
char* result;
char* __result_obj__276;
_Bool _condtional_value_X559;
char* __result_obj__277;
char* result_52;
char* __result_obj__278;
result = (void*)0;
result_52 = (void*)0;
    if(({    (_condtional_value_X558=(self==((void*)0)));    _condtional_value_X558;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__276 = result;
        return __result_obj__276;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X559=(self->key_list->it));    _condtional_value_X559;    })) {
        __result_obj__277 = self->key_list->it->item;
        return __result_obj__277;
    }
    memset(&result_52,0,sizeof(char*));
    __result_obj__278 = result_52;
    return __result_obj__278;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
_Bool _condtional_value_X562;
char* result;
char* __result_obj__279;
_Bool _condtional_value_X563;
char* __result_obj__280;
char* result_53;
char* __result_obj__281;
result = (void*)0;
result_53 = (void*)0;
    if(({    (_condtional_value_X562=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X562;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__279 = result;
        return __result_obj__279;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X563=(self->key_list->it));    _condtional_value_X563;    })) {
        __result_obj__280 = self->key_list->it->item;
        return __result_obj__280;
    }
    memset(&result_53,0,sizeof(char*));
    __result_obj__281 = result_53;
    return __result_obj__281;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X565;
_Bool _condtional_value_X566;
_Bool _condtional_value_X567;
struct sClass* __result_obj__282;
_Bool _condtional_value_X568;
_Bool _condtional_value_X569;
struct sClass* __result_obj__283;
struct sClass* __result_obj__284;
struct sClass* __result_obj__285;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X565=((_Bool)1));    _condtional_value_X565;    })) {
        if(({        (_condtional_value_X566=(self->item_existance[it]));        _condtional_value_X566;        })) {
            if(({            (_condtional_value_X567=(string_equals(self->keys[it],key)));            _condtional_value_X567;            })) {
                __result_obj__282 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__282, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__282;
            }
            it++;
            if(({            (_condtional_value_X568=(it>=self->size));            _condtional_value_X568;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X569=(it==hash));            _condtional_value_X569;            })) {
                __result_obj__283 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__283, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__283;
            }
        }
        else {
            __result_obj__284 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__284, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__284;
        }
    }
    __result_obj__285 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__285, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__285;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
_Bool _condtional_value_X578;
_Bool _condtional_value_X579;
struct list$1char$ph* __result_obj__289;
    it2=0;
    it=self->head;
    while(({    (_condtional_value_X578=(it!=((void*)0)));    _condtional_value_X578;    })) {
        if(({        (_condtional_value_X579=(string_equals(it->item,item)));        _condtional_value_X579;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__289 = self;
    return __result_obj__289;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _condtional_value_X580;
_Bool _condtional_value_X581;
_Bool _condtional_value_X582;
int tmp;
_Bool _condtional_value_X583;
_Bool _condtional_value_X584;
_Bool _condtional_value_X585;
struct list$1char$ph* __result_obj__286;
_Bool _condtional_value_X586;
_Bool _condtional_value_X588;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X589;
_Bool _condtional_value_X590;
struct list_item$1char$ph* prev_it;
_Bool _condtional_value_X591;
_Bool _condtional_value_X592;
struct list_item$1char$ph* it_55;
int i_56;
_Bool _condtional_value_X593;
_Bool _condtional_value_X594;
_Bool _condtional_value_X595;
struct list_item$1char$ph* prev_it_57;
struct list_item$1char$ph* it_58;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_59;
_Bool _condtional_value_X596;
_Bool _condtional_value_X597;
_Bool _condtional_value_X598;
_Bool _condtional_value_X599;
struct list_item$1char$ph* prev_it_60;
_Bool _condtional_value_X600;
_Bool _condtional_value_X601;
struct list$1char$ph* __result_obj__288;
    if(({    (_condtional_value_X580=(head<0));    _condtional_value_X580;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X581=(tail<0));    _condtional_value_X581;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X582=(head>tail));    _condtional_value_X582;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X583=(head<0));    _condtional_value_X583;    })) {
        head=0;
    }
    if(({    (_condtional_value_X584=(tail>self->len));    _condtional_value_X584;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X585=(head==tail));    _condtional_value_X585;    })) {
        __result_obj__286 = self;
        return __result_obj__286;
    }
    if(({    (_condtional_value_X586=(head==0&&tail==self->len));    _condtional_value_X586;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_condtional_value_X588=(head==0));    _condtional_value_X588;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X589=(it!=((void*)0)));        _condtional_value_X589;        })) {
            if(({            (_condtional_value_X590=(i<tail));            _condtional_value_X590;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X591=(i==tail));            _condtional_value_X591;            })) {
                self->head=it;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it=it->next;
                i++;
            }
        }
    }
    else if(({    (_condtional_value_X592=(tail==self->len));    _condtional_value_X592;    })) {
        it_55=self->head;
        i_56=0;
        while(({        (_condtional_value_X593=(it_55!=((void*)0)));        _condtional_value_X593;        })) {
            if(({            (_condtional_value_X594=(i_56==head));            _condtional_value_X594;            })) {
                self->tail=it_55->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X595=(i_56>=head));            _condtional_value_X595;            })) {
                prev_it_57=it_55;
                it_55=it_55->next;
                i_56++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_55=it_55->next;
                i_56++;
            }
        }
    }
    else {
        it_58=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_59=0;
        while(({        (_condtional_value_X596=(it_58!=((void*)0)));        _condtional_value_X596;        })) {
            if(({            (_condtional_value_X597=(i_59==head));            _condtional_value_X597;            })) {
                head_prev_it=it_58->prev;
            }
            if(({            (_condtional_value_X598=(i_59==tail));            _condtional_value_X598;            })) {
                tail_it=it_58;
            }
            if(({            (_condtional_value_X599=(i_59>=head&&i_59<tail));            _condtional_value_X599;            })) {
                prev_it_60=it_58;
                it_58=it_58->next;
                i_59++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_58=it_58->next;
                i_59++;
            }
        }
        if(({        (_condtional_value_X600=(head_prev_it!=((void*)0)));        _condtional_value_X600;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X601=(tail_it!=((void*)0)));        _condtional_value_X601;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__288 = self;
    return __result_obj__288;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X587;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__287;
    it=self->head;
    while(({    (_condtional_value_X587=(it!=((void*)0)));    _condtional_value_X587;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__287 = self;
    return __result_obj__287;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _condtional_value_X607;
char* result;
char* __result_obj__290;
_Bool _condtional_value_X608;
char* __result_obj__291;
char* result_61;
char* __result_obj__292;
result = (void*)0;
result_61 = (void*)0;
    if(({    (_condtional_value_X607=(self==((void*)0)));    _condtional_value_X607;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__290 = result;
        return __result_obj__290;
    }
    self->it=self->head;
    if(({    (_condtional_value_X608=(self->it));    _condtional_value_X608;    })) {
        __result_obj__291 = self->it->item;
        return __result_obj__291;
    }
    memset(&result_61,0,sizeof(char*));
    __result_obj__292 = result_61;
    return __result_obj__292;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _condtional_value_X611;
char* result;
char* __result_obj__293;
_Bool _condtional_value_X612;
char* __result_obj__294;
char* result_62;
char* __result_obj__295;
result = (void*)0;
result_62 = (void*)0;
    if(({    (_condtional_value_X611=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X611;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__293 = result;
        return __result_obj__293;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X612=(self->it));    _condtional_value_X612;    })) {
        __result_obj__294 = self->it->item;
        return __result_obj__294;
    }
    memset(&result_62,0,sizeof(char*));
    __result_obj__295 = result_62;
    return __result_obj__295;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__297;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__297 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__297, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__297;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X616;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X616=(it!=((void*)0)));    _condtional_value_X616;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__298;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__298 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__298, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__298;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X617;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X617=(it!=((void*)0)));    _condtional_value_X617;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X618;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X618=(it!=((void*)0)));    _condtional_value_X618;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
int pointer_num;
char* p;
_Bool _condtional_value_X542;
_Bool _condtional_value_X543;
_Bool _condtional_value_X544;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
char* name2;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sClass* klass;
void* __right_value272 = (void*)0;
struct sClass* generics_class;
_Bool _condtional_value_X555;
_Bool _condtional_value_X556;
void* __right_value273 = (void*)0;
struct sClass* klass2;
void* __right_value274 = (void*)0;
char* __dec_obj21;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sType* __dec_obj22;
struct sType* __dec_obj23;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1sType$ph* __dec_obj24;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1sNode$ph* __dec_obj25;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1sType$ph* __dec_obj26;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1char$ph* __dec_obj27;
struct sType* __dec_obj28;
struct sNode* __dec_obj29;
void* __right_value292 = (void*)0;
char* __dec_obj30;
struct sNode* __dec_obj31;
struct sType* __result_obj__299;
    pointer_num=0;
    p=name;
    while(({    (_condtional_value_X542=(*p));    _condtional_value_X542;    })) {
        if(({        (_condtional_value_X543=(xisalpha(*p)||*p==95));        _condtional_value_X543;        })) {
            p++;
        }
        else {
            break;
        }
    }
    while(({    (_condtional_value_X544=(*p==42));    _condtional_value_X544;    })) {
        pointer_num++;
        p++;
    }
    name2=(char*)come_increment_ref_count(charp_substring(((char*)(__right_value267=__builtin_string(name))),0,-pointer_num-1));
    (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1, 0, (void*)0));
    klass=((struct sClass*)(__right_value271=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value270=__builtin_string(name2))))));
    (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value271, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_class=((struct sClass*)(__right_value272=map$2char$phsClass$ph_operator_load_element(info->generics_classes,name2)));
    come_call_finalizer(sClass_finalize, __right_value272, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({    (_condtional_value_X555=(klass==((void*)0)&&generics_class==((void*)0)));    _condtional_value_X555;    })) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2);
    }
    if(({    (_condtional_value_X556=(klass));    _condtional_value_X556;    })) {
        self->mClass=klass;
    }
    else {
        klass2=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "./common.h", 194, "struct sClass*"));
        __dec_obj21=klass2->mName,
        klass2->mName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name)),(struct sClass*)come_increment_ref_count(klass2));
        self->mClass=((struct sClass*)(__right_value283=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value282=__builtin_string(name))))));
        (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sClass_finalize, __right_value283, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sClass_finalize, klass2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj22=self->mNoSolvedGenericsType,
    self->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj23=self->mOriginalLoadVarType,
    self->mOriginalLoadVarType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj24=self->mGenericsTypes,
    self->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./common.h", 204, "struct list$1sType$ph*"))));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj25=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./common.h", 205, "struct list$1sNode$ph*"))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj26=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./common.h", 206, "struct list$1sType$ph*"))));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj27=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./common.h", 207, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mVarArgs=(_Bool)0;
    __dec_obj28=self->mResultType,
    self->mResultType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mNoHeap=(_Bool)0;
    self->mPointerNum=pointer_num;
    __dec_obj29=self->mSizeNum,
    self->mSizeNum=((void*)0);
    (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj30=self->mOriginalTypeName,
    self->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(""));
    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
    self->mOriginalPointerNum=0;
    __dec_obj31=self->mTypeOfNode,
    self->mTypeOfNode=((void*)0);
    (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__299 = (struct sType*)come_increment_ref_count(self);
    come_call_finalizer(sType_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, __result_obj__299, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__299;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self){
struct list$1sVar$ph* __result_obj__300;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__300 = (struct list$1sVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__300, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__300;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X619;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X619=(it!=((void*)0)));    _condtional_value_X619;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
_Bool _condtional_value_X620;
    if(({    (_condtional_value_X620=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X620;    })) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
_Bool _condtional_value_X621;
_Bool _condtional_value_X622;
_Bool _condtional_value_X623;
_Bool _condtional_value_X624;
    if(({    (_condtional_value_X621=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X621;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X622=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X622;    })) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X623=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X623;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X624=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X624;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X625;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X625=(it!=((void*)0)));    _condtional_value_X625;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
_Bool _condtional_value_X626;
struct sType* result;
struct sType* __result_obj__301;
_Bool _condtional_value_X627;
struct sType* __result_obj__302;
struct sType* result_63;
struct sType* __result_obj__303;
result = (void*)0;
result_63 = (void*)0;
    if(({    (_condtional_value_X626=(self==((void*)0)));    _condtional_value_X626;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__301 = result;
        return __result_obj__301;
    }
    self->it=self->head;
    if(({    (_condtional_value_X627=(self->it));    _condtional_value_X627;    })) {
        __result_obj__302 = self->it->item;
        return __result_obj__302;
    }
    memset(&result_63,0,sizeof(struct sType*));
    __result_obj__303 = result_63;
    return __result_obj__303;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
_Bool _condtional_value_X630;
struct sType* result;
struct sType* __result_obj__304;
_Bool _condtional_value_X631;
struct sType* __result_obj__305;
struct sType* result_64;
struct sType* __result_obj__306;
result = (void*)0;
result_64 = (void*)0;
    if(({    (_condtional_value_X630=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X630;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__304 = result;
        return __result_obj__304;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X631=(self->it));    _condtional_value_X631;    })) {
        __result_obj__305 = self->it->item;
        return __result_obj__305;
    }
    memset(&result_64,0,sizeof(struct sType*));
    __result_obj__306 = result_64;
    return __result_obj__306;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X633;
void* __right_value298 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj39;
_Bool _condtional_value_X634;
void* __right_value299 = (void*)0;
struct list_item$1sType$ph* litem_65;
struct sType* __dec_obj40;
void* __right_value300 = (void*)0;
struct list_item$1sType$ph* litem_66;
struct sType* __dec_obj41;
struct list$1sType$ph* __result_obj__307;
    if(({    (_condtional_value_X633=(self->len==0));    _condtional_value_X633;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value298=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj39=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X634=(self->len==1));    _condtional_value_X634;    })) {
        litem_65=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value299=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1sType$ph*"))));
        litem_65->prev=self->head;
        litem_65->next=((void*)0);
        __dec_obj40=litem_65->item,
        litem_65->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_65;
        self->head->next=litem_65;
    }
    else {
        litem_66=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value300=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1sType$ph*"))));
        litem_66->prev=self->tail;
        litem_66->next=((void*)0);
        __dec_obj41=litem_66->item,
        litem_66->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_66;
        self->tail=litem_66;
    }
    self->len++;
    __result_obj__307 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__307;
}

static struct sType* sType_clone(struct sType* self){
_Bool _condtional_value_X635;
struct sType* __result_obj__308;
void* __right_value301 = (void*)0;
struct sType* result;
_Bool _condtional_value_X636;
_Bool _condtional_value_X637;
void* __right_value302 = (void*)0;
struct sType* __dec_obj42;
_Bool _condtional_value_X638;
void* __right_value303 = (void*)0;
struct sType* __dec_obj43;
_Bool _condtional_value_X639;
void* __right_value311 = (void*)0;
struct list$1sType$ph* __dec_obj47;
_Bool _condtional_value_X645;
void* __right_value312 = (void*)0;
struct sType* __dec_obj48;
_Bool _condtional_value_X646;
void* __right_value314 = (void*)0;
struct sNode* __dec_obj49;
_Bool _condtional_value_X658;
void* __right_value315 = (void*)0;
struct sNode* __dec_obj50;
_Bool _condtional_value_X659;
void* __right_value316 = (void*)0;
char* __dec_obj51;
_Bool _condtional_value_X660;
void* __right_value317 = (void*)0;
char* __dec_obj52;
_Bool _condtional_value_X661;
void* __right_value318 = (void*)0;
char* __dec_obj53;
_Bool _condtional_value_X662;
_Bool _condtional_value_X663;
_Bool _condtional_value_X664;
_Bool _condtional_value_X665;
_Bool _condtional_value_X666;
_Bool _condtional_value_X667;
_Bool _condtional_value_X668;
_Bool _condtional_value_X669;
_Bool _condtional_value_X670;
_Bool _condtional_value_X671;
_Bool _condtional_value_X672;
_Bool _condtional_value_X673;
_Bool _condtional_value_X674;
_Bool _condtional_value_X675;
_Bool _condtional_value_X676;
_Bool _condtional_value_X677;
_Bool _condtional_value_X678;
_Bool _condtional_value_X679;
_Bool _condtional_value_X680;
_Bool _condtional_value_X681;
_Bool _condtional_value_X682;
_Bool _condtional_value_X683;
_Bool _condtional_value_X684;
_Bool _condtional_value_X685;
_Bool _condtional_value_X686;
_Bool _condtional_value_X687;
void* __right_value319 = (void*)0;
char* __dec_obj54;
_Bool _condtional_value_X688;
_Bool _condtional_value_X689;
_Bool _condtional_value_X690;
_Bool _condtional_value_X691;
void* __right_value327 = (void*)0;
struct list$1sNode$ph* __dec_obj58;
_Bool _condtional_value_X697;
_Bool _condtional_value_X698;
_Bool _condtional_value_X699;
_Bool _condtional_value_X700;
_Bool _condtional_value_X701;
_Bool _condtional_value_X702;
_Bool _condtional_value_X703;
void* __right_value328 = (void*)0;
char* __dec_obj59;
_Bool _condtional_value_X704;
_Bool _condtional_value_X705;
_Bool _condtional_value_X706;
void* __right_value329 = (void*)0;
struct list$1sType$ph* __dec_obj60;
_Bool _condtional_value_X707;
void* __right_value334 = (void*)0;
struct list$1char$ph* __dec_obj61;
_Bool _condtional_value_X711;
void* __right_value335 = (void*)0;
struct sType* __dec_obj62;
_Bool _condtional_value_X712;
_Bool _condtional_value_X713;
_Bool _condtional_value_X714;
void* __right_value336 = (void*)0;
struct sNode* __dec_obj63;
struct sType* __result_obj__319;
    if(({    (_condtional_value_X635=(self==(void*)0));    _condtional_value_X635;    })) {
        __result_obj__308 = (void*)0;
        return __result_obj__308;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_condtional_value_X636=(self!=((void*)0)));    _condtional_value_X636;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_condtional_value_X637=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X637;    })) {
        __dec_obj42=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X638=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X638;    })) {
        __dec_obj43=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X639=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X639;    })) {
        __dec_obj47=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X645=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X645;    })) {
        __dec_obj48=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X646=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X646;    })) {
        __dec_obj49=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X658=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X658;    })) {
        __dec_obj50=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X659=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X659;    })) {
        __dec_obj51=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X660=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X660;    })) {
        __dec_obj52=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X661=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X661;    })) {
        __dec_obj53=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X662=(self!=((void*)0)));    _condtional_value_X662;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X663=(self!=((void*)0)));    _condtional_value_X663;    })) {
        result->mUnsigned=self->mUnsigned;
    }
    if(({    (_condtional_value_X664=(self!=((void*)0)));    _condtional_value_X664;    })) {
        result->mShort=self->mShort;
    }
    if(({    (_condtional_value_X665=(self!=((void*)0)));    _condtional_value_X665;    })) {
        result->mLong=self->mLong;
    }
    if(({    (_condtional_value_X666=(self!=((void*)0)));    _condtional_value_X666;    })) {
        result->mLongLong=self->mLongLong;
    }
    if(({    (_condtional_value_X667=(self!=((void*)0)));    _condtional_value_X667;    })) {
        result->mConstant=self->mConstant;
    }
    if(({    (_condtional_value_X668=(self!=((void*)0)));    _condtional_value_X668;    })) {
        result->mAtomic=self->mAtomic;
    }
    if(({    (_condtional_value_X669=(self!=((void*)0)));    _condtional_value_X669;    })) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(({    (_condtional_value_X670=(self!=((void*)0)));    _condtional_value_X670;    })) {
        result->mRegister=self->mRegister;
    }
    if(({    (_condtional_value_X671=(self!=((void*)0)));    _condtional_value_X671;    })) {
        result->mVolatile=self->mVolatile;
    }
    if(({    (_condtional_value_X672=(self!=((void*)0)));    _condtional_value_X672;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_condtional_value_X673=(self!=((void*)0)));    _condtional_value_X673;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X674=(self!=((void*)0)));    _condtional_value_X674;    })) {
        result->mRecord=self->mRecord;
    }
    if(({    (_condtional_value_X675=(self!=((void*)0)));    _condtional_value_X675;    })) {
        result->mExtern=self->mExtern;
    }
    if(({    (_condtional_value_X676=(self!=((void*)0)));    _condtional_value_X676;    })) {
        result->mRestrict=self->mRestrict;
    }
    if(({    (_condtional_value_X677=(self!=((void*)0)));    _condtional_value_X677;    })) {
        result->mImmutable=self->mImmutable;
    }
    if(({    (_condtional_value_X678=(self!=((void*)0)));    _condtional_value_X678;    })) {
        result->mTask=self->mTask;
    }
    if(({    (_condtional_value_X679=(self!=((void*)0)));    _condtional_value_X679;    })) {
        result->mHeap=self->mHeap;
    }
    if(({    (_condtional_value_X680=(self!=((void*)0)));    _condtional_value_X680;    })) {
        result->mChannel=self->mChannel;
    }
    if(({    (_condtional_value_X681=(self!=((void*)0)));    _condtional_value_X681;    })) {
        result->mNoHeap=self->mNoHeap;
    }
    if(({    (_condtional_value_X682=(self!=((void*)0)));    _condtional_value_X682;    })) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(({    (_condtional_value_X683=(self!=((void*)0)));    _condtional_value_X683;    })) {
        result->mException=self->mException;
    }
    if(({    (_condtional_value_X684=(self!=((void*)0)));    _condtional_value_X684;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_condtional_value_X685=(self!=((void*)0)));    _condtional_value_X685;    })) {
        result->mNullValue=self->mNullValue;
    }
    if(({    (_condtional_value_X686=(self!=((void*)0)));    _condtional_value_X686;    })) {
        result->mGuardValue=self->mGuardValue;
    }
    if(({    (_condtional_value_X687=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X687;    })) {
        __dec_obj54=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X688=(self!=((void*)0)));    _condtional_value_X688;    })) {
        result->mTypedef=self->mTypedef;
    }
    if(({    (_condtional_value_X689=(self!=((void*)0)));    _condtional_value_X689;    })) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(({    (_condtional_value_X690=(self!=((void*)0)));    _condtional_value_X690;    })) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(({    (_condtional_value_X691=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X691;    })) {
        __dec_obj58=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X697=(self!=((void*)0)));    _condtional_value_X697;    })) {
        result->mPointerNum=self->mPointerNum;
    }
    if(({    (_condtional_value_X698=(self!=((void*)0)));    _condtional_value_X698;    })) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(({    (_condtional_value_X699=(self!=((void*)0)));    _condtional_value_X699;    })) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(({    (_condtional_value_X700=(self!=((void*)0)));    _condtional_value_X700;    })) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(({    (_condtional_value_X701=(self!=((void*)0)));    _condtional_value_X701;    })) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(({    (_condtional_value_X702=(self!=((void*)0)));    _condtional_value_X702;    })) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(({    (_condtional_value_X703=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X703;    })) {
        __dec_obj59=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X704=(self!=((void*)0)));    _condtional_value_X704;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_condtional_value_X705=(self!=((void*)0)));    _condtional_value_X705;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_condtional_value_X706=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X706;    })) {
        __dec_obj60=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X707=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X707;    })) {
        __dec_obj61=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X711=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X711;    })) {
        __dec_obj62=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X712=(self!=((void*)0)));    _condtional_value_X712;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X713=(self!=((void*)0)));    _condtional_value_X713;    })) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(({    (_condtional_value_X714=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X714;    })) {
        __dec_obj63=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__319 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__319;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X640;
struct list$1sType$ph* __result_obj__309;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X641;
_Bool _condtional_value_X642;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct list$1sType$ph* __result_obj__311;
    if(({    (_condtional_value_X640=(self==((void*)0)));    _condtional_value_X640;    })) {
        __result_obj__309 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__309, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__309;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X641=(it!=((void*)0)));    _condtional_value_X641;    })) {
        if(({        (_condtional_value_X642=(1));        _condtional_value_X642;        })) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__311 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__311, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__311;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X643;
void* __right_value306 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj44;
_Bool _condtional_value_X644;
void* __right_value307 = (void*)0;
struct list_item$1sType$ph* litem_67;
struct sType* __dec_obj45;
void* __right_value308 = (void*)0;
struct list_item$1sType$ph* litem_68;
struct sType* __dec_obj46;
struct list$1sType$ph* __result_obj__310;
    if(({    (_condtional_value_X643=(self->len==0));    _condtional_value_X643;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value306=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj44=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X644=(self->len==1));    _condtional_value_X644;    })) {
        litem_67=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value307=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sType$ph*"))));
        litem_67->prev=self->head;
        litem_67->next=((void*)0);
        __dec_obj45=litem_67->item,
        litem_67->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_67;
        self->head->next=litem_67;
    }
    else {
        litem_68=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value308=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sType$ph*"))));
        litem_68->prev=self->tail;
        litem_68->next=((void*)0);
        __dec_obj46=litem_68->item,
        litem_68->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_68;
        self->tail=litem_68;
    }
    self->len++;
    __result_obj__310 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__310;
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _condtional_value_X647;
struct sNode* __result_obj__312;
void* __right_value313 = (void*)0;
struct sNode* result;
_Bool _condtional_value_X648;
_Bool _condtional_value_X649;
_Bool _condtional_value_X650;
_Bool _condtional_value_X651;
_Bool _condtional_value_X652;
_Bool _condtional_value_X653;
_Bool _condtional_value_X654;
_Bool _condtional_value_X655;
_Bool _condtional_value_X656;
_Bool _condtional_value_X657;
struct sNode* __result_obj__313;
    if(({    (_condtional_value_X647=(self==(void*)0));    _condtional_value_X647;    })) {
        __result_obj__312 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__312) ? __result_obj__312 = come_decrement_ref_count(__result_obj__312, ((struct sNode*)__result_obj__312)->finalize, ((struct sNode*)__result_obj__312)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__312;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(({    (_condtional_value_X648=(self!=((void*)0)&&self->clone!=((void*)0)));    _condtional_value_X648;    })) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(({    (_condtional_value_X649=(self!=((void*)0)));    _condtional_value_X649;    })) {
        result->finalize=self->finalize;
    }
    if(({    (_condtional_value_X650=(self!=((void*)0)));    _condtional_value_X650;    })) {
        result->clone=self->clone;
    }
    if(({    (_condtional_value_X651=(self!=((void*)0)));    _condtional_value_X651;    })) {
        result->compile=self->compile;
    }
    if(({    (_condtional_value_X652=(self!=((void*)0)));    _condtional_value_X652;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X653=(self!=((void*)0)));    _condtional_value_X653;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X654=(self!=((void*)0)));    _condtional_value_X654;    })) {
        result->sname=self->sname;
    }
    if(({    (_condtional_value_X655=(self!=((void*)0)));    _condtional_value_X655;    })) {
        result->terminated=self->terminated;
    }
    if(({    (_condtional_value_X656=(self!=((void*)0)));    _condtional_value_X656;    })) {
        result->kind=self->kind;
    }
    if(({    (_condtional_value_X657=(self!=((void*)0)));    _condtional_value_X657;    })) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__313 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__313) ? __result_obj__313 = come_decrement_ref_count(__result_obj__313, ((struct sNode*)__result_obj__313)->finalize, ((struct sNode*)__result_obj__313)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__313;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _condtional_value_X692;
struct list$1sNode$ph* __result_obj__314;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X693;
_Bool _condtional_value_X694;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct list$1sNode$ph* __result_obj__316;
    if(({    (_condtional_value_X692=(self==((void*)0)));    _condtional_value_X692;    })) {
        __result_obj__314 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__314, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__314;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X693=(it!=((void*)0)));    _condtional_value_X693;    })) {
        if(({        (_condtional_value_X694=(1));        _condtional_value_X694;        })) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__316 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__316, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__316;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
_Bool _condtional_value_X695;
void* __right_value322 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj55;
_Bool _condtional_value_X696;
void* __right_value323 = (void*)0;
struct list_item$1sNode$ph* litem_69;
struct sNode* __dec_obj56;
void* __right_value324 = (void*)0;
struct list_item$1sNode$ph* litem_70;
struct sNode* __dec_obj57;
struct list$1sNode$ph* __result_obj__315;
    if(({    (_condtional_value_X695=(self->len==0));    _condtional_value_X695;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value322=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj55=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X696=(self->len==1));    _condtional_value_X696;    })) {
        litem_69=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value323=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sNode$ph*"))));
        litem_69->prev=self->head;
        litem_69->next=((void*)0);
        __dec_obj56=litem_69->item,
        litem_69->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_69;
        self->head->next=litem_69;
    }
    else {
        litem_70=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value324=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sNode$ph*"))));
        litem_70->prev=self->tail;
        litem_70->next=((void*)0);
        __dec_obj57=litem_70->item,
        litem_70->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_70;
        self->tail=litem_70;
    }
    self->len++;
    __result_obj__315 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__315;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
_Bool _condtional_value_X708;
struct list$1char$ph* __result_obj__317;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X709;
_Bool _condtional_value_X710;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1char$ph* __result_obj__318;
    if(({    (_condtional_value_X708=(self==((void*)0)));    _condtional_value_X708;    })) {
        __result_obj__317 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__317, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__317;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X709=(it!=((void*)0)));    _condtional_value_X709;    })) {
        if(({        (_condtional_value_X710=(1));        _condtional_value_X710;        })) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1022, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1025, "char*")));
        }
        it=it->next;
    }
    __result_obj__318 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__318, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__318;
}

static void sBlock_finalize(struct sBlock* self){
_Bool _condtional_value_X718;
_Bool _condtional_value_X719;
    if(({    (_condtional_value_X718=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X718;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X719=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X719;    })) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sFun_finalize(struct sFun* self){
_Bool _condtional_value_X721;
_Bool _condtional_value_X722;
_Bool _condtional_value_X723;
_Bool _condtional_value_X724;
_Bool _condtional_value_X725;
_Bool _condtional_value_X726;
_Bool _condtional_value_X727;
_Bool _condtional_value_X728;
_Bool _condtional_value_X729;
_Bool _condtional_value_X730;
_Bool _condtional_value_X731;
_Bool _condtional_value_X732;
_Bool _condtional_value_X733;
_Bool _condtional_value_X734;
_Bool _condtional_value_X735;
_Bool _condtional_value_X736;
    if(({    (_condtional_value_X721=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X721;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X722=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X722;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X723=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X723;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X724=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X724;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X725=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X725;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X726=(self!=((void*)0)&&self->mLambdaType!=((void*)0)));    _condtional_value_X726;    })) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X727=(self!=((void*)0)&&self->mAllVar!=((void*)0)));    _condtional_value_X727;    })) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X728=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X728;    })) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X729=(self!=((void*)0)&&self->mTextBlock!=((void*)0)));    _condtional_value_X729;    })) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X730=(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)));    _condtional_value_X730;    })) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X731=(self!=((void*)0)&&self->mSource!=((void*)0)));    _condtional_value_X731;    })) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X732=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _condtional_value_X732;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X733=(self!=((void*)0)&&self->mSourceHead2!=((void*)0)));    _condtional_value_X733;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X734=(self!=((void*)0)&&self->mSourceDefer!=((void*)0)));    _condtional_value_X734;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X735=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X735;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X736=(self!=((void*)0)&&self->mFunAttribute!=((void*)0)));    _condtional_value_X736;    })) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_){
char* __dec_obj32;
struct sType* __dec_obj33;
struct list$1sType$ph* __dec_obj34;
struct list$1char$ph* __dec_obj35;
struct list$1char$ph* __dec_obj36;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1sVar$ph* __dec_obj37;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sType* __dec_obj38;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X628;
_Bool _condtional_value_X629;
_Bool _condtional_value_X632;
void* __right_value337 = (void*)0;
struct list$1char$ph* o2_saved_71;
char* it_72;
_Bool _condtional_value_X715;
_Bool _condtional_value_X716;
_Bool _condtional_value_X717;
void* __right_value338 = (void*)0;
struct sType* __dec_obj64;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct buffer* __dec_obj65;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct buffer* __dec_obj66;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct buffer* __dec_obj67;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct buffer* __dec_obj68;
struct sBlock* __dec_obj69;
char* __dec_obj70;
char* __dec_obj71;
_Bool _condtional_value_X720;
char* __dec_obj72;
char* __dec_obj73;
struct sFun* __result_obj__320;
    __dec_obj32=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj33=self->mResultType,
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj34=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj35=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj36=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    self->mConstFun=const_fun;
    self->mGenerate=generate_;
    __dec_obj37=self->mAllVar,
    self->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc_v2(1, sizeof(struct list$1sVar$ph)*(1), "./common.h", 299, "struct list$1sVar$ph*"))));
    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj38=self->mLambdaType,
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "./common.h", 301, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(    ({    (_condtional_value_X628=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(param_types),it=list$1sType$ph_begin(o2_saved)));    _condtional_value_X628;    });    ({    (_condtional_value_X629=(!list$1sType$ph_end(o2_saved)));    _condtional_value_X629;    });    ({    (_condtional_value_X632=(it=list$1sType$ph_next(o2_saved)));    _condtional_value_X632;    })    ){
        list$1sType$ph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(sType_clone(it)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(    ({    (_condtional_value_X715=(o2_saved_71=(struct list$1char$ph*)come_increment_ref_count(param_names),it_72=list$1char$ph_begin(o2_saved_71)));    _condtional_value_X715;    });    ({    (_condtional_value_X716=(!list$1char$ph_end(o2_saved_71)));    _condtional_value_X716;    });    ({    (_condtional_value_X717=(it_72=list$1char$ph_next(o2_saved_71)));    _condtional_value_X717;    })    ){
        list$1char$ph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count((char*)come_memdup(it_72, "./common.h", 308, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj64=self->mLambdaType->mResultType,
    self->mLambdaType->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj65=self->mSource,
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./common.h", 314, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj66=self->mSourceHead,
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./common.h", 315, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj67=self->mSourceHead2,
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./common.h", 316, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj68=self->mSourceDefer,
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./common.h", 317, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj69=self->mBlock,
    self->mBlock=(struct sBlock*)come_increment_ref_count(block);
    come_call_finalizer(sBlock_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj70=self->mTextBlock,
    self->mTextBlock=(char*)come_increment_ref_count(text_block);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj71=self->mTextBlockSName,
    self->mTextBlockSName=(char*)come_increment_ref_count(generics_sname);
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
    self->mTextBlockSline=generics_sline;
    if(({    (_condtional_value_X720=((result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0));    _condtional_value_X720;    })) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj72=self->mAttribute,
    self->mAttribute=(char*)come_increment_ref_count(attribute);
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj73=self->mFunAttribute,
    self->mFunAttribute=(char*)come_increment_ref_count(fun_attribute);
    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
    self->mImmutable=immutable_;
    __result_obj__320 = (struct sFun*)come_increment_ref_count(self);
    come_call_finalizer(sFun_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (text_block = come_decrement_ref_count(text_block, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __result_obj__320, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__320;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
_Bool _condtional_value_X737;
_Bool _condtional_value_X738;
_Bool _condtional_value_X739;
_Bool _condtional_value_X740;
_Bool _condtional_value_X741;
_Bool _condtional_value_X742;
_Bool _condtional_value_X743;
_Bool _condtional_value_X744;
_Bool _condtional_value_X745;
_Bool _condtional_value_X746;
    if(({    (_condtional_value_X737=(self!=((void*)0)&&self->mImplType!=((void*)0)));    _condtional_value_X737;    })) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X738=(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)));    _condtional_value_X738;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X739=(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)));    _condtional_value_X739;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X740=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X740;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X741=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X741;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X742=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X742;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X743=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X743;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X744=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X744;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X745=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X745;    })) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X746=(self!=((void*)0)&&self->mGenericsSName!=((void*)0)));    _condtional_value_X746;    })) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun){
void* __right_value347 = (void*)0;
struct list$1char$ph* __dec_obj74;
void* __right_value348 = (void*)0;
struct list$1char$ph* __dec_obj75;
char* __dec_obj76;
struct sType* __dec_obj77;
struct list$1sType$ph* __dec_obj78;
struct list$1char$ph* __dec_obj79;
struct list$1char$ph* __dec_obj80;
char* __dec_obj81;
void* __right_value349 = (void*)0;
char* __dec_obj82;
struct sGenericsFun* __result_obj__321;
    __dec_obj74=self->mGenericsTypeNames,
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj75=self->mMethodGenericsTypeNames,
    self->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(method_generics_type_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj76=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj77=self->mResultType,
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj78=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj79=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj80=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj81=self->mBlock,
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj82=self->mGenericsSName,
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    self->mConstFun=const_fun;
    __result_obj__321 = (struct sGenericsFun*)come_increment_ref_count(self);
    come_call_finalizer(sGenericsFun_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, __result_obj__321, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__321;
}

static void CVALUE_finalize(struct CVALUE* self){
_Bool _condtional_value_X747;
_Bool _condtional_value_X748;
_Bool _condtional_value_X749;
_Bool _condtional_value_X750;
    if(({    (_condtional_value_X747=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X747;    })) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X748=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X748;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X749=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X749;    })) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X750=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X750;    })) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct CVALUE* CVALUE_initialize(struct CVALUE* self){
struct CVALUE* __result_obj__322;
    __result_obj__322 = (struct CVALUE*)come_increment_ref_count(self);
    come_call_finalizer(CVALUE_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__322, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__322;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
int i;
_Bool _condtional_value_X751;
_Bool _condtional_value_X752;
_Bool _condtional_value_X753;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct list$1char$ph* __dec_obj87;
struct map$2char$phchar$ph* __result_obj__324;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value355=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1941, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value356=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1942, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value357=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1943, "_Bool*"))));
    for(    ({    (_condtional_value_X751=(i=0));    _condtional_value_X751;    });    ({    (_condtional_value_X752=(i<128));    _condtional_value_X752;    });    ({    (_condtional_value_X753=(i++));    _condtional_value_X753;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj87=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1953, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__324 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__324, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__324;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__323;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__323 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__323, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__323;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i;
_Bool _condtional_value_X754;
_Bool _condtional_value_X755;
_Bool _condtional_value_X756;
_Bool _condtional_value_X757;
_Bool _condtional_value_X758;
int i_73;
_Bool _condtional_value_X759;
_Bool _condtional_value_X760;
_Bool _condtional_value_X761;
_Bool _condtional_value_X762;
_Bool _condtional_value_X763;
    for(    ({    (_condtional_value_X754=(i=0));    _condtional_value_X754;    });    ({    (_condtional_value_X755=(i<self->size));    _condtional_value_X755;    });    ({    (_condtional_value_X756=(i++));    _condtional_value_X756;    })    ){
        if(({        (_condtional_value_X757=(self->item_existance[i]));        _condtional_value_X757;        })) {
            if(({            (_condtional_value_X758=(1));            _condtional_value_X758;            })) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X759=(i_73=0));    _condtional_value_X759;    });    ({    (_condtional_value_X760=(i_73<self->size));    _condtional_value_X760;    });    ({    (_condtional_value_X761=(i_73++));    _condtional_value_X761;    })    ){
        if(({        (_condtional_value_X762=(self->item_existance[i_73]));        _condtional_value_X762;        })) {
            if(({            (_condtional_value_X763=(1));            _condtional_value_X763;            })) {
                (self->keys[i_73] = come_decrement_ref_count(self->keys[i_73], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i;
_Bool _condtional_value_X764;
_Bool _condtional_value_X765;
_Bool _condtional_value_X766;
_Bool _condtional_value_X767;
_Bool _condtional_value_X768;
int i_74;
_Bool _condtional_value_X769;
_Bool _condtional_value_X770;
_Bool _condtional_value_X771;
_Bool _condtional_value_X772;
_Bool _condtional_value_X773;
    for(    ({    (_condtional_value_X764=(i=0));    _condtional_value_X764;    });    ({    (_condtional_value_X765=(i<self->size));    _condtional_value_X765;    });    ({    (_condtional_value_X766=(i++));    _condtional_value_X766;    })    ){
        if(({        (_condtional_value_X767=(self->item_existance[i]));        _condtional_value_X767;        })) {
            if(({            (_condtional_value_X768=(1));            _condtional_value_X768;            })) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X769=(i_74=0));    _condtional_value_X769;    });    ({    (_condtional_value_X770=(i_74<self->size));    _condtional_value_X770;    });    ({    (_condtional_value_X771=(i_74++));    _condtional_value_X771;    })    ){
        if(({        (_condtional_value_X772=(self->item_existance[i_74]));        _condtional_value_X772;        })) {
            if(({            (_condtional_value_X773=(1));            _condtional_value_X773;            })) {
                (self->keys[i_74] = come_decrement_ref_count(self->keys[i_74], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void sModule_finalize(struct sModule* self){
_Bool _condtional_value_X774;
_Bool _condtional_value_X775;
_Bool _condtional_value_X776;
_Bool _condtional_value_X777;
_Bool _condtional_value_X778;
_Bool _condtional_value_X779;
    if(({    (_condtional_value_X774=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _condtional_value_X774;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X775=(self!=((void*)0)&&self->mSource!=((void*)0)));    _condtional_value_X775;    })) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X776=(self!=((void*)0)&&self->mLastCode!=((void*)0)));    _condtional_value_X776;    })) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X777=(self!=((void*)0)&&self->mLastCode2!=((void*)0)));    _condtional_value_X777;    })) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X778=(self!=((void*)0)&&self->mHeader!=((void*)0)));    _condtional_value_X778;    })) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X779=(self!=((void*)0)&&self->mHeaderStructs!=((void*)0)));    _condtional_value_X779;    })) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeaderStructs, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sModule* sModule_initialize(struct sModule* self){
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct buffer* __dec_obj83;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct buffer* __dec_obj84;
char* __dec_obj85;
char* __dec_obj86;
void* __right_value354 = (void*)0;
void* __right_value360 = (void*)0;
struct map$2char$phchar$ph* __dec_obj88;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct map$2char$phchar$ph* __dec_obj89;
struct sModule* __result_obj__325;
    __dec_obj83=self->mSourceHead,
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./common.h", 403, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj84=self->mSource,
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./common.h", 404, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj85=self->mLastCode,
    self->mLastCode=((void*)0);
    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj86=self->mLastCode2,
    self->mLastCode2=((void*)0);
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj88=self->mHeader,
    self->mHeader=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "./common.h", 407, "struct map$2char$phchar$ph*"))));
    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj89=self->mHeaderStructs,
    self->mHeaderStructs=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "./common.h", 408, "struct map$2char$phchar$ph*"))));
    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__325 = (struct sModule*)come_increment_ref_count(self);
    come_call_finalizer(sModule_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sModule_finalize, __result_obj__325, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__325;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
int i;
_Bool _condtional_value_X780;
_Bool _condtional_value_X781;
_Bool _condtional_value_X782;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1char$ph* __dec_obj90;
struct map$2char$phsVar$ph* __result_obj__326;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value364=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1941, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value365=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1942, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value366=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1943, "_Bool*"))));
    for(    ({    (_condtional_value_X780=(i=0));    _condtional_value_X780;    });    ({    (_condtional_value_X781=(i<128));    _condtional_value_X781;    });    ({    (_condtional_value_X782=(i++));    _condtional_value_X782;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj90=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1953, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__326 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__326, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__326;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i;
_Bool _condtional_value_X783;
_Bool _condtional_value_X784;
_Bool _condtional_value_X785;
_Bool _condtional_value_X786;
_Bool _condtional_value_X787;
int i_75;
_Bool _condtional_value_X788;
_Bool _condtional_value_X789;
_Bool _condtional_value_X790;
_Bool _condtional_value_X791;
_Bool _condtional_value_X792;
    for(    ({    (_condtional_value_X783=(i=0));    _condtional_value_X783;    });    ({    (_condtional_value_X784=(i<self->size));    _condtional_value_X784;    });    ({    (_condtional_value_X785=(i++));    _condtional_value_X785;    })    ){
        if(({        (_condtional_value_X786=(self->item_existance[i]));        _condtional_value_X786;        })) {
            if(({            (_condtional_value_X787=(1));            _condtional_value_X787;            })) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X788=(i_75=0));    _condtional_value_X788;    });    ({    (_condtional_value_X789=(i_75<self->size));    _condtional_value_X789;    });    ({    (_condtional_value_X790=(i_75++));    _condtional_value_X790;    })    ){
        if(({        (_condtional_value_X791=(self->item_existance[i_75]));        _condtional_value_X791;        })) {
            if(({            (_condtional_value_X792=(1));            _condtional_value_X792;            })) {
                (self->keys[i_75] = come_decrement_ref_count(self->keys[i_75], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i;
_Bool _condtional_value_X793;
_Bool _condtional_value_X794;
_Bool _condtional_value_X795;
_Bool _condtional_value_X796;
_Bool _condtional_value_X797;
int i_76;
_Bool _condtional_value_X798;
_Bool _condtional_value_X799;
_Bool _condtional_value_X800;
_Bool _condtional_value_X801;
_Bool _condtional_value_X802;
    for(    ({    (_condtional_value_X793=(i=0));    _condtional_value_X793;    });    ({    (_condtional_value_X794=(i<self->size));    _condtional_value_X794;    });    ({    (_condtional_value_X795=(i++));    _condtional_value_X795;    })    ){
        if(({        (_condtional_value_X796=(self->item_existance[i]));        _condtional_value_X796;        })) {
            if(({            (_condtional_value_X797=(1));            _condtional_value_X797;            })) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X798=(i_76=0));    _condtional_value_X798;    });    ({    (_condtional_value_X799=(i_76<self->size));    _condtional_value_X799;    });    ({    (_condtional_value_X800=(i_76++));    _condtional_value_X800;    })    ){
        if(({        (_condtional_value_X801=(self->item_existance[i_76]));        _condtional_value_X801;        })) {
            if(({            (_condtional_value_X802=(1));            _condtional_value_X802;            })) {
                (self->keys[i_76] = come_decrement_ref_count(self->keys[i_76], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __right_value363 = (void*)0;
void* __right_value369 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj91;
struct sVarTable* __result_obj__327;
    __dec_obj91=self->mVars,
    self->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./common.h", 420, "struct map$2char$phsVar$ph*"))));
    come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mGlobal=global;
    self->mParent=parent;
    __result_obj__327 = (struct sVarTable*)come_increment_ref_count(self);
    come_call_finalizer(sVarTable_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__327, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__327;
}

void sVarTable_finalize(struct sVarTable* self){
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self->mVars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sBlock* sBlock_initialize(struct sBlock* self){
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1sNode$ph* __dec_obj92;
struct sBlock* __result_obj__328;
    __dec_obj92=self->mNodes,
    self->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./common.h", 438, "struct list$1sNode$ph*"))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__328 = (struct sBlock*)come_increment_ref_count(self);
    come_call_finalizer(sBlock_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__328, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__328;
}

static void sClassModule_finalize(struct sClassModule* self){
_Bool _condtional_value_X803;
_Bool _condtional_value_X804;
_Bool _condtional_value_X805;
_Bool _condtional_value_X806;
    if(({    (_condtional_value_X803=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X803;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X804=(self!=((void*)0)&&self->mText!=((void*)0)));    _condtional_value_X804;    })) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X805=(self!=((void*)0)&&self->mParams!=((void*)0)));    _condtional_value_X805;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X806=(self!=((void*)0)&&self->mSName!=((void*)0)));    _condtional_value_X806;    })) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline){
void* __right_value372 = (void*)0;
char* __dec_obj93;
void* __right_value373 = (void*)0;
char* __dec_obj94;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct list$1char$ph* __dec_obj95;
void* __right_value376 = (void*)0;
char* __dec_obj96;
struct sClassModule* __result_obj__329;
    __dec_obj93=self->mName,
    self->mName=(char*)come_increment_ref_count((char*)come_memdup(name, "./common.h", 469, "char*"));
    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj94=self->mText,
    self->mText=(char*)come_increment_ref_count((char*)come_memdup(text, "./common.h", 470, "char*"));
    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj95=self->mParams,
    self->mParams=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./common.h", 471, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj96=self->mSName,
    self->mSName=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
    self->mSLine=sline;
    __result_obj__329 = (struct sClassModule*)come_increment_ref_count(self);
    come_call_finalizer(sClassModule_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (text = come_decrement_ref_count(text, (void*)0, (void*)0, 0, 0, (void*)0));
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClassModule_finalize, __result_obj__329, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__329;
}

static void sNodeBase_finalize(struct sNodeBase* self){
_Bool _condtional_value_X807;
    if(({    (_condtional_value_X807=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X807;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info){
void* __right_value377 = (void*)0;
char* __dec_obj97;
struct sNodeBase* __result_obj__330;
    self->sline=info->sline;
    __dec_obj97=self->sname,
    self->sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
    self->sline_real=info->sline_real;
    __result_obj__330 = (struct sNodeBase*)come_increment_ref_count(self);
    come_call_finalizer(sNodeBase_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sNodeBase_finalize, __result_obj__330, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__330;
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info){
    return self->sline;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info){
    return self->sline_real;
}

_Bool sNodeBase_terminated(struct sNodeBase* self){
    return (_Bool)0;
}

_Bool sNodeBase_no_mutex(struct sNodeBase* self){
    return (_Bool)0;
}

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info){
void* __right_value378 = (void*)0;
char* __result_obj__331;
    __result_obj__331 = (char*)come_increment_ref_count(((char*)(__right_value378=__builtin_string(self->sname))));
    (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__331 = come_decrement_ref_count(__result_obj__331, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__331;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
_Bool _condtional_value_X808;
    if(({    (_condtional_value_X808=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X808;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __right_value379 = (void*)0;
struct sCurrentNode* __result_obj__332;
    ((struct sNodeBase*)(__right_value379=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value379, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__332 = (struct sCurrentNode*)come_increment_ref_count(self);
    come_call_finalizer(sCurrentNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sCurrentNode_finalize, __result_obj__332, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__332;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __right_value380 = (void*)0;
char* __result_obj__333;
    __result_obj__333 = (char*)come_increment_ref_count(((char*)(__right_value380=__builtin_string(self->sname))));
    (__right_value380 = come_decrement_ref_count(__right_value380, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__333 = come_decrement_ref_count(__result_obj__333, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__333;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __right_value381 = (void*)0;
char* __result_obj__334;
    __result_obj__334 = (char*)come_increment_ref_count(((char*)(__right_value381=__builtin_string("sCurrentNode"))));
    (__right_value381 = come_decrement_ref_count(__right_value381, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__334 = come_decrement_ref_count(__result_obj__334, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__334;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X810;
char* result;
char* __result_obj__335;
_Bool _condtional_value_X811;
char* __result_obj__336;
char* result_77;
char* __result_obj__337;
result = (void*)0;
result_77 = (void*)0;
    if(({    (_condtional_value_X810=(self==((void*)0)));    _condtional_value_X810;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__335 = result;
        return __result_obj__335;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X811=(self->key_list->it));    _condtional_value_X811;    })) {
        __result_obj__336 = self->key_list->it->item;
        return __result_obj__336;
    }
    memset(&result_77,0,sizeof(char*));
    __result_obj__337 = result_77;
    return __result_obj__337;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X814;
char* result;
char* __result_obj__338;
_Bool _condtional_value_X815;
char* __result_obj__339;
char* result_78;
char* __result_obj__340;
result = (void*)0;
result_78 = (void*)0;
    if(({    (_condtional_value_X814=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X814;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__338 = result;
        return __result_obj__338;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X815=(self->key_list->it));    _condtional_value_X815;    })) {
        __result_obj__339 = self->key_list->it->item;
        return __result_obj__339;
    }
    memset(&result_78,0,sizeof(char*));
    __result_obj__340 = result_78;
    return __result_obj__340;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X817;
_Bool _condtional_value_X818;
_Bool _condtional_value_X819;
struct sVar* __result_obj__341;
_Bool _condtional_value_X820;
_Bool _condtional_value_X821;
struct sVar* __result_obj__342;
struct sVar* __result_obj__343;
struct sVar* __result_obj__344;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sVar*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X817=((_Bool)1));    _condtional_value_X817;    })) {
        if(({        (_condtional_value_X818=(self->item_existance[it]));        _condtional_value_X818;        })) {
            if(({            (_condtional_value_X819=(string_equals(self->keys[it],key)));            _condtional_value_X819;            })) {
                __result_obj__341 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__341, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__341;
            }
            it++;
            if(({            (_condtional_value_X820=(it>=self->size));            _condtional_value_X820;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X821=(it==hash));            _condtional_value_X821;            })) {
                __result_obj__342 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__342, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__342;
            }
        }
        else {
            __result_obj__343 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__343, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__343;
        }
    }
    __result_obj__344 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__344, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__344;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X822;
_Bool _condtional_value_X823;
_Bool _condtional_value_X824;
struct sVar* __result_obj__345;
_Bool _condtional_value_X825;
_Bool _condtional_value_X826;
struct sVar* __result_obj__346;
struct sVar* __result_obj__347;
struct sVar* __result_obj__348;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sVar*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X822=((_Bool)1));    _condtional_value_X822;    })) {
        if(({        (_condtional_value_X823=(self->item_existance[it]));        _condtional_value_X823;        })) {
            if(({            (_condtional_value_X824=(string_equals(self->keys[it],key)));            _condtional_value_X824;            })) {
                __result_obj__345 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__345, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__345;
            }
            it++;
            if(({            (_condtional_value_X825=(it>=self->size));            _condtional_value_X825;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X826=(it==hash));            _condtional_value_X826;            })) {
                __result_obj__346 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__346, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__346;
            }
        }
        else {
            __result_obj__347 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__347, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__347;
        }
    }
    __result_obj__348 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__348, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__348;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj98;
struct sType* __dec_obj99;
struct tuple2$2char$phsType$ph* __result_obj__349;
    __dec_obj98=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj99=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__349 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__349, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__349;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
_Bool _condtional_value_X832;
    if(({    (_condtional_value_X832=(self==((void*)0)));    _condtional_value_X832;    })) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X834;
struct list_item$1sNode$ph* prev_it;
struct list$1sNode$ph* __result_obj__350;
    it=self->head;
    while(({    (_condtional_value_X834=(it!=((void*)0)));    _condtional_value_X834;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__350 = self;
    return __result_obj__350;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
_Bool _condtional_value_X835;
void* __right_value396 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem;
struct tuple2$2char$phsType$ph* __dec_obj100;
_Bool _condtional_value_X836;
void* __right_value397 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_79;
struct tuple2$2char$phsType$ph* __dec_obj101;
void* __right_value398 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_80;
struct tuple2$2char$phsType$ph* __dec_obj102;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__351;
    if(({    (_condtional_value_X835=(self->len==0));    _condtional_value_X835;    })) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value396=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj100=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X836=(self->len==1));    _condtional_value_X836;    })) {
        litem_79=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value397=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_79->prev=self->head;
        litem_79->next=((void*)0);
        __dec_obj101=litem_79->item,
        litem_79->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_79;
        self->head->next=litem_79;
    }
    else {
        litem_80=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value398=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_80->prev=self->tail;
        litem_80->next=((void*)0);
        __dec_obj102=litem_80->item,
        litem_80->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_80;
        self->tail=litem_80;
    }
    self->len++;
    __result_obj__351 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__351;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X837;
struct tuple2$2char$phsType$ph* __result_obj__352;
void* __right_value399 = (void*)0;
struct tuple2$2char$phsType$ph* result;
_Bool _condtional_value_X838;
void* __right_value400 = (void*)0;
char* __dec_obj103;
_Bool _condtional_value_X839;
void* __right_value401 = (void*)0;
struct sType* __dec_obj104;
struct tuple2$2char$phsType$ph* __result_obj__353;
    if(({    (_condtional_value_X837=(self==(void*)0));    _condtional_value_X837;    })) {
        __result_obj__352 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__352, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__352;
    }
    result=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(({    (_condtional_value_X838=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X838;    })) {
        __dec_obj103=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X839=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X839;    })) {
        __dec_obj104=result->v2,
        result->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__353 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsType$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__353, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__353;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X840;
_Bool _condtional_value_X841;
    if(({    (_condtional_value_X840=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X840;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X841=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X841;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
_Bool _condtional_value_X854;
void* __right_value413 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj107;
_Bool _condtional_value_X855;
void* __right_value414 = (void*)0;
struct list_item$1CVALUE$ph* litem_87;
struct CVALUE* __dec_obj108;
void* __right_value415 = (void*)0;
struct list_item$1CVALUE$ph* litem_88;
struct CVALUE* __dec_obj109;
struct list$1CVALUE$ph* __result_obj__354;
    if(({    (_condtional_value_X854=(self->len==0));    _condtional_value_X854;    })) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value413=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj107=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X855=(self->len==1));    _condtional_value_X855;    })) {
        litem_87=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value414=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1CVALUE$ph*"))));
        litem_87->prev=self->head;
        litem_87->next=((void*)0);
        __dec_obj108=litem_87->item,
        litem_87->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_87;
        self->head->next=litem_87;
    }
    else {
        litem_88=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value415=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1CVALUE$ph*"))));
        litem_88->prev=self->tail;
        litem_88->next=((void*)0);
        __dec_obj109=litem_88->item,
        litem_88->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_88;
        self->tail=litem_88;
    }
    self->len++;
    __result_obj__354 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__354;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value382 = (void*)0;
char* class_name;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sClass* current_stack;
struct sVarTable* vtable;
_Bool _condtional_value_X809;
struct map$2char$phsVar$ph* o2_saved;
char* it;
_Bool _condtional_value_X812;
_Bool _condtional_value_X813;
_Bool _condtional_value_X816;
char* key;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sVar* value;
void* __right_value388 = (void*)0;
struct sType* type2;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct tuple2$2char$phsType$ph* item;
_Bool _condtional_value_X827;
_Bool _condtional_value_X828;
_Bool _condtional_value_X829;
_Bool _condtional_value_X830;
_Bool _condtional_value_X831;
_Bool _condtional_value_X833;
void* __right_value392 = (void*)0;
struct sType* type3;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct tuple2$2char$phsType$ph* item2;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
_Bool _condtional_value_X842;
struct map$2char$phsVar$ph* o2_saved_81;
char* it_82;
_Bool _condtional_value_X843;
_Bool _condtional_value_X844;
_Bool _condtional_value_X845;
char* key_83;
void* __right_value404 = (void*)0;
struct sVar* value_84;
void* __right_value405 = (void*)0;
struct sType* type2_85;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct tuple2$2char$phsType$ph* item_86;
_Bool _condtional_value_X846;
_Bool _condtional_value_X847;
_Bool _condtional_value_X848;
_Bool _condtional_value_X849;
_Bool _condtional_value_X850;
_Bool _condtional_value_X851;
_Bool _condtional_value_X852;
_Bool _condtional_value_X853;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct CVALUE* come_value;
void* __right_value410 = (void*)0;
char* __dec_obj105;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sType* __dec_obj106;
_Bool __result_obj__355;
    info->current_stack_num++;
    class_name=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "./common.h", 660, "struct sClass*")),(char*)come_increment_ref_count(class_name),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
    vtable=info->lv_table;
    while(({    (_condtional_value_X809=(vtable));    _condtional_value_X809;    })) {
        for(        ({        (_condtional_value_X812=(o2_saved=(struct map$2char$phsVar$ph*)come_increment_ref_count(vtable->mVars),it=map$2char$phsVar$ph_begin(o2_saved)));        _condtional_value_X812;        });        ({        (_condtional_value_X813=(!map$2char$phsVar$ph_end(o2_saved)));        _condtional_value_X813;        });        ({        (_condtional_value_X816=(it=map$2char$phsVar$ph_next(o2_saved)));        _condtional_value_X816;        })        ){
            key=it;
            value=((struct sVar*)(__right_value387=map$2char$phsVar$ph_operator_load_element(vtable->mVars,((char*)(__right_value386=__builtin_string(key))))));
            (__right_value385 = come_decrement_ref_count(__right_value385, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value387, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            type2=(struct sType*)come_increment_ref_count(sType_clone(value->mType));
            type2->mPointerNum++;
            item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 673, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value->mCValueName)),(struct sType*)come_increment_ref_count(type2)));
            if(({            (_condtional_value_X827=(value->mCValueName!=((void*)0)));            _condtional_value_X827;            })) {
                if(({                (_condtional_value_X828=(strcmp(value->mCValueName,"__list_values")==0));                _condtional_value_X828;                })) {
                }
                else if(({                (_condtional_value_X829=(strcmp(value->mCValueName,"__map_keys")==0));                _condtional_value_X829;                })) {
                }
                else if(({                (_condtional_value_X830=(strcmp(value->mCValueName,"__map_element")==0));                _condtional_value_X830;                })) {
                }
                else if(({                (_condtional_value_X831=(string_operator_equals(value->mType->mClass->mName,"va_list")||string_operator_equals(value->mType->mClass->mName,"__builtin_va_list")));                _condtional_value_X831;                })) {
                }
                else if(({                (_condtional_value_X833=(list$1sNode$ph_length(type2->mArrayNum)==1));                _condtional_value_X833;                })) {
                    type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
                    list$1sNode$ph_reset(type3->mArrayNum);
                    type3->mPointerNum=1;
                    type3->mOriginIsArray=(_Bool)1;
                    item2=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 693, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value->mCValueName)),(struct sType*)come_increment_ref_count(type3)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2)));
                    value->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item)));
                }
            }
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        vtable=vtable->mParent;
    }
    output_struct(current_stack,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name),(struct sClass*)come_increment_ref_count(current_stack));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name);
    vtable=info->lv_table;
    while(({    (_condtional_value_X842=(vtable));    _condtional_value_X842;    })) {
        for(        ({        (_condtional_value_X843=(o2_saved_81=(struct map$2char$phsVar$ph*)come_increment_ref_count(vtable->mVars),it_82=map$2char$phsVar$ph_begin(o2_saved_81)));        _condtional_value_X843;        });        ({        (_condtional_value_X844=(!map$2char$phsVar$ph_end(o2_saved_81)));        _condtional_value_X844;        });        ({        (_condtional_value_X845=(it_82=map$2char$phsVar$ph_next(o2_saved_81)));        _condtional_value_X845;        })        ){
            key_83=it_82;
            value_84=((struct sVar*)(__right_value404=map$2char$phsVar$ph_operator_load_element(vtable->mVars,key_83)));
            come_call_finalizer(sVar_finalize, __right_value404, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            type2_85=(struct sType*)come_increment_ref_count(sType_clone(value_84->mType));
            item_86=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 722, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_84->mCValueName),(struct sType*)come_increment_ref_count(type2_85)));
            if(({            (_condtional_value_X846=(value_84->mCValueName!=((void*)0)));            _condtional_value_X846;            })) {
                if(({                (_condtional_value_X847=(strcmp(value_84->mCValueName,"__list_values")==0));                _condtional_value_X847;                })) {
                }
                else if(({                (_condtional_value_X848=(strcmp(value_84->mCValueName,"__map_keys")==0));                _condtional_value_X848;                })) {
                }
                else if(({                (_condtional_value_X849=(strcmp(value_84->mCValueName,"__map_element")==0));                _condtional_value_X849;                })) {
                }
                else if(({                (_condtional_value_X850=(string_operator_equals(value_84->mType->mClass->mName,"va_list")||string_operator_equals(value_84->mType->mClass->mName,"__builtin_va_list")));                _condtional_value_X850;                })) {
                }
                else {
                    if(({                    (_condtional_value_X851=(string_operator_equals(value_84->mFunName,info->come_fun->mName)));                    _condtional_value_X851;                    })) {
                        if(({                        (_condtional_value_X852=(string_operator_equals(type2_85->mClass->mName,"lambda")));                        _condtional_value_X852;                        })) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_84->mCValueName,value_84->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_84->mCValueName,value_84->mCValueName);
                        }
                    }
                    else {
                        if(({                        (_condtional_value_X853=(string_operator_equals(type2_85->mClass->mName,"lambda")));                        _condtional_value_X853;                        })) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_84->mCValueName,value_84->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_84->mCValueName,value_84->mCValueName);
                        }
                    }
                }
            }
            come_call_finalizer(sType_finalize, type2_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        vtable=vtable->mParent;
    }
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "./common.h", 761, "struct CVALUE*"))));
    __dec_obj105=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj106=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "./common.h", 764, "struct sType*")),(char*)come_increment_ref_count(class_name),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__355 = (_Bool)1;
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, current_stack, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__355;
}


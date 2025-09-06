/// previous struct definition ///
struct __sFILEX;

struct _xlocale;

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

typedef struct _xlocale* locale_t;

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
typedef union anonymous_typeZ1 mbstate_t;

typedef unsigned long  int clock_t;

typedef long time_t;

struct timespec
{
    long tv_sec;
    long tv_nsec;
};

struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char* tm_zone;
};

extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
enum anonymous_typeY10 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

typedef enum anonymous_typeY10 clockid_t;

typedef unsigned int wctype_t;

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
struct lconv* localeconv();
struct _xlocale* newlocale(int anonymous_var_nameX352, const char* anonymous_var_nameX353, struct _xlocale* anonymous_var_nameX354);
struct _xlocale* uselocale(struct _xlocale* anonymous_var_nameX355);
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
char* asctime(const struct tm* anonymous_var_nameX389);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX390);
double difftime(long anonymous_var_nameX391, long anonymous_var_nameX392);
struct tm* getdate(const char* anonymous_var_nameX393);
struct tm* gmtime(const long* anonymous_var_nameX394);
struct tm* localtime(const long* anonymous_var_nameX395);
long mktime(struct tm* anonymous_var_nameX396);
unsigned long  int strftime(char* anonymous_var_nameX397, unsigned long  int __maxsize, const char* anonymous_var_nameX398, const struct tm* anonymous_var_nameX399);
char* strptime(const char* anonymous_var_nameX400, const char* anonymous_var_nameX401, struct tm* anonymous_var_nameX402);
long time(long* anonymous_var_nameX403);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX404, char* anonymous_var_nameX405);
char* ctime_r(const long* anonymous_var_nameX406, char* anonymous_var_nameX407);
struct tm* gmtime_r(const long* anonymous_var_nameX408, struct tm* anonymous_var_nameX409);
struct tm* localtime_r(const long* anonymous_var_nameX410, struct tm* anonymous_var_nameX411);
long posix2time(long anonymous_var_nameX412);
void tzsetwall();
long time2posix(long anonymous_var_nameX413);
long timelocal(struct tm* anonymous_var_nameX414);
long timegm(struct tm* anonymous_var_nameX415);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY10 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY10 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY10 __clock_id);
int clock_settime(enum anonymous_typeY10 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int iswalnum(int anonymous_var_nameX416);
int iswalpha(int anonymous_var_nameX417);
int iswcntrl(int anonymous_var_nameX418);
int iswctype(int anonymous_var_nameX419, unsigned int anonymous_var_nameX420);
int iswdigit(int anonymous_var_nameX421);
int iswgraph(int anonymous_var_nameX422);
int iswlower(int anonymous_var_nameX423);
int iswprint(int anonymous_var_nameX424);
int iswpunct(int anonymous_var_nameX425);
int iswspace(int anonymous_var_nameX426);
int iswupper(int anonymous_var_nameX427);
int iswxdigit(int anonymous_var_nameX428);
int towlower(int anonymous_var_nameX429);
int towupper(int anonymous_var_nameX430);
unsigned int wctype(const char* anonymous_var_nameX431);
int btowc(int anonymous_var_nameX432);
int fgetwc(struct __sFILE* anonymous_var_nameX433);
int* fgetws(int* anonymous_var_nameX434, int __n, struct __sFILE* anonymous_var_nameX435);
int fputwc(int anonymous_var_nameX436, struct __sFILE* anonymous_var_nameX437);
int fputws(const int* anonymous_var_nameX438, struct __sFILE* anonymous_var_nameX439);
int fwide(struct __sFILE* anonymous_var_nameX440, int anonymous_var_nameX441);
int fwprintf(struct __sFILE* anonymous_var_nameX442, const int* anonymous_var_nameX443, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX444, const int* anonymous_var_nameX445, ...);
int getwc(struct __sFILE* anonymous_var_nameX446);
int getwchar();
unsigned long  int mbrlen(const char* anonymous_var_nameX447, unsigned long  int __n, union anonymous_typeZ1* anonymous_var_nameX448);
unsigned long  int mbrtowc(int* anonymous_var_nameX449, const char* anonymous_var_nameX450, unsigned long  int __n, union anonymous_typeZ1* anonymous_var_nameX451);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX452);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX453, const char** anonymous_var_nameX454, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX455);
int putwc(int anonymous_var_nameX456, struct __sFILE* anonymous_var_nameX457);
int putwchar(int anonymous_var_nameX458);
int swprintf(int* anonymous_var_nameX459, unsigned long  int __maxlen, const int* anonymous_var_nameX460, ...);
int swscanf(const int* anonymous_var_nameX461, const int* anonymous_var_nameX462, ...);
int ungetwc(int anonymous_var_nameX463, struct __sFILE* anonymous_var_nameX464);
int vfwprintf(struct __sFILE* anonymous_var_nameX465, const int* anonymous_var_nameX466, __darwin_va_list anonymous_var_nameX467);
int vswprintf(int* anonymous_var_nameX468, unsigned long  int __maxlen, const int* anonymous_var_nameX469, __darwin_va_list anonymous_var_nameX470);
int vwprintf(const int* anonymous_var_nameX471, __darwin_va_list anonymous_var_nameX472);
unsigned long  int wcrtomb(char* anonymous_var_nameX473, int anonymous_var_nameX474, union anonymous_typeZ1* anonymous_var_nameX475);
int* wcscat(int* anonymous_var_nameX476, const int* anonymous_var_nameX477);
int* wcschr(const int* anonymous_var_nameX478, int anonymous_var_nameX479);
int wcscmp(const int* anonymous_var_nameX480, const int* anonymous_var_nameX481);
int wcscoll(const int* anonymous_var_nameX482, const int* anonymous_var_nameX483);
int* wcscpy(int* anonymous_var_nameX484, const int* anonymous_var_nameX485);
unsigned long  int wcscspn(const int* anonymous_var_nameX486, const int* anonymous_var_nameX487);
unsigned long  int wcsftime(int* anonymous_var_nameX488, unsigned long  int __maxlen, const int* anonymous_var_nameX489, const struct tm* anonymous_var_nameX490);
unsigned long  int wcslen(const int* anonymous_var_nameX491);
int* wcsncat(int* anonymous_var_nameX492, const int* anonymous_var_nameX493, unsigned long  int __n);
int wcsncmp(const int* anonymous_var_nameX494, const int* anonymous_var_nameX495, unsigned long  int anonymous_var_nameX496);
int* wcsncpy(int* anonymous_var_nameX497, const int* anonymous_var_nameX498, unsigned long  int __n);
int* wcspbrk(const int* anonymous_var_nameX499, const int* anonymous_var_nameX500);
int* wcsrchr(const int* anonymous_var_nameX501, int anonymous_var_nameX502);
unsigned long  int wcsrtombs(char* anonymous_var_nameX503, const int** anonymous_var_nameX504, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX505);
unsigned long  int wcsspn(const int* anonymous_var_nameX506, const int* anonymous_var_nameX507);
int* wcsstr(const int* anonymous_var_nameX508, const int* anonymous_var_nameX509);
unsigned long  int wcsxfrm(int* anonymous_var_nameX510, const int* anonymous_var_nameX511, unsigned long  int __n);
int wctob(int anonymous_var_nameX512);
double wcstod(const int* anonymous_var_nameX513, int** anonymous_var_nameX514);
int* wcstok(int* anonymous_var_nameX515, const int* anonymous_var_nameX516, int** anonymous_var_nameX517);
long wcstol(const int* anonymous_var_nameX518, int** anonymous_var_nameX519, int anonymous_var_nameX520);
unsigned long  int wcstoul(const int* anonymous_var_nameX521, int** anonymous_var_nameX522, int anonymous_var_nameX523);
int* wmemchr(const int* anonymous_var_nameX524, int anonymous_var_nameX525, unsigned long  int __n);
int wmemcmp(const int* anonymous_var_nameX526, const int* anonymous_var_nameX527, unsigned long  int __n);
int* wmemcpy(int* anonymous_var_nameX528, const int* anonymous_var_nameX529, unsigned long  int __n);
int* wmemmove(int* anonymous_var_nameX530, const int* anonymous_var_nameX531, unsigned long  int __n);
int* wmemset(int* anonymous_var_nameX532, int anonymous_var_nameX533, unsigned long  int __n);
int wprintf(const int* anonymous_var_nameX534, ...);
int wscanf(const int* anonymous_var_nameX535, ...);
int wcswidth(const int* anonymous_var_nameX536, unsigned long  int __n);
int wcwidth(int anonymous_var_nameX537);
int vfwscanf(struct __sFILE* anonymous_var_nameX538, const int* anonymous_var_nameX539, __darwin_va_list anonymous_var_nameX540);
int vswscanf(const int* anonymous_var_nameX541, const int* anonymous_var_nameX542, __darwin_va_list anonymous_var_nameX543);
int vwscanf(const int* anonymous_var_nameX544, __darwin_va_list anonymous_var_nameX545);
float wcstof(const int* anonymous_var_nameX546, int** anonymous_var_nameX547);
long  double wcstold(const int* anonymous_var_nameX548, int** anonymous_var_nameX549);
long long wcstoll(const int* anonymous_var_nameX550, int** anonymous_var_nameX551, int anonymous_var_nameX552);
unsigned long  long wcstoull(const int* anonymous_var_nameX553, int** anonymous_var_nameX554, int anonymous_var_nameX555);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX556, const char** anonymous_var_nameX557, unsigned long  int anonymous_var_nameX558, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX559);
int* wcpcpy(int* anonymous_var_nameX560, const int* anonymous_var_nameX561);
int* wcpncpy(int* anonymous_var_nameX562, const int* anonymous_var_nameX563, unsigned long  int __n);
int* wcsdup(const int* anonymous_var_nameX564);
int wcscasecmp(const int* anonymous_var_nameX565, const int* anonymous_var_nameX566);
int wcsncasecmp(const int* anonymous_var_nameX567, const int* anonymous_var_nameX568, unsigned long  int n);
unsigned long  int wcsnlen(const int* anonymous_var_nameX569, unsigned long  int __n);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX570, const int** anonymous_var_nameX571, unsigned long  int anonymous_var_nameX572, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX573);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX574, unsigned long  int* __len);
unsigned long  int wcslcat(int* anonymous_var_nameX575, const int* anonymous_var_nameX576, unsigned long  int __len);
unsigned long  int wcslcpy(int* anonymous_var_nameX577, const int* anonymous_var_nameX578, unsigned long  int __len);
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
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
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
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
void int_times(int self, void* parent, void (*block)(void*,int));
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
int err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
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
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static, _Bool cast_type, _Bool no_alignas);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
struct sType* get_no_solved_type(struct sType* type);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
char* output_function(struct sFun* fun, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key);
static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
_Bool is_contained_generics_funcstion(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_put(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
_Bool output_header_file(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_last_code_to_source(struct sInfo* info);
void add_last_code_to_source_with_comma(struct sInfo* info);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo* info);
static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail);
static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);
// uniq global variable
// inline function

// body function
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static, _Bool cast_type, _Bool no_alignas){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
char* class_name;
_Bool _condtional_value_X1;
_Bool _condtional_value_X2;
void* __right_value2 = (void*)0;
char* __result_obj__1;
void* __right_value3 = (void*)0;
struct CVALUE* come_value;
_Bool _condtional_value_X29;
_Bool _condtional_value_X30;
_Bool _condtional_value_X31;
_Bool _condtional_value_X32;
_Bool _condtional_value_X33;
_Bool _condtional_value_X34;
_Bool _condtional_value_X35;
_Bool _condtional_value_X36;
_Bool _condtional_value_X37;
_Bool _condtional_value_X38;
_Bool _condtional_value_X39;
_Bool _condtional_value_X40;
_Bool _condtional_value_X41;
_Bool _condtional_value_X42;
_Bool _condtional_value_X43;
_Bool _condtional_value_X44;
_Bool _condtional_value_X45;
_Bool _condtional_value_X46;
_Bool _condtional_value_X47;
_Bool _condtional_value_X48;
_Bool _condtional_value_X49;
_Bool _condtional_value_X50;
_Bool _condtional_value_X51;
_Bool _condtional_value_X52;
_Bool _condtional_value_X53;
void* __right_value4 = (void*)0;
char* result_type_str;
_Bool _condtional_value_X55;
int i;
_Bool _condtional_value_X56;
_Bool _condtional_value_X57;
_Bool _condtional_value_X58;
void* __right_value5 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X65;
void* __right_value6 = (void*)0;
struct CVALUE* cvalue;
int j;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X68;
_Bool _condtional_value_X69;
_Bool _condtional_value_X72;
void* __right_value7 = (void*)0;
char* param_type_str;
_Bool _condtional_value_X74;
_Bool _condtional_value_X75;
void* __right_value8 = (void*)0;
char* __result_obj__12;
_Bool _condtional_value_X76;
_Bool _condtional_value_X77;
int i_2;
_Bool _condtional_value_X78;
_Bool _condtional_value_X79;
_Bool _condtional_value_X80;
_Bool _condtional_value_X81;
_Bool _condtional_value_X82;
_Bool _condtional_value_X83;
_Bool _condtional_value_X84;
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
char* __result_obj__13;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 5, "struct buffer*"))));
    class_name=type->mClass->mName;
    if(({    (_condtional_value_X1=(type->mAlignas&&!no_alignas));    _condtional_value_X1;    })) {
        if(({        (_condtional_value_X2=(!node_compile(type->mAlignas,info)));        _condtional_value_X2;        })) {
            printf("_Alignas error\n");
            __result_obj__1 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string(""))));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__1 = come_decrement_ref_count(__result_obj__1, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__1;
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(buf,"_Alignas(%s) ",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X29=(type->mStatic&&!no_static));    _condtional_value_X29;    })) {
        buffer_append_str(buf,"static ");
    }
    if(({    (_condtional_value_X30=(type->mAtomic));    _condtional_value_X30;    })) {
        buffer_append_str(buf,"_Atomic ");
    }
    if(({    (_condtional_value_X31=(type->mThreadLocal));    _condtional_value_X31;    })) {
        buffer_append_str(buf,"_Thread_local ");
    }
    if(({    (_condtional_value_X32=(type->mConstant));    _condtional_value_X32;    })) {
        buffer_append_str(buf,"const ");
    }
    if(({    (_condtional_value_X33=(type->mRegister));    _condtional_value_X33;    })) {
        buffer_append_str(buf,"register ");
    }
    if(({    (_condtional_value_X34=(type->mUnsigned));    _condtional_value_X34;    })) {
        buffer_append_str(buf,"unsigned ");
    }
    if(({    (_condtional_value_X35=(type->mShort));    _condtional_value_X35;    })) {
        buffer_append_str(buf,"short ");
    }
    if(({    (_condtional_value_X36=(string_operator_equals(type->mOriginalTypeName,"va_list")));    _condtional_value_X36;    })) {
        buffer_append_str(buf,"va_list");
    }
    else if(({    (_condtional_value_X37=(string_operator_equals(type->mOriginalTypeName,"__builtin_va_list")));    _condtional_value_X37;    })) {
        buffer_append_str(buf,"__builtin_va_list");
    }
    else if(({    (_condtional_value_X38=(charp_operator_equals(class_name,"__builtin_va_list")));    _condtional_value_X38;    })) {
        if(({        (_condtional_value_X39=(in_header));        _condtional_value_X39;        })) {
            buffer_append_str(buf,class_name);
        }
        else {
            buffer_append_str(buf,"va_list");
        }
    }
    else if(({    (_condtional_value_X40=(type->mClass->mStruct));    _condtional_value_X40;    })) {
        buffer_append_str(buf,"struct ");
        buffer_append_str(buf,class_name);
    }
    else if(({    (_condtional_value_X41=(type->mClass->mUnion));    _condtional_value_X41;    })) {
        buffer_append_str(buf,"union ");
        buffer_append_str(buf,class_name);
    }
    else if(({    (_condtional_value_X42=(type->mClass->mEnum));    _condtional_value_X42;    })) {
        buffer_append_str(buf,"enum ");
        buffer_append_str(buf,class_name);
    }
    else if(({    (_condtional_value_X43=(type->mLongLong));    _condtional_value_X43;    })) {
        if(({        (_condtional_value_X44=(charp_operator_equals(class_name,"int")));        _condtional_value_X44;        })) {
            buffer_append_str(buf,"long long int");
        }
        else if(({        (_condtional_value_X45=(charp_operator_equals(class_name,"long")));        _condtional_value_X45;        })) {
            buffer_append_str(buf,"long long");
        }
    }
    else if(({    (_condtional_value_X46=(type->mLong));    _condtional_value_X46;    })) {
        buffer_append_str(buf,"long ");
        if(({        (_condtional_value_X47=(charp_operator_equals(class_name,"int")));        _condtional_value_X47;        })) {
            buffer_append_str(buf," int");
        }
        else if(({        (_condtional_value_X48=(charp_operator_equals(class_name,"long")));        _condtional_value_X48;        })) {
            buffer_append_str(buf," long");
        }
        else if(({        (_condtional_value_X49=(charp_operator_equals(class_name,"double")));        _condtional_value_X49;        })) {
            buffer_append_str(buf," double");
        }
    }
    else if(({    (_condtional_value_X50=(charp_operator_equals(class_name,"long")));    _condtional_value_X50;    })) {
        buffer_append_str(buf,"long");
    }
    else if(({    (_condtional_value_X51=(charp_operator_equals(class_name,"__uint128_t")));    _condtional_value_X51;    })) {
        buffer_append_str(buf,"__uint128_t");
    }
    else if(({    (_condtional_value_X52=(charp_operator_equals(class_name,"bool")));    _condtional_value_X52;    })) {
        buffer_append_str(buf,"_Bool");
    }
    else if(({    (_condtional_value_X53=(charp_operator_equals(class_name,"lambda")));    _condtional_value_X53;    })) {
        result_type_str=(char*)come_increment_ref_count(make_type_name_string(type->mResultType,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0));
        buffer_append_str(buf,result_type_str);
        buffer_append_str(buf," (*");
        if(({        (_condtional_value_X55=(list$1sNode$ph_length(type->mArrayNum)>0));        _condtional_value_X55;        })) {
            for(            ({            (_condtional_value_X56=(i=0));            _condtional_value_X56;            });            ({            (_condtional_value_X57=(i<list$1sNode$ph_length(type->mArrayNum)));            _condtional_value_X57;            });            ({            (_condtional_value_X58=(i++));            _condtional_value_X58;            })            ){
                buffer_append_str(buf,"[");
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i));
                Value=node_compile(node,info);
                if(({                (_condtional_value_X65=(!Value));                _condtional_value_X65;                })) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                else {
                }
                cvalue=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                buffer_append_format(buf,"%s",cvalue->c_value);
                buffer_append_str(buf,"]");
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        buffer_append_str(buf,")(");
        j=0;
        for(        ({        (_condtional_value_X68=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes),it=list$1sType$ph_begin(o2_saved)));        _condtional_value_X68;        });        ({        (_condtional_value_X69=(!list$1sType$ph_end(o2_saved)));        _condtional_value_X69;        });        ({        (_condtional_value_X72=(it=list$1sType$ph_next(o2_saved)));        _condtional_value_X72;        })        ){
            info->undefined_array_num_var=(_Bool)1;
            param_type_str=(char*)come_increment_ref_count(make_type_name_string(it,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0));
            info->undefined_array_num_var=(_Bool)0;
            buffer_append_str(buf,param_type_str);
            if(({            (_condtional_value_X74=(j!=list$1sType$ph_length(type->mParamTypes)-1));            _condtional_value_X74;            })) {
                buffer_append_str(buf,",");
            }
            j++;
            (param_type_str = come_decrement_ref_count(param_type_str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf,")");
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        if(({        (_condtional_value_X75=(class_name==((void*)0)));        _condtional_value_X75;        })) {
            err_msg(info,"class name is null");
            __result_obj__12 = (char*)come_increment_ref_count(((char*)(__right_value8=__builtin_string(""))));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__12 = come_decrement_ref_count(__result_obj__12, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__12;
        }
        buffer_append_str(buf,class_name);
    }
    if(({    (_condtional_value_X76=(cast_type&&type->mArrayPointerType));    _condtional_value_X76;    })) {
        buffer_append_str(buf,"[]");
    }
    else {
        if(({        (_condtional_value_X77=(charp_operator_not_equals(class_name,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")));        _condtional_value_X77;        })) {
            for(            ({            (_condtional_value_X78=(i_2=0));            _condtional_value_X78;            });            ({            (_condtional_value_X79=(i_2<type->mPointerNum));            _condtional_value_X79;            });            ({            (_condtional_value_X80=(i_2++));            _condtional_value_X80;            })            ){
                buffer_append_str(buf,"*");
            }
        }
    }
    if(({    (_condtional_value_X81=(array_cast_pointer&&list$1sNode$ph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")));    _condtional_value_X81;    })) {
        buffer_append_str(buf,"*");
    }
    if(({    (_condtional_value_X82=(type->mRestrict));    _condtional_value_X82;    })) {
        buffer_append_str(buf,"restrict");
    }
    if(({    (_condtional_value_X83=(type->mAtomic));    _condtional_value_X83;    })) {
    }
    if(({    (_condtional_value_X84=(type->mAttribute&&gComeBareMetal));    _condtional_value_X84;    })) {
        buffer_append_str(buf,((char*)(__right_value9=charp_operator_add(" ",type->mAttribute))));
        (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__13 = (char*)come_increment_ref_count(((char*)(__right_value10=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__13 = come_decrement_ref_count(__result_obj__13, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__13;
}

static void CVALUE_finalize(struct CVALUE* self){
_Bool _condtional_value_X3;
_Bool _condtional_value_X4;
_Bool _condtional_value_X27;
_Bool _condtional_value_X28;
    if(({    (_condtional_value_X3=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X3;    })) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X4=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X4;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X27=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X27;    })) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X28=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X28;    })) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sType_finalize(struct sType* self){
_Bool _condtional_value_X5;
_Bool _condtional_value_X6;
_Bool _condtional_value_X7;
_Bool _condtional_value_X10;
_Bool _condtional_value_X11;
_Bool _condtional_value_X12;
_Bool _condtional_value_X13;
_Bool _condtional_value_X14;
_Bool _condtional_value_X15;
_Bool _condtional_value_X16;
_Bool _condtional_value_X17;
_Bool _condtional_value_X20;
_Bool _condtional_value_X21;
_Bool _condtional_value_X22;
_Bool _condtional_value_X25;
_Bool _condtional_value_X26;
    if(({    (_condtional_value_X5=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X5;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X6=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X6;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X7=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X7;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X10=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X10;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X11=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X11;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X12=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X12;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X13=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X13;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X14=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X14;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X15=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X15;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X16=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X16;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X17=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X17;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X20=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X20;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X21=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X21;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X22=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X22;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X25=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X25;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X26=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X26;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X8;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X8=(it!=((void*)0)));    _condtional_value_X8;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _condtional_value_X9;
    if(({    (_condtional_value_X9=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X9;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X18;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X18=(it!=((void*)0)));    _condtional_value_X18;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _condtional_value_X19;
    if(({    (_condtional_value_X19=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X19;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X23;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X23=(it!=((void*)0)));    _condtional_value_X23;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _condtional_value_X24;
    if(({    (_condtional_value_X24=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X24;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
_Bool _condtional_value_X54;
    if(({    (_condtional_value_X54=(self==((void*)0)));    _condtional_value_X54;    })) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
_Bool _condtional_value_X59;
struct list_item$1sNode$ph* it;
int i;
_Bool _condtional_value_X60;
_Bool _condtional_value_X61;
struct sNode* __result_obj__2;
struct sNode* default_value;
struct sNode* __result_obj__3;
default_value = (void*)0;
    if(({    (_condtional_value_X59=(position<0));    _condtional_value_X59;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X60=(it!=((void*)0)));    _condtional_value_X60;    })) {
        if(({        (_condtional_value_X61=(position==i));        _condtional_value_X61;        })) {
            __result_obj__2 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__2) ? __result_obj__2 = come_decrement_ref_count(__result_obj__2, ((struct sNode*)__result_obj__2)->finalize, ((struct sNode*)__result_obj__2)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__2;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sNode*));
    __result_obj__3 = (struct sNode*)come_increment_ref_count(default_value);
    ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__3) ? __result_obj__3 = come_decrement_ref_count(__result_obj__3, ((struct sNode*)__result_obj__3)->finalize, ((struct sNode*)__result_obj__3)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__3;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
_Bool _condtional_value_X62;
struct list_item$1sNode$ph* it;
int i;
_Bool _condtional_value_X63;
_Bool _condtional_value_X64;
struct sNode* __result_obj__4;
struct sNode* default_value;
struct sNode* __result_obj__5;
default_value = (void*)0;
    if(({    (_condtional_value_X62=(position<0));    _condtional_value_X62;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X63=(it!=((void*)0)));    _condtional_value_X63;    })) {
        if(({        (_condtional_value_X64=(position==i));        _condtional_value_X64;        })) {
            __result_obj__4 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__4) ? __result_obj__4 = come_decrement_ref_count(__result_obj__4, ((struct sNode*)__result_obj__4)->finalize, ((struct sNode*)__result_obj__4)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__4;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sNode*));
    __result_obj__5 = (struct sNode*)come_increment_ref_count(default_value);
    ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__5) ? __result_obj__5 = come_decrement_ref_count(__result_obj__5, ((struct sNode*)__result_obj__5)->finalize, ((struct sNode*)__result_obj__5)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__5;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
_Bool _condtional_value_X66;
struct sType* result;
struct sType* __result_obj__6;
_Bool _condtional_value_X67;
struct sType* __result_obj__7;
struct sType* result_0;
struct sType* __result_obj__8;
result = (void*)0;
result_0 = (void*)0;
    if(({    (_condtional_value_X66=(self==((void*)0)));    _condtional_value_X66;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__6 = result;
        return __result_obj__6;
    }
    self->it=self->head;
    if(({    (_condtional_value_X67=(self->it));    _condtional_value_X67;    })) {
        __result_obj__7 = self->it->item;
        return __result_obj__7;
    }
    memset(&result_0,0,sizeof(struct sType*));
    __result_obj__8 = result_0;
    return __result_obj__8;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
_Bool _condtional_value_X70;
struct sType* result;
struct sType* __result_obj__9;
_Bool _condtional_value_X71;
struct sType* __result_obj__10;
struct sType* result_1;
struct sType* __result_obj__11;
result = (void*)0;
result_1 = (void*)0;
    if(({    (_condtional_value_X70=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X70;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__9 = result;
        return __result_obj__9;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X71=(self->it));    _condtional_value_X71;    })) {
        __result_obj__10 = self->it->item;
        return __result_obj__10;
    }
    memset(&result_1,0,sizeof(struct sType*));
    __result_obj__11 = result_1;
    return __result_obj__11;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
_Bool _condtional_value_X73;
    if(({    (_condtional_value_X73=(self==((void*)0)));    _condtional_value_X73;    })) {
        return 0;
    }
    return self->len;
}

struct sType* get_no_solved_type(struct sType* type){
struct sType* result;
_Bool _condtional_value_X85;
struct sType* __dec_obj1;
void* __right_value50 = (void*)0;
struct sType* __dec_obj27;
int i;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X171;
_Bool _condtional_value_X172;
_Bool _condtional_value_X173;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
struct sType* __result_obj__33;
result = (void*)0;
    if(({    (_condtional_value_X85=(type->mNoSolvedGenericsType));    _condtional_value_X85;    })) {
        __dec_obj1=result,
        result=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj27=result,
        result=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    i=0;
    for(    ({    (_condtional_value_X171=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(type->mGenericsTypes),it=list$1sType$ph_begin(o2_saved)));    _condtional_value_X171;    });    ({    (_condtional_value_X172=(!list$1sType$ph_end(o2_saved)));    _condtional_value_X172;    });    ({    (_condtional_value_X173=(it=list$1sType$ph_next(o2_saved)));    _condtional_value_X173;    })    ){
        list$1sType$ph_operator_store_element(result->mGenericsTypes,i,(struct sType*)come_increment_ref_count(get_no_solved_type(it)));
        come_call_finalizer(sType_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        i++;
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__33 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__33;
}

static struct sType* sType_clone(struct sType* self){
_Bool _condtional_value_X86;
struct sType* __result_obj__14;
void* __right_value11 = (void*)0;
struct sType* result;
_Bool _condtional_value_X87;
_Bool _condtional_value_X88;
void* __right_value12 = (void*)0;
struct sType* __dec_obj2;
_Bool _condtional_value_X89;
void* __right_value13 = (void*)0;
struct sType* __dec_obj3;
_Bool _condtional_value_X90;
void* __right_value21 = (void*)0;
struct list$1sType$ph* __dec_obj7;
_Bool _condtional_value_X97;
void* __right_value22 = (void*)0;
struct sType* __dec_obj8;
_Bool _condtional_value_X98;
void* __right_value24 = (void*)0;
struct sNode* __dec_obj9;
_Bool _condtional_value_X110;
void* __right_value25 = (void*)0;
struct sNode* __dec_obj10;
_Bool _condtional_value_X111;
void* __right_value26 = (void*)0;
char* __dec_obj11;
_Bool _condtional_value_X112;
void* __right_value27 = (void*)0;
char* __dec_obj12;
_Bool _condtional_value_X113;
void* __right_value28 = (void*)0;
char* __dec_obj13;
_Bool _condtional_value_X114;
_Bool _condtional_value_X115;
_Bool _condtional_value_X116;
_Bool _condtional_value_X117;
_Bool _condtional_value_X118;
_Bool _condtional_value_X119;
_Bool _condtional_value_X120;
_Bool _condtional_value_X121;
_Bool _condtional_value_X122;
_Bool _condtional_value_X123;
_Bool _condtional_value_X124;
_Bool _condtional_value_X125;
_Bool _condtional_value_X126;
_Bool _condtional_value_X127;
_Bool _condtional_value_X128;
_Bool _condtional_value_X129;
_Bool _condtional_value_X130;
_Bool _condtional_value_X131;
_Bool _condtional_value_X132;
_Bool _condtional_value_X133;
_Bool _condtional_value_X134;
_Bool _condtional_value_X135;
_Bool _condtional_value_X136;
_Bool _condtional_value_X137;
_Bool _condtional_value_X138;
_Bool _condtional_value_X139;
void* __right_value29 = (void*)0;
char* __dec_obj14;
_Bool _condtional_value_X140;
_Bool _condtional_value_X141;
_Bool _condtional_value_X142;
_Bool _condtional_value_X143;
void* __right_value37 = (void*)0;
struct list$1sNode$ph* __dec_obj18;
_Bool _condtional_value_X150;
_Bool _condtional_value_X151;
_Bool _condtional_value_X152;
_Bool _condtional_value_X153;
_Bool _condtional_value_X154;
_Bool _condtional_value_X155;
_Bool _condtional_value_X156;
void* __right_value38 = (void*)0;
char* __dec_obj19;
_Bool _condtional_value_X157;
_Bool _condtional_value_X158;
_Bool _condtional_value_X159;
void* __right_value39 = (void*)0;
struct list$1sType$ph* __dec_obj20;
_Bool _condtional_value_X160;
void* __right_value47 = (void*)0;
struct list$1char$ph* __dec_obj24;
_Bool _condtional_value_X167;
void* __right_value48 = (void*)0;
struct sType* __dec_obj25;
_Bool _condtional_value_X168;
_Bool _condtional_value_X169;
_Bool _condtional_value_X170;
void* __right_value49 = (void*)0;
struct sNode* __dec_obj26;
struct sType* __result_obj__29;
    if(({    (_condtional_value_X86=(self==(void*)0));    _condtional_value_X86;    })) {
        __result_obj__14 = (void*)0;
        return __result_obj__14;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_condtional_value_X87=(self!=((void*)0)));    _condtional_value_X87;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_condtional_value_X88=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X88;    })) {
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X89=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X89;    })) {
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X90=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X90;    })) {
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X97=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X97;    })) {
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X98=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X98;    })) {
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(({    (_condtional_value_X110=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X110;    })) {
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(({    (_condtional_value_X111=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X111;    })) {
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X112=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X112;    })) {
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X113=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X113;    })) {
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X114=(self!=((void*)0)));    _condtional_value_X114;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X115=(self!=((void*)0)));    _condtional_value_X115;    })) {
        result->mUnsigned=self->mUnsigned;
    }
    if(({    (_condtional_value_X116=(self!=((void*)0)));    _condtional_value_X116;    })) {
        result->mShort=self->mShort;
    }
    if(({    (_condtional_value_X117=(self!=((void*)0)));    _condtional_value_X117;    })) {
        result->mLong=self->mLong;
    }
    if(({    (_condtional_value_X118=(self!=((void*)0)));    _condtional_value_X118;    })) {
        result->mLongLong=self->mLongLong;
    }
    if(({    (_condtional_value_X119=(self!=((void*)0)));    _condtional_value_X119;    })) {
        result->mConstant=self->mConstant;
    }
    if(({    (_condtional_value_X120=(self!=((void*)0)));    _condtional_value_X120;    })) {
        result->mAtomic=self->mAtomic;
    }
    if(({    (_condtional_value_X121=(self!=((void*)0)));    _condtional_value_X121;    })) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(({    (_condtional_value_X122=(self!=((void*)0)));    _condtional_value_X122;    })) {
        result->mRegister=self->mRegister;
    }
    if(({    (_condtional_value_X123=(self!=((void*)0)));    _condtional_value_X123;    })) {
        result->mVolatile=self->mVolatile;
    }
    if(({    (_condtional_value_X124=(self!=((void*)0)));    _condtional_value_X124;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_condtional_value_X125=(self!=((void*)0)));    _condtional_value_X125;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X126=(self!=((void*)0)));    _condtional_value_X126;    })) {
        result->mRecord=self->mRecord;
    }
    if(({    (_condtional_value_X127=(self!=((void*)0)));    _condtional_value_X127;    })) {
        result->mExtern=self->mExtern;
    }
    if(({    (_condtional_value_X128=(self!=((void*)0)));    _condtional_value_X128;    })) {
        result->mRestrict=self->mRestrict;
    }
    if(({    (_condtional_value_X129=(self!=((void*)0)));    _condtional_value_X129;    })) {
        result->mImmutable=self->mImmutable;
    }
    if(({    (_condtional_value_X130=(self!=((void*)0)));    _condtional_value_X130;    })) {
        result->mTask=self->mTask;
    }
    if(({    (_condtional_value_X131=(self!=((void*)0)));    _condtional_value_X131;    })) {
        result->mHeap=self->mHeap;
    }
    if(({    (_condtional_value_X132=(self!=((void*)0)));    _condtional_value_X132;    })) {
        result->mChannel=self->mChannel;
    }
    if(({    (_condtional_value_X133=(self!=((void*)0)));    _condtional_value_X133;    })) {
        result->mNoHeap=self->mNoHeap;
    }
    if(({    (_condtional_value_X134=(self!=((void*)0)));    _condtional_value_X134;    })) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(({    (_condtional_value_X135=(self!=((void*)0)));    _condtional_value_X135;    })) {
        result->mException=self->mException;
    }
    if(({    (_condtional_value_X136=(self!=((void*)0)));    _condtional_value_X136;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_condtional_value_X137=(self!=((void*)0)));    _condtional_value_X137;    })) {
        result->mNullValue=self->mNullValue;
    }
    if(({    (_condtional_value_X138=(self!=((void*)0)));    _condtional_value_X138;    })) {
        result->mGuardValue=self->mGuardValue;
    }
    if(({    (_condtional_value_X139=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X139;    })) {
        __dec_obj14=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X140=(self!=((void*)0)));    _condtional_value_X140;    })) {
        result->mTypedef=self->mTypedef;
    }
    if(({    (_condtional_value_X141=(self!=((void*)0)));    _condtional_value_X141;    })) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(({    (_condtional_value_X142=(self!=((void*)0)));    _condtional_value_X142;    })) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(({    (_condtional_value_X143=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X143;    })) {
        __dec_obj18=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X150=(self!=((void*)0)));    _condtional_value_X150;    })) {
        result->mPointerNum=self->mPointerNum;
    }
    if(({    (_condtional_value_X151=(self!=((void*)0)));    _condtional_value_X151;    })) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(({    (_condtional_value_X152=(self!=((void*)0)));    _condtional_value_X152;    })) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(({    (_condtional_value_X153=(self!=((void*)0)));    _condtional_value_X153;    })) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(({    (_condtional_value_X154=(self!=((void*)0)));    _condtional_value_X154;    })) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(({    (_condtional_value_X155=(self!=((void*)0)));    _condtional_value_X155;    })) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(({    (_condtional_value_X156=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X156;    })) {
        __dec_obj19=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X157=(self!=((void*)0)));    _condtional_value_X157;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_condtional_value_X158=(self!=((void*)0)));    _condtional_value_X158;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_condtional_value_X159=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X159;    })) {
        __dec_obj20=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X160=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X160;    })) {
        __dec_obj24=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X167=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X167;    })) {
        __dec_obj25=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X168=(self!=((void*)0)));    _condtional_value_X168;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X169=(self!=((void*)0)));    _condtional_value_X169;    })) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(({    (_condtional_value_X170=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X170;    })) {
        __dec_obj26=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__29 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__29;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X91;
struct list$1sType$ph* __result_obj__15;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X92;
_Bool _condtional_value_X93;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct list$1sType$ph* __result_obj__18;
    if(({    (_condtional_value_X91=(self==((void*)0)));    _condtional_value_X91;    })) {
        __result_obj__15 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__15;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X92=(it!=((void*)0)));    _condtional_value_X92;    })) {
        if(({        (_condtional_value_X93=(1));        _condtional_value_X93;        })) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__18 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__16;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__16 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X94;
void* __right_value16 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj4;
_Bool _condtional_value_X95;
void* __right_value17 = (void*)0;
struct list_item$1sType$ph* litem_3;
struct sType* __dec_obj5;
void* __right_value18 = (void*)0;
struct list_item$1sType$ph* litem_4;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__17;
    if(({    (_condtional_value_X94=(self->len==0));    _condtional_value_X94;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value16=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X95=(self->len==1));    _condtional_value_X95;    })) {
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value17=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_3->prev=self->head;
        litem_3->next=((void*)0);
        __dec_obj5=litem_3->item,
        litem_3->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_3;
        self->head->next=litem_3;
    }
    else {
        litem_4=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value18=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_4->prev=self->tail;
        litem_4->next=((void*)0);
        __dec_obj6=litem_4->item,
        litem_4->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_4;
        self->tail=litem_4;
    }
    self->len++;
    __result_obj__17 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__17;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X96;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X96=(it!=((void*)0)));    _condtional_value_X96;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _condtional_value_X99;
struct sNode* __result_obj__19;
void* __right_value23 = (void*)0;
struct sNode* result;
_Bool _condtional_value_X100;
_Bool _condtional_value_X101;
_Bool _condtional_value_X102;
_Bool _condtional_value_X103;
_Bool _condtional_value_X104;
_Bool _condtional_value_X105;
_Bool _condtional_value_X106;
_Bool _condtional_value_X107;
_Bool _condtional_value_X108;
_Bool _condtional_value_X109;
struct sNode* __result_obj__20;
    if(({    (_condtional_value_X99=(self==(void*)0));    _condtional_value_X99;    })) {
        __result_obj__19 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__19) ? __result_obj__19 = come_decrement_ref_count(__result_obj__19, ((struct sNode*)__result_obj__19)->finalize, ((struct sNode*)__result_obj__19)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__19;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(({    (_condtional_value_X100=(self!=((void*)0)&&self->clone!=((void*)0)));    _condtional_value_X100;    })) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(({    (_condtional_value_X101=(self!=((void*)0)));    _condtional_value_X101;    })) {
        result->finalize=self->finalize;
    }
    if(({    (_condtional_value_X102=(self!=((void*)0)));    _condtional_value_X102;    })) {
        result->clone=self->clone;
    }
    if(({    (_condtional_value_X103=(self!=((void*)0)));    _condtional_value_X103;    })) {
        result->compile=self->compile;
    }
    if(({    (_condtional_value_X104=(self!=((void*)0)));    _condtional_value_X104;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X105=(self!=((void*)0)));    _condtional_value_X105;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X106=(self!=((void*)0)));    _condtional_value_X106;    })) {
        result->sname=self->sname;
    }
    if(({    (_condtional_value_X107=(self!=((void*)0)));    _condtional_value_X107;    })) {
        result->terminated=self->terminated;
    }
    if(({    (_condtional_value_X108=(self!=((void*)0)));    _condtional_value_X108;    })) {
        result->kind=self->kind;
    }
    if(({    (_condtional_value_X109=(self!=((void*)0)));    _condtional_value_X109;    })) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__20 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__20) ? __result_obj__20 = come_decrement_ref_count(__result_obj__20, ((struct sNode*)__result_obj__20)->finalize, ((struct sNode*)__result_obj__20)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__20;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _condtional_value_X144;
struct list$1sNode$ph* __result_obj__21;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X145;
_Bool _condtional_value_X146;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1sNode$ph* __result_obj__24;
    if(({    (_condtional_value_X144=(self==((void*)0)));    _condtional_value_X144;    })) {
        __result_obj__21 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__21;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X145=(it!=((void*)0)));    _condtional_value_X145;    })) {
        if(({        (_condtional_value_X146=(1));        _condtional_value_X146;        })) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__24 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__24;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__22;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__22 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__22;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
_Bool _condtional_value_X147;
void* __right_value32 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj15;
_Bool _condtional_value_X148;
void* __right_value33 = (void*)0;
struct list_item$1sNode$ph* litem_5;
struct sNode* __dec_obj16;
void* __right_value34 = (void*)0;
struct list_item$1sNode$ph* litem_6;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__23;
    if(({    (_condtional_value_X147=(self->len==0));    _condtional_value_X147;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value32=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj15=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X148=(self->len==1));    _condtional_value_X148;    })) {
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value33=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_5->prev=self->head;
        litem_5->next=((void*)0);
        __dec_obj16=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_5;
        self->head->next=litem_5;
    }
    else {
        litem_6=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value34=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_6->prev=self->tail;
        litem_6->next=((void*)0);
        __dec_obj17=litem_6->item,
        litem_6->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_6;
        self->tail=litem_6;
    }
    self->len++;
    __result_obj__23 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__23;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X149;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X149=(it!=((void*)0)));    _condtional_value_X149;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
_Bool _condtional_value_X161;
struct list$1char$ph* __result_obj__25;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X162;
_Bool _condtional_value_X163;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct list$1char$ph* __result_obj__28;
    if(({    (_condtional_value_X161=(self==((void*)0)));    _condtional_value_X161;    })) {
        __result_obj__25 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__25;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X162=(it!=((void*)0)));    _condtional_value_X162;    })) {
        if(({        (_condtional_value_X163=(1));        _condtional_value_X163;        })) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1016, "char*")));
        }
        it=it->next;
    }
    __result_obj__28 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__26;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__26;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X164;
void* __right_value42 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj21;
_Bool _condtional_value_X165;
void* __right_value43 = (void*)0;
struct list_item$1char$ph* litem_7;
char* __dec_obj22;
void* __right_value44 = (void*)0;
struct list_item$1char$ph* litem_8;
char* __dec_obj23;
struct list$1char$ph* __result_obj__27;
    if(({    (_condtional_value_X164=(self->len==0));    _condtional_value_X164;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value42=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj21=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X165=(self->len==1));    _condtional_value_X165;    })) {
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value43=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_7->prev=self->head;
        litem_7->next=((void*)0);
        __dec_obj22=litem_7->item,
        litem_7->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_7;
        self->head->next=litem_7;
    }
    else {
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value44=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_8->prev=self->tail;
        litem_8->next=((void*)0);
        __dec_obj23=litem_8->item,
        litem_8->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_8;
        self->tail=litem_8;
    }
    self->len++;
    __result_obj__27 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__27;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X166;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X166=(it!=((void*)0)));    _condtional_value_X166;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
_Bool _condtional_value_X174;
_Bool _condtional_value_X175;
_Bool _condtional_value_X176;
int len;
int i;
_Bool _condtional_value_X177;
_Bool _condtional_value_X178;
_Bool _condtional_value_X179;
struct sType* default_value;
struct list$1sType$ph* __result_obj__31;
struct list_item$1sType$ph* it;
int i_11;
_Bool _condtional_value_X182;
_Bool _condtional_value_X183;
struct sType* __dec_obj31;
struct list$1sType$ph* __result_obj__32;
default_value = (void*)0;
    if(({    (_condtional_value_X174=(position<0));    _condtional_value_X174;    })) {
        position+=self->len;
    }
    if(({    (_condtional_value_X175=(position<0));    _condtional_value_X175;    })) {
        position=0;
    }
    if(({    (_condtional_value_X176=(self->len==0||position>=self->len));    _condtional_value_X176;    })) {
        len=self->len;
        for(        ({        (_condtional_value_X177=(i=0));        _condtional_value_X177;        });        ({        (_condtional_value_X178=(i<position-len));        _condtional_value_X178;        });        ({        (_condtional_value_X179=(i++));        _condtional_value_X179;        })        ){
            memset(&default_value,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__31 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__31;
    }
    it=self->head;
    i_11=0;
    while(({    (_condtional_value_X182=(it!=((void*)0)));    _condtional_value_X182;    })) {
        if(({        (_condtional_value_X183=(position==i_11));        _condtional_value_X183;        })) {
            __dec_obj31=it->item,
            it->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it=it->next;
        i_11++;
    }
    __result_obj__32 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__32;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X180;
void* __right_value51 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj28;
_Bool _condtional_value_X181;
void* __right_value52 = (void*)0;
struct list_item$1sType$ph* litem_9;
struct sType* __dec_obj29;
void* __right_value53 = (void*)0;
struct list_item$1sType$ph* litem_10;
struct sType* __dec_obj30;
struct list$1sType$ph* __result_obj__30;
    if(({    (_condtional_value_X180=(self->len==0));    _condtional_value_X180;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value51=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X181=(self->len==1));    _condtional_value_X181;    })) {
        litem_9=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value52=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1sType$ph*"))));
        litem_9->prev=self->head;
        litem_9->next=((void*)0);
        __dec_obj29=litem_9->item,
        litem_9->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_9;
        self->head->next=litem_9;
    }
    else {
        litem_10=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value53=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1sType$ph*"))));
        litem_10->prev=self->tail;
        litem_10->next=((void*)0);
        __dec_obj30=litem_10->item,
        litem_10->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_10;
        self->tail=litem_10;
    }
    self->len++;
    __result_obj__30 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__30;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name){
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct buffer* buf;
void* __right_value58 = (void*)0;
struct sType* type2;
char* class_name;
_Bool _condtional_value_X184;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct buffer* buf_12;
int i;
_Bool _condtional_value_X185;
_Bool _condtional_value_X186;
_Bool _condtional_value_X187;
_Bool _condtional_value_X188;
void* __right_value61 = (void*)0;
char* __result_obj__34;
_Bool _condtional_value_X189;
int i_13;
_Bool _condtional_value_X190;
_Bool _condtional_value_X191;
_Bool _condtional_value_X192;
void* __right_value62 = (void*)0;
struct sType* gtype;
void* __right_value63 = (void*)0;
_Bool _condtional_value_X199;
_Bool _condtional_value_X200;
int i_14;
_Bool _condtional_value_X201;
_Bool _condtional_value_X202;
_Bool _condtional_value_X203;
_Bool _condtional_value_X204;
int i_15;
_Bool _condtional_value_X205;
_Bool _condtional_value_X206;
_Bool _condtional_value_X207;
_Bool _condtional_value_X208;
_Bool _condtional_value_X209;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
char* __result_obj__39;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 205, "struct buffer*"))));
    type2=(struct sType*)come_increment_ref_count(get_no_solved_type(type));
    class_name=type2->mClass->mName;
    if(({    (_condtional_value_X184=(original_type_name&&type->mOriginalTypeName&&string_operator_not_equals(type->mOriginalTypeName,"")));    _condtional_value_X184;    })) {
        buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 213, "struct buffer*"))));
        buffer_append_str(buf_12,type->mOriginalTypeName);
        for(        ({        (_condtional_value_X185=(i=0));        _condtional_value_X185;        });        ({        (_condtional_value_X186=(i<type->mOriginalTypeNamePointerNum));        _condtional_value_X186;        });        ({        (_condtional_value_X187=(i++));        _condtional_value_X187;        })        ){
            buffer_append_str(buf_12,"*");
        }
        if(({        (_condtional_value_X188=(type->mOriginalTypeNameHeap));        _condtional_value_X188;        })) {
            buffer_append_str(buf_12,"%");
        }
        __result_obj__34 = (char*)come_increment_ref_count(((char*)(__right_value61=buffer_to_string(buf_12))));
        come_call_finalizer(buffer_finalize, buf_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (__right_value61 = come_decrement_ref_count(__right_value61, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__34 = come_decrement_ref_count(__result_obj__34, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__34;
        come_call_finalizer(buffer_finalize, buf_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        buffer_append_str(buf,class_name);
        if(({        (_condtional_value_X189=(list$1sType$ph_length(type2->mGenericsTypes)>0));        _condtional_value_X189;        })) {
            buffer_append_str(buf,"<");
            for(            ({            (_condtional_value_X190=(i_13=0));            _condtional_value_X190;            });            ({            (_condtional_value_X191=(i_13<list$1sType$ph_length(type2->mGenericsTypes)));            _condtional_value_X191;            });            ({            (_condtional_value_X192=(i_13++));            _condtional_value_X192;            })            ){
                gtype=((struct sType*)(__right_value62=list$1sType$ph_operator_load_element(type2->mGenericsTypes,i_13)));
                come_call_finalizer(sType_finalize, __right_value62, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                buffer_append_str(buf,((char*)(__right_value63=make_come_type_name_string(gtype,info,(_Bool)0))));
                (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(({                (_condtional_value_X199=(i_13!=list$1sType$ph_length(type2->mGenericsTypes)-1));                _condtional_value_X199;                })) {
                    buffer_append_str(buf,",");
                }
            }
            buffer_append_str(buf,">");
        }
        if(({        (_condtional_value_X200=(charp_operator_not_equals(class_name,"lambda")));        _condtional_value_X200;        })) {
            for(            ({            (_condtional_value_X201=(i_14=0));            _condtional_value_X201;            });            ({            (_condtional_value_X202=(i_14<type2->mPointerNum));            _condtional_value_X202;            });            ({            (_condtional_value_X203=(i_14++));            _condtional_value_X203;            })            ){
                buffer_append_str(buf,"*");
            }
        }
        if(({        (_condtional_value_X204=(list$1sNode$ph_length(type2->mArrayNum)>0));        _condtional_value_X204;        })) {
            for(            ({            (_condtional_value_X205=(i_15=0));            _condtional_value_X205;            });            ({            (_condtional_value_X206=(i_15<list$1sNode$ph_length(type2->mArrayNum)));            _condtional_value_X206;            });            ({            (_condtional_value_X207=(i_15++));            _condtional_value_X207;            })            ){
                buffer_append_str(buf,"[]");
            }
        }
        if(({        (_condtional_value_X208=(type2->mHeap));        _condtional_value_X208;        })) {
            buffer_append_str(buf,"%");
        }
        if(({        (_condtional_value_X209=(type2->mAttribute));        _condtional_value_X209;        })) {
            buffer_append_str(buf,((char*)(__right_value64=charp_operator_add(" ",type2->mAttribute))));
            (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    __result_obj__39 = (char*)come_increment_ref_count(((char*)(__right_value65=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__39 = come_decrement_ref_count(__result_obj__39, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__39;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _condtional_value_X193;
struct list_item$1sType$ph* it;
int i;
_Bool _condtional_value_X194;
_Bool _condtional_value_X195;
struct sType* __result_obj__35;
struct sType* default_value;
struct sType* __result_obj__36;
default_value = (void*)0;
    if(({    (_condtional_value_X193=(position<0));    _condtional_value_X193;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X194=(it!=((void*)0)));    _condtional_value_X194;    })) {
        if(({        (_condtional_value_X195=(position==i));        _condtional_value_X195;        })) {
            __result_obj__35 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__35;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__36 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__36;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _condtional_value_X196;
struct list_item$1sType$ph* it;
int i;
_Bool _condtional_value_X197;
_Bool _condtional_value_X198;
struct sType* __result_obj__37;
struct sType* default_value;
struct sType* __result_obj__38;
default_value = (void*)0;
    if(({    (_condtional_value_X196=(position<0));    _condtional_value_X196;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X197=(it!=((void*)0)));    _condtional_value_X197;    })) {
        if(({        (_condtional_value_X198=(position==i));        _condtional_value_X198;        })) {
            __result_obj__37 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__37;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__38 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__38;
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
struct buffer* buf;
_Bool _condtional_value_X210;
void* __right_value68 = (void*)0;
char* __result_obj__40;
_Bool _condtional_value_X211;
_Bool _condtional_value_X212;
int i;
_Bool _condtional_value_X213;
_Bool _condtional_value_X214;
_Bool _condtional_value_X215;
void* __right_value69 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X216;
void* __right_value70 = (void*)0;
struct CVALUE* cvalue;
int i_16;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X217;
_Bool _condtional_value_X218;
_Bool _condtional_value_X219;
void* __right_value71 = (void*)0;
_Bool _condtional_value_X220;
_Bool _condtional_value_X221;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
char* __result_obj__41;
void* __right_value75 = (void*)0;
_Bool _condtional_value_X222;
int i_17;
_Bool _condtional_value_X223;
_Bool _condtional_value_X224;
_Bool _condtional_value_X225;
_Bool _condtional_value_X226;
int i_18;
_Bool _condtional_value_X227;
_Bool _condtional_value_X228;
_Bool _condtional_value_X229;
void* __right_value76 = (void*)0;
struct sNode* node_19;
_Bool Value_20;
_Bool _condtional_value_X230;
void* __right_value77 = (void*)0;
struct CVALUE* cvalue_21;
int i_22;
struct list$1sType$ph* o2_saved_23;
struct sType* it_24;
_Bool _condtional_value_X231;
_Bool _condtional_value_X232;
_Bool _condtional_value_X233;
void* __right_value78 = (void*)0;
_Bool _condtional_value_X234;
_Bool _condtional_value_X235;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
char* __result_obj__42;
void* __right_value81 = (void*)0;
char* __result_obj__43;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 269, "struct buffer*"))));
    if(({    (_condtional_value_X210=(type->mResultType==((void*)0)));    _condtional_value_X210;    })) {
        err_msg(info,"invalid lambda type");
        __result_obj__40 = (char*)come_increment_ref_count(((char*)(__right_value68=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__40 = come_decrement_ref_count(__result_obj__40, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__40;
    }
    if(({    (_condtional_value_X211=(type->mResultType&&string_operator_equals(type->mResultType->mClass->mName,"lambda")));    _condtional_value_X211;    })) {
        buffer_append_format(buf,"(*%s",var_name);
        if(({        (_condtional_value_X212=(list$1sNode$ph_length(type->mResultType->mArrayNum)>0));        _condtional_value_X212;        })) {
            for(            ({            (_condtional_value_X213=(i=0));            _condtional_value_X213;            });            ({            (_condtional_value_X214=(i<list$1sNode$ph_length(type->mResultType->mArrayNum)));            _condtional_value_X214;            });            ({            (_condtional_value_X215=(i++));            _condtional_value_X215;            })            ){
                buffer_append_str(buf,"[");
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i));
                Value=node_compile(node,info);
                if(({                (_condtional_value_X216=(!Value));                _condtional_value_X216;                })) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                else {
                }
                cvalue=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                buffer_append_format(buf,"%s",cvalue->c_value);
                buffer_append_str(buf,"]");
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        buffer_append_format(buf,")(",var_name);
        i_16=0;
        for(        ({        (_condtional_value_X217=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes),it=list$1sType$ph_begin(o2_saved)));        _condtional_value_X217;        });        ({        (_condtional_value_X218=(!list$1sType$ph_end(o2_saved)));        _condtional_value_X218;        });        ({        (_condtional_value_X219=(it=list$1sType$ph_next(o2_saved)));        _condtional_value_X219;        })        ){
            info->undefined_array_num_var=(_Bool)1;
            buffer_append_str(buf,((char*)(__right_value71=make_type_name_string(it,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0))));
            (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->undefined_array_num_var=(_Bool)0;
            if(({            (_condtional_value_X220=(i_16!=list$1sType$ph_length(type->mParamTypes)-1));            _condtional_value_X220;            })) {
                buffer_append_str(buf,",");
            }
            i_16++;
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf,")");
        if(({        (_condtional_value_X221=(type->mAttribute));        _condtional_value_X221;        })) {
            buffer_append_str(buf,((char*)(__right_value72=charp_operator_add(" ",type->mAttribute))));
            (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        __result_obj__41 = (char*)come_increment_ref_count(((char*)(__right_value74=make_lambda_type_name_string(type->mResultType,((char*)(__right_value73=buffer_to_string(buf))),info))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__41 = come_decrement_ref_count(__result_obj__41, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__41;
    }
    else {
        buffer_append_format(buf,"%s ",((char*)(__right_value75=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0))));
        (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X222=(type->mFunctionPointerNum>1));        _condtional_value_X222;        })) {
            buffer_append_str(buf,"(");
            for(            ({            (_condtional_value_X223=(i_17=0));            _condtional_value_X223;            });            ({            (_condtional_value_X224=(i_17<type->mFunctionPointerNum));            _condtional_value_X224;            });            ({            (_condtional_value_X225=(i_17++));            _condtional_value_X225;            })            ){
                buffer_append_str(buf,"*");
            }
            buffer_append_str(buf,var_name);
        }
        else {
            buffer_append_format(buf,"(*%s",var_name);
        }
        if(({        (_condtional_value_X226=(list$1sNode$ph_length(type->mArrayNum)>0));        _condtional_value_X226;        })) {
            for(            ({            (_condtional_value_X227=(i_18=0));            _condtional_value_X227;            });            ({            (_condtional_value_X228=(i_18<list$1sNode$ph_length(type->mArrayNum)));            _condtional_value_X228;            });            ({            (_condtional_value_X229=(i_18++));            _condtional_value_X229;            })            ){
                buffer_append_str(buf,"[");
                node_19=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i_18));
                Value_20=node_compile(node_19,info);
                if(({                (_condtional_value_X230=(!Value_20));                _condtional_value_X230;                })) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                else {
                }
                cvalue_21=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                buffer_append_format(buf,"%s",cvalue_21->c_value);
                buffer_append_str(buf,"]");
                ((node_19) ? node_19 = come_decrement_ref_count(node_19, ((struct sNode*)node_19)->finalize, ((struct sNode*)node_19)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue_21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        buffer_append_format(buf,")(");
        i_22=0;
        for(        ({        (_condtional_value_X231=(o2_saved_23=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes),it_24=list$1sType$ph_begin(o2_saved_23)));        _condtional_value_X231;        });        ({        (_condtional_value_X232=(!list$1sType$ph_end(o2_saved_23)));        _condtional_value_X232;        });        ({        (_condtional_value_X233=(it_24=list$1sType$ph_next(o2_saved_23)));        _condtional_value_X233;        })        ){
            info->undefined_array_num_var=(_Bool)1;
            buffer_append_str(buf,((char*)(__right_value78=make_type_name_string(it_24,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0))));
            (__right_value78 = come_decrement_ref_count(__right_value78, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->undefined_array_num_var=(_Bool)0;
            if(({            (_condtional_value_X234=(i_22!=list$1sType$ph_length(type->mParamTypes)-1));            _condtional_value_X234;            })) {
                buffer_append_str(buf,",");
            }
            i_22++;
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf,")");
        if(({        (_condtional_value_X235=(type->mAttribute));        _condtional_value_X235;        })) {
            buffer_append_str(buf,((char*)(__right_value79=charp_operator_add(" ",type->mAttribute))));
            (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        __result_obj__42 = (char*)come_increment_ref_count(((char*)(__right_value80=buffer_to_string(buf))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (__right_value80 = come_decrement_ref_count(__right_value80, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__42;
    }
    __result_obj__43 = (char*)come_increment_ref_count(((char*)(__right_value81=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__43;
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type){
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
struct buffer* buf;
void* __right_value84 = (void*)0;
struct sType* type2;
_Bool _condtional_value_X236;
_Bool _condtional_value_X237;
void* __right_value85 = (void*)0;
char* str;
_Bool _condtional_value_X238;
void* __right_value86 = (void*)0;
char* str_25;
_Bool _condtional_value_X239;
void* __right_value87 = (void*)0;
char* type_name;
struct list$1sNode$ph* o2_saved;
struct sNode* it;
_Bool _condtional_value_X242;
_Bool _condtional_value_X243;
_Bool _condtional_value_X246;
_Bool _condtional_value_X247;
void* __right_value88 = (void*)0;
char* __result_obj__50;
void* __right_value89 = (void*)0;
struct CVALUE* cvalue;
_Bool _condtional_value_X248;
_Bool _condtional_value_X249;
void* __right_value90 = (void*)0;
char* __result_obj__51;
void* __right_value91 = (void*)0;
struct CVALUE* come_value;
char* type_str;
_Bool _condtional_value_X250;
void* __right_value92 = (void*)0;
char* __dec_obj32;
void* __right_value93 = (void*)0;
char* __dec_obj33;
_Bool _condtional_value_X251;
_Bool _condtional_value_X252;
_Bool _condtional_value_X253;
char* type_str_28;
_Bool _condtional_value_X254;
void* __right_value94 = (void*)0;
char* __dec_obj34;
void* __right_value95 = (void*)0;
char* __dec_obj35;
struct list$1sNode$ph* o2_saved_29;
struct sNode* it_30;
_Bool _condtional_value_X255;
_Bool _condtional_value_X256;
_Bool _condtional_value_X257;
_Bool _condtional_value_X258;
void* __right_value96 = (void*)0;
char* __result_obj__52;
void* __right_value97 = (void*)0;
struct CVALUE* cvalue_31;
_Bool _condtional_value_X259;
_Bool _condtional_value_X260;
char* type_str_32;
_Bool _condtional_value_X261;
void* __right_value98 = (void*)0;
char* __dec_obj36;
void* __right_value99 = (void*)0;
char* __dec_obj37;
_Bool _condtional_value_X262;
void* __right_value100 = (void*)0;
char* __result_obj__53;
_Bool _condtional_value_X263;
_Bool _condtional_value_X264;
_Bool _condtional_value_X265;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
char* __result_obj__54;
type_str = (void*)0;
type_str_28 = (void*)0;
type_str_32 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 375, "struct buffer*"))));
    type2=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(({    (_condtional_value_X236=(type2->mArrayPointerType));    _condtional_value_X236;    })) {
        type2->mPointerNum--;
    }
    if(({    (_condtional_value_X237=(string_operator_equals(type2->mClass->mName,"lambda")&&type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")));    _condtional_value_X237;    })) {
        str=(char*)come_increment_ref_count(header_lambda(type2,(char*)come_increment_ref_count(type2->mAsmName),info));
        buffer_append_str(buf,str);
        (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X238=(string_operator_equals(type2->mClass->mName,"lambda")));    _condtional_value_X238;    })) {
        str_25=(char*)come_increment_ref_count(make_lambda_type_name_string(type2,name,info));
        buffer_append_str(buf,str_25);
        (str_25 = come_decrement_ref_count(str_25, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X239=(type2->mArrayPointerNum>0));    _condtional_value_X239;    })) {
        type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
        buffer_append_format(buf,"%s (*%s)",type_name,name);
        for(        ({        (_condtional_value_X242=(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(type2->mArrayNum),it=list$1sNode$ph_begin(o2_saved)));        _condtional_value_X242;        });        ({        (_condtional_value_X243=(!list$1sNode$ph_end(o2_saved)));        _condtional_value_X243;        });        ({        (_condtional_value_X246=(it=list$1sNode$ph_next(o2_saved)));        _condtional_value_X246;        })        ){
            if(({            (_condtional_value_X247=(!node_compile(it,info)));            _condtional_value_X247;            })) {
                err_msg(info,"invalid array number");
                __result_obj__50 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__50;
            }
            cvalue=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(buf,"[%s]",cvalue->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X248=(type2->mSizeNum!=((void*)0)));    _condtional_value_X248;    })) {
        if(({        (_condtional_value_X249=(!node_compile(type2->mSizeNum,info)));        _condtional_value_X249;        })) {
            err_msg(info,"invalid bit field number");
            __result_obj__51 = (char*)come_increment_ref_count(((char*)(__right_value90=__builtin_string(""))));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__51;
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(({        (_condtional_value_X250=(come_type));        _condtional_value_X250;        })) {
            __dec_obj32=type_str,
            type_str=(char*)come_increment_ref_count(make_come_type_name_string(type2,info,(_Bool)0));
            __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj33=type_str,
            type_str=(char*)come_increment_ref_count(make_type_name_string(type2,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
            __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        buffer_append_format(buf,"%s ",type_str);
        buffer_append_format(buf,"%s:%s",name,come_value->c_value);
        if(({        (_condtional_value_X251=(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")));        _condtional_value_X251;        })) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(({        (_condtional_value_X252=(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")));        _condtional_value_X252;        })) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (type_str = come_decrement_ref_count(type_str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X253=(list$1sNode$ph_length(type2->mArrayNum)>0));    _condtional_value_X253;    })) {
        if(({        (_condtional_value_X254=(come_type));        _condtional_value_X254;        })) {
            __dec_obj34=type_str_28,
            type_str_28=(char*)come_increment_ref_count(make_come_type_name_string(type2,info,(_Bool)0));
            __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj35=type_str_28,
            type_str_28=(char*)come_increment_ref_count(make_type_name_string(type2,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
            __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        buffer_append_str(buf,type_str_28);
        buffer_append_str(buf," ");
        buffer_append_str(buf,name);
        for(        ({        (_condtional_value_X255=(o2_saved_29=(struct list$1sNode$ph*)come_increment_ref_count(type2->mArrayNum),it_30=list$1sNode$ph_begin(o2_saved_29)));        _condtional_value_X255;        });        ({        (_condtional_value_X256=(!list$1sNode$ph_end(o2_saved_29)));        _condtional_value_X256;        });        ({        (_condtional_value_X257=(it_30=list$1sNode$ph_next(o2_saved_29)));        _condtional_value_X257;        })        ){
            if(({            (_condtional_value_X258=(!node_compile(it_30,info)));            _condtional_value_X258;            })) {
                err_msg(info,"invalid array number");
                __result_obj__52 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (type_str_28 = come_decrement_ref_count(type_str_28, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__52;
            }
            cvalue_31=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(buf,"[%s]",cvalue_31->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X259=(type2->mArrayPointerType));        _condtional_value_X259;        })) {
            buffer_append_str(buf,"[]");
        }
        if(({        (_condtional_value_X260=(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")));        _condtional_value_X260;        })) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        (type_str_28 = come_decrement_ref_count(type_str_28, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        if(({        (_condtional_value_X261=(come_type));        _condtional_value_X261;        })) {
            __dec_obj36=type_str_32,
            type_str_32=(char*)come_increment_ref_count(make_come_type_name_string(type2,info,(_Bool)0));
            __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj37=type_str_32,
            type_str_32=(char*)come_increment_ref_count(make_type_name_string(type2,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
            __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(({        (_condtional_value_X262=(string_operator_equals(type_str_32,"")));        _condtional_value_X262;        })) {
            __result_obj__53 = (char*)come_increment_ref_count(((char*)(__right_value100=__builtin_string(""))));
            (type_str_32 = come_decrement_ref_count(type_str_32, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__53 = come_decrement_ref_count(__result_obj__53, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__53;
        }
        buffer_append_str(buf,type_str_32);
        buffer_append_str(buf," ");
        buffer_append_str(buf,name);
        if(({        (_condtional_value_X263=(type2->mArrayPointerType));        _condtional_value_X263;        })) {
            buffer_append_str(buf,"[]");
        }
        if(({        (_condtional_value_X264=(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")));        _condtional_value_X264;        })) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        (type_str_32 = come_decrement_ref_count(type_str_32, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X265=(type2->mVarAttribute));    _condtional_value_X265;    })) {
        buffer_append_str(buf,((char*)(__right_value101=charp_operator_add(" ",type->mVarAttribute))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value102=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__54;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
_Bool _condtional_value_X240;
struct sNode* result;
struct sNode* __result_obj__44;
_Bool _condtional_value_X241;
struct sNode* __result_obj__45;
struct sNode* result_26;
struct sNode* __result_obj__46;
result = (void*)0;
result_26 = (void*)0;
    if(({    (_condtional_value_X240=(self==((void*)0)));    _condtional_value_X240;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__44 = result;
        return __result_obj__44;
    }
    self->it=self->head;
    if(({    (_condtional_value_X241=(self->it));    _condtional_value_X241;    })) {
        __result_obj__45 = self->it->item;
        return __result_obj__45;
    }
    memset(&result_26,0,sizeof(struct sNode*));
    __result_obj__46 = result_26;
    return __result_obj__46;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
_Bool _condtional_value_X244;
struct sNode* result;
struct sNode* __result_obj__47;
_Bool _condtional_value_X245;
struct sNode* __result_obj__48;
struct sNode* result_27;
struct sNode* __result_obj__49;
result = (void*)0;
result_27 = (void*)0;
    if(({    (_condtional_value_X244=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X244;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__47 = result;
        return __result_obj__47;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X245=(self->it));    _condtional_value_X245;    })) {
        __result_obj__48 = self->it->item;
        return __result_obj__48;
    }
    memset(&result_27,0,sizeof(struct sNode*));
    __result_obj__49 = result_27;
    return __result_obj__49;
}

char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info){
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct buffer* header;
void* __right_value105 = (void*)0;
char* result_type_name;
_Bool _condtional_value_X266;
void* __right_value106 = (void*)0;
char* impl_name;
int i;
_Bool _condtional_value_X267;
_Bool _condtional_value_X268;
_Bool _condtional_value_X269;
void* __right_value107 = (void*)0;
struct sType* param_type;
void* __right_value108 = (void*)0;
char* param_name;
void* __right_value109 = (void*)0;
char* default_parametor;
_Bool _condtional_value_X276;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
_Bool _condtional_value_X277;
_Bool _condtional_value_X278;
void* __right_value112 = (void*)0;
char* __result_obj__59;
    header=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 501, "struct buffer*"))));
    result_type_name=(char*)come_increment_ref_count(make_come_type_name_string(fun->mResultType,info,(_Bool)0));
    if(({    (_condtional_value_X266=(impl_type));    _condtional_value_X266;    })) {
        impl_name=(char*)come_increment_ref_count(make_come_type_name_string(impl_type,info,(_Bool)0));
        buffer_append_format(header,"extern %s %s::%s(",result_type_name,impl_name,base_fun_name);
        (impl_name = come_decrement_ref_count(impl_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        buffer_append_format(header,"extern %s %s(",result_type_name,base_fun_name);
    }
    for(    ({    (_condtional_value_X267=(i=0));    _condtional_value_X267;    });    ({    (_condtional_value_X268=(i<list$1sType$ph_length(fun->mParamTypes)));    _condtional_value_X268;    });    ({    (_condtional_value_X269=(i++));    _condtional_value_X269;    })    ){
        info->undefined_array_num_var=(_Bool)1;
        param_type=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(fun->mParamTypes,i));
        param_name=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(fun->mParamNames,i));
        default_parametor=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(fun->mParamDefaultParametors,i));
        if(({        (_condtional_value_X276=(default_parametor));        _condtional_value_X276;        })) {
            buffer_append_format(header,"%s %s=%s",((char*)(__right_value110=make_come_type_name_string(param_type,info,(_Bool)0))),param_name,default_parametor);
            (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            buffer_append_format(header,"%s %s",((char*)(__right_value111=make_come_type_name_string(param_type,info,(_Bool)0))),param_name);
            (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X277=(i!=list$1sType$ph_length(fun->mParamTypes)-1));        _condtional_value_X277;        })) {
            buffer_append_str(header,",");
        }
        info->undefined_array_num_var=(_Bool)0;
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (default_parametor = come_decrement_ref_count(default_parametor, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X278=(version_==-1||version_==0));    _condtional_value_X278;    })) {
        buffer_append_str(header,");\n");
    }
    else {
        buffer_append_format(header,") version %d;\n",version_);
    }
    __result_obj__59 = (char*)come_increment_ref_count(((char*)(__right_value112=buffer_to_string(header))));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_type_name = come_decrement_ref_count(result_type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__59;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
_Bool _condtional_value_X270;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X271;
_Bool _condtional_value_X272;
char* __result_obj__55;
char* default_value;
char* __result_obj__56;
default_value = (void*)0;
    if(({    (_condtional_value_X270=(position<0));    _condtional_value_X270;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X271=(it!=((void*)0)));    _condtional_value_X271;    })) {
        if(({        (_condtional_value_X272=(position==i));        _condtional_value_X272;        })) {
            __result_obj__55 = (char*)come_increment_ref_count(it->item);
            (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__55;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__56 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__56;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
_Bool _condtional_value_X273;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X274;
_Bool _condtional_value_X275;
char* __result_obj__57;
char* default_value;
char* __result_obj__58;
default_value = (void*)0;
    if(({    (_condtional_value_X273=(position<0));    _condtional_value_X273;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X274=(it!=((void*)0)));    _condtional_value_X274;    })) {
        if(({        (_condtional_value_X275=(position==i));        _condtional_value_X275;        })) {
            __result_obj__57 = (char*)come_increment_ref_count(it->item);
            (__result_obj__57 = come_decrement_ref_count(__result_obj__57, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__57;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__58 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__58;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct buffer* output;
_Bool _condtional_value_X279;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
struct buffer* output2;
int i;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X280;
_Bool _condtional_value_X281;
_Bool _condtional_value_X282;
void* __right_value117 = (void*)0;
char* name;
void* __right_value118 = (void*)0;
char* str;
_Bool _condtional_value_X283;
_Bool _condtional_value_X284;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
char* str_33;
_Bool _condtional_value_X285;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
_Bool _condtional_value_X286;
_Bool _condtional_value_X287;
void* __right_value123 = (void*)0;
_Bool _condtional_value_X288;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
_Bool _condtional_value_X289;
struct sType* base_result_type;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1sNode$ph* __dec_obj38;
void* __right_value128 = (void*)0;
char* result_type_str;
_Bool _condtional_value_X290;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
_Bool _condtional_value_X291;
_Bool _condtional_value_X292;
int i_34;
struct list$1sType$ph* o2_saved_35;
struct sType* it_36;
_Bool _condtional_value_X293;
_Bool _condtional_value_X294;
_Bool _condtional_value_X295;
void* __right_value131 = (void*)0;
char* name_37;
void* __right_value132 = (void*)0;
char* str_38;
_Bool _condtional_value_X296;
_Bool _condtional_value_X297;
void* __right_value133 = (void*)0;
struct sNode* node;
_Bool _condtional_value_X298;
void* __right_value134 = (void*)0;
char* __result_obj__60;
void* __right_value135 = (void*)0;
struct CVALUE* cvalue;
void* __right_value136 = (void*)0;
_Bool _condtional_value_X299;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
char* result_type_str_39;
_Bool _condtional_value_X300;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
_Bool _condtional_value_X301;
_Bool _condtional_value_X302;
int i_40;
struct list$1sType$ph* o2_saved_41;
struct sType* it_42;
_Bool _condtional_value_X303;
_Bool _condtional_value_X304;
_Bool _condtional_value_X305;
void* __right_value142 = (void*)0;
char* name_43;
void* __right_value143 = (void*)0;
char* str_44;
_Bool _condtional_value_X306;
_Bool _condtional_value_X307;
void* __right_value144 = (void*)0;
_Bool _condtional_value_X308;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
char* __result_obj__61;
    output=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 544, "struct buffer*"))));
    if(({    (_condtional_value_X279=(fun->mResultType->mResultType));    _condtional_value_X279;    })) {
        output2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 546, "struct buffer*"))));
        buffer_append_str(output2,fun->mName);
        buffer_append_str(output2,"(");
        i=0;
        for(        ({        (_condtional_value_X280=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),it=list$1sType$ph_begin(o2_saved)));        _condtional_value_X280;        });        ({        (_condtional_value_X281=(!list$1sType$ph_end(o2_saved)));        _condtional_value_X281;        });        ({        (_condtional_value_X282=(it=list$1sType$ph_next(o2_saved)));        _condtional_value_X282;        })        ){
            info->undefined_array_num_var=(_Bool)1;
            name=((char*)(__right_value117=list$1char$ph_operator_load_element(fun->mParamNames,i)));
            (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str=(char*)come_increment_ref_count(make_define_var(it,name,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output2,str);
            if(({            (_condtional_value_X283=(i==list$1sType$ph_length(fun->mParamTypes)-1));            _condtional_value_X283;            })) {
                if(({                (_condtional_value_X284=(fun->mVarArgs));                _condtional_value_X284;                })) {
                    buffer_append_str(output2,", ...");
                }
            }
            else {
                buffer_append_str(output2,", ");
            }
            i++;
            info->undefined_array_num_var=(_Bool)0;
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(output2,")");
        str_33=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value119=buffer_to_string(output2))),info));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X285=(string_operator_not_equals(fun->mAttribute,"")&&gComeBareMetal));        _condtional_value_X285;        })) {
            buffer_append_str(output,((char*)(__right_value122=xsprintf("\%s ",((char*)(__right_value121=string_to_string(fun->mAttribute)))))));
            (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X286=(fun->mStatic));        _condtional_value_X286;        })) {
            buffer_append_str(output,"static ");
        }
        if(({        (_condtional_value_X287=(fun->mInline));        _condtional_value_X287;        })) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,str_33);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value123=buffer_to_string(output))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X288=(string_operator_not_equals(fun->mFunAttribute,"")&&gComeBareMetal));        _condtional_value_X288;        })) {
            buffer_append_str(info->module->mSourceHead,((char*)(__right_value125=xsprintf(" \%s;\n",((char*)(__right_value124=string_to_string(fun->mFunAttribute)))))));
            (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            buffer_append_str(info->module->mSourceHead,";\n");
        }
        come_call_finalizer(buffer_finalize, output2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (str_33 = come_decrement_ref_count(str_33, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X289=(list$1sNode$ph_length(fun->mResultType->mArrayNum)>0));    _condtional_value_X289;    })) {
        base_result_type=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj38=base_result_type->mArrayNum,
        base_result_type->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 598, "struct list$1sNode$ph*"))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type_str=(char*)come_increment_ref_count(make_type_name_string(base_result_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0));
        if(({        (_condtional_value_X290=(string_operator_not_equals(fun->mAttribute,"")&&gComeBareMetal));        _condtional_value_X290;        })) {
            buffer_append_str(output,((char*)(__right_value130=xsprintf("\%s ",((char*)(__right_value129=string_to_string(fun->mAttribute)))))));
            (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X291=(fun->mStatic));        _condtional_value_X291;        })) {
            buffer_append_str(output,"static ");
        }
        if(({        (_condtional_value_X292=(fun->mInline));        _condtional_value_X292;        })) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,result_type_str);
        buffer_append_str(output," (*");
        buffer_append_str(output,fun->mName);
        buffer_append_str(output,"(");
        i_34=0;
        for(        ({        (_condtional_value_X293=(o2_saved_35=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),it_36=list$1sType$ph_begin(o2_saved_35)));        _condtional_value_X293;        });        ({        (_condtional_value_X294=(!list$1sType$ph_end(o2_saved_35)));        _condtional_value_X294;        });        ({        (_condtional_value_X295=(it_36=list$1sType$ph_next(o2_saved_35)));        _condtional_value_X295;        })        ){
            info->undefined_array_num_var=(_Bool)1;
            name_37=((char*)(__right_value131=list$1char$ph_operator_load_element(fun->mParamNames,i_34)));
            (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str_38=(char*)come_increment_ref_count(make_define_var(it_36,name_37,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output,str_38);
            if(({            (_condtional_value_X296=(i_34==list$1sType$ph_length(fun->mParamTypes)-1));            _condtional_value_X296;            })) {
                if(({                (_condtional_value_X297=(fun->mVarArgs));                _condtional_value_X297;                })) {
                    buffer_append_str(output,", ...");
                }
            }
            else {
                buffer_append_str(output,", ");
            }
            i_34++;
            info->undefined_array_num_var=(_Bool)0;
            (str_38 = come_decrement_ref_count(str_38, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        node=((struct sNode*)(__right_value133=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value133) ? __right_value133 = come_decrement_ref_count(__right_value133, ((struct sNode*)__right_value133)->finalize, ((struct sNode*)__right_value133)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        if(({        (_condtional_value_X298=(!node_compile(node,info)));        _condtional_value_X298;        })) {
            err_msg(info,"invalid array number");
            __result_obj__60 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string(""))));
            come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__60;
        }
        cvalue=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output,"))[%s]",cvalue->c_value);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value136=buffer_to_string(output))));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X299=(string_operator_not_equals(fun->mFunAttribute,"")&&gComeBareMetal));        _condtional_value_X299;        })) {
            buffer_append_str(info->module->mSourceHead,((char*)(__right_value138=xsprintf(" \%s;\n",((char*)(__right_value137=string_to_string(fun->mFunAttribute)))))));
            (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            buffer_append_str(info->module->mSourceHead,";\n");
        }
        come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        result_type_str_39=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0));
        if(({        (_condtional_value_X300=(string_operator_not_equals(fun->mAttribute,"")&&gComeBareMetal));        _condtional_value_X300;        })) {
            buffer_append_str(output,((char*)(__right_value141=xsprintf("\%s ",((char*)(__right_value140=string_to_string(fun->mAttribute)))))));
            (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(({        (_condtional_value_X301=(fun->mStatic));        _condtional_value_X301;        })) {
            buffer_append_str(output,"static ");
        }
        if(({        (_condtional_value_X302=(fun->mInline));        _condtional_value_X302;        })) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,result_type_str_39);
        buffer_append_str(output," ");
        buffer_append_str(output,fun->mName);
        buffer_append_str(output,"(");
        i_40=0;
        for(        ({        (_condtional_value_X303=(o2_saved_41=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),it_42=list$1sType$ph_begin(o2_saved_41)));        _condtional_value_X303;        });        ({        (_condtional_value_X304=(!list$1sType$ph_end(o2_saved_41)));        _condtional_value_X304;        });        ({        (_condtional_value_X305=(it_42=list$1sType$ph_next(o2_saved_41)));        _condtional_value_X305;        })        ){
            info->undefined_array_num_var=(_Bool)1;
            name_43=((char*)(__right_value142=list$1char$ph_operator_load_element(fun->mParamNames,i_40)));
            (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str_44=(char*)come_increment_ref_count(make_define_var(it_42,name_43,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output,str_44);
            if(({            (_condtional_value_X306=(i_40==list$1sType$ph_length(fun->mParamTypes)-1));            _condtional_value_X306;            })) {
                if(({                (_condtional_value_X307=(fun->mVarArgs));                _condtional_value_X307;                })) {
                    buffer_append_str(output,", ...");
                }
            }
            else {
                buffer_append_str(output,", ");
            }
            i_40++;
            info->undefined_array_num_var=(_Bool)0;
            (str_44 = come_decrement_ref_count(str_44, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(output,")");
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value144=buffer_to_string(output))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X308=(string_operator_not_equals(fun->mFunAttribute,"")&&gComeBareMetal));        _condtional_value_X308;        })) {
            buffer_append_str(info->module->mSourceHead,((char*)(__right_value146=xsprintf(" \%s;\n",((char*)(__right_value145=string_to_string(fun->mFunAttribute)))))));
            (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            buffer_append_str(info->module->mSourceHead,";\n");
        }
        (result_type_str_39 = come_decrement_ref_count(result_type_str_39, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    buffer_append_str(output,"{\n");
    buffer_append_str(output,((char*)(__right_value147=buffer_to_string(fun->mSourceHead))));
    (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    buffer_append_str(output,((char*)(__right_value148=buffer_to_string(fun->mSourceHead2))));
    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    buffer_append_str(output,((char*)(__right_value149=buffer_to_string(fun->mSource))));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    buffer_append_str(output,"}\n");
    __result_obj__61 = (char*)come_increment_ref_count(((char*)(__right_value150=buffer_to_string(output))));
    come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__61;
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct buffer* output;
_Bool _condtional_value_X309;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct buffer* output2;
int i;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X310;
_Bool _condtional_value_X311;
_Bool _condtional_value_X312;
void* __right_value155 = (void*)0;
char* name;
void* __right_value156 = (void*)0;
char* str;
_Bool _condtional_value_X313;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
char* str_45;
_Bool _condtional_value_X314;
_Bool _condtional_value_X315;
_Bool _condtional_value_X316;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
_Bool _condtional_value_X317;
struct sType* base_result_type;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct list$1sNode$ph* __dec_obj39;
void* __right_value163 = (void*)0;
char* result_type_str;
_Bool _condtional_value_X318;
_Bool _condtional_value_X319;
int i_46;
struct list$1sType$ph* o2_saved_47;
struct sType* it_48;
_Bool _condtional_value_X320;
_Bool _condtional_value_X321;
_Bool _condtional_value_X322;
void* __right_value164 = (void*)0;
char* name_49;
void* __right_value165 = (void*)0;
char* str_50;
_Bool _condtional_value_X323;
_Bool _condtional_value_X324;
void* __right_value166 = (void*)0;
struct sNode* node;
_Bool _condtional_value_X325;
void* __right_value167 = (void*)0;
char* __result_obj__62;
void* __right_value168 = (void*)0;
struct CVALUE* cvalue;
_Bool _condtional_value_X326;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
char* result_type_str_51;
_Bool _condtional_value_X327;
_Bool _condtional_value_X328;
int i_52;
struct list$1sType$ph* o2_saved_53;
struct sType* it_54;
_Bool _condtional_value_X329;
_Bool _condtional_value_X330;
_Bool _condtional_value_X331;
void* __right_value172 = (void*)0;
char* name_55;
void* __right_value173 = (void*)0;
char* str_56;
_Bool _condtional_value_X332;
_Bool _condtional_value_X333;
_Bool _condtional_value_X334;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
char* __result_obj__63;
    output=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 720, "struct buffer*"))));
    if(({    (_condtional_value_X309=(fun->mResultType->mResultType));    _condtional_value_X309;    })) {
        output2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 723, "struct buffer*"))));
        buffer_append_str(output2,fun->mName);
        buffer_append_str(output2,"(");
        i=0;
        for(        ({        (_condtional_value_X310=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),it=list$1sType$ph_begin(o2_saved)));        _condtional_value_X310;        });        ({        (_condtional_value_X311=(!list$1sType$ph_end(o2_saved)));        _condtional_value_X311;        });        ({        (_condtional_value_X312=(it=list$1sType$ph_next(o2_saved)));        _condtional_value_X312;        })        ){
            info->undefined_array_num_var=(_Bool)1;
            name=((char*)(__right_value155=list$1char$ph_operator_load_element(fun->mParamNames,i)));
            (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str=(char*)come_increment_ref_count(make_define_var(it,name,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output2,str);
            if(({            (_condtional_value_X313=(i!=list$1sType$ph_length(fun->mParamTypes)-1));            _condtional_value_X313;            })) {
                buffer_append_str(output2,", ");
            }
            i++;
            info->undefined_array_num_var=(_Bool)0;
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(output2,")");
        str_45=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value157=buffer_to_string(output2))),info));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(({        (_condtional_value_X314=(fun->mStatic));        _condtional_value_X314;        })) {
            buffer_append_str(output,"static ");
        }
        if(({        (_condtional_value_X315=(fun->mInline));        _condtional_value_X315;        })) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,str_45);
        if(({        (_condtional_value_X316=(string_operator_not_equals(fun->mFunAttribute,"")&&gComeBareMetal));        _condtional_value_X316;        })) {
            buffer_append_str(output,((char*)(__right_value160=xsprintf(" \%s ",((char*)(__right_value159=string_to_string(fun->mFunAttribute)))))));
            (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        buffer_append_str(output,";\n");
        come_call_finalizer(buffer_finalize, output2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (str_45 = come_decrement_ref_count(str_45, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(({    (_condtional_value_X317=(list$1sNode$ph_length(fun->mResultType->mArrayNum)>0));    _condtional_value_X317;    })) {
        base_result_type=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj39=base_result_type->mArrayNum,
        base_result_type->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 762, "struct list$1sNode$ph*"))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type_str=(char*)come_increment_ref_count(make_type_name_string(base_result_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0));
        if(({        (_condtional_value_X318=(fun->mStatic));        _condtional_value_X318;        })) {
            buffer_append_str(output,"static ");
        }
        if(({        (_condtional_value_X319=(fun->mInline));        _condtional_value_X319;        })) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,result_type_str);
        buffer_append_str(output," (*");
        buffer_append_str(output,fun->mName);
        buffer_append_str(output,"(");
        i_46=0;
        for(        ({        (_condtional_value_X320=(o2_saved_47=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),it_48=list$1sType$ph_begin(o2_saved_47)));        _condtional_value_X320;        });        ({        (_condtional_value_X321=(!list$1sType$ph_end(o2_saved_47)));        _condtional_value_X321;        });        ({        (_condtional_value_X322=(it_48=list$1sType$ph_next(o2_saved_47)));        _condtional_value_X322;        })        ){
            info->undefined_array_num_var=(_Bool)1;
            name_49=((char*)(__right_value164=list$1char$ph_operator_load_element(fun->mParamNames,i_46)));
            (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            str_50=(char*)come_increment_ref_count(make_define_var(it_48,name_49,(_Bool)0,(_Bool)0,info,(_Bool)0));
            buffer_append_str(output,str_50);
            if(({            (_condtional_value_X323=(i_46==list$1sType$ph_length(fun->mParamTypes)-1));            _condtional_value_X323;            })) {
                if(({                (_condtional_value_X324=(fun->mVarArgs));                _condtional_value_X324;                })) {
                    buffer_append_str(output,", ...");
                }
            }
            else {
                buffer_append_str(output,", ");
            }
            i_46++;
            info->undefined_array_num_var=(_Bool)0;
            (str_50 = come_decrement_ref_count(str_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        node=((struct sNode*)(__right_value166=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value166) ? __right_value166 = come_decrement_ref_count(__right_value166, ((struct sNode*)__right_value166)->finalize, ((struct sNode*)__right_value166)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        if(({        (_condtional_value_X325=(!node_compile(node,info)));        _condtional_value_X325;        })) {
            err_msg(info,"invalid array number");
            __result_obj__62 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
            come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__62;
        }
        cvalue=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output,"))[%s]",cvalue->c_value);
        if(({        (_condtional_value_X326=(string_operator_not_equals(fun->mAttribute,"")&&gComeBareMetal));        _condtional_value_X326;        })) {
            buffer_append_str(output,((char*)(__right_value170=xsprintf("\%s ",((char*)(__right_value169=string_to_string(fun->mAttribute)))))));
            (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        buffer_append_format(output,";\n");
        come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        result_type_str_51=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0));
        if(({        (_condtional_value_X327=(fun->mStatic));        _condtional_value_X327;        })) {
            buffer_append_str(output,"static ");
        }
        if(({        (_condtional_value_X328=(fun->mInline));        _condtional_value_X328;        })) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,result_type_str_51);
        buffer_append_str(output," ");
        buffer_append_str(output,fun->mName);
        buffer_append_str(output,"(");
        i_52=0;
        for(        ({        (_condtional_value_X329=(o2_saved_53=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),it_54=list$1sType$ph_begin(o2_saved_53)));        _condtional_value_X329;        });        ({        (_condtional_value_X330=(!list$1sType$ph_end(o2_saved_53)));        _condtional_value_X330;        });        ({        (_condtional_value_X331=(it_54=list$1sType$ph_next(o2_saved_53)));        _condtional_value_X331;        })        ){
            info->undefined_array_num_var=(_Bool)1;
            name_55=((char*)(__right_value172=list$1char$ph_operator_load_element(fun->mParamNames,i_52)));
            (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->undefined_array_num_var=(_Bool)1;
            str_56=(char*)come_increment_ref_count(make_define_var(it_54,name_55,(_Bool)0,(_Bool)0,info,(_Bool)0));
            info->undefined_array_num_var=(_Bool)0;
            buffer_append_str(output,str_56);
            if(({            (_condtional_value_X332=(i_52==list$1sType$ph_length(fun->mParamTypes)-1));            _condtional_value_X332;            })) {
                if(({                (_condtional_value_X333=(fun->mVarArgs));                _condtional_value_X333;                })) {
                    buffer_append_str(output,", ...");
                }
            }
            else {
                buffer_append_str(output,", ");
            }
            i_52++;
            info->undefined_array_num_var=(_Bool)0;
            (str_56 = come_decrement_ref_count(str_56, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(({        (_condtional_value_X334=(string_operator_not_equals(fun->mFunAttribute,"")&&gComeBareMetal));        _condtional_value_X334;        })) {
            buffer_append_str(output,((char*)(__right_value175=xsprintf(") \%s;\n",((char*)(__right_value174=string_to_string(fun->mFunAttribute)))))));
            (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            buffer_append_str(output,");\n");
        }
        (result_type_str_51 = come_decrement_ref_count(result_type_str_51, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__63 = (char*)come_increment_ref_count(((char*)(__right_value176=buffer_to_string(output))));
    come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__63 = come_decrement_ref_count(__result_obj__63, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__63;
}

static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct buffer* output;
void* __right_value179 = (void*)0;
char* result_type_str;
_Bool _condtional_value_X335;
int i;
_Bool _condtional_value_X336;
_Bool _condtional_value_X337;
_Bool _condtional_value_X338;
void* __right_value180 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X339;
void* __right_value181 = (void*)0;
struct CVALUE* cvalue;
int i_57;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X340;
_Bool _condtional_value_X341;
_Bool _condtional_value_X342;
void* __right_value182 = (void*)0;
char* name_58;
void* __right_value183 = (void*)0;
char* str;
_Bool _condtional_value_X343;
_Bool _condtional_value_X344;
_Bool _condtional_value_X345;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
char* __result_obj__64;
    output=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 863, "struct buffer*"))));
    result_type_str=(char*)come_increment_ref_count(make_type_name_string(lambda_type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0));
    buffer_append_str(output,result_type_str);
    buffer_append_str(output," ");
    buffer_append_str(output,name);
    if(({    (_condtional_value_X335=(list$1sNode$ph_length(lambda_type->mArrayNum)>0));    _condtional_value_X335;    })) {
        for(        ({        (_condtional_value_X336=(i=0));        _condtional_value_X336;        });        ({        (_condtional_value_X337=(i<list$1sNode$ph_length(lambda_type->mArrayNum)));        _condtional_value_X337;        });        ({        (_condtional_value_X338=(i++));        _condtional_value_X338;        })        ){
            buffer_append_str(output,"[");
            node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(lambda_type->mArrayNum,i));
            Value=node_compile(node,info);
            if(({            (_condtional_value_X339=(!Value));            _condtional_value_X339;            })) {
                err_msg(info,"invalid array num");
                exit(2);
            }
            else {
            }
            cvalue=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(output,"%s",cvalue->c_value);
            buffer_append_str(output,"]");
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    buffer_append_str(output,"(");
    i_57=0;
    for(    ({    (_condtional_value_X340=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(lambda_type->mParamTypes),it=list$1sType$ph_begin(o2_saved)));    _condtional_value_X340;    });    ({    (_condtional_value_X341=(!list$1sType$ph_end(o2_saved)));    _condtional_value_X341;    });    ({    (_condtional_value_X342=(it=list$1sType$ph_next(o2_saved)));    _condtional_value_X342;    })    ){
        info->undefined_array_num_var=(_Bool)1;
        name_58=((char*)(__right_value182=list$1char$ph_operator_load_element(lambda_type->mParamNames,i_57)));
        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        str=(char*)come_increment_ref_count(make_define_var(it,name_58,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_str(output,str);
        if(({        (_condtional_value_X343=(i_57==list$1sType$ph_length(lambda_type->mParamTypes)-1));        _condtional_value_X343;        })) {
            if(({            (_condtional_value_X344=(lambda_type->mVarArgs));            _condtional_value_X344;            })) {
                buffer_append_str(output,", ...");
            }
        }
        else {
            buffer_append_str(output,", ");
        }
        i_57++;
        info->undefined_array_num_var=(_Bool)0;
        (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(({    (_condtional_value_X345=(lambda_type->mAttribute));    _condtional_value_X345;    })) {
        buffer_append_str(output,((char*)(__right_value186=string_operator_add(((char*)(__right_value185=charp_operator_add(" ",lambda_type->mAttribute))),");\n"))));
        (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        buffer_append_str(output,");\n");
    }
    __result_obj__64 = (char*)come_increment_ref_count(((char*)(__right_value187=buffer_to_string(output))));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__64;
}

void add_come_code(struct sInfo* info, const char* msg, ...){
_Bool _condtional_value_X346;
char* msg2;
va_list args;
int len;
_Bool _condtional_value_X347;
int i;
_Bool _condtional_value_X348;
_Bool _condtional_value_X349;
_Bool _condtional_value_X350;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
msg2 = (void*)0;
memset(&args, 0, sizeof(va_list));
memset(&i, 0, sizeof(int));
    if(({    (_condtional_value_X346=(info->no_output_come_code));    _condtional_value_X346;    })) {
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    if(({    (_condtional_value_X347=(info->come_fun));    _condtional_value_X347;    })) {
        for(        ({        (_condtional_value_X348=(i=0));        _condtional_value_X348;        });        ({        (_condtional_value_X349=(i<info->block_level));        _condtional_value_X349;        });        ({        (_condtional_value_X350=(i++));        _condtional_value_X350;        })        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(__right_value188=xsprintf("%s",msg2))));
        (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value189=xsprintf("%s",msg2))));
        (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    free(msg2);
}

void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...){
_Bool _condtional_value_X351;
_Bool _condtional_value_X352;
char* msg2;
va_list args;
int len;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
_Bool _condtional_value_X363;
void* __right_value193 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
msg2 = (void*)0;
memset(&args, 0, sizeof(va_list));
    if(({    (_condtional_value_X351=(info->no_output_come_code));    _condtional_value_X351;    })) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return;
    }
    if(({    (_condtional_value_X352=(string_operator_equals(info->sname_at_head,info->base_sname)));    _condtional_value_X352;    })) {
        __builtin_va_start(args,msg);
        len=vasprintf(&msg2,msg,args);
        __builtin_va_end(args);
        if(({        (_condtional_value_X363=(((char*)(__right_value192=map$2char$phchar$ph_operator_load_element(info->module->mHeader,((char*)(__right_value191=__builtin_string(id))))))==((void*)0)));        (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        _condtional_value_X363;        })) {
            map$2char$phchar$ph_operator_store_element(info->module->mHeader,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2)));
            (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        free(msg2);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X353;
_Bool _condtional_value_X354;
_Bool _condtional_value_X355;
char* __result_obj__65;
_Bool _condtional_value_X356;
_Bool _condtional_value_X357;
char* __result_obj__66;
char* __result_obj__67;
char* __result_obj__68;
default_value = (void*)0;
    memset(&default_value,0,sizeof(char*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X353=((_Bool)1));    _condtional_value_X353;    })) {
        if(({        (_condtional_value_X354=(self->item_existance[it]));        _condtional_value_X354;        })) {
            if(({            (_condtional_value_X355=(string_equals(self->keys[it],key)));            _condtional_value_X355;            })) {
                __result_obj__65 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__65 = come_decrement_ref_count(__result_obj__65, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__65;
            }
            it++;
            if(({            (_condtional_value_X356=(it>=self->size));            _condtional_value_X356;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X357=(it==hash));            _condtional_value_X357;            })) {
                __result_obj__66 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__66;
            }
        }
        else {
            __result_obj__67 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__67 = come_decrement_ref_count(__result_obj__67, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__67;
        }
    }
    __result_obj__68 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__68;
}

static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X358;
_Bool _condtional_value_X359;
_Bool _condtional_value_X360;
char* __result_obj__69;
_Bool _condtional_value_X361;
_Bool _condtional_value_X362;
char* __result_obj__70;
char* __result_obj__71;
char* __result_obj__72;
default_value = (void*)0;
    memset(&default_value,0,sizeof(char*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X358=((_Bool)1));    _condtional_value_X358;    })) {
        if(({        (_condtional_value_X359=(self->item_existance[it]));        _condtional_value_X359;        })) {
            if(({            (_condtional_value_X360=(string_equals(self->keys[it],key)));            _condtional_value_X360;            })) {
                __result_obj__69 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__69 = come_decrement_ref_count(__result_obj__69, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__69;
            }
            it++;
            if(({            (_condtional_value_X361=(it>=self->size));            _condtional_value_X361;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X362=(it==hash));            _condtional_value_X362;            })) {
                __result_obj__70 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__70 = come_decrement_ref_count(__result_obj__70, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__70;
            }
        }
        else {
            __result_obj__71 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__71;
        }
    }
    __result_obj__72 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__72;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
_Bool _condtional_value_X364;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X381;
_Bool _condtional_value_X382;
_Bool _condtional_value_X383;
_Bool _condtional_value_X384;
_Bool _condtional_value_X409;
_Bool _condtional_value_X410;
_Bool _condtional_value_X411;
_Bool _condtional_value_X412;
_Bool _condtional_value_X413;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X416;
_Bool _condtional_value_X417;
_Bool _condtional_value_X420;
_Bool _condtional_value_X421;
_Bool _condtional_value_X422;
struct map$2char$phchar$ph* __result_obj__94;
    if(({    (_condtional_value_X364=(self->len*10>=self->size));    _condtional_value_X364;    })) {
        map$2char$phchar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X381=((_Bool)1));    _condtional_value_X381;    })) {
        if(({        (_condtional_value_X382=(self->item_existance[it]));        _condtional_value_X382;        })) {
            if(({            (_condtional_value_X383=(string_equals(self->keys[it],key)));            _condtional_value_X383;            })) {
                if(({                (_condtional_value_X384=(1));                _condtional_value_X384;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X409=(1));                _condtional_value_X409;                })) {
                    (self->items[it] = come_decrement_ref_count(self->items[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->items[it]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X410=(it>=self->size));            _condtional_value_X410;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X411=(it==hash));            _condtional_value_X411;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X412=(1));            _condtional_value_X412;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X413=(1));            _condtional_value_X413;            })) {
                self->items[it]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X416=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X416;    });    ({    (_condtional_value_X417=(!list$1char$ph_end(self->key_list)));    _condtional_value_X417;    });    ({    (_condtional_value_X420=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X420;    })    ){
        if(({        (_condtional_value_X421=(string_equals(it2,key)));        _condtional_value_X421;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X422=(!same_key_exist));    _condtional_value_X422;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__94 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__94;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size;
void* __right_value194 = (void*)0;
char** keys;
void* __right_value195 = (void*)0;
char** items;
void* __right_value196 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X367;
_Bool _condtional_value_X368;
_Bool _condtional_value_X371;
char* default_value;
void* __right_value197 = (void*)0;
char* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X377;
_Bool _condtional_value_X378;
_Bool _condtional_value_X379;
_Bool _condtional_value_X380;
char* default_value_61;
void* __right_value198 = (void*)0;
default_value = (void*)0;
default_value_61 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value194=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "char**"))));
    items=(char**)come_increment_ref_count(((char**)(__right_value195=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2213, "char**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value196=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2214, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X367=(it=map$2char$phchar$ph_begin(self)));    _condtional_value_X367;    });    ({    (_condtional_value_X368=(!map$2char$phchar$ph_end(self)));    _condtional_value_X368;    });    ({    (_condtional_value_X371=(it=map$2char$phchar$ph_next(self)));    _condtional_value_X371;    })    ){
        memset(&default_value,0,sizeof(char*));
        it2=((char*)(__right_value197=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value))));
        (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X377=((_Bool)1));        _condtional_value_X377;        })) {
            if(({            (_condtional_value_X378=(item_existance[n]));            _condtional_value_X378;            })) {
                n++;
                if(({                (_condtional_value_X379=(n>=size));                _condtional_value_X379;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X380=(n==hash));                _condtional_value_X380;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((char*)(__right_value198=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value_61))));
                (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                len++;
                (default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
                (default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
_Bool _condtional_value_X365;
char* result;
char* __result_obj__73;
_Bool _condtional_value_X366;
char* __result_obj__74;
char* result_59;
char* __result_obj__75;
result = (void*)0;
result_59 = (void*)0;
    if(({    (_condtional_value_X365=(self==((void*)0)));    _condtional_value_X365;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__73 = result;
        return __result_obj__73;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X366=(self->key_list->it));    _condtional_value_X366;    })) {
        __result_obj__74 = self->key_list->it->item;
        return __result_obj__74;
    }
    memset(&result_59,0,sizeof(char*));
    __result_obj__75 = result_59;
    return __result_obj__75;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
_Bool _condtional_value_X369;
char* result;
char* __result_obj__76;
_Bool _condtional_value_X370;
char* __result_obj__77;
char* result_60;
char* __result_obj__78;
result = (void*)0;
result_60 = (void*)0;
    if(({    (_condtional_value_X369=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X369;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__76 = result;
        return __result_obj__76;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X370=(self->key_list->it));    _condtional_value_X370;    })) {
        __result_obj__77 = self->key_list->it->item;
        return __result_obj__77;
    }
    memset(&result_60,0,sizeof(char*));
    __result_obj__78 = result_60;
    return __result_obj__78;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X372;
_Bool _condtional_value_X373;
_Bool _condtional_value_X374;
char* __result_obj__79;
_Bool _condtional_value_X375;
_Bool _condtional_value_X376;
char* __result_obj__80;
char* __result_obj__81;
char* __result_obj__82;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X372=((_Bool)1));    _condtional_value_X372;    })) {
        if(({        (_condtional_value_X373=(self->item_existance[it]));        _condtional_value_X373;        })) {
            if(({            (_condtional_value_X374=(string_equals(self->keys[it],key)));            _condtional_value_X374;            })) {
                __result_obj__79 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__79 = come_decrement_ref_count(__result_obj__79, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__79;
            }
            it++;
            if(({            (_condtional_value_X375=(it>=self->size));            _condtional_value_X375;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X376=(it==hash));            _condtional_value_X376;            })) {
                __result_obj__80 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__80;
            }
        }
        else {
            __result_obj__81 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__81;
        }
    }
    __result_obj__82 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__82;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
_Bool _condtional_value_X385;
_Bool _condtional_value_X386;
struct list$1char$ph* __result_obj__86;
    it2=0;
    it=self->head;
    while(({    (_condtional_value_X385=(it!=((void*)0)));    _condtional_value_X385;    })) {
        if(({        (_condtional_value_X386=(string_equals(it->item,item)));        _condtional_value_X386;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__86 = self;
    return __result_obj__86;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _condtional_value_X387;
_Bool _condtional_value_X388;
_Bool _condtional_value_X389;
int tmp;
_Bool _condtional_value_X390;
_Bool _condtional_value_X391;
_Bool _condtional_value_X392;
struct list$1char$ph* __result_obj__83;
_Bool _condtional_value_X393;
_Bool _condtional_value_X395;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X396;
_Bool _condtional_value_X397;
struct list_item$1char$ph* prev_it;
_Bool _condtional_value_X398;
_Bool _condtional_value_X399;
struct list_item$1char$ph* it_62;
int i_63;
_Bool _condtional_value_X400;
_Bool _condtional_value_X401;
_Bool _condtional_value_X402;
struct list_item$1char$ph* prev_it_64;
struct list_item$1char$ph* it_65;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_66;
_Bool _condtional_value_X403;
_Bool _condtional_value_X404;
_Bool _condtional_value_X405;
_Bool _condtional_value_X406;
struct list_item$1char$ph* prev_it_67;
_Bool _condtional_value_X407;
_Bool _condtional_value_X408;
struct list$1char$ph* __result_obj__85;
    if(({    (_condtional_value_X387=(head<0));    _condtional_value_X387;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X388=(tail<0));    _condtional_value_X388;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X389=(head>tail));    _condtional_value_X389;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X390=(head<0));    _condtional_value_X390;    })) {
        head=0;
    }
    if(({    (_condtional_value_X391=(tail>self->len));    _condtional_value_X391;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X392=(head==tail));    _condtional_value_X392;    })) {
        __result_obj__83 = self;
        return __result_obj__83;
    }
    if(({    (_condtional_value_X393=(head==0&&tail==self->len));    _condtional_value_X393;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_condtional_value_X395=(head==0));    _condtional_value_X395;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X396=(it!=((void*)0)));        _condtional_value_X396;        })) {
            if(({            (_condtional_value_X397=(i<tail));            _condtional_value_X397;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X398=(i==tail));            _condtional_value_X398;            })) {
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
    else if(({    (_condtional_value_X399=(tail==self->len));    _condtional_value_X399;    })) {
        it_62=self->head;
        i_63=0;
        while(({        (_condtional_value_X400=(it_62!=((void*)0)));        _condtional_value_X400;        })) {
            if(({            (_condtional_value_X401=(i_63==head));            _condtional_value_X401;            })) {
                self->tail=it_62->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X402=(i_63>=head));            _condtional_value_X402;            })) {
                prev_it_64=it_62;
                it_62=it_62->next;
                i_63++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_62=it_62->next;
                i_63++;
            }
        }
    }
    else {
        it_65=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_66=0;
        while(({        (_condtional_value_X403=(it_65!=((void*)0)));        _condtional_value_X403;        })) {
            if(({            (_condtional_value_X404=(i_66==head));            _condtional_value_X404;            })) {
                head_prev_it=it_65->prev;
            }
            if(({            (_condtional_value_X405=(i_66==tail));            _condtional_value_X405;            })) {
                tail_it=it_65;
            }
            if(({            (_condtional_value_X406=(i_66>=head&&i_66<tail));            _condtional_value_X406;            })) {
                prev_it_67=it_65;
                it_65=it_65->next;
                i_66++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_65=it_65->next;
                i_66++;
            }
        }
        if(({        (_condtional_value_X407=(head_prev_it!=((void*)0)));        _condtional_value_X407;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X408=(tail_it!=((void*)0)));        _condtional_value_X408;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__85 = self;
    return __result_obj__85;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X394;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__84;
    it=self->head;
    while(({    (_condtional_value_X394=(it!=((void*)0)));    _condtional_value_X394;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__84 = self;
    return __result_obj__84;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _condtional_value_X414;
char* result;
char* __result_obj__87;
_Bool _condtional_value_X415;
char* __result_obj__88;
char* result_68;
char* __result_obj__89;
result = (void*)0;
result_68 = (void*)0;
    if(({    (_condtional_value_X414=(self==((void*)0)));    _condtional_value_X414;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__87 = result;
        return __result_obj__87;
    }
    self->it=self->head;
    if(({    (_condtional_value_X415=(self->it));    _condtional_value_X415;    })) {
        __result_obj__88 = self->it->item;
        return __result_obj__88;
    }
    memset(&result_68,0,sizeof(char*));
    __result_obj__89 = result_68;
    return __result_obj__89;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _condtional_value_X418;
char* result;
char* __result_obj__90;
_Bool _condtional_value_X419;
char* __result_obj__91;
char* result_69;
char* __result_obj__92;
result = (void*)0;
result_69 = (void*)0;
    if(({    (_condtional_value_X418=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X418;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__90 = result;
        return __result_obj__90;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X419=(self->it));    _condtional_value_X419;    })) {
        __result_obj__91 = self->it->item;
        return __result_obj__91;
    }
    memset(&result_69,0,sizeof(char*));
    __result_obj__92 = result_69;
    return __result_obj__92;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X423;
void* __right_value199 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj40;
_Bool _condtional_value_X424;
void* __right_value200 = (void*)0;
struct list_item$1char$ph* litem_70;
char* __dec_obj41;
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_71;
char* __dec_obj42;
struct list$1char$ph* __result_obj__93;
    if(({    (_condtional_value_X423=(self->len==0));    _condtional_value_X423;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value199=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj40=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X424=(self->len==1));    _condtional_value_X424;    })) {
        litem_70=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value200=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_70->prev=self->head;
        litem_70->next=((void*)0);
        __dec_obj41=litem_70->item,
        litem_70->item=(char*)come_increment_ref_count(item);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_70;
        self->head->next=litem_70;
    }
    else {
        litem_71=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_71->prev=self->tail;
        litem_71->next=((void*)0);
        __dec_obj42=litem_71->item,
        litem_71->item=(char*)come_increment_ref_count(item);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_71;
        self->tail=litem_71;
    }
    self->len++;
    __result_obj__93 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__93;
}

void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...){
_Bool _condtional_value_X425;
_Bool _condtional_value_X426;
char* msg2;
va_list args;
int len;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
_Bool _condtional_value_X427;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
msg2 = (void*)0;
memset(&args, 0, sizeof(va_list));
    if(({    (_condtional_value_X425=(info->no_output_come_code));    _condtional_value_X425;    })) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return;
    }
    if(({    (_condtional_value_X426=(string_operator_equals(info->sname_at_head,info->base_sname)));    _condtional_value_X426;    })) {
        __builtin_va_start(args,msg);
        len=vasprintf(&msg2,msg,args);
        __builtin_va_end(args);
        if(({        (_condtional_value_X427=(((char*)(__right_value207=map$2char$phchar$ph_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value206=__builtin_string(id))))))==((void*)0)));        (__right_value205 = come_decrement_ref_count(__right_value205, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value206 = come_decrement_ref_count(__right_value206, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        _condtional_value_X427;        })) {
            map$2char$phchar$ph_operator_store_element(info->module->mHeaderStructs,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2)));
            (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        free(msg2);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

_Bool is_contained_generics_funcstion(struct sFun* fun, struct sInfo* info){
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _condtional_value_X428;
_Bool _condtional_value_X429;
_Bool _condtional_value_X430;
void* __right_value212 = (void*)0;
struct sType* type;
_Bool _condtional_value_X431;
struct sType* __dec_obj43;
_Bool _condtional_value_X432;
_Bool __result_obj__95;
struct sType* result_type;
_Bool _condtional_value_X433;
struct sType* __dec_obj44;
_Bool _condtional_value_X434;
_Bool __result_obj__96;
_Bool __result_obj__97;
    for(    ({    (_condtional_value_X428=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),it=list$1sType$ph_begin(o2_saved)));    _condtional_value_X428;    });    ({    (_condtional_value_X429=(!list$1sType$ph_end(o2_saved)));    _condtional_value_X429;    });    ({    (_condtional_value_X430=(it=list$1sType$ph_next(o2_saved)));    _condtional_value_X430;    })    ){
        type=(struct sType*)come_increment_ref_count(sType_clone(it));
        if(({        (_condtional_value_X431=(type->mNoSolvedGenericsType));        _condtional_value_X431;        })) {
            __dec_obj43=type,
            type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
            come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(({        (_condtional_value_X432=(is_contained_generics_class(type,info)));        _condtional_value_X432;        })) {
            __result_obj__95 = (_Bool)1;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__95;
        }
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    result_type=(struct sType*)come_increment_ref_count(fun->mResultType);
    if(({    (_condtional_value_X433=(result_type->mNoSolvedGenericsType));    _condtional_value_X433;    })) {
        __dec_obj44=result_type,
        result_type=(struct sType*)come_increment_ref_count(result_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X434=(is_contained_generics_class(result_type,info)));    _condtional_value_X434;    })) {
        __result_obj__96 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__96;
    }
    __result_obj__97 = (_Bool)0;
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__97;
}

_Bool output_source_file(struct sInfo* info){
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct sFun* main_fun;
_Bool main_module;
_Bool _condtional_value_X469;
_Bool _condtional_value_X470;
_Bool _condtional_value_X471;
struct map$2char$phsFun$ph* o2_saved;
char* it;
_Bool _condtional_value_X474;
_Bool _condtional_value_X475;
_Bool _condtional_value_X478;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct sFun* it2;
void* __right_value219 = (void*)0;
struct sFun* new_fun;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
char* output_file_name;
struct __sFILE* f;
_Bool _condtional_value_X516;
_Bool __exception_result_var_b1;
struct map$2char$phbuffer$ph* o2_saved_76;
char* it_78;
_Bool _condtional_value_X519;
_Bool _condtional_value_X520;
_Bool _condtional_value_X523;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct buffer* buf;
void* __right_value230 = (void*)0;
struct map$2char$phbuffer$ph* o2_saved_81;
char* it_82;
_Bool _condtional_value_X544;
_Bool _condtional_value_X545;
_Bool _condtional_value_X546;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct buffer* buf_83;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct map$2char$phsFun$ph* o2_saved_84;
char* it_85;
_Bool _condtional_value_X547;
_Bool _condtional_value_X548;
_Bool _condtional_value_X549;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct sFun* it2_86;
_Bool contained_generics;
_Bool _condtional_value_X550;
void* __right_value239 = (void*)0;
char* header;
_Bool _condtional_value_X551;
_Bool _condtional_value_X552;
_Bool _condtional_value_X553;
struct map$2char$phchar$ph* o2_saved_87;
char* it_88;
_Bool _condtional_value_X554;
_Bool _condtional_value_X555;
_Bool _condtional_value_X556;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
char* str;
struct map$2char$phsFun$ph* o2_saved_90;
char* it_91;
_Bool _condtional_value_X567;
_Bool _condtional_value_X568;
_Bool _condtional_value_X569;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sFun* it2_92;
_Bool contained_generics_93;
_Bool _condtional_value_X570;
_Bool _condtional_value_X571;
void* __right_value246 = (void*)0;
char* output;
struct map$2char$phsFun$ph* o2_saved_94;
char* it_95;
_Bool _condtional_value_X572;
_Bool _condtional_value_X573;
_Bool _condtional_value_X574;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct sFun* it2_96;
_Bool contained_generics_97;
_Bool _condtional_value_X575;
_Bool _condtional_value_X576;
_Bool _condtional_value_X577;
_Bool _condtional_value_X578;
void* __right_value250 = (void*)0;
char* output_98;
_Bool __result_obj__131;
    main_fun=((struct sFun*)(__right_value215=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value214=xsprintf("main"))))));
    (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value215, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    main_module=(_Bool)0;
    if(({    (_condtional_value_X469=(main_fun));    _condtional_value_X469;    })) {
        if(({        (_condtional_value_X470=(!main_fun->mExternal));        _condtional_value_X470;        })) {
            main_module=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X471=(main_module));    _condtional_value_X471;    })) {
        for(        ({        (_condtional_value_X474=(o2_saved=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->uniq_funcs),it=map$2char$phsFun$ph_begin(o2_saved)));        _condtional_value_X474;        });        ({        (_condtional_value_X475=(!map$2char$phsFun$ph_end(o2_saved)));        _condtional_value_X475;        });        ({        (_condtional_value_X478=(it=map$2char$phsFun$ph_next(o2_saved)));        _condtional_value_X478;        })        ){
            it2=((struct sFun*)(__right_value218=map$2char$phsFun$ph_operator_load_element(info->uniq_funcs,((char*)(__right_value217=__builtin_string(it))))));
            (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value217 = come_decrement_ref_count(__right_value217, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value218, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            new_fun=(struct sFun*)come_increment_ref_count(compile_uniq_function(it2,info));
            map$2char$phsFun$ph_put(info->funcs,(char*)come_increment_ref_count(__builtin_string(it)),(struct sFun*)come_increment_ref_count(new_fun));
            come_call_finalizer(sFun_finalize, new_fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    output_file_name=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    f=fopen(output_file_name,"w");
    if(({    (_condtional_value_X516=(f==((void*)0)));    _condtional_value_X516;    })) {
        (come_push_stackframe("03output_code.c", 1036, 0),__exception_result_var_b1=die("fopen"), come_pop_stackframe(), __exception_result_var_b1);
    }
    fprintf(f,"/// previous struct definition ///\n");
    for(    ({    (_condtional_value_X519=(o2_saved_76=(struct map$2char$phbuffer$ph*)come_increment_ref_count(info->previous_struct_definition),it_78=map$2char$phbuffer$ph_begin(o2_saved_76)));    _condtional_value_X519;    });    ({    (_condtional_value_X520=(!map$2char$phbuffer$ph_end(o2_saved_76)));    _condtional_value_X520;    });    ({    (_condtional_value_X523=(it_78=map$2char$phbuffer$ph_next(o2_saved_76)));    _condtional_value_X523;    })    ){
        buf=((struct buffer*)(__right_value229=map$2char$phbuffer$ph_operator_load_element(info->previous_struct_definition,((char*)(__right_value228=__builtin_string(it_78))))));
        (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value228 = come_decrement_ref_count(__right_value228, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, __right_value229, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        fprintf(f,"%s\n",((char*)(__right_value230=buffer_to_string(buf))));
        (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fprintf(f,"/// struct definition ///\n");
    for(    ({    (_condtional_value_X544=(o2_saved_81=(struct map$2char$phbuffer$ph*)come_increment_ref_count(info->struct_definition),it_82=map$2char$phbuffer$ph_begin(o2_saved_81)));    _condtional_value_X544;    });    ({    (_condtional_value_X545=(!map$2char$phbuffer$ph_end(o2_saved_81)));    _condtional_value_X545;    });    ({    (_condtional_value_X546=(it_82=map$2char$phbuffer$ph_next(o2_saved_81)));    _condtional_value_X546;    })    ){
        buf_83=((struct buffer*)(__right_value233=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value232=__builtin_string(it_82))))));
        (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, __right_value233, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        fprintf(f,"%s\n",((char*)(__right_value234=buffer_to_string(buf_83))));
        (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fprintf(f,"// source head\n");
    fprintf(f,"%s\n",((char*)(__right_value235=buffer_to_string(info->module->mSourceHead))));
    (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    fprintf(f,"// header function\n");
    for(    ({    (_condtional_value_X547=(o2_saved_84=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->funcs),it_85=map$2char$phsFun$ph_begin(o2_saved_84)));    _condtional_value_X547;    });    ({    (_condtional_value_X548=(!map$2char$phsFun$ph_end(o2_saved_84)));    _condtional_value_X548;    });    ({    (_condtional_value_X549=(it_85=map$2char$phsFun$ph_next(o2_saved_84)));    _condtional_value_X549;    })    ){
        it2_86=((struct sFun*)(__right_value238=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value237=__builtin_string(it_85))))));
        (__right_value236 = come_decrement_ref_count(__right_value236, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value238, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        contained_generics=is_contained_generics_funcstion(it2_86,info);
        if(({        (_condtional_value_X550=(!contained_generics));        _condtional_value_X550;        })) {
            header=(char*)come_increment_ref_count(header_function(it2_86,info));
            if(({            (_condtional_value_X551=(it2_86->mInline));            _condtional_value_X551;            })) {
            }
            else if(({            (_condtional_value_X552=(string_operator_not_equals(it_85,"__builtin_va_start")&&string_operator_not_equals(it_85,"__builtin_va_end")));            _condtional_value_X552;            })) {
                fprintf(f,"%s",header);
            }
            (header = come_decrement_ref_count(header, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fprintf(f,"// uniq global variable\n");
    if(({    (_condtional_value_X553=(main_module));    _condtional_value_X553;    })) {
        for(        ({        (_condtional_value_X554=(o2_saved_87=(struct map$2char$phchar$ph*)come_increment_ref_count(info->uniq_definition),it_88=map$2char$phchar$ph_begin(o2_saved_87)));        _condtional_value_X554;        });        ({        (_condtional_value_X555=(!map$2char$phchar$ph_end(o2_saved_87)));        _condtional_value_X555;        });        ({        (_condtional_value_X556=(it_88=map$2char$phchar$ph_next(o2_saved_87)));        _condtional_value_X556;        })        ){
            str=((char*)(__right_value242=map$2char$phchar$ph_operator_load_element(info->uniq_definition,((char*)(__right_value241=__builtin_string(it_88))))));
            (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            fprintf(f,"%s\n",str);
        }
        come_call_finalizer(map$2char$phchar$ph$p_finalize, o2_saved_87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    fprintf(f,"// inline function\n");
    for(    ({    (_condtional_value_X567=(o2_saved_90=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->funcs),it_91=map$2char$phsFun$ph_begin(o2_saved_90)));    _condtional_value_X567;    });    ({    (_condtional_value_X568=(!map$2char$phsFun$ph_end(o2_saved_90)));    _condtional_value_X568;    });    ({    (_condtional_value_X569=(it_91=map$2char$phsFun$ph_next(o2_saved_90)));    _condtional_value_X569;    })    ){
        it2_92=((struct sFun*)(__right_value245=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value244=__builtin_string(it_91))))));
        (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value244 = come_decrement_ref_count(__right_value244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value245, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        contained_generics_93=is_contained_generics_funcstion(it2_92,info);
        if(({        (_condtional_value_X570=(contained_generics_93));        _condtional_value_X570;        })) {
        }
        else if(({        (_condtional_value_X571=(it2_92->mInline));        _condtional_value_X571;        })) {
            output=(char*)come_increment_ref_count(output_function(it2_92,info));
            fprintf(f,"%s",output);
            (output = come_decrement_ref_count(output, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fprintf(f,"\n");
    fprintf(f,"// body function\n");
    for(    ({    (_condtional_value_X572=(o2_saved_94=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->funcs),it_95=map$2char$phsFun$ph_begin(o2_saved_94)));    _condtional_value_X572;    });    ({    (_condtional_value_X573=(!map$2char$phsFun$ph_end(o2_saved_94)));    _condtional_value_X573;    });    ({    (_condtional_value_X574=(it_95=map$2char$phsFun$ph_next(o2_saved_94)));    _condtional_value_X574;    })    ){
        it2_96=((struct sFun*)(__right_value249=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value248=__builtin_string(it_95))))));
        (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value248 = come_decrement_ref_count(__right_value248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value249, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        contained_generics_97=is_contained_generics_funcstion(it2_96,info);
        if(({        (_condtional_value_X575=(contained_generics_97));        _condtional_value_X575;        })) {
        }
        else if(({        (_condtional_value_X576=(it2_96->mExternal));        _condtional_value_X576;        })) {
        }
        else if(({        (_condtional_value_X577=(!main_module&&it2_96->mUniq));        _condtional_value_X577;        })) {
        }
        else if(({        (_condtional_value_X578=(it2_96->mInline));        _condtional_value_X578;        })) {
        }
        else {
            output_98=(char*)come_increment_ref_count(output_function(it2_96,info));
            fprintf(f,"%s",output_98);
            fprintf(f,"\n");
            (output_98 = come_decrement_ref_count(output_98, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fclose(f);
    __result_obj__131 = (_Bool)1;
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__131;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X435;
_Bool _condtional_value_X436;
_Bool _condtional_value_X437;
struct sFun* __result_obj__98;
_Bool _condtional_value_X462;
_Bool _condtional_value_X463;
struct sFun* __result_obj__99;
struct sFun* __result_obj__100;
struct sFun* __result_obj__101;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X435=((_Bool)1));    _condtional_value_X435;    })) {
        if(({        (_condtional_value_X436=(self->item_existance[it]));        _condtional_value_X436;        })) {
            if(({            (_condtional_value_X437=(string_equals(self->keys[it],key)));            _condtional_value_X437;            })) {
                __result_obj__98 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__98;
            }
            it++;
            if(({            (_condtional_value_X462=(it>=self->size));            _condtional_value_X462;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X463=(it==hash));            _condtional_value_X463;            })) {
                __result_obj__99 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__99;
            }
        }
        else {
            __result_obj__100 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__100;
        }
    }
    __result_obj__101 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static void sFun_finalize(struct sFun* self){
_Bool _condtional_value_X438;
_Bool _condtional_value_X439;
_Bool _condtional_value_X440;
_Bool _condtional_value_X441;
_Bool _condtional_value_X442;
_Bool _condtional_value_X443;
_Bool _condtional_value_X444;
_Bool _condtional_value_X451;
_Bool _condtional_value_X454;
_Bool _condtional_value_X455;
_Bool _condtional_value_X456;
_Bool _condtional_value_X457;
_Bool _condtional_value_X458;
_Bool _condtional_value_X459;
_Bool _condtional_value_X460;
_Bool _condtional_value_X461;
    if(({    (_condtional_value_X438=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X438;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X439=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X439;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X440=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X440;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X441=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X441;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X442=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X442;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X443=(self!=((void*)0)&&self->mLambdaType!=((void*)0)));    _condtional_value_X443;    })) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X444=(self!=((void*)0)&&self->mAllVar!=((void*)0)));    _condtional_value_X444;    })) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X451=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X451;    })) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X454=(self!=((void*)0)&&self->mTextBlock!=((void*)0)));    _condtional_value_X454;    })) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X455=(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)));    _condtional_value_X455;    })) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X456=(self!=((void*)0)&&self->mSource!=((void*)0)));    _condtional_value_X456;    })) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X457=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _condtional_value_X457;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X458=(self!=((void*)0)&&self->mSourceHead2!=((void*)0)));    _condtional_value_X458;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X459=(self!=((void*)0)&&self->mSourceDefer!=((void*)0)));    _condtional_value_X459;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X460=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X460;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X461=(self!=((void*)0)&&self->mFunAttribute!=((void*)0)));    _condtional_value_X461;    })) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X445;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X445=(it!=((void*)0)));    _condtional_value_X445;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
_Bool _condtional_value_X446;
    if(({    (_condtional_value_X446=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X446;    })) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
_Bool _condtional_value_X447;
_Bool _condtional_value_X448;
_Bool _condtional_value_X449;
_Bool _condtional_value_X450;
    if(({    (_condtional_value_X447=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X447;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X448=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X448;    })) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X449=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X449;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X450=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X450;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
_Bool _condtional_value_X452;
_Bool _condtional_value_X453;
    if(({    (_condtional_value_X452=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X452;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X453=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X453;    })) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X464;
_Bool _condtional_value_X465;
_Bool _condtional_value_X466;
struct sFun* __result_obj__102;
_Bool _condtional_value_X467;
_Bool _condtional_value_X468;
struct sFun* __result_obj__103;
struct sFun* __result_obj__104;
struct sFun* __result_obj__105;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X464=((_Bool)1));    _condtional_value_X464;    })) {
        if(({        (_condtional_value_X465=(self->item_existance[it]));        _condtional_value_X465;        })) {
            if(({            (_condtional_value_X466=(string_equals(self->keys[it],key)));            _condtional_value_X466;            })) {
                __result_obj__102 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__102;
            }
            it++;
            if(({            (_condtional_value_X467=(it>=self->size));            _condtional_value_X467;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X468=(it==hash));            _condtional_value_X468;            })) {
                __result_obj__103 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__103;
            }
        }
        else {
            __result_obj__104 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__104;
        }
    }
    __result_obj__105 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
_Bool _condtional_value_X472;
char* result;
char* __result_obj__106;
_Bool _condtional_value_X473;
char* __result_obj__107;
char* result_72;
char* __result_obj__108;
result = (void*)0;
result_72 = (void*)0;
    if(({    (_condtional_value_X472=(self==((void*)0)));    _condtional_value_X472;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__106 = result;
        return __result_obj__106;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X473=(self->key_list->it));    _condtional_value_X473;    })) {
        __result_obj__107 = self->key_list->it->item;
        return __result_obj__107;
    }
    memset(&result_72,0,sizeof(char*));
    __result_obj__108 = result_72;
    return __result_obj__108;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
_Bool _condtional_value_X476;
char* result;
char* __result_obj__109;
_Bool _condtional_value_X477;
char* __result_obj__110;
char* result_73;
char* __result_obj__111;
result = (void*)0;
result_73 = (void*)0;
    if(({    (_condtional_value_X476=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X476;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__109 = result;
        return __result_obj__109;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X477=(self->key_list->it));    _condtional_value_X477;    })) {
        __result_obj__110 = self->key_list->it->item;
        return __result_obj__110;
    }
    memset(&result_73,0,sizeof(char*));
    __result_obj__111 = result_73;
    return __result_obj__111;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_put(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
_Bool _condtional_value_X479;
unsigned int hash;
int it;
_Bool _condtional_value_X492;
_Bool _condtional_value_X493;
_Bool _condtional_value_X494;
_Bool _condtional_value_X495;
_Bool _condtional_value_X496;
_Bool _condtional_value_X497;
_Bool _condtional_value_X498;
_Bool _condtional_value_X499;
_Bool _condtional_value_X500;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X501;
_Bool _condtional_value_X502;
_Bool _condtional_value_X503;
_Bool _condtional_value_X504;
_Bool _condtional_value_X505;
struct map$2char$phsFun$ph* __result_obj__116;
    if(({    (_condtional_value_X479=(self->len*2>=self->size));    _condtional_value_X479;    })) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X492=((_Bool)1));    _condtional_value_X492;    })) {
        if(({        (_condtional_value_X493=(self->item_existance[it]));        _condtional_value_X493;        })) {
            if(({            (_condtional_value_X494=(string_equals(self->keys[it],key)));            _condtional_value_X494;            })) {
                if(({                (_condtional_value_X495=(1));                _condtional_value_X495;                })) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X496=(1));                _condtional_value_X496;                })) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X497=(it>=self->size));            _condtional_value_X497;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X498=(it==hash));            _condtional_value_X498;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X499=(1));            _condtional_value_X499;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X500=(1));            _condtional_value_X500;            })) {
                self->items[it]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X501=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X501;    });    ({    (_condtional_value_X502=(!list$1char$ph_end(self->key_list)));    _condtional_value_X502;    });    ({    (_condtional_value_X503=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X503;    })    ){
        if(({        (_condtional_value_X504=(string_equals(it2,key)));        _condtional_value_X504;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X505=(!same_key_exist));    _condtional_value_X505;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__116 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__116;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size;
void* __right_value220 = (void*)0;
char** keys;
void* __right_value221 = (void*)0;
struct sFun** items;
void* __right_value222 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X480;
_Bool _condtional_value_X481;
_Bool _condtional_value_X482;
struct sFun* default_value;
void* __right_value223 = (void*)0;
struct sFun* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X488;
_Bool _condtional_value_X489;
_Bool _condtional_value_X490;
_Bool _condtional_value_X491;
struct sFun* default_value_74;
void* __right_value224 = (void*)0;
default_value = (void*)0;
default_value_74 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value220=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "char**"))));
    items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value221=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size)), "/usr/local/include/comelang.h", 2213, "struct sFun**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value222=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2214, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X480=(it=map$2char$phsFun$ph_begin(self)));    _condtional_value_X480;    });    ({    (_condtional_value_X481=(!map$2char$phsFun$ph_end(self)));    _condtional_value_X481;    });    ({    (_condtional_value_X482=(it=map$2char$phsFun$ph_next(self)));    _condtional_value_X482;    })    ){
        memset(&default_value,0,sizeof(struct sFun*));
        it2=((struct sFun*)(__right_value223=map$2char$phsFun$ph_at(self,it,(struct sFun*)come_increment_ref_count(default_value))));
        come_call_finalizer(sFun_finalize, __right_value223, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X488=((_Bool)1));        _condtional_value_X488;        })) {
            if(({            (_condtional_value_X489=(item_existance[n]));            _condtional_value_X489;            })) {
                n++;
                if(({                (_condtional_value_X490=(n>=size));                _condtional_value_X490;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X491=(n==hash));                _condtional_value_X491;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sFun*)(__right_value224=map$2char$phsFun$ph_at(self,it,(struct sFun*)come_increment_ref_count(default_value_74))));
                come_call_finalizer(sFun_finalize, __right_value224, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len++;
                come_call_finalizer(sFun_finalize, default_value_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sFun_finalize, default_value_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X483;
_Bool _condtional_value_X484;
_Bool _condtional_value_X485;
struct sFun* __result_obj__112;
_Bool _condtional_value_X486;
_Bool _condtional_value_X487;
struct sFun* __result_obj__113;
struct sFun* __result_obj__114;
struct sFun* __result_obj__115;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X483=((_Bool)1));    _condtional_value_X483;    })) {
        if(({        (_condtional_value_X484=(self->item_existance[it]));        _condtional_value_X484;        })) {
            if(({            (_condtional_value_X485=(string_equals(self->keys[it],key)));            _condtional_value_X485;            })) {
                __result_obj__112 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__112;
            }
            it++;
            if(({            (_condtional_value_X486=(it>=self->size));            _condtional_value_X486;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X487=(it==hash));            _condtional_value_X487;            })) {
                __result_obj__113 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__113;
            }
        }
        else {
            __result_obj__114 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__114;
        }
    }
    __result_obj__115 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i;
_Bool _condtional_value_X506;
_Bool _condtional_value_X507;
_Bool _condtional_value_X508;
_Bool _condtional_value_X509;
_Bool _condtional_value_X510;
int i_75;
_Bool _condtional_value_X511;
_Bool _condtional_value_X512;
_Bool _condtional_value_X513;
_Bool _condtional_value_X514;
_Bool _condtional_value_X515;
    for(    ({    (_condtional_value_X506=(i=0));    _condtional_value_X506;    });    ({    (_condtional_value_X507=(i<self->size));    _condtional_value_X507;    });    ({    (_condtional_value_X508=(i++));    _condtional_value_X508;    })    ){
        if(({        (_condtional_value_X509=(self->item_existance[i]));        _condtional_value_X509;        })) {
            if(({            (_condtional_value_X510=(1));            _condtional_value_X510;            })) {
                come_call_finalizer(sFun_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X511=(i_75=0));    _condtional_value_X511;    });    ({    (_condtional_value_X512=(i_75<self->size));    _condtional_value_X512;    });    ({    (_condtional_value_X513=(i_75++));    _condtional_value_X513;    })    ){
        if(({        (_condtional_value_X514=(self->item_existance[i_75]));        _condtional_value_X514;        })) {
            if(({            (_condtional_value_X515=(1));            _condtional_value_X515;            })) {
                (self->keys[i_75] = come_decrement_ref_count(self->keys[i_75], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
_Bool _condtional_value_X517;
char* result;
char* __result_obj__117;
_Bool _condtional_value_X518;
char* __result_obj__118;
char* result_77;
char* __result_obj__119;
result = (void*)0;
result_77 = (void*)0;
    if(({    (_condtional_value_X517=(self==((void*)0)));    _condtional_value_X517;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__117 = result;
        return __result_obj__117;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X518=(self->key_list->it));    _condtional_value_X518;    })) {
        __result_obj__118 = self->key_list->it->item;
        return __result_obj__118;
    }
    memset(&result_77,0,sizeof(char*));
    __result_obj__119 = result_77;
    return __result_obj__119;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
_Bool _condtional_value_X521;
char* result;
char* __result_obj__120;
_Bool _condtional_value_X522;
char* __result_obj__121;
char* result_79;
char* __result_obj__122;
result = (void*)0;
result_79 = (void*)0;
    if(({    (_condtional_value_X521=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X521;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__120 = result;
        return __result_obj__120;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X522=(self->key_list->it));    _condtional_value_X522;    })) {
        __result_obj__121 = self->key_list->it->item;
        return __result_obj__121;
    }
    memset(&result_79,0,sizeof(char*));
    __result_obj__122 = result_79;
    return __result_obj__122;
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X524;
_Bool _condtional_value_X525;
_Bool _condtional_value_X526;
struct buffer* __result_obj__123;
_Bool _condtional_value_X527;
_Bool _condtional_value_X528;
struct buffer* __result_obj__124;
struct buffer* __result_obj__125;
struct buffer* __result_obj__126;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct buffer*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X524=((_Bool)1));    _condtional_value_X524;    })) {
        if(({        (_condtional_value_X525=(self->item_existance[it]));        _condtional_value_X525;        })) {
            if(({            (_condtional_value_X526=(string_equals(self->keys[it],key)));            _condtional_value_X526;            })) {
                __result_obj__123 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__123;
            }
            it++;
            if(({            (_condtional_value_X527=(it>=self->size));            _condtional_value_X527;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X528=(it==hash));            _condtional_value_X528;            })) {
                __result_obj__124 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__124;
            }
        }
        else {
            __result_obj__125 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__125;
        }
    }
    __result_obj__126 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__126;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X529;
_Bool _condtional_value_X530;
_Bool _condtional_value_X531;
struct buffer* __result_obj__127;
_Bool _condtional_value_X532;
_Bool _condtional_value_X533;
struct buffer* __result_obj__128;
struct buffer* __result_obj__129;
struct buffer* __result_obj__130;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct buffer*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X529=((_Bool)1));    _condtional_value_X529;    })) {
        if(({        (_condtional_value_X530=(self->item_existance[it]));        _condtional_value_X530;        })) {
            if(({            (_condtional_value_X531=(string_equals(self->keys[it],key)));            _condtional_value_X531;            })) {
                __result_obj__127 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__127;
            }
            it++;
            if(({            (_condtional_value_X532=(it>=self->size));            _condtional_value_X532;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X533=(it==hash));            _condtional_value_X533;            })) {
                __result_obj__128 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__128;
            }
        }
        else {
            __result_obj__129 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__129;
        }
    }
    __result_obj__130 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i;
_Bool _condtional_value_X534;
_Bool _condtional_value_X535;
_Bool _condtional_value_X536;
_Bool _condtional_value_X537;
_Bool _condtional_value_X538;
int i_80;
_Bool _condtional_value_X539;
_Bool _condtional_value_X540;
_Bool _condtional_value_X541;
_Bool _condtional_value_X542;
_Bool _condtional_value_X543;
    for(    ({    (_condtional_value_X534=(i=0));    _condtional_value_X534;    });    ({    (_condtional_value_X535=(i<self->size));    _condtional_value_X535;    });    ({    (_condtional_value_X536=(i++));    _condtional_value_X536;    })    ){
        if(({        (_condtional_value_X537=(self->item_existance[i]));        _condtional_value_X537;        })) {
            if(({            (_condtional_value_X538=(1));            _condtional_value_X538;            })) {
                come_call_finalizer(buffer_finalize, self->items[i], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X539=(i_80=0));    _condtional_value_X539;    });    ({    (_condtional_value_X540=(i_80<self->size));    _condtional_value_X540;    });    ({    (_condtional_value_X541=(i_80++));    _condtional_value_X541;    })    ){
        if(({        (_condtional_value_X542=(self->item_existance[i_80]));        _condtional_value_X542;        })) {
            if(({            (_condtional_value_X543=(1));            _condtional_value_X543;            })) {
                (self->keys[i_80] = come_decrement_ref_count(self->keys[i_80], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i;
_Bool _condtional_value_X557;
_Bool _condtional_value_X558;
_Bool _condtional_value_X559;
_Bool _condtional_value_X560;
_Bool _condtional_value_X561;
int i_89;
_Bool _condtional_value_X562;
_Bool _condtional_value_X563;
_Bool _condtional_value_X564;
_Bool _condtional_value_X565;
_Bool _condtional_value_X566;
    for(    ({    (_condtional_value_X557=(i=0));    _condtional_value_X557;    });    ({    (_condtional_value_X558=(i<self->size));    _condtional_value_X558;    });    ({    (_condtional_value_X559=(i++));    _condtional_value_X559;    })    ){
        if(({        (_condtional_value_X560=(self->item_existance[i]));        _condtional_value_X560;        })) {
            if(({            (_condtional_value_X561=(1));            _condtional_value_X561;            })) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X562=(i_89=0));    _condtional_value_X562;    });    ({    (_condtional_value_X563=(i_89<self->size));    _condtional_value_X563;    });    ({    (_condtional_value_X564=(i_89++));    _condtional_value_X564;    })    ){
        if(({        (_condtional_value_X565=(self->item_existance[i_89]));        _condtional_value_X565;        })) {
            if(({            (_condtional_value_X566=(1));            _condtional_value_X566;            })) {
                (self->keys[i_89] = come_decrement_ref_count(self->keys[i_89], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

_Bool output_header_file(struct sInfo* info){
char* output_file_name;
struct __sFILE* f;
_Bool _condtional_value_X579;
struct map$2char$phchar$ph* o2_saved;
char* it;
_Bool _condtional_value_X580;
_Bool _condtional_value_X581;
_Bool _condtional_value_X582;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
char* item;
struct map$2char$phchar$ph* o2_saved_99;
char* it_100;
_Bool _condtional_value_X583;
_Bool _condtional_value_X584;
_Bool _condtional_value_X585;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
char* item_101;
_Bool _condtional_value_X586;
_Bool __result_obj__132;
    output_file_name=(char*)come_increment_ref_count(info->output_file_name);
    f=fopen(output_file_name,"a");
    if(({    (_condtional_value_X579=(string_operator_equals(info->output_file_name,"common.h")));    _condtional_value_X579;    })) {
        fprintf(f,"#ifndef __COMMON_H__\n");
        fprintf(f,"#define __COMMON_H__\n");
        fprintf(f,"#include <comelang.h>\n");
    }
    for(    ({    (_condtional_value_X580=(o2_saved=(struct map$2char$phchar$ph*)come_increment_ref_count(info->module->mHeaderStructs),it=map$2char$phchar$ph_begin(o2_saved)));    _condtional_value_X580;    });    ({    (_condtional_value_X581=(!map$2char$phchar$ph_end(o2_saved)));    _condtional_value_X581;    });    ({    (_condtional_value_X582=(it=map$2char$phchar$ph_next(o2_saved)));    _condtional_value_X582;    })    ){
        item=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value252=__builtin_string(it)))));
        (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        fprintf(f,"%s",item);
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(map$2char$phchar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    for(    ({    (_condtional_value_X583=(o2_saved_99=(struct map$2char$phchar$ph*)come_increment_ref_count(info->module->mHeader),it_100=map$2char$phchar$ph_begin(o2_saved_99)));    _condtional_value_X583;    });    ({    (_condtional_value_X584=(!map$2char$phchar$ph_end(o2_saved_99)));    _condtional_value_X584;    });    ({    (_condtional_value_X585=(it_100=map$2char$phchar$ph_next(o2_saved_99)));    _condtional_value_X585;    })    ){
        item_101=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module->mHeader,((char*)(__right_value255=__builtin_string(it_100)))));
        (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value255 = come_decrement_ref_count(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        fprintf(f,"%s",item_101);
        (item_101 = come_decrement_ref_count(item_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(map$2char$phchar$ph$p_finalize, o2_saved_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    fprintf(f,"\n");
    if(({    (_condtional_value_X586=(string_operator_equals(info->output_file_name,"common.h")));    _condtional_value_X586;    })) {
        fprintf(f,"#endif\n");
    }
    fclose(f);
    __result_obj__132 = (_Bool)1;
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__132;
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
_Bool _condtional_value_X587;
char* msg2;
va_list args;
int len;
_Bool _condtional_value_X588;
msg2 = (void*)0;
memset(&args, 0, sizeof(va_list));
    if(({    (_condtional_value_X587=(info->no_output_come_code));    _condtional_value_X587;    })) {
        return;
    }
    __builtin_va_start(args,code);
    len=vasprintf(&msg2,code,args);
    __builtin_va_end(args);
    if(({    (_condtional_value_X588=(info->come_fun));    _condtional_value_X588;    })) {
        buffer_append_str(info->come_fun->mSourceHead,msg2);
    }
    free(msg2);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
_Bool _condtional_value_X589;
char* msg2;
va_list args;
int len;
_Bool _condtional_value_X590;
msg2 = (void*)0;
memset(&args, 0, sizeof(va_list));
    if(({    (_condtional_value_X589=(info->no_output_come_code));    _condtional_value_X589;    })) {
        return;
    }
    __builtin_va_start(args,code);
    len=vasprintf(&msg2,code,args);
    __builtin_va_end(args);
    if(({    (_condtional_value_X590=(info->come_fun));    _condtional_value_X590;    })) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2);
    }
    free(msg2);
}

void add_last_code_to_source(struct sInfo* info){
_Bool _condtional_value_X591;
_Bool _condtional_value_X592;
_Bool _condtional_value_X593;
char* __dec_obj45;
_Bool _condtional_value_X594;
char* __dec_obj46;
    if(({    (_condtional_value_X591=(info->prohibits_output_last_code));    _condtional_value_X591;    })) {
        return;
    }
    if(({    (_condtional_value_X592=(info->no_output_come_code));    _condtional_value_X592;    })) {
        return;
    }
    if(({    (_condtional_value_X593=(info->module->mLastCode));    _condtional_value_X593;    })) {
        add_come_code(info,"%s;\n",info->module->mLastCode);
        __dec_obj45=info->module->mLastCode,
        info->module->mLastCode=((void*)0);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X594=(info->module->mLastCode2));    _condtional_value_X594;    })) {
        add_come_code(info,"%s;\n",info->module->mLastCode2);
        __dec_obj46=info->module->mLastCode2,
        info->module->mLastCode2=((void*)0);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
_Bool _condtional_value_X595;
_Bool _condtional_value_X596;
_Bool _condtional_value_X597;
char* __dec_obj47;
_Bool _condtional_value_X598;
char* __dec_obj48;
    if(({    (_condtional_value_X595=(info->prohibits_output_last_code));    _condtional_value_X595;    })) {
        return;
    }
    if(({    (_condtional_value_X596=(info->no_output_come_code));    _condtional_value_X596;    })) {
        return;
    }
    if(({    (_condtional_value_X597=(info->module->mLastCode));    _condtional_value_X597;    })) {
        add_come_code(info,"%s ,",info->module->mLastCode);
        __dec_obj47=info->module->mLastCode,
        info->module->mLastCode=((void*)0);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X598=(info->module->mLastCode2));    _condtional_value_X598;    })) {
        add_come_code(info,"%s ,",info->module->mLastCode2);
        __dec_obj48=info->module->mLastCode2,
        info->module->mLastCode2=((void*)0);
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
_Bool _condtional_value_X599;
char* msg2;
va_list args;
int len;
void* __right_value257 = (void*)0;
char* __dec_obj49;
msg2 = (void*)0;
memset(&args, 0, sizeof(va_list));
    if(({    (_condtional_value_X599=(info->no_output_come_code));    _condtional_value_X599;    })) {
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    __dec_obj49=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(__builtin_string(msg2));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    free(msg2);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
_Bool _condtional_value_X600;
char* msg2;
va_list args;
int len;
void* __right_value258 = (void*)0;
char* __dec_obj50;
msg2 = (void*)0;
memset(&args, 0, sizeof(va_list));
    if(({    (_condtional_value_X600=(info->no_output_come_code));    _condtional_value_X600;    })) {
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    __dec_obj50=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(__builtin_string(msg2));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    free(msg2);
}

void dec_stack_ptr(int value, struct sInfo* info){
    list$1CVALUE$ph_delete(info->stack,-value,-1);
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail){
_Bool _condtional_value_X601;
_Bool _condtional_value_X602;
_Bool _condtional_value_X603;
int tmp;
_Bool _condtional_value_X604;
_Bool _condtional_value_X605;
_Bool _condtional_value_X606;
struct list$1CVALUE$ph* __result_obj__133;
_Bool _condtional_value_X607;
_Bool _condtional_value_X610;
struct list_item$1CVALUE$ph* it;
int i;
_Bool _condtional_value_X611;
_Bool _condtional_value_X612;
struct list_item$1CVALUE$ph* prev_it;
_Bool _condtional_value_X613;
_Bool _condtional_value_X614;
struct list_item$1CVALUE$ph* it_102;
int i_103;
_Bool _condtional_value_X615;
_Bool _condtional_value_X616;
_Bool _condtional_value_X617;
struct list_item$1CVALUE$ph* prev_it_104;
struct list_item$1CVALUE$ph* it_105;
struct list_item$1CVALUE$ph* head_prev_it;
struct list_item$1CVALUE$ph* tail_it;
int i_106;
_Bool _condtional_value_X618;
_Bool _condtional_value_X619;
_Bool _condtional_value_X620;
_Bool _condtional_value_X621;
struct list_item$1CVALUE$ph* prev_it_107;
_Bool _condtional_value_X622;
_Bool _condtional_value_X623;
struct list$1CVALUE$ph* __result_obj__135;
    if(({    (_condtional_value_X601=(head<0));    _condtional_value_X601;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X602=(tail<0));    _condtional_value_X602;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X603=(head>tail));    _condtional_value_X603;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X604=(head<0));    _condtional_value_X604;    })) {
        head=0;
    }
    if(({    (_condtional_value_X605=(tail>self->len));    _condtional_value_X605;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X606=(head==tail));    _condtional_value_X606;    })) {
        __result_obj__133 = self;
        return __result_obj__133;
    }
    if(({    (_condtional_value_X607=(head==0&&tail==self->len));    _condtional_value_X607;    })) {
        list$1CVALUE$ph_reset(self);
    }
    else if(({    (_condtional_value_X610=(head==0));    _condtional_value_X610;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X611=(it!=((void*)0)));        _condtional_value_X611;        })) {
            if(({            (_condtional_value_X612=(i<tail));            _condtional_value_X612;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X613=(i==tail));            _condtional_value_X613;            })) {
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
    else if(({    (_condtional_value_X614=(tail==self->len));    _condtional_value_X614;    })) {
        it_102=self->head;
        i_103=0;
        while(({        (_condtional_value_X615=(it_102!=((void*)0)));        _condtional_value_X615;        })) {
            if(({            (_condtional_value_X616=(i_103==head));            _condtional_value_X616;            })) {
                self->tail=it_102->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X617=(i_103>=head));            _condtional_value_X617;            })) {
                prev_it_104=it_102;
                it_102=it_102->next;
                i_103++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_102=it_102->next;
                i_103++;
            }
        }
    }
    else {
        it_105=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_106=0;
        while(({        (_condtional_value_X618=(it_105!=((void*)0)));        _condtional_value_X618;        })) {
            if(({            (_condtional_value_X619=(i_106==head));            _condtional_value_X619;            })) {
                head_prev_it=it_105->prev;
            }
            if(({            (_condtional_value_X620=(i_106==tail));            _condtional_value_X620;            })) {
                tail_it=it_105;
            }
            if(({            (_condtional_value_X621=(i_106>=head&&i_106<tail));            _condtional_value_X621;            })) {
                prev_it_107=it_105;
                it_105=it_105->next;
                i_106++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_105=it_105->next;
                i_106++;
            }
        }
        if(({        (_condtional_value_X622=(head_prev_it!=((void*)0)));        _condtional_value_X622;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X623=(tail_it!=((void*)0)));        _condtional_value_X623;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__135 = self;
    return __result_obj__135;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
_Bool _condtional_value_X608;
struct list_item$1CVALUE$ph* prev_it;
struct list$1CVALUE$ph* __result_obj__134;
    it=self->head;
    while(({    (_condtional_value_X608=(it!=((void*)0)));    _condtional_value_X608;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__134 = self;
    return __result_obj__134;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
_Bool _condtional_value_X609;
    if(({    (_condtional_value_X609=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X609;    })) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
char* __dec_obj51;
void* __right_value259 = (void*)0;
void* __right_value265 = (void*)0;
struct CVALUE* result;
_Bool _condtional_value_X637;
struct CVALUE* __result_obj__142;
    __dec_obj51=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(((struct CVALUE*)(__right_value259=list$1CVALUE$ph_operator_load_element(info->stack,offset)))));
    come_call_finalizer(CVALUE_finalize, __right_value259, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(({    (_condtional_value_X637=(result==((void*)0)));    _condtional_value_X637;    })) {
        err_msg(info,"invalid stack value");
        exit(2);
    }
    list$1CVALUE$ph_delete(info->stack,-1,-1);
    __result_obj__142 = (struct CVALUE*)come_increment_ref_count(result);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
_Bool _condtional_value_X624;
struct list_item$1CVALUE$ph* it;
int i;
_Bool _condtional_value_X625;
_Bool _condtional_value_X626;
struct CVALUE* __result_obj__136;
struct CVALUE* default_value;
struct CVALUE* __result_obj__137;
default_value = (void*)0;
    if(({    (_condtional_value_X624=(position<0));    _condtional_value_X624;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X625=(it!=((void*)0)));    _condtional_value_X625;    })) {
        if(({        (_condtional_value_X626=(position==i));        _condtional_value_X626;        })) {
            __result_obj__136 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__136;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct CVALUE*));
    __result_obj__137 = (struct CVALUE*)come_increment_ref_count(default_value);
    come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
_Bool _condtional_value_X627;
struct list_item$1CVALUE$ph* it;
int i;
_Bool _condtional_value_X628;
_Bool _condtional_value_X629;
struct CVALUE* __result_obj__138;
struct CVALUE* default_value;
struct CVALUE* __result_obj__139;
default_value = (void*)0;
    if(({    (_condtional_value_X627=(position<0));    _condtional_value_X627;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X628=(it!=((void*)0)));    _condtional_value_X628;    })) {
        if(({        (_condtional_value_X629=(position==i));        _condtional_value_X629;        })) {
            __result_obj__138 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__138;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct CVALUE*));
    __result_obj__139 = (struct CVALUE*)come_increment_ref_count(default_value);
    come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
_Bool _condtional_value_X630;
struct CVALUE* __result_obj__140;
void* __right_value260 = (void*)0;
struct CVALUE* result;
_Bool _condtional_value_X631;
void* __right_value261 = (void*)0;
char* __dec_obj52;
_Bool _condtional_value_X632;
void* __right_value262 = (void*)0;
struct sType* __dec_obj53;
_Bool _condtional_value_X633;
_Bool _condtional_value_X634;
_Bool _condtional_value_X635;
void* __right_value263 = (void*)0;
char* __dec_obj54;
_Bool _condtional_value_X636;
void* __right_value264 = (void*)0;
char* __dec_obj55;
struct CVALUE* __result_obj__141;
    if(({    (_condtional_value_X630=(self==(void*)0));    _condtional_value_X630;    })) {
        __result_obj__140 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__140;
    }
    result=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(({    (_condtional_value_X631=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X631;    })) {
        __dec_obj52=result->c_value,
        result->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X632=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X632;    })) {
        __dec_obj53=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X633=(self!=((void*)0)));    _condtional_value_X633;    })) {
        result->var=self->var;
    }
    if(({    (_condtional_value_X634=(self!=((void*)0)));    _condtional_value_X634;    })) {
        result->right_value_objects=self->right_value_objects;
    }
    if(({    (_condtional_value_X635=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X635;    })) {
        __dec_obj54=result->c_value_without_right_value_objects,
        result->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X636=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X636;    })) {
        __dec_obj55=result->c_value_without_cast_object_value,
        result->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__141 = (struct CVALUE*)come_increment_ref_count(result);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__141;
}

void transpiler_clear_last_code(struct sInfo* info){
char* __dec_obj56;
char* __dec_obj57;
    __dec_obj56=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj57=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
}


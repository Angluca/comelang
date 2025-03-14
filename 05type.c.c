/// previous struct definition ///
struct __sFILEX;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sBlock;

struct sVarTable;

/// struct definition ///
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

extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stdinp;
extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stdoutp;
extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stderrp;
typedef long long off_t;

typedef long ssize_t;

extern const int sys_nerr;
extern const char* sys_errlist[];
enum anonymous_typeY2 { P_ALL
,P_PID
,P_PGID
};

typedef enum anonymous_typeY2 idtype_t;

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

struct anonymous_typeX3
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};

struct anonymous_typeX4
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};

union wait
{
int w_status;
struct anonymous_typeX3 w_T;
struct anonymous_typeX4 w_S;
};

typedef int ct_rune_t;

typedef int rune_t;

typedef int wchar_t;

struct anonymous_typeX5
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX5 div_t;

struct anonymous_typeX6
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX6 ldiv_t;

struct anonymous_typeX7
{
    long long quot;
    long long rem;
};

typedef struct anonymous_typeX7 lldiv_t;

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

typedef int wint_t;

struct anonymous_typeX8
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};

typedef struct anonymous_typeX8 _RuneEntry;

struct anonymous_typeX9
{
    int __nranges;
    struct anonymous_typeX8* __ranges;
};

typedef struct anonymous_typeX9 _RuneRange;

struct anonymous_typeX10
{
    char __name[14];
    unsigned int __mask;
};

typedef struct anonymous_typeX10 _RuneCharClass;

struct anonymous_typeX11
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long  int,char**);
    int (*__sputrune)(int,char*,unsigned long  int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct anonymous_typeX9 __runetype_ext;
    struct anonymous_typeX9 __maplower_ext;
    struct anonymous_typeX9 __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct anonymous_typeX10* __charclasses;
};

typedef struct anonymous_typeX11 _RuneLocale;

extern struct anonymous_typeX11 _DefaultRuneLocale;
extern struct anonymous_typeX11* _CurrentRuneLocale;
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
enum anonymous_typeY12 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

typedef enum anonymous_typeY12 clockid_t;

typedef unsigned int wctype_t;

typedef void* any;

typedef char* string;

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
};

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

struct object
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
};

struct smart_pointer$1char$
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short$
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int$
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long$
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1char$p
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float$
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double$
{
    struct buffer* memory;
    double* p;
};

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

struct vector$1char$
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1char$p
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short$
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int$
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long$
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float$
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double$
{
    double* items;
    int len;
    int size;
    int it;
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

typedef struct regex_t* re_t;

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
};

union anonymous_typeZ13
{
unsigned char ch;
unsigned char* ccl;
};

union anonymous_typeZ14
{
unsigned char ch;
unsigned char* ccl;
};

struct regex_t
{
    unsigned char type;
    union anonymous_typeZ14 u;
};

typedef struct regex_t regex_t;

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
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
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName;
    char* mAttribute;
    _Bool mDynamic;
};

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
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
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
    _Bool mAnyClass;
    struct sType* mAnyOriginalType;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    char* mTupleName;
    char* mAttribute;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
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
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
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

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
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
    char* mAttribute;
    char* mFunAttribute;
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
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$p* key_list;
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
    struct list$1char$p* key_list;
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
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$p* key_list;
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

struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
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
    _Bool comma_instead_of_semicolon;
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
    _Bool without_semicolon;
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
    _Bool gcc_compiler;
    _Bool in_exception_value;
};

struct tuple2$2int$char$ph
{
    int v1;
    char* v2;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
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

struct tuple2$2bool$char$ph
{
    _Bool v1;
    char* v2;
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

extern struct list$1sRightValueObject$ph* gExceptionRightValueObjects;
struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct tuple2$2bool$void$p
{
    _Bool v1;
    void* v2;
};

// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
int printf(const char* anonymous_var_nameX15, ...);
void clearerr(struct __sFILE* anonymous_var_nameX36);
int fclose(struct __sFILE* anonymous_var_nameX37);
int feof(struct __sFILE* anonymous_var_nameX38);
int ferror(struct __sFILE* anonymous_var_nameX39);
int fflush(struct __sFILE* anonymous_var_nameX40);
int fgetc(struct __sFILE* anonymous_var_nameX41);
int fgetpos(struct __sFILE* anonymous_var_nameX42, long long* anonymous_var_nameX43);
char* fgets(char* anonymous_var_nameX44, int anonymous_var_nameX45, struct __sFILE* anonymous_var_nameX46);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);
int fputc(int anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fputs(const char* anonymous_var_nameX51, struct __sFILE* anonymous_var_nameX52);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX53, const char* anonymous_var_nameX54, struct __sFILE* anonymous_var_nameX55);
int fscanf(struct __sFILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, ...);
int fseek(struct __sFILE* anonymous_var_nameX58, long anonymous_var_nameX59, int anonymous_var_nameX60);
int fsetpos(struct __sFILE* anonymous_var_nameX61, const long long* anonymous_var_nameX62);
long ftell(struct __sFILE* anonymous_var_nameX63);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX64);
int getchar();
__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.")))

 char* gets(char* anonymous_var_nameX65);
void perror(const char* anonymous_var_nameX66);
int putc(int anonymous_var_nameX67, struct __sFILE* anonymous_var_nameX68);
int putchar(int anonymous_var_nameX69);
int puts(const char* anonymous_var_nameX70);
int remove(const char* anonymous_var_nameX71);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX72);
int scanf(const char* anonymous_var_nameX73, ...);
void setbuf(struct __sFILE* anonymous_var_nameX74, char* anonymous_var_nameX75);
int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, unsigned long  int anonymous_var_nameX79);
__attribute__((__availability__(swift, unavailable, message="Use snprintf instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use snprintf(3) instead.")))

 int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...);
int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...);
struct __sFILE* tmpfile();
__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

 char* tmpnam(char* anonymous_var_nameX84);
int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);
int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89);
int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91);
__attribute__((__availability__(swift, unavailable, message="Use vsnprintf instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use vsnprintf(3) instead.")))

 int vsprintf(char* anonymous_var_nameX92, const char* anonymous_var_nameX93, va_list anonymous_var_nameX94);
char* ctermid(char* anonymous_var_nameX95);
struct __sFILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97);
int fileno(struct __sFILE* anonymous_var_nameX98);
int pclose(struct __sFILE* anonymous_var_nameX99);
struct __sFILE* popen(const char* anonymous_var_nameX100, const char* anonymous_var_nameX101);
int __srget(struct __sFILE* anonymous_var_nameX102);
int __svfscanf(struct __sFILE* anonymous_var_nameX103, const char* anonymous_var_nameX104, va_list anonymous_var_nameX105);
int __swbuf(int anonymous_var_nameX106, struct __sFILE* anonymous_var_nameX107);
void flockfile(struct __sFILE* anonymous_var_nameX108);
int ftrylockfile(struct __sFILE* anonymous_var_nameX109);
void funlockfile(struct __sFILE* anonymous_var_nameX110);
int getc_unlocked(struct __sFILE* anonymous_var_nameX111);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX112, struct __sFILE* anonymous_var_nameX113);
int putchar_unlocked(int anonymous_var_nameX114);
int getw(struct __sFILE* anonymous_var_nameX115);
int putw(int anonymous_var_nameX116, struct __sFILE* anonymous_var_nameX117);
__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

 char* tempnam(const char* __dir, const char* __prefix);
int fseeko(struct __sFILE* __stream, long long __offset, int __whence);
long long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118);
int vscanf(const char* __format, va_list anonymous_var_nameX119);
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX120);
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121);
int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...);
int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126);
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep);
int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...);
char* ctermid_r(char* anonymous_var_nameX129);
char* fgetln(struct __sFILE* anonymous_var_nameX130, unsigned long  int* anonymous_var_nameX131);
const char* fmtcheck(const char* anonymous_var_nameX132, const char* anonymous_var_nameX133);
int fpurge(struct __sFILE* anonymous_var_nameX134);
void setbuffer(struct __sFILE* anonymous_var_nameX135, char* anonymous_var_nameX136, int anonymous_var_nameX137);
int setlinebuf(struct __sFILE* anonymous_var_nameX138);
int vasprintf(char** anonymous_var_nameX139, const char* anonymous_var_nameX140, va_list anonymous_var_nameX141);
struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX173, unsigned int anonymous_var_nameX174);
int getiopolicy_np(int anonymous_var_nameX175, int anonymous_var_nameX176);
int getrlimit(int anonymous_var_nameX177, struct rlimit* anonymous_var_nameX178);
int getrusage(int anonymous_var_nameX179, struct rusage* anonymous_var_nameX180);
int setpriority(int anonymous_var_nameX181, unsigned int anonymous_var_nameX182, int anonymous_var_nameX183);
int setiopolicy_np(int anonymous_var_nameX184, int anonymous_var_nameX185, int anonymous_var_nameX186);
int setrlimit(int anonymous_var_nameX187, const struct rlimit* anonymous_var_nameX188);
int wait(int* anonymous_var_nameX189);
int waitpid(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192);
int waitid(enum anonymous_typeY2 anonymous_var_nameX193, unsigned int anonymous_var_nameX194, struct __siginfo* anonymous_var_nameX195, int anonymous_var_nameX196);
int wait3(int* anonymous_var_nameX197, int anonymous_var_nameX198, struct rusage* anonymous_var_nameX199);
int wait4(int anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, struct rusage* anonymous_var_nameX203);
void* alloca(unsigned long  int anonymous_var_nameX204);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void malloc_type_free(void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void abort();
int abs(int anonymous_var_nameX206);
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX207);
int atoi(const char* anonymous_var_nameX208);
long atol(const char* anonymous_var_nameX209);
long long atoll(const char* anonymous_var_nameX210);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX213, int anonymous_var_nameX214);
void exit(int anonymous_var_nameX215);
char* getenv(const char* anonymous_var_nameX216);
long labs(long anonymous_var_nameX217);
struct anonymous_typeX6 ldiv(long anonymous_var_nameX218, long anonymous_var_nameX219);
long long llabs(long  long anonymous_var_nameX220);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX221, long  long anonymous_var_nameX222);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX223, const char* anonymous_var_nameX224, unsigned long  int anonymous_var_nameX225);
int mbtowc(int* anonymous_var_nameX226, const char* anonymous_var_nameX227, unsigned long  int anonymous_var_nameX228);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX231);
int rand();
void srand(unsigned int anonymous_var_nameX232);
double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234);
float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236);
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
__attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")))
__attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
 int system(const char* anonymous_var_nameX239);
unsigned long  int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);
void _Exit(int anonymous_var_nameX245);
long a64l(const char* anonymous_var_nameX246);
double drand48();
char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);
double erand48(unsigned short int anonymous_var_nameX251[3]);
char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);
char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);
int getsubopt(char** anonymous_var_nameX259, char** anonymous_var_nameX260, char** anonymous_var_nameX261);
int grantpt(int anonymous_var_nameX262);
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long  int anonymous_var_nameX265);
long jrand48(unsigned short int anonymous_var_nameX266[3]);
char* l64a(long anonymous_var_nameX267);
void lcong48(unsigned short int anonymous_var_nameX268[7]);
long lrand48();
__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of mktemp(3), it is highly recommended that you use mkstemp(3) instead.")))

 char* mktemp(char* anonymous_var_nameX269);
int mkstemp(char* anonymous_var_nameX270);
long mrand48();
long nrand48(unsigned short int anonymous_var_nameX271[3]);
int posix_openpt(int anonymous_var_nameX272);
char* ptsname(int anonymous_var_nameX273);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen);
int putenv(char* anonymous_var_nameX274);
long random();
int rand_r(unsigned int* anonymous_var_nameX275);
char* realpath(const char* anonymous_var_nameX276, char* anonymous_var_nameX277);
unsigned short int* seed48(unsigned short int anonymous_var_nameX278[3]);
int setenv(const char* __name, const char* __value, int __overwrite);
void setkey(const char* anonymous_var_nameX279);
char* setstate(const char* anonymous_var_nameX280);
void srand48(long anonymous_var_nameX281);
void srandom(unsigned int anonymous_var_nameX282);
int unlockpt(int anonymous_var_nameX283);
int unsetenv(const char* anonymous_var_nameX284);
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX285, int anonymous_var_nameX286);
void arc4random_buf(void* __buf, unsigned long  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
char* cgetcap(char* anonymous_var_nameX289, const char* anonymous_var_nameX290, int anonymous_var_nameX291);
int cgetclose();
int cgetent(char** anonymous_var_nameX292, char** anonymous_var_nameX293, const char* anonymous_var_nameX294);
int cgetfirst(char** anonymous_var_nameX295, char** anonymous_var_nameX296);
int cgetmatch(const char* anonymous_var_nameX297, const char* anonymous_var_nameX298);
int cgetnext(char** anonymous_var_nameX299, char** anonymous_var_nameX300);
int cgetnum(char* anonymous_var_nameX301, const char* anonymous_var_nameX302, long* anonymous_var_nameX303);
int cgetset(const char* anonymous_var_nameX304);
int cgetstr(char* anonymous_var_nameX305, const char* anonymous_var_nameX306, char** anonymous_var_nameX307);
int cgetustr(char* anonymous_var_nameX308, const char* anonymous_var_nameX309, char** anonymous_var_nameX310);
int daemon(int anonymous_var_nameX311, int anonymous_var_nameX312);
char* devname(int anonymous_var_nameX313, unsigned short int anonymous_var_nameX314);
char* devname_r(int anonymous_var_nameX315, unsigned short int anonymous_var_nameX316, char* buf, int len);
char* getbsize(int* anonymous_var_nameX317, long* anonymous_var_nameX318);
int getloadavg(double anonymous_var_nameX319[], int anonymous_var_nameX320);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX321);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX344);
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
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);
__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))
 int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
__attribute__((availability(macosx,introduced=11.0))) __attribute__((availability(ios,introduced=14.0)))
__attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)))
 int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, unsigned long  int anonymous_var_nameX350);
void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, unsigned long  int anonymous_var_nameX353);
void bzero(void* anonymous_var_nameX354, unsigned long  int anonymous_var_nameX355);
char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);
char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);
int ffs(int anonymous_var_nameX360);
int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);
int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, unsigned long  int anonymous_var_nameX365);
int ffsl(long anonymous_var_nameX366);
int ffsll(long  long anonymous_var_nameX367);
int fls(int anonymous_var_nameX368);
int flsl(long anonymous_var_nameX369);
int flsll(long  long anonymous_var_nameX370);
struct lconv* localeconv();
char* setlocale(int anonymous_var_nameX371, const char* anonymous_var_nameX372);
int* __error();
int isalnum(int anonymous_var_nameX387);
int isalpha(int anonymous_var_nameX388);
int isblank(int anonymous_var_nameX389);
int iscntrl(int anonymous_var_nameX390);
int isdigit(int anonymous_var_nameX391);
int isgraph(int anonymous_var_nameX392);
int islower(int anonymous_var_nameX393);
int isprint(int anonymous_var_nameX394);
int ispunct(int anonymous_var_nameX395);
int isspace(int anonymous_var_nameX396);
int isupper(int anonymous_var_nameX397);
int isxdigit(int anonymous_var_nameX398);
int tolower(int anonymous_var_nameX399);
int toupper(int anonymous_var_nameX400);
int isascii(int anonymous_var_nameX401);
int toascii(int anonymous_var_nameX402);
int _tolower(int anonymous_var_nameX403);
int _toupper(int anonymous_var_nameX404);
int digittoint(int anonymous_var_nameX405);
int ishexnumber(int anonymous_var_nameX406);
int isideogram(int anonymous_var_nameX407);
int isnumber(int anonymous_var_nameX408);
int isphonogram(int anonymous_var_nameX409);
int isrune(int anonymous_var_nameX410);
int isspecial(int anonymous_var_nameX411);
char* asctime(const struct tm* anonymous_var_nameX412);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX413);
double difftime(long anonymous_var_nameX414, long anonymous_var_nameX415);
struct tm* getdate(const char* anonymous_var_nameX416);
struct tm* gmtime(const long* anonymous_var_nameX417);
struct tm* localtime(const long* anonymous_var_nameX418);
long mktime(struct tm* anonymous_var_nameX419);
unsigned long  int strftime(char* anonymous_var_nameX420, unsigned long  int anonymous_var_nameX421, const char* anonymous_var_nameX422, const struct tm* anonymous_var_nameX423);
char* strptime(const char* anonymous_var_nameX424, const char* anonymous_var_nameX425, struct tm* anonymous_var_nameX426);
long time(long* anonymous_var_nameX427);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX428, char* anonymous_var_nameX429);
char* ctime_r(const long* anonymous_var_nameX430, char* anonymous_var_nameX431);
struct tm* gmtime_r(const long* anonymous_var_nameX432, struct tm* anonymous_var_nameX433);
struct tm* localtime_r(const long* anonymous_var_nameX434, struct tm* anonymous_var_nameX435);
long posix2time(long anonymous_var_nameX436);
void tzsetwall();
long time2posix(long anonymous_var_nameX437);
long timelocal(struct tm* anonymous_var_nameX438);
long timegm(struct tm* anonymous_var_nameX439);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
 int clock_getres(enum anonymous_typeY12 __clock_id, struct timespec* __res);
__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
 int clock_gettime(enum anonymous_typeY12 __clock_id, struct timespec* __tp);
__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
 unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY12 __clock_id);
__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
 int clock_settime(enum anonymous_typeY12 __clock_id, const struct timespec* __tp);
__attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)))
 int timespec_get(struct timespec* ts, int base);
int iswalnum(int anonymous_var_nameX440);
int iswalpha(int anonymous_var_nameX441);
int iswcntrl(int anonymous_var_nameX442);
int iswctype(int anonymous_var_nameX443, unsigned int anonymous_var_nameX444);
int iswdigit(int anonymous_var_nameX445);
int iswgraph(int anonymous_var_nameX446);
int iswlower(int anonymous_var_nameX447);
int iswprint(int anonymous_var_nameX448);
int iswpunct(int anonymous_var_nameX449);
int iswspace(int anonymous_var_nameX450);
int iswupper(int anonymous_var_nameX451);
int iswxdigit(int anonymous_var_nameX452);
int towlower(int anonymous_var_nameX453);
int towupper(int anonymous_var_nameX454);
unsigned int wctype(const char* anonymous_var_nameX455);
int btowc(int anonymous_var_nameX456);
int fgetwc(struct __sFILE* anonymous_var_nameX457);
int* fgetws(int* anonymous_var_nameX458, int anonymous_var_nameX459, struct __sFILE* anonymous_var_nameX460);
int fputwc(int anonymous_var_nameX461, struct __sFILE* anonymous_var_nameX462);
int fputws(const int* anonymous_var_nameX463, struct __sFILE* anonymous_var_nameX464);
int fwide(struct __sFILE* anonymous_var_nameX465, int anonymous_var_nameX466);
int fwprintf(struct __sFILE* anonymous_var_nameX467, const int* anonymous_var_nameX468, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX469, const int* anonymous_var_nameX470, ...);
int getwc(struct __sFILE* anonymous_var_nameX471);
int getwchar();
unsigned long  int mbrlen(const char* anonymous_var_nameX472, unsigned long  int anonymous_var_nameX473, union anonymous_typeZ1* anonymous_var_nameX474);
unsigned long  int mbrtowc(int* anonymous_var_nameX475, const char* anonymous_var_nameX476, unsigned long  int anonymous_var_nameX477, union anonymous_typeZ1* anonymous_var_nameX478);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX479);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX480, const char** anonymous_var_nameX481, unsigned long  int anonymous_var_nameX482, union anonymous_typeZ1* anonymous_var_nameX483);
int putwc(int anonymous_var_nameX484, struct __sFILE* anonymous_var_nameX485);
int putwchar(int anonymous_var_nameX486);
int swprintf(int* anonymous_var_nameX487, unsigned long  int anonymous_var_nameX488, const int* anonymous_var_nameX489, ...);
int swscanf(const int* anonymous_var_nameX490, const int* anonymous_var_nameX491, ...);
int ungetwc(int anonymous_var_nameX492, struct __sFILE* anonymous_var_nameX493);
int vfwprintf(struct __sFILE* anonymous_var_nameX494, const int* anonymous_var_nameX495, __darwin_va_list anonymous_var_nameX496);
int vswprintf(int* anonymous_var_nameX497, unsigned long  int anonymous_var_nameX498, const int* anonymous_var_nameX499, __darwin_va_list anonymous_var_nameX500);
int vwprintf(const int* anonymous_var_nameX501, __darwin_va_list anonymous_var_nameX502);
unsigned long  int wcrtomb(char* anonymous_var_nameX503, int anonymous_var_nameX504, union anonymous_typeZ1* anonymous_var_nameX505);
int* wcscat(int* anonymous_var_nameX506, const int* anonymous_var_nameX507);
int* wcschr(const int* anonymous_var_nameX508, int anonymous_var_nameX509);
int wcscmp(const int* anonymous_var_nameX510, const int* anonymous_var_nameX511);
int wcscoll(const int* anonymous_var_nameX512, const int* anonymous_var_nameX513);
int* wcscpy(int* anonymous_var_nameX514, const int* anonymous_var_nameX515);
unsigned long  int wcscspn(const int* anonymous_var_nameX516, const int* anonymous_var_nameX517);
unsigned long  int wcsftime(int* anonymous_var_nameX518, unsigned long  int anonymous_var_nameX519, const int* anonymous_var_nameX520, const struct tm* anonymous_var_nameX521);
unsigned long  int wcslen(const int* anonymous_var_nameX522);
int* wcsncat(int* anonymous_var_nameX523, const int* anonymous_var_nameX524, unsigned long  int anonymous_var_nameX525);
int wcsncmp(const int* anonymous_var_nameX526, const int* anonymous_var_nameX527, unsigned long  int anonymous_var_nameX528);
int* wcsncpy(int* anonymous_var_nameX529, const int* anonymous_var_nameX530, unsigned long  int anonymous_var_nameX531);
int* wcspbrk(const int* anonymous_var_nameX532, const int* anonymous_var_nameX533);
int* wcsrchr(const int* anonymous_var_nameX534, int anonymous_var_nameX535);
unsigned long  int wcsrtombs(char* anonymous_var_nameX536, const int** anonymous_var_nameX537, unsigned long  int anonymous_var_nameX538, union anonymous_typeZ1* anonymous_var_nameX539);
unsigned long  int wcsspn(const int* anonymous_var_nameX540, const int* anonymous_var_nameX541);
int* wcsstr(const int* anonymous_var_nameX542, const int* anonymous_var_nameX543);
unsigned long  int wcsxfrm(int* anonymous_var_nameX544, const int* anonymous_var_nameX545, unsigned long  int anonymous_var_nameX546);
int wctob(int anonymous_var_nameX547);
double wcstod(const int* anonymous_var_nameX548, int** anonymous_var_nameX549);
int* wcstok(int* anonymous_var_nameX550, const int* anonymous_var_nameX551, int** anonymous_var_nameX552);
long wcstol(const int* anonymous_var_nameX553, int** anonymous_var_nameX554, int anonymous_var_nameX555);
unsigned long  int wcstoul(const int* anonymous_var_nameX556, int** anonymous_var_nameX557, int anonymous_var_nameX558);
int* wmemchr(const int* anonymous_var_nameX559, int anonymous_var_nameX560, unsigned long  int anonymous_var_nameX561);
int wmemcmp(const int* anonymous_var_nameX562, const int* anonymous_var_nameX563, unsigned long  int anonymous_var_nameX564);
int* wmemcpy(int* anonymous_var_nameX565, const int* anonymous_var_nameX566, unsigned long  int anonymous_var_nameX567);
int* wmemmove(int* anonymous_var_nameX568, const int* anonymous_var_nameX569, unsigned long  int anonymous_var_nameX570);
int* wmemset(int* anonymous_var_nameX571, int anonymous_var_nameX572, unsigned long  int anonymous_var_nameX573);
int wprintf(const int* anonymous_var_nameX574, ...);
int wscanf(const int* anonymous_var_nameX575, ...);
int wcswidth(const int* anonymous_var_nameX576, unsigned long  int anonymous_var_nameX577);
int wcwidth(int anonymous_var_nameX578);
int vfwscanf(struct __sFILE* anonymous_var_nameX579, const int* anonymous_var_nameX580, __darwin_va_list anonymous_var_nameX581);
int vswscanf(const int* anonymous_var_nameX582, const int* anonymous_var_nameX583, __darwin_va_list anonymous_var_nameX584);
int vwscanf(const int* anonymous_var_nameX585, __darwin_va_list anonymous_var_nameX586);
float wcstof(const int* anonymous_var_nameX587, int** anonymous_var_nameX588);
long  double wcstold(const int* anonymous_var_nameX589, int** anonymous_var_nameX590);
long long wcstoll(const int* anonymous_var_nameX591, int** anonymous_var_nameX592, int anonymous_var_nameX593);
unsigned long  long wcstoull(const int* anonymous_var_nameX594, int** anonymous_var_nameX595, int anonymous_var_nameX596);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX597, const char** anonymous_var_nameX598, unsigned long  int anonymous_var_nameX599, unsigned long  int anonymous_var_nameX600, union anonymous_typeZ1* anonymous_var_nameX601);
int* wcpcpy(int* anonymous_var_nameX602, const int* anonymous_var_nameX603);
int* wcpncpy(int* anonymous_var_nameX604, const int* anonymous_var_nameX605, unsigned long  int anonymous_var_nameX606);
int* wcsdup(const int* anonymous_var_nameX607);
int wcscasecmp(const int* anonymous_var_nameX608, const int* anonymous_var_nameX609);
int wcsncasecmp(const int* anonymous_var_nameX610, const int* anonymous_var_nameX611, unsigned long  int n);
unsigned long  int wcsnlen(const int* anonymous_var_nameX612, unsigned long  int anonymous_var_nameX613);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX614, const int** anonymous_var_nameX615, unsigned long  int anonymous_var_nameX616, unsigned long  int anonymous_var_nameX617, union anonymous_typeZ1* anonymous_var_nameX618);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX619, unsigned long  int* anonymous_var_nameX620);
unsigned long  int wcslcat(int* anonymous_var_nameX621, const int* anonymous_var_nameX622, unsigned long  int anonymous_var_nameX623);
unsigned long  int wcslcpy(int* anonymous_var_nameX624, const int* anonymous_var_nameX625, unsigned long  int anonymous_var_nameX626);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_get_finalizer(void* mem);
void come_print_heap_info(void* mem);
void* come_get_cloner(void* mem);
void* come_get_hash_key(void* mem);
void* come_get_equaler(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_call_cloner(void* fun, void* mem);
unsigned int come_call_get_hash_key(void* fun, void* mem);
unsigned int come_call_equals(void* fun, void* mem, void* mem2);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
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
static unsigned int buffer_get_hash_key(struct buffer* self);
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
struct smart_pointer$1char$* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value);
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value);
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value);
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value);
static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self);
struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value);
static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self);
struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value);
static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct vector$1char$* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values);
static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item);
static void vector$1char$$p_finalize(struct vector$1char$* self);
struct vector$1char$p* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values);
static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item);
static void vector$1char$p$p_finalize(struct vector$1char$p* self);
struct vector$1short$* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values);
static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item);
static void vector$1short$$p_finalize(struct vector$1short$* self);
struct vector$1int$* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values);
static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item);
static void vector$1int$$p_finalize(struct vector$1int$* self);
struct vector$1long$* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values);
static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item);
static void vector$1long$$p_finalize(struct vector$1long$* self);
struct vector$1float$* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values);
static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item);
static void vector$1float$$p_finalize(struct vector$1float$* self);
struct vector$1double$* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values);
static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item);
static void vector$1double$$p_finalize(struct vector$1double$* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
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
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(int c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
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
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
int re_match(const char* pattern, const char* text, int* matchlength);
int re_matchp(struct regex_t* pattern, const char* text, int* matchlength);
struct regex_t* re_compile(const char* pattern);
void re_print(struct regex_t* pattern);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
int matchone(struct regex_t p, char c);
int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchpattern(struct regex_t* pattern, const char* text, int* matchlength);
_Bool wchar_t_equals(int left, int right);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sType* use_any_type(struct sType* type);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static _Bool list$1char$ph$p_contained(struct list$1char$ph* self, char* item);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static unsigned int tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static _Bool tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* left, struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static struct tuple2$2bool$char$ph* tuple2$2bool$char$ph_initialize(struct tuple2$2bool$char$ph* self, _Bool v1, char* v2);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
static struct tuple2$2bool$void$p* tuple2$2bool$void$p_initialize(struct tuple2$2bool$void$p* self, _Bool v1, void* v2);
static void tuple2$2bool$void$p$p_finalize(struct tuple2$2bool$void$p* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self);
static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self);
static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_clone(struct tuple3$3sType$phchar$phbool$* self);
static unsigned int tuple3$3sType$phchar$phbool$_get_hash_key(struct tuple3$3sType$phchar$phbool$* self);
static _Bool tuple3$3sType$phchar$phbool$_equals(struct tuple3$3sType$phchar$phbool$* left, struct tuple3$3sType$phchar$phbool$* right);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list_item$1sNode$ph_equals(struct list_item$1sNode$ph* left, struct list_item$1sNode$ph* right);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item);
// uniq global variable
// inline function

// body function
static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_158;
    result_158=0;
    result_158+=int_get_hash_key(((int)self->buf));
    result_158+=int_get_hash_key(((int)self->len));
    result_158+=int_get_hash_key(((int)self->size));
    return result_158;
}

static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__81;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__81 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__81,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__81;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__84;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__84 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__84,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__84;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__86;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__86 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__86,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__86;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__88;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__91;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__91 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__91,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__91;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__96;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__96 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__96,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__96;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__98;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__98 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__98,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__98;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_180;
struct list$1char$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_180=0;    i_180<num_value;    i_180++    ){
        list$1char$$p_push_back(self,values[i_180]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_181;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_182;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_183;
struct list$1char$* __result_obj__100;
    if(    self->len==0) {
        litem_181=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=((void*)0);
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head=litem_181;
    }
    else if(    self->len==1) {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=self->head;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head->next=litem_182;
    }
    else {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->tail;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail->next=litem_183;
        self->tail=litem_183;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_184;
struct list_item$1char$* prev_it_185;
    it_184=self->head;
    while(it_184!=((void*)0)) {
        prev_it_185=it_184;
        it_184=it_184->next;
        come_call_finalizer3(prev_it_185,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_186;
struct list$1char$p* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_186=0;    i_186<num_value;    i_186++    ){
        list$1char$p$p_push_back(self,values[i_186]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__104,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_187;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_188;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_189;
struct list$1char$p* __result_obj__103;
    if(    self->len==0) {
        litem_187=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1) {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->tail;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail->next=litem_189;
        self->tail=litem_189;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_190;
struct list_item$1char$p* prev_it_191;
    it_190=self->head;
    while(it_190!=((void*)0)) {
        prev_it_191=it_190;
        it_190=it_190->next;
        come_call_finalizer3(prev_it_191,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_192;
struct list$1short$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_192=0;    i_192<num_value;    i_192++    ){
        list$1short$$p_push_back(self,values[i_192]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__107,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_193;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_194;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_195;
struct list$1short$* __result_obj__106;
    if(    self->len==0) {
        litem_193=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1) {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->tail;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail->next=litem_195;
        self->tail=litem_195;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_196;
struct list_item$1short$* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        come_call_finalizer3(prev_it_197,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_198;
struct list$1int$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_198=0;    i_198<num_value;    i_198++    ){
        list$1int$$p_push_back(self,values[i_198]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__110,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_199;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_200;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_201;
struct list$1int$* __result_obj__109;
    if(    self->len==0) {
        litem_199=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1) {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->tail;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail->next=litem_201;
        self->tail=litem_201;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_202;
struct list_item$1int$* prev_it_203;
    it_202=self->head;
    while(it_202!=((void*)0)) {
        prev_it_203=it_202;
        it_202=it_202->next;
        come_call_finalizer3(prev_it_203,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_204;
struct list$1long$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0;    i_204<num_value;    i_204++    ){
        list$1long$$p_push_back(self,values[i_204]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__113,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_205;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_206;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_207;
struct list$1long$* __result_obj__112;
    if(    self->len==0) {
        litem_205=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1) {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_208;
struct list_item$1long$* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer3(prev_it_209,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_210;
struct list$1float$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_210=0;    i_210<num_value;    i_210++    ){
        list$1float$$p_push_back(self,values[i_210]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__116,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_211;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_212;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_213;
struct list$1float$* __result_obj__115;
    if(    self->len==0) {
        litem_211=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1) {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->tail;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail->next=litem_213;
        self->tail=litem_213;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_214;
struct list_item$1float$* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer3(prev_it_215,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_216;
struct list$1double$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_216=0;    i_216<num_value;    i_216++    ){
        list$1double$$p_push_back(self,values[i_216]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__119,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_217;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_218;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_219;
struct list$1double$* __result_obj__118;
    if(    self->len==0) {
        litem_217=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1) {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_220;
struct list_item$1double$* prev_it_221;
    it_220=self->head;
    while(it_220!=((void*)0)) {
        prev_it_221=it_220;
        it_220=it_220->next;
        come_call_finalizer3(prev_it_221,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_222;
struct vector$1char$* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$$p_add(self,values[i_222]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__122;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_223;
char* items_224;
void* __right_value128 = (void*)0;
int i_225;
struct vector$1char$* __result_obj__121;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_223)), "/usr/local/include/comelang.h", 2433, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_226;
    if(    0) {
        for(        i_226=0;        i_226<self->len;        i_226++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_227;
struct vector$1char$p* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1char$p$p_add(self,values[i_227]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__125;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_228;
char** items_229;
void* __right_value132 = (void*)0;
int i_230;
struct vector$1char$p* __result_obj__124;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_228)), "/usr/local/include/comelang.h", 2433, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_231;
    if(    0) {
        for(        i_231=0;        i_231<self->len;        i_231++        ){
            (self->items[i_231] = come_decrement_ref_count2(self->items[i_231], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_232;
struct vector$1short$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1short$$p_add(self,values[i_232]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__128;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_233;
short* items_234;
void* __right_value136 = (void*)0;
int i_235;
struct vector$1short$* __result_obj__127;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_233)), "/usr/local/include/comelang.h", 2433, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_236;
    if(    0) {
        for(        i_236=0;        i_236<self->len;        i_236++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_237;
struct vector$1int$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1int$$p_add(self,values[i_237]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__131;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_238;
int* items_239;
void* __right_value140 = (void*)0;
int i_240;
struct vector$1int$* __result_obj__130;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_238)), "/usr/local/include/comelang.h", 2433, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_241;
    if(    0) {
        for(        i_241=0;        i_241<self->len;        i_241++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_242;
struct vector$1long$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1long$$p_add(self,values[i_242]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__134;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_243;
long* items_244;
void* __right_value144 = (void*)0;
int i_245;
struct vector$1long$* __result_obj__133;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_243)), "/usr/local/include/comelang.h", 2433, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_247;
struct vector$1float$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1float$$p_add(self,values[i_247]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__137;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_248;
float* items_249;
void* __right_value148 = (void*)0;
int i_250;
struct vector$1float$* __result_obj__136;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_248)), "/usr/local/include/comelang.h", 2433, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_252;
struct vector$1double$* __result_obj__140;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 2306, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_252=0;    i_252<num_value;    i_252++    ){
        vector$1double$$p_add(self,values[i_252]);
    }
    __result_obj__140 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__140,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__140;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_253;
double* items_254;
void* __right_value152 = (void*)0;
int i_255;
struct vector$1double$* __result_obj__139;
memset(&i_255, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_253=self->size*2;
        items_254=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_253)), "/usr/local/include/comelang.h", 2433, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_255=0;        i_255<self->size;        i_255++        ){
            self->items[i_255]=items_254[i_255];
        }
        self->size=new_size_253;
        come_free(items_254);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__139 = self;
    return __result_obj__139;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_256;
    if(    0) {
        for(        i_256=0;        i_256<self->len;        i_256++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__178 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__178;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_290;
struct list_item$1char$ph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_295;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_296;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_297;
char* __dec_obj22;
struct list$1char$ph* __result_obj__180;
    if(    self->len==0) {
        litem_295=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj20=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj21=litem_296->item;
        litem_296->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj22=litem_297->item;
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result_obj__180 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__180;
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sClass* klass_350;
void* __right_value260 = (void*)0;
struct sType* type_360;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sClass* generics_class_364;
void* __right_value263 = (void*)0;
_Bool generics_type_name_365;
void* __right_value264 = (void*)0;
_Bool mgenerics_type_name_371;
    klass_350=((struct sClass*)(__right_value259=map$2char$phsClass$ph$p_operator_load_element(info->classes,buf)));
    come_call_finalizer3(__right_value259,sClass_finalize, 0, 1, 0, 0, (void*)0);
    type_360=((struct sType*)(__right_value260=map$2char$phsType$ph$p_operator_load_element(info->types,buf)));
    come_call_finalizer3(__right_value260,sType_finalize, 0, 1, 0, 0, (void*)0);
    generics_class_364=((struct sClass*)(__right_value262=map$2char$phsClass$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value261=__builtin_string(buf))))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value262,sClass_finalize, 0, 1, 0, 0, (void*)0);
    generics_type_name_365=list$1char$ph$p_contained(info->generics_type_names,((char*)(__right_value263=__builtin_string(buf))));
    (__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    mgenerics_type_name_371=list$1char$ph$p_contained(info->method_generics_type_names,((char*)(__right_value264=__builtin_string(buf))));
    (__right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    gComeC) {
        return (type_360&&type_360->mTypedef)||(klass_350&&klass_350->mNumber)||(klass_350&&klass_350->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_364||generics_type_name_365||mgenerics_type_name_371||klass_350||type_360||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"generate"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_351;
unsigned int hash_352;
unsigned int it_353;
struct sClass* __result_obj__237;
struct sClass* __result_obj__238;
struct sClass* __result_obj__239;
struct sClass* __result_obj__240;
default_value_351 = (void*)0;
    memset(&default_value_351,0,sizeof(struct sClass*));
    hash_352=string_get_hash_key(((char*)key))%self->size;
    it_353=hash_352;
    while((_Bool)1) {
        if(        self->item_existance[it_353]) {
            if(            string_equals(self->keys[it_353],key)) {
                __result_obj__237 = come_increment_ref_count(self->items[it_353]);
                come_call_finalizer3(default_value_351,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__237,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__237;
            }
            it_353++;
            if(            it_353>=self->size) {
                it_353=0;
            }
            else if(            it_353==hash_352) {
                __result_obj__238 = come_increment_ref_count(default_value_351);
                come_call_finalizer3(default_value_351,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__238,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__238;
            }
        }
        else {
            __result_obj__239 = come_increment_ref_count(default_value_351);
            come_call_finalizer3(default_value_351,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__239,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__239;
        }
    }
    __result_obj__240 = come_increment_ref_count(default_value_351);
    come_call_finalizer3(default_value_351,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__240,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__240;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_354;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_355;
    it_354=self->head;
    while(it_354!=((void*)0)) {
        prev_it_355=it_354;
        it_354=it_354->next;
        come_call_finalizer3(prev_it_355,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_356;
struct list_item$1sType$ph* prev_it_357;
    it_356=self->head;
    while(it_356!=((void*)0)) {
        prev_it_357=it_356;
        it_356=it_356->next;
        come_call_finalizer3(prev_it_357,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_358;
struct list_item$1sNode$ph* prev_it_359;
    it_358=self->head;
    while(it_358!=((void*)0)) {
        prev_it_359=it_358;
        it_358=it_358->next;
        come_call_finalizer3(prev_it_359,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_361;
unsigned int hash_362;
unsigned int it_363;
struct sType* __result_obj__241;
struct sType* __result_obj__242;
struct sType* __result_obj__243;
struct sType* __result_obj__244;
default_value_361 = (void*)0;
    memset(&default_value_361,0,sizeof(struct sType*));
    hash_362=string_get_hash_key(((char*)key))%self->size;
    it_363=hash_362;
    while((_Bool)1) {
        if(        self->item_existance[it_363]) {
            if(            string_equals(self->keys[it_363],key)) {
                __result_obj__241 = come_increment_ref_count(self->items[it_363]);
                come_call_finalizer3(default_value_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__241,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__241;
            }
            it_363++;
            if(            it_363>=self->size) {
                it_363=0;
            }
            else if(            it_363==hash_362) {
                __result_obj__242 = come_increment_ref_count(default_value_361);
                come_call_finalizer3(default_value_361,sType_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__242,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__242;
            }
        }
        else {
            __result_obj__243 = come_increment_ref_count(default_value_361);
            come_call_finalizer3(default_value_361,sType_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__243,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__243;
        }
    }
    __result_obj__244 = come_increment_ref_count(default_value_361);
    come_call_finalizer3(default_value_361,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__244,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__244;
}

static _Bool list$1char$ph$p_contained(struct list$1char$ph* self, char* item){
char* it_368;
    for(    it_368=list$1char$ph$p_begin(self);    !list$1char$ph$p_end(self);    it_368=list$1char$ph$p_next(self)    ){
        if(        string_equals(it_368,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_366;
char* __result_obj__245;
char* __result_obj__246;
char* result_367;
char* __result_obj__247;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_366,0,sizeof(char*));
        __result_obj__245 = result_366;
        return __result_obj__245;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__246 = self->it->item;
        return __result_obj__246;
    }
    memset(&result_367,0,sizeof(char*));
    __result_obj__247 = result_367;
    return __result_obj__247;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_369;
char* __result_obj__248;
char* __result_obj__249;
char* result_370;
char* __result_obj__250;
result_369 = (void*)0;
result_370 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_369,0,sizeof(char*));
        __result_obj__248 = result_369;
        return __result_obj__248;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__249 = self->it->item;
        return __result_obj__249;
    }
    memset(&result_370,0,sizeof(char*));
    __result_obj__250 = result_370;
    return __result_obj__250;
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1sType$ph* o2_saved_372;
struct sType* it_375;
_Bool __result_obj__257;
    for(    o2_saved_372=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_375=list$1sType$ph$p_begin((o2_saved_372));    !list$1sType$ph$p_end((o2_saved_372));    it_375=list$1sType$ph$p_next((o2_saved_372))    ){
        if(        is_contained_generics_class(it_375,info)) {
            __result_obj__257 = (_Bool)1;
            come_call_finalizer3(o2_saved_372,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__257;
        }
    }
    come_call_finalizer3(o2_saved_372,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_373;
struct sType* __result_obj__251;
struct sType* __result_obj__252;
struct sType* result_374;
struct sType* __result_obj__253;
result_373 = (void*)0;
result_374 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_373,0,sizeof(struct sType*));
        __result_obj__251 = result_373;
        return __result_obj__251;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__252 = self->it->item;
        return __result_obj__252;
    }
    memset(&result_374,0,sizeof(struct sType*));
    __result_obj__253 = result_374;
    return __result_obj__253;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_376;
struct sType* __result_obj__254;
struct sType* __result_obj__255;
struct sType* result_377;
struct sType* __result_obj__256;
result_376 = (void*)0;
result_377 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_376,0,sizeof(struct sType*));
        __result_obj__254 = result_376;
        return __result_obj__254;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__255 = self->it->item;
        return __result_obj__255;
    }
    memset(&result_377,0,sizeof(struct sType*));
    __result_obj__256 = result_377;
    return __result_obj__256;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sType$ph* param_types_378;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1char$ph* param_names_379;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1char$ph* param_default_parametors_380;
_Bool var_args_381;
void* __right_value274 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* type__385;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
_Bool void_param_406;
char* p_407;
int sline_408;
void* __right_value313 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* param_type_409=0;
char* param_name_410=0;
_Bool err_411=0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__276;
void* __right_value320 = (void*)0;
struct sType* param_type2_422;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* p_426;
_Bool no_comma_427;
void* __right_value326 = (void*)0;
struct sNode* node_428;
char* p2_429;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__278;
    param_types_378=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 75, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    param_names_379=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05type.c", 76, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    param_default_parametors_380=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05type.c", 77, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    var_args_381=(_Bool)0;
    if(    in_constructor_) {
        list$1char$ph$p_add(param_names_379,(char*)come_increment_ref_count(xsprintf("self")));
        type__385=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        type__385->mHeap=(_Bool)1;
        list$1sType$ph$p_add(param_types_378,(struct sType*)come_increment_ref_count(type__385));
        list$1char$ph$p_add(param_default_parametors_380,((void*)0));
        come_call_finalizer3(type__385,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1char$ph$p_add(param_names_379,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sType$ph$p_add(param_types_378,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type)));
        list$1char$ph$p_add(param_default_parametors_380,((void*)0));
    }
    expected_next_character(40,info);
    void_param_406=(_Bool)0;
    {
        p_407=info->p;
        sline_408=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_406=(_Bool)1;
            }
        }
        info->p=p_407;
        info->sline=sline_408;
    }
    if(    void_param_406) {
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value313=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_409=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_410=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_411=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value313,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_411) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result_obj__276 = come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value319=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 139, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$", tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals)),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(_Bool)0))));
                come_call_finalizer3(param_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
                (param_name_410 = come_decrement_ref_count2(param_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(param_types_378,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_379,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_380,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value319,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__276,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__276;
            }
            param_type2_422=(struct sType*)come_increment_ref_count(solve_generics(param_type_409,info->generics_type,info));
            list$1sType$ph$p_push_back(param_types_378,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type2_422)));
            list$1char$ph$p_push_back(param_names_379,(char*)come_increment_ref_count(come_call_cloner(string_clone, param_name_410)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_426=info->p;
                no_comma_427=info->no_comma;
                info->no_comma=(_Bool)1;
                node_428=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_427;
                p2_429=info->p;
                char buf_430[p2_429-p_426+1];
                memset(&buf_430, 0, sizeof(char)                *(p2_429-p_426+1)                );
                memcpy(buf_430,p_426,p2_429-p_426);
                buf_430[p2_429-p_426]=0;
                list$1char$ph$p_push_back(param_default_parametors_380,(char*)come_increment_ref_count(__builtin_string(buf_430)));
                ((node_428) ? node_428 = come_decrement_ref_count2(node_428, ((struct sNode*)node_428)->finalize, ((struct sNode*)node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                list$1char$ph$p_push_back(param_default_parametors_380,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_381=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_410 = come_decrement_ref_count2(param_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(param_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
                (param_name_410 = come_decrement_ref_count2(param_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(param_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(param_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
            (param_name_410 = come_decrement_ref_count2(param_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result_obj__278 = come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value329=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 197, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$", tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals)),(struct list$1sType$ph*)come_increment_ref_count(param_types_378),(struct list$1char$ph*)come_increment_ref_count(param_names_379),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_380),var_args_381))));
    come_call_finalizer3(param_types_378,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_379,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_380,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value329,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__278,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__278;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__258;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__258 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__258,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__258;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value271 = (void*)0;
struct list_item$1char$ph* litem_382;
char* __dec_obj23;
void* __right_value272 = (void*)0;
struct list_item$1char$ph* litem_383;
char* __dec_obj24;
void* __right_value273 = (void*)0;
struct list_item$1char$ph* litem_384;
char* __dec_obj25;
struct list$1char$ph* __result_obj__259;
    if(    self->len==0) {
        litem_382=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value271=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=((void*)0);
        litem_382->next=((void*)0);
        __dec_obj23=litem_382->item;
        litem_382->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_382;
        self->head=litem_382;
    }
    else if(    self->len==1) {
        litem_383=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value272=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=self->head;
        litem_383->next=((void*)0);
        __dec_obj24=litem_383->item;
        litem_383->item=(char*)come_increment_ref_count(item);
        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_383;
        self->head->next=litem_383;
    }
    else {
        litem_384=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value273=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_384->prev=self->tail;
        litem_384->next=((void*)0);
        __dec_obj25=litem_384->item;
        litem_384->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_384;
        self->tail=litem_384;
    }
    self->len++;
    __result_obj__259 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__260;
void* __right_value275 = (void*)0;
struct sType* result_386;
void* __right_value276 = (void*)0;
struct sType* __dec_obj26;
void* __right_value277 = (void*)0;
struct sType* __dec_obj27;
void* __right_value285 = (void*)0;
struct list$1sType$ph* __dec_obj31;
void* __right_value286 = (void*)0;
struct sType* __dec_obj32;
void* __right_value287 = (void*)0;
struct sType* __dec_obj33;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj34;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj35;
void* __right_value291 = (void*)0;
char* __dec_obj36;
void* __right_value292 = (void*)0;
char* __dec_obj37;
void* __right_value293 = (void*)0;
char* __dec_obj38;
void* __right_value301 = (void*)0;
struct list$1sNode$ph* __dec_obj42;
void* __right_value302 = (void*)0;
char* __dec_obj43;
void* __right_value303 = (void*)0;
struct list$1sType$ph* __dec_obj44;
void* __right_value308 = (void*)0;
struct list$1char$ph* __dec_obj45;
void* __right_value309 = (void*)0;
struct sType* __dec_obj46;
struct sType* __result_obj__272;
    if(    self==(void*)0) {
        __result_obj__260 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__260,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__260;
    }
    result_386=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_386->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj26=result_386->mOriginalLoadVarType;
        result_386->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj27=result_386->mChannelType;
        result_386->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj31=result_386->mGenericsTypes;
        result_386->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj31,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj32=result_386->mNoSolvedGenericsType;
        result_386->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_386->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj33=result_386->mAnyOriginalType;
        result_386->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj34=result_386->mSizeNum;
        result_386->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj35=result_386->mAlignas;
        result_386->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj36=result_386->mTupleName;
        result_386->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj37=result_386->mAttribute;
        result_386->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_386->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_386->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_386->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_386->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_386->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_386->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_386->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_386->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_386->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_386->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_386->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_386->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_386->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_386->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_386->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_386->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_386->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_386->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_386->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_386->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_386->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_386->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_386->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_386->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_386->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_386->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj38=result_386->mAsmName;
        result_386->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_386->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_386->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_386->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj42=result_386->mArrayNum;
        result_386->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj42,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_386->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_386->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_386->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_386->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_386->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj43=result_386->mOriginalTypeName;
        result_386->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_386->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_386->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_386->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_386->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj44=result_386->mParamTypes;
        result_386->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj44,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj45=result_386->mParamNames;
        result_386->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj45,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj46=result_386->mResultType;
        result_386->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_386->mVarArgs=self->mVarArgs;
    }
    __result_obj__272 = come_increment_ref_count(result_386);
    come_call_finalizer3(result_386,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__272,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__272;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__261;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1sType$ph* result_387;
struct list_item$1sType$ph* it_388;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1sType$ph* __result_obj__263;
    if(    self==((void*)0)) {
        __result_obj__261 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__261,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__261;
    }
    result_387=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_388=self->head;
    while(it_388!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_387,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_388->item)));
        }
        else {
            list$1sType$ph$p_add(result_387,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_388->item)));
        }
        it_388=it_388->next;
    }
    __result_obj__263 = come_increment_ref_count(result_387);
    come_call_finalizer3(result_387,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__263,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__263;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value280 = (void*)0;
struct list_item$1sType$ph* litem_389;
struct sType* __dec_obj28;
void* __right_value281 = (void*)0;
struct list_item$1sType$ph* litem_390;
struct sType* __dec_obj29;
void* __right_value282 = (void*)0;
struct list_item$1sType$ph* litem_391;
struct sType* __dec_obj30;
struct list$1sType$ph* __result_obj__262;
    if(    self->len==0) {
        litem_389=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value280=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=((void*)0);
        litem_389->next=((void*)0);
        __dec_obj28=litem_389->item;
        litem_389->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_389;
        self->head=litem_389;
    }
    else if(    self->len==1) {
        litem_390=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value281=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_390->prev=self->head;
        litem_390->next=((void*)0);
        __dec_obj29=litem_390->item;
        litem_390->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_390;
        self->head->next=litem_390;
    }
    else {
        litem_391=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value282=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_391->prev=self->tail;
        litem_391->next=((void*)0);
        __dec_obj30=litem_391->item;
        litem_391->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_391;
        self->tail=litem_391;
    }
    self->len++;
    __result_obj__262 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__262;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_392;
struct list_item$1sType$ph* prev_it_393;
    it_392=self->head;
    while(it_392!=((void*)0)) {
        prev_it_393=it_392;
        it_392=it_392->next;
        come_call_finalizer3(prev_it_393,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__264;
void* __right_value288 = (void*)0;
struct sNode* result_394;
struct sNode* __result_obj__265;
    if(    self==(void*)0) {
        __result_obj__264 = come_increment_ref_count((void*)0);
        ((__result_obj__264) ? __result_obj__264 = come_decrement_ref_count2(__result_obj__264, ((struct sNode*)__result_obj__264)->finalize, ((struct sNode*)__result_obj__264)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__264;
    }
    result_394=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_394->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_394->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_394->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_394->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_394->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_394->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_394->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_394->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_394->kind=self->kind;
    }
    __result_obj__265 = come_increment_ref_count(result_394);
    ((result_394) ? result_394 = come_decrement_ref_count2(result_394, ((struct sNode*)result_394)->finalize, ((struct sNode*)result_394)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__265) ? __result_obj__265 = come_decrement_ref_count2(__result_obj__265, ((struct sNode*)__result_obj__265)->finalize, ((struct sNode*)__result_obj__265)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__265;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__266;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sNode$ph* result_395;
struct list_item$1sNode$ph* it_396;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1sNode$ph* __result_obj__269;
    if(    self==((void*)0)) {
        __result_obj__266 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__266,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__266;
    }
    result_395=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_396=self->head;
    while(it_396!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_395,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_396->item)));
        }
        else {
            list$1sNode$ph$p_add(result_395,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_396->item)));
        }
        it_396=it_396->next;
    }
    __result_obj__269 = come_increment_ref_count(result_395);
    come_call_finalizer3(result_395,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__269,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__269;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__267;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__267 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__267,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__267;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value296 = (void*)0;
struct list_item$1sNode$ph* litem_397;
struct sNode* __dec_obj39;
void* __right_value297 = (void*)0;
struct list_item$1sNode$ph* litem_398;
struct sNode* __dec_obj40;
void* __right_value298 = (void*)0;
struct list_item$1sNode$ph* litem_399;
struct sNode* __dec_obj41;
struct list$1sNode$ph* __result_obj__268;
    if(    self->len==0) {
        litem_397=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value296=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1419, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_397->prev=((void*)0);
        litem_397->next=((void*)0);
        __dec_obj39=litem_397->item;
        litem_397->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_397;
        self->head=litem_397;
    }
    else if(    self->len==1) {
        litem_398=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value297=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1429, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_398->prev=self->head;
        litem_398->next=((void*)0);
        __dec_obj40=litem_398->item;
        litem_398->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_398;
        self->head->next=litem_398;
    }
    else {
        litem_399=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value298=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1439, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_399->prev=self->tail;
        litem_399->next=((void*)0);
        __dec_obj41=litem_399->item;
        litem_399->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_399;
        self->tail=litem_399;
    }
    self->len++;
    __result_obj__268 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__268;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_400;
struct list_item$1sNode$ph* prev_it_401;
    it_400=self->head;
    while(it_400!=((void*)0)) {
        prev_it_401=it_400;
        it_400=it_400->next;
        come_call_finalizer3(prev_it_401,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__270;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1char$ph* result_402;
struct list_item$1char$ph* it_403;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1char$ph* __result_obj__271;
    if(    self==((void*)0)) {
        __result_obj__270 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__270,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__270;
    }
    result_402=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1400, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_403=self->head;
    while(it_403!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_402,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_403->item)));
        }
        else {
            list$1char$ph$p_add(result_402,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_403->item)));
        }
        it_403=it_403->next;
    }
    __result_obj__271 = come_increment_ref_count(result_402);
    come_call_finalizer3(result_402,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__271,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_404;
struct list_item$1char$ph* prev_it_405;
    it_404=self->head;
    while(it_404!=((void*)0)) {
        prev_it_405=it_404;
        it_404=it_404->next;
        come_call_finalizer3(prev_it_405,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__273;
void* __right_value314 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* result_412;
void* __right_value315 = (void*)0;
struct list$1sType$ph* __dec_obj47;
void* __right_value316 = (void*)0;
struct list$1char$ph* __dec_obj48;
void* __right_value317 = (void*)0;
struct list$1char$ph* __dec_obj49;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__274;
    if(    self==(void*)0) {
        __result_obj__273 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__273,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__273;
    }
    result_412=(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone", 3, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj47=result_412->v1;
        result_412->v1=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->v1));
        come_call_finalizer3(__dec_obj47,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj48=result_412->v2;
        result_412->v2=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->v2));
        come_call_finalizer3(__dec_obj48,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj49=result_412->v3;
        result_412->v3=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->v3));
        come_call_finalizer3(__dec_obj49,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_412->v4=self->v4;
    }
    __result_obj__274 = come_increment_ref_count(result_412);
    come_call_finalizer3(result_412,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__274,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__274;
}

static unsigned int tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
unsigned int result_413;
    result_413=0;
    result_413+=int_get_hash_key(((int)self->v1));
    result_413+=int_get_hash_key(((int)self->v2));
    result_413+=int_get_hash_key(((int)self->v3));
    result_413+=int_get_hash_key(((int)self->v4));
    return result_413;
}

static _Bool tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* left, struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* right){
    if(    !list$1sType$ph$p_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_414;
struct list_item$1sType$ph* it2_415;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_414=left->head;
    it2_415=right->head;
    while(it_414!=((void*)0)) {
        if(        !sType_equals(it_414->item,it2_415->item)) {
            return (_Bool)0;
        }
        it_414=it_414->next;
        it2_415=it2_415->next;
    }
    return (_Bool)1;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    !list$1sNode$ph$p_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_equals(struct sClass* left, struct sClass* right){
    if(    !bool_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2char$phsType$ph$ph$p_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_416;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_417;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_416=left->head;
    it2_417=right->head;
    while(it_416!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_416->item,it2_417->item)) {
            return (_Bool)0;
        }
        it_416=it_416->next;
        it2_417=it2_417->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_418;
struct list_item$1sNode$ph* it2_419;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_418=left->head;
    it2_419=right->head;
    while(it_418!=((void*)0)) {
        if(        !sNode_equals(it_418->item,it2_419->item)) {
            return (_Bool)0;
        }
        it_418=it_418->next;
        it2_419=it2_419->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_420;
struct list_item$1char$ph* it2_421;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_420=left->head;
    it2_421=right->head;
    while(it_420!=((void*)0)) {
        if(        !string_equals(it_420->item,it2_421->item)) {
            return (_Bool)0;
        }
        it_420=it_420->next;
        it2_421=it2_421->next;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct list$1sType$ph* __dec_obj50;
struct list$1char$ph* __dec_obj51;
struct list$1char$ph* __dec_obj52;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__275;
    __dec_obj50=self->v1;
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj50,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj51=self->v2;
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj51,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj52=self->v3;
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj52,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->v4=v4;
    __result_obj__275 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v3,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__275,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__275;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value321 = (void*)0;
struct list_item$1sType$ph* litem_423;
struct sType* __dec_obj53;
void* __right_value322 = (void*)0;
struct list_item$1sType$ph* litem_424;
struct sType* __dec_obj54;
void* __right_value323 = (void*)0;
struct list_item$1sType$ph* litem_425;
struct sType* __dec_obj55;
struct list$1sType$ph* __result_obj__277;
    if(    self->len==0) {
        litem_423=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value321=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_423->prev=((void*)0);
        litem_423->next=((void*)0);
        __dec_obj53=litem_423->item;
        litem_423->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_423;
        self->head=litem_423;
    }
    else if(    self->len==1) {
        litem_424=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value322=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_424->prev=self->head;
        litem_424->next=((void*)0);
        __dec_obj54=litem_424->item;
        litem_424->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_424;
        self->head->next=litem_424;
    }
    else {
        litem_425=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value323=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_425->prev=self->tail;
        litem_425->next=((void*)0);
        __dec_obj55=litem_425->item;
        litem_425->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_425;
        self->tail=litem_425;
    }
    self->len++;
    __result_obj__277 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__277;
}

struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value330 = (void*)0;
struct sType* left_type2_431;
void* __right_value331 = (void*)0;
struct sType* right_type2_432;
struct sType* left_no_solved_generics_type_433;
struct sType* right_no_solved_generics_type_434;
struct sClass* left_class_435;
struct sClass* right_class_436;
_Bool parent_class_437;
void* __right_value332 = (void*)0;
_Bool __null_value1;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__280;
_Bool __null_value2;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__281;
struct sClass* klass_438;
_Bool flag__439;
void* __right_value339 = (void*)0;
_Bool __null_value3;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__282;
_Bool __null_value4;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__283;
_Bool __null_value5;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__284;
void* __right_value349 = (void*)0;
char* left_type3_440;
void* __right_value350 = (void*)0;
char* __dec_obj57;
void* __right_value351 = (void*)0;
struct sType* __dec_obj58;
void* __right_value352 = (void*)0;
struct sType* __dec_obj59;
_Bool __null_value6;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__285;
void* __right_value356 = (void*)0;
char* left_type3_441;
void* __right_value357 = (void*)0;
char* __dec_obj60;
void* __right_value358 = (void*)0;
struct sType* __dec_obj61;
void* __right_value359 = (void*)0;
struct sType* __dec_obj62;
_Bool __null_value7;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__286;
_Bool __null_value8;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__287;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__289;
int i_442;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var2 = (void*)0;
_Bool come_exception_var_1_446=0;
char* Err_447=0;
_Bool _if_conditional1;
_Bool __null_value9;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__292;
void* __right_value374 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var3 = (void*)0;
_Bool come_exception_var_2_448=0;
char* Err_449=0;
_Bool _if_conditional2;
_Bool __null_value10;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__293;
_Bool __null_value11;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__294;
_Bool __null_value12;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__295;
void* __right_value384 = (void*)0;
char* left_type3_450;
void* __right_value385 = (void*)0;
char* __dec_obj63;
void* __right_value386 = (void*)0;
struct sType* __dec_obj64;
void* __right_value387 = (void*)0;
struct sType* __dec_obj65;
_Bool __null_value13;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__296;
void* __right_value391 = (void*)0;
char* left_type3_451;
void* __right_value392 = (void*)0;
char* __dec_obj66;
void* __right_value393 = (void*)0;
struct sType* __dec_obj67;
void* __right_value394 = (void*)0;
struct sType* __dec_obj68;
_Bool __null_value14;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__297;
void* __right_value398 = (void*)0;
char* __dec_obj69;
void* __right_value399 = (void*)0;
struct sType* __dec_obj70;
void* __right_value400 = (void*)0;
struct sType* __dec_obj71;
_Bool __null_value15;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__298;
void* __right_value404 = (void*)0;
char* left_type3_452;
void* __right_value405 = (void*)0;
char* __dec_obj72;
void* __right_value406 = (void*)0;
struct sType* __dec_obj73;
void* __right_value407 = (void*)0;
struct sType* __dec_obj74;
_Bool __null_value16;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__299;
void* __right_value411 = (void*)0;
char* left_type3_453;
void* __right_value412 = (void*)0;
char* __dec_obj75;
void* __right_value413 = (void*)0;
struct sType* __dec_obj76;
void* __right_value414 = (void*)0;
struct sType* __dec_obj77;
_Bool __null_value17;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__300;
_Bool __null_value18;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__301;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__302;
_Bool __null_value19;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__303;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__304;
_Bool __null_value20;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__305;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__306;
_Bool __null_value21;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__307;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__308;
_Bool __null_value22;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__309;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__310;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct buffer* buf2_454;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
char* __dec_obj78;
void* __right_value451 = (void*)0;
struct sType* __dec_obj79;
void* __right_value452 = (void*)0;
struct sType* __dec_obj80;
_Bool __null_value23;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__311;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__312;
_Bool __null_value24;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__313;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__314;
_Bool __null_value25;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__315;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__316;
_Bool __null_value26;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__317;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__318;
_Bool __null_value27;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__319;
void* __right_value476 = (void*)0;
char* tmp_455;
void* __right_value477 = (void*)0;
char* __dec_obj81;
void* __right_value478 = (void*)0;
struct sType* __dec_obj82;
void* __right_value479 = (void*)0;
struct sType* __dec_obj83;
_Bool __null_value28;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__320;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__321;
_Bool __null_value29;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__322;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__323;
void* __right_value490 = (void*)0;
char* tmp_456;
void* __right_value491 = (void*)0;
char* __dec_obj84;
void* __right_value492 = (void*)0;
struct sType* __dec_obj85;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__324;
_Bool __null_value30;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__325;
int i_457;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_3_458=0;
char* Err_459=0;
_Bool _if_conditional3;
_Bool __null_value31;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__326;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__327;
memset(&__null_value1, 0, sizeof(_Bool));
memset(&__null_value2, 0, sizeof(_Bool));
memset(&__null_value3, 0, sizeof(_Bool));
memset(&__null_value4, 0, sizeof(_Bool));
memset(&__null_value5, 0, sizeof(_Bool));
memset(&__null_value6, 0, sizeof(_Bool));
memset(&__null_value7, 0, sizeof(_Bool));
memset(&__null_value8, 0, sizeof(_Bool));
memset(&__null_value9, 0, sizeof(_Bool));
memset(&__null_value10, 0, sizeof(_Bool));
memset(&__null_value11, 0, sizeof(_Bool));
memset(&__null_value12, 0, sizeof(_Bool));
memset(&__null_value13, 0, sizeof(_Bool));
memset(&__null_value14, 0, sizeof(_Bool));
memset(&__null_value15, 0, sizeof(_Bool));
memset(&__null_value16, 0, sizeof(_Bool));
memset(&__null_value17, 0, sizeof(_Bool));
memset(&__null_value18, 0, sizeof(_Bool));
memset(&__null_value19, 0, sizeof(_Bool));
memset(&__null_value20, 0, sizeof(_Bool));
memset(&__null_value21, 0, sizeof(_Bool));
memset(&__null_value22, 0, sizeof(_Bool));
memset(&__null_value23, 0, sizeof(_Bool));
memset(&__null_value24, 0, sizeof(_Bool));
memset(&__null_value25, 0, sizeof(_Bool));
memset(&__null_value26, 0, sizeof(_Bool));
memset(&__null_value27, 0, sizeof(_Bool));
memset(&__null_value28, 0, sizeof(_Bool));
memset(&__null_value29, 0, sizeof(_Bool));
memset(&__null_value30, 0, sizeof(_Bool));
memset(&__null_value31, 0, sizeof(_Bool));
    left_type2_431=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
    right_type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type));
    left_no_solved_generics_type_433=((void*)0);
    if(    left_type2_431->mNoSolvedGenericsType) {
        left_no_solved_generics_type_433=left_type2_431->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_434=((void*)0);
    if(    right_type2_432->mNoSolvedGenericsType) {
        right_no_solved_generics_type_434=right_type2_432->mNoSolvedGenericsType;
    }
    left_class_435=left_type2_431->mClass;
    right_class_436=right_type2_432->mClass;
    parent_class_437=(_Bool)0;
    if(    string_operator_not_equals(left_class_435->mName,right_class_436->mName)) {
        while(left_class_435&&right_class_436) {
            if(            string_operator_equals(left_class_435->mName,right_class_436->mName)) {
                parent_class_437=(_Bool)1;
            }
            if(            right_class_436->mParentClassName) {
                right_class_436=((struct sClass*)(__right_value332=map$2char$phsClass$ph$p_operator_load_element(info->classes,right_class_436->mParentClassName)));
                come_call_finalizer3(__right_value332,sClass_finalize, 0, 1, 0, 0, (void*)0);
            }
            else {
                right_class_436=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type2_431->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            string_operator_equals(left_type2_431->mClass->mName,"lambda")) {
            }
            else if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__280 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value335=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 243, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value1,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value335,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__280,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__280;
            }
        }
        else if(        left_type2_431->mPointerNum==0&&right_type->mPointerNum>0) {
            if(            list$1sNode$ph$p_length(left_type2_431->mArrayNum)>0) {
            }
            else if(            string_operator_equals(left_type2_431->mClass->mName,"lambda")||string_operator_equals(right_type->mClass->mName,"void")) {
            }
            else if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__281 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value338=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 258, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value2,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value338,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__281,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__281;
            }
        }
        else if(        left_type2_431->mPointerNum>0&&right_type->mPointerNum>0) {
            klass_438=right_type->mClass;
            flag__439=(_Bool)0;
            while(klass_438) {
                if(                string_operator_equals(klass_438->mName,left_type2_431->mClass->mName)) {
                    flag__439=(_Bool)1;
                }
                if(                klass_438->mParentClassName) {
                    klass_438=((struct sClass*)(__right_value339=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_438->mParentClassName)));
                    come_call_finalizer3(__right_value339,sClass_finalize, 0, 1, 0, 0, (void*)0);
                }
                else {
                    klass_438=((void*)0);
                }
            }
            if(            string_operator_equals(left_type2_431->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type2_431->mClass->mName,"lambda")) {
            }
            else if(            left_type2_431->mException) {
            }
            else if(            left_no_solved_generics_type_433&&right_no_solved_generics_type_434&&(list$1sType$ph$p_length(left_no_solved_generics_type_433->mGenericsTypes)>0||list$1sType$ph$p_length(right_no_solved_generics_type_434->mGenericsTypes)>0)) {
            }
            else if(            strlen(left_type2_431->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_431->mClass->mName,"tuple",strlen("tuple"))==0&&(strlen(right_type->mClass->mName)>=strlen("tuple"))) {
            }
            else if(            string_operator_equals(right_type->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type2_431->mClass->mName,right_type->mClass->mName)&&!flag__439) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                    info->err_num++;
                    __result_obj__282 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value342=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 300, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value3,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value342,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__282,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__282;
                }
            }
        }
    }
    if(    left_no_solved_generics_type_433&&right_no_solved_generics_type_434) {
        if(        strlen(left_type2_431->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_431->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result_obj__283 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value345=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 319, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value4,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value345,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__283,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__283;
            }
        }
        else if(        right_type->mPointerNum==0&&left_type2_431->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_431->mClass->mNumber&&left_type2_431->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_433->mGenericsTypes),left_no_solved_generics_type_433->mClass->mName,left_type2_431->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_434->mGenericsTypes),right_no_solved_generics_type_434->mClass->mName,right_type2_432->mClass->mName);
                    info->err_num++;
                    __result_obj__284 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value348=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 333, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value5,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value348,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__284,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__284;
                }
            }
            else {
                left_type3_440=(char*)come_increment_ref_count(make_type_name_string(left_type2_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj57=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_440,come_value->c_value));
                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj58=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
                come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj59=right_type2_432;
                right_type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
                come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_440 = come_decrement_ref_count2(left_type3_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_431->mClass->mFloat&&left_type2_431->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_433->mGenericsTypes),left_no_solved_generics_type_433->mClass->mName,left_type2_431->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_434->mGenericsTypes),right_no_solved_generics_type_434->mClass->mName,right_type2_432->mClass->mName);
                    info->err_num++;
                    __result_obj__285 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value355=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 354, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value6,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value355,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__285,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__285;
                }
            }
            else {
                left_type3_441=(char*)come_increment_ref_count(make_type_name_string(left_type2_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj60=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_441,come_value->c_value));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj61=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
                come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj62=right_type2_432;
                right_type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
                come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_441 = come_decrement_ref_count2(left_type3_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,right_type2_432->mClass->mName)&&left_type2_431->mPointerNum==right_type2_432->mPointerNum) {
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,"void")&&left_type2_431->mPointerNum>0&&string_operator_equals(left_type2_431->mClass->mName,right_type2_432->mClass->mName)&&(left_type2_431->mPointerNum!=right_type2_432->mPointerNum||left_type2_431->mHeap!=right_type2_432->mHeap)) {
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,right_type2_432->mClass->mName)&&(left_type2_431->mPointerNum!=right_type2_432->mPointerNum||left_type2_431->mHeap!=right_type2_432->mHeap)) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2_431->mClass->mName);
            printf("right type class_name %s\n",right_type2_432->mClass->mName);
            printf("left type pointernum %d\n",left_type2_431->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2_431->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_433->mGenericsTypes),left_no_solved_generics_type_433->mClass->mName,left_type2_431->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_434->mGenericsTypes),right_no_solved_generics_type_434->mClass->mName,right_type2_432->mClass->mName);
            info->err_num++;
            __result_obj__286 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value362=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 383, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value7,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value362,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__286,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__286;
        }
        else if(        list$1sType$ph$p_length(left_no_solved_generics_type_433->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_433->mClass->mName,"void")&&left_no_solved_generics_type_433->mPointerNum>0&&right_no_solved_generics_type_434->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_434->mClass->mName,"void")&&right_no_solved_generics_type_434->mPointerNum>0&&left_no_solved_generics_type_433->mPointerNum>0)) {
            }
            else {
                if(                list$1sType$ph$p_length(left_no_solved_generics_type_433->mGenericsTypes)!=list$1sType$ph$p_length(right_no_solved_generics_type_434->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_433->mGenericsTypes),left_no_solved_generics_type_433->mClass->mName,left_type2_431->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_434->mGenericsTypes),right_no_solved_generics_type_434->mClass->mName,right_type2_432->mClass->mName);
                        info->err_num++;
                        __result_obj__287 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value365=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 399, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value8,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value365,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__result_obj__287,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                        return __result_obj__287;
                    }
                    __result_obj__289 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value367=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 402, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value367,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__289,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__289;
                }
                for(                i_442=0;                i_442<list$1sType$ph$p_length(left_no_solved_generics_type_433->mGenericsTypes);                i_442++                ){
                    multiple_assign_var2=((struct tuple2$2bool$char$ph*)(__right_value370=check_assign_type(msg,((struct sType*)(__right_value368=list$1sType$ph$p_operator_load_element(left_no_solved_generics_type_433->mGenericsTypes,i_442))),((struct sType*)(__right_value369=list$1sType$ph$p_operator_load_element(right_no_solved_generics_type_434->mGenericsTypes,i_442))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_1_446=multiple_assign_var2->v1;
                    Err_447=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                    if(                    (_if_conditional1=(Err_447)),                    come_call_finalizer3(__right_value368,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value369,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value370,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional1) {
                        __result_obj__292 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value373=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 407, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value9,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        (Err_447 = come_decrement_ref_count2(Err_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value373,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__result_obj__292,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                        return __result_obj__292;
                    }
                    else {
                    }
                    (Err_447 = come_decrement_ref_count2(Err_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                multiple_assign_var3=((struct tuple2$2bool$char$ph*)(__right_value374=check_assign_type(msg,left_no_solved_generics_type_433,right_no_solved_generics_type_434,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_2_448=multiple_assign_var3->v1;
                Err_449=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                (_if_conditional2=(Err_449)),                come_call_finalizer3(__right_value374,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    __result_obj__293 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value377=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 412, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value10,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    (Err_449 = come_decrement_ref_count2(Err_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value377,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__293,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__293;
                }
                else {
                }
                (Err_449 = come_decrement_ref_count2(Err_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    strlen(left_type2_431->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_431->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
        if(        print_err_msg) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result_obj__294 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value380=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 429, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value11,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value380,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__294,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__294;
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_431->mClass->mNumber&&left_type2_431->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_433->mGenericsTypes),left_no_solved_generics_type_433->mClass->mName,left_type2_431->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_434->mGenericsTypes),right_no_solved_generics_type_434->mClass->mName,right_type2_432->mClass->mName);
                info->err_num++;
                __result_obj__295 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value383=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 441, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value12,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value383,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__295,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__295;
            }
        }
        else {
            left_type3_450=(char*)come_increment_ref_count(make_type_name_string(left_type2_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj63=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_450,come_value->c_value));
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj64=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj65=right_type2_432;
            right_type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_450 = come_decrement_ref_count2(left_type3_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_431->mClass->mFloat&&left_type2_431->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_433->mGenericsTypes),left_no_solved_generics_type_433->mClass->mName,left_type2_431->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_434->mGenericsTypes),right_no_solved_generics_type_434->mClass->mName,right_type2_432->mClass->mName);
                info->err_num++;
                __result_obj__296 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value390=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 462, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value13,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value390,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__296,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__296;
            }
        }
        else {
            left_type3_451=(char*)come_increment_ref_count(make_type_name_string(left_type2_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj66=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_451,come_value->c_value));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj67=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj68=right_type2_432;
            right_type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_451 = come_decrement_ref_count2(left_type3_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    left_type2_431->mHeap&&!right_type2_432->mHeap&&left_type2_431->mPointerNum>0&&right_type2_432->mPointerNum>0&&string_operator_not_equals(right_type2_432->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2_431->mMultipleTypes&&!right_type->mMultipleTypes) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum,left_type2_431->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum,right_type2_432->mHeap);
        info->err_num++;
        __result_obj__297 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value397=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 482, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value14,(char*)come_increment_ref_count(xsprintf("ERR"))))));
        come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value397,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__297,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__297;
    }
    else if(    parent_class_437&&left_type2_431->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj69=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2_431->mClass->mName,come_value->c_value));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj70=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value->var=((void*)0);
        __dec_obj71=right_type2_432;
        right_type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_431->mClass->mNumber&&left_type2_431->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__298 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value403=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 500, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value15,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value403,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__298,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__298;
            }
        }
        else {
            left_type3_452=(char*)come_increment_ref_count(make_type_name_string(left_type2_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj72=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_452,come_value->c_value));
            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj73=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj74=right_type2_432;
            right_type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_452 = come_decrement_ref_count2(left_type3_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_431->mClass->mFloat&&left_type2_431->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__299 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value410=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 521, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value16,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value410,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__299,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__299;
            }
        }
        else {
            left_type3_453=(char*)come_increment_ref_count(make_type_name_string(left_type2_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj75=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_453,come_value->c_value));
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj76=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj77=right_type2_432;
            right_type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_453 = come_decrement_ref_count2(left_type3_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    string_operator_equals(left_type2_431->mClass->mName,right_type2_432->mClass->mName)&&left_type2_431->mPointerNum>0&&right_type2_432->mPointerNum>0&&!right_type2_432->mAllocaValue&&!left_type->mAnyClass&&!right_type2_432->mAnyClass) {
        if(        left_type2_431->mHeap&&!right_type2_432->mHeap) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is %s pointer num %d heap %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum,left_type2_431->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum,right_type2_432->mHeap);
            info->err_num++;
            __result_obj__300 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value417=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 542, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value17,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value417,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__300,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__300;
        }
    }
    else if(    check_no_pointer) {
        if(        left_type2_431->mPointerNum>0) {
            if(            right_type2_432->mPointerNum>0) {
                if(                string_operator_equals(left_type2_431->mClass->mName,"void")||string_operator_equals(right_type2_432->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type2_431->mClass->mName,"va_list")||string_operator_equals(right_type2_432->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type2_431->mClass->mName,right_type2_432->mClass->mName)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                        info->err_num++;
                        __result_obj__301 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value420=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 558, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value18,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value420,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__result_obj__301,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                        return __result_obj__301;
                    }
                    __result_obj__302 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value422=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 560, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value422,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__302,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__302;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                    info->err_num++;
                    __result_obj__303 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value425=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 571, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value19,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value425,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__303,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__303;
                }
                __result_obj__304 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value427=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 574, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value427,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__304,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__304;
            }
        }
        else if(        left_type2_431->mPointerNum==0&&right_type2_432->mPointerNum>0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__305 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value430=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 583, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value20,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value430,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__305,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__305;
            }
            __result_obj__306 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value432=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 585, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value432,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__306,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__306;
        }
        else if(        left_type2_431->mPointerNum>0&&right_type2_432->mPointerNum==0&&string_operator_equals(right_type2_432->mClass->mName,"lambda")&&string_operator_equals(left_type2_431->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type2_431->mClass->mName,right_type2_432->mClass->mName)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__307 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value435=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 595, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value21,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value435,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__307,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__307;
            }
            __result_obj__308 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value437=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 597, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value437,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__308,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__308;
        }
    }
    else if(    !left_type2_431->mNullValue&&right_type2_432->mNullValue) {
        if(        string_operator_equals(left_type2_431->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_432->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,"va_list")||string_operator_equals(right_type2_432->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_432->mClass->mName,"void")&&right_type2_432->mPointerNum==0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__309 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value440=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 611, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value22,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value440,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__309,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__309;
            }
            __result_obj__310 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value442=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 613, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value442,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__310,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__310;
        }
        else {
            buf2_454=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 616, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_str(buf2_454,((char*)(__right_value449=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value445=string_to_string(come_value->c_value))),((char*)(__right_value446=string_to_string(info->sname))),((char*)(__right_value447=int_to_string(info->sline))),((char*)(__right_value448=int_to_string(gComeDebugStackFrameID++)))))));
            (__right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj78=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_454));
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj79=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj80=right_type2_432;
            right_type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(buf2_454,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type2_431->mClass->mName,"char")&&left_type2_431->mPointerNum==1) {
        if(        string_operator_equals(right_type2_432->mClass->mName,"char")&&right_type2_432->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_432->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,"va_list")||string_operator_equals(right_type2_432->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_432->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__311 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value455=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 640, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value23,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value455,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__311,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__311;
            }
            __result_obj__312 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value457=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 643, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value457,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__312,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__312;
        }
        else if(        string_operator_equals(right_type2_432->mClass->mName,"void")&&right_type2_432->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_432->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__313 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value460=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 653, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value24,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value460,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__313,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__313;
            }
            __result_obj__314 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value462=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 655, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value462,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__314,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__314;
        }
        else if(        string_operator_not_equals(left_type2_431->mClass->mName,right_type2_432->mClass->mName)&&!(left_type2_431->mPointerNum>0&&right_type2_432->mPointerNum==0)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__315 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value465=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 663, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value25,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value465,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__315,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__315;
            }
            __result_obj__316 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value467=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 665, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value467,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__316,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__316;
        }
    }
    else if(    string_operator_equals(left_type2_431->mClass->mName,"void")&&left_type2_431->mPointerNum==1) {
        if(        string_operator_equals(right_type2_432->mClass->mName,"void")&&right_type2_432->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_432->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,"va_list")||string_operator_equals(right_type2_432->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_432->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_432->mClass->mName,"void")&&right_type2_432->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_432->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__317 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value470=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 685, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value26,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value470,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__317,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__317;
            }
            __result_obj__318 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value472=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 687, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value472,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__318,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__318;
        }
        else if(        right_type2_432->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                    info->err_num++;
                    __result_obj__319 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value475=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 696, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value27,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value475,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__319,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__319;
                }
            }
            else {
                tmp_455=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj81=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_455));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj82=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
                come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj83=right_type2_432;
                right_type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
                come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (tmp_455 = come_decrement_ref_count2(tmp_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    left_type2_431->mPointerNum>0||(left_type2_431->mPointerNum==0&&left_type2_431->mClass->mStruct)) {
        if(        right_type2_432->mPointerNum>0||(right_type2_432->mPointerNum==0&&right_type2_432->mClass->mStruct)) {
            if(            string_operator_equals(left_type2_431->mClass->mName,"void")||string_operator_equals(right_type2_432->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type2_431->mClass->mName,"va_list")||string_operator_equals(right_type2_432->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type2_431->mClass->mName,right_type2_432->mClass->mName)) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                    info->err_num++;
                    __result_obj__320 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value482=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 721, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value28,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value482,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__320,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__320;
                }
                __result_obj__321 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value484=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 723, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value484,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__321,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__321;
            }
            else if(            int_operator_not_equals(left_type2_431->mPointerNum,right_type2_432->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
            }
            else if(            list$1sNode$ph$p_length(right_type2_432->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum,list$1sNode$ph$p_length(left_type2_431->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum,list$1sNode$ph$p_length(right_type2_432->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,"void")||string_operator_equals(right_type2_432->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,"va_list")||string_operator_equals(right_type2_432->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_432->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_431->mClass->mName,"lambda")&&string_operator_equals(right_type2_432->mClass->mName,"lambda")) {
        }
        else if(        left_type2_431->mPointerNum>0&&right_type2_432->mPointerNum==0&&string_operator_equals(right_type2_432->mClass->mName,"lambda")&&string_operator_equals(left_type2_431->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__322 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value487=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 750, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value29,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value487,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__322,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__322;
            }
            __result_obj__323 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value489=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 753, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value489,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__323,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__323;
        }
        else if(        left_type2_431->mPointerNum>0&&!(string_operator_equals(right_type2_432->mClass->mName,"lambda")&&string_operator_equals(left_type2_431->mClass->mName,"lambda"))&&right_type2_432->mPointerNum==0) {
            tmp_456=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj84=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_456));
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj85=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_431));
            come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __result_obj__324 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value494=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 759, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)))));
            (tmp_456 = come_decrement_ref_count2(tmp_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value494,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__324,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__324;
            (tmp_456 = come_decrement_ref_count2(tmp_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sType$ph$p_length(left_type2_431->mGenericsTypes)>0) {
            if(            list$1sType$ph$p_length(left_type2_431->mGenericsTypes)!=list$1sType$ph$p_length(right_type2_432->mGenericsTypes)) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_431->mClass->mName,left_type2_431->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_432->mClass->mName,right_type2_432->mPointerNum);
                info->err_num++;
                __result_obj__325 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value497=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 769, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value30,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value497,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__325,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__325;
            }
            for(            i_457=0;            i_457<list$1sType$ph$p_length(left_type2_431->mGenericsTypes);            i_457++            ){
                multiple_assign_var4=((struct tuple2$2bool$char$ph*)(__right_value500=check_assign_type(msg,((struct sType*)(__right_value498=list$1sType$ph$p_operator_load_element(left_type2_431->mGenericsTypes,i_457))),((struct sType*)(__right_value499=list$1sType$ph$p_operator_load_element(right_type2_432->mGenericsTypes,i_457))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_3_458=multiple_assign_var4->v1;
                Err_459=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                (_if_conditional3=(Err_459)),                come_call_finalizer3(__right_value498,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value499,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value500,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    __result_obj__326 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value503=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 773, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value31,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    (Err_459 = come_decrement_ref_count2(Err_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value503,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__326,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__326;
                }
                else {
                }
                (Err_459 = come_decrement_ref_count2(Err_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    __result_obj__327 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value505=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 779, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)))));
    come_call_finalizer3(left_type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value505,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__327,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__327;
}

static struct tuple2$2bool$char$ph* tuple2$2bool$char$ph_initialize(struct tuple2$2bool$char$ph* self, _Bool v1, char* v2){
char* __dec_obj56;
struct tuple2$2bool$char$ph* __result_obj__279;
    self->v1=v1;
    __dec_obj56=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__279 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__279,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__279;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2bool$void$p* tuple2$2bool$void$p_initialize(struct tuple2$2bool$void$p* self, _Bool v1, void* v2){
struct tuple2$2bool$void$p* __result_obj__288;
    self->v1=v1;
    self->v2=v2;
    __result_obj__288 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2bool$void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__288,tuple2$2bool$void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__288;
}

static void tuple2$2bool$void$p$p_finalize(struct tuple2$2bool$void$p* self){
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_443;
int i_444;
struct sType* __result_obj__290;
struct sType* default_value_445;
struct sType* __result_obj__291;
default_value_445 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_443=self->head;
    i_444=0;
    while(it_443!=((void*)0)) {
        if(        position==i_444) {
            __result_obj__290 = come_increment_ref_count(it_443->item);
            come_call_finalizer3(__result_obj__290,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__290;
        }
        it_443=it_443->next;
        i_444++;
    }
    memset(&default_value_445,0,sizeof(struct sType*));
    __result_obj__291 = come_increment_ref_count(default_value_445);
    come_call_finalizer3(default_value_445,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__291,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__291;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __right_value506 = (void*)0;
struct sType* result_type_460;
char* var_name_461;
char* p_462;
int sline_463;
void* __right_value507 = (void*)0;
char* word_464;
_Bool between_brace_465;
char* p_466;
int sline_467;
void* __right_value508 = (void*)0;
char* word_468;
void* __right_value509 = (void*)0;
char* __dec_obj86;
void* __right_value510 = (void*)0;
char* __dec_obj87;
_Bool no_comma_470;
void* __right_value511 = (void*)0;
struct sNode* node_471;
struct sNode* __dec_obj88;
char* p_472;
int sline_473;
void* __right_value512 = (void*)0;
char* word_474;
void* __right_value513 = (void*)0;
struct sNode* node_475;
void* __right_value517 = (void*)0;
char* attribute_479;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
char* __dec_obj92;
char* __dec_obj93;
void* __right_value520 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__332;
    result_type_460=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, base_type_name));
    if(    !first) {
        result_type_460->mPointerNum=result_type_460->mTypedefOriginalPointerNum;
    }
    var_name_461=((void*)0);
    {
        p_462=info->p;
        sline_463=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_464=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_464,"const")||string_operator_equals(word_464,"__restrict")||string_operator_equals(word_464,"restrict")||string_operator_equals(word_464,"__user")||string_operator_equals(word_464,"volatile")||string_operator_equals(word_464,"_Nonnull")||string_operator_equals(word_464,"_Nullable")||string_operator_equals(word_464,"_Null_unspecified")||string_operator_equals(word_464,"__user")||string_operator_equals(word_464,"_Addr")) {
            }
            else {
                info->p=p_462;
                info->sline=sline_463;
            }
            (word_464 = come_decrement_ref_count2(word_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p=p_462;
            info->sline=sline_463;
        }
    }
    between_brace_465=(_Bool)0;
    {
        p_466=info->p;
        sline_467=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_468=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_468,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_465=(_Bool)1;
                    }
                }
                (word_468 = come_decrement_ref_count2(word_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_466;
        info->sline=sline_467;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_460->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_465&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj86=var_name_461;
        var_name_461=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_469=0;
        num_anonymous_var_name_469++;
        __dec_obj87=var_name_461;
        var_name_461=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_469));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_465&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_470=info->no_comma;
        info->no_comma=(_Bool)1;
        node_471=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_470;
        __dec_obj88=result_type_460->mSizeNum;
        result_type_460->mSizeNum=(struct sNode*)come_increment_ref_count(node_471);
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); };
        ((node_471) ? node_471 = come_decrement_ref_count2(node_471, ((struct sNode*)node_471)->finalize, ((struct sNode*)node_471)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_472=info->p;
            sline_473=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_474=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_474,"const")||string_operator_equals(word_474,"__restrict")||string_operator_equals(word_474,"restrict")||string_operator_equals(word_474,"__user")||string_operator_equals(word_474,"volatile")||string_operator_equals(word_474,"_Nonnull")||string_operator_equals(word_474,"_Nullable")||string_operator_equals(word_474,"_Null_unspecified")||string_operator_equals(word_474,"__user")||string_operator_equals(word_474,"_Addr")) {
                }
                else {
                    info->p=p_472;
                    info->sline=sline_473;
                }
                (word_474 = come_decrement_ref_count2(word_474, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                info->p=p_472;
                info->sline=sline_473;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_460->mArrayPointerType=(_Bool)1;
            result_type_460->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_475=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph$p_push_back(result_type_460->mArrayNum,(struct sNode*)come_increment_ref_count(node_475));
        parse_sharp_v5(info);
        result_type_460->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        ((node_475) ? node_475 = come_decrement_ref_count2(node_475, ((struct sNode*)node_475)->finalize, ((struct sNode*)node_475)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    attribute_479=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_479,"")) {
        if(        result_type_460->mAttribute) {
            __dec_obj92=result_type_460->mAttribute;
            result_type_460->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value518=string_operator_add(result_type_460->mAttribute," "))),attribute_479));
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value518 = come_decrement_ref_count2(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            __dec_obj93=result_type_460->mAttribute;
            result_type_460->mAttribute=(char*)come_increment_ref_count(attribute_479);
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    ((struct tuple2$2char$phchar$ph*)(__right_value520=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value520,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__332 = come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value525=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "05type.c", 941, "struct tuple2$2sType$phchar$ph", tuple2$2sType$phchar$ph_finalize, tuple2$2sType$phchar$ph_clone, tuple2$2sType$phchar$ph_get_hash_key, tuple2$2sType$phchar$ph_equals)),(struct sType*)come_increment_ref_count(result_type_460),(char*)come_increment_ref_count(var_name_461)))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_460,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_461 = come_decrement_ref_count2(var_name_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute_479 = come_decrement_ref_count2(attribute_479, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value525,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__332,tuple2$2sType$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__332;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value514 = (void*)0;
struct list_item$1sNode$ph* litem_476;
struct sNode* __dec_obj89;
void* __right_value515 = (void*)0;
struct list_item$1sNode$ph* litem_477;
struct sNode* __dec_obj90;
void* __right_value516 = (void*)0;
struct list_item$1sNode$ph* litem_478;
struct sNode* __dec_obj91;
struct list$1sNode$ph* __result_obj__328;
    if(    self->len==0) {
        litem_476=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value514=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1489, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_476->prev=((void*)0);
        litem_476->next=((void*)0);
        __dec_obj89=litem_476->item;
        litem_476->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_476;
        self->head=litem_476;
    }
    else if(    self->len==1) {
        litem_477=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value515=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1499, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_477->prev=self->head;
        litem_477->next=((void*)0);
        __dec_obj90=litem_477->item;
        litem_477->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_477;
        self->head->next=litem_477;
    }
    else {
        litem_478=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value516=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1509, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_478->prev=self->tail;
        litem_478->next=((void*)0);
        __dec_obj91=litem_478->item;
        litem_478->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_478;
        self->tail=litem_478;
    }
    self->len++;
    __result_obj__328 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__328;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self){
struct tuple2$2sType$phchar$ph* __result_obj__329;
void* __right_value521 = (void*)0;
struct tuple2$2sType$phchar$ph* result_480;
void* __right_value522 = (void*)0;
struct sType* __dec_obj94;
void* __right_value523 = (void*)0;
char* __dec_obj95;
struct tuple2$2sType$phchar$ph* __result_obj__330;
    if(    self==(void*)0) {
        __result_obj__329 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__329,tuple2$2sType$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__329;
    }
    result_480=(struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "tuple2$2sType$phchar$ph_clone", 3, "struct tuple2$2sType$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj94=result_480->v1;
        result_480->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj95=result_480->v2;
        result_480->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__330 = come_increment_ref_count(result_480);
    come_call_finalizer3(result_480,tuple2$2sType$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__330,tuple2$2sType$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__330;
}

static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self){
unsigned int result_481;
    result_481=0;
    result_481+=int_get_hash_key(((int)self->v1));
    result_481+=int_get_hash_key(((int)self->v2));
    return result_481;
}

static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj96;
char* __dec_obj97;
struct tuple2$2sType$phchar$ph* __result_obj__331;
    __dec_obj96=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj97=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__331 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sType$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__331,tuple2$2sType$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__331;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_482;
int sline_483;
void* __right_value526 = (void*)0;
char* word_484;
int nest_485;
    p_482=info->p;
    sline_483=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_484=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_484,"__attribute")||string_operator_equals(word_484,"__attribute__"))&&*info->p==40) {
            nest_485=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_485++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_485--;
                    if(                    nest_485==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_484,"const")||string_operator_equals(word_484,"__restrict")||string_operator_equals(word_484,"restrict")||string_operator_equals(word_484,"__user")||string_operator_equals(word_484,"volatile")||string_operator_equals(word_484,"_Nonnull")||string_operator_equals(word_484,"_Nullable")||string_operator_equals(word_484,"__nonnull")||string_operator_equals(word_484,"_Null_unspecified")||string_operator_equals(word_484,"__user")||string_operator_equals(word_484,"_Addr")||string_operator_equals(word_484,"__noreturn")||string_operator_equals(word_484,"_noreturn")||string_operator_equals(word_484,"_Noreturn")) {
        }
        else {
            info->p=p_482;
            info->sline=sline_483;
        }
        (word_484 = come_decrement_ref_count2(word_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->p=p_482;
        info->sline=sline_483;
    }
}

struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
_Bool no_output_err_486;
void* __right_value527 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* type_487=0;
char* name_488=0;
_Bool err_489=0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__336;
    no_output_err_486=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value527=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_487=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
    name_488=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    err_489=multiple_assign_var5->v3;
    come_call_finalizer3(__right_value527,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_486;
    __result_obj__336 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value532=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 998, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(type_487),(char*)come_increment_ref_count(name_488),err_489))));
    come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_488 = come_decrement_ref_count2(name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value532,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__336,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__336;
}

static void tuple3$3sType$phchar$phbool$_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_clone(struct tuple3$3sType$phchar$phbool$* self){
struct tuple3$3sType$phchar$phbool$* __result_obj__333;
void* __right_value528 = (void*)0;
struct tuple3$3sType$phchar$phbool$* result_490;
void* __right_value529 = (void*)0;
struct sType* __dec_obj98;
void* __right_value530 = (void*)0;
char* __dec_obj99;
struct tuple3$3sType$phchar$phbool$* __result_obj__334;
    if(    self==(void*)0) {
        __result_obj__333 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__333,tuple3$3sType$phchar$phbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__333;
    }
    result_490=(struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "tuple3$3sType$phchar$phbool$_clone", 3, "struct tuple3$3sType$phchar$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj98=result_490->v1;
        result_490->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj99=result_490->v2;
        result_490->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_490->v3=self->v3;
    }
    __result_obj__334 = come_increment_ref_count(result_490);
    come_call_finalizer3(result_490,tuple3$3sType$phchar$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__334,tuple3$3sType$phchar$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__334;
}

static unsigned int tuple3$3sType$phchar$phbool$_get_hash_key(struct tuple3$3sType$phchar$phbool$* self){
unsigned int result_491;
    result_491=0;
    result_491+=int_get_hash_key(((int)self->v1));
    result_491+=int_get_hash_key(((int)self->v2));
    result_491+=int_get_hash_key(((int)self->v3));
    return result_491;
}

static _Bool tuple3$3sType$phchar$phbool$_equals(struct tuple3$3sType$phchar$phbool$* left, struct tuple3$3sType$phchar$phbool$* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3){
struct sType* __dec_obj100;
char* __dec_obj101;
struct tuple3$3sType$phchar$phbool$* __result_obj__335;
    __dec_obj100=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj101=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result_obj__335 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__335,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__335;
}

struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
char* head_492;
int head_sline_493;
void* __right_value533 = (void*)0;
char* type_name_494;
_Bool record__495;
_Bool exception__496;
_Bool constant_497;
_Bool static__498;
_Bool volatile__499;
_Bool register__500;
_Bool unsigned__501;
_Bool long__502;
_Bool long_long_503;
_Bool short__504;
_Bool restrict__505;
_Bool struct__506;
_Bool union__507;
_Bool enum__508;
_Bool no_heap_509;
_Bool extern__510;
_Bool inline__511;
_Bool uniq__512;
_Bool tuple__513;
_Bool generate__514;
struct sNode* alignas__515;
_Bool anonymous_type_516;
_Bool anonymous_name_517;
_Bool atomic__518;
_Bool object_interface_519;
void* __right_value534 = (void*)0;
char* __dec_obj102;
void* __right_value535 = (void*)0;
char* __dec_obj103;
void* __right_value536 = (void*)0;
char* __dec_obj104;
int brace_num_520;
void* __right_value537 = (void*)0;
char* __dec_obj105;
int brace_num_521;
void* __right_value538 = (void*)0;
char* __dec_obj106;
void* __right_value539 = (void*)0;
char* __dec_obj107;
void* __right_value540 = (void*)0;
char* __dec_obj108;
void* __right_value541 = (void*)0;
char* __dec_obj109;
void* __right_value542 = (void*)0;
char* __dec_obj110;
void* __right_value543 = (void*)0;
struct sNode* exp_522;
struct sNode* __dec_obj111;
void* __right_value544 = (void*)0;
char* __dec_obj112;
void* __right_value545 = (void*)0;
char* __dec_obj113;
void* __right_value546 = (void*)0;
char* __dec_obj114;
void* __right_value547 = (void*)0;
char* __dec_obj115;
void* __right_value548 = (void*)0;
char* __dec_obj116;
void* __right_value549 = (void*)0;
char* __dec_obj117;
void* __right_value550 = (void*)0;
char* __dec_obj118;
void* __right_value551 = (void*)0;
char* __dec_obj119;
void* __right_value552 = (void*)0;
char* __dec_obj120;
void* __right_value553 = (void*)0;
char* __dec_obj121;
char* p_523;
int sline_524;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
char* __dec_obj122;
void* __right_value556 = (void*)0;
char* __dec_obj123;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
char* __dec_obj124;
char* p_525;
int sline_526;
void* __right_value559 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c1_527=0;
char* Err_528=0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__337;
char* p_529;
int sline_530;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__338;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* node_531;
_Bool Value_532;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__339;
char* p_533;
int sline_534;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
char* __dec_obj125;
void* __right_value573 = (void*)0;
char* __dec_obj126;
void* __right_value574 = (void*)0;
char* __dec_obj127;
char* p_535;
int sline_536;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__340;
void* __right_value578 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* type_537=0;
char* name_538=0;
_Bool err_539=0;
char* p_540;
int sline_541;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__341;
void* __right_value583 = (void*)0;
char* __dec_obj128;
void* __right_value584 = (void*)0;
char* __dec_obj129;
void* __right_value585 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type_542=0;
char* name_543=0;
_Bool err_544=0;
char* p_545;
int sline_546;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__342;
char* p_547;
int sline_548;
void* __right_value589 = (void*)0;
char* __dec_obj130;
void* __right_value590 = (void*)0;
char* __dec_obj131;
void* __right_value591 = (void*)0;
char* __dec_obj132;
void* __right_value592 = (void*)0;
char* __dec_obj133;
void* __right_value593 = (void*)0;
char* __dec_obj134;
void* __right_value594 = (void*)0;
char* __dec_obj135;
void* __right_value595 = (void*)0;
char* __dec_obj136;
char* p_549;
int sline_550;
void* __right_value596 = (void*)0;
char* __dec_obj137;
char* p_551;
int sline_552;
void* __right_value597 = (void*)0;
char* __dec_obj138;
void* __right_value598 = (void*)0;
char* __dec_obj139;
void* __right_value599 = (void*)0;
char* __dec_obj140;
char* p_553;
int sline_554;
void* __right_value600 = (void*)0;
char* __dec_obj141;
void* __right_value601 = (void*)0;
char* __dec_obj142;
void* __right_value602 = (void*)0;
char* __dec_obj143;
void* __right_value603 = (void*)0;
char* __dec_obj144;
void* __right_value604 = (void*)0;
char* __dec_obj145;
void* __right_value605 = (void*)0;
char* __dec_obj146;
void* __right_value606 = (void*)0;
char* __dec_obj147;
void* __right_value607 = (void*)0;
char* __dec_obj148;
void* __right_value608 = (void*)0;
char* __dec_obj149;
void* __right_value609 = (void*)0;
char* __dec_obj150;
void* __right_value610 = (void*)0;
char* __dec_obj151;
char* p_555;
int sline_556;
void* __right_value611 = (void*)0;
char* __dec_obj152;
void* __right_value612 = (void*)0;
char* __dec_obj153;
void* __right_value613 = (void*)0;
char* attribute_557;
int pointer_num_558;
_Bool heap_559;
_Bool refference_560;
_Bool no_refference_561;
_Bool channel_562;
_Bool any_class_563;
_Bool vtable_564;
char* tuple_name_565;
void* __right_value614 = (void*)0;
char* __dec_obj154;
_Bool lambda_flag_566;
char* pX_567;
int slineX_568;
void* __right_value615 = (void*)0;
struct sType* type_569;
char* var_name_570;
_Bool function_pointer_flag_571;
char* p_572;
int sline_573;
void* __right_value616 = (void*)0;
char* word_574;
_Bool var_name_between_brace_575;
char* p_576;
int sline_577;
void* __right_value617 = (void*)0;
char* word_578;
void* __right_value618 = (void*)0;
char* __dec_obj155;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sNode* node_580;
_Bool Value_581;
void* __right_value621 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c2_582=0;
char* Err_583=0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__343;
int pointer_num_584;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sType* __dec_obj156;
void* __right_value627 = (void*)0;
char* __dec_obj157;
void* __right_value628 = (void*)0;
struct sNode* node_585;
_Bool Value_586;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__344;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sType* __dec_obj158;
void* __right_value634 = (void*)0;
char* __dec_obj159;
void* __right_value635 = (void*)0;
struct sNode* node_587;
_Bool Value_588;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__345;
int pointer_num_589;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sType* __dec_obj160;
void* __right_value641 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c3_590=0;
char* Err_591=0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__346;
void* __right_value644 = (void*)0;
char* attribute_592;
char* __dec_obj161;
void* __right_value645 = (void*)0;
char* __dec_obj162;
void* __right_value646 = (void*)0;
char* __dec_obj163;
void* __right_value647 = (void*)0;
char* __dec_obj164;
void* __right_value648 = (void*)0;
char* __dec_obj165;
_Bool no_comma_595;
void* __right_value649 = (void*)0;
struct sNode* node_596;
struct sNode* __dec_obj166;
void* __right_value650 = (void*)0;
char* attribute2_597;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
char* __dec_obj167;
char* __dec_obj168;
struct sType* result_type_598;
void* __right_value653 = (void*)0;
_Bool _if_conditional4;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* __dec_obj169;
void* __right_value656 = (void*)0;
int i_599;
void* __right_value657 = (void*)0;
_Bool _if_conditional5;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sType* __dec_obj170;
int i_603;
void* __right_value661 = (void*)0;
_Bool _if_conditional6;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sType* __dec_obj171;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sType* __dec_obj172;
struct sNode* __dec_obj173;
void* __right_value668 = (void*)0;
char* __dec_obj174;
void* __right_value669 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var11 = (void*)0;
struct list$1sType$ph* param_types_604=0;
struct list$1char$ph* param_names_605=0;
struct list$1char$ph* param_default_parametors_606=0;
_Bool var_args_607=0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sType* __dec_obj175;
struct sType* __dec_obj176;
struct list$1sType$ph* __dec_obj177;
struct list$1char$ph* __dec_obj178;
int function_pointer_num_608;
struct sType* result_type_609;
void* __right_value673 = (void*)0;
_Bool _if_conditional7;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sType* __dec_obj179;
void* __right_value676 = (void*)0;
int i_610;
void* __right_value677 = (void*)0;
_Bool _if_conditional8;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sType* __dec_obj180;
int i_611;
void* __right_value681 = (void*)0;
_Bool _if_conditional9;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sType* __dec_obj181;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sType* __dec_obj182;
struct sNode* __dec_obj183;
void* __right_value688 = (void*)0;
char* __dec_obj184;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__349;
void* __right_value691 = (void*)0;
char* __dec_obj185;
_Bool function_pointer_array_613;
int function_pointer_array_num_614;
int n_615;
void* __right_value692 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var12 = (void*)0;
struct list$1sType$ph* param_types_616=0;
struct list$1char$ph* param_names_617=0;
struct list$1char$ph* param_default_parametors_618=0;
_Bool var_args_619=0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sType* __dec_obj186;
void* __right_value696 = (void*)0;
struct sType* __dec_obj187;
struct list$1sType$ph* __dec_obj188;
struct list$1char$ph* __dec_obj189;
void* __right_value697 = (void*)0;
struct sNode* exp_620;
_Bool Value_621;
void* __right_value698 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c4_622=0;
char* Err_623=0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__350;
void* __right_value701 = (void*)0;
struct CVALUE* come_value_624;
void* __right_value702 = (void*)0;
struct sType* __dec_obj190;
void* __right_value703 = (void*)0;
char* attribute_625;
char* __dec_obj191;
void* __right_value704 = (void*)0;
char* __dec_obj192;
void* __right_value705 = (void*)0;
char* __dec_obj193;
void* __right_value706 = (void*)0;
char* __dec_obj194;
void* __right_value707 = (void*)0;
char* __dec_obj195;
_Bool no_comma_628;
void* __right_value708 = (void*)0;
struct sNode* node_629;
struct sNode* __dec_obj196;
void* __right_value709 = (void*)0;
char* attribute2_630;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
char* __dec_obj197;
char* __dec_obj198;
void* __right_value712 = (void*)0;
_Bool _if_conditional10;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sType* __dec_obj199;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
char* __dec_obj200;
struct sNode* __dec_obj201;
char* __dec_obj202;
int i_631;
void* __right_value717 = (void*)0;
_Bool _if_conditional11;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sType* __dec_obj203;
struct sNode* __dec_obj204;
char* __dec_obj205;
int i_632;
void* __right_value721 = (void*)0;
_Bool _if_conditional12;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sType* __dec_obj206;
struct sNode* __dec_obj207;
char* __dec_obj208;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
_Bool _if_conditional13;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__351;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sType* __dec_obj209;
void* __right_value732 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* generics_type_633=0;
char* var_name_634=0;
_Bool err_635=0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__352;
void* __right_value735 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c5_636=0;
char* Err_637=0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__353;
void* __right_value738 = (void*)0;
struct sType* __dec_obj210;
void* __right_value739 = (void*)0;
char* new_name_638;
struct sNode* __dec_obj211;
char* __dec_obj212;
char* __dec_obj213;
void* __right_value740 = (void*)0;
struct sClass* klass_639;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sClass* klass_681;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sType* __dec_obj214;
struct sNode* __dec_obj215;
char* __dec_obj216;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1sType$ph* types_682;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* type2_683=0;
char* name_684=0;
_Bool err_685=0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__375;
void* __right_value764 = (void*)0;
int num_tuples_686;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sType* __dec_obj217;
struct list$1sType$ph* o2_saved_687;
struct sType* it_688;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sType* __dec_obj218;
void* __right_value770 = (void*)0;
char* new_name_689;
char* __dec_obj219;
void* __right_value771 = (void*)0;
char* attribute_690;
char* __dec_obj220;
void* __right_value772 = (void*)0;
char* __dec_obj221;
void* __right_value773 = (void*)0;
char* __dec_obj222;
void* __right_value774 = (void*)0;
char* __dec_obj223;
void* __right_value775 = (void*)0;
char* __dec_obj224;
_Bool no_comma_693;
void* __right_value776 = (void*)0;
struct sNode* node_694;
struct sNode* __dec_obj225;
void* __right_value777 = (void*)0;
char* attribute2_695;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
char* __dec_obj226;
char* __dec_obj227;
void* __right_value780 = (void*)0;
struct sNode* node_696;
void* __right_value781 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var17 = (void*)0;
char* asm_name_697=0;
char* attribute2_698=0;
char* __dec_obj228;
char* __dec_obj229;
void* __right_value782 = (void*)0;
struct sType* type_before_699;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sType* __dec_obj230;
void* __right_value786 = (void*)0;
struct sNode* __list_values1___700[1];
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct list$1sNode$ph* __dec_obj231;
struct sType* __dec_obj232;
void* __right_value790 = (void*)0;
struct sType* type_before_704;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sType* __dec_obj233;
struct sType* __dec_obj234;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct sType* type2_705;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sType* type3_711;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct sType* type4_712;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__381;
char* __dec_obj236;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__382;
type_569 = (void*)0;
var_name_570 = (void*)0;
result_type_598 = (void*)0;
result_type_609 = (void*)0;
    head_492=info->p;
    head_sline_493=info->sline;
    info->define_struct=(_Bool)0;
    type_name_494=(char*)come_increment_ref_count(parse_word(info));
    record__495=(_Bool)0;
    exception__496=(_Bool)0;
    constant_497=(_Bool)0;
    static__498=(_Bool)0;
    volatile__499=(_Bool)0;
    register__500=(_Bool)0;
    unsigned__501=(_Bool)0;
    long__502=(_Bool)0;
    long_long_503=(_Bool)0;
    short__504=(_Bool)0;
    restrict__505=(_Bool)0;
    struct__506=(_Bool)0;
    union__507=(_Bool)0;
    enum__508=(_Bool)0;
    no_heap_509=(_Bool)0;
    extern__510=(_Bool)0;
    inline__511=(_Bool)0;
    uniq__512=(_Bool)0;
    tuple__513=(_Bool)0;
    generate__514=(_Bool)0;
    alignas__515=((void*)0);
    anonymous_type_516=(_Bool)0;
    anonymous_name_517=(_Bool)0;
    atomic__518=(_Bool)0;
    object_interface_519=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_494,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_519=(_Bool)1;
            __dec_obj102=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj103=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            atomic__518=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_494,"__extension__")) {
            __dec_obj104=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_520=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_520++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_520--;
                        if(                        brace_num_520==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj105=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"__declspec")) {
            if(            *info->p==40) {
                brace_num_521=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_521++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_521--;
                        if(                        brace_num_521==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj106=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"_Noreturn")) {
            __dec_obj107=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"__noreturn")) {
            __dec_obj108=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"_Nullable")) {
            __dec_obj109=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"_noreturn")) {
            __dec_obj110=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"_Alignas")) {
            expected_next_character(40,info);
            exp_522=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj111=alignas__515;
            alignas__515=(struct sNode*)come_increment_ref_count(exp_522);
            if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj112=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
            ((exp_522) ? exp_522 = come_decrement_ref_count2(exp_522, ((struct sNode*)exp_522)->finalize, ((struct sNode*)exp_522)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(type_name_494,"const")) {
            constant_497=(_Bool)1;
            __dec_obj113=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"static")) {
            static__498=(_Bool)1;
            __dec_obj114=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"uniq")) {
            uniq__512=(_Bool)1;
            __dec_obj115=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"record")) {
            record__495=(_Bool)1;
            __dec_obj116=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"exception")) {
            exception__496=(_Bool)1;
            __dec_obj117=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"extern")) {
            extern__510=(_Bool)1;
            __dec_obj118=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"inline")||string_operator_equals(type_name_494,"__inline")||string_operator_equals(type_name_494,"__inline__")||string_operator_equals(type_name_494,"__always_inline")||string_operator_equals(type_name_494,"__forceinline")) {
            inline__511=(_Bool)1;
            __dec_obj119=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"volatile")) {
            volatile__499=(_Bool)1;
            __dec_obj120=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"generate")) {
            generate__514=(_Bool)1;
            __dec_obj121=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"struct")) {
            struct__506=(_Bool)1;
            if(            *info->p==123) {
                p_523=info->p;
                sline_524=info->sline;
                ((char*)(__right_value554=skip_block(info)));
                (__right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    anonymous_name_517=(_Bool)1;
                    anonymous_type_516=(_Bool)1;
                    __dec_obj122=type_name_494;
                    type_name_494=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_523;
                    info->sline=sline_524;
                    break;
                }
                else {
                    anonymous_type_516=(_Bool)1;
                    __dec_obj123=type_name_494;
                    type_name_494=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_523;
                    info->sline=sline_524;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value557=parse_struct_attribute(info)));
                (__right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj124=type_name_494;
                type_name_494=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_525=info->p;
                    sline_526=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_525;
                                info->sline=sline_526;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value559=err_msg(info,"invalid struct definition")));
                            come_exception_var_c1_527=multiple_assign_var6->v1;
                            Err_528=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            ((Err_528)?(puts(Err_528),exit(0)):(0));
                            come_call_finalizer3(__right_value559,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            __result_obj__337 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value561=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1233, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(__right_value561,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(__result_obj__337,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                            return __result_obj__337;
                            (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_529=info->p;
                    sline_530=info->sline;
                    ((char*)(__right_value562=skip_block(info)));
                    (__right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (void)((char*)(__right_value563=parse_struct_attribute(info)));
                    (__right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    if(                    *info->p==59) {
                        info->p=head_492;
                        info->sline=head_sline_493;
                        info->define_struct=(_Bool)1;
                        __result_obj__338 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value565=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1253, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                        (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(__right_value565,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__result_obj__338,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                        return __result_obj__338;
                    }
                    else {
                        info->p=p_529;
                        info->sline=sline_530;
                        node_531=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_494),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_532=node_compile(node_531,info);
                        if(                        !Value_532) {
                            __result_obj__339 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value569=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1265, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            ((node_531) ? node_531 = come_decrement_ref_count2(node_531, ((struct sNode*)node_531)->finalize, ((struct sNode*)node_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(__right_value569,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(__result_obj__339,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                            return __result_obj__339;
                        }
                        else {
                        }
                        ((node_531) ? node_531 = come_decrement_ref_count2(node_531, ((struct sNode*)node_531)->finalize, ((struct sNode*)node_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                        ((node_531) ? node_531 = come_decrement_ref_count2(node_531, ((struct sNode*)node_531)->finalize, ((struct sNode*)node_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_494,"union")) {
            union__507=(_Bool)1;
            if(            *info->p==123) {
                p_533=info->p;
                sline_534=info->sline;
                ((char*)(__right_value570=skip_block(info)));
                (__right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value571=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value571,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                *info->p==59) {
                    info->p=head_492;
                    info->sline=head_sline_493;
                    info->define_struct=(_Bool)0;
                    anonymous_type_516=(_Bool)1;
                    __dec_obj125=type_name_494;
                    type_name_494=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_533;
                    info->sline=sline_534;
                    break;
                }
                else {
                    anonymous_type_516=(_Bool)1;
                    __dec_obj126=type_name_494;
                    type_name_494=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_533;
                    info->sline=sline_534;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj127=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_535=info->p;
                sline_536=info->sline;
                ((char*)(__right_value575=skip_block(info)));
                (__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    info->p=head_492;
                    info->sline=head_sline_493;
                    info->define_struct=(_Bool)1;
                    __result_obj__340 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value577=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1322, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(__right_value577,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__340,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__340;
                }
                else {
                    anonymous_type_516=(_Bool)1;
                    info->p=p_535;
                    info->sline=sline_536;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_494,"enum")) {
            enum__508=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value578=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_537=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name_538=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_539=multiple_assign_var7->v3;
                come_call_finalizer3(__right_value578,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_538 = come_decrement_ref_count2(name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_540=info->p;
                sline_541=info->sline;
                ((char*)(__right_value579=skip_block(info)));
                (__right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value580=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value580,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                *info->p==59) {
                    info->p=head_492;
                    info->sline=head_sline_493;
                    info->define_struct=(_Bool)1;
                    __result_obj__341 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value582=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1360, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(__right_value582,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__341,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__341;
                }
                else {
                    anonymous_type_516=(_Bool)1;
                    __dec_obj128=type_name_494;
                    type_name_494=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_540;
                    info->sline=sline_541;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj129=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value585=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_542=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_543=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_544=multiple_assign_var8->v3;
                come_call_finalizer3(__right_value585,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_543 = come_decrement_ref_count2(name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_545=info->p;
                sline_546=info->sline;
                ((char*)(__right_value586=skip_block(info)));
                (__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    info->p=head_492;
                    info->sline=head_sline_493;
                    info->define_struct=(_Bool)1;
                    __result_obj__342 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value588=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1396, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(__right_value588,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__342,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__342;
                }
                else {
                    anonymous_type_516=(_Bool)1;
                    info->p=p_545;
                    info->sline=sline_546;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_494,"long")) {
            {
                p_547=info->p;
                sline_548=info->sline;
                if(                !(xisalpha(*info->p)||*info->p==95)) {
                    info->p=p_547;
                    info->sline=sline_548;
                    __dec_obj130=type_name_494;
                    type_name_494=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj131=type_name_494;
                    type_name_494=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_494,"unsigned")) {
                        __dec_obj132=type_name_494;
                        type_name_494=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_494,"int")) {
                            long__502=(_Bool)1;
                            unsigned__501=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_494,"signed")) {
                        __dec_obj133=type_name_494;
                        type_name_494=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_494,"int")) {
                            long__502=(_Bool)1;
                            unsigned__501=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_494,"long")) {
                        p_547=info->p;
                        sline_548=info->sline;
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            long_long_503=(_Bool)1;
                            __dec_obj134=type_name_494;
                            type_name_494=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__502=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_494,"int")) {
                            long_long_503=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_494,info)) {
                            __dec_obj135=type_name_494;
                            type_name_494=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_503=(_Bool)1;
                            info->p=p_547;
                            info->sline=sline_548;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_494,info)) {
                        if(                        long__502) {
                            long_long_503=(_Bool)1;
                            long__502=(_Bool)0;
                        }
                        else {
                            long__502=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_547;
                        info->sline=sline_548;
                        __dec_obj136=type_name_494;
                        type_name_494=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_494,"unsigned")) {
            unsigned__501=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_549=info->p;
                sline_550=info->sline;
                __dec_obj137=type_name_494;
                type_name_494=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_494,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_551=info->p;
                        sline_552=info->sline;
                        __dec_obj138=type_name_494;
                        type_name_494=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_494,info)) {
                            short__504=(_Bool)1;
                        }
                        else {
                            short__504=(_Bool)1;
                            __dec_obj139=type_name_494;
                            type_name_494=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_551;
                            info->sline=sline_552;
                        }
                    }
                    else {
                        short__504=(_Bool)1;
                        __dec_obj140=type_name_494;
                        type_name_494=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_494,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_553=info->p;
                        sline_554=info->sline;
                        __dec_obj141=type_name_494;
                        type_name_494=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_494,info)) {
                            long__502=(_Bool)1;
                        }
                        else {
                            long__502=(_Bool)1;
                            __dec_obj142=type_name_494;
                            type_name_494=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_553;
                            info->sline=sline_554;
                        }
                    }
                    else {
                        long__502=(_Bool)1;
                        __dec_obj143=type_name_494;
                        type_name_494=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_494,info)) {
                    __dec_obj144=type_name_494;
                    type_name_494=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_549;
                    info->sline=sline_550;
                    break;
                }
            }
            else {
                __dec_obj145=type_name_494;
                type_name_494=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_494,"signed")||string_operator_equals(type_name_494,"__signed__")) {
            unsigned__501=(_Bool)0;
            __dec_obj146=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"register")) {
            register__500=(_Bool)1;
            __dec_obj147=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"restrict")) {
            restrict__505=(_Bool)1;
            __dec_obj148=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"_Addr")) {
            __dec_obj149=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"__restrict")) {
            restrict__505=(_Bool)1;
            __dec_obj150=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_494,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj151=type_name_494;
            type_name_494=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__513=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_494,"short")) {
            short__504=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_555=info->p;
                sline_556=info->sline;
                __dec_obj152=type_name_494;
                type_name_494=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_494,"int")) {
                    short__504=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_494,"short")) {
                    short__504=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_494,info)) {
                    info->p=p_555;
                    info->sline=sline_556;
                }
                else {
                    __dec_obj153=type_name_494;
                    type_name_494=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_555;
                    info->sline=sline_556;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    attribute_557=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_558=0;
    heap_559=(_Bool)0;
    refference_560=(_Bool)0;
    no_refference_561=(_Bool)0;
    channel_562=(_Bool)0;
    any_class_563=(_Bool)0;
    vtable_564=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_558++;
        }
        else if(        *info->p==126&&*(info->p+1)==126) {
            info->p+=2;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            vtable_564=(_Bool)1;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            any_class_563=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_559=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_562=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_565=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__513) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj154=tuple_name_565;
        tuple_name_565=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    atomic__518) {
        expected_next_character(41,info);
    }
    lambda_flag_566=(_Bool)0;
    {
        pX_567=info->p;
        slineX_568=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value615=parse_word(info)));
            (__right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_566=(_Bool)1;
            }
        }
        info->p=pX_567;
        info->sline=slineX_568;
    }
    function_pointer_flag_571=(_Bool)0;
    {
        p_572=info->p;
        sline_573=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_571=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_574=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_571=(_Bool)1;
                    }
                }
                (word_574 = come_decrement_ref_count2(word_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_572;
        info->sline=sline_573;
    }
    var_name_between_brace_575=(_Bool)0;
    {
        p_576=info->p;
        sline_577=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_578=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_578,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_575=(_Bool)1;
                    }
                }
                (word_578 = come_decrement_ref_count2(word_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_576;
        info->sline=sline_577;
    }
    if(    anonymous_type_516&&*info->p==123) {
        static int anonymous_num_579=0;
        if(        struct__506) {
            if(            string_operator_equals(type_name_494,"")) {
                __dec_obj155=type_name_494;
                type_name_494=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_579));
                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_580=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_494),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_581=node_compile(node_580,info);
            if(            !Value_581) {
                multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value621=err_msg(info,"parse_struct is failed")));
                come_exception_var_c2_582=multiple_assign_var9->v1;
                Err_583=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                ((Err_583)?(puts(Err_583),exit(0)):(0));
                come_call_finalizer3(__right_value621,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__343 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value623=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1810, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (Err_583 = come_decrement_ref_count2(Err_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_580) ? node_580 = come_decrement_ref_count2(node_580, ((struct sNode*)node_580)->finalize, ((struct sNode*)node_580)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value623,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__343,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__343;
                (Err_583 = come_decrement_ref_count2(Err_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            pointer_num_584=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_584++;
            }
            __dec_obj156=type_569;
            type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1823, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_494)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj156,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_569->mPointerNum=pointer_num_584;
            ((node_580) ? node_580 = come_decrement_ref_count2(node_580, ((struct sNode*)node_580)->finalize, ((struct sNode*)node_580)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        enum__508) {
            if(            string_operator_equals(type_name_494,"")) {
                __dec_obj157=type_name_494;
                type_name_494=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_579));
                __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_585=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_494),info));
            if(            !info->no_output_err) {
                Value_586=node_compile(node_585,info);
                if(                !Value_586) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result_obj__344 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value630=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1837, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    ((node_585) ? node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value630,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__344,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__344;
                }
                else {
                }
            }
            __dec_obj158=type_569;
            type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1841, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_494)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((node_585) ? node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        union__507) {
            if(            string_operator_equals(type_name_494,"")) {
                __dec_obj159=type_name_494;
                type_name_494=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_579));
                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_587=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_494),info));
            Value_588=node_compile(node_587,info);
            if(            !Value_588) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result_obj__345 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value637=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1853, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_587) ? node_587 = come_decrement_ref_count2(node_587, ((struct sNode*)node_587)->finalize, ((struct sNode*)node_587)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value637,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__345,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__345;
            }
            else {
            }
            pointer_num_589=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_589++;
            }
            __dec_obj160=type_569;
            type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1867, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_494)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_569->mPointerNum=pointer_num_589;
            ((node_587) ? node_587 = come_decrement_ref_count2(node_587, ((struct sNode*)node_587)->finalize, ((struct sNode*)node_587)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value641=err_msg(info,"unexpected { character")));
            come_exception_var_c3_590=multiple_assign_var10->v1;
            Err_591=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            ((Err_591)?(puts(Err_591),exit(0)):(0));
            come_call_finalizer3(__right_value641,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__346 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value643=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1873, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (Err_591 = come_decrement_ref_count2(Err_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value643,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__346,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__346;
            (Err_591 = come_decrement_ref_count2(Err_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        attribute_592=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_592,"")) {
            __dec_obj161=type_569->mAttribute;
            type_569->mAttribute=(char*)come_increment_ref_count(attribute_592);
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_575&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj162=var_name_570;
                var_name_570=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_517) {
                static int num_anonymous_var_name_593=0;
                num_anonymous_var_name_593++;
                __dec_obj163=var_name_570;
                var_name_570=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_593));
                __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj164=var_name_570;
                var_name_570=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_594=0;
                num_anonymous_var_name_594++;
                __dec_obj165=var_name_570;
                var_name_570=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_594));
                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_575&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_595=info->no_comma;
                info->no_comma=(_Bool)1;
                node_596=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_595;
                __dec_obj166=type_569->mSizeNum;
                type_569->mSizeNum=(struct sNode*)come_increment_ref_count(node_596);
                if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); };
                ((node_596) ? node_596 = come_decrement_ref_count2(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_597=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_592,"")&&string_operator_not_equals(attribute2_597,"")) {
                __dec_obj167=type_569->mAttribute;
                type_569->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value651=string_operator_add(attribute_592," "))),attribute2_597));
                __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_597,"")) {
                __dec_obj168=type_569->mAttribute;
                type_569->mAttribute=(char*)come_increment_ref_count(attribute2_597);
                __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            (attribute2_597 = come_decrement_ref_count2(attribute2_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_592 = come_decrement_ref_count2(attribute_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    lambda_flag_566) {
        if(        (_if_conditional4=(((struct sType*)(__right_value653=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_494))))),        come_call_finalizer3(__right_value653,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional4) {
            __dec_obj169=result_type_598;
            result_type_598=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value654=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_494)))));
            come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value654,sType_finalize, 0, 1, 0, 0, (void*)0);
            result_type_598->mClass=((struct sClass*)(__right_value656=map$2char$phsClass$ph$p_operator_load_element(info->classes,result_type_598->mClass->mName)));
            come_call_finalizer3(__right_value656,sClass_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->generics_type_names,type_name_494)) {
            for(            i_599=0;            i_599<list$1char$ph$p_length(info->generics_type_names);            i_599++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)(__right_value657=list$1char$ph$p_operator_load_element(info->generics_type_names,i_599))),type_name_494))),                (__right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional5) {
                    __dec_obj170=result_type_598;
                    result_type_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1941, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_599)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj170,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph$p_contained(info->method_generics_type_names,type_name_494)) {
            for(            i_603=0;            i_603<list$1char$ph$p_length(info->method_generics_type_names);            i_603++            ){
                if(                (_if_conditional6=(string_operator_equals(((char*)(__right_value661=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_603))),type_name_494))),                (__right_value661 = come_decrement_ref_count2(__right_value661, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional6) {
                    __dec_obj171=result_type_598;
                    result_type_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1948, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_603)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else {
            __dec_obj172=result_type_598;
            result_type_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1953, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_494)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_598->mAtomic=result_type_598->mAtomic||atomic__518;
        result_type_598->mConstant=result_type_598->mConstant||constant_497;
        __dec_obj173=result_type_598->mAlignas;
        result_type_598->mAlignas=(struct sNode*)come_increment_ref_count(alignas__515);
        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_598->mRegister=register__500;
        result_type_598->mUnsigned=result_type_598->mUnsigned||unsigned__501;
        result_type_598->mVolatile=volatile__499;
        result_type_598->mGenerate=generate__514;
        result_type_598->mRecord=result_type_598->mRecord||record__495;
        result_type_598->mUniq=result_type_598->mUniq||uniq__512;
        result_type_598->mStatic=(result_type_598->mStatic||static__498)&&!result_type_598->mUniq;
        result_type_598->mException=result_type_598->mException||exception__496;
        result_type_598->mExtern=result_type_598->mExtern||extern__510;
        result_type_598->mInline=result_type_598->mInline||inline__511;
        result_type_598->mRestrict=result_type_598->mRestrict||restrict__505;
        result_type_598->mLongLong=result_type_598->mLongLong||long_long_503;
        result_type_598->mLong=result_type_598->mLong||long__502;
        result_type_598->mShort=result_type_598->mShort||short__504;
        result_type_598->mPointerNum=pointer_num_558;
        result_type_598->mHeap=result_type_598->mHeap||heap_559;
        result_type_598->mChannel=result_type_598->mChannel||channel_562;
        result_type_598->mAnyClass=result_type_598->mAnyClass||any_class_563;
        result_type_598->mCreateVTable=result_type_598->mCreateVTable||vtable_564;
        __dec_obj174=var_name_570;
        var_name_570=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var11=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value669=parse_params(info,(_Bool)0)));
        param_types_604=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var11->v1);
        param_names_605=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var11->v2);
        param_default_parametors_606=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var11->v3);
        var_args_607=multiple_assign_var11->v4;
        come_call_finalizer3(__right_value669,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj175=type_569;
        type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1983, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj176=type_569->mResultType;
        type_569->mResultType=(struct sType*)come_increment_ref_count(result_type_598);
        come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj177=type_569->mParamTypes;
        type_569->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_604);
        come_call_finalizer3(__dec_obj177,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj178=type_569->mParamNames;
        type_569->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_605);
        come_call_finalizer3(__dec_obj178,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_569->mVarArgs=var_args_607;
        type_569->mExtern=extern__510;
        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_604,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_605,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_606,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_571) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_608=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_608++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional7=(((struct sType*)(__right_value673=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_494))))),        come_call_finalizer3(__right_value673,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional7) {
            __dec_obj179=result_type_609;
            result_type_609=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value674=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_494)))));
            come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value674,sType_finalize, 0, 1, 0, 0, (void*)0);
            result_type_609->mClass=((struct sClass*)(__right_value676=map$2char$phsClass$ph$p_operator_load_element(info->classes,result_type_609->mClass->mName)));
            come_call_finalizer3(__right_value676,sClass_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->generics_type_names,type_name_494)) {
            for(            i_610=0;            i_610<list$1char$ph$p_length(info->generics_type_names);            i_610++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)(__right_value677=list$1char$ph$p_operator_load_element(info->generics_type_names,i_610))),type_name_494))),                (__right_value677 = come_decrement_ref_count2(__right_value677, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional8) {
                    __dec_obj180=result_type_609;
                    result_type_609=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2016, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_610)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph$p_contained(info->method_generics_type_names,type_name_494)) {
            for(            i_611=0;            i_611<list$1char$ph$p_length(info->method_generics_type_names);            i_611++            ){
                if(                (_if_conditional9=(string_operator_equals(((char*)(__right_value681=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_611))),type_name_494))),                (__right_value681 = come_decrement_ref_count2(__right_value681, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional9) {
                    __dec_obj181=result_type_609;
                    result_type_609=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2023, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_611)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else {
            __dec_obj182=result_type_609;
            result_type_609=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2028, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_494)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_609->mConstant=result_type_609->mConstant||constant_497;
        result_type_609->mAtomic=result_type_609->mAtomic||atomic__518;
        __dec_obj183=result_type_609->mAlignas;
        result_type_609->mAlignas=(struct sNode*)come_increment_ref_count(alignas__515);
        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_609->mRegister=register__500;
        result_type_609->mUnsigned=result_type_609->mUnsigned||unsigned__501;
        result_type_609->mVolatile=volatile__499;
        result_type_609->mGenerate=generate__514;
        result_type_609->mUniq=result_type_609->mUniq||uniq__512;
        result_type_609->mStatic=(result_type_609->mStatic||static__498)&&!result_type_609->mUniq;
        result_type_609->mRecord=result_type_609->mRecord||record__495;
        result_type_609->mException=result_type_609->mException||exception__496;
        result_type_609->mExtern=result_type_609->mExtern||extern__510;
        result_type_609->mInline=result_type_609->mInline||inline__511;
        result_type_609->mRestrict=result_type_609->mRestrict||restrict__505;
        result_type_609->mLongLong=result_type_609->mLongLong||long_long_503;
        result_type_609->mLong=result_type_609->mLong||long__502;
        result_type_609->mShort=result_type_609->mShort||short__504;
        result_type_609->mPointerNum+=pointer_num_558;
        result_type_609->mHeap=result_type_609->mHeap||heap_559;
        result_type_609->mChannel=result_type_609->mChannel||channel_562;
        result_type_609->mAnyClass=result_type_609->mAnyClass||any_class_563;
        result_type_609->mCreateVTable=result_type_609->mCreateVTable||vtable_564;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj184=var_name_570;
            var_name_570=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result_obj__349 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value690=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2057, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(result_type_609),(char*)come_increment_ref_count(var_name_570),(_Bool)0))));
                come_call_finalizer3(result_type_609,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value690,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__349,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__349;
            }
        }
        else {
            static int num_anonymous_var_name_612=0;
            num_anonymous_var_name_612++;
            __dec_obj185=var_name_570;
            var_name_570=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_612));
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_613=(_Bool)0;
        function_pointer_array_num_614=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_615=0;
            while(xisdigit(*info->p)) {
                n_615=n_615*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_614=n_615;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_613=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var12=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value692=parse_params(info,(_Bool)0)));
        param_types_616=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var12->v1);
        param_names_617=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var12->v2);
        param_default_parametors_618=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var12->v3);
        var_args_619=multiple_assign_var12->v4;
        come_call_finalizer3(__right_value692,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj186=type_569;
        type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2089, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj187=type_569->mResultType;
        type_569->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_609));
        come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj188=type_569->mParamTypes;
        type_569->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_616);
        come_call_finalizer3(__dec_obj188,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj189=type_569->mParamNames;
        type_569->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_617);
        come_call_finalizer3(__dec_obj189,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_569->mVarArgs=var_args_619;
        type_569->mExtern=extern__510;
        if(        function_pointer_array_613) {
            type_569->mLambdaArray=(_Bool)1;
            type_569->mLambdaArrayNum=function_pointer_array_num_614;
        }
        type_569->mFunctionPointerNum=function_pointer_num_608;
        come_call_finalizer3(result_type_609,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_616,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_617,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_618,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_494,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_620=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_621=node_compile(exp_620,info);
        if(        !Value_621) {
            multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value698=err_msg(info,"invalid __typeof__ expression")));
            come_exception_var_c4_622=multiple_assign_var13->v1;
            Err_623=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            ((Err_623)?(puts(Err_623),exit(0)):(0));
            come_call_finalizer3(__right_value698,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__350 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value700=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2113, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (Err_623 = come_decrement_ref_count2(Err_623, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_620) ? exp_620 = come_decrement_ref_count2(exp_620, ((struct sNode*)exp_620)->finalize, ((struct sNode*)exp_620)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value700,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__350,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__350;
            (Err_623 = come_decrement_ref_count2(Err_623, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
        }
        come_value_624=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj190=type_569;
        type_569=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_624->type));
        come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        attribute_625=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_625,"")) {
            __dec_obj191=type_569->mAttribute;
            type_569->mAttribute=(char*)come_increment_ref_count(attribute_625);
            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_575&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj192=var_name_570;
                var_name_570=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_517) {
                static int num_anonymous_var_name_626=0;
                num_anonymous_var_name_626++;
                __dec_obj193=var_name_570;
                var_name_570=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_626));
                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj194=var_name_570;
                var_name_570=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_627=0;
                num_anonymous_var_name_627++;
                __dec_obj195=var_name_570;
                var_name_570=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_627));
                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_575&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_628=info->no_comma;
                info->no_comma=(_Bool)1;
                node_629=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_628;
                __dec_obj196=type_569->mSizeNum;
                type_569->mSizeNum=(struct sNode*)come_increment_ref_count(node_629);
                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
                ((node_629) ? node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_630=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_625,"")&&string_operator_not_equals(attribute2_630,"")) {
                __dec_obj197=type_569->mAttribute;
                type_569->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value710=string_operator_add(attribute_625," "))),attribute2_630));
                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_630,"")) {
                __dec_obj198=type_569->mAttribute;
                type_569->mAttribute=(char*)come_increment_ref_count(attribute2_630);
                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            (attribute2_630 = come_decrement_ref_count2(attribute2_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        ((exp_620) ? exp_620 = come_decrement_ref_count2(exp_620, ((struct sNode*)exp_620)->finalize, ((struct sNode*)exp_620)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_624,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_625 = come_decrement_ref_count2(attribute_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        (_if_conditional10=(((struct sType*)(__right_value712=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_494))))),        come_call_finalizer3(__right_value712,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional10) {
            __dec_obj199=type_569;
            type_569=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value713=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_494)))));
            come_call_finalizer3(__dec_obj199,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value713,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_569->mTypedefOriginalPointerNum=type_569->mPointerNum;
            type_569->mClass=((struct sClass*)(__right_value715=map$2char$phsClass$ph$p_operator_load_element(info->classes,type_569->mClass->mName)));
            come_call_finalizer3(__right_value715,sClass_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj200=type_569->mOriginalTypeName;
            type_569->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_494));
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_569->mOriginalTypeNamePointerNum=pointer_num_558;
            type_569->mOriginalTypeNameHeap=heap_559;
            type_569->mConstant=type_569->mConstant||constant_497;
            type_569->mAtomic=type_569->mAtomic||atomic__518;
            __dec_obj201=type_569->mAlignas;
            type_569->mAlignas=(struct sNode*)come_increment_ref_count(alignas__515);
            if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); };
            type_569->mRegister=register__500;
            type_569->mUnsigned=type_569->mUnsigned||unsigned__501;
            type_569->mVolatile=volatile__499;
            type_569->mGenerate=generate__514;
            type_569->mUniq=type_569->mUniq||uniq__512;
            type_569->mStatic=(type_569->mStatic||static__498)&&!type_569->mUniq;
            type_569->mRecord=type_569->mRecord||record__495;
            type_569->mException=type_569->mException||exception__496;
            type_569->mExtern=type_569->mExtern||extern__510;
            type_569->mInline=type_569->mInline||inline__511;
            type_569->mRestrict=type_569->mRestrict||restrict__505;
            type_569->mLongLong=type_569->mLongLong||long_long_503;
            type_569->mLong=type_569->mLong||long__502;
            type_569->mShort=type_569->mShort||short__504;
            type_569->mPointerNum+=pointer_num_558;
            type_569->mHeap=type_569->mHeap||heap_559;
            type_569->mChannel=type_569->mChannel||channel_562;
            type_569->mAnyClass=type_569->mAnyClass||any_class_563;
            type_569->mCreateVTable=type_569->mCreateVTable||vtable_564;
            __dec_obj202=type_569->mTupleName;
            type_569->mTupleName=(char*)come_increment_ref_count(tuple_name_565);
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->generics_type_names,type_name_494)) {
            for(            i_631=0;            i_631<list$1char$ph$p_length(info->generics_type_names);            i_631++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)(__right_value717=list$1char$ph$p_operator_load_element(info->generics_type_names,i_631))),type_name_494))),                (__right_value717 = come_decrement_ref_count2(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional11) {
                    __dec_obj203=type_569;
                    type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2212, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_631)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj203,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            type_569->mConstant=type_569->mConstant||constant_497;
            type_569->mAtomic=type_569->mAtomic||atomic__518;
            __dec_obj204=type_569->mAlignas;
            type_569->mAlignas=(struct sNode*)come_increment_ref_count(alignas__515);
            if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
            type_569->mRegister=register__500;
            type_569->mUnsigned=type_569->mUnsigned||unsigned__501;
            type_569->mVolatile=volatile__499;
            type_569->mGenerate=generate__514;
            type_569->mUniq=type_569->mUniq||uniq__512;
            type_569->mStatic=(type_569->mStatic||static__498)&&!type_569->mUniq;
            type_569->mRecord=type_569->mRecord||record__495;
            type_569->mException=type_569->mException||exception__496;
            type_569->mExtern=type_569->mExtern||extern__510;
            type_569->mInline=type_569->mInline||inline__511;
            type_569->mRestrict=type_569->mRestrict||restrict__505;
            type_569->mLongLong=type_569->mLongLong||long_long_503;
            type_569->mLong=type_569->mLong||long__502;
            type_569->mShort=type_569->mShort||short__504;
            type_569->mPointerNum+=pointer_num_558;
            type_569->mHeap=type_569->mHeap||heap_559;
            type_569->mChannel=type_569->mChannel||channel_562;
            type_569->mAnyClass=type_569->mAnyClass||any_class_563;
            type_569->mCreateVTable=type_569->mCreateVTable||vtable_564;
            __dec_obj205=type_569->mTupleName;
            type_569->mTupleName=(char*)come_increment_ref_count(tuple_name_565);
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->method_generics_type_names,type_name_494)) {
            for(            i_632=0;            i_632<list$1char$ph$p_length(info->method_generics_type_names);            i_632++            ){
                if(                (_if_conditional12=(string_operator_equals(((char*)(__right_value721=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_632))),type_name_494))),                (__right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional12) {
                    __dec_obj206=type_569;
                    type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2243, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_632)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            type_569->mConstant=type_569->mConstant||constant_497;
            type_569->mAtomic=type_569->mAtomic||atomic__518;
            __dec_obj207=type_569->mAlignas;
            type_569->mAlignas=(struct sNode*)come_increment_ref_count(alignas__515);
            if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
            type_569->mRegister=register__500;
            type_569->mUnsigned=type_569->mUnsigned||unsigned__501;
            type_569->mVolatile=volatile__499;
            type_569->mGenerate=generate__514;
            type_569->mUniq=type_569->mUniq||uniq__512;
            type_569->mStatic=(type_569->mStatic||static__498)&&!type_569->mUniq;
            type_569->mRecord=type_569->mRecord||record__495;
            type_569->mException=type_569->mException||exception__496;
            type_569->mExtern=type_569->mExtern||extern__510;
            type_569->mInline=type_569->mInline||inline__511;
            type_569->mRestrict=type_569->mRestrict||restrict__505;
            type_569->mLongLong=type_569->mLongLong||long_long_503;
            type_569->mLong=type_569->mLong||long__502;
            type_569->mShort=type_569->mShort||short__504;
            type_569->mPointerNum+=pointer_num_558;
            type_569->mHeap=type_569->mHeap||heap_559;
            type_569->mChannel=type_569->mChannel||channel_562;
            type_569->mAnyClass=type_569->mAnyClass||any_class_563;
            type_569->mCreateVTable=type_569->mCreateVTable||vtable_564;
            __dec_obj208=type_569->mTupleName;
            type_569->mTupleName=(char*)come_increment_ref_count(tuple_name_565);
            __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional13=(((struct sClass*)(__right_value726=map$2char$phsClass$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value725=__builtin_string(type_name_494))))))==((void*)0))),            (__right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value726,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                __result_obj__351 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value728=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2277, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value728,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__351,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__351;
            }
            __dec_obj209=type_569;
            type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2280, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_494)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj209,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while((_Bool)1) {
                multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value732=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_633=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                var_name_634=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                err_635=multiple_assign_var14->v3;
                come_call_finalizer3(__right_value732,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_635) {
                    __result_obj__352 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value734=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2286, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer3(generics_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_634 = come_decrement_ref_count2(var_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value734,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__352,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__352;
                }
                list$1sType$ph$p_push_back(type_569->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_633));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_634 = come_decrement_ref_count2(var_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value735=err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2))));
                    come_exception_var_c5_636=multiple_assign_var15->v1;
                    Err_637=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    ((Err_637)?(puts(Err_637),exit(0)):(0));
                    come_call_finalizer3(__right_value735,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    __result_obj__353 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value737=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2303, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (Err_637 = come_decrement_ref_count2(Err_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(generics_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_634 = come_decrement_ref_count2(var_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value737,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__353,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__353;
                    (Err_637 = come_decrement_ref_count2(Err_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                come_call_finalizer3(generics_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_634 = come_decrement_ref_count2(var_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            is_contained_generics_class(type_569,info)) {
                __dec_obj210=type_569;
                type_569=(struct sType*)come_increment_ref_count(solve_generics(type_569,info->generics_type,info));
                come_call_finalizer3(__dec_obj210,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_569,type_569,info)) {
                    new_name_638=(char*)come_increment_ref_count(create_generics_name(type_569,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_638);
                    exit(7);
                    (new_name_638 = come_decrement_ref_count2(new_name_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_569->mConstant=type_569->mConstant||constant_497;
            type_569->mAtomic=type_569->mAtomic||atomic__518;
            __dec_obj211=type_569->mAlignas;
            type_569->mAlignas=(struct sNode*)come_increment_ref_count(alignas__515);
            if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); };
            type_569->mRegister=register__500;
            type_569->mUnsigned=type_569->mUnsigned||unsigned__501;
            type_569->mVolatile=volatile__499;
            type_569->mGenerate=generate__514;
            type_569->mUniq=type_569->mUniq||uniq__512;
            type_569->mStatic=(type_569->mStatic||static__498)&&!type_569->mUniq;
            type_569->mRecord=type_569->mRecord||record__495;
            type_569->mException=type_569->mException||exception__496;
            type_569->mExtern=type_569->mExtern||extern__510;
            type_569->mInline=type_569->mInline||inline__511;
            type_569->mRestrict=type_569->mRestrict||restrict__505;
            type_569->mLongLong=type_569->mLongLong||long_long_503;
            type_569->mLong=type_569->mLong||long__502;
            type_569->mShort=type_569->mShort||short__504;
            type_569->mPointerNum+=pointer_num_558;
            type_569->mHeap=type_569->mHeap||heap_559;
            type_569->mChannel=type_569->mChannel||channel_562;
            type_569->mAnyClass=type_569->mAnyClass||any_class_563;
            type_569->mCreateVTable=type_569->mCreateVTable||vtable_564;
            __dec_obj212=type_569->mTupleName;
            type_569->mTupleName=(char*)come_increment_ref_count(tuple_name_565);
            __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj213=type_name_494;
            type_name_494=(char*)come_increment_ref_count(type_569->mClass->mName);
            __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__506) {
                klass_639=((struct sClass*)(__right_value740=map$2char$phsClass$ph$p_operator_load_element(info->classes,type_name_494)));
                come_call_finalizer3(__right_value740,sClass_finalize, 0, 1, 0, 0, (void*)0);
                if(                klass_639==((void*)0)&&*info->p!=60) {
                    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_494)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2350, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_494)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__507) {
                klass_681=((struct sClass*)(__right_value750=map$2char$phsClass$ph$p_operator_load_element(info->classes,type_name_494)));
                come_call_finalizer3(__right_value750,sClass_finalize, 0, 1, 0, 0, (void*)0);
                if(                klass_681==((void*)0)&&*info->p!=60) {
                    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_494)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2357, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_494)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj214=type_569;
            type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2361, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_494)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj214,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_569->mConstant=type_569->mConstant||constant_497;
            type_569->mAtomic=type_569->mAtomic||atomic__518;
            __dec_obj215=type_569->mAlignas;
            type_569->mAlignas=(struct sNode*)come_increment_ref_count(alignas__515);
            if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
            type_569->mRegister=register__500;
            type_569->mUnsigned=type_569->mUnsigned||unsigned__501;
            type_569->mVolatile=volatile__499;
            type_569->mGenerate=generate__514;
            type_569->mUniq=type_569->mUniq||uniq__512;
            type_569->mStatic=(type_569->mStatic||static__498)&&!type_569->mUniq;
            type_569->mRecord=type_569->mRecord||record__495;
            type_569->mException=type_569->mException||exception__496;
            type_569->mExtern=type_569->mExtern||extern__510;
            type_569->mInline=type_569->mInline||inline__511;
            type_569->mRestrict=type_569->mRestrict||restrict__505;
            type_569->mLongLong=type_569->mLongLong||long_long_503;
            type_569->mLong=type_569->mLong||long__502;
            type_569->mShort=type_569->mShort||short__504;
            type_569->mPointerNum+=pointer_num_558;
            type_569->mHeap=type_569->mHeap||heap_559;
            type_569->mChannel=type_569->mChannel||channel_562;
            type_569->mAnyClass=type_569->mAnyClass||any_class_563;
            type_569->mCreateVTable=type_569->mCreateVTable||vtable_564;
            __dec_obj216=type_569->mTupleName;
            type_569->mTupleName=(char*)come_increment_ref_count(tuple_name_565);
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_569->mPointerNum++;
                if(                type_569->mNoSolvedGenericsType) {
                    type_569->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_569->mHeap=(_Bool)1;
                if(                type_569->mNoSolvedGenericsType) {
                    type_569->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_569->mNoHeap=(_Bool)1;
                if(                type_569->mNoSolvedGenericsType) {
                    type_569->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_569->mGuardValue=(_Bool)1;
                }
                else {
                    type_569->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_569->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_569->mPointerNum++;
                if(                type_569->mNoSolvedGenericsType) {
                    type_569->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_569->mHeap=(_Bool)1;
                if(                type_569->mNoSolvedGenericsType) {
                    type_569->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_569->mCreateVTable=(_Bool)1;
                if(                type_569->mNoSolvedGenericsType) {
                    type_569->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_569->mAnyClass=(_Bool)1;
                if(                type_569->mNoSolvedGenericsType) {
                    type_569->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_569->mChannel=(_Bool)1;
                if(                type_569->mNoSolvedGenericsType) {
                    type_569->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_682=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 2504, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1sType$ph$p_push_back(types_682,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_569)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value761=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_683=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                name_684=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                err_685=multiple_assign_var16->v3;
                come_call_finalizer3(__right_value761,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_685) {
                    __result_obj__375 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value763=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2515, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer3(type2_683,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_684 = come_decrement_ref_count2(name_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(types_682,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value763,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__375,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__375;
                }
                list$1sType$ph$p_push_back(types_682,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_683)));
                come_call_finalizer3(type2_683,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_684 = come_decrement_ref_count2(name_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_686=list$1sType$ph$p_length(types_682);
            __dec_obj217=type_569;
            type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2528, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("tuple%d",num_tuples_686)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj217,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_569->mPointerNum++;
            type_569->mHeap=(_Bool)1;
            for(            o2_saved_687=(struct list$1sType$ph*)come_increment_ref_count((types_682)),it_688=list$1sType$ph$p_begin((o2_saved_687));            !list$1sType$ph$p_end((o2_saved_687));            it_688=list$1sType$ph$p_next((o2_saved_687))            ){
                list$1sType$ph$p_push_back(type_569->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value768=come_call_cloner(sType_clone, it_688))))));
                come_call_finalizer3(__right_value768,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_687,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_569->mPointerNum++;
                    if(                    type_569->mNoSolvedGenericsType) {
                        type_569->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_569->mHeap=(_Bool)1;
                    if(                    type_569->mNoSolvedGenericsType) {
                        type_569->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126&&*(info->p+1)==126) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_569->mCreateVTable=(_Bool)1;
                    if(                    type_569->mNoSolvedGenericsType) {
                        type_569->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_569->mAnyClass=(_Bool)1;
                    if(                    type_569->mNoSolvedGenericsType) {
                        type_569->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_569->mChannel=(_Bool)1;
                    if(                    type_569->mNoSolvedGenericsType) {
                        type_569->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_569,info)) {
                __dec_obj218=type_569;
                type_569=(struct sType*)come_increment_ref_count(solve_generics(type_569,info->generics_type,info));
                come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_569,type_569,info)) {
                    new_name_689=(char*)come_increment_ref_count(create_generics_name(type_569,info));
                    printf("output generics is failed(%s)\n",new_name_689);
                    exit(9);
                    (new_name_689 = come_decrement_ref_count2(new_name_689, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_569->mMultipleTypes=(_Bool)1;
            __dec_obj219=type_name_494;
            type_name_494=(char*)come_increment_ref_count(type_569->mClass->mName);
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(types_682,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        attribute_690=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_690,"")) {
            __dec_obj220=type_569->mAttribute;
            type_569->mAttribute=(char*)come_increment_ref_count(attribute_690);
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_575&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj221=var_name_570;
                var_name_570=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_517) {
                static int num_anonymous_var_name_691=0;
                num_anonymous_var_name_691++;
                __dec_obj222=var_name_570;
                var_name_570=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_691));
                __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj223=var_name_570;
                var_name_570=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_692=0;
                num_anonymous_var_name_692++;
                __dec_obj224=var_name_570;
                var_name_570=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_692));
                __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_575&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_693=info->no_comma;
                info->no_comma=(_Bool)1;
                node_694=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_693;
                __dec_obj225=type_569->mSizeNum;
                type_569->mSizeNum=(struct sNode*)come_increment_ref_count(node_694);
                if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
                ((node_694) ? node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_695=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_690,"")&&string_operator_not_equals(attribute2_695,"")) {
                __dec_obj226=type_569->mAttribute;
                type_569->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value778=string_operator_add(attribute_690," "))),attribute2_695));
                __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_695,"")) {
                __dec_obj227=type_569->mAttribute;
                type_569->mAttribute=(char*)come_increment_ref_count(attribute2_695);
                __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            (attribute2_695 = come_decrement_ref_count2(attribute2_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_690 = come_decrement_ref_count2(attribute_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_569->mArrayPointerType=(_Bool)1;
            type_569->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_696=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph$p_push_back(type_569->mArrayNum,(struct sNode*)come_increment_ref_count(node_696));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        ((node_696) ? node_696 = come_decrement_ref_count2(node_696, ((struct sNode*)node_696)->finalize, ((struct sNode*)node_696)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var17=((struct tuple2$2char$phchar$ph*)(__right_value781=parse_attribute(info,(_Bool)0)));
    asm_name_697=(char*)come_increment_ref_count(multiple_assign_var17->v1);
    attribute2_698=(char*)come_increment_ref_count(multiple_assign_var17->v2);
    come_call_finalizer3(__right_value781,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    if(    string_operator_not_equals(attribute2_698,"")) {
        __dec_obj228=type_569->mAttribute;
        type_569->mAttribute=(char*)come_increment_ref_count(attribute2_698);
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj229=type_569->mAsmName;
    type_569->mAsmName=(char*)come_increment_ref_count(asm_name_697);
    __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_569->mChannel) {
        type_before_699=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_569));
        __dec_obj230=type_569;
        type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2701, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer3(__dec_obj230,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj231=type_569->mArrayNum;
        type_569->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1___700[0]=((struct sNode*)(__right_value786=create_int_node(2,info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 2702, "struct list$1sNode$ph", list$1sNode$ph_finalize, list$1sNode$ph_clone, list$1sNode$ph_get_hash_key, list$1sNode$ph_equals)),1,__list_values1___700)));
        come_call_finalizer3(__dec_obj231,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        ((__right_value786) ? __right_value786 = come_decrement_ref_count2(__right_value786, ((struct sNode*)__right_value786)->finalize, ((struct sNode*)__right_value786)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        __dec_obj232=type_569->mChannelType;
        type_569->mChannelType=(struct sType*)come_increment_ref_count(type_before_699);
        come_call_finalizer3(__dec_obj232,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_569->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_699,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_569->mAnyClass&&!type_569->mClass->mProtocol) {
        type_before_704=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_569));
        type_before_704->mHeap=(_Bool)1;
        type_before_704->mPointerNum=1;
        __dec_obj233=type_569;
        type_569=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2710, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        come_call_finalizer3(__dec_obj233,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_569->mHeap=(_Bool)1;
        type_569->mPointerNum=1;
        __dec_obj234=type_569->mAnyOriginalType;
        type_569->mAnyOriginalType=(struct sType*)come_increment_ref_count(type_before_704);
        come_call_finalizer3(__dec_obj234,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_569->mAnyClass=(_Bool)1;
        come_call_finalizer3(type_before_704,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_569->mException) {
        type2_705=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2717, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph$p_operator_store_element(type2_705->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2718, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("generics_type0")),(_Bool)0,info)));
        list$1sType$ph$p_operator_store_element(type2_705->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2719, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("generics_type1")),(_Bool)0,info)));
        type2_705->mPointerNum=1;
        type2_705->mHeap=(_Bool)1;
        type3_711=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2723, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph$p_operator_store_element(type3_711->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_569));
        list$1sType$ph$p_operator_store_element(type3_711->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2725, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)));
        ((struct sType*)(__right_value809=list$1sType$ph$p_operator_load_element(type3_711->mGenericsTypes,1)))->mHeap=(_Bool)1;
        come_call_finalizer3(__right_value809,sType_finalize, 0, 1, 0, 0, (void*)0);
        type4_712=(struct sType*)come_increment_ref_count(solve_generics(type2_705,type3_711,info));
        type4_712->mException=(_Bool)1;
        type4_712->mUniq=type_569->mUniq;
        __result_obj__381 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value812=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2733, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(type4_712),(char*)come_increment_ref_count(var_name_570),(_Bool)1))));
        come_call_finalizer3(type2_705,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_711,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_712,sType_finalize, 0, 0, 0, 0, (void*)0);
        (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (asm_name_697 = come_decrement_ref_count2(asm_name_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute2_698 = come_decrement_ref_count2(attribute2_698, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value812,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__381,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__381;
        come_call_finalizer3(type2_705,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_711,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_712,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_557,"")) {
        __dec_obj236=type_569->mAttribute;
        type_569->mAttribute=(char*)come_increment_ref_count(attribute_557);
        __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__382 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value814=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2740, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(type_569),(char*)come_increment_ref_count(var_name_570),(_Bool)1))));
    (type_name_494 = come_decrement_ref_count2(type_name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((alignas__515) ? alignas__515 = come_decrement_ref_count2(alignas__515, ((struct sNode*)alignas__515)->finalize, ((struct sNode*)alignas__515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute_557 = come_decrement_ref_count2(attribute_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (tuple_name_565 = come_decrement_ref_count2(tuple_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (asm_name_697 = come_decrement_ref_count2(asm_name_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute2_698 = come_decrement_ref_count2(attribute2_698, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value814,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__382,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__382;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_600;
int i_601;
char* __result_obj__347;
char* default_value_602;
char* __result_obj__348;
default_value_602 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_600=self->head;
    i_601=0;
    while(it_600!=((void*)0)) {
        if(        position==i_601) {
            __result_obj__347 = come_increment_ref_count(it_600->item);
            (__result_obj__347 = come_decrement_ref_count2(__result_obj__347, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__347;
        }
        it_600=it_600->next;
        i_601++;
    }
    memset(&default_value_602,0,sizeof(char*));
    __result_obj__348 = come_increment_ref_count(default_value_602);
    (default_value_602 = come_decrement_ref_count2(default_value_602, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__348 = come_decrement_ref_count2(__result_obj__348, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__348;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_657;
unsigned int it_658;
_Bool same_key_exist_675;
char* it2_678;
struct map$2char$phsClass$ph* __result_obj__374;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph$p_rehash(self);
    }
    hash_657=string_get_hash_key(((char*)key))%self->size;
    it_658=hash_657;
    while((_Bool)1) {
        if(        self->item_existance[it_658]) {
            if(            string_equals(self->keys[it_658],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_658]);
                    (self->keys[it_658] = come_decrement_ref_count2(self->keys[it_658], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_658]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_658]);
                    self->keys[it_658]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_658],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_658]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_658]=item;
                }
                break;
            }
            it_658++;
            if(            it_658>=self->size) {
                it_658=0;
            }
            else if(            it_658==hash_657) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_658]=(_Bool)1;
            if(            1) {
                self->keys[it_658]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_658]=key;
            }
            if(            1) {
                self->items[it_658]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_658]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_675=(_Bool)0;
    for(    it2_678=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_678=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_678,key)) {
            same_key_exist_675=(_Bool)1;
        }
    }
    if(    !same_key_exist_675) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__374 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__374;
}

static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self){
int size_640;
void* __right_value741 = (void*)0;
char** keys_641;
void* __right_value742 = (void*)0;
struct sClass** items_642;
void* __right_value743 = (void*)0;
_Bool* item_existance_643;
int len_644;
char* it_647;
struct sClass* default_value_650;
void* __right_value744 = (void*)0;
struct sClass* it2_651;
unsigned int hash_654;
int n_655;
struct sClass* default_value_656;
void* __right_value745 = (void*)0;
default_value_650 = (void*)0;
default_value_656 = (void*)0;
    size_640=self->size*10;
    keys_641=(char**)come_increment_ref_count(((char**)(__right_value741=(char**)come_calloc(1, sizeof(char*)*(1*(size_640)), "/usr/local/include/comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_642=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value742=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_640)), "/usr/local/include/comelang.h", 2935, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_643=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value743=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_640)), "/usr/local/include/comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_644=0;
    for(    it_647=map$2char$phsClass$ph$p_begin(self);    !map$2char$phsClass$ph$p_end(self);    it_647=map$2char$phsClass$ph$p_next(self)    ){
        memset(&default_value_650,0,sizeof(struct sClass*));
        it2_651=((struct sClass*)(__right_value744=map$2char$phsClass$ph$p_at(self,it_647,(struct sClass*)come_increment_ref_count(default_value_650))));
        come_call_finalizer3(__right_value744,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_654=string_get_hash_key(((char*)it_647))%size_640;
        n_655=hash_654;
        while((_Bool)1) {
            if(            item_existance_643[n_655]) {
                n_655++;
                if(                n_655>=size_640) {
                    n_655=0;
                }
                else if(                n_655==hash_654) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_643[n_655]=(_Bool)1;
                keys_641[n_655]=it_647;
                items_642[n_655]=((struct sClass*)(__right_value745=map$2char$phsClass$ph$p_at(self,it_647,(struct sClass*)come_increment_ref_count(default_value_656))));
                come_call_finalizer3(__right_value745,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_644++;
                come_call_finalizer3(default_value_656,sClass_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_656,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_650,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_641;
    self->items=items_642;
    self->item_existance=item_existance_643;
    self->size=size_640;
    self->len=len_644;
}

static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self){
char* result_645;
char* __result_obj__354;
char* __result_obj__355;
char* result_646;
char* __result_obj__356;
result_645 = (void*)0;
result_646 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_645,0,sizeof(char*));
        __result_obj__354 = result_645;
        return __result_obj__354;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__355 = self->key_list->it->item;
        return __result_obj__355;
    }
    memset(&result_646,0,sizeof(char*));
    __result_obj__356 = result_646;
    return __result_obj__356;
}

static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self){
char* result_648;
char* __result_obj__357;
char* __result_obj__358;
char* result_649;
char* __result_obj__359;
result_648 = (void*)0;
result_649 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_648,0,sizeof(char*));
        __result_obj__357 = result_648;
        return __result_obj__357;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__358 = self->key_list->it->item;
        return __result_obj__358;
    }
    memset(&result_649,0,sizeof(char*));
    __result_obj__359 = result_649;
    return __result_obj__359;
}

static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_652;
unsigned int it_653;
struct sClass* __result_obj__360;
struct sClass* __result_obj__361;
struct sClass* __result_obj__362;
struct sClass* __result_obj__363;
    hash_652=string_get_hash_key(((char*)key))%self->size;
    it_653=hash_652;
    while((_Bool)1) {
        if(        self->item_existance[it_653]) {
            if(            string_equals(self->keys[it_653],key)) {
                __result_obj__360 = come_increment_ref_count(self->items[it_653]);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__360,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__360;
            }
            it_653++;
            if(            it_653>=self->size) {
                it_653=0;
            }
            else if(            it_653==hash_652) {
                __result_obj__361 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__361,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__361;
            }
        }
        else {
            __result_obj__362 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__362,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__362;
        }
    }
    __result_obj__363 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__363,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__363;
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_659;
struct list_item$1char$p* it_660;
struct list$1char$p* __result_obj__367;
    it2_659=0;
    it_660=self->head;
    while(it_660!=((void*)0)) {
        if(        charp_equals(it_660->item,item)) {
            list$1char$p$p_delete(self,it2_659,it2_659+1);
            break;
        }
        it2_659++;
        it_660=it_660->next;
    }
    __result_obj__367 = self;
    return __result_obj__367;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_661;
struct list$1char$p* __result_obj__364;
struct list_item$1char$p* it_664;
int i_665;
struct list_item$1char$p* prev_it_666;
struct list_item$1char$p* it_667;
int i_668;
struct list_item$1char$p* prev_it_669;
struct list_item$1char$p* it_670;
struct list_item$1char$p* head_prev_it_671;
struct list_item$1char$p* tail_it_672;
int i_673;
struct list_item$1char$p* prev_it_674;
struct list$1char$p* __result_obj__366;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_661=tail;
        tail=head;
        head=tmp_661;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__364 = self;
        return __result_obj__364;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_664=self->head;
        i_665=0;
        while(it_664!=((void*)0)) {
            if(            i_665<tail) {
                prev_it_666=it_664;
                it_664=it_664->next;
                i_665++;
                come_call_finalizer3(prev_it_666,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_665==tail) {
                self->head=it_664;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_664=it_664->next;
                i_665++;
            }
        }
    }
    else if(    tail==self->len) {
        it_667=self->head;
        i_668=0;
        while(it_667!=((void*)0)) {
            if(            i_668==head) {
                self->tail=it_667->prev;
                self->tail->next=((void*)0);
            }
            if(            i_668>=head) {
                prev_it_669=it_667;
                it_667=it_667->next;
                i_668++;
                come_call_finalizer3(prev_it_669,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_667=it_667->next;
                i_668++;
            }
        }
    }
    else {
        it_670=self->head;
        head_prev_it_671=((void*)0);
        tail_it_672=((void*)0);
        i_673=0;
        while(it_670!=((void*)0)) {
            if(            i_673==head) {
                head_prev_it_671=it_670->prev;
            }
            if(            i_673==tail) {
                tail_it_672=it_670;
            }
            if(            i_673>=head&&i_673<tail) {
                prev_it_674=it_670;
                it_670=it_670->next;
                i_673++;
                come_call_finalizer3(prev_it_674,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_670=it_670->next;
                i_673++;
            }
        }
        if(        head_prev_it_671!=((void*)0)) {
            head_prev_it_671->next=tail_it_672;
        }
        if(        tail_it_672!=((void*)0)) {
            tail_it_672->prev=head_prev_it_671;
        }
    }
    __result_obj__366 = self;
    return __result_obj__366;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_662;
struct list_item$1char$p* prev_it_663;
struct list$1char$p* __result_obj__365;
    it_662=self->head;
    while(it_662!=((void*)0)) {
        prev_it_663=it_662;
        it_662=it_662->next;
        come_call_finalizer3(prev_it_663,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__365 = self;
    return __result_obj__365;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_676;
char* __result_obj__368;
char* __result_obj__369;
char* result_677;
char* __result_obj__370;
result_676 = (void*)0;
result_677 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_676,0,sizeof(char*));
        __result_obj__368 = result_676;
        return __result_obj__368;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__369 = self->it->item;
        return __result_obj__369;
    }
    memset(&result_677,0,sizeof(char*));
    __result_obj__370 = result_677;
    return __result_obj__370;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_679;
char* __result_obj__371;
char* __result_obj__372;
char* result_680;
char* __result_obj__373;
result_679 = (void*)0;
result_680 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_679,0,sizeof(char*));
        __result_obj__371 = result_679;
        return __result_obj__371;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__372 = self->it->item;
        return __result_obj__372;
    }
    memset(&result_680,0,sizeof(char*));
    __result_obj__373 = result_680;
    return __result_obj__373;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i_701;
struct list$1sNode$ph* __result_obj__376;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_701=0;    i_701<num_value;    i_701++    ){
        list$1sNode$ph$p_push_back(self,(struct sNode*)come_increment_ref_count(values[i_701]));
    }
    __result_obj__376 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__376,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__376;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__377;
void* __right_value787 = (void*)0;
struct list$1sNode$ph* result_702;
struct list$1sNode$ph* __result_obj__378;
    if(    self==(void*)0) {
        __result_obj__377 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__377,list$1sNode$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__377;
    }
    result_702=(struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "list$1sNode$ph_clone", 3, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_702->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_702->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_702->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_702->it=self->it;
    }
    __result_obj__378 = come_increment_ref_count(result_702);
    come_call_finalizer3(result_702,list$1sNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__378,list$1sNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__378;
}

static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self){
unsigned int result_703;
    result_703=0;
    result_703+=int_get_hash_key(((int)self->head));
    result_703+=int_get_hash_key(((int)self->tail));
    result_703+=int_get_hash_key(((int)self->len));
    result_703+=int_get_hash_key(((int)self->it));
    return result_703;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
    if(    !list_item$1sNode$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sNode$ph_equals(struct list_item$1sNode$ph* left, struct list_item$1sNode$ph* right){
    if(    !sNode_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_706;
int i_707;
struct sType* default_value_708;
struct list$1sType$ph* __result_obj__379;
struct list_item$1sType$ph* it_709;
int i_710;
struct sType* __dec_obj235;
struct list$1sType$ph* __result_obj__380;
default_value_708 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_706=self->len;
        for(        i_707=0;        i_707<position-len_706;        i_707++        ){
            memset(&default_value_708,0,sizeof(struct sType*));
            list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(default_value_708));
            come_call_finalizer3(default_value_708,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__379 = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__379;
    }
    it_709=self->head;
    i_710=0;
    while(it_709!=((void*)0)) {
        if(        position==i_710) {
            __dec_obj235=it_709->item;
            it_709->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj235,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_709=it_709->next;
        i_710++;
    }
    __result_obj__380 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__380;
}


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
    _Bool mDefferRightValue;
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
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    _Bool mExceptionGenericsType;
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
    _Bool mComma;
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
    _Bool mConstFun;
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
    _Bool mConstFun;
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
    _Bool emb_cpp;
    _Bool gcc_compiler;
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
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

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNode$ph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullValue
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
};

// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6) __attribute__((availability(macosx,introduced=10.10)));
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int printf(const char* anonymous_var_nameX15, ...) __attribute__((__format__ (__printf__, 1, 2)));
void clearerr(struct __sFILE* anonymous_var_nameX36);
int fclose(struct __sFILE* anonymous_var_nameX37);
int feof(struct __sFILE* anonymous_var_nameX38);
int ferror(struct __sFILE* anonymous_var_nameX39);
int fflush(struct __sFILE* anonymous_var_nameX40);
int fgetc(struct __sFILE* anonymous_var_nameX41);
int fgetpos(struct __sFILE* anonymous_var_nameX42, long long* anonymous_var_nameX43);
char* fgets(char* anonymous_var_nameX44, int anonymous_var_nameX45, struct __sFILE* anonymous_var_nameX46);
struct __sFILE* fopen(const char* __filename, const char* __mode) __asm("_" "fopen" );
int fprintf(struct __sFILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fputs(const char* anonymous_var_nameX51, struct __sFILE* anonymous_var_nameX52) __asm("_" "fputs" );
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX53, const char* anonymous_var_nameX54, struct __sFILE* anonymous_var_nameX55) __asm("_" "freopen" );
int fscanf(struct __sFILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(struct __sFILE* anonymous_var_nameX58, long anonymous_var_nameX59, int anonymous_var_nameX60);
int fsetpos(struct __sFILE* anonymous_var_nameX61, const long long* anonymous_var_nameX62);
long ftell(struct __sFILE* anonymous_var_nameX63);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream) __asm("_" "fwrite" );
int getc(struct __sFILE* anonymous_var_nameX64);
int getchar();
char* gets(char* anonymous_var_nameX65);
void perror(const char* anonymous_var_nameX66) __attribute__((__cold__));
int putc(int anonymous_var_nameX67, struct __sFILE* anonymous_var_nameX68);
int putchar(int anonymous_var_nameX69);
int puts(const char* anonymous_var_nameX70);
int remove(const char* anonymous_var_nameX71);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX72);
int scanf(const char* anonymous_var_nameX73, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(struct __sFILE* anonymous_var_nameX74, char* anonymous_var_nameX75);
int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, unsigned long  int anonymous_var_nameX79);
int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...) __attribute__((__format__ (__scanf__, 2, 3)));
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX84);
int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);
int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char* anonymous_var_nameX92, const char* anonymous_var_nameX93, va_list anonymous_var_nameX94) __attribute__((__format__ (__printf__, 2, 0)));
char* ctermid(char* anonymous_var_nameX95);
struct __sFILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97) __asm("_" "fdopen" );
int fileno(struct __sFILE* anonymous_var_nameX98);
int pclose(struct __sFILE* anonymous_var_nameX99) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));
struct __sFILE* popen(const char* anonymous_var_nameX100, const char* anonymous_var_nameX101) __asm("_" "popen" ) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));
int __srget(struct __sFILE* anonymous_var_nameX102);
int __svfscanf(struct __sFILE* anonymous_var_nameX103, const char* anonymous_var_nameX104, va_list anonymous_var_nameX105) __attribute__((__format__ (__scanf__, 2, 0)));
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
char* tempnam(const char* __dir, const char* __prefix) __asm("_" "tempnam" );
int fseeko(struct __sFILE* __stream, long long __offset, int __whence);
long long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char* __format, va_list anonymous_var_nameX119) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX120) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121) __attribute__((__format__ (__scanf__, 2, 0)));
int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream) __attribute__((availability(macosx,introduced=10.7)));
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream) __attribute__((availability(macosx,introduced=10.7)));
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...) __attribute__((__format__ (__printf__, 2, 3)));
char* ctermid_r(char* anonymous_var_nameX129);
char* fgetln(struct __sFILE* anonymous_var_nameX130, unsigned long  int* anonymous_var_nameX131);
const char* fmtcheck(const char* anonymous_var_nameX132, const char* anonymous_var_nameX133) __attribute__((format_arg(2)));
int fpurge(struct __sFILE* anonymous_var_nameX134);
void setbuffer(struct __sFILE* anonymous_var_nameX135, char* anonymous_var_nameX136, int anonymous_var_nameX137);
int setlinebuf(struct __sFILE* anonymous_var_nameX138);
int vasprintf(char** anonymous_var_nameX139, const char* anonymous_var_nameX140, va_list anonymous_var_nameX141) __attribute__((__format__ (__printf__, 2, 0)));
struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX173, unsigned int anonymous_var_nameX174);
int getiopolicy_np(int anonymous_var_nameX175, int anonymous_var_nameX176) __attribute__((availability(macosx,introduced=10.5)));
int getrlimit(int anonymous_var_nameX177, struct rlimit* anonymous_var_nameX178) __asm("_" "getrlimit" );
int getrusage(int anonymous_var_nameX179, struct rusage* anonymous_var_nameX180);
int setpriority(int anonymous_var_nameX181, unsigned int anonymous_var_nameX182, int anonymous_var_nameX183);
int setiopolicy_np(int anonymous_var_nameX184, int anonymous_var_nameX185, int anonymous_var_nameX186) __attribute__((availability(macosx,introduced=10.5)));
int setrlimit(int anonymous_var_nameX187, const struct rlimit* anonymous_var_nameX188) __asm("_" "setrlimit" );
int wait(int* anonymous_var_nameX189) __asm("_" "wait" );
int waitpid(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192) __asm("_" "waitpid" );
int waitid(enum anonymous_typeY2 anonymous_var_nameX193, unsigned int anonymous_var_nameX194, struct __siginfo* anonymous_var_nameX195, int anonymous_var_nameX196) __asm("_" "waitid" );
int wait3(int* anonymous_var_nameX197, int anonymous_var_nameX198, struct rusage* anonymous_var_nameX199);
int wait4(int anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, struct rusage* anonymous_var_nameX203);
void* alloca(unsigned long  int anonymous_var_nameX204);
void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
void malloc_type_free(void* ptr, unsigned long  long type_id);
void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2,3)));
void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
void* malloc(unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void* calloc(unsigned long  int __count, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2))) ;
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) ;
void* reallocf(void* __ptr, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* valloc(unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_align(1))) __attribute__((alloc_size(2))) __attribute__((availability(macosx,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size) __attribute__((availability(macosx,introduced=10.6)));
void abort() __attribute__((__cold__)) __attribute__((__noreturn__));
int abs(int anonymous_var_nameX206) __attribute__((__const__));
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX207);
int atoi(const char* anonymous_var_nameX208);
long atol(const char* anonymous_var_nameX209);
long long atoll(const char* anonymous_var_nameX210);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX213, int anonymous_var_nameX214) __attribute__((__const__));
void exit(int anonymous_var_nameX215) __attribute__((__noreturn__));
char* getenv(const char* anonymous_var_nameX216);
long labs(long anonymous_var_nameX217) __attribute__((__const__));
struct anonymous_typeX6 ldiv(long anonymous_var_nameX218, long anonymous_var_nameX219) __attribute__((__const__));
long long llabs(long  long anonymous_var_nameX220);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX221, long  long anonymous_var_nameX222);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX223, const char* anonymous_var_nameX224, unsigned long  int anonymous_var_nameX225);
int mbtowc(int* anonymous_var_nameX226, const char* anonymous_var_nameX227, unsigned long  int anonymous_var_nameX228);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX231) __attribute__((__noreturn__));
int rand() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
void srand(unsigned int anonymous_var_nameX232) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234) __asm("_" "strtod" );
float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236) __asm("_" "strtof" );
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX239) __asm("_" "system" );
unsigned long  int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);
void _Exit(int anonymous_var_nameX245) __attribute__((__noreturn__));
long a64l(const char* anonymous_var_nameX246);
double drand48();
char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);
double erand48(unsigned short int anonymous_var_nameX251[3]);
char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);
char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);
int getsubopt(char** anonymous_var_nameX259, char** anonymous_var_nameX260, char** anonymous_var_nameX261);
int grantpt(int anonymous_var_nameX262);
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long  int anonymous_var_nameX265);
long jrand48(unsigned short int anonymous_var_nameX266[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* l64a(long anonymous_var_nameX267);
void lcong48(unsigned short int anonymous_var_nameX268[7]);
long lrand48() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* mktemp(char* anonymous_var_nameX269);
int mkstemp(char* anonymous_var_nameX270);
long mrand48() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
long nrand48(unsigned short int anonymous_var_nameX271[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int posix_openpt(int anonymous_var_nameX272);
char* ptsname(int anonymous_var_nameX273);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen) __attribute__((availability(macos,introduced=10.13.4))) __attribute__((availability(ios,introduced=11.3))) __attribute__((availability(tvos,introduced=11.3))) __attribute__((availability(watchos,introduced=4.3)));
int putenv(char* anonymous_var_nameX274) __asm("_" "putenv" );
long random() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int rand_r(unsigned int* anonymous_var_nameX275) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* realpath(const char* anonymous_var_nameX276, char* anonymous_var_nameX277) __asm("_" "realpath" "$DARWIN_EXTSN");
unsigned short int* seed48(unsigned short int anonymous_var_nameX278[3]);
int setenv(const char* __name, const char* __value, int __overwrite) __asm("_" "setenv" );
void setkey(const char* anonymous_var_nameX279) __asm("_" "setkey" );
char* setstate(const char* anonymous_var_nameX280);
void srand48(long anonymous_var_nameX281);
void srandom(unsigned int anonymous_var_nameX282);
int unlockpt(int anonymous_var_nameX283);
int unsetenv(const char* anonymous_var_nameX284) __asm("_" "unsetenv" );
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX285, int anonymous_var_nameX286) __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(macosx,deprecated=10.12,message="use arc4random_stir")))
    __attribute__((availability(ios,introduced=2.0))) __attribute__((availability(ios,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(tvos,introduced=2.0))) __attribute__((availability(tvos,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(watchos,introduced=1.0))) __attribute__((availability(watchos,deprecated=3.0,message="use arc4random_stir")));
void arc4random_buf(void* __buf, unsigned long  int __nbytes) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound) __attribute__((availability(macosx,introduced=10.7)));
int atexit_b(void (*anonymous_lambda_var_nameZ8)()) __attribute__((availability(macosx,introduced=10.6)));
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
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
int daemon(int anonymous_var_nameX311, int anonymous_var_nameX312) __asm("_" "daemon" ) __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char* devname(int anonymous_var_nameX313, unsigned short int anonymous_var_nameX314);
char* devname_r(int anonymous_var_nameX315, unsigned short int anonymous_var_nameX316, char* buf, int len);
char* getbsize(int* anonymous_var_nameX317, long* anonymous_var_nameX318);
int getloadavg(double anonymous_var_nameX319[], int anonymous_var_nameX320);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX321);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX344) __attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp) __attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.0))) __attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)));
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
char* strerror(int __errnum) __asm("_" "strerror" );
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
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
char* strndup(const char* __s1, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int strnlen(const char* __s1, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
char* strsignal(int __sig);
int memset_s(void* __s, unsigned long  int __smax, int __c, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.9)));
void* memmem(const void* __big, unsigned long  int __big_len, const void* __little, unsigned long  int __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
char* strcasestr(const char* __big, const char* __little);
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, unsigned long  int anonymous_var_nameX350);
void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, unsigned long  int anonymous_var_nameX353);
void bzero(void* anonymous_var_nameX354, unsigned long  int anonymous_var_nameX355);
char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);
char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);
int ffs(int anonymous_var_nameX360);
int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);
int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, unsigned long  int anonymous_var_nameX365);
int ffsl(long anonymous_var_nameX366) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long  long anonymous_var_nameX367) __attribute__((availability(macosx,introduced=10.9)));
int fls(int anonymous_var_nameX368) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long anonymous_var_nameX369) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long  long anonymous_var_nameX370) __attribute__((availability(macosx,introduced=10.9)));
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
unsigned long  int clock() __asm("_" "clock" );
char* ctime(const long* anonymous_var_nameX413);
double difftime(long anonymous_var_nameX414, long anonymous_var_nameX415);
struct tm* getdate(const char* anonymous_var_nameX416);
struct tm* gmtime(const long* anonymous_var_nameX417);
struct tm* localtime(const long* anonymous_var_nameX418);
long mktime(struct tm* anonymous_var_nameX419) __asm("_" "mktime" );
unsigned long  int strftime(char* anonymous_var_nameX420, unsigned long  int anonymous_var_nameX421, const char* anonymous_var_nameX422, const struct tm* anonymous_var_nameX423) __asm("_" "strftime" );
char* strptime(const char* anonymous_var_nameX424, const char* anonymous_var_nameX425, struct tm* anonymous_var_nameX426) __asm("_" "strptime" );
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
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp) __asm("_" "nanosleep" );
int clock_getres(enum anonymous_typeY12 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY12 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY12 __clock_id);
int clock_settime(enum anonymous_typeY12 __clock_id, const struct timespec* __tp);
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
unsigned long  int wcsftime(int* anonymous_var_nameX518, unsigned long  int anonymous_var_nameX519, const int* anonymous_var_nameX520, const struct tm* anonymous_var_nameX521) __asm("_" "wcsftime" );
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
int* wcpcpy(int* anonymous_var_nameX602, const int* anonymous_var_nameX603) __attribute__((availability(macosx,introduced=10.7)));
int* wcpncpy(int* anonymous_var_nameX604, const int* anonymous_var_nameX605, unsigned long  int anonymous_var_nameX606) __attribute__((availability(macosx,introduced=10.7)));
int* wcsdup(const int* anonymous_var_nameX607) __attribute__((availability(macosx,introduced=10.7)));
int wcscasecmp(const int* anonymous_var_nameX608, const int* anonymous_var_nameX609) __attribute__((availability(macosx,introduced=10.7)));
int wcsncasecmp(const int* anonymous_var_nameX610, const int* anonymous_var_nameX611, unsigned long  int n) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int wcsnlen(const int* anonymous_var_nameX612, unsigned long  int anonymous_var_nameX613) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int wcsnrtombs(char* anonymous_var_nameX614, const int** anonymous_var_nameX615, unsigned long  int anonymous_var_nameX616, unsigned long  int anonymous_var_nameX617, union anonymous_typeZ1* anonymous_var_nameX618);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int* fgetwln(struct __sFILE* anonymous_var_nameX619, unsigned long  int* anonymous_var_nameX620) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int wcslcat(int* anonymous_var_nameX621, const int* anonymous_var_nameX622, unsigned long  int anonymous_var_nameX623);
unsigned long  int wcslcpy(int* anonymous_var_nameX624, const int* anonymous_var_nameX625, unsigned long  int anonymous_var_nameX626);
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
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
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
int err_msg(struct sInfo* info, char* msg, ...);
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
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value);
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
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
struct sNode* create_int_node(int value, struct sInfo* info);
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
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
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
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info);
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
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
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
struct sNode* create_null_return_value(struct sInfo* info);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
// uniq global variable
// inline function

// body function
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_121;
struct list$1char$* __result_obj__59;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_121=0;    i_121<num_value;    i_121++    ){
        list$1char$_push_back(self,values[i_121]);
    }
    __result_obj__59 = (struct list$1char$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__59,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_122;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_123;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_124;
struct list$1char$* __result_obj__58;
    if(    self->len==0) {
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1char$*"))));
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        litem_124->item=item;
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
    __result_obj__58 = self;
    return __result_obj__58;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_125;
struct list_item$1char$* prev_it_126;
    it_125=self->head;
    while(    it_125!=((void*)0)) {
        prev_it_126=it_125;
        it_125=it_125->next;
        /*c*/ come_call_finalizer3(prev_it_126,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_127;
struct list$1char$p* __result_obj__62;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_127=0;    i_127<num_value;    i_127++    ){
        list$1char$p_push_back(self,values[i_127]);
    }
    __result_obj__62 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_128;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_129;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_130;
struct list$1char$p* __result_obj__61;
    if(    self->len==0) {
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1char$p*"))));
        litem_130->prev=self->tail;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail->next=litem_130;
        self->tail=litem_130;
    }
    self->len++;
    __result_obj__61 = self;
    return __result_obj__61;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_131;
struct list_item$1char$p* prev_it_132;
    it_131=self->head;
    while(    it_131!=((void*)0)) {
        prev_it_132=it_131;
        it_131=it_131->next;
        /*c*/ come_call_finalizer3(prev_it_132,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_133;
struct list$1short$* __result_obj__65;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_133=0;    i_133<num_value;    i_133++    ){
        list$1short$_push_back(self,values[i_133]);
    }
    __result_obj__65 = (struct list$1short$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__65,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_134;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_135;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_136;
struct list$1short$* __result_obj__64;
    if(    self->len==0) {
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1short$*"))));
        litem_136->prev=self->tail;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail->next=litem_136;
        self->tail=litem_136;
    }
    self->len++;
    __result_obj__64 = self;
    return __result_obj__64;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_137;
struct list_item$1short$* prev_it_138;
    it_137=self->head;
    while(    it_137!=((void*)0)) {
        prev_it_138=it_137;
        it_137=it_137->next;
        /*c*/ come_call_finalizer3(prev_it_138,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_139;
struct list$1int$* __result_obj__68;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_139=0;    i_139<num_value;    i_139++    ){
        list$1int$_push_back(self,values[i_139]);
    }
    __result_obj__68 = (struct list$1int$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__68,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_140;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_141;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_142;
struct list$1int$* __result_obj__67;
    if(    self->len==0) {
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1int$*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__67 = self;
    return __result_obj__67;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_143;
struct list_item$1int$* prev_it_144;
    it_143=self->head;
    while(    it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*c*/ come_call_finalizer3(prev_it_144,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_145;
struct list$1long$* __result_obj__71;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_145=0;    i_145<num_value;    i_145++    ){
        list$1long$_push_back(self,values[i_145]);
    }
    __result_obj__71 = (struct list$1long$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__71,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__71;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_146;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_147;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_148;
struct list$1long$* __result_obj__70;
    if(    self->len==0) {
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1long$*"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result_obj__70 = self;
    return __result_obj__70;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_149;
struct list_item$1long$* prev_it_150;
    it_149=self->head;
    while(    it_149!=((void*)0)) {
        prev_it_150=it_149;
        it_149=it_149->next;
        /*c*/ come_call_finalizer3(prev_it_150,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_151;
struct list$1float$* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_151=0;    i_151<num_value;    i_151++    ){
        list$1float$_push_back(self,values[i_151]);
    }
    __result_obj__74 = (struct list$1float$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_152;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_153;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_154;
struct list$1float$* __result_obj__73;
    if(    self->len==0) {
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1float$*"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result_obj__73 = self;
    return __result_obj__73;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_155;
struct list_item$1float$* prev_it_156;
    it_155=self->head;
    while(    it_155!=((void*)0)) {
        prev_it_156=it_155;
        it_155=it_155->next;
        /*c*/ come_call_finalizer3(prev_it_156,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_157;
struct list$1double$* __result_obj__77;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_157=0;    i_157<num_value;    i_157++    ){
        list$1double$_push_back(self,values[i_157]);
    }
    __result_obj__77 = (struct list$1double$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_158;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_159;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_160;
struct list$1double$* __result_obj__76;
    if(    self->len==0) {
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1double$*"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result_obj__76 = self;
    return __result_obj__76;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_161;
struct list_item$1double$* prev_it_162;
    it_161=self->head;
    while(    it_161!=((void*)0)) {
        prev_it_162=it_161;
        it_161=it_161->next;
        /*c*/ come_call_finalizer3(prev_it_162,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__111 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_196;
struct list_item$1char$ph* prev_it_197;
    it_196=self->head;
    while(    it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        /*c*/ come_call_finalizer3(prev_it_197,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_201;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_202;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_203;
char* __dec_obj15;
struct list$1char$ph* __result_obj__113;
    if(    self->len==0) {
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        __dec_obj15=litem_203->item,
        litem_203->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__113 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__113;
}

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
char* __dec_obj16;
struct sStrNode* __result_obj__165;
    ((struct sNodeBase*)(__right_value189=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value189,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj16=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__165 = (struct sStrNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__165,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__165;
}

char* sStrNode_kind(struct sStrNode* self){
void* __right_value191 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value191=__builtin_string("sStrNode"))));
    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__166;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct CVALUE* come_value_239;
void* __right_value194 = (void*)0;
char* __dec_obj17;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct sType* __dec_obj18;
_Bool __result_obj__168;
    come_value_239=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*"))));
    __dec_obj17=come_value_239->c_value,
    come_value_239->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj18=come_value_239->type,
    come_value_239->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_239->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_239));
    add_come_last_code(info,"%s",come_value_239->c_value);
    __result_obj__168 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_239,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__168;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sStrNode_finalize(struct sStrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mChannelType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_240;
struct list_item$1sType$ph* prev_it_241;
    it_240=self->head;
    while(    it_240!=((void*)0)) {
        prev_it_241=it_240;
        it_240=it_240->next;
        /*c*/ come_call_finalizer3(prev_it_241,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_242;
struct list_item$1sNode$ph* prev_it_243;
    it_242=self->head;
    while(    it_242!=((void*)0)) {
        prev_it_243=it_242;
        it_242=it_242->next;
        /*c*/ come_call_finalizer3(prev_it_243,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value198 = (void*)0;
struct list_item$1CVALUE$ph* litem_244;
struct CVALUE* __dec_obj19;
void* __right_value199 = (void*)0;
struct list_item$1CVALUE$ph* litem_245;
struct CVALUE* __dec_obj20;
void* __right_value200 = (void*)0;
struct list_item$1CVALUE$ph* litem_246;
struct CVALUE* __dec_obj21;
struct list$1CVALUE$ph* __result_obj__167;
    if(    self->len==0) {
        litem_244=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value198=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_244->prev=((void*)0);
        litem_244->next=((void*)0);
        __dec_obj19=litem_244->item,
        litem_244->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_244;
        self->head=litem_244;
    }
    else if(    self->len==1) {
        litem_245=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value199=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_245->prev=self->head;
        litem_245->next=((void*)0);
        __dec_obj20=litem_245->item,
        litem_245->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_245;
        self->head->next=litem_245;
    }
    else {
        litem_246=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value200=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_246->prev=self->tail;
        litem_246->next=((void*)0);
        __dec_obj21=litem_246->item,
        litem_246->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_246;
        self->tail=litem_246;
    }
    self->len++;
    __result_obj__167 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __right_value201 = (void*)0;
struct buffer* __dec_obj22;
struct sBufferNode* __result_obj__169;
    ((struct sNodeBase*)(__right_value201=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value201,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj22=self->value,
    self->value=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj22,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->size=size;
    __result_obj__169 = (struct sBufferNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __right_value202 = (void*)0;
char* __result_obj__170;
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value202=__builtin_string("sBufferNode"))));
    (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__170;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_247;
unsigned long  int size_248;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct CVALUE* come_value_249;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct buffer* buf_250;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct sType* type2_251;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct sType* any_type_252;
void* __right_value213 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var1 = (void*)0;
char* finalizer_name_253=0;
char* cloner_name_254=0;
char* get_hash_key_name_255=0;
char* equaler_name_256=0;
void* __right_value214 = (void*)0;
_Bool _if_conditional1;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sType* type2_263;
void* __right_value220 = (void*)0;
char* __dec_obj23;
void* __right_value259 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__194;
    value_247=(struct buffer*)come_increment_ref_count(self->value);
    size_248=self->size;
    come_value_249=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*"))));
    buf_250=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*"))));
    type2_251=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    type2_251->mPointerNum++;
    any_type_252=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    any_type_252->mPointerNum=1;
    any_type_252->mHeap=(_Bool)1;
    multiple_assign_var1=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value213=create_vtable((struct sType*)come_increment_ref_count(any_type_252),info)));
    finalizer_name_253=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    cloner_name_254=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    get_hash_key_name_255=(char*)come_increment_ref_count(multiple_assign_var1->v3);
    equaler_name_256=(char*)come_increment_ref_count(multiple_assign_var1->v4);
    /*c*/ come_call_finalizer3(__right_value213,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional1=(((struct sFun*)(__right_value214=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value214,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional1) {
        buffer_append_format(buf_250,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, \"buffer\"), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value215=buffer_to_string(value_247))),size_248);
        (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_format(buf_250,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\"), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value216=buffer_to_string(value_247))),size_248);
        (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(type2_251,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type2_263=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 74, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer*")),(_Bool)0,info));
    type2_263->mHeap=(_Bool)1;
    __dec_obj23=come_value_249->c_value,
    come_value_249->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_250));
    __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=come_value_249->type,
    come_value_249->type=(struct sType*)come_increment_ref_count(sType_clone(type2_263));
    /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_249->var=((void*)0);
    append_object_to_right_values2(come_value_249,(struct sType*)come_increment_ref_count(type2_263),info,(_Bool)0,((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_249));
    add_come_last_code(info,"%s",come_value_249->c_value);
    __result_obj__194 = (_Bool)1;
    /*c*/ come_call_finalizer3(value_247,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_249,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_250,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(any_type_252,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_253 = come_decrement_ref_count(finalizer_name_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_254 = come_decrement_ref_count(cloner_name_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_255 = come_decrement_ref_count(get_hash_key_name_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_256 = come_decrement_ref_count(equaler_name_256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_263,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__194;
}

static void sBufferNode_finalize(struct sBufferNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        (self->v4 = come_decrement_ref_count(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_257;
unsigned int hash_258;
unsigned int it_259;
struct sFun* __result_obj__171;
struct sFun* __result_obj__172;
struct sFun* __result_obj__173;
struct sFun* __result_obj__174;
default_value_257 = (void*)0;
    memset(&default_value_257,0,sizeof(struct sFun*));
    hash_258=string_get_hash_key(((char*)key))%self->size;
    it_259=hash_258;
    while(    (_Bool)1) {
        if(        self->item_existance[it_259]) {
            if(            string_equals(self->keys[it_259],key)) {
                __result_obj__171 = (struct sFun*)come_increment_ref_count(self->items[it_259]);
                /*c*/ come_call_finalizer3(default_value_257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__171,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__171;
            }
            it_259++;
            if(            it_259>=self->size) {
                it_259=0;
            }
            else if(            it_259==hash_258) {
                __result_obj__172 = (struct sFun*)come_increment_ref_count(default_value_257);
                /*c*/ come_call_finalizer3(default_value_257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__172,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__172;
            }
        }
        else {
            __result_obj__173 = (struct sFun*)come_increment_ref_count(default_value_257);
            /*c*/ come_call_finalizer3(default_value_257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__173,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__173;
        }
    }
    __result_obj__174 = (struct sFun*)come_increment_ref_count(default_value_257);
    /*c*/ come_call_finalizer3(default_value_257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__174,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__174;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mLambdaType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_260;
unsigned int hash_261;
unsigned int it_262;
struct sFun* __result_obj__175;
struct sFun* __result_obj__176;
struct sFun* __result_obj__177;
struct sFun* __result_obj__178;
default_value_260 = (void*)0;
    memset(&default_value_260,0,sizeof(struct sFun*));
    hash_261=string_get_hash_key(((char*)key))%self->size;
    it_262=hash_261;
    while(    (_Bool)1) {
        if(        self->item_existance[it_262]) {
            if(            string_equals(self->keys[it_262],key)) {
                __result_obj__175 = (struct sFun*)come_increment_ref_count(self->items[it_262]);
                /*c*/ come_call_finalizer3(default_value_260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__175,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__175;
            }
            it_262++;
            if(            it_262>=self->size) {
                it_262=0;
            }
            else if(            it_262==hash_261) {
                __result_obj__176 = (struct sFun*)come_increment_ref_count(default_value_260);
                /*c*/ come_call_finalizer3(default_value_260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__176,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__176;
            }
        }
        else {
            __result_obj__177 = (struct sFun*)come_increment_ref_count(default_value_260);
            /*c*/ come_call_finalizer3(default_value_260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__177,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__177;
        }
    }
    __result_obj__178 = (struct sFun*)come_increment_ref_count(default_value_260);
    /*c*/ come_call_finalizer3(default_value_260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__178,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__178;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__179;
void* __right_value221 = (void*)0;
struct sType* result_264;
void* __right_value222 = (void*)0;
struct sType* __dec_obj24;
void* __right_value223 = (void*)0;
struct sType* __dec_obj25;
void* __right_value231 = (void*)0;
struct list$1sType$ph* __dec_obj29;
void* __right_value232 = (void*)0;
struct sType* __dec_obj30;
void* __right_value233 = (void*)0;
struct sType* __dec_obj31;
void* __right_value235 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value236 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value237 = (void*)0;
char* __dec_obj34;
void* __right_value238 = (void*)0;
char* __dec_obj35;
void* __right_value239 = (void*)0;
char* __dec_obj36;
void* __right_value247 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value248 = (void*)0;
char* __dec_obj41;
void* __right_value249 = (void*)0;
struct list$1sType$ph* __dec_obj42;
void* __right_value257 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value258 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__193;
    if(    self==(void*)0) {
        __result_obj__179 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__179,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__179;
    }
    result_264=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_264->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_264->mOriginalLoadVarType,
        result_264->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_264->mChannelType,
        result_264->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_264->mGenericsTypes,
        result_264->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_264->mNoSolvedGenericsType,
        result_264->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_264->mAnyOriginalType,
        result_264->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_264->mSizeNum,
        result_264->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_264->mAlignas,
        result_264->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_264->mTupleName,
        result_264->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_264->mAttribute,
        result_264->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_264->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_264->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_264->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_264->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_264->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_264->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_264->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_264->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_264->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_264->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_264->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_264->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_264->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_264->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_264->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_264->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_264->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_264->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_264->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_264->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_264->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_264->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_264->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_264->mAsmName,
        result_264->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_264->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_264->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_264->mArrayNum,
        result_264->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_264->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_264->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_264->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_264->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_264->mOriginalTypeName,
        result_264->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_264->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_264->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_264->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_264->mParamTypes,
        result_264->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_264->mParamNames,
        result_264->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_264->mResultType,
        result_264->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_264->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__193 = (struct sType*)come_increment_ref_count(result_264);
    /*c*/ come_call_finalizer3(result_264,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__180;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1sType$ph* result_265;
struct list_item$1sType$ph* it_266;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct list$1sType$ph* __result_obj__183;
    if(    self==((void*)0)) {
        __result_obj__180 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__180,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__180;
    }
    result_265=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1sType$ph*"))));
    it_266=self->head;
    while(    it_266!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_265,(struct sType*)come_increment_ref_count(sType_clone(it_266->item)));
        }
        else {
            list$1sType$ph_add(result_265,(struct sType*)come_increment_ref_count(sType_clone(it_266->item)));
        }
        it_266=it_266->next;
    }
    __result_obj__183 = (struct list$1sType$ph*)come_increment_ref_count(result_265);
    /*c*/ come_call_finalizer3(result_265,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__183,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__181;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__181 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__181,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value226 = (void*)0;
struct list_item$1sType$ph* litem_267;
struct sType* __dec_obj26;
void* __right_value227 = (void*)0;
struct list_item$1sType$ph* litem_268;
struct sType* __dec_obj27;
void* __right_value228 = (void*)0;
struct list_item$1sType$ph* litem_269;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__182;
    if(    self->len==0) {
        litem_267=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value226=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_267->prev=((void*)0);
        litem_267->next=((void*)0);
        __dec_obj26=litem_267->item,
        litem_267->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_267;
        self->head=litem_267;
    }
    else if(    self->len==1) {
        litem_268=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value227=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_268->prev=self->head;
        litem_268->next=((void*)0);
        __dec_obj27=litem_268->item,
        litem_268->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_268;
        self->head->next=litem_268;
    }
    else {
        litem_269=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value228=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_269->prev=self->tail;
        litem_269->next=((void*)0);
        __dec_obj28=litem_269->item,
        litem_269->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_269;
        self->tail=litem_269;
    }
    self->len++;
    __result_obj__182 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__182;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_270;
struct list_item$1sType$ph* prev_it_271;
    it_270=self->head;
    while(    it_270!=((void*)0)) {
        prev_it_271=it_270;
        it_270=it_270->next;
        /*c*/ come_call_finalizer3(prev_it_271,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__184;
void* __right_value234 = (void*)0;
struct sNode* result_272;
struct sNode* __result_obj__185;
    if(    self==(void*)0) {
        __result_obj__184 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__184) ? __result_obj__184 = come_decrement_ref_count(__result_obj__184, ((struct sNode*)__result_obj__184)->finalize, ((struct sNode*)__result_obj__184)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__184;
    }
    result_272=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_272->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_272->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_272->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_272->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_272->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_272->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_272->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_272->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_272->kind=self->kind;
    }
    __result_obj__185 = (struct sNode*)come_increment_ref_count(result_272);
    ((result_272) ? result_272 = come_decrement_ref_count(result_272, ((struct sNode*)result_272)->finalize, ((struct sNode*)result_272)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__185) ? __result_obj__185 = come_decrement_ref_count(__result_obj__185, ((struct sNode*)__result_obj__185)->finalize, ((struct sNode*)__result_obj__185)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__185;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__186;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct list$1sNode$ph* result_273;
struct list_item$1sNode$ph* it_274;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1sNode$ph* __result_obj__189;
    if(    self==((void*)0)) {
        __result_obj__186 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__186,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__186;
    }
    result_273=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_274=self->head;
    while(    it_274!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_273,(struct sNode*)come_increment_ref_count(sNode_clone(it_274->item)));
        }
        else {
            list$1sNode$ph_add(result_273,(struct sNode*)come_increment_ref_count(sNode_clone(it_274->item)));
        }
        it_274=it_274->next;
    }
    __result_obj__189 = (struct list$1sNode$ph*)come_increment_ref_count(result_273);
    /*c*/ come_call_finalizer3(result_273,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__189,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__187;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__187 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__187,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__187;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value242 = (void*)0;
struct list_item$1sNode$ph* litem_275;
struct sNode* __dec_obj37;
void* __right_value243 = (void*)0;
struct list_item$1sNode$ph* litem_276;
struct sNode* __dec_obj38;
void* __right_value244 = (void*)0;
struct list_item$1sNode$ph* litem_277;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__188;
    if(    self->len==0) {
        litem_275=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value242=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_275->prev=((void*)0);
        litem_275->next=((void*)0);
        __dec_obj37=litem_275->item,
        litem_275->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_275;
        self->head=litem_275;
    }
    else if(    self->len==1) {
        litem_276=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value243=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_276->prev=self->head;
        litem_276->next=((void*)0);
        __dec_obj38=litem_276->item,
        litem_276->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_276;
        self->head->next=litem_276;
    }
    else {
        litem_277=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value244=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_277->prev=self->tail;
        litem_277->next=((void*)0);
        __dec_obj39=litem_277->item,
        litem_277->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_277;
        self->tail=litem_277;
    }
    self->len++;
    __result_obj__188 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__188;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_278;
struct list_item$1sNode$ph* prev_it_279;
    it_278=self->head;
    while(    it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        /*c*/ come_call_finalizer3(prev_it_279,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__190;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1char$ph* result_280;
struct list_item$1char$ph* it_281;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct list$1char$ph* __result_obj__192;
    if(    self==((void*)0)) {
        __result_obj__190 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__190,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__190;
    }
    result_280=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1char$ph*"))));
    it_281=self->head;
    while(    it_281!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_280,(char*)come_increment_ref_count((char*)come_memdup(it_281->item, "/usr/local/include/comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_280,(char*)come_increment_ref_count((char*)come_memdup(it_281->item, "/usr/local/include/comelang.h", 1032, "char*")));
        }
        it_281=it_281->next;
    }
    __result_obj__192 = (struct list$1char$ph*)come_increment_ref_count(result_280);
    /*c*/ come_call_finalizer3(result_280,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__192,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value252 = (void*)0;
struct list_item$1char$ph* litem_282;
char* __dec_obj43;
void* __right_value253 = (void*)0;
struct list_item$1char$ph* litem_283;
char* __dec_obj44;
void* __right_value254 = (void*)0;
struct list_item$1char$ph* litem_284;
char* __dec_obj45;
struct list$1char$ph* __result_obj__191;
    if(    self->len==0) {
        litem_282=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value252=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        __dec_obj43=litem_282->item,
        litem_282->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1) {
        litem_283=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value253=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        __dec_obj44=litem_283->item,
        litem_283->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value254=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        __dec_obj45=litem_284->item,
        litem_284->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_284;
        self->tail=litem_284;
    }
    self->len++;
    __result_obj__191 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__191;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_285;
struct list_item$1char$ph* prev_it_286;
    it_285=self->head;
    while(    it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        /*c*/ come_call_finalizer3(prev_it_286,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info){
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
char* __dec_obj49;
void* __right_value262 = (void*)0;
struct list$1sNode$ph* __dec_obj50;
struct sSStringNode* __result_obj__195;
    ((struct sNodeBase*)(__right_value260=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value260,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj49=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj50=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(exps));
    /*b*/ come_call_finalizer3(__dec_obj50,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__195 = (struct sSStringNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__195,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __right_value263 = (void*)0;
char* __result_obj__196;
    __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value263=__builtin_string("sSStringNode"))));
    (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__196;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct CVALUE* come_value_287;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* buf_288;
struct list$1sNode$ph* o2_saved_289;
struct sNode* it_292;
void* __right_value268 = (void*)0;
struct sNode* obj_295;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_296;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct sNode* node_304;
_Bool Value_305;
_Bool __result_obj__208;
void* __right_value282 = (void*)0;
struct CVALUE* come_value_306;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sType* type2_307;
void* __right_value286 = (void*)0;
char* __dec_obj58;
void* __right_value287 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__209;
    come_value_287=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 108, "struct CVALUE*"))));
    buf_288=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 110, "struct buffer*"))));
    buffer_append_str(buf_288,"xsprintf(\"");
    buffer_append_str(buf_288,self->value);
    buffer_append_str(buf_288,"\"");
    if(    list$1sNode$ph_length(self->exps)>0) {
        for(        o2_saved_289=(struct list$1sNode$ph*)come_increment_ref_count((self->exps)),it_292=list$1sNode$ph_begin((o2_saved_289));        !list$1sNode$ph_end((o2_saved_289));        it_292=list$1sNode$ph_next((o2_saved_289))        ){
            obj_295=(struct sNode*)come_increment_ref_count(sNode_clone(it_292));
            params_296=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 120, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_296,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 121, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(sNode_clone(it_292)))));
            node_304=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_295),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_296),((void*)0),0,((void*)0),(_Bool)0,info));
            Value_305=node_compile(node_304,info);
            if(            !Value_305) {
                __result_obj__208 = (_Bool)0;
                ((obj_295) ? obj_295 = come_decrement_ref_count(obj_295, ((struct sNode*)obj_295)->finalize, ((struct sNode*)obj_295)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_296,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_304) ? node_304 = come_decrement_ref_count(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(o2_saved_289,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_287,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_288,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__208;
            }
            else {
            }
            come_value_306=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_288,",");
            buffer_append_str(buf_288,come_value_306->c_value);
            ((obj_295) ? obj_295 = come_decrement_ref_count(obj_295, ((struct sNode*)obj_295)->finalize, ((struct sNode*)obj_295)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(params_296,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_304) ? node_304 = come_decrement_ref_count(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_306,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_289,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buffer_append_str(buf_288,")");
    type2_307=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 138, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    type2_307->mHeap=(_Bool)1;
    __dec_obj58=come_value_287->c_value,
    come_value_287->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_288));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj59=come_value_287->type,
    come_value_287->type=(struct sType*)come_increment_ref_count(sType_clone(type2_307));
    /*b*/ come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_287->var=((void*)0);
    append_object_to_right_values2(come_value_287,(struct sType*)come_increment_ref_count(type2_307),info,(_Bool)0,((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_287));
    add_come_last_code(info,"%s",come_value_287->c_value);
    __result_obj__209 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_287,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_288,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

static void sSStringNode_finalize(struct sSStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_290;
struct sNode* __result_obj__197;
struct sNode* __result_obj__198;
struct sNode* result_291;
struct sNode* __result_obj__199;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_290,0,sizeof(struct sNode*));
        __result_obj__197 = result_290;
        return __result_obj__197;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__198 = self->it->item;
        return __result_obj__198;
    }
    memset(&result_291,0,sizeof(struct sNode*));
    __result_obj__199 = result_291;
    return __result_obj__199;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_293;
struct sNode* __result_obj__200;
struct sNode* __result_obj__201;
struct sNode* result_294;
struct sNode* __result_obj__202;
result_293 = (void*)0;
result_294 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_293,0,sizeof(struct sNode*));
        __result_obj__200 = result_293;
        return __result_obj__200;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__201 = self->it->item;
        return __result_obj__201;
    }
    memset(&result_294,0,sizeof(struct sNode*));
    __result_obj__202 = result_294;
    return __result_obj__202;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__203;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__203 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__203,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_297;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_298;
    it_297=self->head;
    while(    it_297!=((void*)0)) {
        prev_it_298=it_297;
        it_297=it_297->next;
        /*c*/ come_call_finalizer3(prev_it_298,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value271 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_299;
struct tuple2$2char$phsNode$ph* __dec_obj51;
void* __right_value272 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_300;
struct tuple2$2char$phsNode$ph* __dec_obj52;
void* __right_value273 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_301;
struct tuple2$2char$phsNode$ph* __dec_obj53;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__204;
    if(    self->len==0) {
        litem_299=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value271=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj51=litem_299->item,
        litem_299->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value272=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj52=litem_300->item,
        litem_300->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value273=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj53=litem_301->item,
        litem_301->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result_obj__204 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__204;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__205;
void* __right_value276 = (void*)0;
struct tuple2$2char$phsNode$ph* result_302;
void* __right_value277 = (void*)0;
char* __dec_obj54;
void* __right_value278 = (void*)0;
struct sNode* __dec_obj55;
struct tuple2$2char$phsNode$ph* __result_obj__206;
    if(    self==(void*)0) {
        __result_obj__205 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__205,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__205;
    }
    result_302=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj54=result_302->v1,
        result_302->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj55=result_302->v2,
        result_302->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__206 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_302);
    /*c*/ come_call_finalizer3(result_302,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__206,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__206;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_303;
    result_303=0;
    result_303+=int_get_hash_key(((int)self->v1));
    result_303+=int_get_hash_key(((int)self->v2));
    return result_303;
}

static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj56;
struct sNode* __dec_obj57;
struct tuple2$2char$phsNode$ph* __result_obj__207;
    __dec_obj56=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj57=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__207 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__207,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __right_value288 = (void*)0;
struct sCharNode* __result_obj__210;
    ((struct sNodeBase*)(__right_value288=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value288,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    __result_obj__210 = (struct sCharNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__210,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__210;
}

char* sCharNode_kind(struct sCharNode* self){
void* __right_value289 = (void*)0;
char* __result_obj__211;
    __result_obj__211 = (char*)come_increment_ref_count(((char*)(__right_value289=__builtin_string("sCharNode"))));
    (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__211;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct CVALUE* come_value_308;
void* __right_value292 = (void*)0;
char* __dec_obj60;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__212;
    come_value_308=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 171, "struct CVALUE*"))));
    __dec_obj60=come_value_308->c_value,
    come_value_308->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj61=come_value_308->type,
    come_value_308->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 174, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_308->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_308));
    add_come_last_code(info,"%s",come_value_308->c_value);
    __result_obj__212 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_308,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
}

static void sCharNode_finalize(struct sCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info){
void* __right_value296 = (void*)0;
struct sWCharNode* __result_obj__213;
    ((struct sNodeBase*)(__right_value296=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value296,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    self->quote=quote;
    __result_obj__213 = (struct sWCharNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__213,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __right_value297 = (void*)0;
char* __result_obj__214;
    __result_obj__214 = (char*)come_increment_ref_count(((char*)(__right_value297=__builtin_string("sWCharNode"))));
    (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__214;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct CVALUE* come_value_309;
void* __right_value300 = (void*)0;
char* __dec_obj62;
void* __right_value301 = (void*)0;
char* __dec_obj63;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj64;
_Bool __result_obj__215;
    come_value_309=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 202, "struct CVALUE*"))));
    if(    self->quote) {
        __dec_obj62=come_value_309->c_value,
        come_value_309->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj63=come_value_309->c_value,
        come_value_309->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj64=come_value_309->type,
    come_value_309->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 210, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_309->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_309));
    add_come_last_code(info,"%s",come_value_309->c_value);
    __result_obj__215 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_309,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

static void sWCharNode_finalize(struct sWCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __right_value305 = (void*)0;
int* __dec_obj65;
struct sWStringNode* __result_obj__216;
    ((struct sNodeBase*)(__right_value305=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value305,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj65=self->value,
    self->value=(int*)come_increment_ref_count(value);
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__216 = (struct sWStringNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__216,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __right_value306 = (void*)0;
char* __result_obj__217;
    __result_obj__217 = (char*)come_increment_ref_count(((char*)(__right_value306=__builtin_string("sWStringNode"))));
    (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__217 = come_decrement_ref_count(__result_obj__217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__217;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_310;
void* __right_value309 = (void*)0;
char* __dec_obj66;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sType* __dec_obj67;
_Bool __result_obj__218;
    come_value_310=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 237, "struct CVALUE*"))));
    __dec_obj66=come_value_310->c_value,
    come_value_310->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj67=come_value_310->type,
    come_value_310->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 240, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_310->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_310));
    add_come_last_code(info,"%s",come_value_310->c_value);
    __result_obj__218 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_310,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

static void sWStringNode_finalize(struct sWStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* __dec_obj68;
struct sRegexNode* __result_obj__219;
    ((struct sNodeBase*)(__right_value313=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value313,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj68=self->str,
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result_obj__219 = (struct sRegexNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sRegexNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__219,sRegexNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__219;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __right_value315 = (void*)0;
char* __result_obj__220;
    __result_obj__220 = (char*)come_increment_ref_count(((char*)(__right_value315=__builtin_string("sRegexNode"))));
    (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__220 = come_decrement_ref_count(__result_obj__220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__220;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value321 = (void*)0;
struct sNode* obj_node_311;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_313;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sNode* node_314;
_Bool Value_315;
_Bool __result_obj__223;
_Bool __result_obj__224;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 269, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value317=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 269, "struct sStrNode*")),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_311=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*c*/ come_call_finalizer3(__right_value317,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    params_313=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 271, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 273, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_311))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 274, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 275, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 276, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 277, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 278, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 279, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 280, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 281, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_314=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_311),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_313),((void*)0),info->sline,((void*)0),(_Bool)0,info));
    Value_315=node_compile(node_314,info);
    if(    !Value_315) {
        __result_obj__223 = (_Bool)0;
        ((obj_node_311) ? obj_node_311 = come_decrement_ref_count(obj_node_311, ((struct sNode*)obj_node_311)->finalize, ((struct sNode*)obj_node_311)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_313,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_314) ? node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__223;
    }
    else {
    }
    __result_obj__224 = (_Bool)1;
    ((obj_node_311) ? obj_node_311 = come_decrement_ref_count(obj_node_311, ((struct sNode*)obj_node_311)->finalize, ((struct sNode*)obj_node_311)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params_313,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_314) ? node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__224;
}

static void sRegexNode_finalize(struct sRegexNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        (self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
struct sStrNode* __result_obj__221;
void* __right_value318 = (void*)0;
struct sStrNode* result_312;
void* __right_value319 = (void*)0;
char* __dec_obj69;
void* __right_value320 = (void*)0;
char* __dec_obj70;
struct sStrNode* __result_obj__222;
    if(    self==(void*)0) {
        __result_obj__221 = (void*)0;
        return __result_obj__221;
    }
    result_312=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*"));
    if(    self!=((void*)0)) {
        result_312->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj69=result_312->sname,
        result_312->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStrNode_clone", 5, "char*"));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_312->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj70=result_312->value,
        result_312->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sStrNode_clone", 7, "char*"));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__222 = result_312;
    /*c*/ come_call_finalizer3(result_312,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__222;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info){
void* __right_value360 = (void*)0;
struct list$1sNode$ph* __dec_obj71;
struct sListNode* __result_obj__225;
    ((struct sNodeBase*)(__right_value360=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value360,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj71=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    /*b*/ come_call_finalizer3(__dec_obj71,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__225 = (struct sListNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__225,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

char* sListNode_kind(struct sListNode* self){
void* __right_value361 = (void*)0;
char* __result_obj__226;
    __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value361=__builtin_string("sListNode"))));
    (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__226;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNode$ph* list_elements_316;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct list$1CVALUE$ph* params_317;
struct sType* list_element_type_320;
int n_321;
struct list$1sNode$ph* o2_saved_322;
struct sNode* it_323;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
_Bool _if_conditional2;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sNode* value_node_324;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_325;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sNode* exp_326;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj72;
_Bool Value_327;
_Bool __result_obj__228;
_Bool Value_328;
_Bool __result_obj__229;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_329;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sType* __dec_obj73;
void* __right_value383 = (void*)0;
struct sType* type_values_330;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
char* var_name_335;
void* __right_value389 = (void*)0;
struct sVar* var__336;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct buffer* source_337;
int i_338;
struct list$1CVALUE$ph* o2_saved_339;
struct CVALUE* it_342;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sType* list_type_351;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sType* obj_type_355;
char* fun_name_356;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_357=0;
struct sGenericsFun* generics_fun_358=0;
char* generics_fun_name_359;
void* __right_value405 = (void*)0;
struct sFun* fun_360;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* __dec_obj80;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sType* result_type_363;
struct sType* type_364;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct CVALUE* obj_value_365;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct buffer* num_string_366;
void* __right_value414 = (void*)0;
struct sType* type2_367;
void* __right_value415 = (void*)0;
char* type_name_368;
struct sType* any_type_369;
void* __right_value416 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var3 = (void*)0;
char* finalizer_name_370=0;
char* cloner_name_371=0;
char* get_hash_key_name_372=0;
char* equaler_name_373=0;
void* __right_value417 = (void*)0;
_Bool _if_conditional3;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
char* __dec_obj81;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* __dec_obj82;
void* __right_value422 = (void*)0;
struct sType* type3_374;
void* __right_value423 = (void*)0;
struct sType* __dec_obj83;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1CVALUE$ph* come_params_375;
void* __right_value426 = (void*)0;
_Bool _if_conditional4;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct CVALUE* come_value2_382;
void* __right_value430 = (void*)0;
char* __dec_obj84;
struct sType* __dec_obj85;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct CVALUE* come_value3_383;
void* __right_value433 = (void*)0;
char* __dec_obj86;
struct sType* __dec_obj87;
int j_384;
struct list$1CVALUE$ph* o2_saved_385;
struct CVALUE* it_386;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct CVALUE* come_value4_387;
void* __right_value436 = (void*)0;
char* __dec_obj88;
void* __right_value437 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__250;
    list_elements_316=self->list_elements;
    params_317=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 313, "struct list$1CVALUE$ph*"))));
    list_element_type_320=((void*)0);
    n_321=0;
    for(    o2_saved_322=(list_elements_316),it_323=list$1sNode$ph_begin((o2_saved_322));    !list$1sNode$ph_end((o2_saved_322));    it_323=list$1sNode$ph_next((o2_saved_322))    ){
        if(        (_if_conditional2=(string_operator_equals(((char*)(__right_value365=it_323->kind(it_323->_protocol_obj))),"sWildCard"))),        (__right_value364 = come_decrement_ref_count(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional2) {
            value_node_324=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value366=xsprintf("Value"))),info));
            (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            params_325=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 321, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_325,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 322, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_324))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_325,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 323, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_321,info)))));
            exp_326=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value377=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_324),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_325),((void*)0),0,((void*)0),(_Bool)0,info));
            (__right_value377 = come_decrement_ref_count(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj72=exp_326,
            exp_326=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_326,info));
            (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            Value_327=node_compile(exp_326,info);
            if(            !Value_327) {
                __result_obj__228 = (_Bool)0;
                ((value_node_324) ? value_node_324 = come_decrement_ref_count(value_node_324, ((struct sNode*)value_node_324)->finalize, ((struct sNode*)value_node_324)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_325,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((exp_326) ? exp_326 = come_decrement_ref_count(exp_326, ((struct sNode*)exp_326)->finalize, ((struct sNode*)exp_326)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_317,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__228;
            }
            else {
            }
            ((value_node_324) ? value_node_324 = come_decrement_ref_count(value_node_324, ((struct sNode*)value_node_324)->finalize, ((struct sNode*)value_node_324)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(params_325,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((exp_326) ? exp_326 = come_decrement_ref_count(exp_326, ((struct sNode*)exp_326)->finalize, ((struct sNode*)exp_326)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_328=node_compile(it_323,info);
            if(            !Value_328) {
                __result_obj__229 = (_Bool)0;
                /*c*/ come_call_finalizer3(params_317,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__229;
            }
            else {
            }
        }
        come_value_329=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        list_element_type_320) {
            check_assign_type(((char*)(__right_value381=xsprintf("invalid list element type"))),list_element_type_320,come_value_329->type,come_value_329,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value381 = come_decrement_ref_count(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph_push_back(params_317,(struct CVALUE*)come_increment_ref_count(come_value_329));
        __dec_obj73=list_element_type_320,
        list_element_type_320=(struct sType*)come_increment_ref_count(sType_clone(come_value_329->type));
        /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        n_321++;
        /*c*/ come_call_finalizer3(come_value_329,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_values_330=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_320));
    list$1sNode$ph_push_back(type_values_330->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(params_317),info)));
    type_values_330->mHeap=(_Bool)0;
    static int list_value_num_334=0;
    var_name_335=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_334));
    add_variable_to_table(var_name_335,(struct sType*)come_increment_ref_count(sType_clone(type_values_330)),info,(_Bool)0,(_Bool)0);
    var__336=get_variable_from_table(info->lv_table,var_name_335);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value390=make_define_var(type_values_330,var__336->mCValueName,(_Bool)0,info))));
    (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_337=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 363, "struct buffer*"))));
    buffer_append_str(source_337,"(");
    i_338=0;
    for(    o2_saved_339=(struct list$1CVALUE$ph*)come_increment_ref_count((params_317)),it_342=list$1CVALUE$ph_begin((o2_saved_339));    !list$1CVALUE$ph_end((o2_saved_339));    it_342=list$1CVALUE$ph_next((o2_saved_339))    ){
        if(        list_element_type_320->mHeap) {
            buffer_append_format(source_337,"%s[%d]=%s,\n",var__336->mCValueName,i_338,((struct CVALUE*)(__right_value393=list$1CVALUE$ph_operator_load_element(params_317,i_338)))->c_value);
            /*c*/ come_call_finalizer3(__right_value393,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_format(source_337,"%s[%d]=%s,\n",var__336->mCValueName,i_338,((struct CVALUE*)(__right_value394=list$1CVALUE$ph_operator_load_element(params_317,i_338)))->c_value);
            /*c*/ come_call_finalizer3(__right_value394,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        i_338++;
    }
    /*c*/ come_call_finalizer3(o2_saved_339,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list_type_351=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 383, "struct sType*")),(char*)come_increment_ref_count(xsprintf("list")),(_Bool)0,info));
    list$1sType$ph_push_back(list_type_351->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value401=sType_clone(list_element_type_320))))));
    /*c*/ come_call_finalizer3(__right_value401,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_type_355=(struct sType*)come_increment_ref_count(sType_clone(list_type_351));
    fun_name_356="initialize_with_values";
    multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value404=make_generics_function(obj_type_355,(char*)come_increment_ref_count(__builtin_string(fun_name_356)),info,(_Bool)1)));
    name_357=(char*)come_increment_ref_count(multiple_assign_var2->v1);
    generics_fun_358=multiple_assign_var2->v2;
    /*c*/ come_call_finalizer3(__right_value404,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_359=(char*)come_increment_ref_count(name_357);
    fun_360=((struct sFun*)(__right_value405=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_359,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value405,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_360==((void*)0)) {
        __dec_obj80=generics_fun_name_359,
        generics_fun_name_359=(char*)come_increment_ref_count(create_method_name(obj_type_355,(_Bool)0,((char*)(__right_value406=__builtin_string(fun_name_356))),info,(_Bool)1));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value406 = come_decrement_ref_count(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_360=((struct sFun*)(__right_value408=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_359,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value408,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_360==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name_359,info->come_fun->mName);
        }
    }
    result_type_363=(struct sType*)come_increment_ref_count(sType_clone(fun_360->mResultType));
    result_type_363->mStatic=(_Bool)0;
    type_364=list_type_351;
    obj_value_365=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 409, "struct CVALUE*"))));
    num_string_366=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 411, "struct buffer*"))));
    buffer_append_str(num_string_366,"1");
    type2_367=(struct sType*)come_increment_ref_count(solve_generics(type_364,type_364,info));
    type_name_368=(char*)come_increment_ref_count(make_type_name_string(type2_367,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_369=(struct sType*)come_increment_ref_count(type2_367);
    any_type_369->mPointerNum=1;
    any_type_369->mHeap=(_Bool)1;
    multiple_assign_var3=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value416=create_vtable((struct sType*)come_increment_ref_count(any_type_369),info)));
    finalizer_name_370=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    cloner_name_371=(char*)come_increment_ref_count(multiple_assign_var3->v2);
    get_hash_key_name_372=(char*)come_increment_ref_count(multiple_assign_var3->v3);
    equaler_name_373=(char*)come_increment_ref_count(multiple_assign_var3->v4);
    /*c*/ come_call_finalizer3(__right_value416,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional3=(((struct sFun*)(__right_value417=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value417,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional3) {
        __dec_obj81=obj_value_365->c_value,
        obj_value_365->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_368,type_name_368,((char*)(__right_value418=buffer_to_string(num_string_366))),info->sname,info->sline,type_name_368));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value418 = come_decrement_ref_count(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj82=obj_value_365->c_value,
        obj_value_365->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_368,type_name_368,((char*)(__right_value420=buffer_to_string(num_string_366))),info->sname,info->sline,type_name_368));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value420 = come_decrement_ref_count(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_374=(struct sType*)come_increment_ref_count(sType_clone(type2_367));
    type3_374->mPointerNum++;
    type3_374->mHeap=(_Bool)1;
    type2_367->mHeap=(_Bool)1;
    __dec_obj83=obj_value_365->type,
    obj_value_365->type=(struct sType*)come_increment_ref_count(sType_clone(type2_367));
    /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_365->type->mPointerNum++;
    obj_value_365->var=((void*)0);
    append_object_to_right_values2(obj_value_365,(struct sType*)come_increment_ref_count(type3_374),info,(_Bool)0,((void*)0),((void*)0));
    come_params_375=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 442, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional4=(((struct sType*)(__right_value426=list$1sType$ph_operator_load_element(fun_360->mParamTypes,0)))->mHeap&&obj_value_365->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value426,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)(__right_value427=list$1sType$ph_operator_load_element(fun_360->mParamTypes,0))),obj_value_365->type,obj_value_365,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value427,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_375,(struct CVALUE*)come_increment_ref_count(obj_value_365));
    come_value2_382=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 449, "struct CVALUE*"))));
    __dec_obj84=come_value2_382->c_value,
    come_value2_382->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params_317)));
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj85=come_value2_382->type,
    come_value2_382->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_382->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_375,(struct CVALUE*)come_increment_ref_count(come_value2_382));
    come_value3_383=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 457, "struct CVALUE*"))));
    __dec_obj86=come_value3_383->c_value,
    come_value3_383->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__336->mCValueName));
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj87=come_value3_383->type,
    come_value3_383->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_383->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_375,(struct CVALUE*)come_increment_ref_count(come_value3_383));
    buffer_append_str(source_337,generics_fun_name_359);
    buffer_append_str(source_337,"(");
    j_384=0;
    for(    o2_saved_385=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_375)),it_386=list$1CVALUE$ph_begin((o2_saved_385));    !list$1CVALUE$ph_end((o2_saved_385));    it_386=list$1CVALUE$ph_next((o2_saved_385))    ){
        buffer_append_str(source_337,it_386->c_value);
        if(        j_384!=list$1CVALUE$ph_length(come_params_375)-1) {
            buffer_append_str(source_337,",");
        }
        j_384++;
    }
    /*c*/ come_call_finalizer3(o2_saved_385,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(source_337,")");
    buffer_append_str(source_337,")");
    come_value4_387=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 483, "struct CVALUE*"))));
    __dec_obj88=come_value4_387->c_value,
    come_value4_387->c_value=(char*)come_increment_ref_count(buffer_to_string(source_337));
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj89=come_value4_387->type,
    come_value4_387->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_363));
    /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_387->type->mStatic=(_Bool)0;
    come_value4_387->var=((void*)0);
    if(    result_type_363->mHeap) {
        append_object_to_right_values2(come_value4_387,(struct sType*)come_increment_ref_count(result_type_363),info,(_Bool)0,((void*)0),((void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_387));
    add_come_last_code(info,"%s",come_value4_387->c_value);
    __result_obj__250 = (_Bool)1;
    /*c*/ come_call_finalizer3(params_317,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_element_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_values_330,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_335 = come_decrement_ref_count(var_name_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_337,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_355,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_357 = come_decrement_ref_count(name_357, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_359 = come_decrement_ref_count(generics_fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_363,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_365,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_366,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_367,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_368 = come_decrement_ref_count(type_name_368, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_369,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_370 = come_decrement_ref_count(finalizer_name_370, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_371 = come_decrement_ref_count(cloner_name_371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_372 = come_decrement_ref_count(get_hash_key_name_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_373 = come_decrement_ref_count(equaler_name_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_374,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_375,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_382,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value3_383,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value4_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

static void sListNode_finalize(struct sListNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->list_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__227;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__227 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__227,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_318;
struct list_item$1CVALUE$ph* prev_it_319;
    it_318=self->head;
    while(    it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        /*c*/ come_call_finalizer3(prev_it_319,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value384 = (void*)0;
struct list_item$1sNode$ph* litem_331;
struct sNode* __dec_obj74;
void* __right_value385 = (void*)0;
struct list_item$1sNode$ph* litem_332;
struct sNode* __dec_obj75;
void* __right_value386 = (void*)0;
struct list_item$1sNode$ph* litem_333;
struct sNode* __dec_obj76;
struct list$1sNode$ph* __result_obj__230;
    if(    self->len==0) {
        litem_331=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value384=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1sNode$ph*"))));
        litem_331->prev=((void*)0);
        litem_331->next=((void*)0);
        __dec_obj74=litem_331->item,
        litem_331->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_331;
        self->head=litem_331;
    }
    else if(    self->len==1) {
        litem_332=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value385=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1sNode$ph*"))));
        litem_332->prev=self->head;
        litem_332->next=((void*)0);
        __dec_obj75=litem_332->item,
        litem_332->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_332;
        self->head->next=litem_332;
    }
    else {
        litem_333=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value386=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_333->prev=self->tail;
        litem_333->next=((void*)0);
        __dec_obj76=litem_333->item,
        litem_333->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_333;
        self->tail=litem_333;
    }
    self->len++;
    __result_obj__230 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__230;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_340;
struct CVALUE* __result_obj__231;
struct CVALUE* __result_obj__232;
struct CVALUE* result_341;
struct CVALUE* __result_obj__233;
result_340 = (void*)0;
result_341 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_340,0,sizeof(struct CVALUE*));
        __result_obj__231 = result_340;
        return __result_obj__231;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__232 = self->it->item;
        return __result_obj__232;
    }
    memset(&result_341,0,sizeof(struct CVALUE*));
    __result_obj__233 = result_341;
    return __result_obj__233;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_343;
struct CVALUE* __result_obj__234;
struct CVALUE* __result_obj__235;
struct CVALUE* result_344;
struct CVALUE* __result_obj__236;
result_343 = (void*)0;
result_344 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_343,0,sizeof(struct CVALUE*));
        __result_obj__234 = result_343;
        return __result_obj__234;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__235 = self->it->item;
        return __result_obj__235;
    }
    memset(&result_344,0,sizeof(struct CVALUE*));
    __result_obj__236 = result_344;
    return __result_obj__236;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_345;
int i_346;
struct CVALUE* __result_obj__237;
struct CVALUE* default_value_347;
struct CVALUE* __result_obj__238;
default_value_347 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_345=self->head;
    i_346=0;
    while(    it_345!=((void*)0)) {
        if(        position==i_346) {
            __result_obj__237 = (struct CVALUE*)come_increment_ref_count(it_345->item);
            /*c*/ come_call_finalizer3(__result_obj__237,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__237;
        }
        it_345=it_345->next;
        i_346++;
    }
    memset(&default_value_347,0,sizeof(struct CVALUE*));
    __result_obj__238 = (struct CVALUE*)come_increment_ref_count(default_value_347);
    /*c*/ come_call_finalizer3(default_value_347,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__238,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__238;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_348;
int i_349;
struct CVALUE* __result_obj__239;
struct CVALUE* default_value_350;
struct CVALUE* __result_obj__240;
default_value_350 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_348=self->head;
    i_349=0;
    while(    it_348!=((void*)0)) {
        if(        position==i_349) {
            __result_obj__239 = (struct CVALUE*)come_increment_ref_count(it_348->item);
            /*c*/ come_call_finalizer3(__result_obj__239,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__239;
        }
        it_348=it_348->next;
        i_349++;
    }
    memset(&default_value_350,0,sizeof(struct CVALUE*));
    __result_obj__240 = (struct CVALUE*)come_increment_ref_count(default_value_350);
    /*c*/ come_call_finalizer3(default_value_350,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__240,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value398 = (void*)0;
struct list_item$1sType$ph* litem_352;
struct sType* __dec_obj77;
void* __right_value399 = (void*)0;
struct list_item$1sType$ph* litem_353;
struct sType* __dec_obj78;
void* __right_value400 = (void*)0;
struct list_item$1sType$ph* litem_354;
struct sType* __dec_obj79;
struct list$1sType$ph* __result_obj__241;
    if(    self->len==0) {
        litem_352=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value398=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_352->prev=((void*)0);
        litem_352->next=((void*)0);
        __dec_obj77=litem_352->item,
        litem_352->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_352;
        self->head=litem_352;
    }
    else if(    self->len==1) {
        litem_353=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value399=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_353->prev=self->head;
        litem_353->next=((void*)0);
        __dec_obj78=litem_353->item,
        litem_353->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_353;
        self->head->next=litem_353;
    }
    else {
        litem_354=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value400=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_354->prev=self->tail;
        litem_354->next=((void*)0);
        __dec_obj79=litem_354->item,
        litem_354->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_354;
        self->tail=litem_354;
    }
    self->len++;
    __result_obj__241 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_361;
unsigned int it_362;
struct sFun* __result_obj__242;
struct sFun* __result_obj__243;
struct sFun* __result_obj__244;
struct sFun* __result_obj__245;
    hash_361=string_get_hash_key(((char*)key))%self->size;
    it_362=hash_361;
    while(    (_Bool)1) {
        if(        self->item_existance[it_362]) {
            if(            string_equals(self->keys[it_362],key)) {
                __result_obj__242 = (struct sFun*)come_increment_ref_count(self->items[it_362]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__242,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__242;
            }
            it_362++;
            if(            it_362>=self->size) {
                it_362=0;
            }
            else if(            it_362==hash_361) {
                __result_obj__243 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__243,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__243;
            }
        }
        else {
            __result_obj__244 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__244,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__244;
        }
    }
    __result_obj__245 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__245,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_376;
int i_377;
struct sType* __result_obj__246;
struct sType* default_value_378;
struct sType* __result_obj__247;
default_value_378 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_376=self->head;
    i_377=0;
    while(    it_376!=((void*)0)) {
        if(        position==i_377) {
            __result_obj__246 = (struct sType*)come_increment_ref_count(it_376->item);
            /*c*/ come_call_finalizer3(__result_obj__246,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__246;
        }
        it_376=it_376->next;
        i_377++;
    }
    memset(&default_value_378,0,sizeof(struct sType*));
    __result_obj__247 = (struct sType*)come_increment_ref_count(default_value_378);
    /*c*/ come_call_finalizer3(default_value_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__247,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__247;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_379;
int i_380;
struct sType* __result_obj__248;
struct sType* default_value_381;
struct sType* __result_obj__249;
default_value_381 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_379=self->head;
    i_380=0;
    while(    it_379!=((void*)0)) {
        if(        position==i_380) {
            __result_obj__248 = (struct sType*)come_increment_ref_count(it_379->item);
            /*c*/ come_call_finalizer3(__result_obj__248,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__248;
        }
        it_379=it_379->next;
        i_380++;
    }
    memset(&default_value_381,0,sizeof(struct sType*));
    __result_obj__249 = (struct sType*)come_increment_ref_count(default_value_381);
    /*c*/ come_call_finalizer3(default_value_381,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info){
void* __right_value438 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj90;
struct sTupleNode* __result_obj__251;
    ((struct sNodeBase*)(__right_value438=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value438,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj90=self->tuple_elements,
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj90,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__251 = (struct sTupleNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__251,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __right_value439 = (void*)0;
char* __result_obj__252;
    __result_obj__252 = (char*)come_increment_ref_count(((char*)(__right_value439=__builtin_string("sTupleNode"))));
    (__right_value439 = come_decrement_ref_count(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__252 = come_decrement_ref_count(__result_obj__252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__252;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_390;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct list$1sType$ph* tuple_types_391;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1CVALUE$ph* tuple_values_392;
int n_393;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_394;
struct tuple2$2char$phsNode$ph* it_397;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* name_400=0;
struct sNode* node_401=0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
_Bool _if_conditional5;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* value_node_402;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sNode* exp_403;
_Bool Value_404;
_Bool __result_obj__259;
_Bool Value_405;
_Bool __result_obj__260;
void* __right_value450 = (void*)0;
struct CVALUE* come_value_406;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sType* type_408;
char* __dec_obj95;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* type_409;
struct list$1sType$ph* o2_saved_410;
struct sType* it_413;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct CVALUE* obj_value_416;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct buffer* num_string_417;
void* __right_value466 = (void*)0;
struct sType* type2_418;
void* __right_value467 = (void*)0;
char* type_name_419;
struct sType* any_type_420;
void* __right_value468 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var5 = (void*)0;
char* finalizer_name_421=0;
char* cloner_name_422=0;
char* get_hash_key_name_423=0;
char* equaler_name_424=0;
void* __right_value469 = (void*)0;
_Bool _if_conditional6;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
char* __dec_obj96;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* __dec_obj97;
void* __right_value474 = (void*)0;
struct sType* type3_425;
void* __right_value475 = (void*)0;
struct sType* __dec_obj98;
void* __right_value476 = (void*)0;
struct sType* obj_type_426;
char* fun_name_427;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_428=0;
struct sGenericsFun* generics_fun_429=0;
char* generics_fun_name_430;
void* __right_value479 = (void*)0;
struct sFun* fun_431;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
char* __dec_obj99;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* result_type_432;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct list$1CVALUE$ph* come_params_433;
void* __right_value486 = (void*)0;
_Bool _if_conditional7;
void* __right_value487 = (void*)0;
int i_434;
struct list$1CVALUE$ph* o2_saved_435;
struct CVALUE* it_436;
void* __right_value488 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
_Bool _if_conditional8;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct buffer* buf_438;
int j_439;
struct list$1CVALUE$ph* o2_saved_440;
struct CVALUE* it_441;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct CVALUE* come_value2_442;
void* __right_value496 = (void*)0;
char* __dec_obj100;
void* __right_value497 = (void*)0;
struct sType* __dec_obj101;
_Bool __result_obj__269;
    tuple_elements_390=self->tuple_elements;
    tuple_types_391=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 520, "struct list$1sType$ph*"))));
    tuple_values_392=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 521, "struct list$1CVALUE$ph*"))));
    n_393=0;
    for(    o2_saved_394=(tuple_elements_390),it_397=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_394));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_394));    it_397=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_394))    ){
        multiple_assign_var4=it_397;
        name_400=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        node_401=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        (_if_conditional5=(string_operator_equals(((char*)(__right_value445=node_401->kind(node_401->_protocol_obj))),"sWildCard"))),        (__right_value444 = come_decrement_ref_count(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value445 = come_decrement_ref_count(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            value_node_402=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value446=xsprintf("Value"))),info));
            (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exp_403=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_402),(char*)come_increment_ref_count(xsprintf("v%d",n_393+1)),info));
            Value_404=node_compile(exp_403,info);
            if(            !Value_404) {
                __result_obj__259 = (_Bool)0;
                ((value_node_402) ? value_node_402 = come_decrement_ref_count(value_node_402, ((struct sNode*)value_node_402)->finalize, ((struct sNode*)value_node_402)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_403) ? exp_403 = come_decrement_ref_count(exp_403, ((struct sNode*)exp_403)->finalize, ((struct sNode*)exp_403)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (name_400 = come_decrement_ref_count(name_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_401) ? node_401 = come_decrement_ref_count(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(tuple_types_391,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_392,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__259;
            }
            else {
            }
            ((value_node_402) ? value_node_402 = come_decrement_ref_count(value_node_402, ((struct sNode*)value_node_402)->finalize, ((struct sNode*)value_node_402)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_403) ? exp_403 = come_decrement_ref_count(exp_403, ((struct sNode*)exp_403)->finalize, ((struct sNode*)exp_403)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_405=node_compile(node_401,info);
            if(            !Value_405) {
                __result_obj__260 = (_Bool)0;
                (name_400 = come_decrement_ref_count(name_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_401) ? node_401 = come_decrement_ref_count(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(tuple_types_391,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_392,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__260;
            }
            else {
            }
        }
        come_value_406=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_392,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_406)));
        type_408=(struct sType*)come_increment_ref_count(sType_clone(come_value_406->type));
        __dec_obj95=type_408->mTupleName,
        type_408->mTupleName=(char*)come_increment_ref_count(name_400);
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        list$1sType$ph_push_back(tuple_types_391,(struct sType*)come_increment_ref_count(type_408));
        n_393++;
        (name_400 = come_decrement_ref_count(name_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_401) ? node_401 = come_decrement_ref_count(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_406,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_408,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_409=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 550, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_391))),(_Bool)0,info));
    for(    o2_saved_410=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_391)),it_413=list$1sType$ph_begin((o2_saved_410));    !list$1sType$ph_end((o2_saved_410));    it_413=list$1sType$ph_next((o2_saved_410))    ){
        list$1sType$ph_push_back(type_409->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value461=sType_clone(it_413))))));
        /*c*/ come_call_finalizer3(__right_value461,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_410,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_416=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 556, "struct CVALUE*"))));
    num_string_417=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 558, "struct buffer*"))));
    buffer_append_str(num_string_417,"1");
    type2_418=(struct sType*)come_increment_ref_count(solve_generics(type_409,type_409,info));
    type_name_419=(char*)come_increment_ref_count(make_type_name_string(type2_418,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_420=(struct sType*)come_increment_ref_count(type2_418);
    any_type_420->mPointerNum=1;
    any_type_420->mHeap=(_Bool)1;
    multiple_assign_var5=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value468=create_vtable((struct sType*)come_increment_ref_count(any_type_420),info)));
    finalizer_name_421=(char*)come_increment_ref_count(multiple_assign_var5->v1);
    cloner_name_422=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    get_hash_key_name_423=(char*)come_increment_ref_count(multiple_assign_var5->v3);
    equaler_name_424=(char*)come_increment_ref_count(multiple_assign_var5->v4);
    /*c*/ come_call_finalizer3(__right_value468,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional6=(((struct sFun*)(__right_value469=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value469,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional6) {
        __dec_obj96=obj_value_416->c_value,
        obj_value_416->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_419,type_name_419,((char*)(__right_value470=buffer_to_string(num_string_417))),info->sname,info->sline,type_name_419));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj97=obj_value_416->c_value,
        obj_value_416->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_419,type_name_419,((char*)(__right_value472=buffer_to_string(num_string_417))),info->sname,info->sline,type_name_419));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_425=(struct sType*)come_increment_ref_count(sType_clone(type2_418));
    type3_425->mPointerNum++;
    type3_425->mHeap=(_Bool)1;
    type2_418->mHeap=(_Bool)1;
    __dec_obj98=obj_value_416->type,
    obj_value_416->type=(struct sType*)come_increment_ref_count(sType_clone(type2_418));
    /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_416->type->mPointerNum++;
    obj_value_416->var=((void*)0);
    append_object_to_right_values2(obj_value_416,(struct sType*)come_increment_ref_count(type3_425),info,(_Bool)0,((void*)0),((void*)0));
    obj_type_426=(struct sType*)come_increment_ref_count(sType_clone(type2_418));
    fun_name_427="initialize";
    multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value478=make_generics_function(obj_type_426,(char*)come_increment_ref_count(__builtin_string(fun_name_427)),info,(_Bool)1)));
    name_428=(char*)come_increment_ref_count(multiple_assign_var6->v1);
    generics_fun_429=multiple_assign_var6->v2;
    /*c*/ come_call_finalizer3(__right_value478,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_430=(char*)come_increment_ref_count(name_428);
    fun_431=((struct sFun*)(__right_value479=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_430,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value479,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_431==((void*)0)) {
        __dec_obj99=generics_fun_name_430,
        generics_fun_name_430=(char*)come_increment_ref_count(create_method_name(obj_type_426,(_Bool)0,((char*)(__right_value480=__builtin_string(fun_name_427))),info,(_Bool)1));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value480 = come_decrement_ref_count(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_431=((struct sFun*)(__right_value482=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_430,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value482,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_431==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_430,info->come_fun->mName);
        }
    }
    result_type_432=(struct sType*)come_increment_ref_count(sType_clone(fun_431->mResultType));
    result_type_432->mStatic=(_Bool)0;
    come_params_433=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 610, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional7=(((struct sType*)(__right_value486=list$1sType$ph_operator_load_element(fun_431->mParamTypes,0)))->mHeap&&obj_value_416->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value486,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional7) {
        std_move(((struct sType*)(__right_value487=list$1sType$ph_operator_load_element(fun_431->mParamTypes,0))),obj_value_416->type,obj_value_416,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value487,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_433,(struct CVALUE*)come_increment_ref_count(obj_value_416));
    i_434=1;
    for(    o2_saved_435=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_392)),it_436=list$1CVALUE$ph_begin((o2_saved_435));    !list$1CVALUE$ph_end((o2_saved_435));    it_436=list$1CVALUE$ph_next((o2_saved_435))    ){
        come_value_437=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_436));
        if(        (_if_conditional8=(((struct sType*)(__right_value489=list$1sType$ph_operator_load_element(fun_431->mParamTypes,i_434)))&&((struct sType*)(__right_value490=list$1sType$ph_operator_load_element(fun_431->mParamTypes,i_434)))->mHeap&&come_value_437->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value489,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value490,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional8) {
            std_move(((struct sType*)(__right_value491=list$1sType$ph_operator_load_element(fun_431->mParamTypes,i_434))),come_value_437->type,come_value_437,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value491,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_433,(struct CVALUE*)come_increment_ref_count(come_value_437));
        i_434++;
        /*c*/ come_call_finalizer3(come_value_437,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_435,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_438=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 629, "struct buffer*"))));
    buffer_append_str(buf_438,generics_fun_name_430);
    buffer_append_str(buf_438,"(");
    j_439=0;
    for(    o2_saved_440=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_433)),it_441=list$1CVALUE$ph_begin((o2_saved_440));    !list$1CVALUE$ph_end((o2_saved_440));    it_441=list$1CVALUE$ph_next((o2_saved_440))    ){
        buffer_append_str(buf_438,it_441->c_value);
        if(        j_439!=list$1CVALUE$ph_length(come_params_433)-1) {
            buffer_append_str(buf_438,",");
        }
        j_439++;
    }
    /*c*/ come_call_finalizer3(o2_saved_440,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_438,")");
    come_value2_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 646, "struct CVALUE*"))));
    __dec_obj100=come_value2_442->c_value,
    come_value2_442->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_438));
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj101=come_value2_442->type,
    come_value2_442->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_432));
    /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_442->type->mStatic=(_Bool)0;
    come_value2_442->var=((void*)0);
    if(    result_type_432->mHeap) {
        append_object_to_right_values2(come_value2_442,(struct sType*)come_increment_ref_count(result_type_432),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2_442->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_442));
    __result_obj__269 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_391,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_392,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_409,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_416,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_417,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_418,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_419 = come_decrement_ref_count(type_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_420,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_421 = come_decrement_ref_count(finalizer_name_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_422 = come_decrement_ref_count(cloner_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_423 = come_decrement_ref_count(get_hash_key_name_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_424 = come_decrement_ref_count(equaler_name_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_425,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_426,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_428 = come_decrement_ref_count(name_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_430 = come_decrement_ref_count(generics_fun_name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_432,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_433,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_438,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_442,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_388;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_389;
    it_388=self->head;
    while(    it_388!=((void*)0)) {
        prev_it_389=it_388;
        it_388=it_388->next;
        /*c*/ come_call_finalizer3(prev_it_389,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_395;
struct tuple2$2char$phsNode$ph* __result_obj__253;
struct tuple2$2char$phsNode$ph* __result_obj__254;
struct tuple2$2char$phsNode$ph* result_396;
struct tuple2$2char$phsNode$ph* __result_obj__255;
result_395 = (void*)0;
result_396 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_395,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__253 = result_395;
        return __result_obj__253;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__254 = self->it->item;
        return __result_obj__254;
    }
    memset(&result_396,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__255 = result_396;
    return __result_obj__255;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_398;
struct tuple2$2char$phsNode$ph* __result_obj__256;
struct tuple2$2char$phsNode$ph* __result_obj__257;
struct tuple2$2char$phsNode$ph* result_399;
struct tuple2$2char$phsNode$ph* __result_obj__258;
result_398 = (void*)0;
result_399 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_398,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__256 = result_398;
        return __result_obj__256;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__257 = self->it->item;
        return __result_obj__257;
    }
    memset(&result_399,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__258 = result_399;
    return __result_obj__258;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__261;
void* __right_value451 = (void*)0;
struct CVALUE* result_407;
void* __right_value452 = (void*)0;
char* __dec_obj91;
void* __right_value453 = (void*)0;
struct sType* __dec_obj92;
void* __right_value454 = (void*)0;
char* __dec_obj93;
void* __right_value455 = (void*)0;
char* __dec_obj94;
struct CVALUE* __result_obj__262;
    if(    self==(void*)0) {
        __result_obj__261 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__261;
    }
    result_407=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj91=result_407->c_value,
        result_407->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj92=result_407->type,
        result_407->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_407->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_407->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj93=result_407->c_value_without_right_value_objects,
        result_407->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj94=result_407->c_value_without_cast_object_value,
        result_407->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__262 = (struct CVALUE*)come_increment_ref_count(result_407);
    /*c*/ come_call_finalizer3(result_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_411;
struct sType* __result_obj__263;
struct sType* __result_obj__264;
struct sType* result_412;
struct sType* __result_obj__265;
result_411 = (void*)0;
result_412 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_411,0,sizeof(struct sType*));
        __result_obj__263 = result_411;
        return __result_obj__263;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__264 = self->it->item;
        return __result_obj__264;
    }
    memset(&result_412,0,sizeof(struct sType*));
    __result_obj__265 = result_412;
    return __result_obj__265;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_414;
struct sType* __result_obj__266;
struct sType* __result_obj__267;
struct sType* result_415;
struct sType* __result_obj__268;
result_414 = (void*)0;
result_415 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_414,0,sizeof(struct sType*));
        __result_obj__266 = result_414;
        return __result_obj__266;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__267 = self->it->item;
        return __result_obj__267;
    }
    memset(&result_415,0,sizeof(struct sType*));
    __result_obj__268 = result_415;
    return __result_obj__268;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value498 = (void*)0;
struct list$1sNode$ph* __dec_obj102;
struct sSomeNode* __result_obj__270;
    ((struct sNodeBase*)(__right_value498=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value498,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj102=self->tuple_elements,
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj102,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__270 = (struct sSomeNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__270,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __right_value499 = (void*)0;
char* __result_obj__271;
    __result_obj__271 = (char*)come_increment_ref_count(((char*)(__right_value499=__builtin_string("sSomeNode"))));
    (__right_value499 = come_decrement_ref_count(__right_value499, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__271 = come_decrement_ref_count(__result_obj__271, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__271;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_443;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct list$1sType$ph* tuple_types_444;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1CVALUE$ph* tuple_values_445;
struct list$1sNode$ph* o2_saved_446;
struct sNode* it_447;
_Bool Value_448;
_Bool __result_obj__272;
void* __right_value504 = (void*)0;
struct CVALUE* come_value_449;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* type_450;
struct list$1sType$ph* o2_saved_451;
struct sType* it_452;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct CVALUE* obj_value_453;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct buffer* num_string_454;
void* __right_value515 = (void*)0;
struct sType* type2_455;
void* __right_value516 = (void*)0;
char* type_name_456;
void* __right_value517 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var7 = (void*)0;
char* finalizer_name_457=0;
char* cloner_name_458=0;
char* get_hash_key_name_459=0;
char* equaler_name_460=0;
void* __right_value518 = (void*)0;
_Bool _if_conditional9;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
char* __dec_obj103;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
char* __dec_obj104;
void* __right_value523 = (void*)0;
struct sType* type3_461;
void* __right_value524 = (void*)0;
struct sType* __dec_obj105;
void* __right_value525 = (void*)0;
struct sType* obj_type_462;
char* fun_name_463;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_464=0;
struct sGenericsFun* generics_fun_465=0;
char* generics_fun_name_466;
void* __right_value528 = (void*)0;
struct sFun* fun_467;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* __dec_obj106;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* result_type_468;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1CVALUE$ph* come_params_469;
void* __right_value535 = (void*)0;
_Bool _if_conditional10;
void* __right_value536 = (void*)0;
int i_470;
struct list$1CVALUE$ph* o2_saved_471;
struct CVALUE* it_472;
void* __right_value537 = (void*)0;
struct CVALUE* come_value_473;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
_Bool _if_conditional11;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct buffer* buf_474;
int j_475;
struct list$1CVALUE$ph* o2_saved_476;
struct CVALUE* it_477;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct CVALUE* come_value2_478;
void* __right_value545 = (void*)0;
char* __dec_obj107;
void* __right_value546 = (void*)0;
struct sType* __dec_obj108;
_Bool __result_obj__273;
    tuple_elements_443=self->tuple_elements;
    tuple_types_444=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 683, "struct list$1sType$ph*"))));
    tuple_values_445=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 684, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_446=(tuple_elements_443),it_447=list$1sNode$ph_begin((o2_saved_446));    !list$1sNode$ph_end((o2_saved_446));    it_447=list$1sNode$ph_next((o2_saved_446))    ){
        Value_448=node_compile(it_447,info);
        if(        !Value_448) {
            __result_obj__272 = (_Bool)0;
            /*c*/ come_call_finalizer3(tuple_types_444,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(tuple_values_445,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__272;
        }
        else {
        }
        come_value_449=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_445,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_449)));
        list$1sType$ph_push_back(tuple_types_444,(struct sType*)come_increment_ref_count(sType_clone(come_value_449->type)));
        /*c*/ come_call_finalizer3(come_value_449,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_450=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 697, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_444))),(_Bool)0,info));
    for(    o2_saved_451=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_444)),it_452=list$1sType$ph_begin((o2_saved_451));    !list$1sType$ph_end((o2_saved_451));    it_452=list$1sType$ph_next((o2_saved_451))    ){
        list$1sType$ph_push_back(type_450->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value510=sType_clone(it_452))))));
        /*c*/ come_call_finalizer3(__right_value510,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_451,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_453=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 703, "struct CVALUE*"))));
    num_string_454=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 705, "struct buffer*"))));
    buffer_append_str(num_string_454,"1");
    type2_455=(struct sType*)come_increment_ref_count(solve_generics(type_450,type_450,info));
    type_name_456=(char*)come_increment_ref_count(make_type_name_string(type2_455,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var7=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value517=create_vtable((struct sType*)come_increment_ref_count(type2_455),info)));
    finalizer_name_457=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    cloner_name_458=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    get_hash_key_name_459=(char*)come_increment_ref_count(multiple_assign_var7->v3);
    equaler_name_460=(char*)come_increment_ref_count(multiple_assign_var7->v4);
    /*c*/ come_call_finalizer3(__right_value517,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional9=(((struct sFun*)(__right_value518=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value518,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional9) {
        __dec_obj103=obj_value_453->c_value,
        obj_value_453->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_456,type_name_456,((char*)(__right_value519=buffer_to_string(num_string_454))),info->sname,info->sline,type_name_456));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value519 = come_decrement_ref_count(__right_value519, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj104=obj_value_453->c_value,
        obj_value_453->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_456,type_name_456,((char*)(__right_value521=buffer_to_string(num_string_454))),info->sname,info->sline,type_name_456));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_461=(struct sType*)come_increment_ref_count(sType_clone(type2_455));
    type3_461->mPointerNum++;
    type3_461->mHeap=(_Bool)1;
    type2_455->mHeap=(_Bool)1;
    __dec_obj105=obj_value_453->type,
    obj_value_453->type=(struct sType*)come_increment_ref_count(sType_clone(type2_455));
    /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_453->type->mPointerNum++;
    obj_value_453->var=((void*)0);
    append_object_to_right_values2(obj_value_453,(struct sType*)come_increment_ref_count(type3_461),info,(_Bool)0,((void*)0),((void*)0));
    obj_type_462=(struct sType*)come_increment_ref_count(sType_clone(type2_455));
    fun_name_463="initialize";
    multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value527=make_generics_function(obj_type_462,(char*)come_increment_ref_count(__builtin_string(fun_name_463)),info,(_Bool)1)));
    name_464=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_465=multiple_assign_var8->v2;
    /*c*/ come_call_finalizer3(__right_value527,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_466=(char*)come_increment_ref_count(name_464);
    fun_467=((struct sFun*)(__right_value528=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_466,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value528,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_467==((void*)0)) {
        __dec_obj106=generics_fun_name_466,
        generics_fun_name_466=(char*)come_increment_ref_count(create_method_name(obj_type_462,(_Bool)0,((char*)(__right_value529=__builtin_string(fun_name_463))),info,(_Bool)1));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value529 = come_decrement_ref_count(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_467=((struct sFun*)(__right_value531=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_466,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value531,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_467==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_466,info->come_fun->mName);
        }
    }
    result_type_468=(struct sType*)come_increment_ref_count(sType_clone(fun_467->mResultType));
    result_type_468->mStatic=(_Bool)0;
    come_params_469=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 753, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional10=(((struct sType*)(__right_value535=list$1sType$ph_operator_load_element(fun_467->mParamTypes,0)))->mHeap&&obj_value_453->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value535,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional10) {
        std_move(((struct sType*)(__right_value536=list$1sType$ph_operator_load_element(fun_467->mParamTypes,0))),obj_value_453->type,obj_value_453,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value536,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_469,(struct CVALUE*)come_increment_ref_count(obj_value_453));
    i_470=1;
    for(    o2_saved_471=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_445)),it_472=list$1CVALUE$ph_begin((o2_saved_471));    !list$1CVALUE$ph_end((o2_saved_471));    it_472=list$1CVALUE$ph_next((o2_saved_471))    ){
        come_value_473=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_472));
        if(        (_if_conditional11=(((struct sType*)(__right_value538=list$1sType$ph_operator_load_element(fun_467->mParamTypes,i_470)))&&((struct sType*)(__right_value539=list$1sType$ph_operator_load_element(fun_467->mParamTypes,i_470)))->mHeap&&come_value_473->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value538,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value539,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional11) {
            std_move(((struct sType*)(__right_value540=list$1sType$ph_operator_load_element(fun_467->mParamTypes,i_470))),come_value_473->type,come_value_473,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value540,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_469,(struct CVALUE*)come_increment_ref_count(come_value_473));
        i_470++;
        /*c*/ come_call_finalizer3(come_value_473,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_471,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_474=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 772, "struct buffer*"))));
    buffer_append_str(buf_474,generics_fun_name_466);
    buffer_append_str(buf_474,"(");
    j_475=0;
    for(    o2_saved_476=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_469)),it_477=list$1CVALUE$ph_begin((o2_saved_476));    !list$1CVALUE$ph_end((o2_saved_476));    it_477=list$1CVALUE$ph_next((o2_saved_476))    ){
        buffer_append_str(buf_474,it_477->c_value);
        if(        j_475!=list$1CVALUE$ph_length(come_params_469)-1) {
            buffer_append_str(buf_474,",");
        }
        j_475++;
    }
    /*c*/ come_call_finalizer3(o2_saved_476,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_474,")");
    come_value2_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 789, "struct CVALUE*"))));
    __dec_obj107=come_value2_478->c_value,
    come_value2_478->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_474));
    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj108=come_value2_478->type,
    come_value2_478->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_468));
    /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_478->type->mStatic=(_Bool)0;
    come_value2_478->var=((void*)0);
    if(    result_type_468->mHeap) {
        append_object_to_right_values2(come_value2_478,(struct sType*)come_increment_ref_count(result_type_468),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2_478->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_478));
    __result_obj__273 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_444,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_445,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_450,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_453,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_455,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_456 = come_decrement_ref_count(type_name_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_457 = come_decrement_ref_count(finalizer_name_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_458 = come_decrement_ref_count(cloner_name_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_459 = come_decrement_ref_count(get_hash_key_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_460 = come_decrement_ref_count(equaler_name_460, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_464 = come_decrement_ref_count(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_466 = come_decrement_ref_count(generics_fun_name_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_468,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_469,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_474,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_478,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

static void sSomeNode_finalize(struct sSomeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value547 = (void*)0;
struct sNullReturnValue* __result_obj__274;
    ((struct sNodeBase*)(__right_value547=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value547,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__274 = (struct sNullReturnValue*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __right_value548 = (void*)0;
char* __result_obj__275;
    __result_obj__275 = (char*)come_increment_ref_count(((char*)(__right_value548=__builtin_string("sNullReturnValue"))));
    (__right_value548 = come_decrement_ref_count(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__275 = come_decrement_ref_count(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__275;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct CVALUE* come_value_479;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct buffer* buf_480;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
char* var_name_482;
void* __right_value555 = (void*)0;
struct sType* result_type_483;
void* __right_value556 = (void*)0;
struct sType* result_type2_484;
struct sType* left_type_485;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct CVALUE* come_value2_486;
char* __dec_obj109;
struct sType* __dec_obj110;
    if(    info->come_fun) {
        come_value_479=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 824, "struct CVALUE*"))));
        buf_480=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 826, "struct buffer*"))));
        static int num_481=0;
        num_481++;
        var_name_482=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value553=int_to_string(num_481)))));
        (__right_value553 = come_decrement_ref_count(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_483=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_484=(struct sType*)come_increment_ref_count(solve_generics(result_type_483,info->generics_type,info));
        left_type_485=(struct sType*)come_increment_ref_count(result_type2_484);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value557=make_define_var(left_type_485,var_name_482,(_Bool)0,info))));
        (__right_value557 = come_decrement_ref_count(__right_value557, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_482,((char*)(__right_value558=make_type_name_string(left_type_485,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value558 = come_decrement_ref_count(__right_value558, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_486=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 842, "struct CVALUE*"))));
        __dec_obj109=come_value2_486->c_value,
        come_value2_486->c_value=(char*)come_increment_ref_count(var_name_482);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj110=come_value2_486->type,
        come_value2_486->type=(struct sType*)come_increment_ref_count(result_type2_484);
        /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_486->type->mStatic=(_Bool)0;
        come_value2_486->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_486));
        /*c*/ come_call_finalizer3(come_value_479,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_480,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_482 = come_decrement_ref_count(var_name_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_485,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_486,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value565 = (void*)0;
struct sNode* __result_obj__278;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 859, "struct sNode");
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value562=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc_v2(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 859, "struct sNullReturnValue*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result_obj__278 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value565=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value562,sNullReturnValue_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value565) ? __right_value565 = come_decrement_ref_count(__right_value565, ((struct sNode*)__right_value565)->finalize, ((struct sNode*)__right_value565)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__278) ? __result_obj__278 = come_decrement_ref_count(__result_obj__278, ((struct sNode*)__result_obj__278)->finalize, ((struct sNode*)__result_obj__278)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__278;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
struct sNullReturnValue* __result_obj__276;
void* __right_value563 = (void*)0;
struct sNullReturnValue* result_487;
void* __right_value564 = (void*)0;
char* __dec_obj111;
struct sNullReturnValue* __result_obj__277;
    if(    self==(void*)0) {
        __result_obj__276 = (void*)0;
        return __result_obj__276;
    }
    result_487=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc_v2(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue*"));
    if(    self!=((void*)0)) {
        result_487->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj111=result_487->sname,
        result_487->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullReturnValue_clone", 5, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_487->sline_real=self->sline_real;
    }
    __result_obj__277 = result_487;
    /*c*/ come_call_finalizer3(result_487,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__277;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value566 = (void*)0;
struct sNullReturnValueOfException* __result_obj__279;
    ((struct sNodeBase*)(__right_value566=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value566,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__279 = (struct sNullReturnValueOfException*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__279,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __right_value567 = (void*)0;
char* __result_obj__280;
    __result_obj__280 = (char*)come_increment_ref_count(((char*)(__right_value567=__builtin_string("sNullReturnValue"))));
    (__right_value567 = come_decrement_ref_count(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__280 = come_decrement_ref_count(__result_obj__280, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__280;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct CVALUE* come_value_488;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct buffer* buf_489;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
char* var_name_491;
void* __right_value574 = (void*)0;
struct sType* result_type_492;
void* __right_value575 = (void*)0;
struct sType* result_type2_493;
struct sType* __dec_obj112;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sType* left_type_494;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct CVALUE* come_value2_495;
char* __dec_obj113;
struct sType* __dec_obj114;
    if(    info->come_fun) {
        come_value_488=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 877, "struct CVALUE*"))));
        buf_489=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 879, "struct buffer*"))));
        static int num_490=0;
        num_490++;
        var_name_491=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value572=int_to_string(num_490)))));
        (__right_value572 = come_decrement_ref_count(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_492=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_493=(struct sType*)come_increment_ref_count(solve_generics(result_type_492,info->generics_type,info));
        if(        result_type2_493->mNoSolvedGenericsType) {
            __dec_obj112=result_type2_493,
            result_type2_493=(struct sType*)come_increment_ref_count(result_type2_493->mNoSolvedGenericsType);
            /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_494=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value576=list$1sType$ph_operator_load_element(result_type2_493->mGenericsTypes,0)))));
        /*c*/ come_call_finalizer3(__right_value576,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        left_type_494==((void*)0)&&!result_type2_493->mException) {
            err_msg(info,"function is not exception type");
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value578=make_define_var(left_type_494,var_name_491,(_Bool)0,info))));
        (__right_value578 = come_decrement_ref_count(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_491,((char*)(__right_value579=make_type_name_string(left_type_494,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value579 = come_decrement_ref_count(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_495=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 903, "struct CVALUE*"))));
        __dec_obj113=come_value2_495->c_value,
        come_value2_495->c_value=(char*)come_increment_ref_count(var_name_491);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj114=come_value2_495->type,
        come_value2_495->type=(struct sType*)come_increment_ref_count(left_type_494);
        /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_495->type->mStatic=(_Bool)0;
        come_value2_495->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_495));
        /*c*/ come_call_finalizer3(come_value_488,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_489,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_491 = come_decrement_ref_count(var_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_492,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_493,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_494,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_495,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value586 = (void*)0;
struct sNode* __result_obj__283;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 920, "struct sNode");
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value583=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc_v2(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 920, "struct sNullReturnValueOfException*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result_obj__283 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value586=_inf_value3)));
    /*c*/ come_call_finalizer3(__right_value583,sNullReturnValueOfException_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value586) ? __right_value586 = come_decrement_ref_count(__right_value586, ((struct sNode*)__right_value586)->finalize, ((struct sNode*)__right_value586)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__283) ? __result_obj__283 = come_decrement_ref_count(__result_obj__283, ((struct sNode*)__result_obj__283)->finalize, ((struct sNode*)__result_obj__283)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__283;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
struct sNullReturnValueOfException* __result_obj__281;
void* __right_value584 = (void*)0;
struct sNullReturnValueOfException* result_496;
void* __right_value585 = (void*)0;
char* __dec_obj115;
struct sNullReturnValueOfException* __result_obj__282;
    if(    self==(void*)0) {
        __result_obj__281 = (void*)0;
        return __result_obj__281;
    }
    result_496=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc_v2(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException*"));
    if(    self!=((void*)0)) {
        result_496->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_496->sname,
        result_496->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullReturnValueOfException_clone", 5, "char*"));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_496->sline_real=self->sline_real;
    }
    __result_obj__282 = result_496;
    /*c*/ come_call_finalizer3(result_496,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__282;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __right_value587 = (void*)0;
struct sType* __dec_obj116;
struct sNullValue* __result_obj__284;
    ((struct sNodeBase*)(__right_value587=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value587,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj116=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__284 = (struct sNullValue*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__284,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

char* sNullValue_kind(struct sNullValue* self){
void* __right_value588 = (void*)0;
char* __result_obj__285;
    __result_obj__285 = (char*)come_increment_ref_count(((char*)(__right_value588=__builtin_string("sNullValue"))));
    (__right_value588 = come_decrement_ref_count(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__285 = come_decrement_ref_count(__result_obj__285, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__285;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct CVALUE* come_value_497;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct buffer* buf_498;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
char* var_name_500;
struct sType* left_type_501;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct CVALUE* come_value2_502;
char* __dec_obj117;
struct sType* __dec_obj118;
_Bool __result_obj__286;
    come_value_497=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 939, "struct CVALUE*"))));
    buf_498=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 941, "struct buffer*"))));
    static int num_499=0;
    num_499++;
    var_name_500=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value593=int_to_string(num_499)))));
    (__right_value593 = come_decrement_ref_count(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    left_type_501=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value595=make_define_var(left_type_501,var_name_500,(_Bool)0,info))));
    (__right_value595 = come_decrement_ref_count(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_500,((char*)(__right_value596=make_type_name_string(left_type_501,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    (__right_value596 = come_decrement_ref_count(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 953, "struct CVALUE*"))));
    __dec_obj117=come_value2_502->c_value,
    come_value2_502->c_value=(char*)come_increment_ref_count(var_name_500);
    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj118=come_value2_502->type,
    come_value2_502->type=(struct sType*)come_increment_ref_count(self->type);
    /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_502->type->mStatic=(_Bool)0;
    come_value2_502->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_502));
    __result_obj__286 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_497,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_498,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_500 = come_decrement_ref_count(var_name_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(left_type_501,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_502,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

static void sNullValue_finalize(struct sNullValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value604 = (void*)0;
struct sNode* __result_obj__289;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 969, "struct sNode");
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value600=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc_v2(1, sizeof(struct sNullValue)*(1), "06str.c", 969, "struct sNullValue*")),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result_obj__289 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value604=_inf_value4)));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value600,sNullValue_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value604) ? __right_value604 = come_decrement_ref_count(__right_value604, ((struct sNode*)__right_value604)->finalize, ((struct sNode*)__right_value604)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__289) ? __result_obj__289 = come_decrement_ref_count(__result_obj__289, ((struct sNode*)__result_obj__289)->finalize, ((struct sNode*)__result_obj__289)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__289;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
struct sNullValue* __result_obj__287;
void* __right_value601 = (void*)0;
struct sNullValue* result_503;
void* __right_value602 = (void*)0;
char* __dec_obj119;
void* __right_value603 = (void*)0;
struct sType* __dec_obj120;
struct sNullValue* __result_obj__288;
    if(    self==(void*)0) {
        __result_obj__287 = (void*)0;
        return __result_obj__287;
    }
    result_503=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc_v2(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue*"));
    if(    self!=((void*)0)) {
        result_503->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_503->sname,
        result_503->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullValue_clone", 5, "char*"));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_503->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj120=result_503->type,
        result_503->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__288 = result_503;
    /*c*/ come_call_finalizer3(result_503,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__288;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value605 = (void*)0;
struct list$1sNode$ph* __dec_obj121;
struct sNoneNode* __result_obj__290;
    ((struct sNodeBase*)(__right_value605=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value605,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj121=self->tuple_elements,
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj121,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__290 = (struct sNoneNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__290,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __right_value606 = (void*)0;
char* __result_obj__291;
    __result_obj__291 = (char*)come_increment_ref_count(((char*)(__right_value606=__builtin_string("sNoneNode"))));
    (__right_value606 = come_decrement_ref_count(__right_value606, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__291 = come_decrement_ref_count(__result_obj__291, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__291;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_504;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct list$1sType$ph* tuple_types_505;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1CVALUE$ph* tuple_values_506;
int i_507;
struct list$1sNode$ph* o2_saved_508;
struct sNode* it_509;
_Bool Value_510;
_Bool __result_obj__292;
void* __right_value611 = (void*)0;
struct CVALUE* come_value_511;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sType* string_type_512;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sType* type_513;
struct list$1sType$ph* o2_saved_514;
struct sType* it_515;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct CVALUE* obj_value_516;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct buffer* num_string_517;
void* __right_value626 = (void*)0;
struct sType* type2_518;
void* __right_value627 = (void*)0;
char* type_name_519;
void* __right_value628 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var9 = (void*)0;
char* finalizer_name_520=0;
char* cloner_name_521=0;
char* get_hash_key_name_522=0;
char* equaler_name_523=0;
void* __right_value629 = (void*)0;
_Bool _if_conditional12;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
char* __dec_obj122;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
char* __dec_obj123;
void* __right_value634 = (void*)0;
struct sType* type3_524;
void* __right_value635 = (void*)0;
struct sType* __dec_obj124;
void* __right_value636 = (void*)0;
struct sType* obj_type_525;
char* fun_name_526;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var10 = (void*)0;
char* name_527=0;
struct sGenericsFun* generics_fun_528=0;
char* generics_fun_name_529;
void* __right_value639 = (void*)0;
struct sFun* fun_530;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
char* __dec_obj125;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sType* result_type_531;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct list$1CVALUE$ph* come_params_532;
void* __right_value646 = (void*)0;
_Bool _if_conditional13;
void* __right_value647 = (void*)0;
struct list$1CVALUE$ph* o2_saved_533;
struct CVALUE* it_534;
void* __right_value648 = (void*)0;
struct CVALUE* come_value_535;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
_Bool _if_conditional14;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct buffer* buf_536;
int j_537;
struct list$1CVALUE$ph* o2_saved_538;
struct CVALUE* it_539;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct CVALUE* come_value2_540;
void* __right_value656 = (void*)0;
char* __dec_obj126;
void* __right_value657 = (void*)0;
struct sType* __dec_obj127;
_Bool __result_obj__293;
    tuple_elements_504=self->tuple_elements;
    tuple_types_505=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 989, "struct list$1sType$ph*"))));
    tuple_values_506=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 990, "struct list$1CVALUE$ph*"))));
    i_507=0;
    for(    o2_saved_508=(tuple_elements_504),it_509=list$1sNode$ph_begin((o2_saved_508));    !list$1sNode$ph_end((o2_saved_508));    it_509=list$1sNode$ph_next((o2_saved_508))    ){
        Value_510=node_compile(it_509,info);
        if(        !Value_510) {
            __result_obj__292 = (_Bool)0;
            /*c*/ come_call_finalizer3(tuple_types_505,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(tuple_values_506,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__292;
        }
        else {
        }
        come_value_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_506,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_511)));
        list$1sType$ph_push_back(tuple_types_505,(struct sType*)come_increment_ref_count(sType_clone(come_value_511->type)));
        if(        i_507==1) {
            string_type_512=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 1004, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
            string_type_512->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value617=xsprintf("invalid none type"))),string_type_512,come_value_511->type,come_value_511,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value617 = come_decrement_ref_count(__right_value617, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(string_type_512,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        i_507++;
        /*c*/ come_call_finalizer3(come_value_511,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_513=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 1012, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_505))),(_Bool)0,info));
    for(    o2_saved_514=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_505)),it_515=list$1sType$ph_begin((o2_saved_514));    !list$1sType$ph_end((o2_saved_514));    it_515=list$1sType$ph_next((o2_saved_514))    ){
        list$1sType$ph_push_back(type_513->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value621=sType_clone(it_515))))));
        /*c*/ come_call_finalizer3(__right_value621,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_514,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_516=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1018, "struct CVALUE*"))));
    num_string_517=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1020, "struct buffer*"))));
    buffer_append_str(num_string_517,"1");
    type2_518=(struct sType*)come_increment_ref_count(solve_generics(type_513,type_513,info));
    type_name_519=(char*)come_increment_ref_count(make_type_name_string(type2_518,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var9=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value628=create_vtable((struct sType*)come_increment_ref_count(type2_518),info)));
    finalizer_name_520=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    cloner_name_521=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    get_hash_key_name_522=(char*)come_increment_ref_count(multiple_assign_var9->v3);
    equaler_name_523=(char*)come_increment_ref_count(multiple_assign_var9->v4);
    /*c*/ come_call_finalizer3(__right_value628,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional12=(((struct sFun*)(__right_value629=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value629,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional12) {
        __dec_obj122=obj_value_516->c_value,
        obj_value_516->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_519,type_name_519,((char*)(__right_value630=buffer_to_string(num_string_517))),info->sname,info->sline,type_name_519));
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value630 = come_decrement_ref_count(__right_value630, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj123=obj_value_516->c_value,
        obj_value_516->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_519,type_name_519,((char*)(__right_value632=buffer_to_string(num_string_517))),info->sname,info->sline,type_name_519));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value632 = come_decrement_ref_count(__right_value632, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_524=(struct sType*)come_increment_ref_count(sType_clone(type2_518));
    type3_524->mPointerNum++;
    type3_524->mHeap=(_Bool)1;
    type2_518->mHeap=(_Bool)1;
    __dec_obj124=obj_value_516->type,
    obj_value_516->type=(struct sType*)come_increment_ref_count(sType_clone(type2_518));
    /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_516->type->mPointerNum++;
    obj_value_516->var=((void*)0);
    append_object_to_right_values2(obj_value_516,(struct sType*)come_increment_ref_count(type3_524),info,(_Bool)0,((void*)0),((void*)0));
    obj_type_525=(struct sType*)come_increment_ref_count(sType_clone(type2_518));
    fun_name_526="initialize";
    multiple_assign_var10=((struct tuple2$2char$phsGenericsFun$p*)(__right_value638=make_generics_function(obj_type_525,(char*)come_increment_ref_count(__builtin_string(fun_name_526)),info,(_Bool)1)));
    name_527=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    generics_fun_528=multiple_assign_var10->v2;
    /*c*/ come_call_finalizer3(__right_value638,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_529=(char*)come_increment_ref_count(name_527);
    fun_530=((struct sFun*)(__right_value639=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_529,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value639,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_530==((void*)0)) {
        __dec_obj125=generics_fun_name_529,
        generics_fun_name_529=(char*)come_increment_ref_count(create_method_name(obj_type_525,(_Bool)0,((char*)(__right_value640=__builtin_string(fun_name_526))),info,(_Bool)1));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value640 = come_decrement_ref_count(__right_value640, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_530=((struct sFun*)(__right_value642=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_529,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value642,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_530==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_529,info->come_fun->mName);
        }
    }
    result_type_531=(struct sType*)come_increment_ref_count(sType_clone(fun_530->mResultType));
    result_type_531->mStatic=(_Bool)0;
    come_params_532=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1068, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional13=(((struct sType*)(__right_value646=list$1sType$ph_operator_load_element(fun_530->mParamTypes,0)))->mHeap&&obj_value_516->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value646,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional13) {
        std_move(((struct sType*)(__right_value647=list$1sType$ph_operator_load_element(fun_530->mParamTypes,0))),obj_value_516->type,obj_value_516,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value647,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_532,(struct CVALUE*)come_increment_ref_count(obj_value_516));
    i_507=1;
    for(    o2_saved_533=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_506)),it_534=list$1CVALUE$ph_begin((o2_saved_533));    !list$1CVALUE$ph_end((o2_saved_533));    it_534=list$1CVALUE$ph_next((o2_saved_533))    ){
        come_value_535=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_534));
        if(        (_if_conditional14=(((struct sType*)(__right_value649=list$1sType$ph_operator_load_element(fun_530->mParamTypes,i_507)))&&((struct sType*)(__right_value650=list$1sType$ph_operator_load_element(fun_530->mParamTypes,i_507)))->mHeap&&come_value_535->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value649,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value650,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional14) {
            std_move(((struct sType*)(__right_value651=list$1sType$ph_operator_load_element(fun_530->mParamTypes,i_507))),come_value_535->type,come_value_535,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value651,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_532,(struct CVALUE*)come_increment_ref_count(come_value_535));
        i_507++;
        /*c*/ come_call_finalizer3(come_value_535,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_533,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1087, "struct buffer*"))));
    buffer_append_str(buf_536,generics_fun_name_529);
    buffer_append_str(buf_536,"(");
    j_537=0;
    for(    o2_saved_538=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_532)),it_539=list$1CVALUE$ph_begin((o2_saved_538));    !list$1CVALUE$ph_end((o2_saved_538));    it_539=list$1CVALUE$ph_next((o2_saved_538))    ){
        buffer_append_str(buf_536,it_539->c_value);
        if(        j_537!=list$1CVALUE$ph_length(come_params_532)-1) {
            buffer_append_str(buf_536,",");
        }
        j_537++;
    }
    /*c*/ come_call_finalizer3(o2_saved_538,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_536,")");
    come_value2_540=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1104, "struct CVALUE*"))));
    __dec_obj126=come_value2_540->c_value,
    come_value2_540->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_536));
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj127=come_value2_540->type,
    come_value2_540->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_531));
    /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_540->type->mStatic=(_Bool)0;
    come_value2_540->var=((void*)0);
    if(    result_type_531->mHeap) {
        append_object_to_right_values2(come_value2_540,(struct sType*)come_increment_ref_count(result_type_531),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2_540->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_540));
    __result_obj__293 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_505,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_506,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_513,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_516,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_517,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_518,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_519 = come_decrement_ref_count(type_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_520 = come_decrement_ref_count(finalizer_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_521 = come_decrement_ref_count(cloner_name_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_522 = come_decrement_ref_count(get_hash_key_name_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_523 = come_decrement_ref_count(equaler_name_523, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_524,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_527 = come_decrement_ref_count(name_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_529 = come_decrement_ref_count(generics_fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_531,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_532,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_536,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_540,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
}

static void sNoneNode_finalize(struct sNoneNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info){
void* __right_value658 = (void*)0;
struct list$1sNode$ph* __dec_obj128;
struct list$1sNode$ph* __dec_obj129;
struct sMapNode* __result_obj__294;
    ((struct sNodeBase*)(__right_value658=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value658,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj128=self->map_key_elements,
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    /*b*/ come_call_finalizer3(__dec_obj128,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj129=self->map_elements,
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    /*b*/ come_call_finalizer3(__dec_obj129,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__294 = (struct sMapNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_key_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__294,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

char* sMapNode_kind(struct sMapNode* self){
void* __right_value659 = (void*)0;
char* __result_obj__295;
    __result_obj__295 = (char*)come_increment_ref_count(((char*)(__right_value659=__builtin_string("sMapNode"))));
    (__right_value659 = come_decrement_ref_count(__right_value659, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__295 = come_decrement_ref_count(__result_obj__295, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__295;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNode$ph* map_key_elements_541;
struct list$1sNode$ph* map_elements_542;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1CVALUE$ph* key_params_543;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1CVALUE$ph* element_params_544;
struct sType* map_key_type_545;
struct sType* map_element_type_546;
int i_547;
void* __right_value664 = (void*)0;
struct sNode* key_elements_548;
void* __right_value665 = (void*)0;
struct sNode* elements_555;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
_Bool _if_conditional15;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sNode* value_node_556;
struct sNode* exp_557;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_558;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* __dec_obj130;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_559;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sNode* __dec_obj131;
void* __right_value688 = (void*)0;
struct sNode* __dec_obj132;
_Bool Value_560;
_Bool __result_obj__300;
void* __right_value689 = (void*)0;
struct CVALUE* come_value_561;
void* __right_value690 = (void*)0;
struct sType* __dec_obj133;
_Bool Value_562;
_Bool __result_obj__301;
void* __right_value691 = (void*)0;
struct CVALUE* come_value_563;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sType* __dec_obj134;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
_Bool _if_conditional16;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sNode* value_node_564;
struct sNode* exp2_565;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_566;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* __dec_obj135;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_567;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sNode* __dec_obj136;
void* __right_value716 = (void*)0;
struct sNode* __dec_obj137;
_Bool Value_568;
_Bool __result_obj__302;
void* __right_value717 = (void*)0;
struct CVALUE* come_value2_569;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sType* __dec_obj138;
_Bool Value_570;
_Bool __result_obj__303;
void* __right_value720 = (void*)0;
struct CVALUE* come_value2_571;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sType* __dec_obj139;
void* __right_value723 = (void*)0;
struct sType* key_type_values_573;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
char* var_name_574;
void* __right_value726 = (void*)0;
struct sVar* var__575;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sType* element_type_values_576;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
char* var_name2_577;
void* __right_value731 = (void*)0;
struct sVar* var2__578;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct buffer* source_579;
int i_580;
void* __right_value735 = (void*)0;
struct CVALUE* key_param_581;
void* __right_value736 = (void*)0;
struct CVALUE* element_param_582;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct sType* map_type_583;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sType* obj_type_584;
char* fun_name_585;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var11 = (void*)0;
char* name_586=0;
struct sGenericsFun* generics_fun_587=0;
char* generics_fun_name_588;
void* __right_value745 = (void*)0;
struct sFun* fun_589;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
char* __dec_obj140;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sType* result_type_590;
struct sType* type_591;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct CVALUE* obj_value_592;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct buffer* num_string_593;
void* __right_value754 = (void*)0;
struct sType* type2_594;
void* __right_value755 = (void*)0;
char* type_name_595;
struct sType* any_type_596;
void* __right_value756 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var12 = (void*)0;
char* finalizer_name_597=0;
char* cloner_name_598=0;
char* get_hash_key_name_599=0;
char* equaler_name_600=0;
void* __right_value757 = (void*)0;
_Bool _if_conditional17;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
char* __dec_obj141;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
char* __dec_obj142;
void* __right_value762 = (void*)0;
struct sType* type3_601;
void* __right_value763 = (void*)0;
struct sType* __dec_obj143;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct list$1CVALUE$ph* come_params_602;
void* __right_value766 = (void*)0;
_Bool _if_conditional18;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct CVALUE* come_value2_603;
void* __right_value770 = (void*)0;
char* __dec_obj144;
struct sType* __dec_obj145;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct CVALUE* come_value3_604;
void* __right_value773 = (void*)0;
char* __dec_obj146;
struct sType* __dec_obj147;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct CVALUE* come_value4_605;
void* __right_value776 = (void*)0;
char* __dec_obj148;
struct sType* __dec_obj149;
int j_606;
struct list$1CVALUE$ph* o2_saved_607;
struct CVALUE* it_608;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct CVALUE* come_value5_609;
void* __right_value779 = (void*)0;
char* __dec_obj150;
void* __right_value780 = (void*)0;
struct sType* __dec_obj151;
_Bool __result_obj__304;
exp_557 = (void*)0;
exp2_565 = (void*)0;
    map_key_elements_541=self->map_key_elements;
    map_elements_542=self->map_elements;
    key_params_543=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1144, "struct list$1CVALUE$ph*"))));
    element_params_544=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1145, "struct list$1CVALUE$ph*"))));
    map_key_type_545=((void*)0);
    map_element_type_546=((void*)0);
    for(    i_547=0;    i_547<list$1sNode$ph_length(map_key_elements_541);    i_547++    ){
        key_elements_548=((struct sNode*)(__right_value664=list$1sNode$ph_operator_load_element(map_key_elements_541,i_547)));
        ((__right_value664) ? __right_value664 = come_decrement_ref_count(__right_value664, ((struct sNode*)__right_value664)->finalize, ((struct sNode*)__right_value664)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        elements_555=((struct sNode*)(__right_value665=list$1sNode$ph_operator_load_element(map_elements_542,i_547)));
        ((__right_value665) ? __right_value665 = come_decrement_ref_count(__right_value665, ((struct sNode*)__right_value665)->finalize, ((struct sNode*)__right_value665)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        (_if_conditional15=(string_operator_equals(((char*)(__right_value667=key_elements_548->kind(key_elements_548->_protocol_obj))),"sWildCard"))),        (__right_value666 = come_decrement_ref_count(__right_value666, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value667 = come_decrement_ref_count(__right_value667, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional15) {
            value_node_556=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value668=xsprintf("Value"))),info));
            (__right_value668 = come_decrement_ref_count(__right_value668, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_558=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1158, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_558,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1159, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_556))));
                __dec_obj130=exp_557,
                exp_557=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value675=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_556),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_558),((void*)0),0,((void*)0),(_Bool)0,info));
                (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value675 = come_decrement_ref_count(__right_value675, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_558,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            {
                params_559=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1164, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_559,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1165, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_557))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_559,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1166, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_547,info)))));
                __dec_obj131=exp_557,
                exp_557=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value686=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_557),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_559),((void*)0),0,((void*)0),(_Bool)0,info));
                (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value686 = come_decrement_ref_count(__right_value686, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj132=exp_557,
                exp_557=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_557,info));
                (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(params_559,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            Value_560=node_compile(exp_557,info);
            if(            !Value_560) {
                __result_obj__300 = (_Bool)0;
                ((value_node_556) ? value_node_556 = come_decrement_ref_count(value_node_556, ((struct sNode*)value_node_556)->finalize, ((struct sNode*)value_node_556)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_557) ? exp_557 = come_decrement_ref_count(exp_557, ((struct sNode*)exp_557)->finalize, ((struct sNode*)exp_557)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(key_params_543,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_544,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_545,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_546,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__300;
            }
            else {
            }
            come_value_561=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_push_back(key_params_543,(struct CVALUE*)come_increment_ref_count(come_value_561));
            __dec_obj133=map_key_type_545,
            map_key_type_545=(struct sType*)come_increment_ref_count(sType_clone(come_value_561->type));
            /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_556) ? value_node_556 = come_decrement_ref_count(value_node_556, ((struct sNode*)value_node_556)->finalize, ((struct sNode*)value_node_556)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_557) ? exp_557 = come_decrement_ref_count(exp_557, ((struct sNode*)exp_557)->finalize, ((struct sNode*)exp_557)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_561,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            Value_562=node_compile(key_elements_548,info);
            if(            !Value_562) {
                __result_obj__301 = (_Bool)0;
                /*c*/ come_call_finalizer3(key_params_543,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_544,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_545,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_546,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__301;
            }
            else {
            }
            come_value_563=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_key_type_545) {
                check_assign_type(((char*)(__right_value692=xsprintf("invalid map key type"))),map_key_type_545,come_value_563->type,come_value_563,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value692 = come_decrement_ref_count(__right_value692, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(key_params_543,(struct CVALUE*)come_increment_ref_count(come_value_563));
            __dec_obj134=map_key_type_545,
            map_key_type_545=(struct sType*)come_increment_ref_count(sType_clone(come_value_563->type));
            /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(come_value_563,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        (_if_conditional16=(string_operator_equals(((char*)(__right_value695=elements_555->kind(elements_555->_protocol_obj))),"sWildCard"))),        (__right_value694 = come_decrement_ref_count(__right_value694, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value695 = come_decrement_ref_count(__right_value695, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional16) {
            value_node_564=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value696=xsprintf("Value"))),info));
            (__right_value696 = come_decrement_ref_count(__right_value696, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_566=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1200, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_566,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1201, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_564))));
                __dec_obj135=exp2_565,
                exp2_565=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value703=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_564),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_566),((void*)0),0,((void*)0),(_Bool)0,info));
                (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value703 = come_decrement_ref_count(__right_value703, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_566,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            {
                params_567=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1206, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_567,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1207, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_565))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_567,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1208, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_547,info)))));
                __dec_obj136=exp2_565,
                exp2_565=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value714=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_565),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_567),((void*)0),0,((void*)0),(_Bool)0,info));
                (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value714 = come_decrement_ref_count(__right_value714, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj137=exp2_565,
                exp2_565=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_565,info));
                (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(params_567,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            Value_568=node_compile(exp2_565,info);
            if(            !Value_568) {
                __result_obj__302 = (_Bool)0;
                ((value_node_564) ? value_node_564 = come_decrement_ref_count(value_node_564, ((struct sNode*)value_node_564)->finalize, ((struct sNode*)value_node_564)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp2_565) ? exp2_565 = come_decrement_ref_count(exp2_565, ((struct sNode*)exp2_565)->finalize, ((struct sNode*)exp2_565)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(key_params_543,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_544,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_545,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_546,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__302;
            }
            else {
            }
            come_value2_569=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_element_type_546) {
                check_assign_type(((char*)(__right_value718=xsprintf("invalid map element type"))),map_element_type_546,come_value2_569->type,come_value2_569,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value718 = come_decrement_ref_count(__right_value718, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(element_params_544,(struct CVALUE*)come_increment_ref_count(come_value2_569));
            __dec_obj138=map_element_type_546,
            map_element_type_546=(struct sType*)come_increment_ref_count(sType_clone(come_value2_569->type));
            /*b*/ come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_564) ? value_node_564 = come_decrement_ref_count(value_node_564, ((struct sNode*)value_node_564)->finalize, ((struct sNode*)value_node_564)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_565) ? exp2_565 = come_decrement_ref_count(exp2_565, ((struct sNode*)exp2_565)->finalize, ((struct sNode*)exp2_565)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value2_569,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            Value_570=node_compile(elements_555,info);
            if(            !Value_570) {
                __result_obj__303 = (_Bool)0;
                /*c*/ come_call_finalizer3(key_params_543,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_544,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_545,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_546,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__303;
            }
            else {
            }
            come_value2_571=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_element_type_546) {
                check_assign_type(((char*)(__right_value721=xsprintf("invalid map element type"))),map_element_type_546,come_value2_571->type,come_value2_571,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value721 = come_decrement_ref_count(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(element_params_544,(struct CVALUE*)come_increment_ref_count(come_value2_571));
            __dec_obj139=map_element_type_546,
            map_element_type_546=(struct sType*)come_increment_ref_count(sType_clone(come_value2_571->type));
            /*b*/ come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(come_value2_571,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    static int map_value_num_572=0;
    key_type_values_573=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_545));
    list$1sNode$ph_push_back(key_type_values_573->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(key_params_543),info)));
    key_type_values_573->mHeap=(_Bool)0;
    var_name_574=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_572));
    add_variable_to_table(var_name_574,(struct sType*)come_increment_ref_count(sType_clone(key_type_values_573)),info,(_Bool)0,(_Bool)0);
    var__575=get_variable_from_table(info->lv_table,var_name_574);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value727=make_define_var(key_type_values_573,var__575->mCValueName,(_Bool)0,info))));
    (__right_value727 = come_decrement_ref_count(__right_value727, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    element_type_values_576=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_546));
    list$1sNode$ph_push_back(element_type_values_576->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(element_params_544),info)));
    element_type_values_576->mHeap=(_Bool)0;
    var_name2_577=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_572));
    add_variable_to_table(var_name2_577,(struct sType*)come_increment_ref_count(sType_clone(element_type_values_576)),info,(_Bool)0,(_Bool)0);
    var2__578=get_variable_from_table(info->lv_table,var_name2_577);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value732=make_define_var(element_type_values_576,var2__578->mCValueName,(_Bool)0,info))));
    (__right_value732 = come_decrement_ref_count(__right_value732, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_579=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1267, "struct buffer*"))));
    buffer_append_str(source_579,"(");
    for(    i_580=0;    i_580<list$1CVALUE$ph_length(key_params_543);    i_580++    ){
        key_param_581=((struct CVALUE*)(__right_value735=list$1CVALUE$ph_operator_load_element(key_params_543,i_580)));
        /*c*/ come_call_finalizer3(__right_value735,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        element_param_582=((struct CVALUE*)(__right_value736=list$1CVALUE$ph_operator_load_element(element_params_544,i_580)));
        /*c*/ come_call_finalizer3(__right_value736,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        map_key_type_545->mHeap) {
            buffer_append_format(source_579,"%s[%d]=%s,\n",var__575->mCValueName,i_580,key_param_581->c_value);
        }
        else {
            buffer_append_format(source_579,"%s[%d]=%s,\n",var__575->mCValueName,i_580,key_param_581->c_value);
        }
        if(        map_element_type_546->mHeap) {
            buffer_append_format(source_579,"%s[%d]=%s,\n",var2__578->mCValueName,i_580,element_param_582->c_value);
        }
        else {
            buffer_append_format(source_579,"%s[%d]=%s,\n",var2__578->mCValueName,i_580,element_param_582->c_value);
        }
    }
    map_type_583=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 1292, "struct sType*")),(char*)come_increment_ref_count(xsprintf("map")),(_Bool)0,info));
    list$1sType$ph_push_back(map_type_583->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value740=sType_clone(map_key_type_545))))));
    /*c*/ come_call_finalizer3(__right_value740,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1sType$ph_push_back(map_type_583->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value741=sType_clone(map_element_type_546))))));
    /*c*/ come_call_finalizer3(__right_value741,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_type_584=(struct sType*)come_increment_ref_count(sType_clone(map_type_583));
    fun_name_585="initialize_with_values";
    multiple_assign_var11=((struct tuple2$2char$phsGenericsFun$p*)(__right_value744=make_generics_function(obj_type_584,(char*)come_increment_ref_count(__builtin_string(fun_name_585)),info,(_Bool)1)));
    name_586=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_587=multiple_assign_var11->v2;
    /*c*/ come_call_finalizer3(__right_value744,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_588=(char*)come_increment_ref_count(name_586);
    fun_589=((struct sFun*)(__right_value745=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_588,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value745,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_589==((void*)0)) {
        __dec_obj140=generics_fun_name_588,
        generics_fun_name_588=(char*)come_increment_ref_count(create_method_name(obj_type_584,(_Bool)0,((char*)(__right_value746=__builtin_string(fun_name_585))),info,(_Bool)1));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value746 = come_decrement_ref_count(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_589=((struct sFun*)(__right_value748=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_588,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value748,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_589==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)",generics_fun_name_588,info->come_fun->mName);
        }
    }
    result_type_590=(struct sType*)come_increment_ref_count(sType_clone(fun_589->mResultType));
    result_type_590->mStatic=(_Bool)0;
    type_591=map_type_583;
    obj_value_592=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1319, "struct CVALUE*"))));
    num_string_593=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1321, "struct buffer*"))));
    buffer_append_str(num_string_593,"1");
    type2_594=(struct sType*)come_increment_ref_count(solve_generics(type_591,type_591,info));
    type_name_595=(char*)come_increment_ref_count(make_type_name_string(type2_594,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_596=(struct sType*)come_increment_ref_count(type2_594);
    any_type_596->mPointerNum=1;
    any_type_596->mHeap=(_Bool)1;
    multiple_assign_var12=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value756=create_vtable((struct sType*)come_increment_ref_count(any_type_596),info)));
    finalizer_name_597=(char*)come_increment_ref_count(multiple_assign_var12->v1);
    cloner_name_598=(char*)come_increment_ref_count(multiple_assign_var12->v2);
    get_hash_key_name_599=(char*)come_increment_ref_count(multiple_assign_var12->v3);
    equaler_name_600=(char*)come_increment_ref_count(multiple_assign_var12->v4);
    /*c*/ come_call_finalizer3(__right_value756,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional17=(((struct sFun*)(__right_value757=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value757,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional17) {
        __dec_obj141=obj_value_592->c_value,
        obj_value_592->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_595,type_name_595,((char*)(__right_value758=buffer_to_string(num_string_593))),info->sname,info->sline,type_name_595));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value758 = come_decrement_ref_count(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj142=obj_value_592->c_value,
        obj_value_592->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_595,type_name_595,((char*)(__right_value760=buffer_to_string(num_string_593))),info->sname,info->sline,type_name_595));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value760 = come_decrement_ref_count(__right_value760, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_601=(struct sType*)come_increment_ref_count(sType_clone(type2_594));
    type3_601->mPointerNum++;
    type3_601->mHeap=(_Bool)1;
    type2_594->mHeap=(_Bool)1;
    __dec_obj143=obj_value_592->type,
    obj_value_592->type=(struct sType*)come_increment_ref_count(sType_clone(type2_594));
    /*b*/ come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_592->type->mPointerNum++;
    obj_value_592->var=((void*)0);
    append_object_to_right_values2(obj_value_592,(struct sType*)come_increment_ref_count(type3_601),info,(_Bool)0,((void*)0),((void*)0));
    come_params_602=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1352, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional18=(((struct sType*)(__right_value766=list$1sType$ph_operator_load_element(fun_589->mParamTypes,0)))->mHeap&&obj_value_592->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value766,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional18) {
        std_move(((struct sType*)(__right_value767=list$1sType$ph_operator_load_element(fun_589->mParamTypes,0))),obj_value_592->type,obj_value_592,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value767,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_602,(struct CVALUE*)come_increment_ref_count(obj_value_592));
    come_value2_603=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1359, "struct CVALUE*"))));
    __dec_obj144=come_value2_603->c_value,
    come_value2_603->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(key_params_543)));
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj145=come_value2_603->type,
    come_value2_603->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_603->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_602,(struct CVALUE*)come_increment_ref_count(come_value2_603));
    come_value3_604=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1367, "struct CVALUE*"))));
    __dec_obj146=come_value3_604->c_value,
    come_value3_604->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__575->mCValueName));
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj147=come_value3_604->type,
    come_value3_604->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_604->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_602,(struct CVALUE*)come_increment_ref_count(come_value3_604));
    come_value4_605=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1375, "struct CVALUE*"))));
    __dec_obj148=come_value4_605->c_value,
    come_value4_605->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__578->mCValueName));
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj149=come_value4_605->type,
    come_value4_605->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_605->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_602,(struct CVALUE*)come_increment_ref_count(come_value4_605));
    buffer_append_str(source_579,generics_fun_name_588);
    buffer_append_str(source_579,"(");
    j_606=0;
    for(    o2_saved_607=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_602)),it_608=list$1CVALUE$ph_begin((o2_saved_607));    !list$1CVALUE$ph_end((o2_saved_607));    it_608=list$1CVALUE$ph_next((o2_saved_607))    ){
        buffer_append_str(source_579,it_608->c_value);
        if(        j_606!=list$1CVALUE$ph_length(come_params_602)-1) {
            buffer_append_str(source_579,",");
        }
        j_606++;
    }
    /*c*/ come_call_finalizer3(o2_saved_607,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(source_579,")");
    buffer_append_str(source_579,")");
    come_value5_609=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1401, "struct CVALUE*"))));
    __dec_obj150=come_value5_609->c_value,
    come_value5_609->c_value=(char*)come_increment_ref_count(buffer_to_string(source_579));
    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj151=come_value5_609->type,
    come_value5_609->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_590));
    /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value5_609->type->mStatic=(_Bool)0;
    come_value5_609->var=((void*)0);
    if(    result_type_590->mHeap) {
        append_object_to_right_values2(come_value5_609,(struct sType*)come_increment_ref_count(result_type_590),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value5_609->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_609));
    __result_obj__304 = (_Bool)1;
    /*c*/ come_call_finalizer3(key_params_543,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(element_params_544,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_key_type_545,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_element_type_546,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(key_type_values_573,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_574 = come_decrement_ref_count(var_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(element_type_values_576,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name2_577 = come_decrement_ref_count(var_name2_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_579,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_type_583,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_584,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_586 = come_decrement_ref_count(name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_588 = come_decrement_ref_count(generics_fun_name_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_592,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_593,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_594,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_595 = come_decrement_ref_count(type_name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_596,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_597 = come_decrement_ref_count(finalizer_name_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_598 = come_decrement_ref_count(cloner_name_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_599 = come_decrement_ref_count(get_hash_key_name_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_600 = come_decrement_ref_count(equaler_name_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_601,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_602,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_603,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value3_604,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value4_605,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value5_609,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

static void sMapNode_finalize(struct sMapNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->map_key_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->map_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_549;
int i_550;
struct sNode* __result_obj__296;
struct sNode* default_value_551;
struct sNode* __result_obj__297;
default_value_551 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_549=self->head;
    i_550=0;
    while(    it_549!=((void*)0)) {
        if(        position==i_550) {
            __result_obj__296 = (struct sNode*)come_increment_ref_count(it_549->item);
            ((__result_obj__296) ? __result_obj__296 = come_decrement_ref_count(__result_obj__296, ((struct sNode*)__result_obj__296)->finalize, ((struct sNode*)__result_obj__296)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__296;
        }
        it_549=it_549->next;
        i_550++;
    }
    memset(&default_value_551,0,sizeof(struct sNode*));
    __result_obj__297 = (struct sNode*)come_increment_ref_count(default_value_551);
    ((default_value_551) ? default_value_551 = come_decrement_ref_count(default_value_551, ((struct sNode*)default_value_551)->finalize, ((struct sNode*)default_value_551)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__297) ? __result_obj__297 = come_decrement_ref_count(__result_obj__297, ((struct sNode*)__result_obj__297)->finalize, ((struct sNode*)__result_obj__297)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__297;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_552;
int i_553;
struct sNode* __result_obj__298;
struct sNode* default_value_554;
struct sNode* __result_obj__299;
default_value_554 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_552=self->head;
    i_553=0;
    while(    it_552!=((void*)0)) {
        if(        position==i_553) {
            __result_obj__298 = (struct sNode*)come_increment_ref_count(it_552->item);
            ((__result_obj__298) ? __result_obj__298 = come_decrement_ref_count(__result_obj__298, ((struct sNode*)__result_obj__298)->finalize, ((struct sNode*)__result_obj__298)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__298;
        }
        it_552=it_552->next;
        i_553++;
    }
    memset(&default_value_554,0,sizeof(struct sNode*));
    __result_obj__299 = (struct sNode*)come_increment_ref_count(default_value_554);
    ((default_value_554) ? default_value_554 = come_decrement_ref_count(default_value_554, ((struct sNode*)default_value_554)->finalize, ((struct sNode*)default_value_554)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__299) ? __result_obj__299 = come_decrement_ref_count(__result_obj__299, ((struct sNode*)__result_obj__299)->finalize, ((struct sNode*)__result_obj__299)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__299;
}

struct sNode* expression_node_v96(struct sInfo* info){
int sline_real_610;
int sline_611;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct list$1sNode$ph* exps_612;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct buffer* value_613;
char* head_of_last_line_614;
int len_615;
void* __right_value785 = (void*)0;
struct sNode* exp_616;
int sline2_617;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value793 = (void*)0;
struct sNode* __result_obj__307;
int sline_real_619;
int sline_620;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct buffer* value_621;
char* p_622;
int sline_623;
int sline2_624;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value799 = (void*)0;
struct sNode* __result_obj__308;
int sline_real_625;
int sline_626;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct buffer* value_627;
unsigned long  int size_628;
char* p_629;
int sline_630;
int len_631;
int sline2_632;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value807 = (void*)0;
struct sNode* __result_obj__311;
int sline_real_634;
int sline_635;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct buffer* buf_636;
_Bool global_637;
_Bool ignore_case_638;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value813 = (void*)0;
struct sNode* obj_639;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_640;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct buffer* method_block_641;
int method_block_sline_642;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct list$1sType$ph* method_generics_types_643;
void* __right_value855 = (void*)0;
struct sNode* node_644;
struct sNode* __result_obj__312;
int sline_real_645;
int sline_646;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct buffer* value_647;
char* p_648;
int sline_649;
int len_650;
int sline2_651;
_Bool global_652;
_Bool ignore_case_653;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value861 = (void*)0;
struct sNode* obj_654;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_655;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct buffer* method_block_656;
int method_block_sline_657;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct list$1sType$ph* method_generics_types_658;
void* __right_value903 = (void*)0;
struct sNode* node_659;
struct sNode* __result_obj__313;
int sline_real_660;
int c_661;
int n_662;
int n_663;
unsigned long long int n_666;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value908 = (void*)0;
struct sNode* __result_obj__316;
int sline_real_668;
int c_669;
_Bool quote_670;
int n_671;
int n_672;
unsigned long long int n_675;
unsigned char p2_676;
int size_677;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value913 = (void*)0;
struct sNode* __result_obj__319;
int sline_real_680;
int sline_681;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct buffer* value_682;
char* p_683;
int sline_684;
int sline2_685;
int len_686;
void* __right_value916 = (void*)0;
int* wstr_687;
char* str_688;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value922 = (void*)0;
struct sNode* __result_obj__322;
int sline_real_690;
int sline_691;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct list$1sNode$ph* exps_692;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct buffer* value_693;
char* p_694;
int sline_695;
int len_696;
void* __right_value927 = (void*)0;
struct sNode* exp_697;
int sline2_698;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value931 = (void*)0;
struct sNode* __result_obj__323;
int sline_real_699;
char* p_700;
_Bool no_comma_701;
void* __right_value932 = (void*)0;
struct sNode* node_702;
char* p2_703;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct buffer* first_element_source_704;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct list$1sNode$ph* list_elements_705;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct list$1sNode$ph* map_keys_706;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct list$1sNode$ph* map_elements_707;
_Bool no_comma_708;
void* __right_value941 = (void*)0;
struct sNode* node2_709;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value948 = (void*)0;
struct sNode* __result_obj__326;
_Bool no_comma_711;
void* __right_value949 = (void*)0;
struct sNode* node2_712;
void* __right_value950 = (void*)0;
struct sNode* node3_713;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value953 = (void*)0;
struct sNode* __result_obj__327;
_Bool no_comma_714;
void* __right_value954 = (void*)0;
struct sNode* node2_715;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value960 = (void*)0;
struct sNode* __result_obj__330;
void* __right_value961 = (void*)0;
struct sNode* node_717;
struct sNode* __result_obj__331;
struct sNode* __result_obj__332;
memset(&c_661, 0, sizeof(int));
memset(&c_669, 0, sizeof(int));
memset(&quote_670, 0, sizeof(_Bool));
memset(&size_677, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_610=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_611=info->sline;
        exps_612=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1431, "struct list$1sNode$ph*"))));
        value_613=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1432, "struct buffer*"))));
        head_of_last_line_614=((void*)0);
        while(        1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_614) {
                    buffer_trim(value_613,info->p-head_of_last_line_614);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_613,37);
                buffer_append_char(value_613,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_613,92);
                buffer_append_char(value_613,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_613,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_615=0;
                    while(                    xisdigit(*info->p)&&len_615<3) {
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        len_615++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_613,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_616=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_612,(struct sNode*)come_increment_ref_count(exp_616));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_613,"%s");
                    ((exp_616) ? exp_616 = come_decrement_ref_count(exp_616, ((struct sNode*)exp_616)->finalize, ((struct sNode*)exp_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_613,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_617=info->sline;
                info->sline=sline_611;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_613,92);
                    buffer_append_char(value_613,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_614=info->p;
                }
                else {
                    buffer_append_char(value_613,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_610;
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1571, "struct sNode");
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value788=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 1571, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_613)),(struct list$1sNode$ph*)come_increment_ref_count(exps_612),sline_611,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result_obj__307 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value793=_inf_value5)));
        /*c*/ come_call_finalizer3(exps_612,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_613,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value788,sSStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value793) ? __right_value793 = come_decrement_ref_count(__right_value793, ((struct sNode*)__right_value793)->finalize, ((struct sNode*)__right_value793)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__307;
        /*c*/ come_call_finalizer3(exps_612,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_613,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_619=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_620=info->sline;
        value_621=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1581, "struct buffer*"))));
        while(        1) {
            if(            *info->p==34) {
                info->p++;
                p_622=info->p;
                sline_623=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_622;
                    info->sline=sline_623;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_621,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_621,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_621,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_624=info->sline;
                info->sline=sline_620;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_624;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_621,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_619;
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1634, "struct sNode");
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value798=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1634, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_621)),sline_620,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result_obj__308 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value799=_inf_value6)));
        /*c*/ come_call_finalizer3(value_621,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value798,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value799) ? __right_value799 = come_decrement_ref_count(__right_value799, ((struct sNode*)__right_value799)->finalize, ((struct sNode*)__right_value799)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__308) ? __result_obj__308 = come_decrement_ref_count(__result_obj__308, ((struct sNode*)__result_obj__308)->finalize, ((struct sNode*)__result_obj__308)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__308;
        /*c*/ come_call_finalizer3(value_621,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_625=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_626=info->sline;
        value_627=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1644, "struct buffer*"))));
        size_628=0;
        while(        1) {
            if(            *info->p==34) {
                buffer_append_char(value_627,*info->p);
                info->p++;
                p_629=info->p;
                sline_630=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_629;
                    info->sline=sline_630;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_627,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_631=0;
                    while(                    xisdigit(*info->p)&&len_631<3) {
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        len_631++;
                    }
                    size_628++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_627,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                    }
                    size_628++;
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        size_628++;
                        break;
                        case 110:
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        size_628++;
                        break;
                        case 116:
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        size_628++;
                        break;
                        case 114:
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        size_628++;
                        break;
                        case 118:
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        size_628++;
                        break;
                        case 102:
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        size_628++;
                        break;
                        case 97:
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        size_628++;
                        break;
                        case 98:
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        size_628++;
                        break;
                        case 92:
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        size_628++;
                        break;
                        default:
                        buffer_append_char(value_627,*info->p);
                        info->p++;
                        size_628++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_632=info->sline;
                info->sline=sline_626;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_627,*info->p);
                info->p++;
                size_628++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_625;
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1771, "struct sNode");
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value803=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "06str.c", 1771, "struct sBufferNode*")),(struct buffer*)come_increment_ref_count(value_627),size_628,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result_obj__311 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value807=_inf_value7)));
        /*c*/ come_call_finalizer3(value_627,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value803,sBufferNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value807) ? __right_value807 = come_decrement_ref_count(__right_value807, ((struct sNode*)__right_value807)->finalize, ((struct sNode*)__right_value807)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__311) ? __result_obj__311 = come_decrement_ref_count(__result_obj__311, ((struct sNode*)__result_obj__311)->finalize, ((struct sNode*)__result_obj__311)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__311;
        /*c*/ come_call_finalizer3(value_627,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_634=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_635=info->sline;
        buf_636=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1780, "struct buffer*"))));
        while(        (_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_636,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf_636,*info->p);
                info->p++;
            }
        }
        global_637=(_Bool)0;
        ignore_case_638=(_Bool)0;
        while(        *info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_637=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_638=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1819, "struct sNode");
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value812=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1819, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(buf_636)),sline_635,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_639=(struct sNode*)come_increment_ref_count(_inf_value8);
        /*c*/ come_call_finalizer3(__right_value812,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        params_640=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1821, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_640,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1823, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_639))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_640,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1824, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_638)?(((struct sNode*)(__right_value820=create_int_node(1,info)))):(((struct sNode*)(__right_value821=create_int_node(0,info)))))))));
        ((__right_value820) ? __right_value820 = come_decrement_ref_count(__right_value820, ((struct sNode*)__right_value820)->finalize, ((struct sNode*)__right_value820)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value821) ? __right_value821 = come_decrement_ref_count(__right_value821, ((struct sNode*)__right_value821)->finalize, ((struct sNode*)__right_value821)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_640,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1825, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_640,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1826, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_637)?(((struct sNode*)(__right_value829=create_int_node(1,info)))):(((struct sNode*)(__right_value830=create_int_node(0,info)))))))));
        ((__right_value829) ? __right_value829 = come_decrement_ref_count(__right_value829, ((struct sNode*)__right_value829)->finalize, ((struct sNode*)__right_value829)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value830) ? __right_value830 = come_decrement_ref_count(__right_value830, ((struct sNode*)__right_value830)->finalize, ((struct sNode*)__right_value830)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_640,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1827, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_640,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1828, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_640,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1829, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_640,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1830, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_640,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1831, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_641=((void*)0);
        method_block_sline_642=info->sline;
        method_generics_types_643=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1837, "struct list$1sType$ph*"))));
        node_644=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_639),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_640),method_block_641,method_block_sline_642,method_generics_types_643,(_Bool)0,info));
        info->sline_real=sline_real_634;
        __result_obj__312 = (struct sNode*)come_increment_ref_count(node_644);
        /*c*/ come_call_finalizer3(buf_636,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_639) ? obj_639 = come_decrement_ref_count(obj_639, ((struct sNode*)obj_639)->finalize, ((struct sNode*)obj_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_640,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_643,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_644) ? node_644 = come_decrement_ref_count(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__312) ? __result_obj__312 = come_decrement_ref_count(__result_obj__312, ((struct sNode*)__result_obj__312)->finalize, ((struct sNode*)__result_obj__312)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__312;
        /*c*/ come_call_finalizer3(buf_636,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_639) ? obj_639 = come_decrement_ref_count(obj_639, ((struct sNode*)obj_639)->finalize, ((struct sNode*)obj_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_640,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_643,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_644) ? node_644 = come_decrement_ref_count(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_645=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_646=info->sline;
        value_647=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1851, "struct buffer*"))));
        while(        1) {
            if(            *info->p==34) {
                info->p++;
                p_648=info->p;
                sline_649=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_648;
                    info->sline=sline_649;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_647,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_650=0;
                    while(                    xisdigit(*info->p)&&len_650<3) {
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        len_650++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_647,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_651=info->sline;
                info->sline=sline_646;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_647,*info->p);
                info->p++;
            }
        }
        global_652=(_Bool)0;
        ignore_case_653=(_Bool)0;
        while(        *info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_652=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_653=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1977, "struct sNode");
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value860=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1977, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_647)),sline_646,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_654=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*c*/ come_call_finalizer3(__right_value860,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        params_655=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1979, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1981, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_654))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1982, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_653)?(((struct sNode*)(__right_value868=create_int_node(1,info)))):(((struct sNode*)(__right_value869=create_int_node(0,info)))))))));
        ((__right_value868) ? __right_value868 = come_decrement_ref_count(__right_value868, ((struct sNode*)__right_value868)->finalize, ((struct sNode*)__right_value868)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value869) ? __right_value869 = come_decrement_ref_count(__right_value869, ((struct sNode*)__right_value869)->finalize, ((struct sNode*)__right_value869)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1983, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1984, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_652)?(((struct sNode*)(__right_value877=create_int_node(1,info)))):(((struct sNode*)(__right_value878=create_int_node(0,info)))))))));
        ((__right_value877) ? __right_value877 = come_decrement_ref_count(__right_value877, ((struct sNode*)__right_value877)->finalize, ((struct sNode*)__right_value877)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value878) ? __right_value878 = come_decrement_ref_count(__right_value878, ((struct sNode*)__right_value878)->finalize, ((struct sNode*)__right_value878)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1985, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1986, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1987, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1988, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1989, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_656=((void*)0);
        method_block_sline_657=info->sline;
        method_generics_types_658=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1995, "struct list$1sType$ph*"))));
        node_659=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_654),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_655),method_block_656,method_block_sline_657,method_generics_types_658,(_Bool)0,info));
        info->sline_real=sline_real_645;
        __result_obj__313 = (struct sNode*)come_increment_ref_count(node_659);
        /*c*/ come_call_finalizer3(value_647,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_654) ? obj_654 = come_decrement_ref_count(obj_654, ((struct sNode*)obj_654)->finalize, ((struct sNode*)obj_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_655,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_658,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_659) ? node_659 = come_decrement_ref_count(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__313) ? __result_obj__313 = come_decrement_ref_count(__result_obj__313, ((struct sNode*)__result_obj__313)->finalize, ((struct sNode*)__result_obj__313)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__313;
        /*c*/ come_call_finalizer3(value_647,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_654) ? obj_654 = come_decrement_ref_count(obj_654, ((struct sNode*)obj_654)->finalize, ((struct sNode*)obj_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_655,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_658,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_659) ? node_659 = come_decrement_ref_count(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==39) {
        sline_real_660=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_662=0;
                while(                xisdigit(*info->p)) {
                    n_662=n_662*8+*info->p-48;
                    info->p++;
                }
                c_661=n_662;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c_661=10;
                    info->p++;
                    break;
                    case 116:
                    c_661=9;
                    info->p++;
                    break;
                    case 114:
                    c_661=13;
                    info->p++;
                    break;
                    case 97:
                    c_661=7;
                    info->p++;
                    break;
                    case 102:
                    c_661=12;
                    info->p++;
                    break;
                    case 118:
                    c_661=11;
                    info->p++;
                    break;
                    case 98:
                    c_661=8;
                    info->p++;
                    break;
                    case 92:
                    c_661=92;
                    info->p++;
                    break;
                    case 48:
                    c_661=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_663=0;
                        while(                        xisdigit(*info->p)) {
                            n_663=n_663*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_661=n_663;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_664[128];
                        memset(&buf_664, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_664,"0x",128);
                        while(                        *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_665[2];
                            memset(&buf2_665, 0, sizeof(char)                            *(2)                            );
                            buf2_665[0]=*info->p;
                            buf2_665[1]=0;
                            info->p++;
                            strncat(buf_664,buf2_665,128);
                        }
                        n_666=strtoll(buf_664,((void*)0),0);
                        c_661=n_666;
                    }
                    break;
                    default:
                    c_661=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_661=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_660;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2120, "struct sNode");
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value905=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "06str.c", 2120, "struct sCharNode*")),c_661,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result_obj__316 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value908=_inf_value10)));
            /*c*/ come_call_finalizer3(__right_value905,sCharNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value908) ? __right_value908 = come_decrement_ref_count(__right_value908, ((struct sNode*)__right_value908)->finalize, ((struct sNode*)__right_value908)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__316;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_668=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_670=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_671=0;
                while(                xisdigit(*info->p)) {
                    n_671=n_671*8+*info->p-48;
                    info->p++;
                }
                c_669=n_671;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c_669=10;
                    info->p++;
                    break;
                    case 116:
                    c_669=9;
                    info->p++;
                    break;
                    case 114:
                    c_669=13;
                    info->p++;
                    break;
                    case 97:
                    c_669=7;
                    info->p++;
                    break;
                    case 92:
                    c_669=92;
                    info->p++;
                    break;
                    case 48:
                    c_669=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_672=0;
                        while(                        xisdigit(*info->p)) {
                            n_672=n_672*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_669=n_672;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_673[128];
                        memset(&buf_673, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_673,"0x",128);
                        while(                        *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_674[2];
                            memset(&buf2_674, 0, sizeof(char)                            *(2)                            );
                            buf2_674[0]=*info->p;
                            buf2_674[1]=0;
                            info->p++;
                            strncat(buf_673,buf2_674,128);
                        }
                        n_675=strtoll(buf_673,((void*)0),0);
                        c_669=n_675;
                    }
                    break;
                    default:
                    c_669=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_670=(_Bool)0;
            p2_676=*(unsigned char*)info->p;
            if(            p2_676>127) {
                char str_678[6+1];
                memset(&str_678, 0, sizeof(char)                *(6+1)                );
                size_677=((p2_676&128)>>7)+((p2_676&64)>>6)+((p2_676&32)>>5)+((p2_676&16)>>4);
                if(                size_677>6) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_678,info->p,size_677);
                    str_678[size_677]=0;
                    if(                    mbtowc(&c_669,str_678,size_677)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_677;
                    }
                }
            }
            else {
                c_669=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_668;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2262, "struct sNode");
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value910=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "06str.c", 2262, "struct sWCharNode*")),c_669,quote_670,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result_obj__319 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value913=_inf_value11)));
            /*c*/ come_call_finalizer3(__right_value910,sWCharNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value913) ? __right_value913 = come_decrement_ref_count(__right_value913, ((struct sNode*)__right_value913)->finalize, ((struct sNode*)__right_value913)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__319) ? __result_obj__319 = come_decrement_ref_count(__result_obj__319, ((struct sNode*)__result_obj__319)->finalize, ((struct sNode*)__result_obj__319)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__319;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_680=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_681=info->sline;
        value_682=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2273, "struct buffer*"))));
        while(        1) {
            if(            *info->p==34) {
                info->p++;
                p_683=info->p;
                sline_684=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_683;
                    info->sline=sline_684;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_682,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_682,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_682,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_685=info->sline;
                info->sline=sline_681;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_682,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_686=value_682->len;
        wstr_687=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(len_686+1)), "06str.c", 2324, "int*"));
        str_688=value_682->buf;
        if(        mbstowcs(wstr_687,str_688,len_686+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_687[len_686]=0;
        info->sline_real=sline_real_680;
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2336, "struct sNode");
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value918=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "06str.c", 2336, "struct sWStringNode*")),(int*)come_increment_ref_count(wstr_687),sline_681,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result_obj__322 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value922=_inf_value12)));
        /*c*/ come_call_finalizer3(value_682,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (wstr_687 = come_decrement_ref_count(wstr_687, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value918,sWStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value922) ? __right_value922 = come_decrement_ref_count(__right_value922, ((struct sNode*)__right_value922)->finalize, ((struct sNode*)__right_value922)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__322) ? __result_obj__322 = come_decrement_ref_count(__result_obj__322, ((struct sNode*)__result_obj__322)->finalize, ((struct sNode*)__result_obj__322)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__322;
        /*c*/ come_call_finalizer3(value_682,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (wstr_687 = come_decrement_ref_count(wstr_687, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_690=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_691=info->sline;
        exps_692=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2346, "struct list$1sNode$ph*"))));
        value_693=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2347, "struct buffer*"))));
        while(        1) {
            if(            *info->p==34) {
                info->p++;
                p_694=info->p;
                sline_695=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_694;
                    info->sline=sline_695;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_693,37);
                buffer_append_char(value_693,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_693,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_696=0;
                    while(                    xisdigit(*info->p)&&len_696<3) {
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        len_696++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_693,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_697=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_692,(struct sNode*)come_increment_ref_count(exp_697));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_693,"%s");
                    ((exp_697) ? exp_697 = come_decrement_ref_count(exp_697, ((struct sNode*)exp_697)->finalize, ((struct sNode*)exp_697)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_693,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_698=info->sline;
                info->sline=sline_691;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_693,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_690;
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2495, "struct sNode");
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value930=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 2495, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_693)),(struct list$1sNode$ph*)come_increment_ref_count(exps_692),sline_691,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result_obj__323 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value931=_inf_value13)));
        /*c*/ come_call_finalizer3(exps_692,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_693,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value930,sSStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value931) ? __right_value931 = come_decrement_ref_count(__right_value931, ((struct sNode*)__right_value931)->finalize, ((struct sNode*)__right_value931)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__323;
        /*c*/ come_call_finalizer3(exps_692,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_693,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_699=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_700=info->p;
        no_comma_701=info->no_comma;
        info->no_comma=(_Bool)1;
        node_702=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_701;
        p2_703=info->p;
        first_element_source_704=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2514, "struct buffer*"))));
        buffer_append(first_element_source_704,p_700,p2_703-p_700);
        buffer_append_char(first_element_source_704,0);
        list_elements_705=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2519, "struct list$1sNode$ph*"))));
        map_keys_706=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2521, "struct list$1sNode$ph*"))));
        map_elements_707=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2522, "struct list$1sNode$ph*"))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(map_keys_706,(struct sNode*)come_increment_ref_count(node_702));
            no_comma_708=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_709=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_708;
            list$1sNode$ph_push_back(map_elements_707,(struct sNode*)come_increment_ref_count(node2_709));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2545, "struct sNode");
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value943=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2545, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_706),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_707),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result_obj__326 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value948=_inf_value14)));
                ((node2_709) ? node2_709 = come_decrement_ref_count(node2_709, ((struct sNode*)node2_709)->finalize, ((struct sNode*)node2_709)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(first_element_source_704,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_elements_705,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_keys_706,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_elements_707,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value943,sMapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value948) ? __right_value948 = come_decrement_ref_count(__right_value948, ((struct sNode*)__right_value948)->finalize, ((struct sNode*)__right_value948)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__326;
            }
            else {
                expected_next_character(44,info);
                while(                (_Bool)1) {
                    no_comma_711=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_712=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_711;
                    list$1sNode$ph_push_back(map_keys_706,(struct sNode*)come_increment_ref_count(node2_712));
                    expected_next_character(58,info);
                    no_comma_711=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_713=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_711;
                    list$1sNode$ph_push_back(map_elements_707,(struct sNode*)come_increment_ref_count(node3_713));
                    if(                    *info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_712) ? node2_712 = come_decrement_ref_count(node2_712, ((struct sNode*)node2_712)->finalize, ((struct sNode*)node2_712)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        ((node3_713) ? node3_713 = come_decrement_ref_count(node3_713, ((struct sNode*)node3_713)->finalize, ((struct sNode*)node3_713)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    ((node2_712) ? node2_712 = come_decrement_ref_count(node2_712, ((struct sNode*)node2_712)->finalize, ((struct sNode*)node2_712)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node3_713) ? node3_713 = come_decrement_ref_count(node3_713, ((struct sNode*)node3_713)->finalize, ((struct sNode*)node3_713)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2590, "struct sNode");
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value952=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2590, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_706),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_707),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result_obj__327 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value953=_inf_value15)));
                ((node2_709) ? node2_709 = come_decrement_ref_count(node2_709, ((struct sNode*)node2_709)->finalize, ((struct sNode*)node2_709)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(first_element_source_704,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_elements_705,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_keys_706,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_elements_707,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value952,sMapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value953) ? __right_value953 = come_decrement_ref_count(__right_value953, ((struct sNode*)__right_value953)->finalize, ((struct sNode*)__right_value953)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__327) ? __result_obj__327 = come_decrement_ref_count(__result_obj__327, ((struct sNode*)__result_obj__327)->finalize, ((struct sNode*)__result_obj__327)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__327;
            }
            ((node2_709) ? node2_709 = come_decrement_ref_count(node2_709, ((struct sNode*)node2_709)->finalize, ((struct sNode*)node2_709)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements_705,(struct sNode*)come_increment_ref_count(node_702));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements_705,(struct sNode*)come_increment_ref_count(node_702));
            while(            (_Bool)1) {
                no_comma_714=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_715=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_714;
                list$1sNode$ph_push_back(list_elements_705,(struct sNode*)come_increment_ref_count(node2_715));
                if(                *info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_715) ? node2_715 = come_decrement_ref_count(node2_715, ((struct sNode*)node2_715)->finalize, ((struct sNode*)node2_715)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                ((node2_715) ? node2_715 = come_decrement_ref_count(node2_715, ((struct sNode*)node2_715)->finalize, ((struct sNode*)node2_715)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNode$ph_length(list_elements_705)>0) {
            info->sline_real=sline_real_699;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2642, "struct sNode");
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value956=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "06str.c", 2642, "struct sListNode*")),(struct list$1sNode$ph*)come_increment_ref_count(list_elements_705),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result_obj__330 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value960=_inf_value16)));
            ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(first_element_source_704,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(list_elements_705,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(map_keys_706,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(map_elements_707,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value956,sListNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value960) ? __right_value960 = come_decrement_ref_count(__right_value960, ((struct sNode*)__right_value960)->finalize, ((struct sNode*)__right_value960)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__330) ? __result_obj__330 = come_decrement_ref_count(__result_obj__330, ((struct sNode*)__result_obj__330)->finalize, ((struct sNode*)__result_obj__330)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__330;
        }
        else {
        }
        ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(first_element_source_704,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(list_elements_705,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(map_keys_706,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(map_elements_707,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        node_717=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__331 = (struct sNode*)come_increment_ref_count(node_717);
        ((node_717) ? node_717 = come_decrement_ref_count(node_717, ((struct sNode*)node_717)->finalize, ((struct sNode*)node_717)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__331) ? __result_obj__331 = come_decrement_ref_count(__result_obj__331, ((struct sNode*)__result_obj__331)->finalize, ((struct sNode*)__result_obj__331)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__331;
        ((node_717) ? node_717 = come_decrement_ref_count(node_717, ((struct sNode*)node_717)->finalize, ((struct sNode*)node_717)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__332 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__332) ? __result_obj__332 = come_decrement_ref_count(__result_obj__332, ((struct sNode*)__result_obj__332)->finalize, ((struct sNode*)__result_obj__332)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__332;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
struct sSStringNode* __result_obj__305;
void* __right_value789 = (void*)0;
struct sSStringNode* result_618;
void* __right_value790 = (void*)0;
char* __dec_obj152;
void* __right_value791 = (void*)0;
char* __dec_obj153;
void* __right_value792 = (void*)0;
struct list$1sNode$ph* __dec_obj154;
struct sSStringNode* __result_obj__306;
    if(    self==(void*)0) {
        __result_obj__305 = (void*)0;
        return __result_obj__305;
    }
    result_618=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*"));
    if(    self!=((void*)0)) {
        result_618->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_618->sname,
        result_618->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSStringNode_clone", 5, "char*"));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_618->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj153=result_618->value,
        result_618->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sSStringNode_clone", 7, "char*"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj154=result_618->exps,
        result_618->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        /*b*/ come_call_finalizer3(__dec_obj154,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__306 = result_618;
    /*c*/ come_call_finalizer3(result_618,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__306;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
struct sBufferNode* __result_obj__309;
void* __right_value804 = (void*)0;
struct sBufferNode* result_633;
void* __right_value805 = (void*)0;
char* __dec_obj155;
void* __right_value806 = (void*)0;
struct buffer* __dec_obj156;
struct sBufferNode* __result_obj__310;
    if(    self==(void*)0) {
        __result_obj__309 = (void*)0;
        return __result_obj__309;
    }
    result_633=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*"));
    if(    self!=((void*)0)) {
        result_633->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_633->sname,
        result_633->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBufferNode_clone", 5, "char*"));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_633->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj156=result_633->value,
        result_633->value=(struct buffer*)come_increment_ref_count(buffer_clone(self->value));
        /*b*/ come_call_finalizer3(__dec_obj156,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_633->size=self->size;
    }
    __result_obj__310 = result_633;
    /*c*/ come_call_finalizer3(result_633,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__310;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
struct sCharNode* __result_obj__314;
void* __right_value906 = (void*)0;
struct sCharNode* result_667;
void* __right_value907 = (void*)0;
char* __dec_obj157;
struct sCharNode* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__314 = (void*)0;
        return __result_obj__314;
    }
    result_667=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*"));
    if(    self!=((void*)0)) {
        result_667->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result_667->sname,
        result_667->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCharNode_clone", 5, "char*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_667->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_667->value=self->value;
    }
    __result_obj__315 = result_667;
    /*c*/ come_call_finalizer3(result_667,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__315;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
struct sWCharNode* __result_obj__317;
void* __right_value911 = (void*)0;
struct sWCharNode* result_679;
void* __right_value912 = (void*)0;
char* __dec_obj158;
struct sWCharNode* __result_obj__318;
    if(    self==(void*)0) {
        __result_obj__317 = (void*)0;
        return __result_obj__317;
    }
    result_679=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*"));
    if(    self!=((void*)0)) {
        result_679->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj158=result_679->sname,
        result_679->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWCharNode_clone", 5, "char*"));
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_679->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_679->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_679->quote=self->quote;
    }
    __result_obj__318 = result_679;
    /*c*/ come_call_finalizer3(result_679,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
struct sWStringNode* __result_obj__320;
void* __right_value919 = (void*)0;
struct sWStringNode* result_689;
void* __right_value920 = (void*)0;
char* __dec_obj159;
void* __right_value921 = (void*)0;
int* __dec_obj160;
struct sWStringNode* __result_obj__321;
    if(    self==(void*)0) {
        __result_obj__320 = (void*)0;
        return __result_obj__320;
    }
    result_689=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*"));
    if(    self!=((void*)0)) {
        result_689->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj159=result_689->sname,
        result_689->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWStringNode_clone", 5, "char*"));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_689->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj160=result_689->value,
        result_689->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 7, "int*"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__321 = result_689;
    /*c*/ come_call_finalizer3(result_689,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__321;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
struct sMapNode* __result_obj__324;
void* __right_value944 = (void*)0;
struct sMapNode* result_710;
void* __right_value945 = (void*)0;
char* __dec_obj161;
void* __right_value946 = (void*)0;
struct list$1sNode$ph* __dec_obj162;
void* __right_value947 = (void*)0;
struct list$1sNode$ph* __dec_obj163;
struct sMapNode* __result_obj__325;
    if(    self==(void*)0) {
        __result_obj__324 = (void*)0;
        return __result_obj__324;
    }
    result_710=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*"));
    if(    self!=((void*)0)) {
        result_710->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_710->sname,
        result_710->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMapNode_clone", 5, "char*"));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_710->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj162=result_710->map_key_elements,
        result_710->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_key_elements));
        /*b*/ come_call_finalizer3(__dec_obj162,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj163=result_710->map_elements,
        result_710->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_elements));
        /*b*/ come_call_finalizer3(__dec_obj163,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__325 = result_710;
    /*c*/ come_call_finalizer3(result_710,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__325;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
struct sListNode* __result_obj__328;
void* __right_value957 = (void*)0;
struct sListNode* result_716;
void* __right_value958 = (void*)0;
char* __dec_obj164;
void* __right_value959 = (void*)0;
struct list$1sNode$ph* __dec_obj165;
struct sListNode* __result_obj__329;
    if(    self==(void*)0) {
        __result_obj__328 = (void*)0;
        return __result_obj__328;
    }
    result_716=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*"));
    if(    self!=((void*)0)) {
        result_716->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_716->sname,
        result_716->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sListNode_clone", 5, "char*"));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_716->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj165=result_716->list_elements,
        result_716->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->list_elements));
        /*b*/ come_call_finalizer3(__dec_obj165,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__329 = result_716;
    /*c*/ come_call_finalizer3(result_716,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__329;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_718;
char* p_719;
char* name_720;
void* __right_value964 = (void*)0;
char* __dec_obj166;
_Bool no_comma_721;
void* __right_value965 = (void*)0;
struct sNode* node_722;
void* __right_value966 = (void*)0;
struct sNode* __dec_obj167;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value982 = (void*)0;
struct sNode* __result_obj__338;
name_720 = (void*)0;
    tuple_elements_718=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2657, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    while(    (_Bool)1) {
        p_719=info->p;
        if(        named_tuple) {
            __dec_obj166=name_720,
            name_720=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_721=info->no_comma;
        info->no_comma=(_Bool)1;
        node_722=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj167=node_722,
        node_722=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_722),info));
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_721;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements_718,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2676, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)come_memdup(name_720, "06str.c", 2676, "char*")),(struct sNode*)come_increment_ref_count(node_722))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name_720 = come_decrement_ref_count(name_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_722) ? node_722 = come_decrement_ref_count(node_722, ((struct sNode*)node_722)->finalize, ((struct sNode*)node_722)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        (name_720 = come_decrement_ref_count(name_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_722) ? node_722 = come_decrement_ref_count(node_722, ((struct sNode*)node_722)->finalize, ((struct sNode*)node_722)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2693, "struct sNode");
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value974=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "06str.c", 2693, "struct sTupleNode*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements_718),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result_obj__338 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value982=_inf_value17)));
    /*c*/ come_call_finalizer3(tuple_elements_718,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value974,sTupleNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value982) ? __right_value982 = come_decrement_ref_count(__right_value982, ((struct sNode*)__right_value982)->finalize, ((struct sNode*)__right_value982)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__338) ? __result_obj__338 = come_decrement_ref_count(__result_obj__338, ((struct sNode*)__result_obj__338)->finalize, ((struct sNode*)__result_obj__338)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__338;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value967 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_723;
struct tuple2$2char$phsNode$ph* __dec_obj168;
void* __right_value968 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_724;
struct tuple2$2char$phsNode$ph* __dec_obj169;
void* __right_value969 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_725;
struct tuple2$2char$phsNode$ph* __dec_obj170;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__333;
    if(    self->len==0) {
        litem_723=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value967=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_723->prev=((void*)0);
        litem_723->next=((void*)0);
        __dec_obj168=litem_723->item,
        litem_723->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj168,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_723;
        self->head=litem_723;
    }
    else if(    self->len==1) {
        litem_724=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value968=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_724->prev=self->head;
        litem_724->next=((void*)0);
        __dec_obj169=litem_724->item,
        litem_724->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj169,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_724;
        self->head->next=litem_724;
    }
    else {
        litem_725=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value969=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_725->prev=self->tail;
        litem_725->next=((void*)0);
        __dec_obj170=litem_725->item,
        litem_725->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj170,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_725;
        self->tail=litem_725;
    }
    self->len++;
    __result_obj__333 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__333;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
struct sTupleNode* __result_obj__334;
void* __right_value975 = (void*)0;
struct sTupleNode* result_726;
void* __right_value976 = (void*)0;
char* __dec_obj171;
void* __right_value981 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj172;
struct sTupleNode* __result_obj__337;
    if(    self==(void*)0) {
        __result_obj__334 = (void*)0;
        return __result_obj__334;
    }
    result_726=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*"));
    if(    self!=((void*)0)) {
        result_726->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj171=result_726->sname,
        result_726->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTupleNode_clone", 5, "char*"));
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_726->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj172=result_726->tuple_elements,
        result_726->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj172,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__337 = result_726;
    /*c*/ come_call_finalizer3(result_726,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__337;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__335;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_727;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_728;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__336;
    if(    self==((void*)0)) {
        __result_obj__335 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__335,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__335;
    }
    result_727=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_728=self->head;
    while(    it_728!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_727,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_728->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_727,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_728->item)));
        }
        it_728=it_728->next;
    }
    __result_obj__336 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_727);
    /*c*/ come_call_finalizer3(result_727,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__336,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__336;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct list$1sNode$ph* tuple_elements_729;
struct sNode* node_730;
void* __right_value985 = (void*)0;
struct sNode* node2_731;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value991 = (void*)0;
struct sNode* __result_obj__341;
    tuple_elements_729=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2698, "struct list$1sNode$ph*"))));
    node_730=(struct sNode*)come_increment_ref_count(exp);
    list$1sNode$ph_push_back(tuple_elements_729,(struct sNode*)come_increment_ref_count(node_730));
    node2_731=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph_push_back(tuple_elements_729,(struct sNode*)come_increment_ref_count(node2_731));
    _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2708, "struct sNode");
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value987=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc_v2(1, sizeof(struct sSomeNode)*(1), "06str.c", 2708, "struct sSomeNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_729),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result_obj__341 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value991=_inf_value18)));
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(tuple_elements_729,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_730) ? node_730 = come_decrement_ref_count(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_731) ? node2_731 = come_decrement_ref_count(node2_731, ((struct sNode*)node2_731)->finalize, ((struct sNode*)node2_731)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value987,sSomeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value991) ? __right_value991 = come_decrement_ref_count(__right_value991, ((struct sNode*)__right_value991)->finalize, ((struct sNode*)__right_value991)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__341) ? __result_obj__341 = come_decrement_ref_count(__result_obj__341, ((struct sNode*)__result_obj__341)->finalize, ((struct sNode*)__result_obj__341)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__341;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
struct sSomeNode* __result_obj__339;
void* __right_value988 = (void*)0;
struct sSomeNode* result_732;
void* __right_value989 = (void*)0;
char* __dec_obj173;
void* __right_value990 = (void*)0;
struct list$1sNode$ph* __dec_obj174;
struct sSomeNode* __result_obj__340;
    if(    self==(void*)0) {
        __result_obj__339 = (void*)0;
        return __result_obj__339;
    }
    result_732=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc_v2(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode*"));
    if(    self!=((void*)0)) {
        result_732->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj173=result_732->sname,
        result_732->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSomeNode_clone", 5, "char*"));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_732->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj174=result_732->tuple_elements,
        result_732->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj174,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__340 = result_732;
    /*c*/ come_call_finalizer3(result_732,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__340;
}

struct sNode* parse_some(struct sInfo* info){
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct list$1sNode$ph* tuple_elements_733;
void* __right_value994 = (void*)0;
struct sNode* node_734;
void* __right_value995 = (void*)0;
struct sNode* __dec_obj175;
void* __right_value996 = (void*)0;
struct sNode* node2_735;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value999 = (void*)0;
struct sNode* __result_obj__342;
    tuple_elements_733=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2713, "struct list$1sNode$ph*"))));
    expected_next_character(40,info);
    node_734=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj175=node_734,
    node_734=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_734),info));
    (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    expected_next_character(41,info);
    list$1sNode$ph_push_back(tuple_elements_733,(struct sNode*)come_increment_ref_count(node_734));
    node2_735=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph_push_back(tuple_elements_733,(struct sNode*)come_increment_ref_count(node2_735));
    _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2726, "struct sNode");
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value998=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc_v2(1, sizeof(struct sSomeNode)*(1), "06str.c", 2726, "struct sSomeNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_733),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result_obj__342 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value999=_inf_value19)));
    /*c*/ come_call_finalizer3(tuple_elements_733,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_734) ? node_734 = come_decrement_ref_count(node_734, ((struct sNode*)node_734)->finalize, ((struct sNode*)node_734)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_735) ? node2_735 = come_decrement_ref_count(node2_735, ((struct sNode*)node2_735)->finalize, ((struct sNode*)node2_735)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value998,sSomeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value999) ? __right_value999 = come_decrement_ref_count(__right_value999, ((struct sNode*)__right_value999)->finalize, ((struct sNode*)__right_value999)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__342) ? __result_obj__342 = come_decrement_ref_count(__result_obj__342, ((struct sNode*)__result_obj__342)->finalize, ((struct sNode*)__result_obj__342)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__342;
}

struct sNode* parse_none(struct sInfo* info){
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct list$1sNode$ph* tuple_elements_736;
void* __right_value1002 = (void*)0;
struct sNode* node_737;
void* __right_value1003 = (void*)0;
struct sNode* __dec_obj176;
void* __right_value1004 = (void*)0;
struct sNode* node2_738;
struct sNode* node3_739;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1010 = (void*)0;
struct sNode* __result_obj__345;
    tuple_elements_736=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2731, "struct list$1sNode$ph*"))));
    expected_next_character(40,info);
    node_737=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj176=node_737,
    node_737=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_737),info));
    (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    expected_next_character(41,info);
    node2_738=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNode$ph_push_back(tuple_elements_736,(struct sNode*)come_increment_ref_count(node2_738));
    node3_739=(struct sNode*)come_increment_ref_count(node_737);
    list$1sNode$ph_push_back(tuple_elements_736,(struct sNode*)come_increment_ref_count(node3_739));
    _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2746, "struct sNode");
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1006=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc_v2(1, sizeof(struct sNoneNode)*(1), "06str.c", 2746, "struct sNoneNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_736),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result_obj__345 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1010=_inf_value20)));
    /*c*/ come_call_finalizer3(tuple_elements_736,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_737) ? node_737 = come_decrement_ref_count(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_738) ? node2_738 = come_decrement_ref_count(node2_738, ((struct sNode*)node2_738)->finalize, ((struct sNode*)node2_738)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node3_739) ? node3_739 = come_decrement_ref_count(node3_739, ((struct sNode*)node3_739)->finalize, ((struct sNode*)node3_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value1006,sNoneNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value1010) ? __right_value1010 = come_decrement_ref_count(__right_value1010, ((struct sNode*)__right_value1010)->finalize, ((struct sNode*)__right_value1010)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__345) ? __result_obj__345 = come_decrement_ref_count(__result_obj__345, ((struct sNode*)__result_obj__345)->finalize, ((struct sNode*)__result_obj__345)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__345;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
struct sNoneNode* __result_obj__343;
void* __right_value1007 = (void*)0;
struct sNoneNode* result_740;
void* __right_value1008 = (void*)0;
char* __dec_obj177;
void* __right_value1009 = (void*)0;
struct list$1sNode$ph* __dec_obj178;
struct sNoneNode* __result_obj__344;
    if(    self==(void*)0) {
        __result_obj__343 = (void*)0;
        return __result_obj__343;
    }
    result_740=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc_v2(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode*"));
    if(    self!=((void*)0)) {
        result_740->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj177=result_740->sname,
        result_740->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNoneNode_clone", 5, "char*"));
        __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_740->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj178=result_740->tuple_elements,
        result_740->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj178,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__344 = result_740;
    /*c*/ come_call_finalizer3(result_740,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__344;
}


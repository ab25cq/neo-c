/// c_include definition ///
/// typedef definition ///
typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long  int __u_long;

typedef unsigned short int __uint16_t;

typedef long long int __int64_t;

typedef unsigned long long int __uint64_t;

typedef long long int __quad_t;

typedef unsigned long long int __u_quad_t;

typedef unsigned long  int __ino_t;

typedef unsigned long long int  __ino64_t  ;

typedef long long int  __off64_t  ;

typedef long long int  __loff_t  ;

typedef struct __fsid_t  __fsid_t  ;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int    ;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long int    ;

typedef unsigned long long int    ;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

typedef union anonymous_typeZ1 __mbstate_t;

typedef union anonymous_typeZ1  __darwin_mbstate_t  ;

typedef long __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int  __darwin_rune_t  ;

typedef unsigned int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int  __darwin_socklen_t  ;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long long int  __darwin_blkcnt_t  ;

typedef int  __darwin_blksize_t  ;

typedef int  __darwin_dev_t  ;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int  __darwin_gid_t  ;

typedef unsigned int  __darwin_id_t  ;

typedef unsigned long long int  __darwin_ino64_t  ;

typedef unsigned long long int  __darwin_ino_t  ;

typedef unsigned int  __darwin_mach_port_name_t  ;

typedef unsigned int  __darwin_mach_port_t  ;

typedef unsigned short int  __darwin_mode_t  ;

typedef long long int  __darwin_off_t  ;

typedef int  __darwin_pid_t  ;

typedef unsigned int  __darwin_sigset_t  ;

typedef int  __darwin_suseconds_t  ;

typedef unsigned int  __darwin_uid_t  ;

typedef unsigned int  __darwin_useconds_t  ;

typedef struct _opaque_pthread_attr_t  __darwin_pthread_attr_t  ;

typedef struct _opaque_pthread_cond_t  __darwin_pthread_cond_t  ;

typedef struct _opaque_pthread_condattr_t  __darwin_pthread_condattr_t  ;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t  __darwin_pthread_mutex_t  ;

typedef struct _opaque_pthread_mutexattr_t  __darwin_pthread_mutexattr_t  ;

typedef struct _opaque_pthread_once_t  __darwin_pthread_once_t  ;

typedef struct _opaque_pthread_rwlock_t  __darwin_pthread_rwlock_t  ;

typedef struct _opaque_pthread_rwlockattr_t  __darwin_pthread_rwlockattr_t  ;

typedef struct _opaque_pthread_t*  __darwin_pthread_t  ;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int  __darwin_wctype_t  ;

typedef unsigned long long int  ino_t  ;

typedef struct anonymous_typeX2 DIR;

typedef struct anonymous_typeX3 fenv_t;

typedef unsigned short int fexcept_t;

typedef unsigned long  int  size_t  ;

typedef struct anonymous_typeX4 glob_t;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  long u_int64_t;

typedef long long  register_t  ;

typedef long  intptr_t  ;

typedef unsigned long  int uintptr_t;

typedef unsigned long  long  user_addr_t  ;

typedef unsigned long  long  user_size_t  ;

typedef long long  user_ssize_t  ;

typedef long long  user_long_t  ;

typedef unsigned long  long  user_ulong_t  ;

typedef long long  user_time_t  ;

typedef long long  user_off_t  ;

typedef unsigned long  long  syscall_arg_t  ;

typedef unsigned char u_char;

typedef unsigned short int u_short;

typedef unsigned int u_int;

typedef unsigned long  int u_long;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef unsigned long  long  u_quad_t  ;

typedef long long  quad_t  ;

typedef long long*  qaddr_t  ;

typedef char* caddr_t;

typedef int  daddr_t  ;

typedef int  dev_t  ;

typedef unsigned int  fixpt_t  ;

typedef long long int  blkcnt_t  ;

typedef int  blksize_t  ;

typedef unsigned int  gid_t  ;

typedef unsigned int  in_addr_t  ;

typedef unsigned short int  in_port_t  ;

typedef unsigned long long int  ino64_t  ;

typedef int  key_t  ;

typedef unsigned short int  mode_t  ;

typedef unsigned short int  nlink_t  ;

typedef unsigned int  id_t  ;

typedef int  pid_t  ;

typedef long long int  off_t  ;

typedef int  segsz_t  ;

typedef int  swblk_t  ;

typedef unsigned int  uid_t  ;

typedef unsigned long  int  clock_t  ;

typedef long  ssize_t  ;

typedef long  time_t  ;

typedef unsigned int  useconds_t  ;

typedef int  suseconds_t  ;

typedef unsigned long  int  rsize_t  ;

typedef int errno_t;

typedef struct fd_set  fd_set  ;

typedef int  fd_mask  ;

typedef struct _opaque_pthread_attr_t  pthread_attr_t  ;

typedef struct _opaque_pthread_cond_t  pthread_cond_t  ;

typedef struct _opaque_pthread_condattr_t  pthread_condattr_t  ;

typedef struct _opaque_pthread_mutex_t  pthread_mutex_t  ;

typedef struct _opaque_pthread_mutexattr_t  pthread_mutexattr_t  ;

typedef struct _opaque_pthread_once_t  pthread_once_t  ;

typedef struct _opaque_pthread_rwlock_t  pthread_rwlock_t  ;

typedef struct _opaque_pthread_rwlockattr_t  pthread_rwlockattr_t  ;

typedef struct _opaque_pthread_t*  pthread_t  ;

typedef unsigned long  int  pthread_key_t  ;

typedef unsigned int  fsblkcnt_t  ;

typedef unsigned int  fsfilcnt_t  ;

typedef union anonymous_typeZ1  mbstate_t  ;

typedef int  ct_rune_t  ;

typedef int  rune_t  ;

typedef int  wchar_t  ;

typedef __builtin_va_list  __gnuc_va_list  ;

typedef __darwin_va_list  va_list  ;

typedef long long int  fpos_t  ;

typedef struct __sFILE  FILE  ;

typedef enum anonymous_typeY8 clockid_t;

typedef unsigned int  wint_t  ;

typedef unsigned int  wctype_t  ;

typedef struct anonymous_typeX9 _RuneEntry;

typedef struct anonymous_typeX10 _RuneRange;

typedef struct anonymous_typeX11 _RuneCharClass;

typedef struct anonymous_typeX12 _RuneLocale;

typedef _Bool __iconv_bool;

typedef struct __tag_iconv_t*  iconv_t  ;

typedef struct anonymous_typeX13 iconv_allocation_t;

typedef void (*iconv_unicode_char_hook)(unsigned int,void*);

typedef void (*iconv_wide_char_hook)(int ,void*);

typedef void (*iconv_unicode_mb_to_uc_fallback)(const char*,unsigned long  int ,void (*)(const unsigned int*,unsigned long  int ,void*),void*,void*);

typedef void (*iconv_unicode_uc_to_mb_fallback)(unsigned int,void (*)(const char*,unsigned long  int ,void*),void*,void*);

typedef void (*iconv_wchar_mb_to_wc_fallback)(const char*,unsigned long  int ,void (*)(const int* ,unsigned long  int ,void*),void*,void*);

typedef void (*iconv_wchar_wc_to_mb_fallback)(int ,void (*)(const char*,unsigned long  int ,void*),void*,void*);

typedef int  nl_item  ;

typedef long  ptrdiff_t  ;

typedef long  double max_align_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef char  int_least8_t  ;

typedef short  int_least16_t  ;

typedef int  int_least32_t  ;

typedef long long  int_least64_t  ;

typedef unsigned char  uint_least8_t  ;

typedef unsigned short int  uint_least16_t  ;

typedef unsigned int  uint_least32_t  ;

typedef unsigned long  long  uint_least64_t  ;

typedef char  int_fast8_t  ;

typedef short  int_fast16_t  ;

typedef int  int_fast32_t  ;

typedef long long  int_fast64_t  ;

typedef unsigned char  uint_fast8_t  ;

typedef unsigned short int  uint_fast16_t  ;

typedef unsigned int  uint_fast32_t  ;

typedef unsigned long  long  uint_fast64_t  ;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef enum memory_order memory_order;

typedef struct atomic_flag  atomic_flag  ;

typedef void (*os_function_t)(void*);

typedef unsigned int  sigset_t  ;

typedef void* posix_spawnattr_t;

typedef void* posix_spawn_file_actions_t;

typedef int boolean_t;

typedef unsigned int  natural_t  ;

typedef int integer_t;

typedef unsigned long  int  vm_offset_t  ;

typedef unsigned long  int  vm_size_t  ;

typedef unsigned long  long  mach_vm_address_t  ;

typedef unsigned long  long  mach_vm_offset_t  ;

typedef unsigned long  long  mach_vm_size_t  ;

typedef unsigned long  long  vm_map_offset_t  ;

typedef unsigned long  long  vm_map_address_t  ;

typedef unsigned long  long  vm_map_size_t  ;

typedef unsigned int  vm32_offset_t  ;

typedef unsigned int  vm32_address_t  ;

typedef unsigned int  vm32_size_t  ;

typedef unsigned long  int  mach_port_context_t  ;

typedef unsigned int  mach_port_name_t  ;

typedef unsigned int*  mach_port_name_array_t  ;

typedef unsigned int  mach_port_t  ;

typedef unsigned int*  mach_port_array_t  ;

typedef unsigned int  mach_port_right_t  ;

typedef unsigned int  mach_port_type_t  ;

typedef unsigned int*  mach_port_type_array_t  ;

typedef unsigned int  mach_port_urefs_t  ;

typedef int  mach_port_delta_t  ;

typedef unsigned int  mach_port_seqno_t  ;

typedef unsigned int  mach_port_mscount_t  ;

typedef unsigned int  mach_port_msgcount_t  ;

typedef unsigned int  mach_port_rights_t  ;

typedef unsigned int mach_port_srights_t;

typedef struct mach_port_status  mach_port_status_t  ;

typedef struct mach_port_limits  mach_port_limits_t  ;

typedef struct mach_port_info_ext  mach_port_info_ext_t  ;

typedef struct mach_port_guard_info  mach_port_guard_info_t  ;

typedef int*  mach_port_info_t  ;

typedef int mach_port_flavor_t;

typedef struct mach_port_qos  mach_port_qos_t  ;

typedef struct mach_service_port_info  mach_service_port_info_data_t  ;

typedef struct mach_service_port_info*  mach_service_port_info_t  ;

typedef unsigned int  mpo_flags_t  ;

typedef struct mach_port_options  mach_port_options_t  ;

typedef struct mach_port_options*  mach_port_options_ptr_t  ;

typedef int kern_return_t;

typedef unsigned int  mach_msg_timeout_t  ;

typedef unsigned int mach_msg_bits_t;

typedef unsigned int  mach_msg_size_t  ;

typedef int  mach_msg_id_t  ;

typedef unsigned int mach_msg_priority_t;

typedef unsigned int mach_msg_type_name_t;

typedef unsigned int mach_msg_copy_options_t;

typedef unsigned int mach_msg_guard_flags_t;

typedef unsigned int mach_msg_descriptor_type_t;

typedef struct anonymous_typeX16 mach_msg_type_descriptor_t;

typedef struct anonymous_typeX17 mach_msg_port_descriptor_t;

typedef struct anonymous_typeX18 mach_msg_ool_descriptor32_t;

typedef struct anonymous_typeX19 mach_msg_ool_descriptor64_t;

typedef struct anonymous_typeX20 mach_msg_ool_descriptor_t;

typedef struct anonymous_typeX21 mach_msg_ool_ports_descriptor32_t;

typedef struct anonymous_typeX22 mach_msg_ool_ports_descriptor64_t;

typedef struct anonymous_typeX23 mach_msg_ool_ports_descriptor_t;

typedef struct anonymous_typeX24 mach_msg_guarded_port_descriptor32_t;

typedef struct anonymous_typeX25 mach_msg_guarded_port_descriptor64_t;

typedef struct anonymous_typeX26 mach_msg_guarded_port_descriptor_t;

typedef union anonymous_typeZ27 mach_msg_descriptor_t;

typedef struct anonymous_typeX28 mach_msg_body_t;

typedef struct anonymous_typeX29 mach_msg_header_t;

typedef struct anonymous_typeX30 mach_msg_base_t;

typedef unsigned int mach_msg_trailer_type_t;

typedef unsigned int mach_msg_trailer_size_t;

typedef char* mach_msg_trailer_info_t;

typedef struct anonymous_typeX31 mach_msg_trailer_t;

typedef struct anonymous_typeX32 mach_msg_seqno_trailer_t;

typedef struct anonymous_typeX33 security_token_t;

typedef struct anonymous_typeX34 mach_msg_security_trailer_t;

typedef struct anonymous_typeX35 audit_token_t;

typedef struct anonymous_typeX36 mach_msg_audit_trailer_t;

typedef struct anonymous_typeX37 mach_msg_context_trailer_t;

typedef struct anonymous_typeX38 msg_labels_t;

typedef int mach_msg_filter_id;

typedef struct anonymous_typeX39 mach_msg_mac_trailer_t;

typedef struct anonymous_typeX39  mach_msg_max_trailer_t  ;

typedef struct anonymous_typeX34  mach_msg_format_0_trailer_t  ;

typedef int  mach_msg_options_t  ;

typedef struct anonymous_typeX40 mach_msg_empty_send_t;

typedef struct anonymous_typeX41 mach_msg_empty_rcv_t;

typedef union anonymous_typeZ42 mach_msg_empty_t;

typedef unsigned int  mach_msg_type_size_t  ;

typedef unsigned int  mach_msg_type_number_t  ;

typedef int  mach_msg_option_t  ;

typedef int  mach_msg_return_t  ;

typedef unsigned long  int  pointer_t  ;

typedef unsigned long  int  vm_address_t  ;

typedef unsigned long  long  addr64_t  ;

typedef unsigned int  reg64_t  ;

typedef unsigned int  ppnum_t  ;

typedef unsigned int  vm_map_t  ;

typedef unsigned int  vm_map_read_t  ;

typedef unsigned int  vm_map_inspect_t  ;

typedef unsigned int  upl_t  ;

typedef unsigned int  vm_named_entry_t  ;

typedef unsigned long  long*  mach_vm_offset_list_t  ;

typedef unsigned long  long  vm_object_offset_t  ;

typedef unsigned long  long  vm_object_size_t  ;

typedef struct mach_vm_range*  mach_vm_range_t  ;

typedef unsigned int  mach_vm_range_flavor_t  ;

typedef unsigned long  long  mach_vm_range_flags_t  ;

typedef unsigned short int  mach_vm_range_tag_t  ;

typedef struct anonymous_typeX43 mach_vm_range_recipe_v1_t;

typedef struct anonymous_typeX43  mach_vm_range_recipe_t  ;

typedef unsigned char*  mach_vm_range_recipes_raw_t  ;

typedef struct arm_state_hdr  arm_state_hdr_t  ;

typedef struct __darwin_arm_thread_state  arm_thread_state_t  ;

typedef struct __darwin_arm_thread_state  arm_thread_state32_t  ;

typedef struct __darwin_arm_thread_state64  arm_thread_state64_t  ;

typedef struct arm_unified_thread_state  arm_unified_thread_state_t  ;

typedef struct __darwin_arm_vfp_state  arm_vfp_state_t  ;

typedef struct __darwin_arm_neon_state  arm_neon_state_t  ;

typedef struct __darwin_arm_neon_state  arm_neon_state32_t  ;

typedef struct __darwin_arm_neon_state64  arm_neon_state64_t  ;

typedef struct __darwin_arm_exception_state  arm_exception_state_t  ;

typedef struct __darwin_arm_exception_state  arm_exception_state32_t  ;

typedef struct __darwin_arm_exception_state64  arm_exception_state64_t  ;

typedef struct __darwin_arm_exception_state64_v2  arm_exception_state64_v2_t  ;

typedef struct __darwin_arm_debug_state32  arm_debug_state32_t  ;

typedef struct __darwin_arm_debug_state64  arm_debug_state64_t  ;

typedef struct __arm_pagein_state  arm_pagein_state_t  ;

typedef struct __darwin_arm_sme_state  arm_sme_state_t  ;

typedef struct __darwin_arm_sve_z_state  arm_sve_z_state_t  ;

typedef struct __darwin_arm_sve_p_state  arm_sve_p_state_t  ;

typedef struct __darwin_arm_sme_za_state  arm_sme_za_state_t  ;

typedef struct __darwin_arm_sme2_state  arm_sme2_state_t  ;

typedef struct __arm_legacy_debug_state  arm_debug_state_t  ;

typedef unsigned int*  thread_state_t  ;

typedef int thread_state_flavor_t;

typedef int*  thread_state_flavor_array_t  ;

typedef unsigned int  ipc_info_object_type_t  ;

typedef struct ipc_info_space  ipc_info_space_t  ;

typedef struct ipc_info_space_basic  ipc_info_space_basic_t  ;

typedef struct ipc_info_name  ipc_info_name_t  ;

typedef struct ipc_info_name*  ipc_info_name_array_t  ;

typedef struct ipc_info_tree_name  ipc_info_tree_name_t  ;

typedef struct ipc_info_tree_name*  ipc_info_tree_name_array_t  ;

typedef struct ipc_info_port  ipc_info_port_t  ;

typedef struct ipc_info_port*  exception_handler_info_array_t  ;

typedef int exception_type_t;

typedef int  exception_data_type_t  ;

typedef long long  mach_exception_data_type_t  ;

typedef int exception_behavior_t;

typedef int*  exception_data_t  ;

typedef long long*  mach_exception_data_t  ;

typedef unsigned int exception_mask_t;

typedef unsigned int*  exception_mask_array_t  ;

typedef int*  exception_behavior_array_t  ;

typedef int*  exception_flavor_array_t  ;

typedef unsigned int*  exception_port_array_t  ;

typedef struct ipc_info_port*  exception_port_info_array_t  ;

typedef long long  mach_exception_code_t  ;

typedef long long  mach_exception_subcode_t  ;

typedef int  cpu_type_t  ;

typedef int  cpu_subtype_t  ;

typedef int  cpu_threadtype_t  ;

typedef struct anonymous_typeX46 wordexp_t;

/// previous struct definition ///
struct _telldir;

struct dirent;

struct stat;

struct __sFILEX;

struct __tag_iconv_t;

/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
};

typedef unsigned char __darwin_uuid_t[16];

typedef char __darwin_uuid_string_t[37];

struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec*  __next  ;
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
    struct __darwin_pthread_handler_rec*  __cleanup_stack  ;
    char __opaque[8176];
};

#pragma pack(4)
struct dirent
{
    unsigned long long int  d_ino  ;
    unsigned long long int  d_seekoff  ;
    unsigned short int  d_reclen  ;
    unsigned short int  d_namlen  ;
    unsigned char  d_type  ;
    char d_name[1024];
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX2
{
    int __dd_fd;
    long __dd_loc;
    long __dd_size;
    char* __dd_buf;
    int __dd_len;
    long __dd_seek;
    long __attribute__((__unused__))  __padding __attribute__((__unused__)) ;
    int __dd_flags;
    struct _opaque_pthread_mutex_t  __dd_lock  ;
    struct _telldir*  __dd_td  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX3
{
    unsigned long  long __fpsr;
    unsigned long  long __fpcr;
};
#pragma pack(pop)
enum { __fpcr_trap_invalid=(0x00000100),
__fpcr_trap_divbyzero=(0x00000200),
__fpcr_trap_overflow=(0x00000400),
__fpcr_trap_underflow=(0x00000800),
__fpcr_trap_inexact=(0x00001000),
__fpcr_trap_denormal=(0x00008000),
__fpcr_flush_to_zero=(0x01000000)
};

enum { __fpsr_saturation=(0x08000000)
};

#pragma pack(4)
struct anonymous_typeX4
{
    unsigned long  int  gl_pathc  ;
    int gl_matchc;
    unsigned long  int  gl_offs  ;
    int gl_flags;
    char** gl_pathv;
    int (*gl_errfunc)(const char*,int);
    void (*gl_closedir)(void*);
    struct dirent* (*gl_readdir)(void*);
    void* (*gl_opendir)(const char*);
    int (*gl_lstat)(const char*,struct stat* );
    int (*gl_stat)(const char*,struct stat* );
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ5
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ6
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ7
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ8
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fd_set
{
    int  fds_bits[((((((1024)%(32))==0))?(((1024)/(32))):((((1024)/(32))+1))))]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __sbuf
{
    unsigned char* _base;
    int _size;
};
#pragma pack(pop)
#pragma pack(4)
struct __sFILE
{
    unsigned char* _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf  _bf  ;
    int _lbfsize;
    void* _cookie;
    int (*_close)(void*);
    int (*_read)(void*,char*,int);
    long long int  (*_seek)(void*,long long int ,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf  _ub  ;
    struct __sFILEX*  _extra  ;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf  _lb  ;
    int _blksize;
    long long int  _offset  ;
};
#pragma pack(pop)
#pragma pack(4)
struct timespec
{
    long  tv_sec  ;
    long tv_nsec;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
enum  anonymous_typeY8 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

#pragma pack(4)
struct anonymous_typeX9
{
    int  __min  ;
    int  __max  ;
    int  __map  ;
    unsigned int*  __types  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX10
{
    int __nranges;
    struct {
        int  __min  ;
        int  __max  ;
        int  __map  ;
        unsigned int*  __types  ;
    } __ranges;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX11
{
    char __name[14];
    unsigned int  __mask  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX12
{
    char __magic[8];
    char __encoding[32];
    int  (*__sgetrune)(const char*,unsigned long  int ,char**);
    int (*__sputrune)(int ,char*,unsigned long  int ,char**);
    int  __invalid_rune  ;
    unsigned int  __runetype[(1<<8)]  ;
    int  __maplower[(1<<8)]  ;
    int  __mapupper[(1<<8)]  ;
    struct {
        int __nranges;
        struct {
            int  __min  ;
            int  __max  ;
            int  __map  ;
            unsigned int*  __types  ;
        } __ranges;
    } __runetype_ext;
    struct {
        int __nranges;
        struct {
            int  __min  ;
            int  __max  ;
            int  __map  ;
            unsigned int*  __types  ;
        } __ranges;
    } __maplower_ext;
    struct {
        int __nranges;
        struct {
            int  __min  ;
            int  __max  ;
            int  __map  ;
            unsigned int*  __types  ;
        } __ranges;
    } __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct {
        char __name[14];
        unsigned int  __mask  ;
    } __charclasses;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX13
{
    void* spaceholder[64];
};
#pragma pack(pop)
#pragma pack(4)
struct iconv_hooks
{
    void (*uc_hook)(unsigned int,void*)  ;
    void (*wc_hook)(int ,void*)  ;
    void* data;
};
#pragma pack(pop)
#pragma pack(4)
struct iconv_fallbacks
{
    void (*mb_to_uc_fallback)(const char*,unsigned long  int ,void (*)(const unsigned int*,unsigned long  int ,void*),void*,void*)  ;
    void (*uc_to_mb_fallback)(unsigned int,void (*)(const char*,unsigned long  int ,void*),void*,void*)  ;
    void (*mb_to_wc_fallback)(const char*,unsigned long  int ,void (*)(const int* ,unsigned long  int ,void*),void*,void*)  ;
    void (*wc_to_mb_fallback)(int ,void (*)(const char*,unsigned long  int ,void*),void*,void*)  ;
    void* data;
};
#pragma pack(pop)
enum  memory_order { memory_order_relaxed=(0),
memory_order_consume=(1),
memory_order_acquire=(2),
memory_order_release=(3),
memory_order_acq_rel=(4),
memory_order_seq_cst=(5)
};

typedef _Atomic(_Bool) atomic_bool;

typedef _Atomic(char) atomic_char;

typedef _Atomic(char) atomic_schar;

typedef _Atomic(unsigned char) atomic_uchar;

typedef _Atomic(short) atomic_short;

typedef _Atomic(unsigned short int) atomic_ushort;

typedef _Atomic(int) atomic_int;

typedef _Atomic(unsigned int) atomic_uint;

typedef _Atomic(long) atomic_long;

typedef _Atomic(unsigned long  int) atomic_ulong;

typedef _Atomic(long  long) atomic_llong;

typedef _Atomic(unsigned long  long) atomic_ullong;

typedef _Atomic(unsigned short int ) atomic_char16_t  ;

typedef _Atomic(unsigned int ) atomic_char32_t  ;

typedef _Atomic(int ) atomic_wchar_t  ;

typedef _Atomic(char ) atomic_int_least8_t  ;

typedef _Atomic(unsigned char ) atomic_uint_least8_t  ;

typedef _Atomic(short ) atomic_int_least16_t  ;

typedef _Atomic(unsigned short int ) atomic_uint_least16_t  ;

typedef _Atomic(int ) atomic_int_least32_t  ;

typedef _Atomic(unsigned int ) atomic_uint_least32_t  ;

typedef _Atomic(long long ) atomic_int_least64_t  ;

typedef _Atomic(unsigned long  long ) atomic_uint_least64_t  ;

typedef _Atomic(char ) atomic_int_fast8_t  ;

typedef _Atomic(unsigned char ) atomic_uint_fast8_t  ;

typedef _Atomic(short ) atomic_int_fast16_t  ;

typedef _Atomic(unsigned short int ) atomic_uint_fast16_t  ;

typedef _Atomic(int ) atomic_int_fast32_t  ;

typedef _Atomic(unsigned int ) atomic_uint_fast32_t  ;

typedef _Atomic(long long ) atomic_int_fast64_t  ;

typedef _Atomic(unsigned long  long ) atomic_uint_fast64_t  ;

typedef _Atomic(long ) atomic_intptr_t  ;

typedef _Atomic(unsigned long  int ) atomic_uintptr_t  ;

typedef _Atomic(unsigned long  int ) atomic_size_t  ;

typedef _Atomic(long ) atomic_ptrdiff_t  ;

typedef _Atomic(long  int ) atomic_intmax_t  ;

typedef _Atomic(unsigned long  int ) atomic_uintmax_t  ;

#pragma pack(4)
struct atomic_flag
{
    _Atomic(_Bool ) _Value  ;
};
#pragma pack(pop)
typedef unsigned char  uuid_t[16]  ;

typedef char  uuid_string_t[37]  ;

#pragma pack(4)
struct image_offset
{
    unsigned char  uuid[16]  ;
    unsigned int  offset  ;
};
#pragma pack(pop)
#pragma pack(4)
struct mach_port_status
{
    unsigned int  mps_pset  ;
    unsigned int  mps_seqno  ;
    unsigned int  mps_mscount  ;
    unsigned int  mps_qlimit  ;
    unsigned int  mps_msgcount  ;
    unsigned int  mps_sorights  ;
    int  mps_srights  ;
    int  mps_pdrequest  ;
    int  mps_nsrequest  ;
    unsigned int  mps_flags  ;
};
#pragma pack(pop)
#pragma pack(4)
struct mach_port_limits
{
    unsigned int  mpl_qlimit  ;
};
#pragma pack(pop)
#pragma pack(4)
struct mach_port_info_ext
{
    struct mach_port_status  mpie_status  ;
    unsigned int  mpie_boost_cnt  ;
    unsigned int  reserved[6]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct mach_port_guard_info
{
    unsigned long  long  mpgi_guard  ;
};
#pragma pack(pop)
#pragma pack(4)
struct mach_port_qos
{
    unsigned int name:1;
    unsigned int prealloc:1;
    int  pad1:30  ;
    unsigned int  len  ;
};
#pragma pack(pop)
#pragma pack(4)
struct mach_service_port_info
{
    char mspi_string_name[255];
    unsigned char  mspi_domain_type  ;
};
#pragma pack(pop)
enum { MPO_PORT=((((0&0x7)<<14)|((0&0x7)<<10))),
MPO_SERVICE_PORT=((((0&0x7)<<14)|((1&0x7)<<10))),
MPO_CONNECTION_PORT=((((0&0x7)<<14)|((2&0x7)<<10))),
MPO_REPLY_PORT=((((0&0x7)<<14)|((4&0x7)<<10))),
MPO_PROVISIONAL_REPLY_PORT=((((1&0x7)<<14)|((0&0x7)<<10))),
MPO_EXCEPTION_PORT=((((2&0x7)<<14)|((0&0x7)<<10))),
MPO_CONNECTION_PORT_WITH_PORT_ARRAY=((((4&0x7)<<14)|((0&0x7)<<10)))
};

#pragma pack(4)
union anonymous_typeZ14
{
unsigned long  long  reserved[2]  ;
unsigned int  work_interval_port  ;
struct mach_service_port_info*  service_port_info  ;
unsigned int  service_port_name  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ15
{
unsigned long  long  reserved[2]  ;
unsigned int  work_interval_port  ;
struct mach_service_port_info*  service_port_info  ;
unsigned int  service_port_name  ;
};
#pragma pack(pop)
#pragma pack(4)
struct mach_port_options
{
    unsigned int  flags  ;
    struct mach_port_limits  mpl  ;
    union {
        unsigned long  long  reserved[2]  ;
        unsigned int  work_interval_port  ;
        struct mach_service_port_info*  service_port_info  ;
        unsigned int  service_port_name  ;
    };
};
#pragma pack(pop)
enum  mach_port_guard_exception_codes { kGUARD_EXC_NONE=(0),
kGUARD_EXC_DESTROY=(1),
kGUARD_EXC_MOD_REFS=(2),
kGUARD_EXC_INVALID_OPTIONS=(3),
kGUARD_EXC_SET_CONTEXT=(4),
kGUARD_EXC_THREAD_SET_STATE=(5),
kGUARD_EXC_EXCEPTION_BEHAVIOR_ENFORCE=(6),
kGUARD_EXC_SERVICE_PORT_VIOLATION_FATAL=(7),
kGUARD_EXC_UNGUARDED=(8),
kGUARD_EXC_KOBJECT_REPLY_PORT_SEMANTICS=(9),
kGUARD_EXC_REQUIRE_REPLY_PORT_SEMANTICS=(10),
kGUARD_EXC_INCORRECT_GUARD=(16),
kGUARD_EXC_IMMOVABLE=(32),
kGUARD_EXC_STRICT_REPLY=(64),
kGUARD_EXC_INVALID_NOTIFICATION_REQ=(65),
kGUARD_EXC_INVALID_MPO_ENTITLEMENT=(66),
kGUARD_EXC_DESCRIPTOR_VIOLATION=(67),
kGUARD_EXC_MSG_FILTERED=(128),
kGUARD_EXC_INVALID_RIGHT=(256),
kGUARD_EXC_INVALID_NAME=(512),
kGUARD_EXC_INVALID_VALUE=(1u<<10),
kGUARD_EXC_INVALID_ARGUMENT=(1u<<11),
kGUARD_EXC_RIGHT_EXISTS=(1u<<12),
kGUARD_EXC_KERN_NO_SPACE=(1u<<13),
kGUARD_EXC_KERN_FAILURE=(1u<<14),
kGUARD_EXC_KERN_RESOURCE=(1u<<15),
kGUARD_EXC_SEND_INVALID_REPLY=(1u<<16),
kGUARD_EXC_SEND_INVALID_VOUCHER=(1u<<17),
kGUARD_EXC_SEND_INVALID_RIGHT=(1u<<18),
kGUARD_EXC_RCV_INVALID_NAME=(1u<<19),
kGUARD_EXC_RCV_GUARDED_DESC=(0x00100000),
kGUARD_EXC_SERVICE_PORT_VIOLATION_NON_FATAL=(0x00100001),
kGUARD_EXC_PROVISIONAL_REPLY_PORT=(0x00100002),
kGUARD_EXC_OOL_PORT_ARRAY_CREATION=(0x00100003),
kGUARD_EXC_MOVE_PROVISIONAL_REPLY_PORT=(0x00100004),
kGUARD_EXC_REPLY_PORT_SINGLE_SO_RIGHT=(0x00100005),
kGUARD_EXC_MOD_REFS_NON_FATAL=(1u<<21),
kGUARD_EXC_IMMOVABLE_NON_FATAL=(1u<<22)
};

#pragma pack(4)
struct __darwin_arm_exception_state
{
    unsigned int  __exception  ;
    unsigned int  __fsr  ;
    unsigned int  __far  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_exception_state64
{
    unsigned long long int  __far  ;
    unsigned int  __esr  ;
    unsigned int  __exception  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_exception_state64_v2
{
    unsigned long long int  __far  ;
    unsigned long long int  __esr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_thread_state
{
    unsigned int  __r[13]  ;
    unsigned int  __sp  ;
    unsigned int  __lr  ;
    unsigned int  __pc  ;
    unsigned int  __cpsr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_thread_state64
{
    unsigned long long int  __x[29]  ;
    unsigned long long int  __fp  ;
    unsigned long long int  __lr  ;
    unsigned long long int  __sp  ;
    unsigned long long int  __pc  ;
    unsigned int  __cpsr  ;
    unsigned int  __pad  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_vfp_state
{
    unsigned int  __r[64]  ;
    unsigned int  __fpscr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_neon_state64
{
    __uint128_t __v[32];
    unsigned int  __fpsr  ;
    unsigned int  __fpcr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_neon_state
{
    __uint128_t __v[16];
    unsigned int  __fpsr  ;
    unsigned int  __fpcr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __arm_pagein_state
{
    int __pagein_error;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_sme_state
{
    unsigned long long int  __svcr  ;
    unsigned long long int  __tpidr2_el0  ;
    unsigned short int  __svl_b  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_sve_z_state
{
    char __z[16][256];
} __attribute__((aligned(4)));
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_sve_p_state
{
    char __p[16][256/8];
} __attribute__((aligned(4)));
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_sme_za_state
{
    char __za[4096];
} __attribute__((aligned(4)));
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_sme2_state
{
    char __zt0[64];
} __attribute__((aligned(4)));
#pragma pack(pop)
#pragma pack(4)
struct __arm_legacy_debug_state
{
    unsigned int  __bvr[16]  ;
    unsigned int  __bcr[16]  ;
    unsigned int  __wvr[16]  ;
    unsigned int  __wcr[16]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_debug_state32
{
    unsigned int  __bvr[16]  ;
    unsigned int  __bcr[16]  ;
    unsigned int  __wvr[16]  ;
    unsigned int  __wcr[16]  ;
    unsigned long long int  __mdscr_el1  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_debug_state64
{
    unsigned long long int  __bvr[16]  ;
    unsigned long long int  __bcr[16]  ;
    unsigned long long int  __wvr[16]  ;
    unsigned long long int  __wcr[16]  ;
    unsigned long long int  __mdscr_el1  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_arm_cpmu_state64
{
    unsigned long long int  __ctrs[16]  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX16
{
    unsigned int  pad1  ;
    unsigned int  pad2  ;
    unsigned int pad3:24;
    unsigned int  type:8  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX17
{
    unsigned int  name  ;
    unsigned int  pad1  ;
    unsigned int pad2:16;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX18
{
    unsigned int  address  ;
    unsigned int  size  ;
    int  deallocate:8  ;
    unsigned int  copy:8  ;
    unsigned int pad1:8;
    unsigned int  type:8  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX19
{
    unsigned long  long  address  ;
    int  deallocate:8  ;
    unsigned int  copy:8  ;
    unsigned int pad1:8;
    unsigned int  type:8  ;
    unsigned int  size  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX20
{
    void* address;
    int  deallocate:8  ;
    unsigned int  copy:8  ;
    unsigned int pad1:8;
    unsigned int  type:8  ;
    unsigned int  size  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX21
{
    unsigned int  address  ;
    unsigned int  count  ;
    int  deallocate:8  ;
    unsigned int  copy:8  ;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX22
{
    unsigned long  long  address  ;
    int  deallocate:8  ;
    unsigned int  copy:8  ;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
    unsigned int  count  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX23
{
    void* address;
    int  deallocate:8  ;
    unsigned int  copy:8  ;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
    unsigned int  count  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX24
{
    unsigned int  context  ;
    unsigned int  name  ;
    unsigned int  flags:16  ;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX25
{
    unsigned long  long  context  ;
    unsigned int  flags:16  ;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
    unsigned int  name  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX26
{
    unsigned long  int  context  ;
    unsigned int  flags:16  ;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
    unsigned int  name  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
union anonymous_typeZ27
{
    struct {
        unsigned int  name  ;
        unsigned int  pad1  ;
        unsigned int pad2:16;
        unsigned int  disposition:8  ;
        unsigned int  type:8  ;
    } port;
    struct {
        void* address;
        int  deallocate:8  ;
        unsigned int  copy:8  ;
        unsigned int pad1:8;
        unsigned int  type:8  ;
        unsigned int  size  ;
    } out_of_line;
    struct {
        void* address;
        int  deallocate:8  ;
        unsigned int  copy:8  ;
        unsigned int  disposition:8  ;
        unsigned int  type:8  ;
        unsigned int  count  ;
    } ool_ports;
    struct {
        unsigned int  pad1  ;
        unsigned int  pad2  ;
        unsigned int pad3:24;
        unsigned int  type:8  ;
    } type;
    struct {
        unsigned long  int  context  ;
        unsigned int  flags:16  ;
        unsigned int  disposition:8  ;
        unsigned int  type:8  ;
        unsigned int  name  ;
    } guarded_port;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX28
{
    unsigned int  msgh_descriptor_count  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX29
{
    unsigned int  msgh_bits  ;
    unsigned int  msgh_size  ;
    unsigned int  msgh_remote_port  ;
    unsigned int  msgh_local_port  ;
    unsigned int  msgh_voucher_port  ;
    int  msgh_id  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX30
{
    struct {
        unsigned int  msgh_bits  ;
        unsigned int  msgh_size  ;
        unsigned int  msgh_remote_port  ;
        unsigned int  msgh_local_port  ;
        unsigned int  msgh_voucher_port  ;
        int  msgh_id  ;
    } header;
    struct {
        unsigned int  msgh_descriptor_count  ;
    } body;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX31
{
    unsigned int  msgh_trailer_type  ;
    unsigned int  msgh_trailer_size  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX32
{
    unsigned int  msgh_trailer_type  ;
    unsigned int  msgh_trailer_size  ;
    unsigned int  msgh_seqno  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX33
{
    unsigned int val[2];
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX34
{
    unsigned int  msgh_trailer_type  ;
    unsigned int  msgh_trailer_size  ;
    unsigned int  msgh_seqno  ;
    struct {
        unsigned int val[2];
    } msgh_sender;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX35
{
    unsigned int val[8];
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX36
{
    unsigned int  msgh_trailer_type  ;
    unsigned int  msgh_trailer_size  ;
    unsigned int  msgh_seqno  ;
    struct {
        unsigned int val[2];
    } msgh_sender;
    struct {
        unsigned int val[8];
    } msgh_audit;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX37
{
    unsigned int  msgh_trailer_type  ;
    unsigned int  msgh_trailer_size  ;
    unsigned int  msgh_seqno  ;
    struct {
        unsigned int val[2];
    } msgh_sender;
    struct {
        unsigned int val[8];
    } msgh_audit;
    unsigned long  int  msgh_context  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX38
{
    unsigned int  sender  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX39
{
    unsigned int  msgh_trailer_type  ;
    unsigned int  msgh_trailer_size  ;
    unsigned int  msgh_seqno  ;
    struct {
        unsigned int val[2];
    } msgh_sender;
    struct {
        unsigned int val[8];
    } msgh_audit;
    unsigned long  int  msgh_context  ;
    int  msgh_ad  ;
    struct {
        unsigned int  sender  ;
    } msgh_labels;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX40
{
    struct {
        unsigned int  msgh_bits  ;
        unsigned int  msgh_size  ;
        unsigned int  msgh_remote_port  ;
        unsigned int  msgh_local_port  ;
        unsigned int  msgh_voucher_port  ;
        int  msgh_id  ;
    } header;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX41
{
    struct {
        unsigned int  msgh_bits  ;
        unsigned int  msgh_size  ;
        unsigned int  msgh_remote_port  ;
        unsigned int  msgh_local_port  ;
        unsigned int  msgh_voucher_port  ;
        int  msgh_id  ;
    } header;
    struct {
        unsigned int  msgh_trailer_type  ;
        unsigned int  msgh_trailer_size  ;
    } trailer;
};
#pragma pack(pop)
#pragma pack(push, 4)
union anonymous_typeZ42
{
    struct {
        struct {
            unsigned int  msgh_bits  ;
            unsigned int  msgh_size  ;
            unsigned int  msgh_remote_port  ;
            unsigned int  msgh_local_port  ;
            unsigned int  msgh_voucher_port  ;
            int  msgh_id  ;
        } header;
    } send;
    struct {
        struct {
            unsigned int  msgh_bits  ;
            unsigned int  msgh_size  ;
            unsigned int  msgh_remote_port  ;
            unsigned int  msgh_local_port  ;
            unsigned int  msgh_voucher_port  ;
            int  msgh_id  ;
        } header;
        struct {
            unsigned int  msgh_trailer_type  ;
            unsigned int  msgh_trailer_size  ;
        } trailer;
    } rcv;
};
#pragma pack(pop)
#pragma pack(4)
struct mach_vm_range
{
    unsigned long  long  min_address  ;
    unsigned long  long  max_address  ;
};
#pragma pack(pop)
enum { MACH_VM_RANGE_FLAVOR_INVALID 
,MACH_VM_RANGE_FLAVOR_V1 
};

enum { MACH_VM_RANGE_NONE=(0x000000000000)
};

enum { MACH_VM_RANGE_DEFAULT 
,MACH_VM_RANGE_DATA 
,MACH_VM_RANGE_FIXED 
};

#pragma pack(1)
struct anonymous_typeX43
{
    unsigned long  long  flags:48  ;
    unsigned short int  range_tag:8  ;
    unsigned char  vm_tag:8  ;
    struct mach_vm_range  range  ;
};
#pragma pack(pop)
#pragma pack(1)
struct arm_state_hdr
{
    unsigned int  flavor  ;
    unsigned int  count  ;
};
#pragma pack(pop)
#pragma pack(1)
union anonymous_typeZ44
{
struct __darwin_arm_thread_state  ts_32  ;
struct __darwin_arm_thread_state64  ts_64  ;
};
#pragma pack(pop)
#pragma pack(1)
union anonymous_typeZ45
{
struct __darwin_arm_thread_state  ts_32  ;
struct __darwin_arm_thread_state64  ts_64  ;
};
#pragma pack(pop)
#pragma pack(1)
struct arm_unified_thread_state
{
    struct arm_state_hdr  ash  ;
    union {
        struct __darwin_arm_thread_state  ts_32  ;
        struct __darwin_arm_thread_state64  ts_64  ;
    } uts;
};
#pragma pack(pop)
typedef unsigned int  thread_state_data_t[1296]  ;

enum { IPC_OTYPE_NONE=(0),
IPC_OTYPE_THREAD_CONTROL=(1),
IPC_OTYPE_TASK_CONTROL=(2),
IPC_OTYPE_HOST=(3),
IPC_OTYPE_HOST_PRIV=(4),
IPC_OTYPE_PROCESSOR=(5),
IPC_OTYPE_PROCESSOR_SET=(6),
IPC_OTYPE_PROCESSOR_SET_NAME=(7),
IPC_OTYPE_TIMER=(8),
IPC_OTYPE_PORT_SUBST_ONCE=(9),
IPC_OTYPE_MIG=(10),
IPC_OTYPE_MEMORY_OBJECT=(11),
IPC_OTYPE_XMM_PAGER=(12),
IPC_OTYPE_XMM_KERNEL=(13),
IPC_OTYPE_XMM_REPLY=(14),
IPC_OTYPE_UND_REPLY=(15),
IPC_OTYPE_HOST_NOTIFY=(16),
IPC_OTYPE_HOST_SECURITY=(17),
IPC_OTYPE_LEDGER=(18),
IPC_OTYPE_MAIN_DEVICE=(19),
IPC_OTYPE_TASK_NAME=(20),
IPC_OTYPE_SUBSYSTEM=(21),
IPC_OTYPE_IO_DONE_QUEUE=(22),
IPC_OTYPE_SEMAPHORE=(23),
IPC_OTYPE_LOCK_SET=(24),
IPC_OTYPE_CLOCK=(25),
IPC_OTYPE_CLOCK_CTRL=(26),
IPC_OTYPE_IOKIT_IDENT=(27),
IPC_OTYPE_NAMED_ENTRY=(28),
IPC_OTYPE_IOKIT_CONNECT=(29),
IPC_OTYPE_IOKIT_OBJECT=(30),
IPC_OTYPE_UPL=(31),
IPC_OTYPE_MEM_OBJ_CONTROL=(32),
IPC_OTYPE_AU_SESSIONPORT=(33),
IPC_OTYPE_FILEPORT=(34),
IPC_OTYPE_LABELH=(35),
IPC_OTYPE_TASK_RESUME=(36),
IPC_OTYPE_VOUCHER=(37),
IPC_OTYPE_VOUCHER_ATTR_CONTROL=(38),
IPC_OTYPE_WORK_INTERVAL=(39),
IPC_OTYPE_UX_HANDLER=(40),
IPC_OTYPE_UEXT_OBJECT=(41),
IPC_OTYPE_ARCADE_REG=(42),
IPC_OTYPE_EVENTLINK=(43),
IPC_OTYPE_TASK_INSPECT=(44),
IPC_OTYPE_TASK_READ=(45),
IPC_OTYPE_THREAD_INSPECT=(46),
IPC_OTYPE_THREAD_READ=(47),
IPC_OTYPE_SUID_CRED=(48),
IPC_OTYPE_HYPERVISOR=(49),
IPC_OTYPE_TASK_ID_TOKEN=(50),
IPC_OTYPE_TASK_FATAL=(51),
IPC_OTYPE_KCDATA=(52),
IPC_OTYPE_EXCLAVES_RESOURCE=(53),
IPC_OTYPE_UNKNOWN=(~0u)
};

#pragma pack(1)
struct ipc_info_space
{
    unsigned int  iis_genno_mask  ;
    unsigned int  iis_table_size  ;
    unsigned int  iis_table_next  ;
    unsigned int  iis_tree_size  ;
    unsigned int  iis_tree_small  ;
    unsigned int  iis_tree_hash  ;
};
#pragma pack(pop)
#pragma pack(1)
struct ipc_info_space_basic
{
    unsigned int  iisb_genno_mask  ;
    unsigned int  iisb_table_size  ;
    unsigned int  iisb_table_next  ;
    unsigned int  iisb_table_inuse  ;
    unsigned int  iisb_reserved[2]  ;
};
#pragma pack(pop)
#pragma pack(1)
struct ipc_info_name
{
    unsigned int  iin_name  ;
    int  iin_collision  ;
    unsigned int  iin_type  ;
    unsigned int  iin_urefs  ;
    unsigned int  iin_object  ;
    unsigned int  iin_next  ;
    unsigned int  iin_hash  ;
};
#pragma pack(pop)
#pragma pack(1)
struct ipc_info_tree_name
{
    struct ipc_info_name  iitn_name  ;
    unsigned int  iitn_lchild  ;
    unsigned int  iitn_rchild  ;
};
#pragma pack(pop)
#pragma pack(1)
struct ipc_info_port
{
    unsigned int  iip_port_object  ;
    unsigned int  iip_receiver_object  ;
};
#pragma pack(pop)
#pragma pack(1)
struct anonymous_typeX46
{
    unsigned long  int  we_wordc  ;
    char** we_wordv;
    unsigned long  int  we_offs  ;
};
#pragma pack(pop)
/// variable definition ///
extern const struct anonymous_typeX3  _FE_DFL_ENV  ;
extern const struct anonymous_typeX3  _FE_DFL_DISABLE_DENORMS_ENV  ;
extern struct __sFILE*  __stdinp  ;
extern struct __sFILE*  __stdoutp  ;
extern struct __sFILE*  __stderrp  ;
extern const int sys_nerr;
extern const char* const sys_errlist[];
extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
extern struct anonymous_typeX12  _DefaultRuneLocale  ;
extern struct anonymous_typeX12*  _CurrentRuneLocale  ;
extern int _libiconv_version;
static const unsigned char  UUID_NULL[16]  __attribute__ ((unused)) ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
extern const struct anonymous_typeX33  KERNEL_SECURITY_TOKEN  ;
extern const struct anonymous_typeX35  KERNEL_AUDIT_TOKEN  ;
// source head

// header function
char* strdup(const char* );
_Complex float cacosf(_Complex float );
_Complex double cacos(_Complex double );
_Complex long  double cacosl(_Complex long  double );
_Complex float casinf(_Complex float );
_Complex double casin(_Complex double );
_Complex long  double casinl(_Complex long  double );
_Complex float catanf(_Complex float );
_Complex double catan(_Complex double );
_Complex long  double catanl(_Complex long  double );
_Complex float ccosf(_Complex float );
_Complex double ccos(_Complex double );
_Complex long  double ccosl(_Complex long  double );
_Complex float csinf(_Complex float );
_Complex double csin(_Complex double );
_Complex long  double csinl(_Complex long  double );
_Complex float ctanf(_Complex float );
_Complex double ctan(_Complex double );
_Complex long  double ctanl(_Complex long  double );
_Complex float cacoshf(_Complex float );
_Complex double cacosh(_Complex double );
_Complex long  double cacoshl(_Complex long  double );
_Complex float casinhf(_Complex float );
_Complex double casinh(_Complex double );
_Complex long  double casinhl(_Complex long  double );
_Complex float catanhf(_Complex float );
_Complex double catanh(_Complex double );
_Complex long  double catanhl(_Complex long  double );
_Complex float ccoshf(_Complex float );
_Complex double ccosh(_Complex double );
_Complex long  double ccoshl(_Complex long  double );
_Complex float csinhf(_Complex float );
_Complex double csinh(_Complex double );
_Complex long  double csinhl(_Complex long  double );
_Complex float ctanhf(_Complex float );
_Complex double ctanh(_Complex double );
_Complex long  double ctanhl(_Complex long  double );
_Complex float cexpf(_Complex float );
_Complex double cexp(_Complex double );
_Complex long  double cexpl(_Complex long  double );
_Complex float clogf(_Complex float );
_Complex double clog(_Complex double );
_Complex long  double clogl(_Complex long  double );
float cabsf(_Complex float );
double cabs(_Complex double );
long  double cabsl(_Complex long  double );
_Complex float cpowf(_Complex float , _Complex float );
_Complex double cpow(_Complex double , _Complex double );
_Complex long  double cpowl(_Complex long  double , _Complex long  double );
_Complex float csqrtf(_Complex float );
_Complex double csqrt(_Complex double );
_Complex long  double csqrtl(_Complex long  double );
float cargf(_Complex float );
double carg(_Complex double );
long  double cargl(_Complex long  double );
float cimagf(_Complex float );
double cimag(_Complex double );
long  double cimagl(_Complex long  double );
_Complex float conjf(_Complex float );
_Complex double conj(_Complex double );
_Complex long  double conjl(_Complex long  double );
_Complex float cprojf(_Complex float );
_Complex double cproj(_Complex double );
_Complex long  double cprojl(_Complex long  double );
float crealf(_Complex float );
double creal(_Complex double );
long  double creall(_Complex long  double );
int closedir(struct anonymous_typeX2*    ) __asm("_" "closedir" );
struct anonymous_typeX2*  opendir(const char* ) __asm("_" "opendir"  );
struct dirent*  readdir(struct anonymous_typeX2*    ) __asm("_" "readdir" );
int readdir_r(struct anonymous_typeX2*    , struct dirent*    , struct dirent**    ) __asm("_" "readdir_r" );
void rewinddir(struct anonymous_typeX2*    ) __asm("_" "rewinddir"  );
void seekdir(struct anonymous_typeX2*    , long ) __asm("_" "seekdir"  );
long telldir(struct anonymous_typeX2*    ) __asm("_" "telldir"  );
struct anonymous_typeX2*  fdopendir(int ) __asm("_" "fdopendir"  );
int alphasort(const struct dirent**    , const struct dirent**    ) __asm("_" "alphasort" );
int dirfd(struct anonymous_typeX2*  dirp  );
int scandir(const char* , struct dirent***    , int (*anonymous_lambda_var_nameZ1)(const struct dirent* ), int (*anonymous_lambda_var_nameZ2)(const struct dirent** ,const struct dirent** )) __asm("_" "scandir" );
int getdirentries(int , char* , int __nbytes, long* ) __asm("_getdirentries_is_not_available_when_64_bit_inodes_are_in_effect")
#line 177 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dirent.h"
;
struct anonymous_typeX2*  __opendir2(const char* , int ) __asm("_" "__opendir2"  );
int feclearexcept(int );
int fegetexceptflag(unsigned short int*    , int );
int feraiseexcept(int );
int fesetexceptflag(const unsigned short int*    , int );
int fetestexcept(int );
int fegetround();
int fesetround(int );
int fegetenv(struct anonymous_typeX3*    );
int feholdexcept(struct anonymous_typeX3*    );
int fesetenv(const struct anonymous_typeX3*    );
int feupdateenv(const struct anonymous_typeX3*    );
int fnmatch(const char* , const char* , int ) __asm("_" "fnmatch" );
int glob(const char* restrict , int , int (*anonymous_lambda_var_nameZ3)(const char*,int), struct anonymous_typeX4* restrict    ) __asm("_" "glob" );
void globfree(struct anonymous_typeX4*    );
int __darwin_check_fd_set_overflow(int , const void* , int );
int renameat(int , const char* , int , const char* );
int renamex_np(const char* , const char* , unsigned int );
int renameatx_np(int , const char* , int , const char* , unsigned int );
int printf(const char* restrict , ...) __attribute__((__format__ (__printf__, 1, 2)));
void clearerr(struct __sFILE*    );
int fclose(struct __sFILE*    );
int feof(struct __sFILE*    );
int ferror(struct __sFILE*    );
int fflush(struct __sFILE*    );
int fgetc(struct __sFILE*    );
int fgetpos(struct __sFILE* restrict    , long long int*    );
char* fgets(char* restrict , int __size, struct __sFILE*    );
struct __sFILE*  fopen(const char* restrict __filename, const char* restrict __mode) __asm("_" "fopen" "$DARWIN_EXTSN");
int fprintf(struct __sFILE* restrict    , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int , struct __sFILE*    );
int fputs(const char* restrict , struct __sFILE* restrict    ) __asm("_" "fputs" );
unsigned long  int  fread(void* restrict __ptr, unsigned long  int  __size  , unsigned long  int  __nitems  , struct __sFILE* restrict  __stream  );
struct __sFILE*  freopen(const char* restrict , const char* restrict , struct __sFILE* restrict    ) __asm("_" "freopen" );
int fscanf(struct __sFILE* restrict    , const char* restrict , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(struct __sFILE*    , long , int );
int fsetpos(struct __sFILE*    , const long long int*    );
long ftell(struct __sFILE*    );
unsigned long  int  fwrite(const void* restrict __ptr, unsigned long  int  __size  , unsigned long  int  __nitems  , struct __sFILE* restrict  __stream  ) __asm("_" "fwrite" );
int getc(struct __sFILE*    );
int getchar();
char* gets(char* );
void perror(const char* );
int putc(int , struct __sFILE*    );
int putchar(int );
int puts(const char* );
int remove(const char* );
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE*    );
int scanf(const char* restrict , ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(struct __sFILE* restrict    , char* restrict );
int setvbuf(struct __sFILE* restrict    , char* restrict , int , unsigned long  int  __size  );
int sprintf(char* restrict , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int sscanf(const char* restrict , const char* restrict , ...) __attribute__((__format__ (__scanf__, 2, 3)));
struct __sFILE*  tmpfile();
char* tmpnam(char* );
int ungetc(int , struct __sFILE*    );
int vfprintf(struct __sFILE* restrict    , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char* restrict , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0))) ;
char* ctermid(char* );
struct __sFILE*  fdopen(int , const char* ) __asm("_" "fdopen" "$DARWIN_EXTSN");
int fileno(struct __sFILE*    );
int pclose(struct __sFILE*    );
struct __sFILE*  popen(const char* , const char* ) __asm("_" "popen" "$DARWIN_EXTSN") ;
int __srget(struct __sFILE*    );
int __svfscanf(struct __sFILE*    , const char* , __darwin_va_list    ) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int , struct __sFILE*    );
void flockfile(struct __sFILE*    );
int ftrylockfile(struct __sFILE*    );
void funlockfile(struct __sFILE*    );
int getc_unlocked(struct __sFILE*    );
int getchar_unlocked();
int putc_unlocked(int , struct __sFILE*    );
int putchar_unlocked(int );
char* tempnam(const char* __dir, const char* __prefix) __asm("_" "tempnam" );
int fseeko(struct __sFILE*  __stream  , long long int  __offset  , int __whence);
long long int  ftello(struct __sFILE*  __stream  );
int snprintf(char* restrict __str, unsigned long  int  __size  , const char* restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(struct __sFILE* restrict  __stream  , const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char* restrict __str, unsigned long  int  __size  , const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char* restrict __str, const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__scanf__, 2, 0)));
int dprintf(int , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int vdprintf(int , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0))) ;
long  getdelim(char** restrict __linep, unsigned long  int* restrict  __linecapp  , int __delimiter, struct __sFILE* restrict  __stream  );
long  getline(char** restrict __linep, unsigned long  int* restrict  __linecapp  , struct __sFILE* restrict  __stream  );
struct __sFILE*  fmemopen(void* restrict __buf, unsigned long  int  __size  , const char* restrict __mode);
struct __sFILE*  open_memstream(char** __bufp, unsigned long  int*  __sizep  );
int asprintf(char** restrict , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3)));
char* ctermid_r(char* );
char* fgetln(struct __sFILE*    , unsigned long  int*  __len  );
const char* fmtcheck(const char* , const char* ) __attribute__((format_arg(2)));
int fpurge(struct __sFILE*    );
void setbuffer(struct __sFILE*    , char* , int __size);
int setlinebuf(struct __sFILE*    );
int vasprintf(char** restrict , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0)));
struct __sFILE*  funopen(const void* , int (*anonymous_lambda_var_nameZ4)(void*,char*,int), int (*anonymous_lambda_var_nameZ5)(void*,const char*,int), long long int  (*anonymous_lambda_var_nameZ6)(void*,long long int ,int), int (*anonymous_lambda_var_nameZ7)(void*));
int __snprintf_chk(char* restrict , unsigned long  int  __maxlen  , int , unsigned long  int    , const char* restrict , ...);
int __vsnprintf_chk(char* restrict , unsigned long  int  __maxlen  , int , unsigned long  int    , const char* restrict , __darwin_va_list    );
int __sprintf_chk(char* restrict , int , unsigned long  int    , const char* restrict , ...);
int __vsprintf_chk(char* restrict , int , unsigned long  int    , const char* restrict , __darwin_va_list    );
char* asctime(const struct tm*    );
unsigned long  int  clock() __asm("_" "clock" );
char* ctime(const long*    );
double difftime(long    , long    );
struct tm*  getdate(const char* );
struct tm*  gmtime(const long*    );
struct tm*  localtime(const long*    );
long  mktime(struct tm*    ) __asm("_" "mktime" );
unsigned long  int  strftime(char* restrict , unsigned long  int  __maxsize  , const char* restrict , const struct tm* restrict    ) __asm("_" "strftime" );
char* strptime(const char* restrict , const char* restrict , struct tm* restrict    ) __asm("_" "strptime" );
long  time(long*    );
void tzset();
char* asctime_r(const struct tm* restrict    , char* restrict );
char* ctime_r(const long*    , char* );
struct tm*  gmtime_r(const long* restrict    , struct tm* restrict    );
struct tm*  localtime_r(const long* restrict    , struct tm* restrict    );
long  posix2time(long    );
void tzsetwall();
long  time2posix(long    );
long  timelocal(struct tm* const    );
long  timegm(struct tm* const    );
int nanosleep(const struct timespec*  __rqtp  , struct timespec*  __rmtp  ) __asm("_" "nanosleep"  );
int clock_getres(enum anonymous_typeY8  __clock_id  , struct timespec*  __res  );
int clock_gettime(enum anonymous_typeY8  __clock_id  , struct timespec*  __tp  );
unsigned long long int  clock_gettime_nsec_np(enum anonymous_typeY8  __clock_id  );
int clock_settime(enum anonymous_typeY8  __clock_id  , const struct timespec*  __tp  );
int timespec_get(struct timespec*  ts  , int base);
unsigned long  int ___runetype(int    );
int  ___tolower(int    );
int  ___toupper(int    );
int __maskrune(int    , unsigned long  int );
int  __toupper(int    );
int  __tolower(int    );
unsigned int  wctype(const char* );
unsigned int  btowc(int );
unsigned int  fgetwc(struct __sFILE*    );
int*  fgetws(int* restrict    , int __n, struct __sFILE* restrict    );
unsigned int  fputwc(int    , struct __sFILE*    );
int fputws(const int* restrict    , struct __sFILE* restrict    );
int fwide(struct __sFILE*    , int );
int fwprintf(struct __sFILE* restrict    , const int* restrict    , ...);
int fwscanf(struct __sFILE* restrict    , const int* restrict    , ...);
unsigned int  getwc(struct __sFILE*    );
unsigned int  getwchar();
unsigned long  int  mbrlen(const char* restrict , unsigned long  int  __n  , union anonymous_typeZ1* restrict    );
unsigned long  int  mbrtowc(int* restrict    , const char* restrict , unsigned long  int  __n  , union anonymous_typeZ1* restrict    );
int mbsinit(const union anonymous_typeZ1*    );
unsigned long  int  mbsrtowcs(int* restrict    , const char** restrict , unsigned long  int  __len  , union anonymous_typeZ1* restrict    );
unsigned int  putwc(int    , struct __sFILE*    );
unsigned int  putwchar(int    );
int swprintf(int* restrict    , unsigned long  int  __maxlen  , const int* restrict    , ...);
int swscanf(const int* restrict    , const int* restrict    , ...);
unsigned int  ungetwc(unsigned int    , struct __sFILE*    );
int vfwprintf(struct __sFILE* restrict    , const int* restrict    , __darwin_va_list    );
int vswprintf(int* restrict    , unsigned long  int  __maxlen  , const int* restrict    , __darwin_va_list    );
int vwprintf(const int* restrict    , __darwin_va_list    );
unsigned long  int  wcrtomb(char* restrict , int    , union anonymous_typeZ1* restrict    );
int*  wcscat(int* restrict    , const int* restrict    );
int*  wcschr(const int*    , int    );
int wcscmp(const int*    , const int*    );
int wcscoll(const int*    , const int*    );
int*  wcscpy(int* restrict    , const int* restrict    );
unsigned long  int  wcscspn(const int*    , const int*    );
unsigned long  int  wcsftime(int* restrict    , unsigned long  int  __maxlen  , const int* restrict    , const struct tm* restrict    ) __asm("_" "wcsftime" );
unsigned long  int  wcslen(const int*    );
int*  wcsncat(int* restrict    , const int* restrict    , unsigned long  int  __n  );
int wcsncmp(const int*    , const int*    , unsigned long  int    );
int*  wcsncpy(int* restrict    , const int* restrict    , unsigned long  int  __n  );
int*  wcspbrk(const int*    , const int*    );
int*  wcsrchr(const int*    , int    );
unsigned long  int  wcsrtombs(char* restrict , const int** restrict    , unsigned long  int  __len  , union anonymous_typeZ1* restrict    );
unsigned long  int  wcsspn(const int*    , const int*    );
int*  wcsstr(const int* restrict    , const int* restrict    );
unsigned long  int  wcsxfrm(int* restrict    , const int* restrict    , unsigned long  int  __n  );
int wctob(unsigned int    );
double wcstod(const int* restrict    , int** restrict    );
int*  wcstok(int* restrict    , const int* restrict    , int** restrict    );
long wcstol(const int* restrict    , int** restrict    , int );
unsigned long  int wcstoul(const int* restrict    , int** restrict    , int );
int*  wmemchr(const int*    , int    , unsigned long  int  __n  );
int wmemcmp(const int*    , const int*    , unsigned long  int  __n  );
int*  wmemcpy(int* restrict    , const int* restrict    , unsigned long  int  __n  );
int*  wmemmove(int*    , const int*    , unsigned long  int  __n  );
int*  wmemset(int*    , int    , unsigned long  int  __n  );
int wprintf(const int* restrict    , ...);
int wscanf(const int* restrict    , ...);
int wcswidth(const int*    , unsigned long  int  __n  );
int wcwidth(int    );
int vfwscanf(struct __sFILE* restrict    , const int* restrict    , __darwin_va_list    );
int vswscanf(const int* restrict    , const int* restrict    , __darwin_va_list    );
int vwscanf(const int* restrict    , __darwin_va_list    );
float wcstof(const int* restrict    , int** restrict    );
long  double wcstold(const int* restrict    , int** restrict    );
long long wcstoll(const int* restrict    , int** restrict    , int );
unsigned long  long wcstoull(const int* restrict    , int** restrict    , int );
unsigned long  int  mbsnrtowcs(int* restrict    , const char** restrict , unsigned long  int    , unsigned long  int  __len  , union anonymous_typeZ1* restrict    );
int*  wcpcpy(int* restrict    , const int* restrict    );
int*  wcpncpy(int* restrict    , const int* restrict    , unsigned long  int  __n  );
int*  wcsdup(const int*    );
int wcscasecmp(const int*    , const int*    );
int wcsncasecmp(const int*    , const int*    , unsigned long  int  n  );
unsigned long  int  wcsnlen(const int*    , unsigned long  int  __n  );
unsigned long  int  wcsnrtombs(char* restrict , const int** restrict    , unsigned long  int    , unsigned long  int  __len  , union anonymous_typeZ1* restrict    );
struct __sFILE*  open_wmemstream(int**  __bufp  , unsigned long  int*  __sizep  );
int*  fgetwln(struct __sFILE* restrict    , unsigned long  int*  __len  );
unsigned long  int  wcslcat(int*    , const int*    , unsigned long  int  __len  );
unsigned long  int  wcslcpy(int*    , const int*    , unsigned long  int  __len  );
struct __tag_iconv_t*  iconv_open(const char* , const char* );
unsigned long  int  iconv(struct __tag_iconv_t*    , char** restrict , unsigned long  int* restrict    , char** restrict , unsigned long  int* restrict    );
int iconv_close(struct __tag_iconv_t*    );
int __iconv_get_list(char*** , unsigned long  int*    , _Bool    );
void __iconv_free_list(char** , unsigned long  int    );
unsigned long  int  __iconv(struct __tag_iconv_t*    , char** , unsigned long  int*    , char** , unsigned long  int*    , unsigned int    , unsigned long  int*    );
int iconv_open_into(const char* , const char* , struct anonymous_typeX13*    );
void libiconv_set_relocation_prefix(const char* , const char* );
void iconvlist(int (*do_one)(unsigned int,const char** const,void*), void* );
const char* iconv_canonicalize(const char* );
int iconvctl(struct __tag_iconv_t*    , int , void* );
char* nl_langinfo(int    );
void closelog();
void openlog(const char* , int , int );
int setlogmask(int );
void syslog(int , const char* , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
void vsyslog(int , const char* , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0))) ;
void uuid_clear(unsigned char  uu[16]  );
int uuid_compare(const unsigned char  uu1[16]  , const unsigned char  uu2[16]  );
void uuid_copy(unsigned char  dst[16]  , const unsigned char  src[16]  );
void uuid_generate(unsigned char  out[16]  );
void uuid_generate_random(unsigned char  out[16]  );
void uuid_generate_time(unsigned char  out[16]  );
int uuid_is_null(const unsigned char  uu[16]  );
int uuid_parse(const char  in[37]  , unsigned char  uu[16]  );
void uuid_unparse(const unsigned char  uu[16]  , char  out[37]  );
void uuid_unparse_lower(const unsigned char  uu[16]  , char  out[37]  );
void uuid_unparse_upper(const unsigned char  uu[16]  , char  out[37]  );
int backtrace(void** , int __size);
int  __attribute__((__visibility__("default")))
 backtrace_from_fp(void* startfp, void** array, int size);
char** backtrace_symbols(void** const , int __size);
void backtrace_symbols_fd(void** const , int __size, int );
void  __attribute__((__visibility__("default")))
 backtrace_image_offsets(void** const array, struct image_offset*  image_offsets  , int size);
unsigned long  int  backtrace_async(void** array, unsigned long  int  length  , unsigned int*  task_id  );
int posix_spawn(int* restrict    , const char* restrict , const void**    , const void** restrict    , char* const __argv[], char* const __envp[]);
int posix_spawnp(int* restrict    , const char* restrict , const void**    , const void** restrict    , char* const __argv[], char* const __envp[]);
int posix_spawn_file_actions_addchdir(void**    , const char* restrict );
int posix_spawn_file_actions_addfchdir(void**    , int );
int posix_spawn_file_actions_addclose(void**    , int );
int posix_spawn_file_actions_adddup2(void**    , int , int );
int posix_spawn_file_actions_addopen(void** restrict    , int , const char* restrict , int , unsigned short int    );
int posix_spawn_file_actions_destroy(void**    );
int posix_spawn_file_actions_init(void**    );
int posix_spawnattr_destroy(void**    );
int posix_spawnattr_getsigdefault(const void** restrict    , unsigned int* restrict    );
int posix_spawnattr_getflags(const void** restrict    , short* restrict );
int posix_spawnattr_getpgroup(const void** restrict    , int* restrict    );
int posix_spawnattr_getsigmask(const void** restrict    , unsigned int* restrict    );
int posix_spawnattr_init(void**    );
int posix_spawnattr_setsigdefault(void** restrict    , const unsigned int* restrict    );
int posix_spawnattr_setflags(void**    , short );
int posix_spawnattr_setpgroup(void**    , int    );
int posix_spawnattr_setsigmask(void** restrict    , const unsigned int* restrict    );
int  mach_msg_overwrite(struct anonymous_typeX29*  msg  , int  option  , unsigned int  send_size  , unsigned int  rcv_size  , unsigned int  rcv_name  , unsigned int  timeout  , unsigned int  notify  , struct anonymous_typeX29*  rcv_msg  , unsigned int  rcv_limit  );
int  mach_msg(struct anonymous_typeX29*  msg  , int  option  , unsigned int  send_size  , unsigned int  rcv_size  , unsigned int  rcv_name  , unsigned int  timeout  , unsigned int  notify  );
int  mach_voucher_deallocate(unsigned int  voucher  );
int posix_spawnattr_getbinpref_np(const void** restrict    , unsigned long  int    , int* restrict    , unsigned long  int* restrict    );
int posix_spawnattr_getarchpref_np(const void** restrict    , unsigned long  int    , int* restrict    , int* restrict    , unsigned long  int* restrict    );
int posix_spawnattr_setauditsessionport_np(void** restrict    , unsigned int    );
int posix_spawnattr_setbinpref_np(void** restrict    , unsigned long  int    , int* restrict    , unsigned long  int* restrict    );
int posix_spawnattr_setarchpref_np(void** restrict    , unsigned long  int    , int* restrict    , int* restrict    , unsigned long  int* restrict    );
int posix_spawnattr_setexceptionports_np(void** restrict    , unsigned int    , unsigned int    , int    , int    );
int posix_spawnattr_setspecialport_np(void** restrict    , unsigned int    , int );
int posix_spawnattr_setnosmt_np(const void** restrict  attr  );
int posix_spawnattr_set_csm_np(const void** restrict  attr  , unsigned int  flags  );
int posix_spawn_file_actions_addinherit_np(void**    , int );
int posix_spawn_file_actions_addchdir_np(void**    , const char* restrict );
int posix_spawn_file_actions_addfchdir_np(void**    , int );
int wordexp(const char* restrict , struct anonymous_typeX46* restrict    , int );
void wordfree(struct anonymous_typeX46*    );
int test_headers_misc();
// uniq global variable
// inline function
static inline unsigned short int  _OSSwapInt16(unsigned short int  _data  )
{
        return (unsigned short int )(_data<<8|_data>>8);
}
static inline unsigned int  _OSSwapInt32(unsigned int  _data  )
{
    _data=(((_data^(_data>>16|(_data<<16)))&0xFF00FFFF)>>8)^(_data>>8|_data<<24);
        return _data;
}
static inline unsigned long long int  _OSSwapInt64(unsigned long long int  _data  )
{
    union anonymous_typeZ8 _u;
    _u._ul[0]=(unsigned int )(_data>>32);
    _u._ul[1]=(unsigned int )(_data&0xffffffff);
    _u._ul[0]=_OSSwapInt32(_u._ul[0]);
    _u._ul[1]=_OSSwapInt32(_u._ul[1]);
        return _u._ull;
}
inline int  __attribute__((__always_inline__))  __darwin_check_fd_set(int _a, const void* _b)
{
    if((unsigned long  int )&__darwin_check_fd_set_overflow!=(unsigned long  int )0) {
                return __darwin_check_fd_set_overflow(_a,_b,1);
    }
    else {
                return 1;
    }
}
inline int  __attribute__((__always_inline__))  __darwin_fd_isset(int _fd, const struct fd_set*  _p  )
{
    if(__darwin_check_fd_set(_fd,(const void*)_p)) {
                return _p->fds_bits[(unsigned long  int)_fd/32]&((int )(((unsigned long  int)1)<<((unsigned long  int)_fd%32)));
    }
        return 0;
}
inline void  __attribute__((__always_inline__))  __darwin_fd_set(int _fd, struct fd_set* const  _p  )
{
    if(__darwin_check_fd_set(_fd,(const void*)_p)) {
        (_p->fds_bits[(unsigned long  int)_fd/32]|=((int )(((unsigned long  int)1)<<((unsigned long  int)_fd%32))));
    }
}
inline void  __attribute__((__always_inline__))  __darwin_fd_clr(int _fd, struct fd_set* const  _p  )
{
    if(__darwin_check_fd_set(_fd,(const void*)_p)) {
        (_p->fds_bits[(unsigned long  int)_fd/32]&=~((int )(((unsigned long  int)1)<<((unsigned long  int)_fd%32))));
    }
}
inline int  __attribute__((__always_inline__))  __sputc(int _c, struct __sFILE*  _p  )
{
    if(--_p->_w>=0||(_p->_w>=_p->_lbfsize&&(char)_c!=10)) {
                return (*_p->_p++=_c);
    }
    else {
                return (__swbuf(_c,_p));
    }
}
inline int isascii(int _c)
{
        return ((_c&~0x7F)==0);
}
inline int __istype(int  _c  , unsigned long  int _f)
{
        return (((isascii(_c))?(!!(_DefaultRuneLocale.__runetype[_c]&_f)):(!!__maskrune(_c,_f))));
}
inline int  __isctype(int  _c  , unsigned long  int _f)
{
        return (((_c<0||_c>=(1<<8)))?(0):(!!(_DefaultRuneLocale.__runetype[_c]&_f)));
}
inline int __wcwidth(int  _c  )
{
    unsigned int _x;
    if(_c==0) {
                return (0);
    }
    _x=(unsigned int)__maskrune(_c,0xe0000000L|0x00040000L);
    if((_x&0xe0000000L)!=0) {
                return ((_x&0xe0000000L)>>30);
    }
        return ((((_x&0x00040000L)!=0)?(1):(-1)));
}
inline int isalnum(int _c)
{
        return (__istype(_c,0x00000100L|0x00000400L));
}
inline int isalpha(int _c)
{
        return (__istype(_c,0x00000100L));
}
inline int isblank(int _c)
{
        return (__istype(_c,0x00020000L));
}
inline int iscntrl(int _c)
{
        return (__istype(_c,0x00000200L));
}
inline int isdigit(int _c)
{
        return (__isctype(_c,0x00000400L));
}
inline int isgraph(int _c)
{
        return (__istype(_c,0x00000800L));
}
inline int islower(int _c)
{
        return (__istype(_c,0x00001000L));
}
inline int isprint(int _c)
{
        return (__istype(_c,0x00040000L));
}
inline int ispunct(int _c)
{
        return (__istype(_c,0x00002000L));
}
inline int isspace(int _c)
{
        return (__istype(_c,0x00004000L));
}
inline int isupper(int _c)
{
        return (__istype(_c,0x00008000L));
}
inline int isxdigit(int _c)
{
        return (__isctype(_c,0x00010000L));
}
inline int toascii(int _c)
{
        return (_c&0x7F);
}
inline int tolower(int _c)
{
        return (__tolower(_c));
}
inline int toupper(int _c)
{
        return (__toupper(_c));
}
inline int digittoint(int _c)
{
        return (__maskrune(_c,0x0F));
}
inline int ishexnumber(int _c)
{
        return (__istype(_c,0x00010000L));
}
inline int isideogram(int _c)
{
        return (__istype(_c,0x00080000L));
}
inline int isnumber(int _c)
{
        return (__istype(_c,0x00000400L));
}
inline int isphonogram(int _c)
{
        return (__istype(_c,0x00200000L));
}
inline int isrune(int _c)
{
        return (__istype(_c,0xFFFFFFF0L));
}
inline int isspecial(int _c)
{
        return (__istype(_c,0x00100000L));
}
inline int iswalnum(unsigned int  _wc  )
{
        return (__istype(_wc,0x00000100L|0x00000400L));
}
inline int iswalpha(unsigned int  _wc  )
{
        return (__istype(_wc,0x00000100L));
}
inline int iswcntrl(unsigned int  _wc  )
{
        return (__istype(_wc,0x00000200L));
}
inline int iswctype(unsigned int  _wc  , unsigned int  _charclass  )
{
        return (__istype(_wc,_charclass));
}
inline int iswdigit(unsigned int  _wc  )
{
        return (__isctype(_wc,0x00000400L));
}
inline int iswgraph(unsigned int  _wc  )
{
        return (__istype(_wc,0x00000800L));
}
inline int iswlower(unsigned int  _wc  )
{
        return (__istype(_wc,0x00001000L));
}
inline int iswprint(unsigned int  _wc  )
{
        return (__istype(_wc,0x00040000L));
}
inline int iswpunct(unsigned int  _wc  )
{
        return (__istype(_wc,0x00002000L));
}
inline int iswspace(unsigned int  _wc  )
{
        return (__istype(_wc,0x00004000L));
}
inline int iswupper(unsigned int  _wc  )
{
        return (__istype(_wc,0x00008000L));
}
inline int iswxdigit(unsigned int  _wc  )
{
        return (__isctype(_wc,0x00010000L));
}
inline unsigned int  towlower(unsigned int  _wc  )
{
        return (__tolower(_wc));
}
inline unsigned int  towupper(unsigned int  _wc  )
{
        return (__toupper(_wc));
}

// body function
int test_headers_misc()
{
        return 0;
}


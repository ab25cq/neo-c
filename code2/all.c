/// c_include definition ///
/// typedef definition ///
typedef int sig_atomic_t;

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

typedef long long  __darwin_blkcnt_t  ;

typedef int  __darwin_blksize_t  ;

typedef int  __darwin_dev_t  ;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int  __darwin_gid_t  ;

typedef unsigned int  __darwin_id_t  ;

typedef unsigned long  long  __darwin_ino64_t  ;

typedef unsigned long  long  __darwin_ino_t  ;

typedef unsigned int  __darwin_mach_port_name_t  ;

typedef unsigned int  __darwin_mach_port_t  ;

typedef unsigned short int  __darwin_mode_t  ;

typedef long long  __darwin_off_t  ;

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

typedef struct __darwin_mcontext64*  mcontext_t  ;

typedef struct _opaque_pthread_attr_t  pthread_attr_t  ;

typedef struct __darwin_sigaltstack  stack_t  ;

typedef struct __darwin_ucontext  ucontext_t  ;

typedef int  pid_t  ;

typedef unsigned int  sigset_t  ;

typedef unsigned long  int  size_t  ;

typedef unsigned int  uid_t  ;

typedef struct __siginfo  siginfo_t  ;

typedef void (*sig_t)(int);

typedef long long  off_t  ;

typedef long  ssize_t  ;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int  __darwin_wctype_t  ;

typedef int  ct_rune_t  ;

typedef int  rune_t  ;

typedef int  wchar_t  ;

typedef unsigned int  wint_t  ;

typedef struct anonymous_typeX2 _RuneEntry;

typedef struct anonymous_typeX3 _RuneRange;

typedef struct anonymous_typeX4 _RuneCharClass;

typedef struct anonymous_typeX5 _RuneLocale;

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

typedef unsigned int chtype;

typedef unsigned long  int mmask_t;

typedef long long  fpos_t  ;

typedef struct __sFILE  FILE  ;

typedef __builtin_va_list  va_list  ;

typedef __builtin_va_list  __gnuc_va_list  ;

typedef unsigned char NCURSES_BOOL;

typedef struct screen SCREEN;

typedef struct _win_st WINDOW;

typedef unsigned int  attr_t  ;

typedef int (*NCURSES_OUTC)(int);

typedef int (*NCURSES_WINDOW_CB)(struct _win_st* ,void*);

typedef int (*NCURSES_SCREEN_CB)(struct screen* ,void*);

typedef struct anonymous_typeX6 MEVENT;

typedef unsigned long  long  ino_t  ;

typedef struct anonymous_typeX7 DIR;

typedef struct dl_info  Dl_info  ;

typedef int errno_t;

typedef void (*os_function_t)(void*);

typedef long  ptrdiff_t  ;

typedef unsigned long  int  rsize_t  ;

typedef long  double max_align_t;

typedef unsigned short int  mode_t  ;

typedef struct fsignatures  fsignatures_t  ;

typedef struct fsupplement  fsupplement_t  ;

typedef struct fchecklv  fchecklv_t  ;

typedef struct fgetsigsinfo  fgetsigsinfo_t  ;

typedef struct fstore  fstore_t  ;

typedef struct fpunchhole  fpunchhole_t  ;

typedef struct ftrimactivefile  ftrimactivefile_t  ;

typedef struct fspecread  fspecread_t  ;

typedef struct fattributiontag  fattributiontag_t  ;

typedef struct _filesec*  filesec_t  ;

typedef enum anonymous_typeY7 filesec_property_t;

typedef struct anonymous_typeX8 fenv_t;

typedef unsigned short int fexcept_t;

typedef void* FIELD_CELL;

typedef int Form_Options;

typedef int Field_Options;

typedef struct anonymous_typeX9 _PAGE;

typedef struct fieldnode  FIELD  ;

typedef struct formnode  FORM  ;

typedef struct typenode  FIELDTYPE  ;

typedef void (*Form_Hook)(struct formnode* );

typedef int  dev_t  ;

typedef unsigned short int  nlink_t  ;

typedef struct anonymous_typeX10 FTS;

typedef struct _ftsent  FTSENT  ;

typedef long long  blkcnt_t  ;

typedef int  blksize_t  ;

typedef unsigned long  long  ino64_t  ;

typedef unsigned int  gid_t  ;

typedef long  time_t  ;

typedef unsigned int  useconds_t  ;

typedef struct fd_set  fd_set  ;

typedef int  suseconds_t  ;

typedef struct anonymous_typeX11 glob_t;

typedef struct anonymous_typeX12 gmk_floc;

typedef char* (*gmk_func_ptr)(const char*,unsigned int,char**);

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

typedef unsigned int  fixpt_t  ;

typedef unsigned int  in_addr_t  ;

typedef unsigned short int  in_port_t  ;

typedef int  key_t  ;

typedef unsigned int  id_t  ;

typedef int  segsz_t  ;

typedef int  swblk_t  ;

typedef unsigned long  int  clock_t  ;

typedef int  fd_mask  ;

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

typedef enum anonymous_typeY16 clockid_t;

typedef unsigned int  wctype_t  ;

typedef _Bool __iconv_bool;

typedef struct __tag_iconv_t*  iconv_t  ;

typedef struct anonymous_typeX17 iconv_allocation_t;

typedef void (*iconv_unicode_char_hook)(unsigned int,void*);

typedef void (*iconv_wide_char_hook)(int ,void*);

typedef void (*iconv_unicode_mb_to_uc_fallback)(const char*,unsigned long  int ,void (*)(const unsigned int*,unsigned long  int ,void*),void*,void*);

typedef void (*iconv_unicode_uc_to_mb_fallback)(unsigned int,void (*)(const char*,unsigned long  int ,void*),void*,void*);

typedef void (*iconv_wchar_mb_to_wc_fallback)(const char*,unsigned long  int ,void (*)(const int* ,unsigned long  int ,void*),void*,void*);

typedef void (*iconv_wchar_wc_to_mb_fallback)(int ,void (*)(const char*,unsigned long  int ,void*),void*,void*);

typedef struct anonymous_typeX18 imaxdiv_t;

typedef int  nl_item  ;

typedef struct _xlocale*  locale_t  ;

typedef float float_t;

typedef double double_t;

typedef int Menu_Options;

typedef int Item_Options;

typedef struct anonymous_typeX31 TEXT;

typedef struct tagITEM  ITEM  ;

typedef void (*Menu_Hook)(struct tagMENU*);

typedef struct tagMENU  MENU  ;

typedef unsigned int  socklen_t  ;

typedef unsigned char  sa_family_t  ;

typedef unsigned int  sae_associd_t  ;

typedef unsigned int  sae_connid_t  ;

typedef struct sa_endpoints  sa_endpoints_t  ;

typedef struct in6_addr  in6_addr_t  ;

typedef struct __nl_cat_d*  nl_catd  ;

typedef struct panel  PANEL  ;

typedef unsigned int nfds_t;

typedef int (*printf_arginfo_function)(const struct printf_info* ,unsigned long  int ,int*);

typedef int (*printf_function)(struct __sFILE* ,const struct printf_info* ,const void** const);

typedef struct _printf_domain*  printf_domain_t  ;

typedef struct _printf_compiled*  printf_comp_t  ;

typedef unsigned int qos_class_t;

typedef struct pthread_override_s* pthread_override_t;

typedef unsigned int  mach_port_t  ;

typedef int (*pthread_jit_write_callback_t)(void*);

typedef long long  regoff_t  ;

typedef struct anonymous_typeX34 regex_t;

typedef struct anonymous_typeX35 regmatch_t;

typedef enum __ns_sect res_9_ns_sect;

typedef const unsigned char*  ns_nname_ct  ;

typedef unsigned char*  ns_nname_t  ;

typedef struct ns_namemap*  ns_namemap_t  ;

typedef const struct ns_namemap*  ns_namemap_ct  ;

typedef struct __ns_msg  res_9_ns_msg  ;

typedef struct __ns_rr  res_9_ns_rr  ;

typedef struct __ns_rr2  ns_rr2  ;

typedef enum __ns_flag res_9_ns_flag;

typedef enum __ns_opcode res_9_ns_opcode;

typedef enum __ns_rcode res_9_ns_rcode;

typedef enum __ns_update_operation res_9_ns_update_operation;

typedef struct res_9_ns_tsig_key  res_9_ns_tsig_key  ;

typedef struct res_9_ns_tcp_tsig_state  res_9_ns_tcp_tsig_state  ;

typedef enum __ns_type ns_type;

typedef enum __ns_class res_9_ns_class;

typedef enum __ns_key_types res_9_ns_key_types;

typedef enum __ns_cert_types res_9_ns_cert_types;

typedef enum anonymous_typeY35 res_9_sendhookact;

typedef enum anonymous_typeY35 (*res_send_qhook)(struct sockaddr** const ,const unsigned char** ,int*,unsigned char* ,int,int*);

typedef enum anonymous_typeY35 (*res_send_rhook)(const struct sockaddr* ,const unsigned char* ,int,unsigned char* ,int,int*);

typedef struct __res_9_state*  res_9_state  ;

typedef enum anonymous_typeY41 ACTION;

typedef enum anonymous_typeY41 VISIT;

typedef int sem_t;

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

typedef struct anonymous_typeX50 mach_msg_type_descriptor_t;

typedef struct anonymous_typeX51 mach_msg_port_descriptor_t;

typedef struct anonymous_typeX52 mach_msg_ool_descriptor32_t;

typedef struct anonymous_typeX53 mach_msg_ool_descriptor64_t;

typedef struct anonymous_typeX54 mach_msg_ool_descriptor_t;

typedef struct anonymous_typeX55 mach_msg_ool_ports_descriptor32_t;

typedef struct anonymous_typeX56 mach_msg_ool_ports_descriptor64_t;

typedef struct anonymous_typeX57 mach_msg_ool_ports_descriptor_t;

typedef struct anonymous_typeX58 mach_msg_guarded_port_descriptor32_t;

typedef struct anonymous_typeX59 mach_msg_guarded_port_descriptor64_t;

typedef struct anonymous_typeX60 mach_msg_guarded_port_descriptor_t;

typedef union anonymous_typeZ61 mach_msg_descriptor_t;

typedef struct anonymous_typeX62 mach_msg_body_t;

typedef struct anonymous_typeX63 mach_msg_header_t;

typedef struct anonymous_typeX64 mach_msg_base_t;

typedef unsigned int mach_msg_trailer_type_t;

typedef unsigned int mach_msg_trailer_size_t;

typedef char* mach_msg_trailer_info_t;

typedef struct anonymous_typeX65 mach_msg_trailer_t;

typedef struct anonymous_typeX66 mach_msg_seqno_trailer_t;

typedef struct anonymous_typeX67 security_token_t;

typedef struct anonymous_typeX68 mach_msg_security_trailer_t;

typedef struct anonymous_typeX69 audit_token_t;

typedef struct anonymous_typeX70 mach_msg_audit_trailer_t;

typedef struct anonymous_typeX71 mach_msg_context_trailer_t;

typedef struct anonymous_typeX72 msg_labels_t;

typedef int mach_msg_filter_id;

typedef struct anonymous_typeX73 mach_msg_mac_trailer_t;

typedef struct anonymous_typeX73  mach_msg_max_trailer_t  ;

typedef struct anonymous_typeX68  mach_msg_format_0_trailer_t  ;

typedef int  mach_msg_options_t  ;

typedef struct anonymous_typeX74 mach_msg_empty_send_t;

typedef struct anonymous_typeX75 mach_msg_empty_rcv_t;

typedef union anonymous_typeZ76 mach_msg_empty_t;

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

typedef struct anonymous_typeX77 mach_vm_range_recipe_v1_t;

typedef struct anonymous_typeX77  mach_vm_range_recipe_t  ;

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

typedef enum anonymous_typeY79 idtype_t;

typedef unsigned long  long  rlim_t  ;

typedef void* rusage_info_t;

typedef struct rusage_info_v6  rusage_info_current  ;

typedef struct anonymous_typeX82 div_t;

typedef struct anonymous_typeX83 ldiv_t;

typedef struct anonymous_typeX84 lldiv_t;

typedef unsigned long  long malloc_type_id_t;

typedef struct _malloc_zone_t malloc_zone_t;

typedef unsigned long  int tcflag_t;

typedef unsigned char cc_t;

typedef unsigned long  int speed_t;

typedef struct termtype  TERMTYPE  ;

typedef struct term  TERMINAL  ;

typedef enum anonymous_typeY84 DBDIRS;

typedef struct entry  ENTRY  ;

typedef int  wctrans_t  ;

typedef struct anonymous_typeX87 wordexp_t;

/// previous struct definition ///
struct __sFILEX;

struct _telldir;

struct _filesec;

struct fssearchblock;

struct searchstate;

struct dirent;

struct stat;

struct __tag_iconv_t;

struct _xlocale;

struct cmsghdr;

struct sockaddr;

struct _printf_domain;

struct _printf_compiled;

struct __res_9_state;

struct __res_9_state_ext;

struct ifnet_interface_advisory;

struct utmp;

/// struct definition ///
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

struct __darwin_arm_exception_state
{
    unsigned int  __exception  ;
    unsigned int  __fsr  ;
    unsigned int  __far  ;
};

struct __darwin_arm_exception_state64
{
    unsigned long  long  __far  ;
    unsigned int  __esr  ;
    unsigned int  __exception  ;
};

struct __darwin_arm_exception_state64_v2
{
    unsigned long  long  __far  ;
    unsigned long  long  __esr  ;
};

struct __darwin_arm_thread_state
{
    unsigned int  __r[13]  ;
    unsigned int  __sp  ;
    unsigned int  __lr  ;
    unsigned int  __pc  ;
    unsigned int  __cpsr  ;
};

struct __darwin_arm_thread_state64
{
    unsigned long  long  __x[29]  ;
    unsigned long  long  __fp  ;
    unsigned long  long  __lr  ;
    unsigned long  long  __sp  ;
    unsigned long  long  __pc  ;
    unsigned int  __cpsr  ;
    unsigned int  __pad  ;
};

struct __darwin_arm_vfp_state
{
    unsigned int  __r[64]  ;
    unsigned int  __fpscr  ;
};

struct __darwin_arm_neon_state64
{
    __uint128_t __v[32];
    unsigned int  __fpsr  ;
    unsigned int  __fpcr  ;
};

struct __darwin_arm_neon_state
{
    __uint128_t __v[16];
    unsigned int  __fpsr  ;
    unsigned int  __fpcr  ;
};

struct __arm_pagein_state
{
    int __pagein_error;
};

struct __darwin_arm_sme_state
{
    unsigned long  long  __svcr  ;
    unsigned long  long  __tpidr2_el0  ;
    unsigned short int  __svl_b  ;
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
    unsigned int  __bvr[16]  ;
    unsigned int  __bcr[16]  ;
    unsigned int  __wvr[16]  ;
    unsigned int  __wcr[16]  ;
};

struct __darwin_arm_debug_state32
{
    unsigned int  __bvr[16]  ;
    unsigned int  __bcr[16]  ;
    unsigned int  __wvr[16]  ;
    unsigned int  __wcr[16]  ;
    unsigned long  long  __mdscr_el1  ;
};

struct __darwin_arm_debug_state64
{
    unsigned long  long  __bvr[16]  ;
    unsigned long  long  __bcr[16]  ;
    unsigned long  long  __wvr[16]  ;
    unsigned long  long  __wcr[16]  ;
    unsigned long  long  __mdscr_el1  ;
};

struct __darwin_arm_cpmu_state64
{
    unsigned long  long  __ctrs[16]  ;
};

struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state  __es  ;
    struct __darwin_arm_thread_state  __ss  ;
    struct __darwin_arm_vfp_state  __fs  ;
};

struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64  __es  ;
    struct __darwin_arm_thread_state64  __ss  ;
    struct __darwin_arm_neon_state64  __ns  ;
};

struct __darwin_sigaltstack
{
    void* ss_sp;
    unsigned long  int  ss_size  ;
    int ss_flags;
};

struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int  uc_sigmask  ;
    struct __darwin_sigaltstack  uc_stack  ;
    struct __darwin_ucontext*  uc_link  ;
    unsigned long  int  uc_mcsize  ;
    struct __darwin_mcontext64*  uc_mcontext  ;
};

union sigval
{
int sival_int;
void* sival_ptr;
};

struct sigevent
{
    int sigev_notify;
    int sigev_signo;
    union sigval  sigev_value  ;
    void (*sigev_notify_function)(union sigval );
    struct _opaque_pthread_attr_t*  sigev_notify_attributes  ;
};

struct __siginfo
{
    int si_signo;
    int si_errno;
    int si_code;
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    void* si_addr;
    union sigval  si_value  ;
    long si_band;
    unsigned long  int __pad[7];
};

union __sigaction_u
{
void (*__sa_handler)(int);
void (*__sa_sigaction)(int,struct __siginfo* ,void*);
};

struct __sigaction
{
    union __sigaction_u  __sigaction_u  ;
    void (*sa_tramp)(void*,int,int,struct __siginfo* ,void*);
    unsigned int  sa_mask  ;
    int sa_flags;
};

struct sigaction
{
    union __sigaction_u  __sigaction_u  ;
    unsigned int  sa_mask  ;
    int sa_flags;
};

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

struct timespec
{
    long  tv_sec  ;
    long tv_nsec;
};

struct aiocb
{
    int aio_fildes;
    long long  aio_offset  ;
    volatile void* aio_buf;
    unsigned long  int  aio_nbytes  ;
    int aio_reqprio;
    struct sigevent  aio_sigevent  ;
    int aio_lio_opcode;
};

struct ar_hdr
{
    char ar_name[16];
    char ar_date[12];
    char ar_uid[6];
    char ar_gid[6];
    char ar_mode[8];
    char ar_size[10];
    char ar_fmag[2];
};

struct anonymous_typeX2
{
    int  __min  ;
    int  __max  ;
    int  __map  ;
    unsigned int*  __types  ;
};

struct anonymous_typeX3
{
    int __nranges;
    struct {
        int  __min  ;
        int  __max  ;
        int  __map  ;
        unsigned int*  __types  ;
    } __ranges;
};

struct anonymous_typeX4
{
    char __name[14];
    unsigned int  __mask  ;
};

struct anonymous_typeX5
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
    struct __sbuf  _bf  ;
    int _lbfsize;
    void* _cookie;
    int (*close)(void*);
    int (*read)(void*,char*,int);
    long long  (*_seek)(void*,long long ,int);
    int (*write)(void*,const char*,int);
    struct __sbuf  _ub  ;
    struct __sFILEX*  _extra  ;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf  _lb  ;
    int _blksize;
    long long  _offset  ;
};

struct anonymous_typeX6
{
    short id;
    int x;
    int y;
    int z;
    unsigned long  int  bstate  ;
};

#pragma pack(4)
struct dirent
{
    unsigned long  long  d_ino  ;
    unsigned long  long  d_seekoff  ;
    unsigned short int  d_reclen  ;
    unsigned short int  d_namlen  ;
    unsigned char  d_type  ;
    char d_name[1024];
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX7
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
struct dl_info
{
    const char* dli_fname;
    void* dli_fbase;
    const char* dli_sname;
    void* dli_saddr;
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
struct flock
{
    long long  l_start  ;
    long long  l_len  ;
    int  l_pid  ;
    short l_type;
    short l_whence;
};
#pragma pack(pop)
#pragma pack(4)
struct flocktimeout
{
    struct flock  fl  ;
    struct timespec  timeout  ;
};
#pragma pack(pop)
#pragma pack(4)
struct radvisory
{
    long long  ra_offset  ;
    int ra_count;
};
#pragma pack(pop)
#pragma pack(4)
struct fsignatures
{
    long long  fs_file_start  ;
    void* fs_blob_start;
    unsigned long  int  fs_blob_size  ;
    unsigned long  int  fs_fsignatures_size  ;
    char fs_cdhash[20];
    int fs_hash_type;
};
#pragma pack(pop)
#pragma pack(4)
struct fsupplement
{
    long long  fs_file_start  ;
    long long  fs_blob_start  ;
    unsigned long  int  fs_blob_size  ;
    int fs_orig_fd;
};
#pragma pack(pop)
#pragma pack(4)
struct fchecklv
{
    long long  lv_file_start  ;
    unsigned long  int  lv_error_message_size  ;
    void* lv_error_message;
};
#pragma pack(pop)
#pragma pack(4)
struct fgetsigsinfo
{
    long long  fg_file_start  ;
    int fg_info_request;
    int fg_sig_is_platform;
};
#pragma pack(pop)
#pragma pack(4)
struct fstore
{
    unsigned int fst_flags;
    int fst_posmode;
    long long  fst_offset  ;
    long long  fst_length  ;
    long long  fst_bytesalloc  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fpunchhole
{
    unsigned int fp_flags;
    unsigned int reserved;
    long long  fp_offset  ;
    long long  fp_length  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ftrimactivefile
{
    long long  fta_offset  ;
    long long  fta_length  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fspecread
{
    unsigned int fsr_flags;
    unsigned int reserved;
    long long  fsr_offset  ;
    long long  fsr_length  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fattributiontag
{
    unsigned int ft_flags;
    unsigned long  long ft_hash;
    char ft_attribution_name[255];
};
#pragma pack(pop)
#pragma pack(4)
struct log2phys
{
    unsigned int l2p_flags;
    long long  l2p_contigbytes  ;
    long long  l2p_devoffset  ;
};
#pragma pack(pop)
enum  anonymous_typeY7 { FILESEC_OWNER=(1),
FILESEC_GROUP=(2),
FILESEC_UUID=(3),
FILESEC_MODE=(4),
FILESEC_ACL=(5),
FILESEC_GRPUUID=(6),
FILESEC_ACL_RAW=(100),
FILESEC_ACL_ALLOCSIZE=(101)
};

#pragma pack(4)
struct anonymous_typeX8
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
struct anonymous_typeX9
{
    short pmin;
    short pmax;
    short smin;
    short smax;
};
#pragma pack(pop)
#pragma pack(4)
struct fieldnode
{
    unsigned short int status;
    short rows;
    short cols;
    short frow;
    short fcol;
    int drows;
    int dcols;
    int maxgrow;
    int nrow;
    short nbuf;
    short just;
    short page;
    short index;
    int pad;
    unsigned int  fore  ;
    unsigned int  back  ;
    int  opts  ;
    struct fieldnode*  snext  ;
    struct fieldnode*  sprev  ;
    struct fieldnode*  link  ;
    struct formnode* form;
    struct typenode* type;
    void* arg;
    void**  buf  ;
    void* usrptr;
};
#pragma pack(pop)
#pragma pack(4)
struct formnode
{
    unsigned short int status;
    short rows;
    short cols;
    int currow;
    int curcol;
    int toprow;
    int begincol;
    short maxfield;
    short maxpage;
    short curpage;
    int  opts  ;
    struct _win_st*  win  ;
    struct _win_st*  sub  ;
    struct _win_st*  w  ;
    struct fieldnode**  field  ;
    struct fieldnode*  current  ;
    struct {
        short pmin;
        short pmax;
        short smin;
        short smax;
    } page;
    void* usrptr;
    void (*forminit)(struct formnode* );
    void (*formterm)(struct formnode* );
    void (*fieldinit)(struct formnode* );
    void (*fieldterm)(struct formnode* );
};
#pragma pack(pop)
#pragma pack(4)
struct typenode
{
    unsigned short int status;
    long ref;
    struct typenode*  left  ;
    struct typenode*  right  ;
    void* (*makearg)(__builtin_va_list );
    void* (*copyarg)(const void*);
    void (*freearg)(void*);
    _Bool (*fcheck)(struct fieldnode* ,const void*);
    _Bool (*ccheck)(int,const void*);
    _Bool (*next)(struct fieldnode* ,const void*);
    _Bool (*prev)(struct fieldnode* ,const void*);
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX10
{
    struct _ftsent* fts_cur;
    struct _ftsent* fts_child;
    struct _ftsent** fts_array;
    int  fts_dev  ;
    char* fts_path;
    int fts_rfd;
    int fts_pathlen;
    int fts_nitems;
    int (*fts_compar)();
    int fts_options;
};
#pragma pack(pop)
#pragma pack(4)
struct _ftsent
{
    struct _ftsent*  fts_cycle  ;
    struct _ftsent*  fts_parent  ;
    struct _ftsent*  fts_link  ;
    long fts_number;
    void* fts_pointer;
    char* fts_accpath;
    char* fts_path;
    int fts_errno;
    int fts_symfd;
    unsigned short int fts_pathlen;
    unsigned short int fts_namelen;
    unsigned long  long  fts_ino  ;
    int  fts_dev  ;
    unsigned short int  fts_nlink  ;
    short fts_level;
    unsigned short int fts_info;
    unsigned short int fts_flags;
    unsigned short int fts_instr;
    struct stat* fts_statp;
    char fts_name[1];
};
#pragma pack(pop)
#pragma pack(4)
struct ostat
{
    unsigned short int  st_dev  ;
    unsigned long  long  st_ino  ;
    unsigned short int  st_mode  ;
    unsigned short int  st_nlink  ;
    unsigned short int  st_uid  ;
    unsigned short int  st_gid  ;
    unsigned short int  st_rdev  ;
    int  st_size  ;
    struct timespec  st_atimespec  ;
    struct timespec  st_mtimespec  ;
    struct timespec  st_ctimespec  ;
    int  st_blksize  ;
    int  st_blocks  ;
    unsigned int  st_flags  ;
    unsigned int  st_gen  ;
};
#pragma pack(pop)
#pragma pack(4)
struct stat
{
    int  st_dev  ;
    unsigned short int  st_mode  ;
    unsigned short int  st_nlink  ;
    unsigned long  long  st_ino  ;
    unsigned int  st_uid  ;
    unsigned int  st_gid  ;
    int  st_rdev  ;
    struct timespec  st_atimespec  ;
    struct timespec  st_mtimespec  ;
    struct timespec  st_ctimespec  ;
    struct timespec  st_birthtimespec  ;
    long long  st_size  ;
    long long  st_blocks  ;
    int  st_blksize  ;
    unsigned int  st_flags  ;
    unsigned int  st_gen  ;
    int  st_lspare  ;
    long long  st_qspare[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct FTW
{
    int base;
    int level;
};
#pragma pack(pop)
#pragma pack(4)
struct accessx_descriptor
{
    unsigned int ad_name_offset;
    int ad_flags;
    int ad_pad[2];
};
#pragma pack(pop)
#pragma pack(4)
struct fd_set
{
    int  fds_bits[((((((1024)%(32))==0))?(((1024)/(32))):((((1024)/(32))+1))))]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct timeval
{
    long  tv_sec  ;
    int  tv_usec  ;
};
#pragma pack(pop)
#pragma pack(4)
struct option
{
    const char* name;
    int has_arg;
    int* flag;
    int val;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX11
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
struct anonymous_typeX12
{
    const char* filenm;
    unsigned long  int lineno;
};
#pragma pack(pop)
#pragma pack(4)
struct group
{
    char* gr_name;
    char* gr_passwd;
    unsigned int  gr_gid  ;
    char** gr_mem;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ13
{
unsigned long  long  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ14
{
unsigned long  long  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ15
{
unsigned long  long  _ull  ;
unsigned int  _ul[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ16
{
unsigned long  long  _ull  ;
unsigned int  _ul[2]  ;
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
enum  anonymous_typeY16 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

#pragma pack(4)
struct anonymous_typeX17
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
#pragma pack(4)
struct ifaddrs
{
    struct ifaddrs*  ifa_next  ;
    char* ifa_name;
    unsigned int ifa_flags;
    struct sockaddr* ifa_addr;
    struct sockaddr* ifa_netmask;
    struct sockaddr* ifa_dstaddr;
    void* ifa_data;
};
#pragma pack(pop)
#pragma pack(4)
struct ifmaddrs
{
    struct ifmaddrs*  ifma_next  ;
    struct sockaddr* ifma_name;
    struct sockaddr* ifma_addr;
    struct sockaddr* ifma_lladdr;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX18
{
    long  int  quot  ;
    long  int  rem  ;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ19
{
float __f;
unsigned int __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ20
{
float __f;
unsigned int __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ21
{
float __f;
unsigned int __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ22
{
float __f;
unsigned int __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ23
{
double __f;
unsigned long  long __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ24
{
double __f;
unsigned long  long __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ25
{
double __f;
unsigned long  long __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ26
{
double __f;
unsigned long  long __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ27
{
long  double __f;
unsigned long  long __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ28
{
long  double __f;
unsigned long  long __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ29
{
long  double __f;
unsigned long  long __u;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ30
{
long  double __f;
unsigned long  long __u;
};
#pragma pack(pop)
#pragma pack(4)
struct __float2
{
    float __sinval;
    float __cosval;
};
#pragma pack(pop)
#pragma pack(4)
struct __double2
{
    double __sinval;
    double __cosval;
};
#pragma pack(pop)
#pragma pack(4)
struct exception
{
    int type;
    char* name;
    double arg1;
    double arg2;
    double retval;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX31
{
    const char* str;
    unsigned short int length;
};
#pragma pack(pop)
#pragma pack(4)
struct tagITEM
{
    struct {
        const char* str;
        unsigned short int length;
    } name;
    struct {
        const char* str;
        unsigned short int length;
    } description;
    struct tagMENU* imenu;
    void* userptr;
    int  opt  ;
    short index;
    short y;
    short x;
    _Bool value;
    struct tagITEM*  left  ;
    struct tagITEM*  right  ;
    struct tagITEM*  up  ;
    struct tagITEM*  down  ;
};
#pragma pack(pop)
#pragma pack(4)
struct tagMENU
{
    short height;
    short width;
    short rows;
    short cols;
    short frows;
    short fcols;
    short arows;
    short namelen;
    short desclen;
    short marklen;
    short itemlen;
    short spc_desc;
    short spc_cols;
    short spc_rows;
    char* pattern;
    short pindex;
    struct _win_st*  win  ;
    struct _win_st*  sub  ;
    struct _win_st*  userwin  ;
    struct _win_st*  usersub  ;
    struct tagITEM**  items  ;
    short nitems;
    struct tagITEM*  curitem  ;
    short toprow;
    unsigned int  fore  ;
    unsigned int  back  ;
    unsigned int  grey  ;
    unsigned char pad;
    void (*menuinit)(struct tagMENU*)  ;
    void (*menuterm)(struct tagMENU*)  ;
    void (*iteminit)(struct tagMENU*)  ;
    void (*itemterm)(struct tagMENU*)  ;
    void* userptr;
    char* mark;
    int  opt  ;
    unsigned short int status;
};
#pragma pack(pop)
#pragma pack(4)
struct iovec
{
    void* iov_base;
    unsigned long  int  iov_len  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sa_endpoints
{
    unsigned int sae_srcif;
    const struct sockaddr* sae_srcaddr;
    unsigned int  sae_srcaddrlen  ;
    const struct sockaddr* sae_dstaddr;
    unsigned int  sae_dstaddrlen  ;
};
#pragma pack(pop)
#pragma pack(4)
struct linger
{
    int l_onoff;
    int l_linger;
};
#pragma pack(pop)
#pragma pack(4)
struct so_np_extensions
{
    unsigned int  npx_flags  ;
    unsigned int  npx_mask  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sockaddr
{
    unsigned char  sa_len  ;
    unsigned char  sa_family  ;
    char sa_data[14];
};
#pragma pack(pop)
#pragma pack(4)
struct __sockaddr_header
{
    unsigned char  sa_len  ;
    unsigned char  sa_family  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sockproto
{
    unsigned short int  sp_family  ;
    unsigned short int  sp_protocol  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sockaddr_storage
{
    unsigned char  ss_len  ;
    unsigned char  ss_family  ;
    char __ss_pad1[((sizeof(long long ))-sizeof(unsigned char )-sizeof(unsigned char ))];
    long long  __ss_align  ;
    char __ss_pad2[(128-sizeof(unsigned char )-sizeof(unsigned char )-((sizeof(long long ))-sizeof(unsigned char )-sizeof(unsigned char ))-(sizeof(long long )))];
};
#pragma pack(pop)
#pragma pack(4)
struct msghdr
{
    void* msg_name;
    unsigned int  msg_namelen  ;
    struct iovec*  msg_iov  ;
    int msg_iovlen;
    void* msg_control;
    unsigned int  msg_controllen  ;
    int msg_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct cmsghdr
{
    unsigned int  cmsg_len  ;
    int cmsg_level;
    int cmsg_type;
};
#pragma pack(pop)
#pragma pack(4)
struct sf_hdtr
{
    struct iovec*  headers  ;
    int hdr_cnt;
    struct iovec*  trailers  ;
    int trl_cnt;
};
#pragma pack(pop)
#pragma pack(4)
struct in_addr
{
    unsigned int  s_addr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sockaddr_in
{
    unsigned char  sin_len  ;
    unsigned char  sin_family  ;
    unsigned short int  sin_port  ;
    struct in_addr  sin_addr  ;
    char sin_zero[8];
};
#pragma pack(pop)
#pragma pack(4)
struct ip_opts
{
    struct in_addr  ip_dst  ;
    char ip_opts[40];
};
#pragma pack(pop)
#pragma pack(4)
struct ip_mreq
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_interface  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ip_mreqn
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_address  ;
    int imr_ifindex;
};
#pragma pack(pop)
#pragma pack(4)
struct ip_mreq_source
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_sourceaddr  ;
    struct in_addr  imr_interface  ;
};
#pragma pack(pop)
#pragma pack(4)
struct group_req
{
    unsigned int  gr_interface  ;
    struct sockaddr_storage  gr_group  ;
};
#pragma pack(pop)
#pragma pack(4)
struct group_source_req
{
    unsigned int  gsr_interface  ;
    struct sockaddr_storage  gsr_group  ;
    struct sockaddr_storage  gsr_source  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __msfilterreq
{
    unsigned int  msfr_ifindex  ;
    unsigned int  msfr_fmode  ;
    unsigned int  msfr_nsrcs  ;
    unsigned int  __msfr_align  ;
    struct sockaddr_storage  msfr_group  ;
    struct sockaddr_storage*  msfr_srcs  ;
};
#pragma pack(pop)
#pragma pack(4)
struct in_pktinfo
{
    unsigned int ipi_ifindex;
    struct in_addr  ipi_spec_dst  ;
    struct in_addr  ipi_addr  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ32
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ33
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct in6_addr
{
    union {
        unsigned char  __u6_addr8[16]  ;
        unsigned short int  __u6_addr16[8]  ;
        unsigned int  __u6_addr32[4]  ;
    } __u6_addr;
};
#pragma pack(pop)
#pragma pack(4)
struct sockaddr_in6
{
    unsigned char  sin6_len  ;
    unsigned char  sin6_family  ;
    unsigned short int  sin6_port  ;
    unsigned int  sin6_flowinfo  ;
    struct in6_addr  sin6_addr  ;
    unsigned int  sin6_scope_id  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ipv6_mreq
{
    struct in6_addr  ipv6mr_multiaddr  ;
    unsigned int ipv6mr_interface;
};
#pragma pack(pop)
#pragma pack(4)
struct in6_pktinfo
{
    struct in6_addr  ipi6_addr  ;
    unsigned int ipi6_ifindex;
};
#pragma pack(pop)
#pragma pack(4)
struct ip6_mtuinfo
{
    struct sockaddr_in6  ip6m_addr  ;
    unsigned int  ip6m_mtu  ;
};
#pragma pack(pop)
#pragma pack(4)
struct hostent
{
    char* h_name;
    char** h_aliases;
    int h_addrtype;
    int h_length;
    char** h_addr_list;
};
#pragma pack(pop)
#pragma pack(4)
struct netent
{
    char* n_name;
    char** n_aliases;
    int n_addrtype;
    unsigned int  n_net  ;
};
#pragma pack(pop)
#pragma pack(4)
struct servent
{
    char* s_name;
    char** s_aliases;
    int s_port;
    char* s_proto;
};
#pragma pack(pop)
#pragma pack(4)
struct protoent
{
    char* p_name;
    char** p_aliases;
    int p_proto;
};
#pragma pack(pop)
#pragma pack(4)
struct addrinfo
{
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    unsigned int  ai_addrlen  ;
    char* ai_canonname;
    struct sockaddr*  ai_addr  ;
    struct addrinfo*  ai_next  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rpcent
{
    char* r_name;
    char** r_aliases;
    int r_number;
};
#pragma pack(pop)
#pragma pack(4)
struct __nl_cat_d
{
    void* __data;
    int __size;
};
#pragma pack(pop)
#pragma pack(4)
struct panel
{
    struct _win_st*  win  ;
    struct panel*  below  ;
    struct panel*  above  ;
    void* user;
};
#pragma pack(pop)
#pragma pack(4)
struct pollfd
{
    int fd;
    short events;
    short revents;
};
#pragma pack(pop)
#pragma pack(4)
struct printf_info
{
    void* context;
    struct _xlocale*  loc  ;
    int  vsep  ;
    int prec;
    int width;
    int  spec  ;
    int  pad  ;
    int  signchar  ;
    unsigned int is_long_double:1;
    unsigned int is_char:1;
    unsigned int is_short:1;
    unsigned int is_long:1;
    unsigned int alt:1;
    unsigned int space:1;
    unsigned int left:1;
    unsigned int showsign:1;
    unsigned int group:1;
    unsigned int extra:1;
    unsigned int wide:1;
    unsigned int is_quad:1;
    unsigned int is_intmax:1;
    unsigned int is_ptrdiff:1;
    unsigned int is_size:1;
    unsigned int is_vec:1;
    int sofar;
    unsigned int get_width;
    unsigned int get_prec;
    const char* begin;
    const char* end;
    void* arg[2];
};
#pragma pack(pop)
enum { PA_INT=((1<<0)),
PA_CHAR=((1<<1)),
PA_WCHAR=((1<<2)),
PA_STRING=((1<<3)),
PA_WSTRING=((1<<4)),
PA_POINTER=((1<<5)),
PA_FLOAT=((1<<6)),
PA_DOUBLE=((1<<7)),
PA_VECTOR=((1<<8))
};

#pragma pack(4)
struct sched_param
{
    int sched_priority;
    char __opaque[4];
};
#pragma pack(pop)
enum { QOS_CLASS_USER_INTERACTIVE=(0x21),
QOS_CLASS_USER_INITIATED=(0x19),
QOS_CLASS_DEFAULT=(0x15),
QOS_CLASS_UTILITY=(0x11),
QOS_CLASS_BACKGROUND=(0x09),
QOS_CLASS_UNSPECIFIED=(0x00)
};

#pragma pack(4)
struct passwd
{
    char* pw_name;
    char* pw_passwd;
    unsigned int  pw_uid  ;
    unsigned int  pw_gid  ;
    long  pw_change  ;
    char* pw_class;
    char* pw_gecos;
    char* pw_dir;
    char* pw_shell;
    long  pw_expire  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX34
{
    int re_magic;
    unsigned long  int  re_nsub  ;
    const char* re_endp;
    struct re_guts* re_g;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX35
{
    long long  rm_so  ;
    long long  rm_eo  ;
};
#pragma pack(pop)
enum  __ns_sect { ns_s_qd=(0),
ns_s_zn=(0),
ns_s_an=(1),
ns_s_pr=(1),
ns_s_ns=(2),
ns_s_ud=(2),
ns_s_ar=(3),
ns_s_max=(4)
};

typedef unsigned char  ns_nname[256]  ;

#pragma pack(4)
struct ns_namemap
{
    const unsigned char*  base  ;
    int len;
};
#pragma pack(pop)
#pragma pack(4)
struct __ns_msg
{
    const unsigned char*  _msg  ;
    const unsigned char*  _eom  ;
    unsigned short int  _id  ;
    unsigned short int  _flags  ;
    unsigned short int  _counts[(4)]  ;
    const unsigned char*  _sections[(4)]  ;
    enum __ns_sect  _sect  ;
    int _rrnum;
    const unsigned char*  _msg_ptr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct _res_9_ns_flagdata
{
    int mask;
    int shift;
};
#pragma pack(pop)
#pragma pack(4)
struct __ns_rr
{
    char name[1025];
    unsigned short int  type  ;
    unsigned short int  rr_class  ;
    unsigned int  ttl  ;
    unsigned short int  rdlength  ;
    const unsigned char*  rdata  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __ns_rr2
{
    unsigned char  nname[256]  ;
    unsigned long  int  nnamel  ;
    int type;
    int rr_class;
    unsigned int  ttl  ;
    int rdlength;
    const unsigned char*  rdata  ;
};
#pragma pack(pop)
enum  __ns_flag { ns_f_qr 
,ns_f_opcode 
,ns_f_aa 
,ns_f_tc 
,ns_f_rd 
,ns_f_ra 
,ns_f_z 
,ns_f_ad 
,ns_f_cd 
,ns_f_rcode 
,ns_f_max 
};

enum  __ns_opcode { ns_o_query=(0),
ns_o_iquery=(1),
ns_o_status=(2),
ns_o_notify=(4),
ns_o_update=(5),
ns_o_max=(6)
};

enum  __ns_rcode { ns_r_noerror=(0),
ns_r_formerr=(1),
ns_r_servfail=(2),
ns_r_nxdomain=(3),
ns_r_notimpl=(4),
ns_r_refused=(5),
ns_r_yxdomain=(6),
ns_r_yxrrset=(7),
ns_r_nxrrset=(8),
ns_r_notauth=(9),
ns_r_notzone=(10),
ns_r_max=(11),
ns_r_badvers=(16),
ns_r_badsig=(16),
ns_r_badkey=(17),
ns_r_badtime=(18)
};

enum  __ns_update_operation { ns_uop_delete=(0),
ns_uop_add=(1),
ns_uop_max=(2)
};

#pragma pack(4)
struct res_9_ns_tsig_key
{
    char name[1025];
    char alg[1025];
    unsigned char* data;
    int len;
};
#pragma pack(pop)
#pragma pack(4)
struct res_9_ns_tcp_tsig_state
{
    int counter;
    struct dst_key* key;
    void* ctx;
    unsigned char sig[512];
    int siglen;
};
#pragma pack(pop)
enum  __ns_type { ns_t_invalid=(0),
ns_t_a=(1),
ns_t_ns=(2),
ns_t_md=(3),
ns_t_mf=(4),
ns_t_cname=(5),
ns_t_soa=(6),
ns_t_mb=(7),
ns_t_mg=(8),
ns_t_mr=(9),
ns_t_null=(10),
ns_t_wks=(11),
ns_t_ptr=(12),
ns_t_hinfo=(13),
ns_t_minfo=(14),
ns_t_mx=(15),
ns_t_txt=(16),
ns_t_rp=(17),
ns_t_afsdb=(18),
ns_t_x25=(19),
ns_t_isdn=(20),
ns_t_rt=(21),
ns_t_nsap=(22),
ns_t_nsap_ptr=(23),
ns_t_sig=(24),
ns_t_key=(25),
ns_t_px=(26),
ns_t_gpos=(27),
ns_t_aaaa=(28),
ns_t_loc=(29),
ns_t_nxt=(30),
ns_t_eid=(31),
ns_t_nimloc=(32),
ns_t_srv=(33),
ns_t_atma=(34),
ns_t_naptr=(35),
ns_t_kx=(36),
ns_t_cert=(37),
ns_t_a6=(38),
ns_t_dname=(39),
ns_t_sink=(40),
ns_t_opt=(41),
ns_t_apl=(42),
ns_t_ds=(43),
ns_t_sshfp=(44),
ns_t_ipseckey=(45),
ns_t_rrsig=(46),
ns_t_nsec=(47),
ns_t_dnskey=(48),
ns_t_dhcid=(49),
ns_t_nsec3=(50),
ns_t_nsec3param=(51),
ns_t_hip=(55),
ns_t_spf=(99),
ns_t_tkey=(249),
ns_t_tsig=(250),
ns_t_ixfr=(251),
ns_t_axfr=(252),
ns_t_mailb=(253),
ns_t_maila=(254),
ns_t_any=(255),
ns_t_zxfr=(256),
ns_t_dlv=(32769),
ns_t_max=(65536)
};

enum  __ns_class { ns_c_invalid=(0),
ns_c_in=(1),
ns_c_2=(2),
ns_c_chaos=(3),
ns_c_hs=(4),
ns_c_none=(254),
ns_c_any=(255),
ns_c_max=(65536)
};

enum  __ns_key_types { ns_kt_rsa=(1),
ns_kt_dh=(2),
ns_kt_dsa=(3),
ns_kt_private=(254)
};

enum  __ns_cert_types { cert_t_pkix=(1),
cert_t_spki=(2),
cert_t_pgp=(3),
cert_t_url=(253),
cert_t_oid=(254)
};

enum  anonymous_typeY35 { res_9_goahead 
,res_9_nextns 
,res_9_modified 
,res_9_done 
,res_9_error 
};

#pragma pack(4)
struct res_9_sym
{
    int number;
    const char* name;
    const char* humanname;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX36
{
    struct in_addr  addr  ;
    unsigned int  mask  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX37
{
    struct in_addr  addr  ;
    unsigned int  mask  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX39
{
    unsigned short int  nscount  ;
    unsigned short int  nstimes[3]  ;
    int nssocks[3];
    struct __res_9_state_ext*  ext  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ38
{
char pad[72-4*sizeof(int)-3*sizeof(void*)];
    struct {
        unsigned short int  nscount  ;
        unsigned short int  nstimes[3]  ;
        int nssocks[3];
        struct __res_9_state_ext*  ext  ;
    } _ext;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX41
{
    unsigned short int  nscount  ;
    unsigned short int  nstimes[3]  ;
    int nssocks[3];
    struct __res_9_state_ext*  ext  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ40
{
char pad[72-4*sizeof(int)-3*sizeof(void*)];
    struct {
        unsigned short int  nscount  ;
        unsigned short int  nstimes[3]  ;
        int nssocks[3];
        struct __res_9_state_ext*  ext  ;
    } _ext;
};
#pragma pack(pop)
#pragma pack(4)
struct __res_9_state
{
    int retrans;
    int retry;
    unsigned long  int  options  ;
    int nscount;
    struct sockaddr_in  nsaddr_list[3]  ;
    unsigned short int  id  ;
    char* dnsrch[6+1];
    char defdname[256];
    unsigned long  int  pfcode  ;
    unsigned int ndots:4;
    unsigned int nsort:4;
    char unused[3];
    struct {
        struct in_addr  addr  ;
        unsigned int  mask  ;
    } sort_list;
    enum anonymous_typeY35 (*qhook)(struct sockaddr** const ,const unsigned char** ,int*,unsigned char* ,int,int*)  ;
    enum anonymous_typeY35 (*rhook)(const struct sockaddr* ,const unsigned char* ,int,unsigned char* ,int,int*)  ;
    int res_h_errno;
    int _vcsock;
    unsigned int  _flags  ;
    unsigned int  _pad  ;
    union {
        char pad[72-4*sizeof(int)-3*sizeof(void*)];
        struct {
            unsigned short int  nscount  ;
            unsigned short int  nstimes[3]  ;
            int nssocks[3];
            struct __res_9_state_ext*  ext  ;
        } _ext;
    } _u;
    unsigned char*  _rnd  ;
};
#pragma pack(pop)
#pragma pack(4)
union res_9_sockaddr_union
{
struct sockaddr_in  sin  ;
struct sockaddr_in6  sin6  ;
int  __align32  ;
char __space[128];
};
#pragma pack(pop)
#pragma pack(4)
struct entry
{
    char* key;
    void* data;
};
#pragma pack(pop)
enum  anonymous_typeY41 { FIND 
,ENTER 
};

typedef int jmp_buf[((14+8+2)*2)];

typedef int sigjmp_buf[((14+8+2)*2)+1];

#pragma pack(4)
struct winsize
{
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
};
#pragma pack(pop)
#pragma pack(4)
struct ttysize
{
    unsigned short int ts_lines;
    unsigned short int ts_cols;
    unsigned short int ts_xxx;
    unsigned short int ts_yyy;
};
#pragma pack(pop)
#pragma pack(4)
struct timeval64
{
    long long  tv_sec  ;
    long long  tv_usec  ;
};
#pragma pack(pop)
#pragma pack(4)
struct itimerval
{
    struct timeval  it_interval  ;
    struct timeval  it_value  ;
};
#pragma pack(pop)
#pragma pack(4)
struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};
#pragma pack(pop)
#pragma pack(4)
struct clockinfo
{
    int hz;
    int tick;
    int tickadj;
    int stathz;
    int profhz;
};
#pragma pack(pop)
#pragma pack(4)
struct net_event_data
{
    unsigned int  if_family  ;
    unsigned int  if_unit  ;
    char if_name[16];
};
#pragma pack(pop)
#pragma pack(4)
struct timeval32
{
    int  tv_sec  ;
    int  tv_usec  ;
};
#pragma pack(pop)
#pragma pack(4)
struct if_data
{
    unsigned char  ifi_type  ;
    unsigned char  ifi_typelen  ;
    unsigned char  ifi_physical  ;
    unsigned char  ifi_addrlen  ;
    unsigned char  ifi_hdrlen  ;
    unsigned char  ifi_recvquota  ;
    unsigned char  ifi_xmitquota  ;
    unsigned char  ifi_unused1  ;
    unsigned int  ifi_mtu  ;
    unsigned int  ifi_metric  ;
    unsigned int  ifi_baudrate  ;
    unsigned int  ifi_ipackets  ;
    unsigned int  ifi_ierrors  ;
    unsigned int  ifi_opackets  ;
    unsigned int  ifi_oerrors  ;
    unsigned int  ifi_collisions  ;
    unsigned int  ifi_ibytes  ;
    unsigned int  ifi_obytes  ;
    unsigned int  ifi_imcasts  ;
    unsigned int  ifi_omcasts  ;
    unsigned int  ifi_iqdrops  ;
    unsigned int  ifi_noproto  ;
    unsigned int  ifi_recvtiming  ;
    unsigned int  ifi_xmittiming  ;
    struct timeval32  ifi_lastchange  ;
    unsigned int  ifi_unused2  ;
    unsigned int  ifi_hwassist  ;
    unsigned int  ifi_reserved1  ;
    unsigned int  ifi_reserved2  ;
};
#pragma pack(pop)
#pragma pack(4)
struct if_data64
{
    unsigned char  ifi_type  ;
    unsigned char  ifi_typelen  ;
    unsigned char  ifi_physical  ;
    unsigned char  ifi_addrlen  ;
    unsigned char  ifi_hdrlen  ;
    unsigned char  ifi_recvquota  ;
    unsigned char  ifi_xmitquota  ;
    unsigned char  ifi_unused1  ;
    unsigned int  ifi_mtu  ;
    unsigned int  ifi_metric  ;
    unsigned long  long  ifi_baudrate  ;
    unsigned long  long  ifi_ipackets  ;
    unsigned long  long  ifi_ierrors  ;
    unsigned long  long  ifi_opackets  ;
    unsigned long  long  ifi_oerrors  ;
    unsigned long  long  ifi_collisions  ;
    unsigned long  long  ifi_ibytes  ;
    unsigned long  long  ifi_obytes  ;
    unsigned long  long  ifi_imcasts  ;
    unsigned long  long  ifi_omcasts  ;
    unsigned long  long  ifi_iqdrops  ;
    unsigned long  long  ifi_noproto  ;
    unsigned int  ifi_recvtiming  ;
    unsigned int  ifi_xmittiming  ;
    struct timeval32  ifi_lastchange  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifqueue
{
    void* ifq_head;
    void* ifq_tail;
    int ifq_len;
    int ifq_maxlen;
    int ifq_drops;
};
#pragma pack(pop)
#pragma pack(4)
struct if_clonereq
{
    int ifcr_total;
    int ifcr_count;
    char* ifcr_buffer;
};
#pragma pack(pop)
#pragma pack(4)
struct if_msghdr
{
    unsigned short int ifm_msglen;
    unsigned char ifm_version;
    unsigned char ifm_type;
    int ifm_addrs;
    int ifm_flags;
    unsigned short int ifm_index;
    struct if_data  ifm_data  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifa_msghdr
{
    unsigned short int ifam_msglen;
    unsigned char ifam_version;
    unsigned char ifam_type;
    int ifam_addrs;
    int ifam_flags;
    unsigned short int ifam_index;
    int ifam_metric;
};
#pragma pack(pop)
#pragma pack(4)
struct ifma_msghdr
{
    unsigned short int ifmam_msglen;
    unsigned char ifmam_version;
    unsigned char ifmam_type;
    int ifmam_addrs;
    int ifmam_flags;
    unsigned short int ifmam_index;
};
#pragma pack(pop)
#pragma pack(4)
struct if_msghdr2
{
    unsigned short int  ifm_msglen  ;
    unsigned char  ifm_version  ;
    unsigned char  ifm_type  ;
    int ifm_addrs;
    int ifm_flags;
    unsigned short int  ifm_index  ;
    int ifm_snd_len;
    int ifm_snd_maxlen;
    int ifm_snd_drops;
    int ifm_timer;
    struct if_data64  ifm_data  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifma_msghdr2
{
    unsigned short int  ifmam_msglen  ;
    unsigned char  ifmam_version  ;
    unsigned char  ifmam_type  ;
    int ifmam_addrs;
    int ifmam_flags;
    unsigned short int  ifmam_index  ;
    int  ifmam_refcount  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifdevmtu
{
    int ifdm_current;
    int ifdm_min;
    int ifdm_max;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ42
{
void* ifk_ptr;
int ifk_value;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ43
{
void* ifk_ptr;
int ifk_value;
};
#pragma pack(pop)
#pragma pack(4)
struct ifkpi
{
    unsigned int ifk_module_id;
    unsigned int ifk_type;
    union {
        void* ifk_ptr;
        int ifk_value;
    } ifk_data;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ44
{
struct sockaddr  ifru_addr  ;
struct sockaddr  ifru_dstaddr  ;
struct sockaddr  ifru_broadaddr  ;
short ifru_flags;
int ifru_metric;
int ifru_mtu;
int ifru_phys;
int ifru_media;
int ifru_intval;
char*  ifru_data  ;
struct ifdevmtu  ifru_devmtu  ;
struct ifkpi  ifru_kpi  ;
unsigned int  ifru_wake_flags  ;
unsigned int  ifru_route_refcnt  ;
int ifru_cap[2];
unsigned int  ifru_functional_type  ;
unsigned int  ifru_peer_egress_functional_type  ;
unsigned char  ifru_is_directlink  ;
unsigned char  ifru_is_vpn  ;
unsigned char  ifru_is_companionlink  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ45
{
struct sockaddr  ifru_addr  ;
struct sockaddr  ifru_dstaddr  ;
struct sockaddr  ifru_broadaddr  ;
short ifru_flags;
int ifru_metric;
int ifru_mtu;
int ifru_phys;
int ifru_media;
int ifru_intval;
char*  ifru_data  ;
struct ifdevmtu  ifru_devmtu  ;
struct ifkpi  ifru_kpi  ;
unsigned int  ifru_wake_flags  ;
unsigned int  ifru_route_refcnt  ;
int ifru_cap[2];
unsigned int  ifru_functional_type  ;
unsigned int  ifru_peer_egress_functional_type  ;
unsigned char  ifru_is_directlink  ;
unsigned char  ifru_is_vpn  ;
unsigned char  ifru_is_companionlink  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifreq
{
    char ifr_name[16];
    union {
        struct sockaddr  ifru_addr  ;
        struct sockaddr  ifru_dstaddr  ;
        struct sockaddr  ifru_broadaddr  ;
        short ifru_flags;
        int ifru_metric;
        int ifru_mtu;
        int ifru_phys;
        int ifru_media;
        int ifru_intval;
        char*  ifru_data  ;
        struct ifdevmtu  ifru_devmtu  ;
        struct ifkpi  ifru_kpi  ;
        unsigned int  ifru_wake_flags  ;
        unsigned int  ifru_route_refcnt  ;
        int ifru_cap[2];
        unsigned int  ifru_functional_type  ;
        unsigned int  ifru_peer_egress_functional_type  ;
        unsigned char  ifru_is_directlink  ;
        unsigned char  ifru_is_vpn  ;
        unsigned char  ifru_is_companionlink  ;
    } ifr_ifru;
};
#pragma pack(pop)
#pragma pack(4)
struct ifaliasreq
{
    char ifra_name[16];
    struct sockaddr  ifra_addr  ;
    struct sockaddr  ifra_broadaddr  ;
    struct sockaddr  ifra_mask  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rslvmulti_req
{
    struct sockaddr*  sa  ;
    struct sockaddr**  llsa  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifmediareq
{
    char ifm_name[16];
    int ifm_current;
    int ifm_mask;
    int ifm_status;
    int ifm_active;
    int ifm_count;
    int* ifm_ulist;
};
#pragma pack(pop)
#pragma pack(4)
struct ifdrv
{
    char ifd_name[16];
    unsigned long  int ifd_cmd;
    unsigned long  int  ifd_len  ;
    void* ifd_data;
};
#pragma pack(pop)
#pragma pack(4)
struct ifstat
{
    char ifs_name[16];
    char ascii[800+1];
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ46
{
char*  ifcu_buf  ;
struct ifreq*  ifcu_req  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ47
{
char*  ifcu_buf  ;
struct ifreq*  ifcu_req  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ifconf
{
    int ifc_len;
    union {
        char*  ifcu_buf  ;
        struct ifreq*  ifcu_req  ;
    } ifc_ifcu;
};
#pragma pack(pop)
#pragma pack(4)
struct kev_dl_proto_data
{
    struct net_event_data  link_data  ;
    unsigned int  proto_family  ;
    unsigned int  proto_remaining_count  ;
};
#pragma pack(pop)
#pragma pack(4)
struct if_nameindex
{
    unsigned int if_index;
    char* if_name;
};
#pragma pack(pop)
#pragma pack(4)
struct ttychars
{
    char tc_erase;
    char tc_kill;
    char tc_intrc;
    char tc_quitc;
    char tc_startc;
    char tc_stopc;
    char tc_eofc;
    char tc_brkc;
    char tc_suspc;
    char tc_dsuspc;
    char tc_rprntc;
    char tc_flushc;
    char tc_werasc;
    char tc_lnextc;
};
#pragma pack(pop)
#pragma pack(4)
struct tchars
{
    char t_intrc;
    char t_quitc;
    char t_startc;
    char t_stopc;
    char t_eofc;
    char t_brkc;
};
#pragma pack(pop)
#pragma pack(4)
struct ltchars
{
    char t_suspc;
    char t_dsuspc;
    char t_rprntc;
    char t_flushc;
    char t_werasc;
    char t_lnextc;
};
#pragma pack(pop)
#pragma pack(4)
struct sgttyb
{
    char sg_ispeed;
    char sg_ospeed;
    char sg_erase;
    char sg_kill;
    short sg_flags;
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
union anonymous_typeZ48
{
unsigned long  long  reserved[2]  ;
unsigned int  work_interval_port  ;
struct mach_service_port_info*  service_port_info  ;
unsigned int  service_port_name  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ49
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

#pragma pack(push, 4)
struct anonymous_typeX50
{
    unsigned int  pad1  ;
    unsigned int  pad2  ;
    unsigned int pad3:24;
    unsigned int  type:8  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX51
{
    unsigned int  name  ;
    unsigned int  pad1  ;
    unsigned int pad2:16;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX52
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
struct anonymous_typeX53
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
struct anonymous_typeX54
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
struct anonymous_typeX55
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
struct anonymous_typeX56
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
struct anonymous_typeX57
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
struct anonymous_typeX58
{
    unsigned int  context  ;
    unsigned int  name  ;
    unsigned int  flags:16  ;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX59
{
    unsigned long  long  context  ;
    unsigned int  flags:16  ;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
    unsigned int  name  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX60
{
    unsigned long  int  context  ;
    unsigned int  flags:16  ;
    unsigned int  disposition:8  ;
    unsigned int  type:8  ;
    unsigned int  name  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
union anonymous_typeZ61
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
struct anonymous_typeX62
{
    unsigned int  msgh_descriptor_count  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX63
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
struct anonymous_typeX64
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
struct anonymous_typeX65
{
    unsigned int  msgh_trailer_type  ;
    unsigned int  msgh_trailer_size  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX66
{
    unsigned int  msgh_trailer_type  ;
    unsigned int  msgh_trailer_size  ;
    unsigned int  msgh_seqno  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX67
{
    unsigned int val[2];
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX68
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
struct anonymous_typeX69
{
    unsigned int val[8];
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX70
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
struct anonymous_typeX71
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
struct anonymous_typeX72
{
    unsigned int  sender  ;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct anonymous_typeX73
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
struct anonymous_typeX74
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
struct anonymous_typeX75
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
union anonymous_typeZ76
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
struct anonymous_typeX77
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
union anonymous_typeZ78
{
struct __darwin_arm_thread_state  ts_32  ;
struct __darwin_arm_thread_state64  ts_64  ;
};
#pragma pack(pop)
#pragma pack(1)
union anonymous_typeZ79
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
enum  anonymous_typeY79 { P_ALL 
,P_PID 
,P_PGID 
};

#pragma pack(1)
struct rusage
{
    struct timeval  ru_utime  ;
    struct timeval  ru_stime  ;
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
#pragma pack(pop)
#pragma pack(1)
struct rusage_info_v0
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
};
#pragma pack(pop)
#pragma pack(1)
struct rusage_info_v1
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
};
#pragma pack(pop)
#pragma pack(1)
struct rusage_info_v2
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
};
#pragma pack(pop)
#pragma pack(1)
struct rusage_info_v3
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
};
#pragma pack(pop)
#pragma pack(1)
struct rusage_info_v4
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
    unsigned long  long  ri_logical_writes  ;
    unsigned long  long  ri_lifetime_max_phys_footprint  ;
    unsigned long  long  ri_instructions  ;
    unsigned long  long  ri_cycles  ;
    unsigned long  long  ri_billed_energy  ;
    unsigned long  long  ri_serviced_energy  ;
    unsigned long  long  ri_interval_max_phys_footprint  ;
    unsigned long  long  ri_runnable_time  ;
};
#pragma pack(pop)
#pragma pack(1)
struct rusage_info_v5
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
    unsigned long  long  ri_logical_writes  ;
    unsigned long  long  ri_lifetime_max_phys_footprint  ;
    unsigned long  long  ri_instructions  ;
    unsigned long  long  ri_cycles  ;
    unsigned long  long  ri_billed_energy  ;
    unsigned long  long  ri_serviced_energy  ;
    unsigned long  long  ri_interval_max_phys_footprint  ;
    unsigned long  long  ri_runnable_time  ;
    unsigned long  long  ri_flags  ;
};
#pragma pack(pop)
#pragma pack(1)
struct rusage_info_v6
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
    unsigned long  long  ri_logical_writes  ;
    unsigned long  long  ri_lifetime_max_phys_footprint  ;
    unsigned long  long  ri_instructions  ;
    unsigned long  long  ri_cycles  ;
    unsigned long  long  ri_billed_energy  ;
    unsigned long  long  ri_serviced_energy  ;
    unsigned long  long  ri_interval_max_phys_footprint  ;
    unsigned long  long  ri_runnable_time  ;
    unsigned long  long  ri_flags  ;
    unsigned long  long  ri_user_ptime  ;
    unsigned long  long  ri_system_ptime  ;
    unsigned long  long  ri_pinstructions  ;
    unsigned long  long  ri_pcycles  ;
    unsigned long  long  ri_energy_nj  ;
    unsigned long  long  ri_penergy_nj  ;
    unsigned long  long  ri_secure_time_in_system  ;
    unsigned long  long  ri_secure_ptime_in_system  ;
    unsigned long  long  ri_neural_footprint  ;
    unsigned long  long  ri_lifetime_max_neural_footprint  ;
    unsigned long  long  ri_interval_max_neural_footprint  ;
    unsigned long  long  ri_reserved[9]  ;
};
#pragma pack(pop)
#pragma pack(1)
struct rlimit
{
    unsigned long  long  rlim_cur  ;
    unsigned long  long  rlim_max  ;
};
#pragma pack(pop)
#pragma pack(1)
struct proc_rlimit_control_wakeupmon
{
    unsigned int  wm_flags  ;
    int  wm_rate  ;
};
#pragma pack(pop)
#pragma pack(1)
struct anonymous_typeX80
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};
#pragma pack(pop)
#pragma pack(1)
struct anonymous_typeX81
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};
#pragma pack(pop)
#pragma pack(1)
union wait
{
int w_status;
    struct {
        unsigned int w_Termsig:7;
        unsigned int w_Coredump:1;
        unsigned int w_Retcode:8;
        unsigned int w_Filler:16;
    } w_T;
    struct {
        unsigned int w_Stopval:8;
        unsigned int w_Stopsig:8;
        unsigned int w_Filler:16;
    } w_S;
};
#pragma pack(pop)
#pragma pack(1)
struct anonymous_typeX82
{
    int quot;
    int rem;
};
#pragma pack(pop)
#pragma pack(1)
struct anonymous_typeX83
{
    long quot;
    long rem;
};
#pragma pack(pop)
#pragma pack(1)
struct anonymous_typeX84
{
    long long quot;
    long long rem;
};
#pragma pack(pop)
#pragma pack(1)
struct termios
{
    unsigned long  int  c_iflag  ;
    unsigned long  int  c_oflag  ;
    unsigned long  int  c_cflag  ;
    unsigned long  int  c_lflag  ;
    unsigned char  c_cc[20]  ;
    unsigned long  int  c_ispeed  ;
    unsigned long  int  c_ospeed  ;
};
#pragma pack(pop)
#pragma pack(1)
struct termtype
{
    char* term_names;
    char* str_table;
    char* Booleans;
    short* Numbers;
    char** Strings;
    char* ext_str_table;
    char** ext_Names;
    unsigned short int num_Booleans;
    unsigned short int num_Numbers;
    unsigned short int num_Strings;
    unsigned short int ext_Booleans;
    unsigned short int ext_Numbers;
    unsigned short int ext_Strings;
};
#pragma pack(pop)
#pragma pack(1)
struct term
{
    struct termtype  type  ;
    short Filedes;
    struct termios  Ottyb  ;
    struct termios  Nttyb  ;
    int _baudrate;
    char* _termname;
};
#pragma pack(pop)
enum  anonymous_typeY84 { dbdTIC=(0),
dbdEnvOnce 
,dbdHome 
,dbdEnvList 
,dbdCfgList 
,dbdCfgOnce 
,dbdEnvOnce2 
,dbdEnvList2 
,dbdCfgList2 
,dbdLAST 
};

#pragma pack(1)
struct anonymous_typeX85
{
    char* name;
    struct entry*  link  ;
    long line;
};
#pragma pack(pop)
#pragma pack(1)
struct anonymous_typeX86
{
    char* name;
    struct entry*  link  ;
    long line;
};
#pragma pack(pop)
#pragma pack(1)
struct ttyent
{
    char* ty_name;
    char* ty_getty;
    char* ty_type;
    int ty_status;
    char* ty_window;
    char* ty_onerror;
    char* ty_onoption;
    char* ty_comment;
};
#pragma pack(pop)
#pragma pack(1)
struct utimbuf
{
    long  actime  ;
    long  modtime  ;
};
#pragma pack(pop)
#pragma pack(1)
struct lastlog
{
    long  ll_time  ;
    char ll_line[8];
    char ll_host[16];
} __attribute__((__deprecated__));
#pragma pack(pop)
#pragma pack(1)
struct utmp
{
    char ut_line[8];
    char ut_name[8];
    char ut_host[16];
    long ut_time;
} __attribute__((__deprecated__));
#pragma pack(pop)
#pragma pack(1)
struct utmpx
{
    char ut_user[256];
    char ut_id[4];
    char ut_line[32];
    int  ut_pid  ;
    short ut_type;
    struct timeval  ut_tv  ;
    char ut_host[256];
    unsigned int  ut_pad[16]  ;
};
#pragma pack(pop)
#pragma pack(1)
struct lastlogx
{
    struct timeval  ll_tv  ;
    char ll_line[32];
    char ll_host[256];
};
#pragma pack(pop)
#pragma pack(1)
struct anonymous_typeX87
{
    unsigned long  int  we_wordc  ;
    char** we_wordv;
    unsigned long  int  we_offs  ;
};
#pragma pack(pop)
#pragma pack(1)
struct fstab
{
    char* fs_spec;
    char* fs_file;
    char* fs_vfstype;
    char* fs_mntops;
    char* fs_type;
    int fs_freq;
    int fs_passno;
};
#pragma pack(pop)
/// variable definition ///
extern struct anonymous_typeX5  _DefaultRuneLocale  ;
extern struct anonymous_typeX5*  _CurrentRuneLocale  ;
extern struct __sFILE*  __stdinp  ;
extern struct __sFILE*  __stdoutp  ;
extern struct __sFILE*  __stderrp  ;
extern const int sys_nerr;
extern const char* const sys_errlist[];
extern unsigned int  acs_map[]  ;
extern struct _win_st*  curscr  ;
extern struct _win_st*  newscr  ;
extern struct _win_st*  stdscr  ;
extern char ttytype[];
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int ESCDELAY;
extern int LINES;
extern int TABSIZE;
extern int*  __error(void);
static const unsigned char  UUID_NULL[16]  __attribute__ ((unused)) ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
extern const struct anonymous_typeX8  _FE_DFL_ENV  ;
extern const struct anonymous_typeX8  _FE_DFL_DISABLE_DENORMS_ENV  ;
extern struct typenode*  TYPE_ALPHA  ;
extern struct typenode*  TYPE_ALNUM  ;
extern struct typenode*  TYPE_ENUM  ;
extern struct typenode*  TYPE_INTEGER  ;
extern struct typenode*  TYPE_NUMERIC  ;
extern struct typenode*  TYPE_REGEXP  ;
extern struct typenode*  TYPE_IPV4  ;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int optreset;
extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
extern int _libiconv_version;
extern const struct _xlocale*  _c_locale  ;
extern int libintl_version;
extern int signgam;
extern const struct in6_addr  in6addr_any  ;
extern const struct in6_addr  in6addr_loopback  ;
extern const struct in6_addr  in6addr_nodelocal_allnodes  ;
extern const struct in6_addr  in6addr_linklocal_allnodes  ;
extern const struct in6_addr  in6addr_linklocal_allrouters  ;
extern const struct in6_addr  in6addr_linklocal_allv2routers  ;
extern int h_errno;
extern struct _res_9_ns_flagdata  _res_9_ns_flagdata[]  ;
extern const struct res_9_sym  __res_9_p_key_syms[]  ;
extern const struct res_9_sym  __res_9_p_cert_syms[]  ;
extern const struct res_9_sym  __res_9_p_class_syms[]  ;
extern const struct res_9_sym  __res_9_p_type_syms[]  ;
extern const struct res_9_sym  __res_9_p_rcode_syms[]  ;
extern const char* const sys_signame[32];
extern const char* const sys_siglist[32];
extern const struct anonymous_typeX67  KERNEL_SECURITY_TOKEN  ;
extern const struct anonymous_typeX69  KERNEL_AUDIT_TOKEN  ;
extern char* suboptarg;
extern struct term*  cur_term  ;
extern char* const boolnames[];
extern char* const boolcodes[];
extern char* const boolfnames[];
extern char* const numnames[];
extern char* const numcodes[];
extern char* const numfnames[];
extern char* const strnames[];
extern char* const strcodes[];
extern char* const strfnames[];
extern struct entry*  _nc_head  ;
extern struct entry*  _nc_tail  ;
extern _Bool _nc_user_definable;
extern _Bool _nc_disable_period;
extern void (*_nc_check_termtype)(struct termtype* );
extern void (*_nc_check_termtype2)(struct termtype* ,_Bool);
extern char PC;
extern char* UP;
extern char* BC;
extern short ospeed;
// source head

// header function
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int aio_cancel(int fd, struct aiocb*  aiocbp  );
int aio_error(const struct aiocb*  aiocbp  );
int aio_fsync(int op, struct aiocb*  aiocbp  );
int aio_read(struct aiocb*  aiocbp  );
long  aio_return(struct aiocb*  aiocbp  );
int aio_suspend(const struct aiocb* const  aiocblist[]  , int nent, const struct timespec*  timeoutp  ) ;
int aio_write(struct aiocb*  aiocbp  );
int lio_listio(int mode, struct aiocb* const  aiocblist[]  , int nent, struct sigevent*  sigp  );
void* alloca(unsigned long  int  __size  );
void __assert_rtn(const char* , const char* , int , const char* ) __attribute__((__noreturn__))  ;
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
unsigned long  int ___runetype(int    );
int  ___tolower(int    );
int  ___toupper(int    );
int __maskrune(int    , unsigned long  int );
int  __toupper(int    );
int  __tolower(int    );
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
int fgetpos(struct __sFILE* restrict    , long long*    );
char* fgets(char* restrict , int __size, struct __sFILE*    );
struct __sFILE*  fopen(const char* restrict __filename, const char* restrict __mode) ;
int fprintf(struct __sFILE* restrict    , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int , struct __sFILE*    );
int fputs(const char* restrict , struct __sFILE* restrict    ) ;
unsigned long  int  fread(void* restrict __ptr, unsigned long  int  __size  , unsigned long  int  __nitems  , struct __sFILE* restrict  __stream  );
struct __sFILE*  freopen(const char* restrict , const char* restrict , struct __sFILE* restrict    ) ;
int fscanf(struct __sFILE* restrict    , const char* restrict , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(struct __sFILE*    , long , int );
int fsetpos(struct __sFILE*    , const long long*    );
long ftell(struct __sFILE*    );
unsigned long  int  fwrite(const void* restrict __ptr, unsigned long  int  __size  , unsigned long  int  __nitems  , struct __sFILE* restrict  __stream  ) ;
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
struct __sFILE*  fdopen(int , const char* ) ;
int fileno(struct __sFILE*    );
int pclose(struct __sFILE*    );
struct __sFILE*  popen(const char* , const char* )  ;
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
char* tempnam(const char* __dir, const char* __prefix) ;
int fseeko(struct __sFILE*  __stream  , long long  __offset  , int __whence);
long long  ftello(struct __sFILE*  __stream  );
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
struct __sFILE*  funopen(const void* , int (*anonymous_lambda_var_nameZ2)(void*,char*,int), int (*anonymous_lambda_var_nameZ3)(void*,const char*,int), long long  (*anonymous_lambda_var_nameZ4)(void*,long long ,int), int (*anonymous_lambda_var_nameZ5)(void*));
int __snprintf_chk(char* restrict , unsigned long  int  __maxlen  , int , unsigned long  int    , const char* restrict , ...);
int __vsnprintf_chk(char* restrict , unsigned long  int  __maxlen  , int , unsigned long  int    , const char* restrict , __darwin_va_list    );
int __sprintf_chk(char* restrict , int , unsigned long  int    , const char* restrict , ...);
int __vsprintf_chk(char* restrict , int , unsigned long  int    , const char* restrict , __darwin_va_list    );
int baudrate();
int beep();
_Bool can_change_color();
int cbreak();
int clear();
int clearok(struct _win_st*    , _Bool );
int clrtobot();
int clrtoeol();
int COLOR_PAIR(int );
int curs_set(int );
int def_prog_mode();
int def_shell_mode();
int delch();
void delscreen(struct screen*    );
int delwin(struct _win_st*    );
int echo();
int erase();
char erasechar();
void filter();
int flash();
int halfdelay(int );
_Bool has_colors();
_Bool has_ic();
_Bool has_il();
void idcok(struct _win_st*    , _Bool );
int idlok(struct _win_st*    , _Bool );
void immedok(struct _win_st*    , _Bool );
_Bool isendwin();
_Bool is_linetouched(struct _win_st*    , int );
_Bool is_wintouched(struct _win_st*    );
char* keyname(int );
char killchar();
int leaveok(struct _win_st*    , _Bool );
char* longname();
int meta(struct _win_st*    , _Bool );
int move(int , int );
int mvdelch(int , int );
int mvwdelch(struct _win_st*    , int , int );
int napms(int );
int nl();
int nocbreak();
int nodelay(struct _win_st*    , _Bool );
int noecho();
int nonl();
void noqiflush();
int noraw();
int notimeout(struct _win_st*    , _Bool );
int PAIR_NUMBER(int );
void qiflush();
int raw();
int resetty();
int reset_prog_mode();
int reset_shell_mode();
int ripoffline(int , int (*anonymous_lambda_var_nameZ6)(struct _win_st* ,int));
int savetty();
int setscrreg(int , int );
int syncok(struct _win_st*    , _Bool );
unsigned int  termattrs();
char* termname();
void timeout(int );
int touchline(struct _win_st*    , int , int );
int touchwin(struct _win_st*    );
int typeahead(int );
int untouchwin(struct _win_st*    );
void use_env(_Bool );
void use_tioctl(_Bool );
int wclrtobot(struct _win_st*    );
int wclrtoeol(struct _win_st*    );
void wcursyncup(struct _win_st*    );
int wdelch(struct _win_st*    );
int werase(struct _win_st*    );
int wmove(struct _win_st*    , int , int );
int wsetscrreg(struct _win_st*    , int , int );
void wsyncdown(struct _win_st*    );
void wsyncup(struct _win_st*    );
void wtimeout(struct _win_st*    , int );
int wtouchln(struct _win_st*    , int , int , int );
char* _nc_tiparm(int , const char* , ...);
int tigetflag(char* );
int tigetnum(char* );
char* tigetstr(char* );
char* tparm(char* , ...);
char* tiparm(const char* , ...);
char* tiparm_s(int , int , const char* , ...);
int getattrs(const struct _win_st*    );
int getcurx(const struct _win_st*    );
int getcury(const struct _win_st*    );
int getbegx(const struct _win_st*    );
int getbegy(const struct _win_st*    );
int getmaxx(const struct _win_st*    );
int getmaxy(const struct _win_st*    );
int getparx(const struct _win_st*    );
int getpary(const struct _win_st*    );
char* keybound(int , int );
const char* curses_version();
int define_key(const char* , int );
int get_escdelay();
int key_defined(const char* );
int keyok(int , _Bool );
int set_escdelay(int );
int set_tabsize(int );
int use_extended_names(_Bool );
int use_legacy_coding(int );
void nofilter();
int addch(const unsigned int    );
int addchnstr(const unsigned int*    , int );
int addchstr(const unsigned int*    );
int addnstr(const char* , int );
int addstr(const char* );
int attroff(int );
int attron(int );
int attrset(int );
int attr_get(unsigned int*    , short* , void* );
int attr_off(unsigned int    , void* );
int attr_on(unsigned int    , void* );
int attr_set(unsigned int    , short , void* );
int bkgd(unsigned int    );
void bkgdset(unsigned int    );
int border(unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    );
int box(struct _win_st*    , unsigned int    , unsigned int    );
int chgat(int , unsigned int    , short , const void* );
int color_content(short , short* , short* , short* );
int color_set(short , void* );
int copywin(const struct _win_st*    , struct _win_st*    , int , int , int , int , int , int , int );
int delay_output(int );
int deleteln();
struct _win_st*  derwin(struct _win_st*    , int , int , int , int );
int doupdate();
struct _win_st*  dupwin(struct _win_st*    );
int echochar(const unsigned int    );
int endwin();
int flushinp();
unsigned int  getbkgd(struct _win_st*    );
int getch();
int getnstr(char* , int );
int getstr(char* );
struct _win_st*  getwin(struct __sFILE*    );
int hline(unsigned int    , int );
unsigned int  inch();
int inchnstr(unsigned int*    , int );
int inchstr(unsigned int*    );
struct _win_st*  initscr();
int init_color(short , short , short , short );
int init_pair(short , short , short );
int innstr(char* , int );
int insch(unsigned int    );
int insdelln(int );
int insertln();
int insnstr(const char* , int );
int insstr(const char* );
int instr(char* );
int intrflush(struct _win_st*    , _Bool );
int keypad(struct _win_st*    , _Bool );
int mvaddch(int , int , const unsigned int    );
int mvaddchnstr(int , int , const unsigned int*    , int );
int mvaddchstr(int , int , const unsigned int*    );
int mvaddnstr(int , int , const char* , int );
int mvaddstr(int , int , const char* );
int mvchgat(int , int , int , unsigned int    , short , const void* );
int mvcur(int , int , int , int );
int mvderwin(struct _win_st*    , int , int );
int mvgetch(int , int );
int mvgetnstr(int , int , char* , int );
int mvgetstr(int , int , char* );
int mvhline(int , int , unsigned int    , int );
unsigned int  mvinch(int , int );
int mvinchnstr(int , int , unsigned int*    , int );
int mvinchstr(int , int , unsigned int*    );
int mvinnstr(int , int , char* , int );
int mvinsch(int , int , unsigned int    );
int mvinsnstr(int , int , const char* , int );
int mvinsstr(int , int , const char* );
int mvinstr(int , int , char* );
int mvprintw(int , int , const char* , ...);
int mvscanw(int , int , char* , ...);
int mvvline(int , int , unsigned int    , int );
int mvwaddch(struct _win_st*    , int , int , const unsigned int    );
int mvwaddchnstr(struct _win_st*    , int , int , const unsigned int*    , int );
int mvwaddchstr(struct _win_st*    , int , int , const unsigned int*    );
int mvwaddnstr(struct _win_st*    , int , int , const char* , int );
int mvwaddstr(struct _win_st*    , int , int , const char* );
int mvwchgat(struct _win_st*    , int , int , int , unsigned int    , short , const void* );
int mvwgetch(struct _win_st*    , int , int );
int mvwgetnstr(struct _win_st*    , int , int , char* , int );
int mvwgetstr(struct _win_st*    , int , int , char* );
int mvwhline(struct _win_st*    , int , int , unsigned int    , int );
int mvwin(struct _win_st*    , int , int );
unsigned int  mvwinch(struct _win_st*    , int , int );
int mvwinchnstr(struct _win_st*    , int , int , unsigned int*    , int );
int mvwinchstr(struct _win_st*    , int , int , unsigned int*    );
int mvwinnstr(struct _win_st*    , int , int , char* , int );
int mvwinsch(struct _win_st*    , int , int , unsigned int    );
int mvwinsnstr(struct _win_st*    , int , int , const char* , int );
int mvwinsstr(struct _win_st*    , int , int , const char* );
int mvwinstr(struct _win_st*    , int , int , char* );
int mvwprintw(struct _win_st*    , int , int , const char* , ...);
int mvwscanw(struct _win_st*    , int , int , char* , ...);
int mvwvline(struct _win_st*    , int , int , unsigned int    , int );
struct _win_st*  newpad(int , int );
struct screen*  newterm(char* , struct __sFILE*    , struct __sFILE*    );
struct _win_st*  newwin(int , int , int , int );
int overlay(const struct _win_st*    , struct _win_st*    );
int overwrite(const struct _win_st*    , struct _win_st*    );
int pair_content(short , short* , short* );
int pechochar(struct _win_st*    , const unsigned int    );
int pnoutrefresh(struct _win_st*    , int , int , int , int , int , int );
int prefresh(struct _win_st*    , int , int , int , int , int , int );
int printw(const char* , ...);
int putwin(struct _win_st*    , struct __sFILE*    );
int redrawwin(struct _win_st*    );
int refresh();
int scanw(char* , ...);
int scr_dump(const char* );
int scr_init(const char* );
int scrl(int );
int scroll(struct _win_st*    );
int scrollok(struct _win_st*    , _Bool );
int scr_restore(const char* );
int scr_set(const char* );
struct screen*  set_term(struct screen*    );
int slk_attroff(const unsigned int    );
int slk_attr_off(const unsigned int    , void* );
int slk_attron(const unsigned int    );
int slk_attr_on(unsigned int    , void* );
int slk_attrset(const unsigned int    );
unsigned int  slk_attr();
int slk_attr_set(const unsigned int    , short , void* );
int slk_clear();
int slk_color(short );
int slk_init(int );
char* slk_label(int );
int slk_noutrefresh();
int slk_refresh();
int slk_restore();
int slk_set(int , const char* , int );
int slk_touch();
int standout();
int standend();
int start_color();
struct _win_st*  subpad(struct _win_st*    , int , int , int , int );
struct _win_st*  subwin(struct _win_st*    , int , int , int , int );
int ungetch(int );
int vidattr(unsigned int    );
int vidputs(unsigned int    , int (*anonymous_var_nameY1199)(int)  );
int vline(unsigned int    , int );
int vwprintw(struct _win_st*    , const char* , __builtin_va_list    );
int vw_printw(struct _win_st*    , const char* , __builtin_va_list    );
int vwscanw(struct _win_st*    , char* , __builtin_va_list    );
int vw_scanw(struct _win_st*    , char* , __builtin_va_list    );
int waddch(struct _win_st*    , const unsigned int    );
int waddchnstr(struct _win_st*    , const unsigned int*    , int );
int waddchstr(struct _win_st*    , const unsigned int*    );
int waddnstr(struct _win_st*    , const char* , int );
int waddstr(struct _win_st*    , const char* );
int wattron(struct _win_st*    , int );
int wattroff(struct _win_st*    , int );
int wattrset(struct _win_st*    , int );
int wattr_get(struct _win_st*    , unsigned int*    , short* , void* );
int wattr_on(struct _win_st*    , unsigned int    , void* );
int wattr_off(struct _win_st*    , unsigned int    , void* );
int wattr_set(struct _win_st*    , unsigned int    , short , void* );
int wbkgd(struct _win_st*    , unsigned int    );
void wbkgdset(struct _win_st*    , unsigned int    );
int wborder(struct _win_st*    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    );
int wchgat(struct _win_st*    , int , unsigned int    , short , const void* );
int wclear(struct _win_st*    );
int wcolor_set(struct _win_st*    , short , void* );
int wdeleteln(struct _win_st*    );
int wechochar(struct _win_st*    , const unsigned int    );
int wgetch(struct _win_st*    );
int wgetnstr(struct _win_st*    , char* , int );
int wgetstr(struct _win_st*    , char* );
int whline(struct _win_st*    , unsigned int    , int );
unsigned int  winch(struct _win_st*    );
int winchnstr(struct _win_st*    , unsigned int*    , int );
int winchstr(struct _win_st*    , unsigned int*    );
int winnstr(struct _win_st*    , char* , int );
int winsch(struct _win_st*    , unsigned int    );
int winsdelln(struct _win_st*    , int );
int winsertln(struct _win_st*    );
int winsnstr(struct _win_st*    , const char* , int );
int winsstr(struct _win_st*    , const char* );
int winstr(struct _win_st*    , char* );
int wnoutrefresh(struct _win_st*    );
int wprintw(struct _win_st*    , const char* , ...);
int wredrawln(struct _win_st*    , int , int );
int wrefresh(struct _win_st*    );
int wscanw(struct _win_st*    , char* , ...);
int wscrl(struct _win_st*    , int );
int wstandout(struct _win_st*    );
int wstandend(struct _win_st*    );
int wvline(struct _win_st*    , unsigned int    , int );
int putp(const char* );
_Bool is_term_resized(int , int );
int assume_default_colors(int , int );
int resize_term(int , int );
int resizeterm(int , int );
int use_default_colors();
int use_screen(struct screen*    , int (*anonymous_var_nameY1327)(struct screen* ,void*)  , void* );
int use_window(struct _win_st*    , int (*anonymous_var_nameY1330)(struct _win_st* ,void*)  , void* );
int wresize(struct _win_st*    , int , int );
struct _win_st*  wgetparent(const struct _win_st*    );
_Bool is_cleared(const struct _win_st*    );
_Bool is_idcok(const struct _win_st*    );
_Bool is_idlok(const struct _win_st*    );
_Bool is_immedok(const struct _win_st*    );
_Bool is_keypad(const struct _win_st*    );
_Bool is_leaveok(const struct _win_st*    );
_Bool is_nodelay(const struct _win_st*    );
_Bool is_notimeout(const struct _win_st*    );
_Bool is_pad(const struct _win_st*    );
_Bool is_scrollok(const struct _win_st*    );
_Bool is_subwin(const struct _win_st*    );
_Bool is_syncok(const struct _win_st*    );
int wgetdelay(const struct _win_st*    );
int wgetscrreg(const struct _win_st*    , int* , int* );
_Bool has_mouse();
int getmouse(struct anonymous_typeX6*    );
int ungetmouse(struct anonymous_typeX6*    );
unsigned long  int  mousemask(unsigned long  int    , unsigned long  int*    );
_Bool wenclose(const struct _win_st*    , int , int );
int mouseinterval(int );
_Bool wmouse_trafo(const struct _win_st*    , int* , int* , _Bool );
_Bool mouse_trafo(int* , int* , _Bool );
int mcprint(char* , int );
int has_key(int );
char* unctrl(unsigned int    );
int closedir(struct anonymous_typeX7*    ) ;
struct anonymous_typeX7*  opendir(const char* ) ;
struct dirent*  readdir(struct anonymous_typeX7*    ) ;
int readdir_r(struct anonymous_typeX7*    , struct dirent*    , struct dirent**    ) ;
void rewinddir(struct anonymous_typeX7*    ) ;
void seekdir(struct anonymous_typeX7*    , long ) ;
long telldir(struct anonymous_typeX7*    ) ;
struct anonymous_typeX7*  fdopendir(int ) ;
int alphasort(const struct dirent**    , const struct dirent**    ) ;
int dirfd(struct anonymous_typeX7*  dirp  );
int scandir(const char* , struct dirent***    , int (*anonymous_lambda_var_nameZ7)(const struct dirent* ), int (*anonymous_lambda_var_nameZ8)(const struct dirent** ,const struct dirent** )) ;
int getdirentries(int , char* , int __nbytes, long* ) 
#line 177 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dirent.h"
;
struct anonymous_typeX7*  __opendir2(const char* , int ) ;
int dladdr(const void* , struct dl_info*    );
int dlclose(void* __handle);
char* dlerror();
void* dlopen(const char* __path, int __mode);
void* dlsym(void* __handle, const char* __symbol);
_Bool dlopen_preflight(const char* __path);
void err(int , const char* , ...) __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 2, 3)));
void verr(int , const char* , __darwin_va_list    ) __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 2, 0)));
void errc(int , int , const char* , ...) __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 3, 4)));
void verrc(int , int , const char* , __darwin_va_list    ) __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 3, 0)));
void errx(int , const char* , ...) __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 2, 3)));
void verrx(int , const char* , __darwin_va_list    ) __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 2, 0)));
void warn(const char* , ...) __attribute__((__format__ (__printf__, 1, 2)));
void vwarn(const char* , __darwin_va_list    ) __attribute__((__format__ (__printf__, 1, 0)));
void warnc(int , const char* , ...) __attribute__((__format__ (__printf__, 2, 3)));
void vwarnc(int , const char* , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0)));
void warnx(const char* , ...) __attribute__((__format__ (__printf__, 1, 2)));
void vwarnx(const char* , __darwin_va_list    ) __attribute__((__format__ (__printf__, 1, 0)));
void err_set_file(void* );
void err_set_exit(void (*anonymous_lambda_var_nameZ9)(int));
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
int open(const char* , int , ...) ;
int openat(int , const char* , int , ...)  ;
int creat(const char* , unsigned short int    ) ;
int fcntl(int , int , ...) ;
int openx_np(const char* , int , struct _filesec*    );
int open_dprotected_np(const char* , int , int , int , ...);
int openat_dprotected_np(int , const char* , int , int , int , ...);
int openat_authenticated_np(int , const char* , int , int );
int flock(int , int );
struct _filesec*  filesec_init();
struct _filesec*  filesec_dup(struct _filesec*    );
void filesec_free(struct _filesec*    );
int filesec_get_property(struct _filesec*    , enum anonymous_typeY7    , void* );
int filesec_query_property(struct _filesec*    , enum anonymous_typeY7    , int* );
int filesec_set_property(struct _filesec*    , enum anonymous_typeY7    , const void* );
int filesec_unset_property(struct _filesec*    , enum anonymous_typeY7    );
int feclearexcept(int );
int fegetexceptflag(unsigned short int*    , int );
int feraiseexcept(int );
int fesetexceptflag(const unsigned short int*    , int );
int fetestexcept(int );
int fegetround();
int fesetround(int );
int fegetenv(struct anonymous_typeX8*    );
int feholdexcept(struct anonymous_typeX8*    );
int fesetenv(const struct anonymous_typeX8*    );
int feupdateenv(const struct anonymous_typeX8*    );
int fmtmsg(long , const char* , int , const char* , const char* , const char* );
int fnmatch(const char* , const char* , int ) ;
struct typenode*  new_fieldtype(_Bool (* const field_check)(struct fieldnode* ,const void*), _Bool (* const char_check)(int,const void*));
struct typenode*  link_fieldtype(struct typenode*    , struct typenode*    );
int free_fieldtype(struct typenode*    );
int set_fieldtype_arg(struct typenode*    , void* (* const make_arg)(__builtin_va_list ), void* (* const copy_arg)(const void*), void (* const free_arg)(void*));
int set_fieldtype_choice(struct typenode*    , _Bool (* const next_choice)(struct fieldnode* ,const void*), _Bool (* const prev_choice)(struct fieldnode* ,const void*));
struct fieldnode*  new_field(int , int , int , int , int , int );
struct fieldnode*  dup_field(struct fieldnode*    , int , int );
struct fieldnode*  link_field(struct fieldnode*    , int , int );
int free_field(struct fieldnode*    );
int field_info(const struct fieldnode*    , int* , int* , int* , int* , int* , int* );
int dynamic_field_info(const struct fieldnode*    , int* , int* , int* );
int set_max_field(struct fieldnode*    , int );
int move_field(struct fieldnode*    , int , int );
int set_field_type(struct fieldnode*    , struct typenode*    , ...);
int set_new_page(struct fieldnode*    , _Bool );
int set_field_just(struct fieldnode*    , int );
int field_just(const struct fieldnode*    );
int set_field_fore(struct fieldnode*    , unsigned int    );
int set_field_back(struct fieldnode*    , unsigned int    );
int set_field_pad(struct fieldnode*    , int );
int field_pad(const struct fieldnode*    );
int set_field_buffer(struct fieldnode*    , int , const char* );
int set_field_status(struct fieldnode*    , _Bool );
int set_field_userptr(struct fieldnode*    , void* );
int set_field_opts(struct fieldnode*    , int    );
int field_opts_on(struct fieldnode*    , int    );
int field_opts_off(struct fieldnode*    , int    );
unsigned int  field_fore(const struct fieldnode*    );
unsigned int  field_back(const struct fieldnode*    );
_Bool new_page(const struct fieldnode*    );
_Bool field_status(const struct fieldnode*    );
void* field_arg(const struct fieldnode*    );
void* field_userptr(const struct fieldnode*    );
struct typenode*  field_type(const struct fieldnode*    );
char* field_buffer(const struct fieldnode*    , int );
int  field_opts(const struct fieldnode*    );
struct formnode*  new_form(struct fieldnode**    );
struct fieldnode**  form_fields(const struct formnode*    );
struct fieldnode*  current_field(const struct formnode*    );
struct _win_st*  form_win(const struct formnode*    );
struct _win_st*  form_sub(const struct formnode*    );
void (*form_init(const struct formnode*    ))(struct formnode* ) ;
void (*form_term(const struct formnode*    ))(struct formnode* ) ;
void (*field_init(const struct formnode*    ))(struct formnode* ) ;
void (*field_term(const struct formnode*    ))(struct formnode* ) ;
int free_form(struct formnode*    );
int set_form_fields(struct formnode*    , struct fieldnode**    );
int field_count(const struct formnode*    );
int set_form_win(struct formnode*    , struct _win_st*    );
int set_form_sub(struct formnode*    , struct _win_st*    );
int set_current_field(struct formnode*    , struct fieldnode*    );
int field_index(const struct fieldnode*    );
int set_form_page(struct formnode*    , int );
int form_page(const struct formnode*    );
int scale_form(const struct formnode*    , int* , int* );
int set_form_init(struct formnode*    , void (*anonymous_var_nameY1633)(struct formnode* )  );
int set_form_term(struct formnode*    , void (*anonymous_var_nameY1635)(struct formnode* )  );
int set_field_init(struct formnode*    , void (*anonymous_var_nameY1637)(struct formnode* )  );
int set_field_term(struct formnode*    , void (*anonymous_var_nameY1639)(struct formnode* )  );
int post_form(struct formnode*    );
int unpost_form(struct formnode*    );
int pos_form_cursor(struct formnode*    );
int form_driver(struct formnode*    , int );
int set_form_userptr(struct formnode*    , void* );
int set_form_opts(struct formnode*    , int    );
int form_opts_on(struct formnode*    , int    );
int form_opts_off(struct formnode*    , int    );
int form_request_by_name(const char* );
const char* form_request_name(int );
void* form_userptr(const struct formnode*    );
int  form_opts(const struct formnode*    );
_Bool data_ahead(const struct formnode*    );
_Bool data_behind(const struct formnode*    );
struct _ftsent*  fts_children(struct anonymous_typeX10*    , int ) ;
int fts_close(struct anonymous_typeX10*    ) ;
struct anonymous_typeX10*  fts_open(char** const , int , int (*anonymous_lambda_var_nameZ10)(const struct _ftsent** ,const struct _ftsent** )) ;
struct _ftsent*  fts_read(struct anonymous_typeX10*    ) ;
int fts_set(struct anonymous_typeX10*    , struct _ftsent*    , int ) ;
int chmod(const char* , unsigned short int    ) ;
int fchmod(int , unsigned short int    ) ;
int fstat(int , struct stat*    ) ;
int lstat(const char* , struct stat*    ) ;
int mkdir(const char* , unsigned short int    );
int mkfifo(const char* , unsigned short int    );
int stat(const char* , struct stat*    ) ;
unsigned short int  umask(unsigned short int    );
int fchmodat(int , const char* , unsigned short int    , int );
int fstatat(int , const char* , struct stat*    , int )  ;
int mkdirat(int , const char* , unsigned short int    );
int mkfifoat(int , const char* , unsigned short int    );
int mknodat(int , const char* , unsigned short int    , int    );
int futimens(int __fd, const struct timespec  __times[2]  );
int utimensat(int __fd, const char* __path, const struct timespec  __times[2]  , int __flag);
int chflags(const char* , unsigned int    );
int chmodx_np(const char* , struct _filesec*    );
int fchflags(int , unsigned int    );
int fchmodx_np(int , struct _filesec*    );
int fstatx_np(int , struct stat*    , struct _filesec*    ) ;
int lchflags(const char* , unsigned int    );
int lchmod(const char* , unsigned short int    );
int lstatx_np(const char* , struct stat*    , struct _filesec*    ) ;
int mkdirx_np(const char* , struct _filesec*    );
int mkfifox_np(const char* , struct _filesec*    );
int statx_np(const char* , struct stat*    , struct _filesec*    ) ;
int umaskx_np(struct _filesec*    );
int ftw(const char* , int (*anonymous_lambda_var_nameZ11)(const char*,const struct stat* ,int), int ) ;
int nftw(const char* , int (*anonymous_lambda_var_nameZ12)(const char*,const struct stat* ,int,struct FTW* ), int , int ) ;
int getattrlistbulk(int , void* , void* , unsigned long  int    , unsigned long  long    );
int getattrlistat(int , const char* , void* , void* , unsigned long  int    , unsigned long  int );
int setattrlistat(int , const char* , void* , void* , unsigned long  int    , unsigned int    );
long  freadlink(int , char* restrict , unsigned long  int    );
int faccessat(int , const char* , int , int );
int fchownat(int , const char* , unsigned int    , unsigned int    , int );
int linkat(int , const char* , int , const char* , int );
long  readlinkat(int , const char* , char* , unsigned long  int    );
int symlinkat(const char* , int , const char* );
int unlinkat(int , const char* , int );
void _exit(int ) __attribute__((__noreturn__));
int access(const char* , int );
unsigned int alarm(unsigned int );
int chdir(const char* );
int chown(const char* , unsigned int    , unsigned int    );
int close(int ) ;
int dup(int );
int dup2(int , int );
int execl(const char* __path, const char* __arg0, ...);
int execle(const char* __path, const char* __arg0, ...);
int execlp(const char* __file, const char* __arg0, ...);
int execv(const char* __path, char** const __argv);
int execve(const char* __file, char** const __argv, char** const __envp);
int execvp(const char* __file, char** const __argv);
int  fork();
long fpathconf(int , int );
char* getcwd(char* , unsigned long  int  __size  );
unsigned int  getegid();
unsigned int  geteuid();
unsigned int  getgid();
int getgroups(int __gidsetsize, unsigned int  []  ) ;
char* getlogin();
int  getpgrp();
int  getpid();
int  getppid();
unsigned int  getuid();
int isatty(int );
int link(const char* , const char* );
long long  lseek(int , long long    , int );
long pathconf(const char* , int );
int pause() ;
int pipe(int [2]);
long  read(int , void* , unsigned long  int  __nbyte  ) ;
int rmdir(const char* );
int setgid(unsigned int    );
int setpgid(int    , int    );
int  setsid();
int setuid(unsigned int    );
unsigned int sleep(unsigned int ) ;
long sysconf(int );
int  tcgetpgrp(int );
int tcsetpgrp(int , int    );
char* ttyname(int );
int ttyname_r(int , char* , unsigned long  int  __len  ) ;
int unlink(const char* );
long  write(int __fd, const void* __buf, unsigned long  int  __nbyte  ) ;
unsigned long  int  confstr(int , char* , unsigned long  int  __len  ) ;
char* crypt(const char* , const char* );
void encrypt(char* , int ) ;
int fchdir(int );
long gethostid();
int  getpgid(int    );
int  getsid(int    );
int lchown(const char* , unsigned int    , unsigned int    ) ;
int lockf(int , int , long long    ) ;
int nice(int ) ;
long  pread(int __fd, void* __buf, unsigned long  int  __nbyte  , long long  __offset  ) ;
long  pwrite(int __fd, const void* __buf, unsigned long  int  __nbyte  , long long  __offset  ) ;
int  setpgrp() ;
int setregid(unsigned int    , unsigned int    ) ;
int setreuid(unsigned int    , unsigned int    ) ;
void sync();
int truncate(const char* , long long    );
unsigned int  ualarm(unsigned int    , unsigned int    );
int usleep(unsigned int    ) ;
int  vfork();
int fsync(int ) ;
int ftruncate(int , long long    );
int getlogin_r(char* , unsigned long  int  __namelen  );
int fchown(int , unsigned int    , unsigned int    );
int gethostname(char* , unsigned long  int  __namelen  );
long  readlink(const char* restrict , char* restrict , unsigned long  int  __bufsize  );
int setegid(unsigned int    );
int seteuid(unsigned int    );
int symlink(const char* , const char* );
int __darwin_check_fd_set_overflow(int , const void* , int );
int pselect(int , struct fd_set* restrict    , struct fd_set* restrict    , struct fd_set* restrict    , const struct timespec* restrict    , const unsigned int* restrict    ) 
#line 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
;
int select(int , struct fd_set* restrict    , struct fd_set* restrict    , struct fd_set* restrict    , struct timeval* restrict    ) 
#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_select.h"
;
int accessx_np(const struct accessx_descriptor*    , unsigned long  int  __sz  , int* , unsigned int    );
int acct(const char* );
int add_profil(char* , unsigned long  int  __bufsiz  , unsigned long  int , unsigned int );
void endusershell();
int execvP(const char* __file, const char* __searchpath, char** const __argv);
char* fflagstostr(unsigned long  int );
int getdomainname(char* , int __namelen);
int getgrouplist(const char* , int , int* , int* __ngroups);
int gethostuuid(unsigned char  [16]  , const struct timespec*    );
unsigned short int  getmode(const void* , unsigned short int    );
int getpeereid(int , unsigned int*    , unsigned int*    );
int getsgroups_np(int* , unsigned char  [16]  );
char* getusershell();
int getwgroups_np(int* , unsigned char  [16]  );
int initgroups(const char* , int );
int issetugid();
char* mkdtemp(char* );
int mknod(const char* , unsigned short int    , int    );
int mkpath_np(const char* path, unsigned short int  omode  );
int mkpathat_np(int dfd, const char* path, unsigned short int  omode  );
int mkstemps(char* , int );
int mkostemp(char* path, int oflags);
int mkostemps(char* path, int slen, int oflags);
int mkstemp_dprotected_np(char* path, int dpclass, int dpflags);
char* mkdtempat_np(int dfd, char* path);
int mkstempsat_np(int dfd, char* path, int slen);
int mkostempsat_np(int dfd, char* path, int slen, int oflags);
int nfssvc(int , void* );
int profil(char* , unsigned long  int  __bufsiz  , unsigned long  int , unsigned int );
__attribute__((__deprecated__))
 int pthread_setugid_np(unsigned int    , unsigned int    );
int pthread_getugid_np(unsigned int*    , unsigned int*    );
int reboot(int );
int revoke(const char* );
__attribute__((__deprecated__))  int rcmd(char** , int , const char* , const char* , const char* , int* );
__attribute__((__deprecated__))  int rcmd_af(char** , int , const char* , const char* , const char* , int* , int );
__attribute__((__deprecated__))  int rresvport(int* );
__attribute__((__deprecated__))  int rresvport_af(int* , int );
__attribute__((__deprecated__))  int iruserok(unsigned long  int , int , const char* , const char* );
__attribute__((__deprecated__))  int iruserok_sa(const void* , int , int , const char* , const char* );
__attribute__((__deprecated__))  int ruserok(const char* , int , const char* , const char* );
int setdomainname(const char* , int __namelen);
int setgroups(int , const unsigned int*    );
void sethostid(long );
int sethostname(const char* , int __namelen);
int setlogin(const char* );
void* setmode(const char* ) ;
int setrgid(unsigned int    );
int setruid(unsigned int    );
int setsgroups_np(int , const unsigned char  [16]  );
void setusershell();
int setwgroups_np(int , const unsigned char  [16]  );
int strtofflags(char** , unsigned long  int* , unsigned long  int* );
int swapon(const char* );
int ttyslot();
int undelete(const char* );
int unwhiteout(const char* );
int syscall(int , ...);
int fgetattrlist(int , void* , void* , unsigned long  int  __attrBufSize  , unsigned int );
int fsetattrlist(int , void* , void* , unsigned long  int  __attrBufSize  , unsigned int );
int getattrlist(const char* , void* , void* , unsigned long  int  __attrBufSize  , unsigned int ) ;
int setattrlist(const char* , void* , void* , unsigned long  int  __attrBufSize  , unsigned int ) ;
int exchangedata(const char* , const char* , unsigned int );
int getdirentriesattr(int , void* , void* , unsigned long  int  __attrBufSize  , unsigned int* , unsigned int* , unsigned int* , unsigned int );
int searchfs(const char* , struct fssearchblock*    , unsigned long  int* , unsigned int , unsigned int , struct searchstate*    );
int fsctl(const char* , unsigned long  int , void* , unsigned int );
int ffsctl(int , unsigned long  int , void* , unsigned int );
int fsync_volume_np(int , int );
int sync_volume_np(const char* , int );
int getopt_long(int __argc, char** const , const char* , const struct option*    , int* );
int getopt_long_only(int __argc, char** const , const char* , const struct option*    , int* );
int getopt(int __argc, char* const [], const char* ) ;
int glob(const char* restrict , int , int (*anonymous_lambda_var_nameZ13)(const char*,int), struct anonymous_typeX11* restrict    ) ;
void globfree(struct anonymous_typeX11*    );
void gmk_free(char* str);
char* gmk_alloc(unsigned int len);
void gmk_eval(const char* buffer, const struct anonymous_typeX12*  floc  );
char* gmk_expand(const char* str);
void gmk_add_function(const char* name, char* (*func)(const char*,unsigned int,char**)  , unsigned int min_args, unsigned int max_args, unsigned int flags);
struct group*  getgrgid(unsigned int    );
struct group*  getgrnam(const char* );
int getgrgid_r(unsigned int    , struct group*    , char* , unsigned long  int    , struct group**    );
int getgrnam_r(const char* , struct group*    , char* , unsigned long  int    , struct group**    );
struct group*  getgrent();
void setgrent();
void endgrent();
char* group_from_gid(unsigned int    , int );
struct group*  getgruuid(unsigned char  [16]  );
int getgruuid_r(unsigned char  [16]  , struct group*    , char* , unsigned long  int    , struct group**    );
void setgrfile(const char* );
int setgroupent(int );
char* asctime(const struct tm*    );
unsigned long  int  clock() ;
char* ctime(const long*    );
double difftime(long    , long    );
struct tm*  getdate(const char* );
struct tm*  gmtime(const long*    );
struct tm*  localtime(const long*    );
long  mktime(struct tm*    ) ;
unsigned long  int  strftime(char* restrict , unsigned long  int  __maxsize  , const char* restrict , const struct tm* restrict    ) ;
char* strptime(const char* restrict , const char* restrict , struct tm* restrict    ) ;
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
int nanosleep(const struct timespec*  __rqtp  , struct timespec*  __rmtp  ) ;
int clock_getres(enum anonymous_typeY16  __clock_id  , struct timespec*  __res  );
int clock_gettime(enum anonymous_typeY16  __clock_id  , struct timespec*  __tp  );
unsigned long  long  clock_gettime_nsec_np(enum anonymous_typeY16  __clock_id  );
int clock_settime(enum anonymous_typeY16  __clock_id  , const struct timespec*  __tp  );
int timespec_get(struct timespec*  ts  , int base);
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
unsigned long  int  wcsftime(int* restrict    , unsigned long  int  __maxlen  , const int* restrict    , const struct tm* restrict    ) ;
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
int iconv_open_into(const char* , const char* , struct anonymous_typeX17*    );
void libiconv_set_relocation_prefix(const char* , const char* );
void iconvlist(int (*do_one)(unsigned int,const char** const,void*), void* );
const char* iconv_canonicalize(const char* );
int iconvctl(struct __tag_iconv_t*    , int , void* );
int getifaddrs(struct ifaddrs**    );
void freeifaddrs(struct ifaddrs*    );
int getifmaddrs(struct ifmaddrs**    );
void freeifmaddrs(struct ifmaddrs*    );
long  int  imaxabs(long  int  j  );
struct anonymous_typeX18  imaxdiv(long  int  __numer  , long  int  __denom  );
long  int  strtoimax(const char* restrict __nptr, char** restrict __endptr, int __base);
unsigned long  int  strtoumax(const char* restrict __nptr, char** restrict __endptr, int __base);
long  int  wcstoimax(const int* restrict  __nptr  , int** restrict  __endptr  , int __base);
unsigned long  int  wcstoumax(const int* restrict  __nptr  , int** restrict  __endptr  , int __base);
char* nl_langinfo(int    );
char* basename(char* );
char* dirname(char* );
char* basename_r(const char* , char* );
char* dirname_r(const char* , char* );
struct _xlocale*  duplocale(struct _xlocale*    );
int freelocale(struct _xlocale*    );
struct _xlocale*  uselocale(struct _xlocale*    );
struct lconv*  localeconv();
int ___mb_cur_max();
int ___mb_cur_max_l(struct _xlocale*    );
struct lconv*  localeconv_l(struct _xlocale*    );
const char* querylocale(int , struct _xlocale*    );
unsigned long  int ___runetype_l(int    , struct _xlocale*    );
int  ___tolower_l(int    , struct _xlocale*    );
int  ___toupper_l(int    , struct _xlocale*    );
int __maskrune_l(int    , unsigned long  int , struct _xlocale*    );
unsigned int  wctype_l(const char* , struct _xlocale*    );
long  int  strtoimax_l(const char* restrict nptr, char** restrict endptr, int base, struct _xlocale*    );
unsigned long  int  strtoumax_l(const char* restrict nptr, char** restrict endptr, int base, struct _xlocale*    );
long  int  wcstoimax_l(const int* restrict  nptr  , int** restrict  endptr  , int base, struct _xlocale*    );
unsigned long  int  wcstoumax_l(const int* restrict  nptr  , int** restrict  endptr  , int base, struct _xlocale*    );
char* nl_langinfo_l(int    , struct _xlocale*    );
int fprintf_l(struct __sFILE* restrict    , struct _xlocale*    , const char* restrict , ...) __attribute__((__format__ (__printf__, 3, 4)));
int fscanf_l(struct __sFILE* restrict    , struct _xlocale*    , const char* restrict , ...) __attribute__((__format__ (__scanf__, 3, 4)));
int printf_l(struct _xlocale*    , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3)));
int scanf_l(struct _xlocale*    , const char* restrict , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int sprintf_l(char* restrict , struct _xlocale*    , const char* restrict , ...) __attribute__((__format__ (__printf__, 3, 4)))  ;
int sscanf_l(const char* restrict , struct _xlocale*    , const char* restrict , ...) __attribute__((__format__ (__scanf__, 3, 4)));
int vfprintf_l(struct __sFILE* restrict    , struct _xlocale*    , const char* restrict , __builtin_va_list    ) __attribute__((__format__ (__printf__, 3, 0)));
int vprintf_l(struct _xlocale*    , const char* restrict , __builtin_va_list    ) __attribute__((__format__ (__printf__, 2, 0)));
int vsprintf_l(char* restrict , struct _xlocale*    , const char* restrict , __builtin_va_list    ) __attribute__((__format__ (__printf__, 3, 0)))  ;
int snprintf_l(char* restrict , unsigned long  int  __maxlen  , struct _xlocale*    , const char* restrict , ...) __attribute__((__format__ (__printf__, 4, 5)));
int vfscanf_l(struct __sFILE* restrict    , struct _xlocale*    , const char* restrict , __builtin_va_list    ) __attribute__((__format__ (__scanf__, 3, 0)));
int vscanf_l(struct _xlocale*    , const char* restrict , __builtin_va_list    ) __attribute__((__format__ (__scanf__, 2, 0)));
int vsnprintf_l(char* restrict , unsigned long  int  __maxlen  , struct _xlocale*    , const char* restrict , __builtin_va_list    ) __attribute__((__format__ (__printf__, 4, 0)));
int vsscanf_l(const char* restrict , struct _xlocale*    , const char* restrict , __builtin_va_list    ) __attribute__((__format__ (__scanf__, 3, 0)));
int dprintf_l(int , struct _xlocale*    , const char* restrict , ...) __attribute__((__format__ (__printf__, 3, 4))) ;
int vdprintf_l(int , struct _xlocale*    , const char* restrict , __builtin_va_list    ) __attribute__((__format__ (__printf__, 3, 0))) ;
int asprintf_l(char** restrict , struct _xlocale*    , const char* restrict , ...) __attribute__((__format__ (__printf__, 3, 4)));
int vasprintf_l(char** restrict , struct _xlocale*    , const char* restrict , __builtin_va_list    ) __attribute__((__format__ (__printf__, 3, 0)));
unsigned long  int  strftime_l(char* restrict , unsigned long  int  __n  , const char* restrict , const struct tm* restrict    , struct _xlocale*    )  __attribute__((__format__ (__strftime__, 3, 0)));
char* strptime_l(const char* restrict , const char* restrict , struct tm* restrict    , struct _xlocale*    )  __attribute__((__format__ (__strftime__, 2, 0)));
unsigned int  btowc_l(int , struct _xlocale*    );
unsigned int  fgetwc_l(struct __sFILE*    , struct _xlocale*    );
int*  fgetws_l(int* restrict    , int __n, struct __sFILE* restrict    , struct _xlocale*    );
unsigned int  fputwc_l(int    , struct __sFILE*    , struct _xlocale*    );
int fputws_l(const int* restrict    , struct __sFILE* restrict    , struct _xlocale*    );
int fwprintf_l(struct __sFILE* restrict    , struct _xlocale*    , const int* restrict    , ...);
int fwscanf_l(struct __sFILE* restrict    , struct _xlocale*    , const int* restrict    , ...);
unsigned int  getwc_l(struct __sFILE*    , struct _xlocale*    );
unsigned int  getwchar_l(struct _xlocale*    );
unsigned long  int  mbrlen_l(const char* restrict , unsigned long  int  __n  , union anonymous_typeZ1* restrict    , struct _xlocale*    );
unsigned long  int  mbrtowc_l(int* restrict    , const char* restrict , unsigned long  int  __n  , union anonymous_typeZ1* restrict    , struct _xlocale*    );
int mbsinit_l(const union anonymous_typeZ1*    , struct _xlocale*    );
unsigned long  int  mbsrtowcs_l(int* restrict    , const char** restrict , unsigned long  int  __len  , union anonymous_typeZ1* restrict    , struct _xlocale*    );
unsigned int  putwc_l(int    , struct __sFILE*    , struct _xlocale*    );
unsigned int  putwchar_l(int    , struct _xlocale*    );
int swprintf_l(int* restrict    , unsigned long  int  n  , struct _xlocale*    , const int* restrict    , ...);
int swscanf_l(const int* restrict    , struct _xlocale*    , const int* restrict    , ...);
unsigned int  ungetwc_l(unsigned int    , struct __sFILE*    , struct _xlocale*    );
int vfwprintf_l(struct __sFILE* restrict    , struct _xlocale*    , const int* restrict    , __darwin_va_list    );
int vswprintf_l(int* restrict    , unsigned long  int  n  , struct _xlocale*    , const int* restrict    , __darwin_va_list    );
int vwprintf_l(struct _xlocale*    , const int* restrict    , __darwin_va_list    );
unsigned long  int  wcrtomb_l(char* restrict , int    , union anonymous_typeZ1* restrict    , struct _xlocale*    );
int wcscoll_l(const int*    , const int*    , struct _xlocale*    );
unsigned long  int  wcsftime_l(int* restrict    , unsigned long  int  __n  , const int* restrict    , const struct tm* restrict    , struct _xlocale*    ) ;
unsigned long  int  wcsrtombs_l(char* restrict , const int** restrict    , unsigned long  int  __len  , union anonymous_typeZ1* restrict    , struct _xlocale*    );
double wcstod_l(const int* restrict    , int** restrict    , struct _xlocale*    );
long wcstol_l(const int* restrict    , int** restrict    , int , struct _xlocale*    );
unsigned long  int wcstoul_l(const int* restrict    , int** restrict    , int , struct _xlocale*    );
int wcswidth_l(const int*    , unsigned long  int  __n  , struct _xlocale*    );
unsigned long  int  wcsxfrm_l(int* restrict    , const int* restrict    , unsigned long  int  __n  , struct _xlocale*    );
int wctob_l(unsigned int    , struct _xlocale*    );
int wcwidth_l(int    , struct _xlocale*    );
int wprintf_l(struct _xlocale*    , const int* restrict    , ...);
int wscanf_l(struct _xlocale*    , const int* restrict    , ...);
int vfwscanf_l(struct __sFILE* restrict    , struct _xlocale*    , const int* restrict    , __darwin_va_list    );
int vswscanf_l(const int* restrict    , struct _xlocale*    , const int* restrict    , __darwin_va_list    );
int vwscanf_l(struct _xlocale*    , const int* restrict    , __darwin_va_list    );
float wcstof_l(const int* restrict    , int** restrict    , struct _xlocale*    );
long  double wcstold_l(const int* restrict    , int** restrict    , struct _xlocale*    );
long long wcstoll_l(const int* restrict    , int** restrict    , int , struct _xlocale*    );
unsigned long  long wcstoull_l(const int* restrict    , int** restrict    , int , struct _xlocale*    );
unsigned long  int  mbsnrtowcs_l(int* restrict    , const char** restrict , unsigned long  int    , unsigned long  int  __len  , union anonymous_typeZ1* restrict    , struct _xlocale*    );
int wcscasecmp_l(const int*    , const int*    , struct _xlocale*    );
int wcsncasecmp_l(const int*    , const int*    , unsigned long  int  n  , struct _xlocale*    );
unsigned long  int  wcsnrtombs_l(char* restrict , const int** restrict    , unsigned long  int    , unsigned long  int    , union anonymous_typeZ1* restrict    , struct _xlocale*    );
int*  fgetwln_l(struct __sFILE* restrict    , unsigned long  int*    , struct _xlocale*    );
char* gettext(const char* __msgid) __asm__ ("__USER_LABEL_PREFIX__" "libintl_gettext")
       __attribute__ ((__format_arg__ (1)));
char* dgettext(const char* __domainname, const char* __msgid) __asm__ ("__USER_LABEL_PREFIX__" "libintl_dgettext")
       __attribute__ ((__format_arg__ (2)));
char* dcgettext(const char* __domainname, const char* __msgid, int __category) __asm__ ("__USER_LABEL_PREFIX__" "libintl_dcgettext")
       __attribute__ ((__format_arg__ (2)));
char* ngettext(const char* __msgid1, const char* __msgid2, unsigned long  int __n) __asm__ ("__USER_LABEL_PREFIX__" "libintl_ngettext")
       __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));
char* dngettext(const char* __domainname, const char* __msgid1, const char* __msgid2, unsigned long  int __n) __asm__ ("__USER_LABEL_PREFIX__" "libintl_dngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
char* dcngettext(const char* __domainname, const char* __msgid1, const char* __msgid2, unsigned long  int __n, int __category) __asm__ ("__USER_LABEL_PREFIX__" "libintl_dcngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
char* textdomain(const char* __domainname) __asm__ ("__USER_LABEL_PREFIX__" "libintl_textdomain");
char* bindtextdomain(const char* __domainname, const char* __dirname) __asm__ ("__USER_LABEL_PREFIX__" "libintl_bindtextdomain");
char* bind_textdomain_codeset(const char* __domainname, const char* __codeset) __asm__ ("__USER_LABEL_PREFIX__" "libintl_bind_textdomain_codeset");
char* setlocale(int , const char* ) __asm__ ("__USER_LABEL_PREFIX__" "libintl_setlocale");
struct _xlocale*  newlocale(int , const char* , struct _xlocale*    ) __asm__ ("__USER_LABEL_PREFIX__" "libintl_newlocale");
void libintl_set_relocation_prefix(const char* orig_prefix, const char* curr_prefix);
int __math_errhandling();
int __fpclassifyf(float );
int __fpclassifyd(double );
int __fpclassifyl(long  double );
float acosf(float );
double acos(double );
long  double acosl(long  double );
float asinf(float );
double asin(double );
long  double asinl(long  double );
float atanf(float );
double atan(double );
long  double atanl(long  double );
float atan2f(float , float );
double atan2(double , double );
long  double atan2l(long  double , long  double );
float cosf(float );
double cos(double );
long  double cosl(long  double );
float sinf(float );
double sin(double );
long  double sinl(long  double );
float tanf(float );
double tan(double );
long  double tanl(long  double );
float acoshf(float );
double acosh(double );
long  double acoshl(long  double );
float asinhf(float );
double asinh(double );
long  double asinhl(long  double );
float atanhf(float );
double atanh(double );
long  double atanhl(long  double );
float coshf(float );
double cosh(double );
long  double coshl(long  double );
float sinhf(float );
double sinh(double );
long  double sinhl(long  double );
float tanhf(float );
double tanh(double );
long  double tanhl(long  double );
float expf(float );
double exp(double );
long  double expl(long  double );
float exp2f(float );
double exp2(double );
long  double exp2l(long  double );
float expm1f(float );
double expm1(double );
long  double expm1l(long  double );
float logf(float );
double log(double );
long  double logl(long  double );
float log10f(float );
double log10(double );
long  double log10l(long  double );
float log2f(float );
double log2(double );
long  double log2l(long  double );
float log1pf(float );
double log1p(double );
long  double log1pl(long  double );
float logbf(float );
double logb(double );
long  double logbl(long  double );
float modff(float , float* );
double modf(double , double* );
long  double modfl(long  double , long  double* );
float ldexpf(float , int );
double ldexp(double , int );
long  double ldexpl(long  double , int );
float frexpf(float , int* );
double frexp(double , int* );
long  double frexpl(long  double , int* );
int ilogbf(float );
int ilogb(double );
int ilogbl(long  double );
float scalbnf(float , int );
double scalbn(double , int );
long  double scalbnl(long  double , int );
float scalblnf(float , long  int );
double scalbln(double , long  int );
long  double scalblnl(long  double , long  int );
float fabsf(float );
double fabs(double );
long  double fabsl(long  double );
float cbrtf(float );
double cbrt(double );
long  double cbrtl(long  double );
float hypotf(float , float );
double hypot(double , double );
long  double hypotl(long  double , long  double );
float powf(float , float );
double pow(double , double );
long  double powl(long  double , long  double );
float sqrtf(float );
double sqrt(double );
long  double sqrtl(long  double );
float erff(float );
double erf(double );
long  double erfl(long  double );
float erfcf(float );
double erfc(double );
long  double erfcl(long  double );
float lgammaf(float );
double lgamma(double );
long  double lgammal(long  double );
float tgammaf(float );
double tgamma(double );
long  double tgammal(long  double );
float ceilf(float );
double ceil(double );
long  double ceill(long  double );
float floorf(float );
double floor(double );
long  double floorl(long  double );
float nearbyintf(float );
double nearbyint(double );
long  double nearbyintl(long  double );
float rintf(float );
double rint(double );
long  double rintl(long  double );
long  int lrintf(float );
long  int lrint(double );
long  int lrintl(long  double );
float roundf(float );
double round(double );
long  double roundl(long  double );
long  int lroundf(float );
long  int lround(double );
long  int lroundl(long  double );
long long int llrintf(float );
long long int llrint(double );
long long int llrintl(long  double );
long long int llroundf(float );
long long int llround(double );
long long int llroundl(long  double );
float truncf(float );
double trunc(double );
long  double truncl(long  double );
float fmodf(float , float );
double fmod(double , double );
long  double fmodl(long  double , long  double );
float remainderf(float , float );
double remainder(double , double );
long  double remainderl(long  double , long  double );
float remquof(float , float , int* );
double remquo(double , double , int* );
long  double remquol(long  double , long  double , int* );
float copysignf(float , float );
double copysign(double , double );
long  double copysignl(long  double , long  double );
float nanf(const char* );
double nan(const char* );
long  double nanl(const char* );
float nextafterf(float , float );
double nextafter(double , double );
long  double nextafterl(long  double , long  double );
double nexttoward(double , long  double );
float nexttowardf(float , long  double );
long  double nexttowardl(long  double , long  double );
float fdimf(float , float );
double fdim(double , double );
long  double fdiml(long  double , long  double );
float fmaxf(float , float );
double fmax(double , double );
long  double fmaxl(long  double , long  double );
float fminf(float , float );
double fmin(double , double );
long  double fminl(long  double , long  double );
float fmaf(float , float , float );
double fma(double , double , double );
long  double fmal(long  double , long  double , long  double );
float __exp10f(float );
double __exp10(double );
float __cospif(float );
double __cospi(double );
float __sinpif(float );
double __sinpi(double );
float __tanpif(float );
double __tanpi(double );
_Float16 __fabsf16(_Float16 );
_Float16 __hypotf16(_Float16 , _Float16 );
_Float16 __sqrtf16(_Float16 );
_Float16 __ceilf16(_Float16 );
_Float16 __floorf16(_Float16 );
_Float16 __rintf16(_Float16 );
_Float16 __roundf16(_Float16 );
_Float16 __truncf16(_Float16 );
_Float16 __copysignf16(_Float16 , _Float16 );
_Float16 __nextafterf16(_Float16 , _Float16 );
_Float16 __fmaxf16(_Float16 , _Float16 );
_Float16 __fminf16(_Float16 , _Float16 );
_Float16 __fmaf16(_Float16 , _Float16 , _Float16 );
struct __float2  __sincosf_stret(float );
struct __double2  __sincos_stret(double );
struct __float2  __sincospif_stret(float );
struct __double2  __sincospi_stret(double );
double j0(double );
double j1(double );
double jn(int , double );
double y0(double );
double y1(double );
double yn(int , double );
double scalb(double , double );
void* memchr(const void* __s, int __c, unsigned long  int  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  int  __n  );
void* memcpy(void* __dst, const void* __src, unsigned long  int  __n  );
void* memmove(void* __dst, const void* __src, unsigned long  int  __len  );
void* memset(void* __b, int __c, unsigned long  int  __len  );
char* strcat(char* __s1, const char* __s2);
char* strchr(const char* __s, int __c);
int strcmp(const char* __s1, const char* __s2);
int strcoll(const char* __s1, const char* __s2);
char* strcpy(char* __dst, const char* __src);
unsigned long  int  strcspn(const char* __s, const char* __charset);
char* strerror(int __errnum) ;
unsigned long  int  strlen(const char* __s);
char* strncat(char* __s1, const char* __s2, unsigned long  int  __n  );
int strncmp(const char* __s1, const char* __s2, unsigned long  int  __n  );
char* strncpy(char* __dst, const char* __src, unsigned long  int  __n  );
char* strpbrk(const char* __s, const char* __charset);
char* strrchr(const char* __s, int __c);
unsigned long  int  strspn(const char* __s, const char* __charset);
char* strstr(const char* __big, const char* __little);
char* strtok(char* __str, const char* __sep);
unsigned long  int  strxfrm(char* __s1, const char* __s2, unsigned long  int  __n  );
char* strtok_r(char* __str, const char* __sep, char** __lasts);
int strerror_r(int __errnum, char* __strerrbuf, unsigned long  int  __buflen  );
char* strdup(const char* __s1);
void* memccpy(void* __dst, const void* __src, int __c, unsigned long  int  __n  );
char* stpcpy(char* __dst, const char* __src);
char* stpncpy(char* __dst, const char* __src, unsigned long  int  __n  );
char* strndup(const char* __s1, unsigned long  int  __n  );
unsigned long  int  strnlen(const char* __s1, unsigned long  int  __n  );
char* strsignal(int __sig);
int  memset_s(void* __s, unsigned long  int  __smax  , int __c, unsigned long  int  __n  );
void* memmem(const void* __big, unsigned long  int  __big_len  , const void* __little, unsigned long  int  __little_len  );
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int  __len  );
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int  __len  );
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int  __len  );
char* strcasestr(const char* __big, const char* __little);
char* strchrnul(const char* __s, int __c);
char* strnstr(const char* __big, const char* __little, unsigned long  int  __len  );
unsigned long  int  strlcat(char* __dst, const char* __source, unsigned long  int  __size  );
unsigned long  int  strlcpy(char* __dst, const char* __source, unsigned long  int  __size  );
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* restrict , void* restrict , long  __len  );
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int  __len  );
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int  __buflen  );
int ffs(int );
int strcasecmp(const char* , const char* );
int strncasecmp(const char* , const char* , unsigned long  int    );
int ffsl(long );
int ffsll(long  long );
int fls(int );
int flsl(long );
int flsll(long  long );
int strcoll_l(const char* , const char* , struct _xlocale*    );
unsigned long  int  strxfrm_l(char* , const char* , unsigned long  int  __n  , struct _xlocale*    );
int strcasecmp_l(const char* , const char* , struct _xlocale*    );
char* strcasestr_l(const char* , const char* , struct _xlocale*    );
int strncasecmp_l(const char* , const char* , unsigned long  int    , struct _xlocale*    );
struct tagITEM**  menu_items(const struct tagMENU*    );
struct tagITEM*  current_item(const struct tagMENU*    );
struct tagITEM*  new_item(const char* , const char* );
struct tagMENU*  new_menu(struct tagITEM**    );
int  item_opts(const struct tagITEM*    );
int  menu_opts(const struct tagMENU*    );
void (*item_init(const struct tagMENU*    ))(struct tagMENU*) ;
void (*item_term(const struct tagMENU*    ))(struct tagMENU*) ;
void (*menu_init(const struct tagMENU*    ))(struct tagMENU*) ;
void (*menu_term(const struct tagMENU*    ))(struct tagMENU*) ;
struct _win_st*  menu_sub(const struct tagMENU*    );
struct _win_st*  menu_win(const struct tagMENU*    );
const char* item_description(const struct tagITEM*    );
const char* item_name(const struct tagITEM*    );
const char* menu_mark(const struct tagMENU*    );
const char* menu_request_name(int );
char* menu_pattern(const struct tagMENU*    );
void* menu_userptr(const struct tagMENU*    );
void* item_userptr(const struct tagITEM*    );
unsigned int  menu_back(const struct tagMENU*    );
unsigned int  menu_fore(const struct tagMENU*    );
unsigned int  menu_grey(const struct tagMENU*    );
int free_item(struct tagITEM*    );
int free_menu(struct tagMENU*    );
int item_count(const struct tagMENU*    );
int item_index(const struct tagITEM*    );
int item_opts_off(struct tagITEM*    , int    );
int item_opts_on(struct tagITEM*    , int    );
int menu_driver(struct tagMENU*    , int );
int menu_opts_off(struct tagMENU*    , int    );
int menu_opts_on(struct tagMENU*    , int    );
int menu_pad(const struct tagMENU*    );
int pos_menu_cursor(const struct tagMENU*    );
int post_menu(struct tagMENU*    );
int scale_menu(const struct tagMENU*    , int* , int* );
int set_current_item(struct tagMENU*  menu  , struct tagITEM*  item  );
int set_item_init(struct tagMENU*    , void (*anonymous_var_nameY2939)(struct tagMENU*)  );
int set_item_opts(struct tagITEM*    , int    );
int set_item_term(struct tagMENU*    , void (*anonymous_var_nameY2943)(struct tagMENU*)  );
int set_item_userptr(struct tagITEM*    , void* );
int set_item_value(struct tagITEM*    , _Bool );
int set_menu_back(struct tagMENU*    , unsigned int    );
int set_menu_fore(struct tagMENU*    , unsigned int    );
int set_menu_format(struct tagMENU*    , int , int );
int set_menu_grey(struct tagMENU*    , unsigned int    );
int set_menu_init(struct tagMENU*    , void (*anonymous_var_nameY2958)(struct tagMENU*)  );
int set_menu_items(struct tagMENU*    , struct tagITEM**    );
int set_menu_mark(struct tagMENU*    , const char* );
int set_menu_opts(struct tagMENU*    , int    );
int set_menu_pad(struct tagMENU*    , int );
int set_menu_pattern(struct tagMENU*    , const char* );
int set_menu_sub(struct tagMENU*    , struct _win_st*    );
int set_menu_term(struct tagMENU*    , void (*anonymous_var_nameY2972)(struct tagMENU*)  );
int set_menu_userptr(struct tagMENU*    , void* );
int set_menu_win(struct tagMENU*    , struct _win_st*    );
int set_top_row(struct tagMENU*    , int );
int top_row(const struct tagMENU*    );
int unpost_menu(struct tagMENU*    );
int menu_request_by_name(const char* );
int set_menu_spacing(struct tagMENU*    , int , int , int );
int menu_spacing(const struct tagMENU*    , int* , int* , int* );
_Bool item_value(const struct tagITEM*    );
_Bool item_visible(const struct tagITEM*    );
void menu_format(const struct tagMENU*    , int* , int* );
long  strfmon(char* , unsigned long  int  __maxsize  , const char* , ...);
long  strfmon_l(char* , unsigned long  int  __maxsize  , struct _xlocale*    , const char* , ...) __attribute__((__format__ (__strfmon__, 4, 5)));
int accept(int , struct sockaddr* restrict    , unsigned int* restrict    ) ;
int bind(int , const struct sockaddr*    , unsigned int    ) ;
int connect(int , const struct sockaddr*    , unsigned int    ) ;
int getpeername(int , struct sockaddr* restrict    , unsigned int* restrict    ) ;
int getsockname(int , struct sockaddr* restrict    , unsigned int* restrict    ) ;
int getsockopt(int , int , int , void* restrict , unsigned int* restrict    );
int listen(int , int ) ;
long  recv(int , void* , unsigned long  int    , int ) ;
long  recvfrom(int , void* , unsigned long  int    , int , struct sockaddr* restrict    , unsigned int* restrict    ) ;
long  recvmsg(int , struct msghdr*    , int ) ;
long  send(int , const void* , unsigned long  int    , int ) ;
long  sendmsg(int , const struct msghdr*    , int ) ;
long  sendto(int , const void* , unsigned long  int    , int , const struct sockaddr*    , unsigned int    ) ;
int setsockopt(int , int , int , const void* , unsigned int    );
int shutdown(int , int );
int sockatmark(int );
int socket(int , int , int );
int socketpair(int , int , int , int* ) ;
void pfctlinput(int , struct sockaddr*    );
int connectx(int , const struct sa_endpoints*    , unsigned int    , unsigned int , const struct iovec*    , unsigned int , unsigned long  int*    , unsigned int*    );
int disconnectx(int , unsigned int    , unsigned int    );
int setipv4sourcefilter(int , struct in_addr    , struct in_addr    , unsigned int    , unsigned int    , struct in_addr*    );
int getipv4sourcefilter(int , struct in_addr    , struct in_addr    , unsigned int*    , unsigned int*    , struct in_addr*    );
int setsourcefilter(int , unsigned int    , struct sockaddr*    , unsigned int    , unsigned int    , unsigned int    , struct sockaddr_storage*    );
int getsourcefilter(int , unsigned int    , struct sockaddr*    , unsigned int    , unsigned int*    , unsigned int*    , struct sockaddr_storage*    );
int inet6_option_space(int );
int inet6_option_init(void* , struct cmsghdr**    , int );
int inet6_option_append(struct cmsghdr*    , const unsigned char*    , int , int );
unsigned char*  inet6_option_alloc(struct cmsghdr*    , int , int , int );
int inet6_option_next(const struct cmsghdr*    , unsigned char**    );
int inet6_option_find(const struct cmsghdr*    , unsigned char**    , int );
unsigned long  int  inet6_rthdr_space(int , int );
struct cmsghdr*  inet6_rthdr_init(void* , int );
int inet6_rthdr_add(struct cmsghdr*    , const struct in6_addr*    , unsigned int );
int inet6_rthdr_lasthop(struct cmsghdr*    , unsigned int );
int inet6_rthdr_segments(const struct cmsghdr*    );
struct in6_addr*  inet6_rthdr_getaddr(struct cmsghdr*    , int );
int inet6_rthdr_getflags(const struct cmsghdr*    , int );
int inet6_opt_init(void* , unsigned int    );
int inet6_opt_append(void* , unsigned int    , int , unsigned char    , unsigned int    , unsigned char    , void** );
int inet6_opt_finish(void* , unsigned int    , int );
int inet6_opt_set_val(void* , int , void* , unsigned int    );
int inet6_opt_next(void* , unsigned int    , int , unsigned char*    , unsigned int*    , void** );
int inet6_opt_find(void* , unsigned int    , int , unsigned char    , unsigned int*    , void** );
int inet6_opt_get_val(void* , int , void* , unsigned int    );
unsigned int  inet6_rth_space(int , int );
void* inet6_rth_init(void* , unsigned int    , int , int );
int inet6_rth_add(void* , const struct in6_addr*    );
int inet6_rth_reverse(const void* , void* );
int inet6_rth_segments(const void* );
struct in6_addr*  inet6_rth_getaddr(const void* , int );
int bindresvport(int , struct sockaddr_in*    );
int bindresvport_sa(int , struct sockaddr*    );
void endhostent();
void endnetent();
void endprotoent();
void endservent();
void freeaddrinfo(struct addrinfo*    );
const char* gai_strerror(int );
int getaddrinfo(const char* restrict , const char* restrict , const struct addrinfo* restrict    , struct addrinfo** restrict    );
struct hostent*  gethostbyaddr(const void* , unsigned int    , int );
struct hostent*  gethostbyname(const char* );
struct hostent*  gethostent();
int getnameinfo(const struct sockaddr* restrict    , unsigned int    , char* restrict , unsigned int    , char* restrict , unsigned int    , int );
struct netent*  getnetbyaddr(unsigned int    , int );
struct netent*  getnetbyname(const char* );
struct netent*  getnetent();
struct protoent*  getprotobyname(const char* );
struct protoent*  getprotobynumber(int );
struct protoent*  getprotoent();
struct servent*  getservbyname(const char* , const char* );
struct servent*  getservbyport(int , const char* );
struct servent*  getservent();
void sethostent(int );
void setnetent(int );
void setprotoent(int );
void setservent(int );
void freehostent(struct hostent*    );
struct hostent*  gethostbyname2(const char* , int );
struct hostent*  getipnodebyaddr(const void* , unsigned long  int    , int , int* );
struct hostent*  getipnodebyname(const char* , int , int , int* );
struct rpcent*  getrpcbyname(const char* name);
struct rpcent*  getrpcbynumber(int number);
struct rpcent*  getrpcent();
void setrpcent(int stayopen);
void endrpcent();
void herror(const char* );
const char* hstrerror(int );
int innetgr(const char* , const char* , const char* , const char* );
int getnetgrent(char** , char** , char** );
void endnetgrent();
void setnetgrent(const char* );
struct __nl_cat_d*  catopen(const char* , int );
char* catgets(struct __nl_cat_d*    , int , int , const char* ) __attribute__((__format_arg__(4)));
int catclose(struct __nl_cat_d*    );
struct _win_st*  panel_window(const struct panel*    );
void update_panels();
int hide_panel(struct panel*    );
int show_panel(struct panel*    );
int del_panel(struct panel*    );
int top_panel(struct panel*    );
int bottom_panel(struct panel*    );
struct panel*  new_panel(struct _win_st*    );
struct panel*  panel_above(const struct panel*    );
struct panel*  panel_below(const struct panel*    );
int set_panel_userptr(struct panel*    , void* );
void* panel_userptr(const struct panel*    );
int move_panel(struct panel*    , int , int );
int replace_panel(struct panel*    , struct _win_st*    );
int panel_hidden(const struct panel*    );
int poll(struct pollfd*    , unsigned int    , int ) ;
struct _printf_domain*  copy_printf_domain(struct _printf_domain*  __domain  ) __attribute__((__nonnull__(1)))
		 ;
void free_printf_domain(struct _printf_domain*  __domain  );
struct _printf_domain*  new_printf_domain() __attribute__((__malloc__))
		 ;
int register_printf_domain_function(struct _printf_domain*  __domain  , int __spec, int (*(*__render))(struct __sFILE* ,const struct printf_info* ,const void** const)  , int (*(*__arginfo))(const struct printf_info* ,unsigned long  int ,int*)  , void* __context) __attribute__((__nonnull__(1)))
	 ;
int register_printf_domain_render_std(struct _printf_domain*  __domain  , const char* __specs) __attribute__((__nonnull__(1)))
	 ;
int asxprintf(char** restrict __ret, struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __format, ...) __attribute__((__nonnull__(1, 2, 4)))
	 ;
int dxprintf(int __fd, struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __format, ...) __attribute__((__nonnull__(2, 4)))
	 ;
int fxprintf(struct __sFILE* restrict  __stream  , struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __format, ...) __attribute__((__nonnull__(1, 2, 4)))
	 ;
int sxprintf(char* restrict __str, unsigned long  int  __size  , struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __format, ...) __attribute__((__nonnull__(1, 3, 5)))
	 ;
int xprintf(struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __format, ...) __attribute__((__nonnull__(1, 3)))
	 ;
int vasxprintf(char** restrict __ret, struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __format, __builtin_va_list  __ap  ) __attribute__((__nonnull__(1, 2, 4)))
	 ;
int vdxprintf(int __fd, struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __format, __builtin_va_list  __ap  ) __attribute__((__nonnull__(2, 4)))
	 ;
int vfxprintf(struct __sFILE* restrict  __stream  , struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __format, __builtin_va_list  __ap  ) __attribute__((__nonnull__(1, 2, 4)))
	 ;
int vsxprintf(char* restrict __str, unsigned long  int  __size  , struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __format, __builtin_va_list  __ap  ) __attribute__((__nonnull__(1, 3, 5)))
	 ;
int vxprintf(struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __format, __builtin_va_list  __ap  ) __attribute__((__nonnull__(1, 3)))
	 ;
void free_printf_comp(struct _printf_compiled*  __pc  );
struct _printf_compiled*  new_printf_comp(struct _printf_domain*  __domain  , struct _xlocale*  __loc  , const char* restrict __fmt) __attribute__((__nonnull__(1, 3)))
		 ;
int asxprintf_exec(char** restrict __ret, struct _printf_compiled*  __pc  , ...) __attribute__((__nonnull__(1, 2)))
	 ;
int dxprintf_exec(int __fd, struct _printf_compiled*  __pc  , ...) __attribute__((__nonnull__(2)))
	 ;
int fxprintf_exec(struct __sFILE* restrict  __stream  , struct _printf_compiled*  __pc  , ...) __attribute__((__nonnull__(1, 2)))
	 ;
int sxprintf_exec(char* restrict __str, unsigned long  int  __size  , struct _printf_compiled*  __pc  , ...) __attribute__((__nonnull__(1, 3)))
	 ;
int xprintf_exec(struct _printf_compiled*  __pc  , ...) __attribute__((__nonnull__(1)))
	 ;
int vasxprintf_exec(char** restrict __ret, struct _printf_compiled*  __pc  , __builtin_va_list  __ap  ) __attribute__((__nonnull__(1, 2)))
	 ;
int vdxprintf_exec(int __fd, struct _printf_compiled*  __pc  , __builtin_va_list  __ap  ) __attribute__((__nonnull__(2)))
	 ;
int vfxprintf_exec(struct __sFILE* restrict  __stream  , struct _printf_compiled*  __pc  , __builtin_va_list  __ap  ) __attribute__((__nonnull__(1, 2)))
	 ;
int vsxprintf_exec(char* restrict __str, unsigned long  int  __size  , struct _printf_compiled*  __pc  , __builtin_va_list  __ap  ) __attribute__((__nonnull__(1, 3)))
	 ;
int vxprintf_exec(struct _printf_compiled*  __pc  , __builtin_va_list  __ap  ) __attribute__((__nonnull__(1)))
	 ;
int sched_yield();
int sched_get_priority_min(int );
int sched_get_priority_max(int );
unsigned int  qos_class_self();
unsigned int  qos_class_main();
int pthread_attr_set_qos_class_np(struct _opaque_pthread_attr_t*  __attr  , unsigned int  __qos_class  , int __relative_priority);
int pthread_attr_get_qos_class_np(struct _opaque_pthread_attr_t* restrict  __attr  , unsigned int* restrict  __qos_class  , int* restrict __relative_priority);
int pthread_set_qos_class_self_np(unsigned int  __qos_class  , int __relative_priority);
int pthread_get_qos_class_np(struct _opaque_pthread_t*  __pthread  , unsigned int* restrict  __qos_class  , int* restrict __relative_priority);
struct pthread_override_s*  pthread_override_qos_class_start_np(struct _opaque_pthread_t*  __pthread  , unsigned int  __qos_class  , int __relative_priority);
int pthread_override_qos_class_end_np(struct pthread_override_s*  __override  );
int pthread_atfork(void (*anonymous_lambda_var_nameZ14)(), void (*anonymous_lambda_var_nameZ15)(), void (*anonymous_lambda_var_nameZ16)());
int pthread_attr_destroy(struct _opaque_pthread_attr_t*    );
int pthread_attr_getdetachstate(const struct _opaque_pthread_attr_t*    , int* );
int pthread_attr_getguardsize(const struct _opaque_pthread_attr_t* restrict    , unsigned long  int* restrict    );
int pthread_attr_getinheritsched(const struct _opaque_pthread_attr_t* restrict    , int* restrict );
int pthread_attr_getschedparam(const struct _opaque_pthread_attr_t* restrict    , struct sched_param* restrict    );
int pthread_attr_getschedpolicy(const struct _opaque_pthread_attr_t* restrict    , int* restrict );
int pthread_attr_getscope(const struct _opaque_pthread_attr_t* restrict    , int* restrict );
int pthread_attr_getstack(const struct _opaque_pthread_attr_t* restrict    , void** restrict , unsigned long  int* restrict    );
int pthread_attr_getstackaddr(const struct _opaque_pthread_attr_t* restrict    , void** restrict );
int pthread_attr_getstacksize(const struct _opaque_pthread_attr_t* restrict    , unsigned long  int* restrict    );
int pthread_attr_init(struct _opaque_pthread_attr_t*    );
int pthread_attr_setdetachstate(struct _opaque_pthread_attr_t*    , int );
int pthread_attr_setguardsize(struct _opaque_pthread_attr_t*    , unsigned long  int    );
int pthread_attr_setinheritsched(struct _opaque_pthread_attr_t*    , int );
int pthread_attr_setschedparam(struct _opaque_pthread_attr_t* restrict    , const struct sched_param* restrict    );
int pthread_attr_setschedpolicy(struct _opaque_pthread_attr_t*    , int );
int pthread_attr_setscope(struct _opaque_pthread_attr_t*    , int );
int pthread_attr_setstack(struct _opaque_pthread_attr_t*    , void* , unsigned long  int    );
int pthread_attr_setstackaddr(struct _opaque_pthread_attr_t*    , void* );
int pthread_attr_setstacksize(struct _opaque_pthread_attr_t*    , unsigned long  int    );
int pthread_cancel(struct _opaque_pthread_t*    ) ;
int pthread_cond_broadcast(struct _opaque_pthread_cond_t*    );
int pthread_cond_destroy(struct _opaque_pthread_cond_t*    );
int pthread_cond_init(struct _opaque_pthread_cond_t* restrict    , const struct _opaque_pthread_condattr_t* restrict    ) ;
int pthread_cond_signal(struct _opaque_pthread_cond_t*    );
int pthread_cond_timedwait(struct _opaque_pthread_cond_t* restrict    , struct _opaque_pthread_mutex_t* restrict    , const struct timespec* restrict    ) ;
int pthread_cond_wait(struct _opaque_pthread_cond_t* restrict    , struct _opaque_pthread_mutex_t* restrict    ) ;
int pthread_condattr_destroy(struct _opaque_pthread_condattr_t*    );
int pthread_condattr_init(struct _opaque_pthread_condattr_t*    );
int pthread_condattr_getpshared(const struct _opaque_pthread_condattr_t* restrict    , int* restrict );
int pthread_condattr_setpshared(struct _opaque_pthread_condattr_t*    , int );
int pthread_create(struct _opaque_pthread_t** restrict    , const struct _opaque_pthread_attr_t* restrict    , void* (*anonymous_lambda_var_nameZ17)(void*), void* restrict );
int pthread_detach(struct _opaque_pthread_t*    );
int pthread_equal(struct _opaque_pthread_t*    , struct _opaque_pthread_t*    );
void pthread_exit(void* ) __attribute__((__noreturn__));
int pthread_getconcurrency();
int pthread_getschedparam(struct _opaque_pthread_t*    , int* restrict , struct sched_param* restrict    );
void* pthread_getspecific(unsigned long  int    );
int pthread_join(struct _opaque_pthread_t*    , void** ) ;
int pthread_key_create(unsigned long  int*    , void (*anonymous_lambda_var_nameZ18)(void*));
int pthread_key_delete(unsigned long  int    );
int pthread_mutex_destroy(struct _opaque_pthread_mutex_t*    );
int pthread_mutex_getprioceiling(const struct _opaque_pthread_mutex_t* restrict    , int* restrict );
int pthread_mutex_init(struct _opaque_pthread_mutex_t* restrict    , const struct _opaque_pthread_mutexattr_t* restrict    );
int pthread_mutex_lock(struct _opaque_pthread_mutex_t*    );
int pthread_mutex_setprioceiling(struct _opaque_pthread_mutex_t* restrict    , int , int* restrict );
int pthread_mutex_trylock(struct _opaque_pthread_mutex_t*    );
int pthread_mutex_unlock(struct _opaque_pthread_mutex_t*    );
int pthread_mutexattr_destroy(struct _opaque_pthread_mutexattr_t*    ) ;
int pthread_mutexattr_getprioceiling(const struct _opaque_pthread_mutexattr_t* restrict    , int* restrict );
int pthread_mutexattr_getprotocol(const struct _opaque_pthread_mutexattr_t* restrict    , int* restrict );
int pthread_mutexattr_getpshared(const struct _opaque_pthread_mutexattr_t* restrict    , int* restrict );
int pthread_mutexattr_gettype(const struct _opaque_pthread_mutexattr_t* restrict    , int* restrict );
int pthread_mutexattr_getpolicy_np(const struct _opaque_pthread_mutexattr_t* restrict    , int* restrict );
int pthread_mutexattr_init(struct _opaque_pthread_mutexattr_t*    );
int pthread_mutexattr_setprioceiling(struct _opaque_pthread_mutexattr_t*    , int );
int pthread_mutexattr_setprotocol(struct _opaque_pthread_mutexattr_t*    , int );
int pthread_mutexattr_setpshared(struct _opaque_pthread_mutexattr_t*    , int );
int pthread_mutexattr_settype(struct _opaque_pthread_mutexattr_t*    , int );
int pthread_mutexattr_setpolicy_np(struct _opaque_pthread_mutexattr_t*    , int );
int pthread_once(struct _opaque_pthread_once_t*    , void (*anonymous_lambda_var_nameZ19)());
int pthread_rwlock_destroy(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlock_init(struct _opaque_pthread_rwlock_t* restrict    , const struct _opaque_pthread_rwlockattr_t* restrict    ) ;
int pthread_rwlock_rdlock(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlock_tryrdlock(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlock_trywrlock(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlock_wrlock(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlock_unlock(struct _opaque_pthread_rwlock_t*    ) ;
int pthread_rwlockattr_destroy(struct _opaque_pthread_rwlockattr_t*    );
int pthread_rwlockattr_getpshared(const struct _opaque_pthread_rwlockattr_t* restrict    , int* restrict );
int pthread_rwlockattr_init(struct _opaque_pthread_rwlockattr_t*    );
int pthread_rwlockattr_setpshared(struct _opaque_pthread_rwlockattr_t*    , int );
struct _opaque_pthread_t*  pthread_self();
int pthread_setcancelstate(int , int* ) ;
int pthread_setcanceltype(int , int* ) ;
int pthread_setconcurrency(int );
int pthread_setschedparam(struct _opaque_pthread_t*    , int , const struct sched_param*    );
int pthread_setspecific(unsigned long  int    , const void* );
void pthread_testcancel() ;
int pthread_is_threaded_np();
int pthread_threadid_np(struct _opaque_pthread_t*    , unsigned long  long*    );
int pthread_getname_np(struct _opaque_pthread_t*    , char* , unsigned long  int    );
int pthread_setname_np(const char* );
int pthread_main_np();
unsigned int  pthread_mach_thread_np(struct _opaque_pthread_t*    );
unsigned long  int  pthread_get_stacksize_np(struct _opaque_pthread_t*    );
void* pthread_get_stackaddr_np(struct _opaque_pthread_t*    );
int pthread_cond_signal_thread_np(struct _opaque_pthread_cond_t*    , struct _opaque_pthread_t*    );
int pthread_cond_timedwait_relative_np(struct _opaque_pthread_cond_t*    , struct _opaque_pthread_mutex_t*    , const struct timespec*    );
int pthread_create_suspended_np(struct _opaque_pthread_t**    , const struct _opaque_pthread_attr_t*    , void* (*anonymous_lambda_var_nameZ20)(void*), void* );
struct _opaque_pthread_t*  pthread_from_mach_thread_np(unsigned int    );
void pthread_yield_np();
void pthread_jit_write_protect_np(int enabled);
int pthread_jit_write_protect_supported_np();
int pthread_jit_write_with_callback_np(int (*callback)(void*)  , void* ctx);
void pthread_jit_write_freeze_callbacks_np();
int pthread_cpu_number_np(unsigned long  int*  cpu_number_out  );
struct passwd*  getpwuid(unsigned int    );
struct passwd*  getpwnam(const char* );
int getpwuid_r(unsigned int    , struct passwd*    , char* , unsigned long  int    , struct passwd**    );
int getpwnam_r(const char* , struct passwd*    , char* , unsigned long  int    , struct passwd**    );
struct passwd*  getpwent();
void setpwent();
void endpwent();
int setpassent(int );
char* user_from_uid(unsigned int    , int );
struct passwd*  getpwuuid(unsigned char  [16]  );
int getpwuuid_r(unsigned char  [16]  , struct passwd*    , char* , unsigned long  int    , struct passwd**    );
int regcomp(struct anonymous_typeX34* restrict    , const char* restrict , int ) ;
unsigned long  int  regerror(int , const struct anonymous_typeX34* restrict    , char* restrict , unsigned long  int  __errbuf_size  );
int regexec(const struct anonymous_typeX34* restrict    , const char* restrict , unsigned long  int  __nmatch  , struct anonymous_typeX35  __pmatch[]  , int );
void regfree(struct anonymous_typeX34*    );
int regncomp(struct anonymous_typeX34* restrict    , const char* restrict , unsigned long  int  __len  , int );
int regnexec(const struct anonymous_typeX34* restrict    , const char* restrict , unsigned long  int  __len  , unsigned long  int  __nmatch  , struct anonymous_typeX35  __pmatch[]  , int );
int regwcomp(struct anonymous_typeX34* restrict    , const int* restrict    , int );
int regwexec(const struct anonymous_typeX34* restrict    , const int* restrict    , unsigned long  int  __nmatch  , struct anonymous_typeX35  __pmatch[]  , int );
int regwncomp(struct anonymous_typeX34* restrict    , const int* restrict    , unsigned long  int  __len  , int );
int regwnexec(const struct anonymous_typeX34* restrict    , const int* restrict    , unsigned long  int  __len  , unsigned long  int  __nmatch  , struct anonymous_typeX35  __pmatch[]  , int );
int regcomp_l(struct anonymous_typeX34* restrict    , const char* restrict , int , struct _xlocale*    );
int regncomp_l(struct anonymous_typeX34* restrict    , const char* restrict , unsigned long  int  __len  , int , struct _xlocale*    );
int regwcomp_l(struct anonymous_typeX34* restrict    , const int* restrict    , int , struct _xlocale*    );
int regwnexec_l(const struct anonymous_typeX34* restrict    , const int* restrict    , unsigned long  int  __len  , unsigned long  int  __nmatch  , struct anonymous_typeX35  __pmatch[]  , int , struct _xlocale*    );
int res_9_ns_msg_getflag(struct __ns_msg    , int );
unsigned int  res_9_ns_get16(const unsigned char*    );
unsigned long  int  res_9_ns_get32(const unsigned char*    );
void res_9_ns_put16(unsigned int    , unsigned char*    );
void res_9_ns_put32(unsigned long  int    , unsigned char*    );
int res_9_ns_initparse(const unsigned char*    , int , struct __ns_msg*    );
int res_9_ns_skiprr(const unsigned char*    , const unsigned char*    , enum __ns_sect    , int );
int res_9_ns_parserr(struct __ns_msg*    , enum __ns_sect    , int , struct __ns_rr*    );
int res_9_ns_parserr2(struct __ns_msg*    , enum __ns_sect    , int , struct __ns_rr2*    );
int res_9_ns_sprintrr(const struct __ns_msg*    , const struct __ns_rr*    , const char* , const char* , char* , unsigned long  int    );
int res_9_ns_sprintrrf(const unsigned char*    , unsigned long  int    , const char* , enum __ns_class    , enum __ns_type    , unsigned long  int    , const unsigned char*    , unsigned long  int    , const char* , const char* , char* , unsigned long  int    );
int res_9_ns_format_ttl(unsigned long  int    , char* , unsigned long  int    );
int res_9_ns_parse_ttl(const char* , unsigned long  int*    );
unsigned int  res_9_ns_datetosecs(const char* cp, int* errp);
int res_9_ns_name_ntol(const unsigned char*    , unsigned char*    , unsigned long  int    );
int res_9_ns_name_ntop(const unsigned char*    , char* , unsigned long  int    );
int res_9_ns_name_pton(const char* , unsigned char*    , unsigned long  int    );
int res_9_ns_name_pton2(const char* , unsigned char*    , unsigned long  int    , unsigned long  int*    );
int res_9_ns_name_unpack(const unsigned char*    , const unsigned char*    , const unsigned char*    , unsigned char*    , unsigned long  int    );
int res_9_ns_name_unpack2(const unsigned char*    , const unsigned char*    , const unsigned char*    , unsigned char*    , unsigned long  int    , unsigned long  int*    );
int res_9_ns_name_pack(const unsigned char*    , unsigned char*    , int , const unsigned char**    , const unsigned char**    );
int res_9_ns_name_uncompress(const unsigned char*    , const unsigned char*    , const unsigned char*    , char* , unsigned long  int    );
int res_9_ns_name_compress(const char* , unsigned char*    , unsigned long  int    , const unsigned char**    , const unsigned char**    );
int res_9_ns_name_skip(const unsigned char**    , const unsigned char*    );
void res_9_ns_name_rollback(const unsigned char*    , const unsigned char**    , const unsigned char**    );
int res_9_ns_sign(unsigned char*    , int* , int , int , void* , const unsigned char*    , int , unsigned char*    , int* , long    );
int res_9_ns_sign2(unsigned char*    , int* , int , int , void* , const unsigned char*    , int , unsigned char*    , int* , long    , unsigned char**    , unsigned char**    );
int res_9_ns_sign_tcp(unsigned char*    , int* , int , int , struct res_9_ns_tcp_tsig_state*    , int );
int res_9_ns_sign_tcp2(unsigned char*    , int* , int , int , struct res_9_ns_tcp_tsig_state*    , int , unsigned char**    , unsigned char**    );
int res_9_ns_sign_tcp_init(void* , const unsigned char*    , int , struct res_9_ns_tcp_tsig_state*    );
unsigned char*  res_9_ns_find_tsig(unsigned char*    , unsigned char*    );
int res_9_ns_verify(unsigned char*    , int* , void* , const unsigned char*    , int , unsigned char*    , int* , long*    , int );
int res_9_ns_verify_tcp(unsigned char*    , int* , struct res_9_ns_tcp_tsig_state*    , int );
int res_9_ns_verify_tcp_init(void* , const unsigned char*    , int , struct res_9_ns_tcp_tsig_state*    );
int res_9_ns_samedomain(const char* , const char* );
int res_9_ns_subdomain(const char* , const char* );
int res_9_ns_makecanon(const char* , char* , unsigned long  int    );
int res_9_ns_samename(const char* , const char* );
void _res_9_h_errno_set(struct __res_9_state*    , int );
struct __res_9_state*  __res_9_state();
void res_9_fp_nquery(const unsigned char*    , int , struct __sFILE*    );
void res_9_fp_query(const unsigned char*    , struct __sFILE*    );
const char* res_9_hostalias_1(const char* );
void res_9_p_query(const unsigned char*    );
void res_9_close();
int res_9_init();
int res_9_isourserver(const struct sockaddr_in*    );
int res_9_mkquery(int , const char* , int , int , const unsigned char*    , int , const unsigned char*    , unsigned char*    , int );
int res_9_query(const char* , int , int , unsigned char*    , int );
int res_9_querydomain(const char* , const char* , int , int , unsigned char*    , int );
int res_9_search(const char* , int , int , unsigned char*    , int );
int res_9_send(const unsigned char*    , int , unsigned char*    , int );
int res_9_sendsigned(const unsigned char*    , int , struct res_9_ns_tsig_key*    , unsigned char*    , int );
int res_9_hnok(const char* );
int res_9_ownok(const char* );
int res_9_mailok(const char* );
int res_9_dnok(const char* );
int res_9_sym_ston(const struct res_9_sym*    , const char* , int* );
const char* res_9_sym_ntos(const struct res_9_sym*    , int , int* );
const char* res_9_sym_ntop(const struct res_9_sym*    , int , int* );
int res_9_b64_ntop(unsigned char*    , unsigned long  int    , char* , unsigned long  int    );
int res_9_b64_pton(char* , unsigned char*    , unsigned long  int    );
int res_9_loc_aton(const char* , unsigned char*    );
const char* res_9_loc_ntoa(const unsigned char*    , char* );
int res_9_dn_skipname(const unsigned char*    , const unsigned char*    );
void res_9_putlong(unsigned int    , unsigned char*    );
void res_9_putshort(unsigned short int    , unsigned char*    );
unsigned short int  res_9_getshort(const unsigned char*    );
unsigned int  res_9_getlong(const unsigned char*    );
const char* res_9_p_class(int );
const char* res_9_p_time(unsigned int    );
const char* res_9_p_type(int );
const char* res_9_p_rcode(int );
const unsigned char*  res_9_p_cdnname(const unsigned char*    , const unsigned char*    , int , struct __sFILE*    );
const unsigned char*  res_9_p_cdname(const unsigned char*    , const unsigned char*    , struct __sFILE*    );
const unsigned char*  res_9_p_fqnname(const unsigned char*    , const unsigned char*    , int , char* , int );
const unsigned char*  res_9_p_fqname(const unsigned char*    , const unsigned char*    , struct __sFILE*    );
const char* res_9_p_option(unsigned long  int    );
char* res_9_p_secstodate(unsigned long  int    );
int res_9_dn_count_labels(const char* );
int res_9_dn_comp(const char* , unsigned char*    , int , unsigned char**    , unsigned char**    );
int res_9_dn_expand(const unsigned char*    , const unsigned char*    , const unsigned char*    , char* , int );
unsigned int  res_9_randomid();
unsigned int  res_9_nrandomid(struct __res_9_state*    );
int res_9_nameinquery(const char* , int , int , const unsigned char*    , const unsigned char*    );
int res_9_queriesmatch(const unsigned char*    , const unsigned char*    , const unsigned char*    , const unsigned char*    );
const char* res_9_p_section(int , int );
int res_9_ninit(struct __res_9_state*    );
int res_9_nisourserver(const struct __res_9_state*    , const struct sockaddr_in*    );
void res_9_fp_resstat(const struct __res_9_state*    , struct __sFILE*    );
void res_9_pquery(const struct __res_9_state*    , const unsigned char*    , int , struct __sFILE*    );
const char* res_9_hostalias_2(const struct __res_9_state*    , const char* , char* , unsigned long  int    );
int res_9_nquery(struct __res_9_state*    , const char* , int , int , unsigned char*    , int );
int res_9_nsearch(struct __res_9_state*    , const char* , int , int , unsigned char*    , int );
int res_9_nquerydomain(struct __res_9_state*    , const char* , const char* , int , int , unsigned char*    , int );
int res_9_nmkquery(struct __res_9_state*    , int , const char* , int , int , const unsigned char*    , int , const unsigned char*    , unsigned char*    , int );
int res_9_nsend(struct __res_9_state*    , const unsigned char*    , int , unsigned char*    , int );
int res_9_nsendsigned(struct __res_9_state*    , const unsigned char*    , int , struct res_9_ns_tsig_key*    , unsigned char*    , int );
int res_9_findzonecut(struct __res_9_state*    , const char* , enum __ns_class    , int , char* , unsigned long  int    , struct in_addr*    , int );
int res_9_findzonecut2(struct __res_9_state*    , const char* , enum __ns_class    , int , char* , unsigned long  int    , union res_9_sockaddr_union*    , int );
void res_9_nclose(struct __res_9_state*    );
int res_9_nopt(struct __res_9_state*    , int , unsigned char*    , int , int );
int res_9_nopt_rdata(struct __res_9_state*    , int , unsigned char*    , int , unsigned char*    , unsigned short int    , unsigned short int    , unsigned char*    );
int res_9_vinit(struct __res_9_state*    , int );
void res_destroyservicelist();
const char* res_servicename(unsigned short int    , const char* );
const char* res_protocolname(int );
void res_destroyprotolist();
void res_buildprotolist();
const char* res_get_nibblesuffix(struct __res_9_state*    );
const char* res_get_nibblesuffix2(struct __res_9_state*    );
const char* res_get_bitstringsuffix(struct __res_9_state*    );
void res_9_ndestroy(struct __res_9_state*    );
unsigned short int  res_9_nametoclass(const char* , int* );
unsigned short int  res_9_nametotype(const char* , int* );
void res_9_setservers(struct __res_9_state*    , const union res_9_sockaddr_union*    , int );
int res_9_getservers(struct __res_9_state*    , union res_9_sockaddr_union*    , int );
int hcreate(unsigned long  int    );
void hdestroy();
struct entry*  hsearch(struct entry    , enum anonymous_typeY41    );
void insque(void* , void* );
void* lfind(const void* , const void* , unsigned long  int*    , unsigned long  int    , int (*anonymous_lambda_var_nameZ21)(const void*,const void*));
void* lsearch(const void* , void* , unsigned long  int*    , unsigned long  int    , int (*anonymous_lambda_var_nameZ22)(const void*,const void*));
void remque(void* );
void* tdelete(const void* restrict , void** restrict , int (*anonymous_lambda_var_nameZ23)(const void*,const void*));
void* tfind(const void* , void** const , int (*anonymous_lambda_var_nameZ24)(const void*,const void*));
void* tsearch(const void* , void** , int (*anonymous_lambda_var_nameZ25)(const void*,const void*));
void twalk(const void* , void (*anonymous_lambda_var_nameZ26)(const void*,enum anonymous_typeY41 ,int));
int sem_close(int*    );
int sem_destroy(int*    ) __attribute__((__deprecated__));
int sem_getvalue(int* restrict    , int* restrict ) __attribute__((__deprecated__));
int sem_init(int*    , int , unsigned int ) __attribute__((__deprecated__));
int*  sem_open(const char* , int , ...);
int sem_post(int*    );
int sem_trywait(int*    );
int sem_unlink(const char* );
int sem_wait(int*    ) ;
int setjmp(int  [((14+8+2)*2)]  );
void longjmp(int  [((14+8+2)*2)]  , int ) __attribute__((__noreturn__));
int _setjmp(int  [((14+8+2)*2)]  );
void _longjmp(int  [((14+8+2)*2)]  , int ) __attribute__((__noreturn__));
int sigsetjmp(int  [((14+8+2)*2)+1]  , int );
void siglongjmp(int  [((14+8+2)*2)+1]  , int ) __attribute__((__noreturn__));
void longjmperror();
int adjtime(const struct timeval*    , struct timeval*    );
int futimes(int , const struct timeval*    );
int lutimes(const char* , const struct timeval*    );
int settimeofday(const struct timeval*    , const struct timezone*    );
int getitimer(int , struct itimerval*    );
int gettimeofday(struct timeval* restrict    , void* restrict );
int setitimer(int , const struct itimerval* restrict    , struct itimerval* restrict    );
int utimes(const char* , const struct timeval*    );
unsigned int if_nametoindex(const char* );
char* if_indextoname(unsigned int , char* );
struct if_nameindex*  if_nameindex();
void if_freenameindex(struct if_nameindex*    );
int ioctl(int , unsigned long  int , ...);
int gtty(int , struct sgttyb*    );
int stty(int , struct sgttyb*    );
int raise(int );
void (*bsd_signal(int _function_pointer_result_var_name_a3, void (*_function_pointer_result_var_name_a4)(int)))(int);
int kill(int    , int ) ;
int killpg(int    , int ) ;
int pthread_kill(struct _opaque_pthread_t*    , int );
int pthread_sigmask(int , const unsigned int*    , unsigned int*    ) ;
int sigaction(int , const struct sigaction* restrict    , struct sigaction* restrict    );
int sigaddset(unsigned int*    , int );
int sigaltstack(const struct __darwin_sigaltstack* restrict    , struct __darwin_sigaltstack* restrict    )   ;
int sigdelset(unsigned int*    , int );
int sigemptyset(unsigned int*    );
int sigfillset(unsigned int*    );
int sighold(int );
int sigignore(int );
int siginterrupt(int , int );
int sigismember(const unsigned int*    , int );
int sigpause(int ) ;
int sigpending(unsigned int*    );
int sigprocmask(int , const unsigned int* restrict    , unsigned int* restrict    );
int sigrelse(int );
void (*sigset(int _function_pointer_result_var_name_a5, void (*_function_pointer_result_var_name_a6)(int)))(int);
int sigsuspend(const unsigned int*    ) ;
int sigwait(const unsigned int* restrict    , int* restrict ) ;
void psignal(int , const char* );
int sigblock(int );
int sigsetmask(int );
int sigvec(int , struct sigvec*    , struct sigvec*    );
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
int  mach_msg_overwrite(struct anonymous_typeX63*  msg  , int  option  , unsigned int  send_size  , unsigned int  rcv_size  , unsigned int  rcv_name  , unsigned int  timeout  , unsigned int  notify  , struct anonymous_typeX63*  rcv_msg  , unsigned int  rcv_limit  );
int  mach_msg(struct anonymous_typeX63*  msg  , int  option  , unsigned int  send_size  , unsigned int  rcv_size  , unsigned int  rcv_name  , unsigned int  timeout  , unsigned int  notify  );
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
int getpriority(int , unsigned int    );
int getiopolicy_np(int , int );
int getrlimit(int , struct rlimit*    ) ;
int getrusage(int , struct rusage*    );
int setpriority(int , unsigned int    , int );
int setiopolicy_np(int , int , int );
int setrlimit(int , const struct rlimit*    ) ;
int  wait(int* ) ;
int  waitpid(int    , int* , int ) ;
int waitid(enum anonymous_typeY79    , unsigned int    , struct __siginfo*    , int ) ;
int  wait3(int* , int , struct rusage*    );
int  wait4(int    , int* , int , struct rusage*    );
void* malloc_type_malloc(unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_calloc(unsigned long  int  count  , unsigned long  int  size  , unsigned long  long  type_id  );
void malloc_type_free(void* ptr, unsigned long  long  type_id  );
void* malloc_type_realloc(void* ptr, unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_valloc(unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_aligned_alloc(unsigned long  int  alignment  , unsigned long  int  size  , unsigned long  long  type_id  );
int malloc_type_posix_memalign(void** memptr, unsigned long  int  alignment  , unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_zone_malloc(struct _malloc_zone_t*  zone  , unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_zone_calloc(struct _malloc_zone_t*  zone  , unsigned long  int  count  , unsigned long  int  size  , unsigned long  long  type_id  );
void malloc_type_zone_free(struct _malloc_zone_t*  zone  , void* ptr, unsigned long  long  type_id  );
void* malloc_type_zone_realloc(struct _malloc_zone_t*  zone  , void* ptr, unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_zone_valloc(struct _malloc_zone_t*  zone  , unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_zone_memalign(struct _malloc_zone_t*  zone  , unsigned long  int  alignment  , unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc(unsigned long  int  __size  );
void* calloc(unsigned long  int  __count  , unsigned long  int  __size  );
void free(void* );
void* realloc(void* __ptr, unsigned long  int  __size  );
void* reallocf(void* __ptr, unsigned long  int  __size  );
void* valloc(unsigned long  int  __size  );
void* aligned_alloc(unsigned long  int  __alignment  , unsigned long  int  __size  );
int posix_memalign(void** __memptr, unsigned long  int  __alignment  , unsigned long  int  __size  );
void abort() __attribute__((__noreturn__));
int abs(int ) __attribute__((__const__));
int atexit(void (*anonymous_lambda_var_nameZ29)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ30)());
double atof(const char* );
int atoi(const char* );
long atol(const char* );
long long atoll(const char* );
void* bsearch(const void* __key, const void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
struct anonymous_typeX82  div(int , int ) __attribute__((__const__));
void exit(int ) __attribute__((__noreturn__));
char* getenv(const char* );
long labs(long ) __attribute__((__const__));
struct anonymous_typeX83  ldiv(long , long ) __attribute__((__const__));
long long llabs(long  long );
struct anonymous_typeX84  lldiv(long  long , long  long );
int mblen(const char* __s, unsigned long  int  __n  );
unsigned long  int  mbstowcs(int* restrict    , const char* restrict , unsigned long  int  __n  );
int mbtowc(int* restrict    , const char* restrict , unsigned long  int  __n  );
void qsort(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
void quick_exit(int ) __attribute__((__noreturn__));
int rand();
void srand(unsigned int );
double strtod(const char* , char** ) ;
float strtof(const char* , char** ) ;
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* , char** );
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* ) ;
unsigned long  int  wcstombs(char* restrict , const int* restrict    , unsigned long  int  __n  );
int wctomb(char* , int    );
void _Exit(int ) __attribute__((__noreturn__));
long a64l(const char* );
double drand48();
char* ecvt(double , int , int* restrict , int* restrict );
double erand48(unsigned short int [3]);
char* fcvt(double , int , int* restrict , int* restrict );
char* gcvt(double , int , char* );
int getsubopt(char** , char** const , char** );
int grantpt(int );
char* initstate(unsigned int , char* , unsigned long  int  __size  );
long jrand48(unsigned short int [3]);
char* l64a(long );
void lcong48(unsigned short int [7]);
long lrand48();
char* mktemp(char* );
int mkstemp(char* );
long mrand48();
long nrand48(unsigned short int [3]);
int posix_openpt(int );
char* ptsname(int );
int ptsname_r(int fildes, char* buffer, unsigned long  int  buflen  );
int putenv(char* ) ;
long random();
int rand_r(unsigned int* );
char* realpath(const char* restrict , char* restrict ) ;
unsigned short int* seed48(unsigned short int [3]);
int setenv(const char* __name, const char* __value, int __overwrite) ;
void setkey(const char* ) ;
char* setstate(const char* );
void srand48(long );
void srandom(unsigned int );
int unlockpt(int );
int unsetenv(const char* ) ;
unsigned int  arc4random();
void arc4random_addrandom(unsigned char* , int __datlen);
void arc4random_buf(void* __buf, unsigned long  int  __nbytes  );
void arc4random_stir();
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
char* cgetcap(char* , const char* , int );
int cgetclose();
int cgetent(char** , char** , const char* );
int cgetfirst(char** , char** );
int cgetmatch(const char* , const char* );
int cgetnext(char** , char** );
int cgetnum(char* , const char* , long* );
int cgetset(const char* );
int cgetstr(char* , const char* , char** );
int cgetustr(char* , const char* , char** );
int daemon(int , int )    ;
char* devname(int    , unsigned short int    );
char* devname_r(int    , unsigned short int    , char* buf, int len);
char* getbsize(int* , long* );
int getloadavg(double [], int __nelem);
const char* getprogname();
void setprogname(const char* );
int heapsort(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
int mergesort(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
void psort(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
void psort_r(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , void* , int (*__compar)(void*,const void*,const void*));
void qsort_r(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , void* , int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* );
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp);
long long strtoq(const char* __str, char** __endptr, int __base);
unsigned long  long strtouq(const char* __str, char** __endptr, int __base);
double atof_l(const char* , struct _xlocale*    );
int atoi_l(const char* , struct _xlocale*    );
long atol_l(const char* , struct _xlocale*    );
long long atoll_l(const char* , struct _xlocale*    );
int mblen_l(const char* , unsigned long  int  __n  , struct _xlocale*    );
unsigned long  int  mbstowcs_l(int* restrict    , const char* restrict , unsigned long  int  __n  , struct _xlocale*    );
int mbtowc_l(int* restrict    , const char* restrict , unsigned long  int  __n  , struct _xlocale*    );
double strtod_l(const char* , char** , struct _xlocale*    ) ;
float strtof_l(const char* , char** , struct _xlocale*    ) ;
long strtol_l(const char* , char** , int , struct _xlocale*    );
long  double strtold_l(const char* , char** , struct _xlocale*    );
long long strtoll_l(const char* , char** , int , struct _xlocale*    );
long long strtoq_l(const char* , char** , int , struct _xlocale*    );
unsigned long  int strtoul_l(const char* , char** , int , struct _xlocale*    );
unsigned long  long strtoull_l(const char* , char** , int , struct _xlocale*    );
unsigned long  long strtouq_l(const char* , char** , int , struct _xlocale*    );
unsigned long  int  wcstombs_l(char* __restric, const int* restrict    , unsigned long  int  __n  , struct _xlocale*    );
int wctomb_l(char* , int    , struct _xlocale*    );
void closelog();
void openlog(const char* , int , int );
int setlogmask(int );
void syslog(int , const char* , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
void vsyslog(int , const char* , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0))) ;
unsigned long  int  cfgetispeed(const struct termios*    );
unsigned long  int  cfgetospeed(const struct termios*    );
int cfsetispeed(struct termios*    , unsigned long  int    );
int cfsetospeed(struct termios*    , unsigned long  int    );
int tcgetattr(int , struct termios*    );
int tcsetattr(int , int , const struct termios*    );
int tcdrain(int ) ;
int tcflow(int , int );
int tcflush(int , int );
int tcsendbreak(int , int );
void cfmakeraw(struct termios*    );
int cfsetspeed(struct termios*    , unsigned long  int    );
int  tcgetsid(int );
int _nc_set_tty_mode(struct termios*  buf  );
int _nc_get_tty_mode(struct termios*  buf  );
int _nc_read_entry(const char* const , char* const , struct termtype* const    );
int _nc_read_file_entry(const char* const , struct termtype*    );
void _nc_init_termtype(struct termtype* const    );
int _nc_read_termtype(struct termtype*    , char* , int );
char* _nc_first_name(const char* const );
int _nc_name_match(const char* const , const char* const , const char* const );
const struct termtype*  _nc_fallback(const char* );
struct term*  set_curterm(struct term*    );
int del_curterm(struct term*    );
int restartterm(char* , int , int* );
int setupterm(char* , int , int* );
char* tgetstr(char* , char** );
char* tgoto(const char* , int , int );
int tgetent(char* , const char* );
int tgetflag(char* );
int tgetnum(char* );
int tputs(const char* , int , int (*anonymous_lambda_var_nameZ31)(int));
struct entry*  _nc_copy_entry(struct entry*  oldp  );
char* _nc_save_str(const char* const );
void _nc_init_entry(struct termtype* const    );
void _nc_merge_entry(struct termtype* const    , struct termtype* const    );
void _nc_wrap_entry(struct entry* const    , _Bool );
void _nc_align_termtype(struct termtype*    , struct termtype*    );
void _nc_copy_termtype(struct termtype*    , const struct termtype*    );
void _nc_free_termtype(struct termtype*    );
void _nc_init_acs();
char* _nc_trim_sgr0(struct termtype*    );
int _nc_parse_entry(struct entry*    , int , _Bool );
int _nc_capcmp(const char* , const char* );
void _nc_set_writedir(const char* );
void _nc_write_entry(struct termtype* const    );
void _nc_read_entry_source(struct __sFILE*    , char* , int , _Bool , _Bool (*anonymous_lambda_var_nameZ32)(struct entry* ));
_Bool _nc_entry_match(char* , char* );
int _nc_resolve_uses(_Bool );
int _nc_resolve_uses2(_Bool , _Bool );
void _nc_free_entries(struct entry*    );
struct ttyent*  getttyent();
struct ttyent*  getttynam(const char* );
int setttyent();
int endttyent();
long ulimit(int , ...);
int utime(const char* , const struct utimbuf*    );
void endutxent();
void endutxent_wtmp();
struct lastlogx*  getlastlogx(unsigned int    , struct lastlogx*    );
struct lastlogx*  getlastlogxbyname(const char* , struct lastlogx*    );
void getutmp(const struct utmpx*    , struct utmp*    );
void getutmpx(const struct utmp*    , struct utmpx*    );
struct utmpx*  getutxent();
struct utmpx*  getutxent_wtmp();
struct utmpx*  getutxid(const struct utmpx*    );
struct utmpx*  getutxline(const struct utmpx*    );
struct utmpx*  pututxline(const struct utmpx*    );
void setutxent();
void setutxent_wtmp(int );
int utmpxname(const char* );
int wtmpxname(const char* );
unsigned int  nextwctype(unsigned int    , unsigned int    );
unsigned int  towctrans(unsigned int    , int    );
int  wctrans(const char* );
unsigned int  nextwctype_l(unsigned int    , unsigned int    , struct _xlocale*    );
unsigned int  towctrans_l(unsigned int    , int    , struct _xlocale*    );
int  wctrans_l(const char* , struct _xlocale*    );
int wordexp(const char* restrict , struct anonymous_typeX87* restrict    , int );
void wordfree(struct anonymous_typeX87*    );
struct fstab*  getfsent();
struct fstab*  getfsspec(const char* );
struct fstab*  getfsfile(const char* );
int setfsent();
void endfsent();
// uniq global variable
// inline function
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
inline int  __attribute__((__always_inline__))  __sputc(int _c, struct __sFILE*  _p  )
{
    if(--_p->_w>=0||(_p->_w>=_p->_lbfsize&&(char)_c!=10)) {
                return (*_p->_p++=_c);
    }
    else {
                return (__swbuf(_c,_p));
    }
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
static inline unsigned short int  _OSSwapInt16(unsigned short int  _data  )
{
        return (unsigned short int )(_data<<8|_data>>8);
}
static inline unsigned int  _OSSwapInt32(unsigned int  _data  )
{
    _data=(((_data^(_data>>16|(_data<<16)))&0xFF00FFFF)>>8)^(_data>>8|_data<<24);
        return _data;
}
static inline unsigned long  long  _OSSwapInt64(unsigned long  long  _data  )
{
    union anonymous_typeZ16 _u;
    _u._ul[0]=(unsigned int )(_data>>32);
    _u._ul[1]=(unsigned int )(_data&0xffffffff);
    _u._ul[0]=_OSSwapInt32(_u._ul[0]);
    _u._ul[1]=_OSSwapInt32(_u._ul[1]);
        return _u._ull;
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
inline int __istype_l(int  _c  , unsigned long  int _f, struct _xlocale*  _l  )
{
        return !!(((isascii(_c))?((_DefaultRuneLocale.__runetype[_c]&_f)):(__maskrune_l(_c,_f,_l))));
}
inline int  __toupper_l(int  _c  , struct _xlocale*  _l  )
{
        return ((isascii(_c))?(_DefaultRuneLocale.__mapupper[_c]):(___toupper_l(_c,_l)));
}
inline int  __tolower_l(int  _c  , struct _xlocale*  _l  )
{
        return ((isascii(_c))?(_DefaultRuneLocale.__maplower[_c]):(___tolower_l(_c,_l)));
}
inline int __wcwidth_l(int  _c  , struct _xlocale*  _l  )
{
    unsigned int _x;
    if(_c==0) {
                return (0);
    }
    _x=(unsigned int)__maskrune_l(_c,0xe0000000L|0x00040000L,_l);
    if((_x&0xe0000000L)!=0) {
                return ((_x&0xe0000000L)>>30);
    }
        return ((((_x&0x00040000L)!=0)?(1):(-1)));
}
inline int digittoint_l(int c, struct _xlocale*  l  )
{
        return (__maskrune_l(c,0x0F,l));
}
inline int isalnum_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00000100L|0x00000400L,l));
}
inline int isalpha_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00000100L,l));
}
inline int isblank_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00020000L,l));
}
inline int iscntrl_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00000200L,l));
}
inline int isdigit_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00000400L,l));
}
inline int isgraph_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00000800L,l));
}
inline int ishexnumber_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00010000L,l));
}
inline int isideogram_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00080000L,l));
}
inline int islower_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00001000L,l));
}
inline int isnumber_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00000400L,l));
}
inline int isphonogram_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00200000L,l));
}
inline int isprint_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00040000L,l));
}
inline int ispunct_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00002000L,l));
}
inline int isrune_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0xFFFFFFF0L,l));
}
inline int isspace_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00004000L,l));
}
inline int isspecial_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00100000L,l));
}
inline int isupper_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00008000L,l));
}
inline int isxdigit_l(int c, struct _xlocale*  l  )
{
        return (__istype_l(c,0x00010000L,l));
}
inline int tolower_l(int c, struct _xlocale*  l  )
{
        return (__tolower_l(c,l));
}
inline int toupper_l(int c, struct _xlocale*  l  )
{
        return (__toupper_l(c,l));
}
inline int iswalnum_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00000100L|0x00000400L,_l));
}
inline int iswalpha_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00000100L,_l));
}
inline int iswcntrl_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00000200L,_l));
}
inline int iswctype_l(unsigned int  _wc  , unsigned int  _charclass  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,_charclass,_l));
}
inline int iswdigit_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00000400L,_l));
}
inline int iswgraph_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00000800L,_l));
}
inline int iswlower_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00001000L,_l));
}
inline int iswprint_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00040000L,_l));
}
inline int iswpunct_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00002000L,_l));
}
inline int iswspace_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00004000L,_l));
}
inline int iswupper_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00008000L,_l));
}
inline int iswxdigit_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00010000L,_l));
}
inline unsigned int  towlower_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__tolower_l(_wc,_l));
}
inline unsigned int  towupper_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__toupper_l(_wc,_l));
}
inline int  __attribute__((__always_inline__))  __inline_isfinitef(float __x)
{
        return __x==__x&&__builtin_fabsf(__x)!=__builtin_inff();
}
inline int  __attribute__((__always_inline__))  __inline_isfinited(double __x)
{
        return __x==__x&&__builtin_fabs(__x)!=__builtin_inf();
}
inline int  __attribute__((__always_inline__))  __inline_isfinitel(long  double __x)
{
        return __x==__x&&__builtin_fabsl(__x)!=__builtin_infl();
}
inline int  __attribute__((__always_inline__))  __inline_isinff(float __x)
{
        return __builtin_fabsf(__x)==__builtin_inff();
}
inline int  __attribute__((__always_inline__))  __inline_isinfd(double __x)
{
        return __builtin_fabs(__x)==__builtin_inf();
}
inline int  __attribute__((__always_inline__))  __inline_isinfl(long  double __x)
{
        return __builtin_fabsl(__x)==__builtin_infl();
}
inline int  __attribute__((__always_inline__))  __inline_isnanf(float __x)
{
        return __x!=__x;
}
inline int  __attribute__((__always_inline__))  __inline_isnand(double __x)
{
        return __x!=__x;
}
inline int  __attribute__((__always_inline__))  __inline_isnanl(long  double __x)
{
        return __x!=__x;
}
inline int  __attribute__((__always_inline__))  __inline_signbitf(float __x)
{
    union anonymous_typeZ22 __u;
    __u.__f=__x;
        return (int)(__u.__u>>31);
}
inline int  __attribute__((__always_inline__))  __inline_signbitd(double __x)
{
    union anonymous_typeZ26 __u;
    __u.__f=__x;
        return (int)(__u.__u>>63);
}
inline int  __attribute__((__always_inline__))  __inline_signbitl(long  double __x)
{
    union anonymous_typeZ30 __u;
    __u.__f=__x;
        return (int)(__u.__u>>63);
}
inline int  __attribute__((__always_inline__))  __inline_isnormalf(float __x)
{
        return __inline_isfinitef(__x)&&__builtin_fabsf(__x)>=1.17549435e-38F;
}
inline int  __attribute__((__always_inline__))  __inline_isnormald(double __x)
{
        return __inline_isfinited(__x)&&__builtin_fabs(__x)>=2.2250738585072014e-308;
}
inline int  __attribute__((__always_inline__))  __inline_isnormall(long  double __x)
{
        return __inline_isfinitel(__x)&&__builtin_fabsl(__x)>=3.36210314311209350626e-4932L;
}
inline void  __attribute__((__always_inline__))  __sincosf(float __x, float* __sinp, float* __cosp)
{
    const struct __float2  __stret  =__sincosf_stret(__x);
    *__sinp=__stret.__sinval;
    *__cosp=__stret.__cosval;
}
inline void  __attribute__((__always_inline__))  __sincos(double __x, double* __sinp, double* __cosp)
{
    const struct __double2  __stret  =__sincos_stret(__x);
    *__sinp=__stret.__sinval;
    *__cosp=__stret.__cosval;
}
inline void  __attribute__((__always_inline__))  __sincospif(float __x, float* __sinp, float* __cosp)
{
    const struct __float2  __stret  =__sincospif_stret(__x);
    *__sinp=__stret.__sinval;
    *__cosp=__stret.__cosval;
}
inline void  __attribute__((__always_inline__))  __sincospi(double __x, double* __sinp, double* __cosp)
{
    const struct __double2  __stret  =__sincospi_stret(__x);
    *__sinp=__stret.__sinval;
    *__cosp=__stret.__cosval;
}
inline int  __attribute__((__always_inline__))  __sigbits(int __signo)
{
        return ((__signo>32)?(0):((1<<(__signo-1))));
}
inline int iswblank(unsigned int  _wc  )
{
        return (__istype(_wc,0x00020000L));
}
inline int iswascii(unsigned int  _wc  )
{
        return ((_wc&~0x7F)==0);
}
inline int iswhexnumber(unsigned int  _wc  )
{
        return (__istype(_wc,0x00010000L));
}
inline int iswideogram(unsigned int  _wc  )
{
        return (__istype(_wc,0x00080000L));
}
inline int iswnumber(unsigned int  _wc  )
{
        return (__istype(_wc,0x00000400L));
}
inline int iswphonogram(unsigned int  _wc  )
{
        return (__istype(_wc,0x00200000L));
}
inline int iswrune(unsigned int  _wc  )
{
        return (__istype(_wc,0xFFFFFFF0L));
}
inline int iswspecial(unsigned int  _wc  )
{
        return (__istype(_wc,0x00100000L));
}
inline int iswblank_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00020000L,_l));
}
inline int iswhexnumber_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00010000L,_l));
}
inline int iswideogram_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00080000L,_l));
}
inline int iswnumber_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00000400L,_l));
}
inline int iswphonogram_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00200000L,_l));
}
inline int iswrune_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0xFFFFFFF0L,_l));
}
inline int iswspecial_l(unsigned int  _wc  , struct _xlocale*  _l  )
{
        return (__istype_l(_wc,0x00100000L,_l));
}

// body function

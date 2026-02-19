/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef long ptrdiff_t;

typedef unsigned long  long    ;

typedef struct anonymous_typeX1 max_align_t;

typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long  int __u_long;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short int __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  int __int64_t;

typedef unsigned long  int __uint64_t;

typedef char  __int_least8_t  ;

typedef unsigned char  __uint_least8_t  ;

typedef short int  __int_least16_t  ;

typedef unsigned short int  __uint_least16_t  ;

typedef int  __int_least32_t  ;

typedef unsigned int  __uint_least32_t  ;

typedef long  int  __int_least64_t  ;

typedef unsigned long  int  __uint_least64_t  ;

typedef long  int __quad_t;

typedef unsigned long  int __u_quad_t;

typedef long  int __intmax_t;

typedef unsigned long  int __uintmax_t;

typedef unsigned long  int __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long  int __nlink_t;

typedef long  int __off_t;

typedef long  int __off64_t;

typedef int __pid_t;

typedef struct __fsid_t  __fsid_t  ;

typedef long  int __clock_t;

typedef unsigned long  int __rlim_t;

typedef unsigned long  int __rlim64_t;

typedef unsigned int __id_t;

typedef long  int __time_t;

typedef unsigned int __useconds_t;

typedef long  int __suseconds_t;

typedef long  int __suseconds64_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void* __timer_t;

typedef long  int __blksize_t;

typedef long  int __blkcnt_t;

typedef long  int __blkcnt64_t;

typedef unsigned long  int __fsblkcnt_t;

typedef unsigned long  int __fsblkcnt64_t;

typedef unsigned long  int __fsfilcnt_t;

typedef unsigned long  int __fsfilcnt64_t;

typedef long  int __fsword_t;

typedef long  int __ssize_t;

typedef long  int __syscall_slong_t;

typedef unsigned long  int __syscall_ulong_t;

typedef long  int  __loff_t  ;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef char  int8_t  ;

typedef short int  int16_t  ;

typedef int  int32_t  ;

typedef long  int  int64_t  ;

typedef unsigned char  uint8_t  ;

typedef unsigned short int  uint16_t  ;

typedef unsigned int  uint32_t  ;

typedef unsigned long  int  uint64_t  ;

typedef char  int_least8_t  ;

typedef short int  int_least16_t  ;

typedef int  int_least32_t  ;

typedef long  int  int_least64_t  ;

typedef unsigned char  uint_least8_t  ;

typedef unsigned short int  uint_least16_t  ;

typedef unsigned int  uint_least32_t  ;

typedef unsigned long  int  uint_least64_t  ;

typedef char int_fast8_t;

typedef long  int int_fast16_t;

typedef long  int int_fast32_t;

typedef long  int int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned long  int uint_fast16_t;

typedef unsigned long  int uint_fast32_t;

typedef unsigned long  int uint_fast64_t;

typedef long  int intptr_t;

typedef unsigned long  int uintptr_t;

typedef long  int  intmax_t  ;

typedef unsigned long  int  uintmax_t  ;

typedef unsigned char  u_char  ;

typedef unsigned short int  u_short  ;

typedef unsigned int  u_int  ;

typedef unsigned long  int  u_long  ;

typedef long  int  quad_t  ;

typedef unsigned long  int  u_quad_t  ;

typedef struct __fsid_t  fsid_t  ;

typedef long  int  loff_t  ;

typedef unsigned long  int  ino_t  ;

typedef unsigned long  int  ino64_t  ;

typedef unsigned long  int  dev_t  ;

typedef unsigned int  gid_t  ;

typedef unsigned int  mode_t  ;

typedef unsigned long  int  nlink_t  ;

typedef unsigned int  uid_t  ;

typedef long  int  off_t  ;

typedef long  int  off64_t  ;

typedef int  pid_t  ;

typedef unsigned int  id_t  ;

typedef long  int  ssize_t  ;

typedef int  daddr_t  ;

typedef char*  caddr_t  ;

typedef int  key_t  ;

typedef long  int  clock_t  ;

typedef int  clockid_t  ;

typedef long  int  time_t  ;

typedef void*  timer_t  ;

typedef unsigned int  useconds_t  ;

typedef long  int  suseconds_t  ;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef unsigned char  u_int8_t  ;

typedef unsigned short int  u_int16_t  ;

typedef unsigned int  u_int32_t  ;

typedef unsigned long  int  u_int64_t  ;

typedef int __attribute__ ((__mode__ (__word__))) register_t __attribute__ ((__mode__ (__word__)));

typedef struct anonymous_typeX2 __sigset_t;

typedef struct anonymous_typeX2  sigset_t  ;

typedef long  int __fd_mask;

typedef struct anonymous_typeX3 fd_set;

typedef long  int  fd_mask  ;

typedef long  int  blksize_t  ;

typedef long  int  blkcnt_t  ;

typedef unsigned long  int  fsblkcnt_t  ;

typedef unsigned long  int  fsfilcnt_t  ;

typedef long  int  blkcnt64_t  ;

typedef unsigned long  int  fsblkcnt64_t  ;

typedef unsigned long  int  fsfilcnt64_t  ;

typedef union anonymous_typeZ4 __atomic_wide_counter;

typedef struct __pthread_internal_list  __pthread_list_t  ;

typedef struct __pthread_internal_slist  __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX6 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ7 pthread_mutexattr_t;

typedef union anonymous_typeZ8 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t  pthread_attr_t  ;

typedef union anonymous_typeZ9 pthread_mutex_t;

typedef union anonymous_typeZ10 pthread_cond_t;

typedef union anonymous_typeZ11 pthread_rwlock_t;

typedef union anonymous_typeZ12 pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union anonymous_typeZ13 pthread_barrier_t;

typedef union anonymous_typeZ14 pthread_barrierattr_t;

typedef unsigned int  socklen_t  ;

typedef unsigned short int sa_family_t;

typedef struct anonymous_typeX15 __kernel_fd_set;

typedef void (*__kernel_sighandler_t)(int);

typedef int __kernel_key_t;

typedef int __kernel_mqd_t;

typedef unsigned short int __kernel_old_uid_t;

typedef unsigned short int __kernel_old_gid_t;

typedef unsigned long  int __kernel_old_dev_t;

typedef long __kernel_long_t;

typedef unsigned long  int __kernel_ulong_t;

typedef unsigned long  int  __kernel_ino_t  ;

typedef unsigned int __kernel_mode_t;

typedef int __kernel_pid_t;

typedef int __kernel_ipc_pid_t;

typedef unsigned int __kernel_uid_t;

typedef unsigned int __kernel_gid_t;

typedef long  __kernel_suseconds_t  ;

typedef int __kernel_daddr_t;

typedef unsigned int __kernel_uid32_t;

typedef unsigned int __kernel_gid32_t;

typedef unsigned long  int  __kernel_size_t  ;

typedef long  __kernel_ssize_t  ;

typedef long  __kernel_ptrdiff_t  ;

typedef struct anonymous_typeX16 __kernel_fsid_t;

typedef long  __kernel_off_t  ;

typedef long long __kernel_loff_t;

typedef long  __kernel_old_time_t  ;

typedef long  __kernel_time_t  ;

typedef long long __kernel_time64_t;

typedef long  __kernel_clock_t  ;

typedef int __kernel_timer_t;

typedef int __kernel_clockid_t;

typedef char* __kernel_caddr_t;

typedef unsigned short int __kernel_uid16_t;

typedef unsigned short int __kernel_gid16_t;

typedef struct sockaddr* __restrict  __SOCKADDR_ARG  ;

typedef const struct sockaddr* __restrict  __CONST_SOCKADDR_ARG  ;

typedef unsigned int  in_addr_t  ;

typedef unsigned short int  in_port_t  ;

typedef int  sig_atomic_t  ;

typedef union sigval  __sigval_t  ;

typedef struct anonymous_typeX19 siginfo_t;

typedef union sigval  sigval_t  ;

typedef struct sigevent  sigevent_t  ;

typedef void (*__sighandler_t)(int);

typedef void (*sighandler_t)(int)  ;

typedef void (*sig_t)(int)  ;

typedef struct anonymous_typeX52 stack_t;

typedef long long int greg_t;

typedef struct _libc_fpstate*  fpregset_t  ;

typedef struct anonymous_typeX53 mcontext_t;

typedef struct ucontext_t  ucontext_t  ;

typedef enum __ns_sect ns_sect;

typedef struct __ns_msg  ns_msg  ;

typedef struct __ns_rr  ns_rr  ;

typedef enum __ns_flag ns_flag;

typedef enum __ns_opcode ns_opcode;

typedef enum __ns_rcode ns_rcode;

typedef enum __ns_update_operation ns_update_operation;

typedef struct ns_tsig_key  ns_tsig_key  ;

typedef struct ns_tcp_tsig_state  ns_tcp_tsig_state  ;

typedef enum __ns_type ns_type;

typedef enum __ns_class ns_class;

typedef enum __ns_cert_types ns_cert_types;

typedef struct anonymous_typeX54 HEADER;

typedef unsigned int  chtype  ;

typedef unsigned int  mmask_t  ;

typedef __builtin_va_list __gnuc_va_list;

typedef struct anonymous_typeX63 __mbstate_t;

typedef struct _G_fpos_t  __fpos_t  ;

typedef struct _G_fpos64_t  __fpos64_t  ;

typedef struct _IO_FILE  __FILE  ;

typedef struct _IO_FILE  FILE  ;

typedef void _IO_lock_t;

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long );

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long );

typedef int (*cookie_seek_function_t)(void*,long  int* ,int);

typedef int (*cookie_close_function_t)(void*);

typedef struct _IO_cookie_io_functions_t  cookie_io_functions_t  ;

typedef struct _G_fpos_t  fpos_t  ;

typedef struct _G_fpos64_t  fpos64_t  ;

typedef __builtin_va_list va_list;

typedef unsigned char NCURSES_BOOL;

typedef struct screen SCREEN;

typedef struct _win_st WINDOW;

typedef unsigned int  attr_t  ;

typedef unsigned int wint_t;

typedef struct anonymous_typeX63  mbstate_t  ;

typedef struct __locale_struct*  __locale_t  ;

typedef struct __locale_struct*  locale_t  ;

typedef struct anonymous_typeX66 cchar_t;

typedef int (*NCURSES_OUTC)(int);

typedef int (*NCURSES_WINDOW_CB)(struct _win_st* ,void*);

typedef int (*NCURSES_SCREEN_CB)(struct screen* ,void*);

typedef int (*NCURSES_OUTC_sp)(struct screen* ,int);

typedef struct anonymous_typeX67 MEVENT;

typedef void* FIELD_CELL;

typedef int Form_Options;

typedef int Field_Options;

typedef struct pagenode _PAGE;

typedef struct fieldnode  FIELD  ;

typedef struct formnode  FORM  ;

typedef struct typenode FIELDTYPE;

typedef void (*Form_Hook)(struct formnode* );

typedef int Menu_Options;

typedef int Item_Options;

typedef struct tagITEM ITEM;

typedef void (*Menu_Hook)(struct tagMENU* );

typedef struct tagMENU  MENU  ;

typedef struct panel PANEL;

typedef unsigned char cc_t;

typedef unsigned int speed_t;

typedef unsigned int tcflag_t;

typedef unsigned int  baud_t  ;

typedef struct termtype  TERMTYPE  ;

typedef struct term  TERMINAL  ;

typedef char __s8;

typedef unsigned char __u8;

typedef short __s16;

typedef unsigned short int __u16;

typedef int __s32;

typedef unsigned int __u32;

typedef long long __s64;

typedef unsigned long  long __u64;

typedef unsigned short int  __le16  ;

typedef unsigned short int  __be16  ;

typedef unsigned int  __le32  ;

typedef unsigned int  __be32  ;

typedef unsigned long  long  __le64  ;

typedef unsigned long  long  __be64  ;

typedef unsigned short int  __sum16  ;

typedef unsigned int  __wsum  ;

typedef unsigned int __poll_t;

typedef unsigned short int  n_short  ;

typedef unsigned int  n_long  ;

typedef unsigned int  n_time  ;

typedef unsigned short int __kernel_sa_family_t;

typedef struct anonymous_typeX88 ax25_address;

typedef struct ipx_route_definition  ipx_route_definition  ;

typedef struct ipx_interface_definition  ipx_interface_definition  ;

typedef struct ipx_config_data  ipx_config_data  ;

typedef struct anonymous_typeX89 rose_address;

typedef struct anonymous_typeX92 CTL_MSG;

typedef struct anonymous_typeX93 CTL_RESPONSE;

typedef enum __itimer_which __itimer_which_t;

typedef int (*rl_command_func_t)(int,int);

typedef char* (*rl_compentry_func_t)(const char*,int);

typedef char** (*rl_completion_func_t)(const char*,int,int);

typedef char* (*rl_quote_func_t)(char*,int,char*);

typedef char* (*rl_dequote_func_t)(char*,int);

typedef int (*rl_compignore_func_t)(char**);

typedef void (*rl_compdisp_func_t)(char**,int,int);

typedef void (*rl_macro_print_func_t)(const char*,const char*,int,const char*);

typedef int (*rl_hook_func_t)();

typedef int (*rl_getc_func_t)(struct _IO_FILE* );

typedef int (*rl_linebuf_func_t)(char*,int);

typedef int (*rl_intfunc_t)(int);

typedef int (*rl_icpfunc_t)(char*);

typedef int (*rl_icppfunc_t)(char**);

typedef void (*rl_voidfunc_t)();

typedef void (*rl_vintfunc_t)(int);

typedef void (*rl_vcpfunc_t)(char*);

typedef void (*rl_vcppfunc_t)(char**);

typedef char* (*rl_cpvfunc_t)();

typedef char* (*rl_cpifunc_t)(int);

typedef char* (*rl_cpcpfunc_t)(char*);

typedef char* (*rl_cpcppfunc_t)(char**);

typedef struct _keymap_entry  KEYMAP_ENTRY  ;

typedef struct _keymap_entry*  Keymap  ;

typedef char* (*tilde_hook_func_t)(char*);

typedef struct undo_list  UNDO_LIST  ;

typedef struct _funmap  FUNMAP  ;

typedef void* histdata_t;

typedef struct _hist_entry  HIST_ENTRY  ;

typedef struct _hist_state  HISTORY_STATE  ;

typedef int wchar_t;

typedef struct anonymous_typeX96 imaxdiv_t;

typedef long  int  ossl_intmax_t  ;

typedef unsigned long  int  ossl_uintmax_t  ;

typedef struct anonymous_typeX97 div_t;

typedef struct anonymous_typeX98 ldiv_t;

typedef struct anonymous_typeX99 lldiv_t;

typedef int (*__compar_fn_t)(const void*,const void*);

typedef int (*comparison_fn_t)(const void*,const void*)  ;

typedef int (*__compar_d_fn_t)(const void*,const void*,void*);

typedef struct stack_st OPENSSL_STACK;

typedef int (*OPENSSL_sk_compfunc)(const void*,const void*);

typedef void (*OPENSSL_sk_freefunc)(void*);

typedef void* (*OPENSSL_sk_copyfunc)(const void*);

typedef char* OPENSSL_STRING;

typedef const char* OPENSSL_CSTRING;

typedef int (*sk_OPENSSL_STRING_compfunc)(const char** const,const char** const);

typedef void (*sk_OPENSSL_STRING_freefunc)(char*);

typedef char* (*sk_OPENSSL_STRING_copyfunc)(const char*);

typedef int (*sk_OPENSSL_CSTRING_compfunc)(const char** const,const char** const);

typedef void (*sk_OPENSSL_CSTRING_freefunc)(char*);

typedef char* (*sk_OPENSSL_CSTRING_copyfunc)(const char*);

typedef void* OPENSSL_BLOCK;

typedef int (*sk_OPENSSL_BLOCK_compfunc)(const void** const,const void** const);

typedef void (*sk_OPENSSL_BLOCK_freefunc)(void*);

typedef void* (*sk_OPENSSL_BLOCK_copyfunc)(const void*);

typedef struct ossl_provider_st OSSL_PROVIDER;

typedef struct asn1_string_st ASN1_INTEGER;

typedef struct asn1_string_st ASN1_ENUMERATED;

typedef struct asn1_string_st ASN1_BIT_STRING;

typedef struct asn1_string_st ASN1_OCTET_STRING;

typedef struct asn1_string_st ASN1_PRINTABLESTRING;

typedef struct asn1_string_st ASN1_T61STRING;

typedef struct asn1_string_st ASN1_IA5STRING;

typedef struct asn1_string_st ASN1_GENERALSTRING;

typedef struct asn1_string_st ASN1_UNIVERSALSTRING;

typedef struct asn1_string_st ASN1_BMPSTRING;

typedef struct asn1_string_st ASN1_UTCTIME;

typedef struct asn1_string_st ASN1_TIME;

typedef struct asn1_string_st ASN1_GENERALIZEDTIME;

typedef struct asn1_string_st ASN1_VISIBLESTRING;

typedef struct asn1_string_st ASN1_UTF8STRING;

typedef struct asn1_string_st ASN1_STRING;

typedef int ASN1_BOOLEAN;

typedef int ASN1_NULL;

typedef struct asn1_type_st ASN1_TYPE;

typedef struct asn1_object_st ASN1_OBJECT;

typedef struct asn1_string_table_st ASN1_STRING_TABLE;

typedef struct ASN1_ITEM_st ASN1_ITEM;

typedef struct asn1_pctx_st ASN1_PCTX;

typedef struct asn1_sctx_st ASN1_SCTX;

typedef struct bio_st BIO;

typedef struct bignum_st BIGNUM;

typedef struct bignum_ctx BN_CTX;

typedef struct bn_blinding_st BN_BLINDING;

typedef struct bn_mont_ctx_st BN_MONT_CTX;

typedef struct bn_recp_ctx_st BN_RECP_CTX;

typedef struct bn_gencb_st BN_GENCB;

typedef struct buf_mem_st BUF_MEM;

typedef struct err_state_st ERR_STATE;

typedef struct evp_cipher_st EVP_CIPHER;

typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;

typedef struct evp_md_st EVP_MD;

typedef struct evp_md_ctx_st EVP_MD_CTX;

typedef struct evp_mac_st EVP_MAC;

typedef struct evp_mac_ctx_st EVP_MAC_CTX;

typedef struct evp_pkey_st EVP_PKEY;

typedef struct evp_skey_st EVP_SKEY;

typedef struct evp_pkey_asn1_method_st EVP_PKEY_ASN1_METHOD;

typedef struct evp_pkey_method_st EVP_PKEY_METHOD;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct evp_keymgmt_st EVP_KEYMGMT;

typedef struct evp_kdf_st EVP_KDF;

typedef struct evp_kdf_ctx_st EVP_KDF_CTX;

typedef struct evp_rand_st EVP_RAND;

typedef struct evp_rand_ctx_st EVP_RAND_CTX;

typedef struct evp_keyexch_st EVP_KEYEXCH;

typedef struct evp_signature_st EVP_SIGNATURE;

typedef struct evp_skeymgmt_st EVP_SKEYMGMT;

typedef struct evp_asym_cipher_st EVP_ASYM_CIPHER;

typedef struct evp_kem_st EVP_KEM;

typedef struct evp_Encode_Ctx_st EVP_ENCODE_CTX;

typedef struct hmac_ctx_st HMAC_CTX;

typedef struct dh_st DH;

typedef struct dh_method DH_METHOD;

typedef struct dsa_st DSA;

typedef struct dsa_method DSA_METHOD;

typedef struct rsa_st RSA;

typedef struct rsa_meth_st RSA_METHOD;

typedef struct rsa_pss_params_st RSA_PSS_PARAMS;

typedef struct ec_key_st EC_KEY;

typedef struct ec_key_method_st EC_KEY_METHOD;

typedef struct rand_meth_st RAND_METHOD;

typedef struct rand_drbg_st RAND_DRBG;

typedef struct ssl_dane_st SSL_DANE;

typedef struct x509_st X509;

typedef struct X509_algor_st X509_ALGOR;

typedef struct X509_crl_st X509_CRL;

typedef struct x509_crl_method_st X509_CRL_METHOD;

typedef struct x509_revoked_st X509_REVOKED;

typedef struct X509_name_st X509_NAME;

typedef struct X509_pubkey_st X509_PUBKEY;

typedef struct x509_store_st X509_STORE;

typedef struct x509_store_ctx_st X509_STORE_CTX;

typedef struct x509_object_st X509_OBJECT;

typedef struct x509_lookup_st X509_LOOKUP;

typedef struct x509_lookup_method_st X509_LOOKUP_METHOD;

typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;

typedef struct x509_sig_info_st X509_SIG_INFO;

typedef struct pkcs8_priv_key_info_st PKCS8_PRIV_KEY_INFO;

typedef struct v3_ext_ctx X509V3_CTX;

typedef struct conf_st CONF;

typedef struct ossl_init_settings_st OPENSSL_INIT_SETTINGS;

typedef struct ui_st UI;

typedef struct ui_method_st UI_METHOD;

typedef struct engine_st ENGINE;

typedef struct ssl_st SSL;

typedef struct ssl_ctx_st SSL_CTX;

typedef struct comp_ctx_st COMP_CTX;

typedef struct comp_method_st COMP_METHOD;

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE;

typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL;

typedef struct X509_POLICY_TREE_st X509_POLICY_TREE;

typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE;

typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID;

typedef struct DIST_POINT_st DIST_POINT;

typedef struct ISSUING_DIST_POINT_st ISSUING_DIST_POINT;

typedef struct NAME_CONSTRAINTS_st NAME_CONSTRAINTS;

typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef struct ossl_http_req_ctx_st OSSL_HTTP_REQ_CTX;

typedef struct ocsp_response_st OCSP_RESPONSE;

typedef struct ocsp_responder_id_st OCSP_RESPID;

typedef struct sct_st SCT;

typedef struct sct_ctx_st SCT_CTX;

typedef struct ctlog_st CTLOG;

typedef struct ctlog_store_st CTLOG_STORE;

typedef struct ct_policy_eval_ctx_st CT_POLICY_EVAL_CTX;

typedef struct ossl_store_info_st OSSL_STORE_INFO;

typedef struct ossl_store_search_st OSSL_STORE_SEARCH;

typedef struct ossl_lib_ctx_st OSSL_LIB_CTX;

typedef struct ossl_dispatch_st OSSL_DISPATCH;

typedef struct ossl_item_st OSSL_ITEM;

typedef struct ossl_algorithm_st OSSL_ALGORITHM;

typedef struct ossl_param_st OSSL_PARAM;

typedef struct ossl_param_bld_st OSSL_PARAM_BLD;

typedef int (*pem_password_cb)(char*,int,int,void*);

typedef struct ossl_encoder_st OSSL_ENCODER;

typedef struct ossl_encoder_ctx_st OSSL_ENCODER_CTX;

typedef struct ossl_decoder_st OSSL_DECODER;

typedef struct ossl_decoder_ctx_st OSSL_DECODER_CTX;

typedef struct ossl_self_test_st OSSL_SELF_TEST;

typedef struct ossl_core_handle_st OSSL_CORE_HANDLE;

typedef struct openssl_core_ctx_st OPENSSL_CORE_CTX;

typedef struct ossl_core_bio_st OSSL_CORE_BIO;

typedef void (*OSSL_thread_stop_handler_fn)(void*);

typedef int (*OSSL_provider_init_fn)(const struct ossl_core_handle_st* ,const struct ossl_dispatch_st* ,const struct ossl_dispatch_st** ,void**);

typedef int (*OSSL_CALLBACK)(const struct ossl_param_st ,void*);

typedef int (*OSSL_INOUT_CALLBACK)(const struct ossl_param_st ,struct ossl_param_st ,void*);

typedef int (*OSSL_PASSPHRASE_CALLBACK)(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*);

typedef struct anonymous_typeX100 CRYPTO_dynlock;

typedef void CRYPTO_RWLOCK;

typedef int (*sk_void_compfunc)(const void** const,const void** const);

typedef void (*sk_void_freefunc)(void*);

typedef void* (*sk_void_copyfunc)(const void*);

typedef void (*CRYPTO_EX_new)(void*,void*,struct crypto_ex_data_st* ,int,long,void*);

typedef void (*CRYPTO_EX_free)(void*,void*,struct crypto_ex_data_st* ,int,long,void*);

typedef int (*CRYPTO_EX_dup)(struct crypto_ex_data_st* ,const struct crypto_ex_data_st* ,void**,int,long,void*);

typedef struct crypto_threadid_st  CRYPTO_THREADID  ;

typedef void* (*CRYPTO_malloc_fn)(unsigned long ,const char*,int);

typedef void* (*CRYPTO_realloc_fn)(void*,unsigned long ,const char*,int);

typedef void (*CRYPTO_free_fn)(void*,const char*,int);

typedef unsigned long  int __cpu_mask;

typedef struct anonymous_typeX101 cpu_set_t;

typedef struct anonymous_typeX102 __attribute__ ((__aligned__)) __pthread_unwind_buf_t __attribute__ ((__aligned__));

typedef int  CRYPTO_ONCE  ;

typedef unsigned int  CRYPTO_THREAD_LOCAL  ;

typedef unsigned long  int  CRYPTO_THREAD_ID  ;

typedef struct ssl_comp_st SSL_COMP;

typedef int (*sk_SSL_COMP_compfunc)(const struct ssl_comp_st** const ,const struct ssl_comp_st** const );

typedef void (*sk_SSL_COMP_freefunc)(struct ssl_comp_st* );

typedef struct ssl_comp_st* (*sk_SSL_COMP_copyfunc)(const struct ssl_comp_st* );

typedef union bio_addr_st BIO_ADDR;

typedef struct bio_addrinfo_st BIO_ADDRINFO;

typedef long (*BIO_callback_fn)(struct bio_st* ,int,const char*,int,long,long);

typedef long (*BIO_callback_fn_ex)(struct bio_st* ,int,const char*,unsigned long ,int,long,int,unsigned long* );

typedef struct bio_method_st BIO_METHOD;

typedef int (*BIO_info_cb)(struct bio_st* ,int,int);

typedef int (*bio_info_cb)(struct bio_st* ,int,int)  ;

typedef int (*sk_BIO_compfunc)(const struct bio_st** const ,const struct bio_st** const );

typedef void (*sk_BIO_freefunc)(struct bio_st* );

typedef struct bio_st* (*sk_BIO_copyfunc)(const struct bio_st* );

typedef int (*asn1_ps_func)(struct bio_st* ,unsigned char**,int*,void*);

typedef void (*BIO_dgram_sctp_notification_handler_fn)(struct bio_st* ,void*,void*);

typedef struct bio_msg_st  BIO_MSG  ;

typedef struct bio_mmsg_cb_args_st  BIO_MMSG_CB_ARGS  ;

typedef struct bio_poll_descriptor_st  BIO_POLL_DESCRIPTOR  ;

typedef int (*OSSL_INDICATOR_CALLBACK)(const char*,const char*,const struct ossl_param_st );

typedef void (*OSSL_FUNC)();

typedef const struct ossl_param_st* (*OSSL_FUNC_core_gettable_params_fn)(const struct ossl_core_handle_st* );

typedef int (*OSSL_FUNC_core_get_params_fn)(const struct ossl_core_handle_st* ,struct ossl_param_st );

typedef int (*OSSL_FUNC_core_thread_start_fn)(const struct ossl_core_handle_st* ,void (*)(void*) ,void*);

typedef struct openssl_core_ctx_st* (*OSSL_FUNC_core_get_libctx_fn)(const struct ossl_core_handle_st* );

typedef void (*OSSL_FUNC_core_new_error_fn)(const struct ossl_core_handle_st* );

typedef void (*OSSL_FUNC_core_set_error_debug_fn)(const struct ossl_core_handle_st* ,const char*,int,const char*);

typedef void (*OSSL_FUNC_core_vset_error_fn)(const struct ossl_core_handle_st* ,unsigned int ,const char*,__builtin_va_list );

typedef int (*OSSL_FUNC_core_set_error_mark_fn)(const struct ossl_core_handle_st* );

typedef int (*OSSL_FUNC_core_clear_last_error_mark_fn)(const struct ossl_core_handle_st* );

typedef int (*OSSL_FUNC_core_pop_error_to_mark_fn)(const struct ossl_core_handle_st* );

typedef int (*OSSL_FUNC_core_obj_add_sigid_fn)(const struct ossl_core_handle_st* ,const char*,const char*,const char*);

typedef int (*OSSL_FUNC_core_obj_create_fn)(const struct ossl_core_handle_st* ,const char*,const char*,const char*);

typedef void* (*OSSL_FUNC_CRYPTO_malloc_fn)(unsigned long ,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_zalloc_fn)(unsigned long ,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_free_fn)(void*,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_clear_free_fn)(void*,unsigned long ,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_realloc_fn)(void*,unsigned long ,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_clear_realloc_fn)(void*,unsigned long ,unsigned long ,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_secure_malloc_fn)(unsigned long ,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_secure_zalloc_fn)(unsigned long ,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_secure_free_fn)(void*,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_secure_clear_free_fn)(void*,unsigned long ,const char*,int);

typedef int (*OSSL_FUNC_CRYPTO_secure_allocated_fn)(const void*);

typedef void (*OSSL_FUNC_OPENSSL_cleanse_fn)(void*,unsigned long );

typedef struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_file_fn)(const char*,const char*);

typedef struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_membuf_fn)(const void*,int);

typedef int (*OSSL_FUNC_BIO_read_ex_fn)(struct ossl_core_bio_st* ,void*,unsigned long ,unsigned long* );

typedef int (*OSSL_FUNC_BIO_write_ex_fn)(struct ossl_core_bio_st* ,const void*,unsigned long ,unsigned long* );

typedef int (*OSSL_FUNC_BIO_gets_fn)(struct ossl_core_bio_st* ,char*,int);

typedef int (*OSSL_FUNC_BIO_puts_fn)(struct ossl_core_bio_st* ,const char*);

typedef int (*OSSL_FUNC_BIO_up_ref_fn)(struct ossl_core_bio_st* );

typedef int (*OSSL_FUNC_BIO_free_fn)(struct ossl_core_bio_st* );

typedef int (*OSSL_FUNC_BIO_vprintf_fn)(struct ossl_core_bio_st* ,const char*,__builtin_va_list );

typedef int (*OSSL_FUNC_BIO_vsnprintf_fn)(char*,unsigned long ,const char*,__builtin_va_list );

typedef int (*OSSL_FUNC_BIO_ctrl_fn)(struct ossl_core_bio_st* ,int,long,void*);

typedef void (*OSSL_FUNC_indicator_cb_fn)(struct openssl_core_ctx_st* ,int (*(*(*)))(const char*,const char*,const struct ossl_param_st ) );

typedef void (*OSSL_FUNC_self_test_cb_fn)(struct openssl_core_ctx_st* ,int (*(*(*)))(const struct ossl_param_st ,void*) ,void**);

typedef unsigned long (*OSSL_FUNC_get_entropy_fn)(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long ,unsigned long );

typedef unsigned long (*OSSL_FUNC_get_user_entropy_fn)(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long ,unsigned long );

typedef void (*OSSL_FUNC_cleanup_entropy_fn)(const struct ossl_core_handle_st* ,unsigned char*,unsigned long );

typedef void (*OSSL_FUNC_cleanup_user_entropy_fn)(const struct ossl_core_handle_st* ,unsigned char*,unsigned long );

typedef unsigned long (*OSSL_FUNC_get_nonce_fn)(const struct ossl_core_handle_st* ,unsigned char**,unsigned long ,unsigned long ,const void*,unsigned long );

typedef unsigned long (*OSSL_FUNC_get_user_nonce_fn)(const struct ossl_core_handle_st* ,unsigned char**,unsigned long ,unsigned long ,const void*,unsigned long );

typedef void (*OSSL_FUNC_cleanup_nonce_fn)(const struct ossl_core_handle_st* ,unsigned char*,unsigned long );

typedef void (*OSSL_FUNC_cleanup_user_nonce_fn)(const struct ossl_core_handle_st* ,unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_provider_register_child_cb_fn)(const struct ossl_core_handle_st* ,int (*)(const struct ossl_core_handle_st* ,void*),int (*)(const struct ossl_core_handle_st* ,void*),int (*)(const char*,void*),void*);

typedef void (*OSSL_FUNC_provider_deregister_child_cb_fn)(const struct ossl_core_handle_st* );

typedef const char* (*OSSL_FUNC_provider_name_fn)(const struct ossl_core_handle_st* );

typedef void* (*OSSL_FUNC_provider_get0_provider_ctx_fn)(const struct ossl_core_handle_st* );

typedef const struct ossl_dispatch_st* (*OSSL_FUNC_provider_get0_dispatch_fn)(const struct ossl_core_handle_st* );

typedef int (*OSSL_FUNC_provider_up_ref_fn)(const struct ossl_core_handle_st* ,int);

typedef int (*OSSL_FUNC_provider_free_fn)(const struct ossl_core_handle_st* ,int);

typedef int (*OSSL_FUNC_core_count_to_mark_fn)(const struct ossl_core_handle_st* );

typedef void (*OSSL_FUNC_provider_teardown_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_provider_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_provider_get_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_algorithm_st* (*OSSL_FUNC_provider_query_operation_fn)(void*,int,int*);

typedef void (*OSSL_FUNC_provider_unquery_operation_fn)(void*,int,const struct ossl_algorithm_st* );

typedef const struct ossl_item_st* (*OSSL_FUNC_provider_get_reason_strings_fn)(void*);

typedef int (*OSSL_FUNC_provider_get_capabilities_fn)(void*,const char*,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef int (*OSSL_FUNC_provider_self_test_fn)(void*);

typedef int (*OSSL_FUNC_provider_random_bytes_fn)(void*,int,void*,unsigned long ,unsigned int);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_crypto_send_fn)(struct ssl_st* ,const unsigned char*,unsigned long ,unsigned long* ,void*);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_crypto_recv_rcd_fn)(struct ssl_st* ,const unsigned char**,unsigned long* ,void*);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_crypto_release_rcd_fn)(struct ssl_st* ,unsigned long ,void*);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_yield_secret_fn)(struct ssl_st* ,unsigned int ,int,const unsigned char*,unsigned long ,void*);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_got_transport_params_fn)(struct ssl_st* ,const unsigned char*,unsigned long ,void*);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_alert_fn)(struct ssl_st* ,unsigned char,void*);

typedef void* (*OSSL_FUNC_digest_newctx_fn)(void*);

typedef int (*OSSL_FUNC_digest_init_fn)(void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_digest_update_fn)(void*,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_digest_final_fn)(void*,unsigned char*,unsigned long* ,unsigned long );

typedef int (*OSSL_FUNC_digest_squeeze_fn)(void*,unsigned char*,unsigned long* ,unsigned long );

typedef int (*OSSL_FUNC_digest_digest_fn)(void*,const unsigned char*,unsigned long ,unsigned char*,unsigned long* ,unsigned long );

typedef void (*OSSL_FUNC_digest_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_digest_dupctx_fn)(void*);

typedef void (*OSSL_FUNC_digest_copyctx_fn)(void*,void*);

typedef int (*OSSL_FUNC_digest_get_params_fn)(struct ossl_param_st );

typedef int (*OSSL_FUNC_digest_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_digest_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_digest_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_digest_settable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_digest_gettable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_cipher_newctx_fn)(void*);

typedef int (*OSSL_FUNC_cipher_encrypt_init_fn)(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_decrypt_init_fn)(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_update_fn)(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_cipher_final_fn)(void*,unsigned char*,unsigned long* ,unsigned long );

typedef int (*OSSL_FUNC_cipher_cipher_fn)(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_cipher_pipeline_encrypt_init_fn)(void*,const unsigned char*,unsigned long ,unsigned long ,const unsigned char**,unsigned long ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_pipeline_decrypt_init_fn)(void*,const unsigned char*,unsigned long ,unsigned long ,const unsigned char**,unsigned long ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_pipeline_update_fn)(void*,unsigned long ,unsigned char**,unsigned long* ,const unsigned long* ,const unsigned char**,const unsigned long* );

typedef int (*OSSL_FUNC_cipher_pipeline_final_fn)(void*,unsigned long ,unsigned char**,unsigned long* ,const unsigned long* );

typedef void (*OSSL_FUNC_cipher_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_cipher_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_cipher_get_params_fn)(struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_settable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_cipher_encrypt_skey_init_fn)(void*,void*,const unsigned char*,unsigned long ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_decrypt_skey_init_fn)(void*,void*,const unsigned char*,unsigned long ,const struct ossl_param_st );

typedef void* (*OSSL_FUNC_mac_newctx_fn)(void*);

typedef void* (*OSSL_FUNC_mac_dupctx_fn)(void*);

typedef void (*OSSL_FUNC_mac_freectx_fn)(void*);

typedef int (*OSSL_FUNC_mac_init_fn)(void*,const unsigned char*,unsigned long ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_mac_update_fn)(void*,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_mac_final_fn)(void*,unsigned char*,unsigned long* ,unsigned long );

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_mac_get_params_fn)(struct ossl_param_st );

typedef int (*OSSL_FUNC_mac_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef int (*OSSL_FUNC_mac_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_mac_init_skey_fn)(void*,void*,const struct ossl_param_st );

typedef void* (*OSSL_FUNC_kdf_newctx_fn)(void*);

typedef void* (*OSSL_FUNC_kdf_dupctx_fn)(void*);

typedef void (*OSSL_FUNC_kdf_freectx_fn)(void*);

typedef void (*OSSL_FUNC_kdf_reset_fn)(void*);

typedef int (*OSSL_FUNC_kdf_derive_fn)(void*,unsigned char*,unsigned long ,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_kdf_get_params_fn)(struct ossl_param_st );

typedef int (*OSSL_FUNC_kdf_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef int (*OSSL_FUNC_kdf_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef void* (*OSSL_FUNC_rand_newctx_fn)(void*,void*,const struct ossl_dispatch_st* );

typedef void (*OSSL_FUNC_rand_freectx_fn)(void*);

typedef int (*OSSL_FUNC_rand_instantiate_fn)(void*,unsigned int,int,const unsigned char*,unsigned long ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_rand_uninstantiate_fn)(void*);

typedef int (*OSSL_FUNC_rand_generate_fn)(void*,unsigned char*,unsigned long ,unsigned int,int,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_rand_reseed_fn)(void*,int,const unsigned char*,unsigned long ,const unsigned char*,unsigned long );

typedef unsigned long (*OSSL_FUNC_rand_nonce_fn)(void*,unsigned char*,unsigned int,unsigned long ,unsigned long );

typedef int (*OSSL_FUNC_rand_enable_locking_fn)(void*);

typedef int (*OSSL_FUNC_rand_lock_fn)(void*);

typedef void (*OSSL_FUNC_rand_unlock_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_rand_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_rand_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_rand_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_rand_get_params_fn)(struct ossl_param_st );

typedef int (*OSSL_FUNC_rand_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef int (*OSSL_FUNC_rand_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef void (*OSSL_FUNC_rand_set_callbacks_fn)(void*,int (*(*))(const struct ossl_param_st ,struct ossl_param_st ,void*) ,int (*(*))(const struct ossl_param_st ,void*) ,int (*(*))(const struct ossl_param_st ,struct ossl_param_st ,void*) ,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef int (*OSSL_FUNC_rand_verify_zeroization_fn)(void*);

typedef unsigned long (*OSSL_FUNC_rand_get_seed_fn)(void*,unsigned char**,int,unsigned long ,unsigned long ,int,const unsigned char*,unsigned long );

typedef void (*OSSL_FUNC_rand_clear_seed_fn)(void*,unsigned char*,unsigned long );

typedef void* (*OSSL_FUNC_keymgmt_new_fn)(void*);

typedef void* (*OSSL_FUNC_keymgmt_gen_init_fn)(void*,int,const struct ossl_param_st );

typedef int (*OSSL_FUNC_keymgmt_gen_set_template_fn)(void*,void*);

typedef int (*OSSL_FUNC_keymgmt_gen_set_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gen_settable_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_keymgmt_gen_get_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gen_gettable_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_keymgmt_gen_fn)(void*,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef void (*OSSL_FUNC_keymgmt_gen_cleanup_fn)(void*);

typedef void* (*OSSL_FUNC_keymgmt_load_fn)(const void*,unsigned long );

typedef void (*OSSL_FUNC_keymgmt_free_fn)(void*);

typedef int (*OSSL_FUNC_keymgmt_get_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_keymgmt_set_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_settable_params_fn)(void*);

typedef const char* (*OSSL_FUNC_keymgmt_query_operation_name_fn)(int);

typedef int (*OSSL_FUNC_keymgmt_has_fn)(const void*,int);

typedef int (*OSSL_FUNC_keymgmt_validate_fn)(const void*,int,int);

typedef int (*OSSL_FUNC_keymgmt_match_fn)(const void*,const void*,int);

typedef int (*OSSL_FUNC_keymgmt_import_fn)(void*,int,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_import_types_fn)(int);

typedef int (*OSSL_FUNC_keymgmt_export_fn)(void*,int,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_export_types_fn)(int);

typedef void* (*OSSL_FUNC_keymgmt_dup_fn)(const void*,int);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_import_types_ex_fn)(void*,int);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_export_types_ex_fn)(void*,int);

typedef void* (*OSSL_FUNC_keyexch_newctx_fn)(void*);

typedef int (*OSSL_FUNC_keyexch_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_keyexch_derive_fn)(void*,unsigned char*,unsigned long* ,unsigned long );

typedef int (*OSSL_FUNC_keyexch_set_peer_fn)(void*,void*);

typedef void (*OSSL_FUNC_keyexch_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_keyexch_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_keyexch_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keyexch_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_keyexch_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keyexch_gettable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_signature_newctx_fn)(void*,const char*);

typedef int (*OSSL_FUNC_signature_sign_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_sign_fn)(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_signature_sign_message_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_sign_message_update_fn)(void*,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_signature_sign_message_final_fn)(void*,unsigned char*,unsigned long* ,unsigned long );

typedef int (*OSSL_FUNC_signature_verify_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_verify_fn)(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_signature_verify_message_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_verify_message_update_fn)(void*,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_signature_verify_message_final_fn)(void*);

typedef int (*OSSL_FUNC_signature_verify_recover_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_verify_recover_fn)(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_signature_digest_sign_init_fn)(void*,const char*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_digest_sign_update_fn)(void*,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_signature_digest_sign_final_fn)(void*,unsigned char*,unsigned long* ,unsigned long );

typedef int (*OSSL_FUNC_signature_digest_sign_fn)(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_signature_digest_verify_init_fn)(void*,const char*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_digest_verify_update_fn)(void*,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_signature_digest_verify_final_fn)(void*,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_signature_digest_verify_fn)(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long );

typedef void (*OSSL_FUNC_signature_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_signature_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_signature_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_signature_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_signature_get_ctx_md_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_gettable_ctx_md_params_fn)(void*);

typedef int (*OSSL_FUNC_signature_set_ctx_md_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_settable_ctx_md_params_fn)(void*);

typedef const char** (*OSSL_FUNC_signature_query_key_types_fn)();

typedef void (*OSSL_FUNC_skeymgmt_free_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_skeymgmt_imp_settable_params_fn)(void*);

typedef void* (*OSSL_FUNC_skeymgmt_import_fn)(void*,int,const struct ossl_param_st );

typedef int (*OSSL_FUNC_skeymgmt_export_fn)(void*,int,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_skeymgmt_gen_settable_params_fn)(void*);

typedef void* (*OSSL_FUNC_skeymgmt_generate_fn)(void*,const struct ossl_param_st );

typedef const char* (*OSSL_FUNC_skeymgmt_get_key_id_fn)(void*);

typedef void* (*OSSL_FUNC_asym_cipher_newctx_fn)(void*);

typedef int (*OSSL_FUNC_asym_cipher_encrypt_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_asym_cipher_encrypt_fn)(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long );

typedef int (*OSSL_FUNC_asym_cipher_decrypt_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_asym_cipher_decrypt_fn)(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long );

typedef void (*OSSL_FUNC_asym_cipher_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_asym_cipher_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_asym_cipher_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_asym_cipher_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_settable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_kem_newctx_fn)(void*);

typedef int (*OSSL_FUNC_kem_encapsulate_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_kem_auth_encapsulate_init_fn)(void*,void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_kem_encapsulate_fn)(void*,unsigned char*,unsigned long* ,unsigned char*,unsigned long* );

typedef int (*OSSL_FUNC_kem_decapsulate_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_kem_auth_decapsulate_init_fn)(void*,void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_kem_decapsulate_fn)(void*,unsigned char*,unsigned long* ,const unsigned char*,unsigned long );

typedef void (*OSSL_FUNC_kem_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_kem_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_kem_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_kem_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_kem_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_kem_settable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_encoder_newctx_fn)(void*);

typedef void (*OSSL_FUNC_encoder_freectx_fn)(void*);

typedef int (*OSSL_FUNC_encoder_get_params_fn)(struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_encoder_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_encoder_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_encoder_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_encoder_does_selection_fn)(void*,int);

typedef int (*OSSL_FUNC_encoder_encode_fn)(void*,struct ossl_core_bio_st* ,const void*,const struct ossl_param_st ,int,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*);

typedef void* (*OSSL_FUNC_encoder_import_object_fn)(void*,int,const struct ossl_param_st );

typedef void (*OSSL_FUNC_encoder_free_object_fn)(void*);

typedef void* (*OSSL_FUNC_decoder_newctx_fn)(void*);

typedef void (*OSSL_FUNC_decoder_freectx_fn)(void*);

typedef int (*OSSL_FUNC_decoder_get_params_fn)(struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_decoder_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_decoder_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_decoder_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_decoder_does_selection_fn)(void*,int);

typedef int (*OSSL_FUNC_decoder_decode_fn)(void*,struct ossl_core_bio_st* ,int,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*);

typedef int (*OSSL_FUNC_decoder_export_object_fn)(void*,const void*,unsigned long ,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef void* (*OSSL_FUNC_store_open_fn)(void*,const char*);

typedef void* (*OSSL_FUNC_store_attach_fn)(void*,struct ossl_core_bio_st* );

typedef const struct ossl_param_st* (*OSSL_FUNC_store_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_store_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_store_load_fn)(void*,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*);

typedef int (*OSSL_FUNC_store_eof_fn)(void*);

typedef int (*OSSL_FUNC_store_close_fn)(void*);

typedef int (*OSSL_FUNC_store_export_object_fn)(void*,const void*,unsigned long ,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef int (*OSSL_FUNC_store_delete_fn)(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*);

typedef void* (*OSSL_FUNC_store_open_ex_fn)(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*);

typedef int (*sk_X509_ALGOR_compfunc)(const struct X509_algor_st** const ,const struct X509_algor_st** const );

typedef void (*sk_X509_ALGOR_freefunc)(struct X509_algor_st* );

typedef struct X509_algor_st* (*sk_X509_ALGOR_copyfunc)(const struct X509_algor_st* );

typedef struct ASN1_ENCODING_st  ASN1_ENCODING  ;

typedef int (*sk_ASN1_STRING_TABLE_compfunc)(const struct asn1_string_table_st** const ,const struct asn1_string_table_st** const );

typedef void (*sk_ASN1_STRING_TABLE_freefunc)(struct asn1_string_table_st* );

typedef struct asn1_string_table_st* (*sk_ASN1_STRING_TABLE_copyfunc)(const struct asn1_string_table_st* );

typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE;

typedef struct ASN1_TLC_st ASN1_TLC;

typedef struct ASN1_VALUE_st ASN1_VALUE;

typedef void* (*d2i_of_void)(void**,const unsigned char**,long);

typedef int (*i2d_of_void)(const void*,unsigned char**);

typedef int (*OSSL_i2d_of_void_ctx)(const void*,unsigned char**,void*);

typedef const struct ASN1_ITEM_st* (*ASN1_ITEM_EXP)();

typedef int (*sk_ASN1_TYPE_compfunc)(const struct asn1_type_st** const ,const struct asn1_type_st** const );

typedef void (*sk_ASN1_TYPE_freefunc)(struct asn1_type_st* );

typedef struct asn1_type_st* (*sk_ASN1_TYPE_copyfunc)(const struct asn1_type_st* );

typedef struct stack_st_ASN1_TYPE  ASN1_SEQUENCE_ANY  ;

typedef struct BIT_STRING_BITNAME_st  BIT_STRING_BITNAME  ;

typedef int (*sk_ASN1_OBJECT_compfunc)(const struct asn1_object_st** const ,const struct asn1_object_st** const );

typedef void (*sk_ASN1_OBJECT_freefunc)(struct asn1_object_st* );

typedef struct asn1_object_st* (*sk_ASN1_OBJECT_copyfunc)(const struct asn1_object_st* );

typedef int (*sk_ASN1_INTEGER_compfunc)(const struct asn1_string_st** const ,const struct asn1_string_st** const );

typedef void (*sk_ASN1_INTEGER_freefunc)(struct asn1_string_st* );

typedef struct asn1_string_st* (*sk_ASN1_INTEGER_copyfunc)(const struct asn1_string_st* );

typedef int (*sk_ASN1_UTF8STRING_compfunc)(const struct asn1_string_st** const ,const struct asn1_string_st** const );

typedef void (*sk_ASN1_UTF8STRING_freefunc)(struct asn1_string_st* );

typedef struct asn1_string_st* (*sk_ASN1_UTF8STRING_copyfunc)(const struct asn1_string_st* );

typedef int (*sk_ASN1_GENERALSTRING_compfunc)(const struct asn1_string_st** const ,const struct asn1_string_st** const );

typedef void (*sk_ASN1_GENERALSTRING_freefunc)(struct asn1_string_st* );

typedef struct asn1_string_st* (*sk_ASN1_GENERALSTRING_copyfunc)(const struct asn1_string_st* );

typedef struct obj_name_st  OBJ_NAME  ;

typedef struct anonymous_typeX107 EVP_CTRL_TLS1_1_MULTIBLOCK_PARAM;

typedef struct evp_cipher_info_st  EVP_CIPHER_INFO  ;

typedef int (*EVP_PBE_KEYGEN)(struct evp_cipher_ctx_st* ,const char*,int,struct asn1_type_st* ,const struct evp_cipher_st* ,const struct evp_md_st* ,int);

typedef int (*EVP_PBE_KEYGEN_EX)(struct evp_cipher_ctx_st* ,const char*,int,struct asn1_type_st* ,const struct evp_cipher_st* ,const struct evp_md_st* ,int,struct ossl_lib_ctx_st* ,const char*);

typedef int (*EVP_PKEY_gen_cb)(struct evp_pkey_ctx_st* );

typedef enum anonymous_typeY107 point_conversion_form_t;

typedef struct ec_method_st EC_METHOD;

typedef struct ec_group_st EC_GROUP;

typedef struct ec_point_st EC_POINT;

typedef struct ecpk_parameters_st ECPKPARAMETERS;

typedef struct ec_parameters_st ECPARAMETERS;

typedef struct anonymous_typeX108 EC_builtin_curve;

typedef struct ECDSA_SIG_st ECDSA_SIG;

typedef struct rsa_oaep_params_st  RSA_OAEP_PARAMS  ;

typedef struct DSA_SIG_st DSA_SIG;

typedef struct SHAstate_st  SHA_CTX  ;

typedef struct SHA256state_st  SHA256_CTX  ;

typedef struct SHA512state_st  SHA512_CTX  ;

typedef int (*sk_X509_NAME_compfunc)(const struct X509_name_st** const ,const struct X509_name_st** const );

typedef void (*sk_X509_NAME_freefunc)(struct X509_name_st* );

typedef struct X509_name_st* (*sk_X509_NAME_copyfunc)(const struct X509_name_st* );

typedef int (*sk_X509_compfunc)(const struct x509_st** const ,const struct x509_st** const );

typedef void (*sk_X509_freefunc)(struct x509_st* );

typedef struct x509_st* (*sk_X509_copyfunc)(const struct x509_st* );

typedef int (*sk_X509_REVOKED_compfunc)(const struct x509_revoked_st** const ,const struct x509_revoked_st** const );

typedef void (*sk_X509_REVOKED_freefunc)(struct x509_revoked_st* );

typedef struct x509_revoked_st* (*sk_X509_REVOKED_copyfunc)(const struct x509_revoked_st* );

typedef int (*sk_X509_CRL_compfunc)(const struct X509_crl_st** const ,const struct X509_crl_st** const );

typedef void (*sk_X509_CRL_freefunc)(struct X509_crl_st* );

typedef struct X509_crl_st* (*sk_X509_CRL_copyfunc)(const struct X509_crl_st* );

typedef struct stack_st_X509_ALGOR  X509_ALGORS  ;

typedef struct X509_val_st  X509_VAL  ;

typedef struct X509_sig_st X509_SIG;

typedef struct X509_name_entry_st X509_NAME_ENTRY;

typedef int (*sk_X509_NAME_ENTRY_compfunc)(const struct X509_name_entry_st** const ,const struct X509_name_entry_st** const );

typedef void (*sk_X509_NAME_ENTRY_freefunc)(struct X509_name_entry_st* );

typedef struct X509_name_entry_st* (*sk_X509_NAME_ENTRY_copyfunc)(const struct X509_name_entry_st* );

typedef struct X509_extension_st X509_EXTENSION;

typedef int (*sk_X509_EXTENSION_compfunc)(const struct X509_extension_st** const ,const struct X509_extension_st** const );

typedef void (*sk_X509_EXTENSION_freefunc)(struct X509_extension_st* );

typedef struct X509_extension_st* (*sk_X509_EXTENSION_copyfunc)(const struct X509_extension_st* );

typedef struct stack_st_X509_EXTENSION  X509_EXTENSIONS  ;

typedef struct x509_attributes_st X509_ATTRIBUTE;

typedef int (*sk_X509_ATTRIBUTE_compfunc)(const struct x509_attributes_st** const ,const struct x509_attributes_st** const );

typedef void (*sk_X509_ATTRIBUTE_freefunc)(struct x509_attributes_st* );

typedef struct x509_attributes_st* (*sk_X509_ATTRIBUTE_copyfunc)(const struct x509_attributes_st* );

typedef struct X509_req_info_st X509_REQ_INFO;

typedef struct X509_req_st X509_REQ;

typedef struct x509_cert_aux_st X509_CERT_AUX;

typedef struct x509_cinf_st X509_CINF;

typedef struct X509_crl_info_st X509_CRL_INFO;

typedef struct private_key_st  X509_PKEY  ;

typedef struct X509_info_st  X509_INFO  ;

typedef int (*sk_X509_INFO_compfunc)(const struct X509_info_st** const ,const struct X509_info_st** const );

typedef void (*sk_X509_INFO_freefunc)(struct X509_info_st* );

typedef struct X509_info_st*  (*sk_X509_INFO_copyfunc)(const struct X509_info_st* );

typedef struct Netscape_spkac_st  NETSCAPE_SPKAC  ;

typedef struct Netscape_spki_st  NETSCAPE_SPKI  ;

typedef struct Netscape_certificate_sequence  NETSCAPE_CERT_SEQUENCE  ;

typedef struct PBEPARAM_st  PBEPARAM  ;

typedef struct PBE2PARAM_st  PBE2PARAM  ;

typedef struct PBKDF2PARAM_st  PBKDF2PARAM  ;

typedef struct anonymous_typeX111 PBMAC1PARAM;

typedef struct SCRYPT_PARAMS_st  SCRYPT_PARAMS  ;

typedef struct lhash_node_st OPENSSL_LH_NODE;

typedef int (*OPENSSL_LH_COMPFUNC)(const void*,const void*);

typedef int (*OPENSSL_LH_COMPFUNCTHUNK)(const void*,const void*,int (*)(const void*,const void*) );

typedef unsigned long  int (*OPENSSL_LH_HASHFUNC)(const void*);

typedef unsigned long  int (*OPENSSL_LH_HASHFUNCTHUNK)(const void*,unsigned long  int (*)(const void*) );

typedef void (*OPENSSL_LH_DOALL_FUNC)(void*);

typedef void (*OPENSSL_LH_DOALL_FUNC_THUNK)(void*,void (*)(void*) );

typedef void (*OPENSSL_LH_DOALL_FUNCARG)(void*,void*);

typedef void (*OPENSSL_LH_DOALL_FUNCARG_THUNK)(void*,void*,void (*)(void*,void*) );

typedef struct lhash_st OPENSSL_LHASH;

typedef int (*lh_OPENSSL_STRING_compfunc)(const char** ,const char** );

typedef unsigned long  int (*lh_OPENSSL_STRING_hashfunc)(const char** );

typedef void (*lh_OPENSSL_STRING_doallfunc)(char** );

typedef int (*lh_OPENSSL_CSTRING_compfunc)(const char** ,const char** );

typedef unsigned long  int (*lh_OPENSSL_CSTRING_hashfunc)(const char** );

typedef void (*lh_OPENSSL_CSTRING_doallfunc)(const char** );

typedef enum anonymous_typeY111 X509_LOOKUP_TYPE;

typedef int (*sk_X509_LOOKUP_compfunc)(const struct x509_lookup_st** const ,const struct x509_lookup_st** const );

typedef void (*sk_X509_LOOKUP_freefunc)(struct x509_lookup_st* );

typedef struct x509_lookup_st* (*sk_X509_LOOKUP_copyfunc)(const struct x509_lookup_st* );

typedef int (*sk_X509_OBJECT_compfunc)(const struct x509_object_st** const ,const struct x509_object_st** const );

typedef void (*sk_X509_OBJECT_freefunc)(struct x509_object_st* );

typedef struct x509_object_st* (*sk_X509_OBJECT_copyfunc)(const struct x509_object_st* );

typedef int (*sk_X509_VERIFY_PARAM_compfunc)(const struct X509_VERIFY_PARAM_st** const ,const struct X509_VERIFY_PARAM_st** const );

typedef void (*sk_X509_VERIFY_PARAM_freefunc)(struct X509_VERIFY_PARAM_st* );

typedef struct X509_VERIFY_PARAM_st* (*sk_X509_VERIFY_PARAM_copyfunc)(const struct X509_VERIFY_PARAM_st* );

typedef struct x509_trust_st  X509_TRUST  ;

typedef int (*sk_X509_TRUST_compfunc)(const struct x509_trust_st** const ,const struct x509_trust_st** const );

typedef void (*sk_X509_TRUST_freefunc)(struct x509_trust_st* );

typedef struct x509_trust_st*  (*sk_X509_TRUST_copyfunc)(const struct x509_trust_st* );

typedef int (*X509_STORE_CTX_verify_cb)(int,struct x509_store_ctx_st* );

typedef int (*X509_STORE_CTX_verify_fn)(struct x509_store_ctx_st* );

typedef int (*X509_STORE_CTX_get_issuer_fn)(struct x509_st** ,struct x509_store_ctx_st* ,struct x509_st* );

typedef int (*X509_STORE_CTX_check_issued_fn)(struct x509_store_ctx_st* ,struct x509_st* ,struct x509_st* );

typedef int (*X509_STORE_CTX_check_revocation_fn)(struct x509_store_ctx_st* );

typedef int (*X509_STORE_CTX_get_crl_fn)(struct x509_store_ctx_st* ,struct X509_crl_st** ,struct x509_st* );

typedef int (*X509_STORE_CTX_check_crl_fn)(struct x509_store_ctx_st* ,struct X509_crl_st* );

typedef int (*X509_STORE_CTX_cert_crl_fn)(struct x509_store_ctx_st* ,struct X509_crl_st* ,struct x509_st* );

typedef int (*X509_STORE_CTX_check_policy_fn)(struct x509_store_ctx_st* );

typedef struct stack_st_X509* (*X509_STORE_CTX_lookup_certs_fn)(struct x509_store_ctx_st* ,const struct X509_name_st* );

typedef struct stack_st_X509_CRL* (*X509_STORE_CTX_lookup_crls_fn)(const struct x509_store_ctx_st* ,const struct X509_name_st* );

typedef int (*X509_STORE_CTX_cleanup_fn)(struct x509_store_ctx_st* );

typedef int (*X509_LOOKUP_ctrl_fn)(struct x509_lookup_st* ,int,const char*,long,char**);

typedef int (*X509_LOOKUP_ctrl_ex_fn)(struct x509_lookup_st* ,int,const char*,long,char**,struct ossl_lib_ctx_st* ,const char*);

typedef int (*X509_LOOKUP_get_by_subject_fn)(struct x509_lookup_st* ,enum anonymous_typeY111 ,const struct X509_name_st* ,struct x509_object_st* );

typedef int (*X509_LOOKUP_get_by_subject_ex_fn)(struct x509_lookup_st* ,enum anonymous_typeY111 ,const struct X509_name_st* ,struct x509_object_st* ,struct ossl_lib_ctx_st* ,const char*);

typedef int (*X509_LOOKUP_get_by_issuer_serial_fn)(struct x509_lookup_st* ,enum anonymous_typeY111 ,const struct X509_name_st* ,const struct asn1_string_st* ,struct x509_object_st* );

typedef int (*X509_LOOKUP_get_by_fingerprint_fn)(struct x509_lookup_st* ,enum anonymous_typeY111 ,const unsigned char*,int,struct x509_object_st* );

typedef int (*X509_LOOKUP_get_by_alias_fn)(struct x509_lookup_st* ,enum anonymous_typeY111 ,const char*,int,struct x509_object_st* );

typedef struct PKCS7_CTX_st  PKCS7_CTX  ;

typedef struct pkcs7_issuer_and_serial_st  PKCS7_ISSUER_AND_SERIAL  ;

typedef struct pkcs7_signer_info_st  PKCS7_SIGNER_INFO  ;

typedef int (*sk_PKCS7_SIGNER_INFO_compfunc)(const struct pkcs7_signer_info_st** const ,const struct pkcs7_signer_info_st** const );

typedef void (*sk_PKCS7_SIGNER_INFO_freefunc)(struct pkcs7_signer_info_st* );

typedef struct pkcs7_signer_info_st*  (*sk_PKCS7_SIGNER_INFO_copyfunc)(const struct pkcs7_signer_info_st* );

typedef struct pkcs7_recip_info_st  PKCS7_RECIP_INFO  ;

typedef int (*sk_PKCS7_RECIP_INFO_compfunc)(const struct pkcs7_recip_info_st** const ,const struct pkcs7_recip_info_st** const );

typedef void (*sk_PKCS7_RECIP_INFO_freefunc)(struct pkcs7_recip_info_st* );

typedef struct pkcs7_recip_info_st*  (*sk_PKCS7_RECIP_INFO_copyfunc)(const struct pkcs7_recip_info_st* );

typedef struct pkcs7_signed_st  PKCS7_SIGNED  ;

typedef struct pkcs7_enc_content_st  PKCS7_ENC_CONTENT  ;

typedef struct pkcs7_enveloped_st  PKCS7_ENVELOPE  ;

typedef struct pkcs7_signedandenveloped_st  PKCS7_SIGN_ENVELOPE  ;

typedef struct pkcs7_digest_st  PKCS7_DIGEST  ;

typedef struct pkcs7_encrypted_st  PKCS7_ENCRYPT  ;

typedef struct pkcs7_st  PKCS7  ;

typedef int (*sk_PKCS7_compfunc)(const struct pkcs7_st** const ,const struct pkcs7_st** const );

typedef void (*sk_PKCS7_freefunc)(struct pkcs7_st* );

typedef struct pkcs7_st*  (*sk_PKCS7_copyfunc)(const struct pkcs7_st* );

typedef struct anonymous_typeX114 CONF_VALUE;

typedef int (*sk_CONF_VALUE_compfunc)(const struct anonymous_typeX114** const ,const struct anonymous_typeX114** const );

typedef void (*sk_CONF_VALUE_freefunc)(struct anonymous_typeX114* );

typedef struct anonymous_typeX114* (*sk_CONF_VALUE_copyfunc)(const struct anonymous_typeX114* );

typedef int (*lh_CONF_VALUE_compfunc)(const struct anonymous_typeX114* ,const struct anonymous_typeX114* );

typedef unsigned long  int (*lh_CONF_VALUE_hashfunc)(const struct anonymous_typeX114* );

typedef void (*lh_CONF_VALUE_doallfunc)(struct anonymous_typeX114* );

typedef struct conf_method_st  CONF_METHOD  ;

typedef struct conf_imodule_st CONF_IMODULE;

typedef struct conf_module_st CONF_MODULE;

typedef int (*conf_init_func)(struct conf_imodule_st* ,const struct conf_st* );

typedef void (*conf_finish_func)(struct conf_imodule_st* );

typedef struct bio_st* (*OSSL_HTTP_bio_cb_t)(struct bio_st* ,void*,int,int);

typedef struct async_job_st ASYNC_JOB;

typedef struct async_wait_ctx_st ASYNC_WAIT_CTX;

typedef int (*ASYNC_callback_fn)(void*);

typedef void* (*ASYNC_stack_alloc_fn)(unsigned long* );

typedef void (*ASYNC_stack_free_fn)(void*);

typedef int (*sk_SCT_compfunc)(const struct sct_st** const ,const struct sct_st** const );

typedef void (*sk_SCT_freefunc)(struct sct_st* );

typedef struct sct_st* (*sk_SCT_copyfunc)(const struct sct_st* );

typedef int (*sk_CTLOG_compfunc)(const struct ctlog_st** const ,const struct ctlog_st** const );

typedef void (*sk_CTLOG_freefunc)(struct ctlog_st* );

typedef struct ctlog_st* (*sk_CTLOG_copyfunc)(const struct ctlog_st* );

typedef enum anonymous_typeY114 ct_log_entry_type_t;

typedef enum anonymous_typeY114 sct_version_t;

typedef enum anonymous_typeY114 sct_source_t;

typedef enum anonymous_typeY114 sct_validation_status_t;

typedef struct ssl_st* ssl_crock_st;

typedef struct tls_session_ticket_ext_st TLS_SESSION_TICKET_EXT;

typedef struct ssl_method_st SSL_METHOD;

typedef struct ssl_cipher_st SSL_CIPHER;

typedef struct ssl_session_st SSL_SESSION;

typedef struct tls_sigalgs_st TLS_SIGALGS;

typedef struct ssl_conf_ctx_st SSL_CONF_CTX;

typedef struct srtp_protection_profile_st  SRTP_PROTECTION_PROFILE  ;

typedef int (*sk_SRTP_PROTECTION_PROFILE_compfunc)(const struct srtp_protection_profile_st** const ,const struct srtp_protection_profile_st** const );

typedef void (*sk_SRTP_PROTECTION_PROFILE_freefunc)(struct srtp_protection_profile_st* );

typedef struct srtp_protection_profile_st*  (*sk_SRTP_PROTECTION_PROFILE_copyfunc)(const struct srtp_protection_profile_st* );

typedef int (*tls_session_ticket_ext_cb_fn)(struct ssl_st* ,const unsigned char*,int,void*);

typedef int (*tls_session_secret_cb_fn)(struct ssl_st* ,void*,int*,struct stack_st_SSL_CIPHER* ,const struct ssl_cipher_st** ,void*);

typedef int (*custom_ext_add_cb)(struct ssl_st* ,unsigned int,const unsigned char**,unsigned long* ,int*,void*);

typedef void (*custom_ext_free_cb)(struct ssl_st* ,unsigned int,const unsigned char*,void*);

typedef int (*custom_ext_parse_cb)(struct ssl_st* ,unsigned int,const unsigned char*,unsigned long ,int*,void*);

typedef int (*SSL_custom_ext_add_cb_ex)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char**,unsigned long* ,struct x509_st* ,unsigned long ,int*,void*);

typedef void (*SSL_custom_ext_free_cb_ex)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char*,void*);

typedef int (*SSL_custom_ext_parse_cb_ex)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char*,unsigned long ,struct x509_st* ,unsigned long ,int*,void*);

typedef int (*SSL_verify_cb)(int,struct x509_store_ctx_st* );

typedef int (*SSL_async_callback_fn)(struct ssl_st* ,void*);

typedef int (*GEN_SESSION_CB)(struct ssl_st* ,unsigned char*,unsigned int*);

typedef int (*SSL_CTX_npn_advertised_cb_func)(struct ssl_st* ,const unsigned char**,unsigned int*,void*);

typedef int (*SSL_CTX_npn_select_cb_func)(struct ssl_st* ,unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*);

typedef int (*SSL_CTX_alpn_select_cb_func)(struct ssl_st* ,const unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*);

typedef unsigned int (*SSL_psk_client_cb_func)(struct ssl_st* ,const char*,char*,unsigned int,unsigned char*,unsigned int);

typedef unsigned int (*SSL_psk_server_cb_func)(struct ssl_st* ,const char*,unsigned char*,unsigned int);

typedef int (*SSL_psk_find_session_cb_func)(struct ssl_st* ,const unsigned char*,unsigned long ,struct ssl_session_st** );

typedef int (*SSL_psk_use_session_cb_func)(struct ssl_st* ,const struct evp_md_st* ,const unsigned char**,unsigned long* ,struct ssl_session_st** );

typedef void (*SSL_CTX_keylog_cb_func)(const struct ssl_st* ,const char*);

typedef int (*sk_SSL_CIPHER_compfunc)(const struct ssl_cipher_st** const ,const struct ssl_cipher_st** const );

typedef void (*sk_SSL_CIPHER_freefunc)(struct ssl_cipher_st* );

typedef struct ssl_cipher_st* (*sk_SSL_CIPHER_copyfunc)(const struct ssl_cipher_st* );

typedef enum anonymous_typeY114 OSSL_HANDSHAKE_STATE;

typedef int (*SSL_client_hello_cb_fn)(struct ssl_st* ,int*,void*);

typedef int (*SSL_new_pending_conn_cb_fn)(struct ssl_ctx_st* ,struct ssl_st* ,void*);

typedef struct ssl_shutdown_ex_args_st  SSL_SHUTDOWN_EX_ARGS  ;

typedef struct ssl_stream_reset_args_st  SSL_STREAM_RESET_ARGS  ;

typedef struct ssl_conn_close_info_st  SSL_CONN_CLOSE_INFO  ;

typedef struct ssl_poll_item_st  SSL_POLL_ITEM  ;

typedef int (*ssl_ct_validation_cb)(const struct ct_policy_eval_ctx_st* ,const struct stack_st_SCT* ,void*);

typedef int SSL_TICKET_STATUS;

typedef int SSL_TICKET_RETURN;

typedef int (*SSL_CTX_generate_session_ticket_fn)(struct ssl_st* ,void*);

typedef int (*SSL_CTX_decrypt_session_ticket_fn)(struct ssl_st* ,struct ssl_session_st* ,const unsigned char*,unsigned long ,int ,void*);

typedef unsigned int (*DTLS_timer_cb)(struct ssl_st* ,unsigned int);

typedef int (*SSL_allow_early_data_cb_fn)(struct ssl_st* ,void*);

typedef int error_t;

typedef struct ERR_string_data_st  ERR_STRING_DATA  ;

typedef int (*lh_ERR_STRING_DATA_compfunc)(const struct ERR_string_data_st* ,const struct ERR_string_data_st* );

typedef unsigned long  int (*lh_ERR_STRING_DATA_hashfunc)(const struct ERR_string_data_st* );

typedef void (*lh_ERR_STRING_DATA_doallfunc)(struct ERR_string_data_st* );

typedef struct sg_iovec  sg_iovec_t  ;

typedef struct sg_io_hdr  sg_io_hdr_t  ;

typedef struct sg_req_info  sg_req_info_t  ;

typedef struct sg_io_hdr  Sg_io_hdr  ;

typedef struct sg_io_vec Sg_io_vec;

typedef struct sg_scsi_id  Sg_scsi_id  ;

typedef struct sg_req_info  Sg_req_info  ;

typedef unsigned long  int snd_pcm_uframes_t;

typedef long snd_pcm_sframes_t;

typedef int snd_pcm_access_t;

typedef int snd_pcm_format_t;

typedef int snd_pcm_subformat_t;

typedef int snd_pcm_state_t;

typedef int snd_pcm_hw_param_t;

typedef struct __time_pad  __time_pad  ;

typedef int snd_ctl_elem_type_t;

typedef int snd_ctl_elem_iface_t;

typedef unsigned char snd_seq_event_type_t;

typedef unsigned int snd_seq_tick_time_t;

typedef int snd_seq_client_type_t;

typedef unsigned int drm_handle_t;

typedef unsigned int drm_context_t;

typedef unsigned int drm_drawable_t;

typedef unsigned int drm_magic_t;

typedef enum anonymous_typeY154 drm_drawable_info_type_t;

typedef struct drm_clip_rect  drm_clip_rect_t  ;

typedef struct drm_drawable_info  drm_drawable_info_t  ;

typedef struct drm_tex_region  drm_tex_region_t  ;

typedef struct drm_hw_lock  drm_hw_lock_t  ;

typedef struct drm_version  drm_version_t  ;

typedef struct drm_unique  drm_unique_t  ;

typedef struct drm_list  drm_list_t  ;

typedef struct drm_block  drm_block_t  ;

typedef struct drm_control  drm_control_t  ;

typedef enum drm_map_type drm_map_type_t;

typedef enum drm_map_flags drm_map_flags_t;

typedef struct drm_ctx_priv_map  drm_ctx_priv_map_t  ;

typedef struct drm_map  drm_map_t  ;

typedef struct drm_client  drm_client_t  ;

typedef enum drm_stat_type drm_stat_type_t;

typedef struct drm_stats  drm_stats_t  ;

typedef enum drm_lock_flags drm_lock_flags_t;

typedef struct drm_lock  drm_lock_t  ;

typedef enum drm_dma_flags drm_dma_flags_t;

typedef struct drm_buf_desc  drm_buf_desc_t  ;

typedef struct drm_buf_info  drm_buf_info_t  ;

typedef struct drm_buf_free  drm_buf_free_t  ;

typedef struct drm_buf_pub  drm_buf_pub_t  ;

typedef struct drm_buf_map  drm_buf_map_t  ;

typedef struct drm_dma  drm_dma_t  ;

typedef union drm_wait_vblank  drm_wait_vblank_t  ;

typedef struct drm_agp_mode  drm_agp_mode_t  ;

typedef enum drm_ctx_flags drm_ctx_flags_t;

typedef struct drm_ctx  drm_ctx_t  ;

typedef struct drm_ctx_res  drm_ctx_res_t  ;

typedef struct drm_draw  drm_draw_t  ;

typedef struct drm_update_draw  drm_update_draw_t  ;

typedef struct drm_auth  drm_auth_t  ;

typedef struct drm_irq_busid  drm_irq_busid_t  ;

typedef enum drm_vblank_seq_type drm_vblank_seq_type_t;

typedef struct drm_agp_buffer  drm_agp_buffer_t  ;

typedef struct drm_agp_binding  drm_agp_binding_t  ;

typedef struct drm_agp_info  drm_agp_info_t  ;

typedef struct drm_scatter_gather  drm_scatter_gather_t  ;

typedef struct drm_set_version  drm_set_version_t  ;

typedef struct mtd_info_user  mtd_info_t  ;

typedef struct erase_info_user  erase_info_t  ;

typedef struct region_info_user  region_info_t  ;

typedef struct nand_oobinfo  nand_oobinfo_t  ;

typedef struct nand_ecclayout_user  nand_ecclayout_t  ;

typedef unsigned short int domid_t;

typedef unsigned int grant_ref_t;

typedef unsigned long  int xen_pfn_t;

/// previous struct definition ///
struct cmsghdr;

struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

struct tm;

struct tagMENU;

struct sigevent;

struct stack_st_OPENSSL_STRING;

struct stack_st_OPENSSL_CSTRING;

struct stack_st_OPENSSL_BLOCK;

struct stack_st_BIGNUM;

struct stack_st_BIGNUM_const;

struct stack_st_void;

struct stack_st_SSL_COMP;

struct stack_st_BIO;

struct stack_st_X509_ALGOR;

struct stack_st_ASN1_STRING_TABLE;

struct stack_st_ASN1_TYPE;

struct stack_st_ASN1_OBJECT;

struct stack_st_ASN1_INTEGER;

struct stack_st_ASN1_UTF8STRING;

struct stack_st_ASN1_GENERALSTRING;

struct rsa_st;

struct dsa_st;

struct dh_st;

struct ec_key_st;

struct stack_st_X509_NAME;

struct stack_st_X509;

struct stack_st_X509_REVOKED;

struct stack_st_X509_CRL;

struct stack_st_X509_NAME_ENTRY;

struct stack_st_X509_EXTENSION;

struct stack_st_X509_ATTRIBUTE;

struct stack_st_X509_INFO;

struct lhash_st_OPENSSL_STRING;

struct lhash_st_OPENSSL_CSTRING;

struct stack_st_X509_LOOKUP;

struct stack_st_X509_OBJECT;

struct stack_st_X509_VERIFY_PARAM;

struct stack_st_X509_TRUST;

struct stack_st_PKCS7_SIGNER_INFO;

struct stack_st_PKCS7_RECIP_INFO;

struct stack_st_PKCS7;

struct stack_st_CONF_VALUE;

struct lhash_st_CONF_VALUE;

struct conf_st;

struct conf_method_st;

struct stack_st_CONF_MODULE;

struct stack_st_CONF_IMODULE;

struct stack_st_SCT;

struct stack_st_CTLOG;

struct stack_st_SRTP_PROTECTION_PROFILE;

struct stack_st_SSL_CIPHER;

struct lhash_st_ERR_STRING_DATA;

/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

struct anonymous_typeX1
{
    long long __attribute__((__aligned__(__alignof__(long long)))) __clang_max_align_nonce1 __attribute__((__aligned__(__alignof__(long long))));
    long  double __attribute__((__aligned__(__alignof__(long double)))) __clang_max_align_nonce2 __attribute__((__aligned__(__alignof__(long double))));
};

struct anonymous_typeX2
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

struct timeval
{
    long  int  tv_sec  ;
    long  int  tv_usec  ;
};

struct timespec
{
    long  int  tv_sec  ;
    long  int  tv_nsec  ;
};

struct anonymous_typeX3
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
};

struct anonymous_typeX5
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ4
{
unsigned long long int __value64;
    struct {
        unsigned int __low;
        unsigned int __high;
    } __value32;
};

struct __pthread_internal_list
{
    struct __pthread_internal_list*  __prev  ;
    struct __pthread_internal_list*  __next  ;
};

struct __pthread_internal_slist
{
    struct __pthread_internal_slist*  __next  ;
};

struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    struct __pthread_internal_list  __list  ;
};

struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    char __rwelision;
    unsigned char __pad1[7];
    unsigned long  int __pad2;
    unsigned int __flags;
};

struct __pthread_cond_s
{
    union {
        unsigned long long int __value64;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __value32;
    } __wseq;
    union {
        unsigned long long int __value64;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __value32;
    } __g1_start;
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
    unsigned int __unused_initialized_1;
    unsigned int __unused_initialized_2;
};

struct anonymous_typeX6
{
    int __data;
};

union anonymous_typeZ7
{
char __size[4];
int __align;
};

union anonymous_typeZ8
{
char __size[4];
int __align;
};

union pthread_attr_t
{
char __size[56];
long  int __align;
};

union anonymous_typeZ9
{
struct __pthread_mutex_s  __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ10
{
struct __pthread_cond_s  __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ11
{
struct __pthread_rwlock_arch_t  __data  ;
char __size[56];
long  int __align;
};

union anonymous_typeZ12
{
char __size[8];
long  int __align;
};

union anonymous_typeZ13
{
char __size[32];
long  int __align;
};

union anonymous_typeZ14
{
char __size[4];
int __align;
};

struct iovec
{
    void* iov_base;
    unsigned long  iov_len  ;
};

enum  __socket_type { SOCK_STREAM=(1),
SOCK_DGRAM=(2),
SOCK_RAW=(3),
SOCK_RDM=(4),
SOCK_SEQPACKET=(5),
SOCK_DCCP=(6),
SOCK_PACKET=(10),
SOCK_CLOEXEC=(02000000),
SOCK_NONBLOCK=(00004000)
};

struct sockaddr
{
    unsigned short int  sa_family  ;
    char sa_data[14];
} __attribute__ ((__may_alias__)) ;

struct sockaddr_storage
{
    unsigned short int  ss_family  ;
    char __ss_padding[(128-(sizeof(unsigned short int))-sizeof(unsigned long  int))];
    unsigned long  int __ss_align;
} __attribute__ ((__may_alias__)) ;

enum { MSG_OOB=(0x01),
MSG_PEEK=(0x02),
MSG_DONTROUTE=(0x04),
MSG_TRYHARD=((0x04)),
MSG_CTRUNC=(0x08),
MSG_PROXY=(0x10),
MSG_TRUNC=(0x20),
MSG_DONTWAIT=(0x40),
MSG_EOR=(0x80),
MSG_WAITALL=(0x100),
MSG_FIN=(0x200),
MSG_SYN=(0x400),
MSG_CONFIRM=(0x800),
MSG_RST=(0x1000),
MSG_ERRQUEUE=(0x2000),
MSG_NOSIGNAL=(0x4000),
MSG_MORE=(0x8000),
MSG_WAITFORONE=(0x10000),
MSG_BATCH=(0x40000),
MSG_SOCK_DEVMEM=(0x2000000),
MSG_ZEROCOPY=(0x4000000),
MSG_FASTOPEN=(0x20000000),
MSG_CMSG_CLOEXEC=(0x40000000)
};

struct msghdr
{
    void* msg_name;
    unsigned int  msg_namelen  ;
    struct iovec*  msg_iov  ;
    unsigned long  msg_iovlen  ;
    void* msg_control;
    unsigned long  msg_controllen  ;
    int msg_flags;
};

struct cmsghdr
{
    unsigned long  cmsg_len  ;
    int cmsg_level;
    int cmsg_type;
    unsigned char __cmsg_data[];
};

enum { SCM_RIGHTS=(0x01),
SCM_CREDENTIALS=(0x02),
SCM_SECURITY=(0x03),
SCM_PIDFD=(0x04)
};

struct ucred
{
    int  pid  ;
    unsigned int  uid  ;
    unsigned int  gid  ;
};

struct anonymous_typeX15
{
    unsigned long  int fds_bits[1024/(8*sizeof(long))];
};

struct anonymous_typeX16
{
    int val[2];
};

struct linger
{
    int l_onoff;
    int l_linger;
};

struct osockaddr
{
    unsigned short int sa_family;
    unsigned char sa_data[14];
};

enum { SHUT_RD=(0),
SHUT_WR 
,SHUT_RDWR 
};

struct mmsghdr
{
    struct msghdr  msg_hdr  ;
    unsigned int msg_len;
};

struct in_addr
{
    unsigned int  s_addr  ;
};

struct ip_opts
{
    struct in_addr  ip_dst  ;
    char ip_opts[40];
};

struct in_pktinfo
{
    int ipi_ifindex;
    struct in_addr  ipi_spec_dst  ;
    struct in_addr  ipi_addr  ;
};

enum { IPPROTO_IP=(0),
IPPROTO_ICMP=(1),
IPPROTO_IGMP=(2),
IPPROTO_IPIP=(4),
IPPROTO_TCP=(6),
IPPROTO_EGP=(8),
IPPROTO_PUP=(12),
IPPROTO_UDP=(17),
IPPROTO_IDP=(22),
IPPROTO_TP=(29),
IPPROTO_DCCP=(33),
IPPROTO_IPV6=(41),
IPPROTO_RSVP=(46),
IPPROTO_GRE=(47),
IPPROTO_ESP=(50),
IPPROTO_AH=(51),
IPPROTO_MTP=(92),
IPPROTO_BEETPH=(94),
IPPROTO_ENCAP=(98),
IPPROTO_PIM=(103),
IPPROTO_COMP=(108),
IPPROTO_L2TP=(115),
IPPROTO_SCTP=(132),
IPPROTO_UDPLITE=(136),
IPPROTO_MPLS=(137),
IPPROTO_ETHERNET=(143),
IPPROTO_RAW=(255),
IPPROTO_SMC=(256),
IPPROTO_MPTCP=(262),
IPPROTO_MAX 
};

enum { IPPROTO_HOPOPTS=(0),
IPPROTO_ROUTING=(43),
IPPROTO_FRAGMENT=(44),
IPPROTO_ICMPV6=(58),
IPPROTO_NONE=(59),
IPPROTO_DSTOPTS=(60),
IPPROTO_MH=(135)
};

enum { IPPORT_ECHO=(7),
IPPORT_DISCARD=(9),
IPPORT_SYSTAT=(11),
IPPORT_DAYTIME=(13),
IPPORT_NETSTAT=(15),
IPPORT_FTP=(21),
IPPORT_TELNET=(23),
IPPORT_SMTP=(25),
IPPORT_TIMESERVER=(37),
IPPORT_NAMESERVER=(42),
IPPORT_WHOIS=(43),
IPPORT_MTP=(57),
IPPORT_TFTP=(69),
IPPORT_RJE=(77),
IPPORT_FINGER=(79),
IPPORT_TTYLINK=(87),
IPPORT_SUPDUP=(95),
IPPORT_EXECSERVER=(512),
IPPORT_LOGINSERVER=(513),
IPPORT_CMDSERVER=(514),
IPPORT_EFSSERVER=(520),
IPPORT_BIFFUDP=(512),
IPPORT_WHOSERVER=(513),
IPPORT_ROUTESERVER=(520),
IPPORT_RESERVED=(1024),
IPPORT_USERRESERVED=(5000)
};

union anonymous_typeZ17
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};

union anonymous_typeZ18
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};

struct in6_addr
{
    union {
        unsigned char  __u6_addr8[16]  ;
        unsigned short int  __u6_addr16[8]  ;
        unsigned int  __u6_addr32[4]  ;
    } __in6_u;
};

struct sockaddr_in
{
    unsigned short int  sin_family  ;
    unsigned short int  sin_port  ;
    struct in_addr  sin_addr  ;
    unsigned char sin_zero[sizeof(struct sockaddr )-(sizeof(unsigned short int))-sizeof(unsigned short int )-sizeof(struct in_addr )];
} __attribute__ ((__may_alias__)) ;

struct sockaddr_in6
{
    unsigned short int  sin6_family  ;
    unsigned short int  sin6_port  ;
    unsigned int  sin6_flowinfo  ;
    struct in6_addr  sin6_addr  ;
    unsigned int  sin6_scope_id  ;
} __attribute__ ((__may_alias__)) ;

struct ip_mreq
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_interface  ;
};

struct ip_mreqn
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_address  ;
    int imr_ifindex;
};

struct ip_mreq_source
{
    struct in_addr  imr_multiaddr  ;
    struct in_addr  imr_interface  ;
    struct in_addr  imr_sourceaddr  ;
};

struct ipv6_mreq
{
    struct in6_addr  ipv6mr_multiaddr  ;
    unsigned int ipv6mr_interface;
};

struct group_req
{
    unsigned int  gr_interface  ;
    struct sockaddr_storage  gr_group  ;
};

struct group_source_req
{
    unsigned int  gsr_interface  ;
    struct sockaddr_storage  gsr_group  ;
    struct sockaddr_storage  gsr_source  ;
};

struct ip_msfilter
{
    struct in_addr  imsf_multiaddr  ;
    struct in_addr  imsf_interface  ;
    unsigned int  imsf_fmode  ;
    unsigned int  imsf_numsrc  ;
    struct in_addr  imsf_slist[1]  ;
};

struct group_filter
{
    unsigned int  gf_interface  ;
    struct sockaddr_storage  gf_group  ;
    unsigned int  gf_fmode  ;
    unsigned int  gf_numsrc  ;
    struct sockaddr_storage  gf_slist[1]  ;
};

struct in6_pktinfo
{
    struct in6_addr  ipi6_addr  ;
    unsigned int ipi6_ifindex;
};

struct ip6_mtuinfo
{
    struct sockaddr_in6  ip6m_addr  ;
    unsigned int  ip6m_mtu  ;
};

union sigval
{
int sival_int;
void* sival_ptr;
};

struct anonymous_typeX21
{
    int  si_pid  ;
    unsigned int  si_uid  ;
};

struct anonymous_typeX22
{
    int si_tid;
    int si_overrun;
    union sigval  si_sigval  ;
};

struct anonymous_typeX23
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    union sigval  si_sigval  ;
};

struct anonymous_typeX24
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    long  int  si_utime  ;
    long  int  si_stime  ;
};

struct anonymous_typeX27
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ26
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX29
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ28
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX25
{
    void* si_addr;
    short int si_addr_lsb;
    union {
        struct {
            void* _lower;
            void* _upper;
        } _addr_bnd;
        unsigned int  _pkey  ;
    } _bounds;
};

struct anonymous_typeX30
{
    long  int si_band;
    int si_fd;
};

struct anonymous_typeX31
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union anonymous_typeZ20
{
int _pad[((128/sizeof(int))-4)];
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
    } _kill;
    struct {
        int si_tid;
        int si_overrun;
        union sigval  si_sigval  ;
    } _timer;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        union sigval  si_sigval  ;
    } _rt;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        int si_status;
        long  int  si_utime  ;
        long  int  si_stime  ;
    } _sigchld;
    struct {
        void* si_addr;
        short int si_addr_lsb;
        union {
            struct {
                void* _lower;
                void* _upper;
            } _addr_bnd;
            unsigned int  _pkey  ;
        } _bounds;
    } _sigfault;
    struct {
        long  int si_band;
        int si_fd;
    } _sigpoll;
    struct {
        void* _call_addr;
        int _syscall;
        unsigned int _arch;
    } _sigsys;
};

struct anonymous_typeX33
{
    int  si_pid  ;
    unsigned int  si_uid  ;
};

struct anonymous_typeX34
{
    int si_tid;
    int si_overrun;
    union sigval  si_sigval  ;
};

struct anonymous_typeX35
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    union sigval  si_sigval  ;
};

struct anonymous_typeX36
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    long  int  si_utime  ;
    long  int  si_stime  ;
};

struct anonymous_typeX39
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ38
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX41
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ40
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX37
{
    void* si_addr;
    short int si_addr_lsb;
    union {
        struct {
            void* _lower;
            void* _upper;
        } _addr_bnd;
        unsigned int  _pkey  ;
    } _bounds;
};

struct anonymous_typeX42
{
    long  int si_band;
    int si_fd;
};

struct anonymous_typeX43
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union anonymous_typeZ32
{
int _pad[((128/sizeof(int))-4)];
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
    } _kill;
    struct {
        int si_tid;
        int si_overrun;
        union sigval  si_sigval  ;
    } _timer;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        union sigval  si_sigval  ;
    } _rt;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        int si_status;
        long  int  si_utime  ;
        long  int  si_stime  ;
    } _sigchld;
    struct {
        void* si_addr;
        short int si_addr_lsb;
        union {
            struct {
                void* _lower;
                void* _upper;
            } _addr_bnd;
            unsigned int  _pkey  ;
        } _bounds;
    } _sigfault;
    struct {
        long  int si_band;
        int si_fd;
    } _sigpoll;
    struct {
        void* _call_addr;
        int _syscall;
        unsigned int _arch;
    } _sigsys;
};

struct anonymous_typeX19
{
    int si_signo;
    int si_errno;
    int si_code;
    int __pad0;
    union {
        int _pad[((128/sizeof(int))-4)];
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
        } _kill;
        struct {
            int si_tid;
            int si_overrun;
            union sigval  si_sigval  ;
        } _timer;
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
            union sigval  si_sigval  ;
        } _rt;
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
            int si_status;
            long  int  si_utime  ;
            long  int  si_stime  ;
        } _sigchld;
        struct {
            void* si_addr;
            short int si_addr_lsb;
            union {
                struct {
                    void* _lower;
                    void* _upper;
                } _addr_bnd;
                unsigned int  _pkey  ;
            } _bounds;
        } _sigfault;
        struct {
            long  int si_band;
            int si_fd;
        } _sigpoll;
        struct {
            void* _call_addr;
            int _syscall;
            unsigned int _arch;
        } _sigsys;
    } _sifields;
};

enum { SI_ASYNCNL=(-60),
SI_DETHREAD=(-7),
SI_TKILL 
,SI_SIGIO 
,SI_ASYNCIO 
,SI_MESGQ 
,SI_TIMER 
,SI_QUEUE 
,SI_USER 
,SI_KERNEL=(0x80)
};

enum { ILL_ILLOPC=(1),
ILL_ILLOPN 
,ILL_ILLADR 
,ILL_ILLTRP 
,ILL_PRVOPC 
,ILL_PRVREG 
,ILL_COPROC 
,ILL_BADSTK 
,ILL_BADIADDR 
};

enum { FPE_INTDIV=(1),
FPE_INTOVF 
,FPE_FLTDIV 
,FPE_FLTOVF 
,FPE_FLTUND 
,FPE_FLTRES 
,FPE_FLTINV 
,FPE_FLTSUB 
,FPE_FLTUNK=(14),
FPE_CONDTRAP 
};

enum { SEGV_MAPERR=(1),
SEGV_ACCERR 
,SEGV_BNDERR 
,SEGV_PKUERR 
,SEGV_ACCADI 
,SEGV_ADIDERR 
,SEGV_ADIPERR 
,SEGV_MTEAERR 
,SEGV_MTESERR 
,SEGV_CPERR 
};

enum { BUS_ADRALN=(1),
BUS_ADRERR 
,BUS_OBJERR 
,BUS_MCEERR_AR 
,BUS_MCEERR_AO 
};

enum { TRAP_BRKPT=(1),
TRAP_TRACE 
,TRAP_BRANCH 
,TRAP_HWBKPT 
,TRAP_UNK 
};

enum { CLD_EXITED=(1),
CLD_KILLED 
,CLD_DUMPED 
,CLD_TRAPPED 
,CLD_STOPPED 
,CLD_CONTINUED 
};

enum { POLL_IN=(1),
POLL_OUT 
,POLL_MSG 
,POLL_ERR 
,POLL_PRI 
,POLL_HUP 
};

struct anonymous_typeX45
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ44
{
int _pad[((64/sizeof(int))-4)];
int  _tid  ;
    struct {
        void (*_function)(union sigval );
        union pthread_attr_t*  _attribute  ;
    } _sigev_thread;
};

struct anonymous_typeX47
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ46
{
int _pad[((64/sizeof(int))-4)];
int  _tid  ;
    struct {
        void (*_function)(union sigval );
        union pthread_attr_t*  _attribute  ;
    } _sigev_thread;
};

struct sigevent
{
    union sigval  sigev_value  ;
    int sigev_signo;
    int sigev_notify;
    union {
        int _pad[((64/sizeof(int))-4)];
        int  _tid  ;
        struct {
            void (*_function)(union sigval );
            union pthread_attr_t*  _attribute  ;
        } _sigev_thread;
    } _sigev_un;
};

enum { SIGEV_SIGNAL=(0),
SIGEV_NONE 
,SIGEV_THREAD 
,SIGEV_THREAD_ID=(4)
};

union anonymous_typeZ48
{
void (*sa_handler)(int)  ;
void (*sa_sigaction)(int,struct anonymous_typeX19* ,void*);
};

union anonymous_typeZ49
{
void (*sa_handler)(int)  ;
void (*sa_sigaction)(int,struct anonymous_typeX19* ,void*);
};

struct sigaction
{
    union {
        void (*sa_handler)(int)  ;
        void (*sa_sigaction)(int,struct anonymous_typeX19* ,void*);
    } __sigaction_handler;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } sa_mask;
    int sa_flags;
    void (*sa_restorer)();
};

struct _fpx_sw_bytes
{
    unsigned int  magic1  ;
    unsigned int  extended_size  ;
    unsigned long  int  xstate_bv  ;
    unsigned int  xstate_size  ;
    unsigned int  __glibc_reserved1[7]  ;
};

struct _fpreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
};

struct _fpxreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
    unsigned short int __glibc_reserved1[3];
};

struct _xmmreg
{
    unsigned int  element[4]  ;
};

struct _fpstate
{
    unsigned short int  cwd  ;
    unsigned short int  swd  ;
    unsigned short int  ftw  ;
    unsigned short int  fop  ;
    unsigned long  int  rip  ;
    unsigned long  int  rdp  ;
    unsigned int  mxcsr  ;
    unsigned int  mxcr_mask  ;
    struct _fpxreg  _st[8]  ;
    struct _xmmreg  _xmm[16]  ;
    unsigned int  __glibc_reserved1[24]  ;
};

union anonymous_typeZ50
{
struct _fpstate*  fpstate  ;
unsigned long  int  __fpstate_word  ;
};

union anonymous_typeZ51
{
struct _fpstate*  fpstate  ;
unsigned long  int  __fpstate_word  ;
};

struct sigcontext
{
    unsigned long  int  r8  ;
    unsigned long  int  r9  ;
    unsigned long  int  r10  ;
    unsigned long  int  r11  ;
    unsigned long  int  r12  ;
    unsigned long  int  r13  ;
    unsigned long  int  r14  ;
    unsigned long  int  r15  ;
    unsigned long  int  rdi  ;
    unsigned long  int  rsi  ;
    unsigned long  int  rbp  ;
    unsigned long  int  rbx  ;
    unsigned long  int  rdx  ;
    unsigned long  int  rax  ;
    unsigned long  int  rcx  ;
    unsigned long  int  rsp  ;
    unsigned long  int  rip  ;
    unsigned long  int  eflags  ;
    unsigned short int cs;
    unsigned short int gs;
    unsigned short int fs;
    unsigned short int __pad0;
    unsigned long  int  err  ;
    unsigned long  int  trapno  ;
    unsigned long  int  oldmask  ;
    unsigned long  int  cr2  ;
    union {
        struct _fpstate*  fpstate  ;
        unsigned long  int  __fpstate_word  ;
    };
    unsigned long  int  __reserved1[8]  ;
};

struct _xsave_hdr
{
    unsigned long  int  xstate_bv  ;
    unsigned long  int  __glibc_reserved1[2]  ;
    unsigned long  int  __glibc_reserved2[5]  ;
};

struct _ymmh_state
{
    unsigned int  ymmh_space[64]  ;
};

struct _xstate
{
    struct _fpstate  fpstate  ;
    struct _xsave_hdr  xstate_hdr  ;
    struct _ymmh_state  ymmh  ;
};

struct anonymous_typeX52
{
    void* ss_sp;
    int ss_flags;
    unsigned long  ss_size  ;
};

typedef long long int  gregset_t[23]  ;

enum { REG_R8=(0),
REG_R9 
,REG_R10 
,REG_R11 
,REG_R12 
,REG_R13 
,REG_R14 
,REG_R15 
,REG_RDI 
,REG_RSI 
,REG_RBP 
,REG_RBX 
,REG_RDX 
,REG_RAX 
,REG_RCX 
,REG_RSP 
,REG_RIP 
,REG_EFL 
,REG_CSGSFS 
,REG_ERR 
,REG_TRAPNO 
,REG_OLDMASK 
,REG_CR2 
};

struct _libc_fpxreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
    unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
    unsigned int  element[4]  ;
};

struct _libc_fpstate
{
    unsigned short int  cwd  ;
    unsigned short int  swd  ;
    unsigned short int  ftw  ;
    unsigned short int  fop  ;
    unsigned long  int  rip  ;
    unsigned long  int  rdp  ;
    unsigned int  mxcsr  ;
    unsigned int  mxcr_mask  ;
    struct _libc_fpxreg  _st[8]  ;
    struct _libc_xmmreg  _xmm[16]  ;
    unsigned int  __glibc_reserved1[24]  ;
};

struct anonymous_typeX53
{
    long long int  gregs[23]  ;
    struct _libc_fpstate*  fpregs  ;
    unsigned long  long __reserved1[8];
};

struct ucontext_t
{
    unsigned long  int uc_flags;
    struct ucontext_t*  uc_link  ;
    struct {
        void* ss_sp;
        int ss_flags;
        unsigned long  ss_size  ;
    } uc_stack;
    struct {
        long long int  gregs[23]  ;
        struct _libc_fpstate*  fpregs  ;
        unsigned long  long __reserved1[8];
    } uc_mcontext;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } uc_sigmask;
    struct _libc_fpstate  __fpregs_mem  ;
    unsigned long long int __ssp[4];
};

enum { _PC_LINK_MAX 
,_PC_MAX_CANON 
,_PC_MAX_INPUT 
,_PC_NAME_MAX 
,_PC_PATH_MAX 
,_PC_PIPE_BUF 
,_PC_CHOWN_RESTRICTED 
,_PC_NO_TRUNC 
,_PC_VDISABLE 
,_PC_SYNC_IO 
,_PC_ASYNC_IO 
,_PC_PRIO_IO 
,_PC_SOCK_MAXBUF 
,_PC_FILESIZEBITS 
,_PC_REC_INCR_XFER_SIZE 
,_PC_REC_MAX_XFER_SIZE 
,_PC_REC_MIN_XFER_SIZE 
,_PC_REC_XFER_ALIGN 
,_PC_ALLOC_SIZE_MIN 
,_PC_SYMLINK_MAX 
,_PC_2_SYMLINKS 
};

enum { _SC_ARG_MAX 
,_SC_CHILD_MAX 
,_SC_CLK_TCK 
,_SC_NGROUPS_MAX 
,_SC_OPEN_MAX 
,_SC_STREAM_MAX 
,_SC_TZNAME_MAX 
,_SC_JOB_CONTROL 
,_SC_SAVED_IDS 
,_SC_REALTIME_SIGNALS 
,_SC_PRIORITY_SCHEDULING 
,_SC_TIMERS 
,_SC_ASYNCHRONOUS_IO 
,_SC_PRIORITIZED_IO 
,_SC_SYNCHRONIZED_IO 
,_SC_FSYNC 
,_SC_MAPPED_FILES 
,_SC_MEMLOCK 
,_SC_MEMLOCK_RANGE 
,_SC_MEMORY_PROTECTION 
,_SC_MESSAGE_PASSING 
,_SC_SEMAPHORES 
,_SC_SHARED_MEMORY_OBJECTS 
,_SC_AIO_LISTIO_MAX 
,_SC_AIO_MAX 
,_SC_AIO_PRIO_DELTA_MAX 
,_SC_DELAYTIMER_MAX 
,_SC_MQ_OPEN_MAX 
,_SC_MQ_PRIO_MAX 
,_SC_VERSION 
,_SC_PAGESIZE 
,_SC_RTSIG_MAX 
,_SC_SEM_NSEMS_MAX 
,_SC_SEM_VALUE_MAX 
,_SC_SIGQUEUE_MAX 
,_SC_TIMER_MAX 
,_SC_BC_BASE_MAX 
,_SC_BC_DIM_MAX 
,_SC_BC_SCALE_MAX 
,_SC_BC_STRING_MAX 
,_SC_COLL_WEIGHTS_MAX 
,_SC_EQUIV_CLASS_MAX 
,_SC_EXPR_NEST_MAX 
,_SC_LINE_MAX 
,_SC_RE_DUP_MAX 
,_SC_CHARCLASS_NAME_MAX 
,_SC_2_VERSION 
,_SC_2_C_BIND 
,_SC_2_C_DEV 
,_SC_2_FORT_DEV 
,_SC_2_FORT_RUN 
,_SC_2_SW_DEV 
,_SC_2_LOCALEDEF 
,_SC_PII 
,_SC_PII_XTI 
,_SC_PII_SOCKET 
,_SC_PII_INTERNET 
,_SC_PII_OSI 
,_SC_POLL 
,_SC_SELECT 
,_SC_UIO_MAXIOV 
,_SC_IOV_MAX=((60)),
_SC_PII_INTERNET_STREAM 
,_SC_PII_INTERNET_DGRAM 
,_SC_PII_OSI_COTS 
,_SC_PII_OSI_CLTS 
,_SC_PII_OSI_M 
,_SC_T_IOV_MAX 
,_SC_THREADS 
,_SC_THREAD_SAFE_FUNCTIONS 
,_SC_GETGR_R_SIZE_MAX 
,_SC_GETPW_R_SIZE_MAX 
,_SC_LOGIN_NAME_MAX 
,_SC_TTY_NAME_MAX 
,_SC_THREAD_DESTRUCTOR_ITERATIONS 
,_SC_THREAD_KEYS_MAX 
,_SC_THREAD_STACK_MIN 
,_SC_THREAD_THREADS_MAX 
,_SC_THREAD_ATTR_STACKADDR 
,_SC_THREAD_ATTR_STACKSIZE 
,_SC_THREAD_PRIORITY_SCHEDULING 
,_SC_THREAD_PRIO_INHERIT 
,_SC_THREAD_PRIO_PROTECT 
,_SC_THREAD_PROCESS_SHARED 
,_SC_NPROCESSORS_CONF 
,_SC_NPROCESSORS_ONLN 
,_SC_PHYS_PAGES 
,_SC_AVPHYS_PAGES 
,_SC_ATEXIT_MAX 
,_SC_PASS_MAX 
,_SC_XOPEN_VERSION 
,_SC_XOPEN_XCU_VERSION 
,_SC_XOPEN_UNIX 
,_SC_XOPEN_CRYPT 
,_SC_XOPEN_ENH_I18N 
,_SC_XOPEN_SHM 
,_SC_2_CHAR_TERM 
,_SC_2_C_VERSION 
,_SC_2_UPE 
,_SC_XOPEN_XPG2 
,_SC_XOPEN_XPG3 
,_SC_XOPEN_XPG4 
,_SC_CHAR_BIT 
,_SC_CHAR_MAX 
,_SC_CHAR_MIN 
,_SC_INT_MAX 
,_SC_INT_MIN 
,_SC_LONG_BIT 
,_SC_WORD_BIT 
,_SC_MB_LEN_MAX 
,_SC_NZERO 
,_SC_SSIZE_MAX 
,_SC_SCHAR_MAX 
,_SC_SCHAR_MIN 
,_SC_SHRT_MAX 
,_SC_SHRT_MIN 
,_SC_UCHAR_MAX 
,_SC_UINT_MAX 
,_SC_ULONG_MAX 
,_SC_USHRT_MAX 
,_SC_NL_ARGMAX 
,_SC_NL_LANGMAX 
,_SC_NL_MSGMAX 
,_SC_NL_NMAX 
,_SC_NL_SETMAX 
,_SC_NL_TEXTMAX 
,_SC_XBS5_ILP32_OFF32 
,_SC_XBS5_ILP32_OFFBIG 
,_SC_XBS5_LP64_OFF64 
,_SC_XBS5_LPBIG_OFFBIG 
,_SC_XOPEN_LEGACY 
,_SC_XOPEN_REALTIME 
,_SC_XOPEN_REALTIME_THREADS 
,_SC_ADVISORY_INFO 
,_SC_BARRIERS 
,_SC_BASE 
,_SC_C_LANG_SUPPORT 
,_SC_C_LANG_SUPPORT_R 
,_SC_CLOCK_SELECTION 
,_SC_CPUTIME 
,_SC_THREAD_CPUTIME 
,_SC_DEVICE_IO 
,_SC_DEVICE_SPECIFIC 
,_SC_DEVICE_SPECIFIC_R 
,_SC_FD_MGMT 
,_SC_FIFO 
,_SC_PIPE 
,_SC_FILE_ATTRIBUTES 
,_SC_FILE_LOCKING 
,_SC_FILE_SYSTEM 
,_SC_MONOTONIC_CLOCK 
,_SC_MULTI_PROCESS 
,_SC_SINGLE_PROCESS 
,_SC_NETWORKING 
,_SC_READER_WRITER_LOCKS 
,_SC_SPIN_LOCKS 
,_SC_REGEXP 
,_SC_REGEX_VERSION 
,_SC_SHELL 
,_SC_SIGNALS 
,_SC_SPAWN 
,_SC_SPORADIC_SERVER 
,_SC_THREAD_SPORADIC_SERVER 
,_SC_SYSTEM_DATABASE 
,_SC_SYSTEM_DATABASE_R 
,_SC_TIMEOUTS 
,_SC_TYPED_MEMORY_OBJECTS 
,_SC_USER_GROUPS 
,_SC_USER_GROUPS_R 
,_SC_2_PBS 
,_SC_2_PBS_ACCOUNTING 
,_SC_2_PBS_LOCATE 
,_SC_2_PBS_MESSAGE 
,_SC_2_PBS_TRACK 
,_SC_SYMLOOP_MAX 
,_SC_STREAMS 
,_SC_2_PBS_CHECKPOINT 
,_SC_V6_ILP32_OFF32 
,_SC_V6_ILP32_OFFBIG 
,_SC_V6_LP64_OFF64 
,_SC_V6_LPBIG_OFFBIG 
,_SC_HOST_NAME_MAX 
,_SC_TRACE 
,_SC_TRACE_EVENT_FILTER 
,_SC_TRACE_INHERIT 
,_SC_TRACE_LOG 
,_SC_LEVEL1_ICACHE_SIZE 
,_SC_LEVEL1_ICACHE_ASSOC 
,_SC_LEVEL1_ICACHE_LINESIZE 
,_SC_LEVEL1_DCACHE_SIZE 
,_SC_LEVEL1_DCACHE_ASSOC 
,_SC_LEVEL1_DCACHE_LINESIZE 
,_SC_LEVEL2_CACHE_SIZE 
,_SC_LEVEL2_CACHE_ASSOC 
,_SC_LEVEL2_CACHE_LINESIZE 
,_SC_LEVEL3_CACHE_SIZE 
,_SC_LEVEL3_CACHE_ASSOC 
,_SC_LEVEL3_CACHE_LINESIZE 
,_SC_LEVEL4_CACHE_SIZE 
,_SC_LEVEL4_CACHE_ASSOC 
,_SC_LEVEL4_CACHE_LINESIZE 
,_SC_IPV6=(((60)+125)+50),
_SC_RAW_SOCKETS 
,_SC_V7_ILP32_OFF32 
,_SC_V7_ILP32_OFFBIG 
,_SC_V7_LP64_OFF64 
,_SC_V7_LPBIG_OFFBIG 
,_SC_SS_REPL_MAX 
,_SC_TRACE_EVENT_NAME_MAX 
,_SC_TRACE_NAME_MAX 
,_SC_TRACE_SYS_MAX 
,_SC_TRACE_USER_EVENT_MAX 
,_SC_XOPEN_STREAMS 
,_SC_THREAD_ROBUST_PRIO_INHERIT 
,_SC_THREAD_ROBUST_PRIO_PROTECT 
,_SC_MINSIGSTKSZ 
,_SC_SIGSTKSZ 
};

enum { _CS_PATH 
,_CS_V6_WIDTH_RESTRICTED_ENVS 
,_CS_GNU_LIBC_VERSION 
,_CS_GNU_LIBPTHREAD_VERSION 
,_CS_V5_WIDTH_RESTRICTED_ENVS 
,_CS_V7_WIDTH_RESTRICTED_ENVS 
,_CS_LFS_CFLAGS=(1000),
_CS_LFS_LDFLAGS 
,_CS_LFS_LIBS 
,_CS_LFS_LINTFLAGS 
,_CS_LFS64_CFLAGS 
,_CS_LFS64_LDFLAGS 
,_CS_LFS64_LIBS 
,_CS_LFS64_LINTFLAGS 
,_CS_XBS5_ILP32_OFF32_CFLAGS=(1100),
_CS_XBS5_ILP32_OFF32_LDFLAGS 
,_CS_XBS5_ILP32_OFF32_LIBS 
,_CS_XBS5_ILP32_OFF32_LINTFLAGS 
,_CS_XBS5_ILP32_OFFBIG_CFLAGS 
,_CS_XBS5_ILP32_OFFBIG_LDFLAGS 
,_CS_XBS5_ILP32_OFFBIG_LIBS 
,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS 
,_CS_XBS5_LP64_OFF64_CFLAGS 
,_CS_XBS5_LP64_OFF64_LDFLAGS 
,_CS_XBS5_LP64_OFF64_LIBS 
,_CS_XBS5_LP64_OFF64_LINTFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_CFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_LIBS 
,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_CFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_LIBS 
,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_LIBS 
,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS 
,_CS_POSIX_V6_LP64_OFF64_CFLAGS 
,_CS_POSIX_V6_LP64_OFF64_LDFLAGS 
,_CS_POSIX_V6_LP64_OFF64_LIBS 
,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_CFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_LDFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_LIBS 
,_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_LIBS 
,_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS 
,_CS_POSIX_V7_LP64_OFF64_CFLAGS 
,_CS_POSIX_V7_LP64_OFF64_LDFLAGS 
,_CS_POSIX_V7_LP64_OFF64_LIBS 
,_CS_POSIX_V7_LP64_OFF64_LINTFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LIBS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS 
,_CS_V6_ENV 
,_CS_V7_ENV 
};

enum { SS_ONSTACK=(1),
SS_DISABLE 
};

struct sigstack
{
    void* ss_sp;
    int ss_onstack;
};

enum  __ns_sect { ns_s_qd=(0),
ns_s_zn=(0),
ns_s_an=(1),
ns_s_pr=(1),
ns_s_ns=(2),
ns_s_ud=(2),
ns_s_ar=(3),
ns_s_max=(4)
};

struct __ns_msg
{
    const unsigned char* _msg;
    const unsigned char** _eom;
    unsigned short int  _id  ;
    unsigned short int  _flags  ;
    unsigned short int  _counts[(4)]  ;
    const unsigned char* _sections[(4)];
    enum __ns_sect  _sect  ;
    int _rrnum;
    const unsigned char* _msg_ptr;
};

struct _ns_flagdata
{
    int mask;
    int shift;
};

struct __ns_rr
{
    char name[1025];
    unsigned short int  type  ;
    unsigned short int  rr_class  ;
    unsigned int  ttl  ;
    unsigned short int  rdlength  ;
    const unsigned char* rdata;
};

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

struct ns_tsig_key
{
    char name[1025];
    char alg[1025];
    unsigned char* data;
    int len;
};

struct ns_tcp_tsig_state
{
    int counter;
    struct dst_key* key;
    void* ctx;
    unsigned char sig[512];
    int siglen;
};

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
ns_t_tlsa=(52),
ns_t_smimea=(53),
ns_t_hip=(55),
ns_t_ninfo=(56),
ns_t_rkey=(57),
ns_t_talink=(58),
ns_t_cds=(59),
ns_t_cdnskey=(60),
ns_t_openpgpkey=(61),
ns_t_csync=(62),
ns_t_spf=(99),
ns_t_uinfo=(100),
ns_t_uid=(101),
ns_t_gid=(102),
ns_t_unspec=(103),
ns_t_nid=(104),
ns_t_l32=(105),
ns_t_l64=(106),
ns_t_lp=(107),
ns_t_eui48=(108),
ns_t_eui64=(109),
ns_t_tkey=(249),
ns_t_tsig=(250),
ns_t_ixfr=(251),
ns_t_axfr=(252),
ns_t_mailb=(253),
ns_t_maila=(254),
ns_t_any=(255),
ns_t_uri=(256),
ns_t_caa=(257),
ns_t_avc=(258),
ns_t_ta=(32768),
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

enum  __ns_cert_types { cert_t_pkix=(1),
cert_t_spki=(2),
cert_t_pgp=(3),
cert_t_url=(253),
cert_t_oid=(254)
};

struct anonymous_typeX54
{
    unsigned int id:16;
    unsigned int rd:1;
    unsigned int tc:1;
    unsigned int aa:1;
    unsigned int opcode:4;
    unsigned int qr:1;
    unsigned int rcode:4;
    unsigned int cd:1;
    unsigned int ad:1;
    unsigned int unused:1;
    unsigned int ra:1;
    unsigned int qdcount:16;
    unsigned int ancount:16;
    unsigned int nscount:16;
    unsigned int arcount:16;
};

union anonymous_typeZ57
{
unsigned short int tu_block;
short tu_code;
} __attribute__ ((__packed__)) ;

union anonymous_typeZ58
{
unsigned short int tu_block;
short tu_code;
} __attribute__ ((__packed__)) ;

struct anonymous_typeX56
{
    union {
        unsigned short int tu_block;
        short tu_code;
    } th_u3;
    char tu_data[0];
} __attribute__ ((__packed__)) ;

union anonymous_typeZ55
{
char tu_padding[3];
    struct {
        union {
            unsigned short int tu_block;
            short tu_code;
        } th_u3;
        char tu_data[0];
    } th_u2;
char tu_stuff[0];
} __attribute__ ((__packed__)) ;

union anonymous_typeZ61
{
unsigned short int tu_block;
short tu_code;
} __attribute__ ((__packed__)) ;

union anonymous_typeZ62
{
unsigned short int tu_block;
short tu_code;
} __attribute__ ((__packed__)) ;

struct anonymous_typeX60
{
    union {
        unsigned short int tu_block;
        short tu_code;
    } th_u3;
    char tu_data[0];
} __attribute__ ((__packed__)) ;

union anonymous_typeZ59
{
char tu_padding[3];
    struct {
        union {
            unsigned short int tu_block;
            short tu_code;
        } th_u3;
        char tu_data[0];
    } th_u2;
char tu_stuff[0];
} __attribute__ ((__packed__)) ;

struct tftphdr
{
    short th_opcode;
    union {
        char tu_padding[3];
        struct {
            union {
                unsigned short int tu_block;
                short tu_code;
            } th_u3;
            char tu_data[0];
        } th_u2;
        char tu_stuff[0];
    } th_u1;
} __attribute__ ((__packed__));

union anonymous_typeZ64
{
unsigned int __wch;
char __wchb[4];
};

union anonymous_typeZ65
{
unsigned int __wch;
char __wchb[4];
};

struct anonymous_typeX63
{
    int __count;
    union {
        unsigned int __wch;
        char __wchb[4];
    } __value;
};

struct _G_fpos_t
{
    long  int  __pos  ;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct _G_fpos64_t
{
    long  int  __pos  ;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker*  _markers  ;
    struct _IO_FILE*  _chain  ;
    int _fileno;
    int _flags2:24;
    char _short_backupbuf[1];
    long  int  _old_offset  ;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void*  _lock  ;
    long  int  _offset  ;
    struct _IO_codecvt*  _codecvt  ;
    struct _IO_wide_data*  _wide_data  ;
    struct _IO_FILE*  _freeres_list  ;
    void* _freeres_buf;
    struct _IO_FILE**  _prevchain  ;
    int _mode;
    int _unused3;
    unsigned long  int  _total_written  ;
    char _unused2[12*sizeof(int)-5*sizeof(void*)];
};

struct _IO_cookie_io_functions_t
{
    long  int (*(*read))(void*,char*,unsigned long )  ;
    long  int (*(*write))(void*,const char*,unsigned long )  ;
    int (*(*seek))(void*,long  int* ,int)  ;
    int (*(*close))(void*)  ;
};

struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};

struct anonymous_typeX66
{
    unsigned int  attr  ;
    int  chars[5]  ;
    int ext_color;
};

struct anonymous_typeX67
{
    short id;
    int x;
    int y;
    int z;
    unsigned int  bstate  ;
};

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
    struct pagenode*  page  ;
    void* usrptr;
    void (*forminit)(struct formnode* );
    void (*formterm)(struct formnode* );
    void (*fieldinit)(struct formnode* );
    void (*fieldterm)(struct formnode* );
};

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
    void (*menuinit)(struct tagMENU* )  ;
    void (*menuterm)(struct tagMENU* )  ;
    void (*iteminit)(struct tagMENU* )  ;
    void (*itemterm)(struct tagMENU* )  ;
    void* userptr;
    char* mark;
    int  opt  ;
    unsigned short int status;
};

union anonymous_typeZ68
{
unsigned int  __ispeed  ;
unsigned int  c_ispeed  ;
};

union anonymous_typeZ69
{
unsigned int  __ispeed  ;
unsigned int  c_ispeed  ;
};

union anonymous_typeZ70
{
unsigned int  __ospeed  ;
unsigned int  c_ospeed  ;
};

union anonymous_typeZ71
{
unsigned int  __ospeed  ;
unsigned int  c_ospeed  ;
};

struct termios
{
    unsigned int  c_iflag  ;
    unsigned int  c_oflag  ;
    unsigned int  c_cflag  ;
    unsigned int  c_lflag  ;
    unsigned char  c_line  ;
    unsigned char  c_cc[32]  ;
    union {
        unsigned int  __ispeed  ;
        unsigned int  c_ispeed  ;
    };
    union {
        unsigned int  __ospeed  ;
        unsigned int  c_ospeed  ;
    };
};

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

struct term
{
    struct termtype  type  ;
};

struct if_nameindex
{
    unsigned int if_index;
    char* if_name;
};

enum { IFF_UP=(0x1),
IFF_BROADCAST=(0x2),
IFF_DEBUG=(0x4),
IFF_LOOPBACK=(0x8),
IFF_POINTOPOINT=(0x10),
IFF_NOTRAILERS=(0x20),
IFF_RUNNING=(0x40),
IFF_NOARP=(0x80),
IFF_PROMISC=(0x100),
IFF_ALLMULTI=(0x200),
IFF_MASTER=(0x400),
IFF_SLAVE=(0x800),
IFF_MULTICAST=(0x1000),
IFF_PORTSEL=(0x2000),
IFF_AUTOMEDIA=(0x4000),
IFF_DYNAMIC=(0x8000)
};

union anonymous_typeZ72
{
struct sockaddr  ifu_broadaddr  ;
struct sockaddr  ifu_dstaddr  ;
};

union anonymous_typeZ73
{
struct sockaddr  ifu_broadaddr  ;
struct sockaddr  ifu_dstaddr  ;
};

struct ifaddr
{
    struct sockaddr  ifa_addr  ;
    union {
        struct sockaddr  ifu_broadaddr  ;
        struct sockaddr  ifu_dstaddr  ;
    } ifa_ifu;
    struct iface* ifa_ifp;
    struct ifaddr*  ifa_next  ;
};

struct ifmap
{
    unsigned long  int mem_start;
    unsigned long  int mem_end;
    unsigned short int base_addr;
    unsigned char irq;
    unsigned char dma;
    unsigned char port;
};

union anonymous_typeZ74
{
char ifrn_name[16];
};

union anonymous_typeZ75
{
char ifrn_name[16];
};

union anonymous_typeZ76
{
struct sockaddr  ifru_addr  ;
struct sockaddr  ifru_dstaddr  ;
struct sockaddr  ifru_broadaddr  ;
struct sockaddr  ifru_netmask  ;
struct sockaddr  ifru_hwaddr  ;
short int ifru_flags;
int ifru_ivalue;
int ifru_mtu;
struct ifmap  ifru_map  ;
char ifru_slave[16];
char ifru_newname[16];
char*  ifru_data  ;
};

union anonymous_typeZ77
{
struct sockaddr  ifru_addr  ;
struct sockaddr  ifru_dstaddr  ;
struct sockaddr  ifru_broadaddr  ;
struct sockaddr  ifru_netmask  ;
struct sockaddr  ifru_hwaddr  ;
short int ifru_flags;
int ifru_ivalue;
int ifru_mtu;
struct ifmap  ifru_map  ;
char ifru_slave[16];
char ifru_newname[16];
char*  ifru_data  ;
};

struct ifreq
{
    union {
        char ifrn_name[16];
    } ifr_ifrn;
    union {
        struct sockaddr  ifru_addr  ;
        struct sockaddr  ifru_dstaddr  ;
        struct sockaddr  ifru_broadaddr  ;
        struct sockaddr  ifru_netmask  ;
        struct sockaddr  ifru_hwaddr  ;
        short int ifru_flags;
        int ifru_ivalue;
        int ifru_mtu;
        struct ifmap  ifru_map  ;
        char ifru_slave[16];
        char ifru_newname[16];
        char*  ifru_data  ;
    } ifr_ifru;
};

union anonymous_typeZ78
{
char*  ifcu_buf  ;
struct ifreq*  ifcu_req  ;
};

union anonymous_typeZ79
{
char*  ifcu_buf  ;
struct ifreq*  ifcu_req  ;
};

struct ifconf
{
    int ifc_len;
    union {
        char*  ifcu_buf  ;
        struct ifreq*  ifcu_req  ;
    } ifc_ifcu;
};

struct winsize
{
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
};

typedef unsigned int  ext_accm[8]  ;

enum  NPmode { NPMODE_PASS 
,NPMODE_DROP 
,NPMODE_ERROR 
,NPMODE_QUEUE 
};

struct pppstat
{
    unsigned int  ppp_discards  ;
    unsigned int  ppp_ibytes  ;
    unsigned int  ppp_ioctects  ;
    unsigned int  ppp_ipackets  ;
    unsigned int  ppp_ierrors  ;
    unsigned int  ppp_ilqrs  ;
    unsigned int  ppp_obytes  ;
    unsigned int  ppp_ooctects  ;
    unsigned int  ppp_opackets  ;
    unsigned int  ppp_oerrors  ;
    unsigned int  ppp_olqrs  ;
};

struct vjstat
{
    unsigned int  vjs_packets  ;
    unsigned int  vjs_compressed  ;
    unsigned int  vjs_searches  ;
    unsigned int  vjs_misses  ;
    unsigned int  vjs_uncompressedin  ;
    unsigned int  vjs_compressedin  ;
    unsigned int  vjs_errorin  ;
    unsigned int  vjs_tossed  ;
};

struct compstat
{
    unsigned int  unc_bytes  ;
    unsigned int  unc_packets  ;
    unsigned int  comp_bytes  ;
    unsigned int  comp_packets  ;
    unsigned int  inc_bytes  ;
    unsigned int  inc_packets  ;
    unsigned int  in_count  ;
    unsigned int  bytes_out  ;
    double ratio;
};

struct ppp_stats
{
    struct pppstat  p  ;
    struct vjstat  vj  ;
};

struct ppp_comp_stats
{
    struct compstat  c  ;
    struct compstat  d  ;
};

struct ppp_idle
{
    long  xmit_idle  ;
    long  recv_idle  ;
};

struct ppp_idle32
{
    int  xmit_idle  ;
    int  recv_idle  ;
};

struct ppp_idle64
{
    long long  xmit_idle  ;
    long long  recv_idle  ;
};

struct npioctl
{
    int protocol;
    enum NPmode mode;
};

struct ppp_option_data
{
    unsigned char*  ptr  ;
    unsigned int  length  ;
    int transmit;
};

struct ifpppstatsreq
{
    struct ifreq  b  ;
    struct ppp_stats  stats  ;
};

struct ifpppcstatsreq
{
    struct ifreq  b  ;
    struct ppp_comp_stats  stats  ;
};

union anonymous_typeZ80
{
char ssu_name[14];
unsigned int  ssu_speed  ;
};

union anonymous_typeZ81
{
char ssu_name[14];
unsigned int  ssu_speed  ;
};

struct shaperconf
{
    unsigned short int  ss_cmd  ;
    union {
        char ssu_name[14];
        unsigned int  ssu_speed  ;
    } ss_u;
};

struct rtentry
{
    unsigned long  int rt_pad1;
    struct sockaddr  rt_dst  ;
    struct sockaddr  rt_gateway  ;
    struct sockaddr  rt_genmask  ;
    unsigned short int rt_flags;
    short int rt_pad2;
    unsigned long  int rt_pad3;
    unsigned char rt_tos;
    unsigned char rt_class;
    short int rt_pad4[3];
    short int rt_metric;
    char* rt_dev;
    unsigned long  int rt_mtu;
    unsigned long  int rt_window;
    unsigned short int rt_irtt;
};

struct in6_rtmsg
{
    struct in6_addr  rtmsg_dst  ;
    struct in6_addr  rtmsg_src  ;
    struct in6_addr  rtmsg_gateway  ;
    unsigned int  rtmsg_type  ;
    unsigned short int  rtmsg_dst_len  ;
    unsigned short int  rtmsg_src_len  ;
    unsigned int  rtmsg_metric  ;
    unsigned long  int rtmsg_info;
    unsigned int  rtmsg_flags  ;
    int rtmsg_ifindex;
};

struct ethhdr
{
    unsigned char h_dest[6];
    unsigned char h_source[6];
    unsigned short int  h_proto  ;
} __attribute__((packed));

struct ether_addr
{
    unsigned char  ether_addr_octet[6]  ;
} __attribute__ ((__packed__));

struct ether_header
{
    unsigned char  ether_dhost[6]  ;
    unsigned char  ether_shost[6]  ;
    unsigned short int  ether_type  ;
} __attribute__ ((__packed__));

struct arphdr
{
    unsigned short int ar_hrd;
    unsigned short int ar_pro;
    unsigned char ar_hln;
    unsigned char ar_pln;
    unsigned short int ar_op;
};

struct arpreq
{
    struct sockaddr  arp_pa  ;
    struct sockaddr  arp_ha  ;
    int arp_flags;
    struct sockaddr  arp_netmask  ;
    char arp_dev[16];
};

struct arpreq_old
{
    struct sockaddr  arp_pa  ;
    struct sockaddr  arp_ha  ;
    int arp_flags;
    struct sockaddr  arp_netmask  ;
};

struct arpd_request
{
    unsigned short int req;
    unsigned int  ip  ;
    unsigned long  int dev;
    unsigned long  int stamp;
    unsigned long  int updated;
    unsigned char ha[7];
};

struct ether_arp
{
    struct arphdr  ea_hdr  ;
    unsigned char  arp_sha[6]  ;
    unsigned char  arp_spa[4]  ;
    unsigned char  arp_tha[6]  ;
    unsigned char  arp_tpa[4]  ;
};

struct fddi_8022_1_hdr
{
    unsigned char  dsap  ;
    unsigned char  ssap  ;
    unsigned char  ctrl  ;
} __attribute__((packed));

struct fddi_8022_2_hdr
{
    unsigned char  dsap  ;
    unsigned char  ssap  ;
    unsigned char  ctrl_1  ;
    unsigned char  ctrl_2  ;
} __attribute__((packed));

struct fddi_snap_hdr
{
    unsigned char  dsap  ;
    unsigned char  ssap  ;
    unsigned char  ctrl  ;
    unsigned char  oui[3]  ;
    unsigned short int  ethertype  ;
} __attribute__((packed));

union anonymous_typeZ82
{
struct fddi_8022_1_hdr  llc_8022_1  ;
struct fddi_8022_2_hdr  llc_8022_2  ;
struct fddi_snap_hdr  llc_snap  ;
};

union anonymous_typeZ83
{
struct fddi_8022_1_hdr  llc_8022_1  ;
struct fddi_8022_2_hdr  llc_8022_2  ;
struct fddi_snap_hdr  llc_snap  ;
};

struct fddihdr
{
    unsigned char  fc  ;
    unsigned char  daddr[6]  ;
    unsigned char  saddr[6]  ;
    union {
        struct fddi_8022_1_hdr  llc_8022_1  ;
        struct fddi_8022_2_hdr  llc_8022_2  ;
        struct fddi_snap_hdr  llc_snap  ;
    } hdr;
} __attribute__((packed));

struct fddi_header
{
    unsigned char  fddi_fc  ;
    unsigned char  fddi_dhost[6]  ;
    unsigned char  fddi_shost[6]  ;
};

struct trh_hdr
{
    unsigned char  ac  ;
    unsigned char  fc  ;
    unsigned char  daddr[6]  ;
    unsigned char  saddr[6]  ;
    unsigned short int  rcf  ;
    unsigned short int  rseg[8]  ;
};

struct trllc
{
    unsigned char  dsap  ;
    unsigned char  ssap  ;
    unsigned char  llc  ;
    unsigned char  protid[3]  ;
    unsigned short int  ethertype  ;
};

struct tr_statistics
{
    unsigned long  int rx_packets;
    unsigned long  int tx_packets;
    unsigned long  int rx_bytes;
    unsigned long  int tx_bytes;
    unsigned long  int rx_errors;
    unsigned long  int tx_errors;
    unsigned long  int rx_dropped;
    unsigned long  int tx_dropped;
    unsigned long  int multicast;
    unsigned long  int transmit_collision;
    unsigned long  int line_errors;
    unsigned long  int internal_errors;
    unsigned long  int burst_errors;
    unsigned long  int A_C_errors;
    unsigned long  int abort_delimiters;
    unsigned long  int lost_frames;
    unsigned long  int recv_congest_count;
    unsigned long  int frame_copied_errors;
    unsigned long  int frequency_errors;
    unsigned long  int token_errors;
    unsigned long  int dummy1;
};

struct trn_hdr
{
    unsigned char  trn_ac  ;
    unsigned char  trn_fc  ;
    unsigned char  trn_dhost[6]  ;
    unsigned char  trn_shost[6]  ;
    unsigned short int  trn_rcf  ;
    unsigned short int  trn_rseg[8]  ;
};

struct sockaddr_ash
{
    unsigned short int  sash_family  ;
    int sash_ifindex;
    unsigned char sash_channel;
    unsigned int sash_plen;
    unsigned char sash_prefix[16];
} __attribute__ ((__may_alias__)) ;

struct anonymous_typeX85
{
    unsigned short int  ss_family  ;
    char __data[128-sizeof(unsigned short int)];
};

union anonymous_typeZ84
{
    struct {
        unsigned short int  ss_family  ;
        char __data[128-sizeof(unsigned short int)];
    };
void* __align;
};

struct anonymous_typeX87
{
    unsigned short int  ss_family  ;
    char __data[128-sizeof(unsigned short int)];
};

union anonymous_typeZ86
{
    struct {
        unsigned short int  ss_family  ;
        char __data[128-sizeof(unsigned short int)];
    };
void* __align;
};

struct __kernel_sockaddr_storage
{
    union {
        struct {
            unsigned short int  ss_family  ;
            char __data[128-sizeof(unsigned short int)];
        };
        void* __align;
    };
};

struct atalk_addr
{
    unsigned short int  s_net  ;
    unsigned char  s_node  ;
};

struct sockaddr_at
{
    unsigned short int  sat_family  ;
    unsigned char  sat_port  ;
    struct atalk_addr  sat_addr  ;
    char sat_zero[8];
};

struct atalk_netrange
{
    unsigned char  nr_phase  ;
    unsigned short int  nr_firstnet  ;
    unsigned short int  nr_lastnet  ;
};

struct anonymous_typeX88
{
    char ax25_call[7];
};

struct sockaddr_ax25
{
    unsigned short int  sax25_family  ;
    struct {
        char ax25_call[7];
    } sax25_call;
    int sax25_ndigis;
};

struct full_sockaddr_ax25
{
    struct sockaddr_ax25  fsa_ax25  ;
    struct {
        char ax25_call[7];
    } fsa_digipeater;
};

struct ax25_routes_struct
{
    struct {
        char ax25_call[7];
    } port_addr;
    struct {
        char ax25_call[7];
    } dest_addr;
    unsigned char digi_count;
    struct {
        char ax25_call[7];
    } digi_addr;
};

struct ax25_ctl_struct
{
    struct {
        char ax25_call[7];
    } port_addr;
    struct {
        char ax25_call[7];
    } source_addr;
    struct {
        char ax25_call[7];
    } dest_addr;
    unsigned int cmd;
    unsigned long  int arg;
    unsigned char digi_count;
    struct {
        char ax25_call[7];
    } digi_addr;
};

struct ax25_info_struct
{
    unsigned int n2;
    unsigned int n2count;
    unsigned int t1;
    unsigned int t1timer;
    unsigned int t2;
    unsigned int t2timer;
    unsigned int t3;
    unsigned int t3timer;
    unsigned int idle;
    unsigned int idletimer;
    unsigned int state;
    unsigned int rcv_q;
    unsigned int snd_q;
};

struct ax25_fwd_struct
{
    struct {
        char ax25_call[7];
    } port_from;
    struct {
        char ax25_call[7];
    } port_to;
};

struct ax25_route_opt_struct
{
    struct {
        char ax25_call[7];
    } port_addr;
    struct {
        char ax25_call[7];
    } dest_addr;
    int cmd;
    int arg;
};

struct ax25_bpqaddr_struct
{
    char dev[16];
    struct {
        char ax25_call[7];
    } addr;
};

struct ax25_parms_struct
{
    struct {
        char ax25_call[7];
    } port_addr;
    unsigned short int values[20];
};

struct ec_addr
{
    unsigned char station;
    unsigned char net;
};

struct sockaddr_ec
{
    unsigned short int  sec_family  ;
    unsigned char port;
    unsigned char cb;
    unsigned char type;
    struct ec_addr  addr  ;
    unsigned long  int cookie;
} __attribute__ ((__may_alias__)) ;

struct sockaddr_ipx
{
    unsigned short int  sipx_family  ;
    unsigned short int  sipx_port  ;
    unsigned int  sipx_network  ;
    unsigned char sipx_node[6];
    unsigned char  sipx_type  ;
    unsigned char sipx_zero;
};

struct ipx_route_definition
{
    unsigned long  int ipx_network;
    unsigned long  int ipx_router_network;
    unsigned char ipx_router_node[6];
};

struct ipx_interface_definition
{
    unsigned long  int ipx_network;
    unsigned char ipx_device[16];
    unsigned char ipx_dlink_type;
    unsigned char ipx_special;
    unsigned char ipx_node[6];
};

struct ipx_config_data
{
    unsigned char ipxcfg_auto_select_primary;
    unsigned char ipxcfg_auto_create_interfaces;
};

struct ipx_route_def
{
    unsigned long  int ipx_network;
    unsigned long  int ipx_router_network;
    unsigned char ipx_router_node[6];
    unsigned char ipx_device[16];
    unsigned short int ipx_flags;
};

struct sockaddr_iucv
{
    unsigned short int  siucv_family  ;
    unsigned short int siucv_port;
    unsigned int siucv_addr;
    char siucv_nodeid[8];
    char siucv_user_id[8];
    char siucv_name[8];
} __attribute__ ((__may_alias__)) ;

struct nr_route_struct
{
    int type;
    struct {
        char ax25_call[7];
    } callsign;
    char device[16];
    unsigned int quality;
    char mnemonic[7];
    struct {
        char ax25_call[7];
    } neighbour;
    unsigned int obs_count;
    unsigned int ndigis;
    struct {
        char ax25_call[7];
    } digipeaters;
};

struct nr_parms_struct
{
    unsigned int quality;
    unsigned int obs_count;
    unsigned int ttl;
    unsigned int timeout;
    unsigned int ack_delay;
    unsigned int busy_delay;
    unsigned int tries;
    unsigned int window;
    unsigned int paclen;
};

struct nr_ctl_struct
{
    unsigned char index;
    unsigned char id;
    unsigned int cmd;
    unsigned long  int arg;
};

struct anonymous_typeX89
{
    char rose_addr[5];
};

struct sockaddr_rose
{
    unsigned short int  srose_family  ;
    struct {
        char rose_addr[5];
    } srose_addr;
    struct {
        char ax25_call[7];
    } srose_call;
    int srose_ndigis;
    struct {
        char ax25_call[7];
    } srose_digi;
};

struct full_sockaddr_rose
{
    unsigned short int  srose_family  ;
    struct {
        char rose_addr[5];
    } srose_addr;
    struct {
        char ax25_call[7];
    } srose_call;
    unsigned int srose_ndigis;
    struct {
        char ax25_call[7];
    } srose_digis;
};

struct rose_route_struct
{
    struct {
        char rose_addr[5];
    } address;
    unsigned short int mask;
    struct {
        char ax25_call[7];
    } neighbour;
    char device[16];
    unsigned char ndigis;
    struct {
        char ax25_call[7];
    } digipeaters;
};

struct rose_cause_struct
{
    unsigned char cause;
    unsigned char diagnostic;
};

struct rose_facilities_struct
{
    struct {
        char rose_addr[5];
    } source_addr;
    struct {
        char rose_addr[5];
    } dest_addr;
    struct {
        char ax25_call[7];
    } source_call;
    struct {
        char ax25_call[7];
    } dest_call;
    unsigned char source_ndigis;
    unsigned char dest_ndigis;
    struct {
        char ax25_call[7];
    } source_digis;
    struct {
        char ax25_call[7];
    } dest_digis;
    unsigned int rand;
    struct {
        char rose_addr[5];
    } fail_addr;
    struct {
        char ax25_call[7];
    } fail_call;
};

struct netinfo
{
    struct sockaddr  rip_dst  ;
    int rip_metric;
};

union anonymous_typeZ90
{
struct netinfo  ru_nets[1]  ;
char ru_tracefile[1];
};

union anonymous_typeZ91
{
struct netinfo  ru_nets[1]  ;
char ru_tracefile[1];
};

struct rip
{
    unsigned char rip_cmd;
    unsigned char rip_vers;
    unsigned char rip_res1[2];
    union {
        struct netinfo  ru_nets[1]  ;
        char ru_tracefile[1];
    } ripun;
};

struct outmp
{
    char out_line[8];
    char out_name[8];
    int  out_time  ;
};

struct whod
{
    char wd_vers;
    char wd_type;
    char wd_pad[2];
    int wd_sendtime;
    int wd_recvtime;
    char wd_hostname[32];
    int wd_loadav[3];
    int wd_boottime;
    struct whoent {
        struct outmp  we_utmp  ;
        int we_idle;
    } wd_we;
};

struct anonymous_typeX92
{
    unsigned char vers;
    unsigned char type;
    unsigned char answer;
    unsigned char pad;
    unsigned int  id_num  ;
    struct osockaddr  addr  ;
    struct osockaddr  ctl_addr  ;
    int  pid  ;
    char l_name[12];
    char r_name[12];
    char r_tty[16];
};

struct anonymous_typeX93
{
    unsigned char vers;
    unsigned char type;
    unsigned char answer;
    unsigned char pad;
    unsigned int  id_num  ;
    struct osockaddr  addr  ;
};

struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};

enum  __itimer_which { ITIMER_REAL=(0),
ITIMER_VIRTUAL=(1),
ITIMER_PROF=(2)
};

struct itimerval
{
    struct timeval  it_interval  ;
    struct timeval  it_value  ;
};

union anonymous_typeZ94
{
struct timeval  tspu_time  ;
char tspu_hopcnt;
};

union anonymous_typeZ95
{
struct timeval  tspu_time  ;
char tspu_hopcnt;
};

struct tsp
{
    unsigned char tsp_type;
    unsigned char tsp_vers;
    unsigned short int tsp_seq;
    union {
        struct timeval  tspu_time  ;
        char tspu_hopcnt;
    } tsp_u;
    char tsp_name[64];
};

struct rpcent
{
    char* r_name;
    char** r_aliases;
    int r_number;
};

enum { _ISupper=(((((0)<8)?(((1<<(0))<<8)):(((1<<(0))>>8))))),
_ISlower=(((((1)<8)?(((1<<(1))<<8)):(((1<<(1))>>8))))),
_ISalpha=(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))),
_ISdigit=(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))),
_ISxdigit=(((((4)<8)?(((1<<(4))<<8)):(((1<<(4))>>8))))),
_ISspace=(((((5)<8)?(((1<<(5))<<8)):(((1<<(5))>>8))))),
_ISprint=(((((6)<8)?(((1<<(6))<<8)):(((1<<(6))>>8))))),
_ISgraph=(((((7)<8)?(((1<<(7))<<8)):(((1<<(7))>>8))))),
_ISblank=(((((8)<8)?(((1<<(8))<<8)):(((1<<(8))>>8))))),
_IScntrl=(((((9)<8)?(((1<<(9))<<8)):(((1<<(9))>>8))))),
_ISpunct=(((((10)<8)?(((1<<(10))<<8)):(((1<<(10))>>8))))),
_ISalnum=(((((11)<8)?(((1<<(11))<<8)):(((1<<(11))>>8)))))
};

struct _keymap_entry
{
    char type;
    int (*(*function))(int,int)  ;
};

typedef struct _keymap_entry  KEYMAP_ENTRY_ARRAY[257]  ;

enum  undo_code { UNDO_DELETE 
,UNDO_INSERT 
,UNDO_BEGIN 
,UNDO_END 
};

struct undo_list
{
    struct undo_list*  next  ;
    int start;
    int end;
    char* text;
    enum undo_code what;
};

struct _funmap
{
    const char* name;
    int (*(*function))(int,int)  ;
};

struct readline_state
{
    int point;
    int end;
    int mark;
    int buflen;
    char* buffer;
    struct undo_list*  ul  ;
    char* prompt;
    int rlstate;
    int done;
    struct _keymap_entry*  kmap  ;
    int (*(*lastfunc))(int,int)  ;
    int insmode;
    int edmode;
    char* kseq;
    int kseqlen;
    int pendingin;
    struct _IO_FILE*  inf  ;
    struct _IO_FILE*  outf  ;
    char* macro;
    int catchsigs;
    int catchsigwinch;
    char* (*(*entryfunc))(const char*,int)  ;
    char* (*(*menuentryfunc))(const char*,int)  ;
    int (*(*ignorefunc))(char**)  ;
    char** (*(*attemptfunc))(const char*,int,int)  ;
    const char* wordbreakchars;
    char reserved[64];
};

struct timex
{
    unsigned int modes;
    long  int  offset  ;
    long  int  freq  ;
    long  int  maxerror  ;
    long  int  esterror  ;
    int status;
    long  int  constant  ;
    long  int  precision  ;
    long  int  tolerance  ;
    struct timeval  time  ;
    long  int  tick  ;
    long  int  ppsfreq  ;
    long  int  jitter  ;
    int shift;
    long  int  stabil  ;
    long  int  jitcnt  ;
    long  int  calcnt  ;
    long  int  errcnt  ;
    long  int  stbcnt  ;
    int tai;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
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
    long  int tm_gmtoff;
    const char* tm_zone;
};

struct itimerspec
{
    struct timespec  it_interval  ;
    struct timespec  it_value  ;
};

struct _hist_entry
{
    char* line;
    char* timestamp;
    void*  data  ;
};

struct _hist_state
{
    struct _hist_entry**  entries  ;
    int offset;
    int length;
    int size;
    int flags;
};

struct anonymous_typeX96
{
    long  int quot;
    long  int rem;
};

struct anonymous_typeX97
{
    int quot;
    int rem;
};

struct anonymous_typeX98
{
    long  int quot;
    long  int rem;
};

struct anonymous_typeX99
{
    long long int quot;
    long long int rem;
};

struct random_data
{
    int*  fptr  ;
    int*  rptr  ;
    int*  state  ;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int*  end_ptr  ;
};

struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};

struct ossl_dispatch_st
{
    int function_id;
    void (*function)();
};

struct ossl_item_st
{
    unsigned int id;
    void* ptr;
};

struct ossl_algorithm_st
{
    const char* algorithm_names;
    const char* property_definition;
    const struct ossl_dispatch_st*  implementation  ;
    const char* algorithm_description;
};

struct ossl_param_st
{
    const char* key;
    unsigned int data_type;
    void* data;
    unsigned long  data_size  ;
    unsigned long  return_size  ;
};

struct anonymous_typeX100
{
    int dummy;
};

struct crypto_ex_data_st
{
    struct ossl_lib_ctx_st*  ctx  ;
    struct stack_st_void* sk;
};

struct crypto_threadid_st
{
    int dummy;
};

struct sched_attr
{
    unsigned int  size  ;
    unsigned int  sched_policy  ;
    unsigned long  long  sched_flags  ;
    int  sched_nice  ;
    unsigned int  sched_priority  ;
    unsigned long  long  sched_runtime  ;
    unsigned long  long  sched_deadline  ;
    unsigned long  long  sched_period  ;
    unsigned int  sched_util_min  ;
    unsigned int  sched_util_max  ;
};

struct sched_param
{
    int sched_priority;
};

struct anonymous_typeX101
{
    unsigned long  int  __bits[1024/(8*sizeof(unsigned long  int ))]  ;
};

typedef long  int __jmp_buf[8];

struct __jmp_buf_tag
{
    long  int  __jmpbuf[8]  ;
    int __mask_was_saved;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } __saved_mask;
};

enum { PTHREAD_CREATE_JOINABLE 
,PTHREAD_CREATE_DETACHED 
};

enum { PTHREAD_MUTEX_TIMED_NP 
,PTHREAD_MUTEX_RECURSIVE_NP 
,PTHREAD_MUTEX_ERRORCHECK_NP 
,PTHREAD_MUTEX_ADAPTIVE_NP 
,PTHREAD_MUTEX_NORMAL=((0)),
PTHREAD_MUTEX_RECURSIVE=((1)),
PTHREAD_MUTEX_ERRORCHECK=((2)),
PTHREAD_MUTEX_DEFAULT=(((0))),
PTHREAD_MUTEX_FAST_NP=((0))
};

enum { PTHREAD_MUTEX_STALLED 
,PTHREAD_MUTEX_STALLED_NP=((0)),
PTHREAD_MUTEX_ROBUST 
,PTHREAD_MUTEX_ROBUST_NP=(((0)+1))
};

enum { PTHREAD_PRIO_NONE 
,PTHREAD_PRIO_INHERIT 
,PTHREAD_PRIO_PROTECT 
};

enum { PTHREAD_RWLOCK_PREFER_READER_NP 
,PTHREAD_RWLOCK_PREFER_WRITER_NP 
,PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP 
,PTHREAD_RWLOCK_DEFAULT_NP=((0))
};

enum { PTHREAD_INHERIT_SCHED 
,PTHREAD_EXPLICIT_SCHED 
};

enum { PTHREAD_SCOPE_SYSTEM 
,PTHREAD_SCOPE_PROCESS 
};

enum { PTHREAD_PROCESS_PRIVATE 
,PTHREAD_PROCESS_SHARED 
};

struct _pthread_cleanup_buffer
{
    void (*__routine)(void*);
    void* __arg;
    int __canceltype;
    struct _pthread_cleanup_buffer*  __prev  ;
};

enum { PTHREAD_CANCEL_ENABLE 
,PTHREAD_CANCEL_DISABLE 
};

enum { PTHREAD_CANCEL_DEFERRED 
,PTHREAD_CANCEL_ASYNCHRONOUS 
};

struct __cancel_jmp_buf_tag
{
    long  int  __cancel_jmp_buf[8]  ;
    int __mask_was_saved;
};

struct anonymous_typeX102
{
    struct __cancel_jmp_buf_tag  __cancel_jmp_buf[1]  ;
    void* __pad[4];
};

struct __pthread_cleanup_frame
{
    void (*__cancel_routine)(void*);
    void* __cancel_arg;
    int __do_it;
    int __cancel_type;
};

struct bio_dgram_sctp_sndinfo
{
    unsigned short int  snd_sid  ;
    unsigned short int  snd_flags  ;
    unsigned int  snd_ppid  ;
    unsigned int  snd_context  ;
};

struct bio_dgram_sctp_rcvinfo
{
    unsigned short int  rcv_sid  ;
    unsigned short int  rcv_ssn  ;
    unsigned short int  rcv_flags  ;
    unsigned int  rcv_ppid  ;
    unsigned int  rcv_tsn  ;
    unsigned int  rcv_cumtsn  ;
    unsigned int  rcv_context  ;
};

struct bio_dgram_sctp_prinfo
{
    unsigned short int  pr_policy  ;
    unsigned int  pr_value  ;
};

struct bio_msg_st
{
    void* data;
    unsigned long  data_len  ;
    union bio_addr_st*  peer  ;
    union bio_addr_st*  local  ;
    unsigned long  int  flags  ;
};

struct bio_mmsg_cb_args_st
{
    struct bio_msg_st*  msg  ;
    unsigned long  stride  ;
    unsigned long  num_msg  ;
    unsigned long  int  flags  ;
    unsigned long*  msgs_processed  ;
};

union anonymous_typeZ103
{
int fd;
void* custom;
unsigned long  int  custom_ui  ;
struct ssl_st*  ssl  ;
};

union anonymous_typeZ104
{
int fd;
void* custom;
unsigned long  int  custom_ui  ;
struct ssl_st*  ssl  ;
};

struct bio_poll_descriptor_st
{
    unsigned int  type  ;
    union {
        int fd;
        void* custom;
        unsigned long  int  custom_ui  ;
        struct ssl_st*  ssl  ;
    } value;
};

enum  BIO_hostserv_priorities { BIO_PARSE_PRIO_HOST 
,BIO_PARSE_PRIO_SERV 
};

enum  BIO_lookup_type { BIO_LOOKUP_CLIENT 
,BIO_LOOKUP_SERVER 
};

union BIO_sock_info_u
{
union bio_addr_st*  addr  ;
};

enum  BIO_sock_info_type { BIO_SOCK_INFO_ADDRESS 
};

struct buf_mem_st
{
    unsigned long  length  ;
    char* data;
    unsigned long  max  ;
    unsigned long  int flags;
};

struct asn1_string_st
{
    int length;
    int type;
    unsigned char* data;
    long flags;
};

struct ASN1_ENCODING_st
{
    unsigned char* enc;
    long len;
    int modified;
};

struct asn1_string_table_st
{
    int nid;
    long minsize;
    long maxsize;
    unsigned long  int mask;
    unsigned long  int flags;
};

union anonymous_typeZ105
{
char* ptr;
int  boolean  ;
struct asn1_string_st*  asn1_string  ;
struct asn1_object_st*  object  ;
struct asn1_string_st*  integer  ;
struct asn1_string_st*  enumerated  ;
struct asn1_string_st*  bit_string  ;
struct asn1_string_st*  octet_string  ;
struct asn1_string_st*  printablestring  ;
struct asn1_string_st*  t61string  ;
struct asn1_string_st*  ia5string  ;
struct asn1_string_st*  generalstring  ;
struct asn1_string_st*  bmpstring  ;
struct asn1_string_st*  universalstring  ;
struct asn1_string_st*  utctime  ;
struct asn1_string_st*  generalizedtime  ;
struct asn1_string_st*  visiblestring  ;
struct asn1_string_st*  utf8string  ;
struct asn1_string_st*  set  ;
struct asn1_string_st*  sequence  ;
struct ASN1_VALUE_st*  asn1_value  ;
};

union anonymous_typeZ106
{
char* ptr;
int  boolean  ;
struct asn1_string_st*  asn1_string  ;
struct asn1_object_st*  object  ;
struct asn1_string_st*  integer  ;
struct asn1_string_st*  enumerated  ;
struct asn1_string_st*  bit_string  ;
struct asn1_string_st*  octet_string  ;
struct asn1_string_st*  printablestring  ;
struct asn1_string_st*  t61string  ;
struct asn1_string_st*  ia5string  ;
struct asn1_string_st*  generalstring  ;
struct asn1_string_st*  bmpstring  ;
struct asn1_string_st*  universalstring  ;
struct asn1_string_st*  utctime  ;
struct asn1_string_st*  generalizedtime  ;
struct asn1_string_st*  visiblestring  ;
struct asn1_string_st*  utf8string  ;
struct asn1_string_st*  set  ;
struct asn1_string_st*  sequence  ;
struct ASN1_VALUE_st*  asn1_value  ;
};

struct asn1_type_st
{
    int type;
    union {
        char* ptr;
        int  boolean  ;
        struct asn1_string_st*  asn1_string  ;
        struct asn1_object_st*  object  ;
        struct asn1_string_st*  integer  ;
        struct asn1_string_st*  enumerated  ;
        struct asn1_string_st*  bit_string  ;
        struct asn1_string_st*  octet_string  ;
        struct asn1_string_st*  printablestring  ;
        struct asn1_string_st*  t61string  ;
        struct asn1_string_st*  ia5string  ;
        struct asn1_string_st*  generalstring  ;
        struct asn1_string_st*  bmpstring  ;
        struct asn1_string_st*  universalstring  ;
        struct asn1_string_st*  utctime  ;
        struct asn1_string_st*  generalizedtime  ;
        struct asn1_string_st*  visiblestring  ;
        struct asn1_string_st*  utf8string  ;
        struct asn1_string_st*  set  ;
        struct asn1_string_st*  sequence  ;
        struct ASN1_VALUE_st*  asn1_value  ;
    } value;
};

struct BIT_STRING_BITNAME_st
{
    int bitnum;
    const char* lname;
    const char* sname;
};

struct obj_name_st
{
    int type;
    int alias;
    const char* name;
    const char* data;
};

struct anonymous_typeX107
{
    unsigned char* out;
    const unsigned char* inp;
    unsigned long  len  ;
    unsigned int interleave;
};

struct evp_cipher_info_st
{
    const struct evp_cipher_st*  cipher  ;
    unsigned char iv[16];
};

enum  anonymous_typeY107 { POINT_CONVERSION_COMPRESSED=(2),
POINT_CONVERSION_UNCOMPRESSED=(4),
POINT_CONVERSION_HYBRID=(6)
};

struct anonymous_typeX108
{
    int nid;
    const char* comment;
};

struct rsa_pss_params_st
{
    struct X509_algor_st*  hashAlgorithm  ;
    struct X509_algor_st*  maskGenAlgorithm  ;
    struct asn1_string_st*  saltLength  ;
    struct asn1_string_st*  trailerField  ;
    struct X509_algor_st*  maskHash  ;
};

struct rsa_oaep_params_st
{
    struct X509_algor_st*  hashFunc  ;
    struct X509_algor_st*  maskGenFunc  ;
    struct X509_algor_st*  pSourceFunc  ;
    struct X509_algor_st*  maskHash  ;
};

struct SHAstate_st
{
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    unsigned int num;
};

struct SHA256state_st
{
    unsigned int h[8];
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    unsigned int num;
    unsigned int md_len;
};

union anonymous_typeZ109
{
unsigned long  long d[16];
unsigned char p[(16*8)];
};

union anonymous_typeZ110
{
unsigned long  long d[16];
unsigned char p[(16*8)];
};

struct SHA512state_st
{
    unsigned long  long h[8];
    unsigned long  long Nl;
    unsigned long  long Nh;
    union {
        unsigned long  long d[16];
        unsigned char p[(16*8)];
    } u;
    unsigned int num;
    unsigned int md_len;
};

struct X509_algor_st
{
    struct asn1_object_st*  algorithm  ;
    struct asn1_type_st*  parameter  ;
};

struct X509_val_st
{
    struct asn1_string_st*  notBefore  ;
    struct asn1_string_st*  notAfter  ;
};

struct private_key_st
{
    int version;
    struct X509_algor_st*  enc_algor  ;
    struct asn1_string_st*  enc_pkey  ;
    struct evp_pkey_st*  dec_pkey  ;
    int key_length;
    char* key_data;
    int key_free;
    struct evp_cipher_info_st  cipher  ;
};

struct X509_info_st
{
    struct x509_st*  x509  ;
    struct X509_crl_st*  crl  ;
    struct private_key_st*  x_pkey  ;
    struct evp_cipher_info_st  enc_cipher  ;
    int enc_len;
    char* enc_data;
};

struct Netscape_spkac_st
{
    struct X509_pubkey_st*  pubkey  ;
    struct asn1_string_st*  challenge  ;
};

struct Netscape_spki_st
{
    struct Netscape_spkac_st*  spkac  ;
    struct X509_algor_st  sig_algor  ;
    struct asn1_string_st*  signature  ;
};

struct Netscape_certificate_sequence
{
    struct asn1_object_st*  type  ;
    struct stack_st_X509*  certs  ;
};

struct PBEPARAM_st
{
    struct asn1_string_st*  salt  ;
    struct asn1_string_st*  iter  ;
};

struct PBE2PARAM_st
{
    struct X509_algor_st*  keyfunc  ;
    struct X509_algor_st*  encryption  ;
};

struct PBKDF2PARAM_st
{
    struct asn1_type_st*  salt  ;
    struct asn1_string_st*  iter  ;
    struct asn1_string_st*  keylength  ;
    struct X509_algor_st*  prf  ;
};

struct anonymous_typeX111
{
    struct X509_algor_st*  keyDerivationFunc  ;
    struct X509_algor_st*  messageAuthScheme  ;
};

struct SCRYPT_PARAMS_st
{
    struct asn1_string_st*  salt  ;
    struct asn1_string_st*  costParameter  ;
    struct asn1_string_st*  blockSize  ;
    struct asn1_string_st*  parallelizationParameter  ;
    struct asn1_string_st*  keyLength  ;
};

struct lhash_st_OPENSSL_STRING
{
    union lh_OPENSSL_STRING_dummy {
        void* d1;
        unsigned long  int d2;
        int d3;
    } dummy;
};

struct lhash_st_OPENSSL_CSTRING
{
    union lh_OPENSSL_CSTRING_dummy {
        void* d1;
        unsigned long  int d2;
        int d3;
    } dummy;
};

enum  anonymous_typeY111 { X509_LU_NONE=(0),
X509_LU_X509 
,X509_LU_CRL 
};

struct x509_trust_st
{
    int trust;
    int flags;
    int (*check_trust)(struct x509_trust_st* ,struct x509_st* ,int);
    char* name;
    int arg1;
    void* arg2;
};

struct PKCS7_CTX_st
{
    struct ossl_lib_ctx_st*  libctx  ;
    char* propq;
};

struct pkcs7_issuer_and_serial_st
{
    struct X509_name_st*  issuer  ;
    struct asn1_string_st*  serial  ;
};

struct pkcs7_signer_info_st
{
    struct asn1_string_st*  version  ;
    struct pkcs7_issuer_and_serial_st*  issuer_and_serial  ;
    struct X509_algor_st*  digest_alg  ;
    struct stack_st_X509_ATTRIBUTE*  auth_attr  ;
    struct X509_algor_st*  digest_enc_alg  ;
    struct asn1_string_st*  enc_digest  ;
    struct stack_st_X509_ATTRIBUTE*  unauth_attr  ;
    struct evp_pkey_st*  pkey  ;
    const struct PKCS7_CTX_st*  ctx  ;
};

struct pkcs7_recip_info_st
{
    struct asn1_string_st*  version  ;
    struct pkcs7_issuer_and_serial_st*  issuer_and_serial  ;
    struct X509_algor_st*  key_enc_algor  ;
    struct asn1_string_st*  enc_key  ;
    struct x509_st*  cert  ;
    const struct PKCS7_CTX_st*  ctx  ;
};

struct pkcs7_signed_st
{
    struct asn1_string_st*  version  ;
    struct stack_st_X509_ALGOR*  md_algs  ;
    struct stack_st_X509*  cert  ;
    struct stack_st_X509_CRL*  crl  ;
    struct stack_st_PKCS7_SIGNER_INFO*  signer_info  ;
    struct pkcs7_st* contents;
};

struct pkcs7_enc_content_st
{
    struct asn1_object_st*  content_type  ;
    struct X509_algor_st*  algorithm  ;
    struct asn1_string_st*  enc_data  ;
    const struct evp_cipher_st*  cipher  ;
    const struct PKCS7_CTX_st*  ctx  ;
};

struct pkcs7_enveloped_st
{
    struct asn1_string_st*  version  ;
    struct stack_st_PKCS7_RECIP_INFO*  recipientinfo  ;
    struct pkcs7_enc_content_st*  enc_data  ;
};

struct pkcs7_signedandenveloped_st
{
    struct asn1_string_st*  version  ;
    struct stack_st_X509_ALGOR*  md_algs  ;
    struct stack_st_X509*  cert  ;
    struct stack_st_X509_CRL*  crl  ;
    struct stack_st_PKCS7_SIGNER_INFO*  signer_info  ;
    struct pkcs7_enc_content_st*  enc_data  ;
    struct stack_st_PKCS7_RECIP_INFO*  recipientinfo  ;
};

struct pkcs7_digest_st
{
    struct asn1_string_st*  version  ;
    struct X509_algor_st*  md  ;
    struct pkcs7_st* contents;
    struct asn1_string_st*  digest  ;
};

struct pkcs7_encrypted_st
{
    struct asn1_string_st*  version  ;
    struct pkcs7_enc_content_st*  enc_data  ;
};

union anonymous_typeZ112
{
char* ptr;
struct asn1_string_st*  data  ;
struct pkcs7_signed_st*  sign  ;
struct pkcs7_enveloped_st*  enveloped  ;
struct pkcs7_signedandenveloped_st*  signed_and_enveloped  ;
struct pkcs7_digest_st*  digest  ;
struct pkcs7_encrypted_st*  encrypted  ;
struct asn1_type_st*  other  ;
};

union anonymous_typeZ113
{
char* ptr;
struct asn1_string_st*  data  ;
struct pkcs7_signed_st*  sign  ;
struct pkcs7_enveloped_st*  enveloped  ;
struct pkcs7_signedandenveloped_st*  signed_and_enveloped  ;
struct pkcs7_digest_st*  digest  ;
struct pkcs7_encrypted_st*  encrypted  ;
struct asn1_type_st*  other  ;
};

struct pkcs7_st
{
    unsigned char* asn1;
    long length;
    int state;
    int detached;
    struct asn1_object_st*  type  ;
    union {
        char* ptr;
        struct asn1_string_st*  data  ;
        struct pkcs7_signed_st*  sign  ;
        struct pkcs7_enveloped_st*  enveloped  ;
        struct pkcs7_signedandenveloped_st*  signed_and_enveloped  ;
        struct pkcs7_digest_st*  digest  ;
        struct pkcs7_encrypted_st*  encrypted  ;
        struct asn1_type_st*  other  ;
    } d;
    struct PKCS7_CTX_st  ctx  ;
};

struct anonymous_typeX114
{
    char* section;
    char* name;
    char* value;
};

struct lhash_st_CONF_VALUE
{
    union lh_CONF_VALUE_dummy {
        void* d1;
        unsigned long  int d2;
        int d3;
    } dummy;
};

struct conf_method_st
{
    const char* name;
    struct conf_st* (*create)(struct conf_method_st* );
    int (*init)(struct conf_st* );
    int (*destroy)(struct conf_st* );
    int (*destroy_data)(struct conf_st* );
    int (*load_bio)(struct conf_st* ,struct bio_st* ,long*);
    int (*dump)(const struct conf_st* ,struct bio_st* );
    int (*is_number)(const struct conf_st* ,char);
    int (*to_int)(const struct conf_st* ,char);
    int (*load)(struct conf_st* ,const char*,long*);
};

struct conf_st
{
    struct conf_method_st*  meth  ;
    void* meth_data;
    struct lhash_st_CONF_VALUE*  data  ;
    int flag_dollarid;
    int flag_abspath;
    char* includedir;
    struct ossl_lib_ctx_st*  libctx  ;
};

enum  anonymous_typeY114 { CT_LOG_ENTRY_TYPE_NOT_SET=(-1),
CT_LOG_ENTRY_TYPE_X509=(0),
CT_LOG_ENTRY_TYPE_PRECERT=(1)
};

struct srtp_protection_profile_st
{
    const char* name;
    unsigned long  int id;
};

struct tls_session_ticket_ext_st
{
    unsigned short int length;
    void* data;
};

struct ssl_shutdown_ex_args_st
{
    unsigned long  int  quic_error_code  ;
    const char* quic_reason;
};

struct ssl_stream_reset_args_st
{
    unsigned long  int  quic_error_code  ;
};

struct ssl_conn_close_info_st
{
    unsigned long  int  error_code  ;
    unsigned long  int  frame_type  ;
    const char* reason;
    unsigned long  reason_len  ;
    unsigned int  flags  ;
};

struct ssl_poll_item_st
{
    struct bio_poll_descriptor_st  desc  ;
    unsigned long  int  events  ;
    unsigned long  int  revents  ;
};

enum { SSL_CT_VALIDATION_PERMISSIVE=(0),
SSL_CT_VALIDATION_STRICT 
};

struct err_state_st
{
    int err_flags[16];
    int err_marks[16];
    unsigned long  int err_buffer[16];
    char* err_data[16];
    unsigned long  err_data_size[16]  ;
    int err_data_flags[16];
    char* err_file[16];
    int err_line[16];
    char* err_func[16];
    int top;
    int bottom;
};

struct ERR_string_data_st
{
    unsigned long  int error;
    const char* string;
};

struct lhash_st_ERR_STRING_DATA
{
    union lh_ERR_STRING_DATA_dummy {
        void* d1;
        unsigned long  int d2;
        int d3;
    } dummy;
};

struct rand_meth_st
{
    int (*seed)(const void*,int);
    int (*bytes)(unsigned char*,int);
    void (*cleanup)();
    int (*add)(const void*,int,double);
    int (*pseudorand)(unsigned char*,int);
    int (*status)();
};

enum  nfs_stat { NFS_OK=(0),
NFSERR_PERM=(1),
NFSERR_NOENT=(2),
NFSERR_IO=(5),
NFSERR_NXIO=(6),
NFSERR_EAGAIN=(11),
NFSERR_ACCES=(13),
NFSERR_EXIST=(17),
NFSERR_XDEV=(18),
NFSERR_NODEV=(19),
NFSERR_NOTDIR=(20),
NFSERR_ISDIR=(21),
NFSERR_INVAL=(22),
NFSERR_FBIG=(27),
NFSERR_NOSPC=(28),
NFSERR_ROFS=(30),
NFSERR_MLINK=(31),
NFSERR_NAMETOOLONG=(63),
NFSERR_NOTEMPTY=(66),
NFSERR_DQUOT=(69),
NFSERR_STALE=(70),
NFSERR_REMOTE=(71),
NFSERR_WFLUSH=(99),
NFSERR_BADHANDLE=(10001),
NFSERR_NOT_SYNC=(10002),
NFSERR_BAD_COOKIE=(10003),
NFSERR_NOTSUPP=(10004),
NFSERR_TOOSMALL=(10005),
NFSERR_SERVERFAULT=(10006),
NFSERR_BADTYPE=(10007),
NFSERR_JUKEBOX=(10008),
NFSERR_SAME=(10009),
NFSERR_DENIED=(10010),
NFSERR_EXPIRED=(10011),
NFSERR_LOCKED=(10012),
NFSERR_GRACE=(10013),
NFSERR_FHEXPIRED=(10014),
NFSERR_SHARE_DENIED=(10015),
NFSERR_WRONGSEC=(10016),
NFSERR_CLID_INUSE=(10017),
NFSERR_RESOURCE=(10018),
NFSERR_MOVED=(10019),
NFSERR_NOFILEHANDLE=(10020),
NFSERR_MINOR_VERS_MISMATCH=(10021),
NFSERR_STALE_CLIENTID=(10022),
NFSERR_STALE_STATEID=(10023),
NFSERR_OLD_STATEID=(10024),
NFSERR_BAD_STATEID=(10025),
NFSERR_BAD_SEQID=(10026),
NFSERR_NOT_SAME=(10027),
NFSERR_LOCK_RANGE=(10028),
NFSERR_SYMLINK=(10029),
NFSERR_RESTOREFH=(10030),
NFSERR_LEASE_MOVED=(10031),
NFSERR_ATTRNOTSUPP=(10032),
NFSERR_NO_GRACE=(10033),
NFSERR_RECLAIM_BAD=(10034),
NFSERR_RECLAIM_CONFLICT=(10035),
NFSERR_BAD_XDR=(10036),
NFSERR_LOCKS_HELD=(10037),
NFSERR_OPENMODE=(10038),
NFSERR_BADOWNER=(10039),
NFSERR_BADCHAR=(10040),
NFSERR_BADNAME=(10041),
NFSERR_BAD_RANGE=(10042),
NFSERR_LOCK_NOTSUPP=(10043),
NFSERR_OP_ILLEGAL=(10044),
NFSERR_DEADLOCK=(10045),
NFSERR_FILE_OPEN=(10046),
NFSERR_ADMIN_REVOKED=(10047),
NFSERR_CB_PATH_DOWN=(10048)
};

enum  nfs_ftype { NFNON=(0),
NFREG=(1),
NFDIR=(2),
NFBLK=(3),
NFCHR=(4),
NFLNK=(5),
NFSOCK=(6),
NFBAD=(7),
NFFIFO=(8)
};

struct ccs_modesel_head
{
    unsigned char _r1;
    unsigned char medium;
    unsigned char _r2;
    unsigned char block_desc_length;
    unsigned char density;
    unsigned char number_blocks_hi;
    unsigned char number_blocks_med;
    unsigned char number_blocks_lo;
    unsigned char _r3;
    unsigned char block_length_hi;
    unsigned char block_length_med;
    unsigned char block_length_lo;
};

struct sg_iovec
{
    void* iov_base;
    unsigned long  iov_len  ;
};

struct sg_io_hdr
{
    int interface_id;
    int dxfer_direction;
    unsigned char cmd_len;
    unsigned char mx_sb_len;
    unsigned short int iovec_count;
    unsigned int dxfer_len;
    void* dxferp;
    unsigned char* cmdp;
    unsigned char* sbp;
    unsigned int timeout;
    unsigned int flags;
    int pack_id;
    void* usr_ptr;
    unsigned char status;
    unsigned char masked_status;
    unsigned char msg_status;
    unsigned char sb_len_wr;
    unsigned short int host_status;
    unsigned short int driver_status;
    int resid;
    unsigned int duration;
    unsigned int info;
};

struct sg_scsi_id
{
    int host_no;
    int channel;
    int scsi_id;
    int lun;
    int scsi_type;
    short int h_cmd_per_lun;
    short int d_queue_depth;
    int unused[2];
};

struct sg_req_info
{
    char req_state;
    char orphan;
    char sg_io_owned;
    char problem;
    int pack_id;
    void* usr_ptr;
    unsigned int duration;
    int unused;
};

struct sg_header
{
    int pack_len;
    int reply_len;
    int pack_id;
    int result;
    unsigned int twelve_byte:1;
    unsigned int target_status:5;
    unsigned int host_status:8;
    unsigned int driver_status:8;
    unsigned int other_flags:10;
    unsigned char sense_buffer[16];
};

struct snd_aes_iec958
{
    unsigned char status[24];
    unsigned char subcode[147];
    unsigned char pad;
    unsigned char dig_subframe[4];
};

struct snd_cea_861_aud_if
{
    unsigned char db1_ct_cc;
    unsigned char db2_sf_ss;
    unsigned char db3;
    unsigned char db4_ca;
    unsigned char db5_dminh_lsv;
};

enum { SNDRV_HWDEP_IFACE_OPL2=(0),
SNDRV_HWDEP_IFACE_OPL3 
,SNDRV_HWDEP_IFACE_OPL4 
,SNDRV_HWDEP_IFACE_SB16CSP 
,SNDRV_HWDEP_IFACE_EMU10K1 
,SNDRV_HWDEP_IFACE_YSS225 
,SNDRV_HWDEP_IFACE_ICS2115 
,SNDRV_HWDEP_IFACE_SSCAPE 
,SNDRV_HWDEP_IFACE_VX 
,SNDRV_HWDEP_IFACE_MIXART 
,SNDRV_HWDEP_IFACE_USX2Y 
,SNDRV_HWDEP_IFACE_EMUX_WAVETABLE 
,SNDRV_HWDEP_IFACE_BLUETOOTH 
,SNDRV_HWDEP_IFACE_USX2Y_PCM 
,SNDRV_HWDEP_IFACE_PCXHR 
,SNDRV_HWDEP_IFACE_SB_RC 
,SNDRV_HWDEP_IFACE_HDA 
,SNDRV_HWDEP_IFACE_USB_STREAM 
,SNDRV_HWDEP_IFACE_FW_DICE 
,SNDRV_HWDEP_IFACE_FW_FIREWORKS 
,SNDRV_HWDEP_IFACE_FW_BEBOB 
,SNDRV_HWDEP_IFACE_FW_OXFW 
,SNDRV_HWDEP_IFACE_FW_DIGI00X 
,SNDRV_HWDEP_IFACE_FW_TASCAM 
,SNDRV_HWDEP_IFACE_LINE6 
,SNDRV_HWDEP_IFACE_FW_MOTU 
,SNDRV_HWDEP_IFACE_FW_FIREFACE 
,SNDRV_HWDEP_IFACE_LAST=((0+26))
};

struct snd_hwdep_info
{
    unsigned int device;
    int card;
    unsigned char id[64];
    unsigned char name[80];
    int iface;
    unsigned char reserved[64];
};

struct snd_hwdep_dsp_status
{
    unsigned int version;
    unsigned char id[32];
    unsigned int num_dsps;
    unsigned int dsp_loaded;
    unsigned int chip_ready;
    unsigned char reserved[16];
};

struct snd_hwdep_dsp_image
{
    unsigned int index;
    unsigned char name[64];
    unsigned char* image;
    unsigned long  length  ;
    unsigned long  int driver_data;
};

enum { SNDRV_PCM_CLASS_GENERIC=(0),
SNDRV_PCM_CLASS_MULTI 
,SNDRV_PCM_CLASS_MODEM 
,SNDRV_PCM_CLASS_DIGITIZER 
,SNDRV_PCM_CLASS_LAST=((0+3))
};

enum { SNDRV_PCM_SUBCLASS_GENERIC_MIX=(0),
SNDRV_PCM_SUBCLASS_MULTI_MIX 
,SNDRV_PCM_SUBCLASS_LAST=((0+1))
};

enum { SNDRV_PCM_STREAM_PLAYBACK=(0),
SNDRV_PCM_STREAM_CAPTURE 
,SNDRV_PCM_STREAM_LAST=((0+1))
};

enum { SNDRV_PCM_MMAP_OFFSET_DATA=(0x00000000),
SNDRV_PCM_MMAP_OFFSET_STATUS_OLD=(0x80000000),
SNDRV_PCM_MMAP_OFFSET_CONTROL_OLD=(0x81000000),
SNDRV_PCM_MMAP_OFFSET_STATUS_NEW=(0x82000000),
SNDRV_PCM_MMAP_OFFSET_CONTROL_NEW=(0x83000000),
SNDRV_PCM_MMAP_OFFSET_STATUS=((0x80000000)),
SNDRV_PCM_MMAP_OFFSET_CONTROL=((0x81000000))
};

union snd_pcm_sync_id
{
unsigned char id[16];
unsigned short int id16[8];
unsigned int id32[4];
} __attribute__((deprecated));

struct snd_pcm_info
{
    unsigned int device;
    unsigned int subdevice;
    int stream;
    int card;
    unsigned char id[64];
    unsigned char name[80];
    unsigned char subname[32];
    int dev_class;
    int dev_subclass;
    unsigned int subdevices_count;
    unsigned int subdevices_avail;
    unsigned char pad1[16];
    unsigned char reserved[64];
};

struct snd_interval
{
    unsigned int min;
    unsigned int max;
    unsigned int openmin:1;
    unsigned int openmax:1;
    unsigned int integer:1;
    unsigned int empty:1;
};

struct snd_mask
{
    unsigned int  bits[(256+31)/32]  ;
};

struct snd_pcm_hw_params
{
    unsigned int flags;
    struct snd_mask  masks[2-0+1]  ;
    struct snd_mask  mres[5]  ;
    struct snd_interval  intervals[19-8+1]  ;
    struct snd_interval  ires[9]  ;
    unsigned int rmask;
    unsigned int cmask;
    unsigned int info;
    unsigned int msbits;
    unsigned int rate_num;
    unsigned int rate_den;
    unsigned long  int  fifo_size  ;
    unsigned char sync[16];
    unsigned char reserved[48];
};

enum { SNDRV_PCM_TSTAMP_NONE=(0),
SNDRV_PCM_TSTAMP_ENABLE 
,SNDRV_PCM_TSTAMP_LAST=((0+1))
};

struct snd_pcm_sw_params
{
    int tstamp_mode;
    unsigned int period_step;
    unsigned int sleep_min;
    unsigned long  int  avail_min  ;
    unsigned long  int  xfer_align  ;
    unsigned long  int  start_threshold  ;
    unsigned long  int  stop_threshold  ;
    unsigned long  int  silence_threshold  ;
    unsigned long  int  silence_size  ;
    unsigned long  int  boundary  ;
    unsigned int proto;
    unsigned int tstamp_type;
    unsigned char reserved[56];
};

struct snd_pcm_channel_info
{
    unsigned int channel;
    long  offset  ;
    unsigned int first;
    unsigned int step;
};

enum { SNDRV_PCM_AUDIO_TSTAMP_TYPE_COMPAT=(0),
SNDRV_PCM_AUDIO_TSTAMP_TYPE_DEFAULT=(1),
SNDRV_PCM_AUDIO_TSTAMP_TYPE_LINK=(2),
SNDRV_PCM_AUDIO_TSTAMP_TYPE_LINK_ABSOLUTE=(3),
SNDRV_PCM_AUDIO_TSTAMP_TYPE_LINK_ESTIMATED=(4),
SNDRV_PCM_AUDIO_TSTAMP_TYPE_LINK_SYNCHRONIZED=(5),
SNDRV_PCM_AUDIO_TSTAMP_TYPE_LAST=((5))
};

struct __time_pad
{
    unsigned char pad[sizeof(long  int )-sizeof(int)];
};

struct snd_pcm_status
{
    int  state  ;
    struct __time_pad  pad1  ;
    struct timespec  trigger_tstamp  ;
    struct timespec  tstamp  ;
    unsigned long  int  appl_ptr  ;
    unsigned long  int  hw_ptr  ;
    long  delay  ;
    unsigned long  int  avail  ;
    unsigned long  int  avail_max  ;
    unsigned long  int  overrange  ;
    int  suspended_state  ;
    unsigned int  audio_tstamp_data  ;
    struct timespec  audio_tstamp  ;
    struct timespec  driver_tstamp  ;
    unsigned int  audio_tstamp_accuracy  ;
    unsigned char reserved[52-2*sizeof(struct timespec )];
};

struct __snd_timespec64
{
    long long  tv_sec  ;
    long long  tv_nsec  ;
};

struct snd_pcm_mmap_status
{
    int  state  ;
    int pad1;
    unsigned long  int  hw_ptr  ;
    struct timespec  tstamp  ;
    int  suspended_state  ;
    struct timespec  audio_tstamp  ;
};

struct snd_pcm_mmap_control
{
    unsigned long  int  appl_ptr  ;
    unsigned long  int  avail_min  ;
};

union anonymous_typeZ115
{
struct snd_pcm_mmap_status  status  ;
unsigned char reserved[64];
};

union anonymous_typeZ116
{
struct snd_pcm_mmap_status  status  ;
unsigned char reserved[64];
};

union anonymous_typeZ117
{
struct snd_pcm_mmap_control  control  ;
unsigned char reserved[64];
};

union anonymous_typeZ118
{
struct snd_pcm_mmap_control  control  ;
unsigned char reserved[64];
};

struct snd_pcm_sync_ptr
{
    unsigned int flags;
    union {
        struct snd_pcm_mmap_status  status  ;
        unsigned char reserved[64];
    } s;
    union {
        struct snd_pcm_mmap_control  control  ;
        unsigned char reserved[64];
    } c;
};

typedef char __pad_before_uframe[0];

typedef char __pad_after_uframe[sizeof(unsigned long  long )-sizeof(unsigned long  int )];

struct __snd_pcm_mmap_status64
{
    int  state  ;
    unsigned int  pad1  ;
    char  __pad1[0]  ;
    unsigned long  int  hw_ptr  ;
    char  __pad2[sizeof(unsigned long  long )-sizeof(unsigned long  int )]  ;
    struct __snd_timespec64  tstamp  ;
    int  suspended_state  ;
    unsigned int  pad3  ;
    struct __snd_timespec64  audio_tstamp  ;
};

struct __snd_pcm_mmap_control64
{
    char  __pad1[0]  ;
    unsigned long  int  appl_ptr  ;
    char  __pad2[0]  ;
    char  __pad3[0]  ;
    unsigned long  int  avail_min  ;
    char  __pad4[sizeof(unsigned long  long )-sizeof(unsigned long  int )]  ;
};

union anonymous_typeZ119
{
struct __snd_pcm_mmap_status64  status  ;
unsigned char reserved[64];
};

union anonymous_typeZ120
{
struct __snd_pcm_mmap_status64  status  ;
unsigned char reserved[64];
};

union anonymous_typeZ121
{
struct __snd_pcm_mmap_control64  control  ;
unsigned char reserved[64];
};

union anonymous_typeZ122
{
struct __snd_pcm_mmap_control64  control  ;
unsigned char reserved[64];
};

struct __snd_pcm_sync_ptr64
{
    unsigned int  flags  ;
    unsigned int  pad1  ;
    union {
        struct __snd_pcm_mmap_status64  status  ;
        unsigned char reserved[64];
    } s;
    union {
        struct __snd_pcm_mmap_control64  control  ;
        unsigned char reserved[64];
    } c;
};

struct snd_xferi
{
    long  result  ;
    void* buf;
    unsigned long  int  frames  ;
};

struct snd_xfern
{
    long  result  ;
    void** bufs;
    unsigned long  int  frames  ;
};

enum { SNDRV_PCM_TSTAMP_TYPE_GETTIMEOFDAY=(0),
SNDRV_PCM_TSTAMP_TYPE_MONOTONIC 
,SNDRV_PCM_TSTAMP_TYPE_MONOTONIC_RAW 
,SNDRV_PCM_TSTAMP_TYPE_LAST=((0+2))
};

enum { SNDRV_CHMAP_UNKNOWN=(0),
SNDRV_CHMAP_NA 
,SNDRV_CHMAP_MONO 
,SNDRV_CHMAP_FL 
,SNDRV_CHMAP_FR 
,SNDRV_CHMAP_RL 
,SNDRV_CHMAP_RR 
,SNDRV_CHMAP_FC 
,SNDRV_CHMAP_LFE 
,SNDRV_CHMAP_SL 
,SNDRV_CHMAP_SR 
,SNDRV_CHMAP_RC 
,SNDRV_CHMAP_FLC 
,SNDRV_CHMAP_FRC 
,SNDRV_CHMAP_RLC 
,SNDRV_CHMAP_RRC 
,SNDRV_CHMAP_FLW 
,SNDRV_CHMAP_FRW 
,SNDRV_CHMAP_FLH 
,SNDRV_CHMAP_FCH 
,SNDRV_CHMAP_FRH 
,SNDRV_CHMAP_TC 
,SNDRV_CHMAP_TFL 
,SNDRV_CHMAP_TFR 
,SNDRV_CHMAP_TFC 
,SNDRV_CHMAP_TRL 
,SNDRV_CHMAP_TRR 
,SNDRV_CHMAP_TRC 
,SNDRV_CHMAP_TFLC 
,SNDRV_CHMAP_TFRC 
,SNDRV_CHMAP_TSL 
,SNDRV_CHMAP_TSR 
,SNDRV_CHMAP_LLFE 
,SNDRV_CHMAP_RLFE 
,SNDRV_CHMAP_BC 
,SNDRV_CHMAP_BLC 
,SNDRV_CHMAP_BRC 
,SNDRV_CHMAP_LAST=((0+36))
};

enum { SNDRV_RAWMIDI_STREAM_OUTPUT=(0),
SNDRV_RAWMIDI_STREAM_INPUT 
,SNDRV_RAWMIDI_STREAM_LAST=((0+1))
};

struct snd_rawmidi_info
{
    unsigned int device;
    unsigned int subdevice;
    int stream;
    int card;
    unsigned int flags;
    unsigned char id[64];
    unsigned char name[80];
    unsigned char subname[32];
    unsigned int subdevices_count;
    unsigned int subdevices_avail;
    int tied_device;
    unsigned char reserved[60];
};

struct snd_rawmidi_framing_tstamp
{
    unsigned char  frame_type  ;
    unsigned char  length  ;
    unsigned char  reserved[2]  ;
    unsigned int  tv_nsec  ;
    unsigned long  long  tv_sec  ;
    unsigned char  data[16]  ;
} __attribute__((packed));

struct snd_rawmidi_params
{
    int stream;
    unsigned long  buffer_size  ;
    unsigned long  avail_min  ;
    unsigned int no_active_sensing:1;
    unsigned int mode;
    unsigned char reserved[12];
};

struct snd_rawmidi_status
{
    int stream;
    struct __time_pad  pad1  ;
    struct timespec  tstamp  ;
    unsigned long  avail  ;
    unsigned long  xruns  ;
    unsigned char reserved[16];
};

struct snd_ump_endpoint_info
{
    int card;
    int device;
    unsigned int flags;
    unsigned int protocol_caps;
    unsigned int protocol;
    unsigned int num_blocks;
    unsigned short int version;
    unsigned short int family_id;
    unsigned short int model_id;
    unsigned int manufacturer_id;
    unsigned char sw_revision[4];
    unsigned short int padding;
    unsigned char name[128];
    unsigned char product_id[128];
    unsigned char reserved[32];
} __attribute__((packed));

struct snd_ump_block_info
{
    int card;
    int device;
    unsigned char block_id;
    unsigned char direction;
    unsigned char active;
    unsigned char first_group;
    unsigned char num_groups;
    unsigned char midi_ci_version;
    unsigned char sysex8_streams;
    unsigned char ui_hint;
    unsigned int flags;
    unsigned char name[128];
    unsigned char reserved[32];
} __attribute__((packed));

enum { SNDRV_TIMER_CLASS_NONE=(-1),
SNDRV_TIMER_CLASS_SLAVE=(0),
SNDRV_TIMER_CLASS_GLOBAL 
,SNDRV_TIMER_CLASS_CARD 
,SNDRV_TIMER_CLASS_PCM 
,SNDRV_TIMER_CLASS_LAST=((0+3))
};

enum { SNDRV_TIMER_SCLASS_NONE=(0),
SNDRV_TIMER_SCLASS_APPLICATION 
,SNDRV_TIMER_SCLASS_SEQUENCER 
,SNDRV_TIMER_SCLASS_OSS_SEQUENCER 
,SNDRV_TIMER_SCLASS_LAST=((0+3))
};

struct snd_timer_id
{
    int dev_class;
    int dev_sclass;
    int card;
    int device;
    int subdevice;
};

struct snd_timer_ginfo
{
    struct snd_timer_id  tid  ;
    unsigned int flags;
    int card;
    unsigned char id[64];
    unsigned char name[80];
    unsigned long  int reserved0;
    unsigned long  int resolution;
    unsigned long  int resolution_min;
    unsigned long  int resolution_max;
    unsigned int clients;
    unsigned char reserved[32];
};

struct snd_timer_gparams
{
    struct snd_timer_id  tid  ;
    unsigned long  int period_num;
    unsigned long  int period_den;
    unsigned char reserved[32];
};

struct snd_timer_gstatus
{
    struct snd_timer_id  tid  ;
    unsigned long  int resolution;
    unsigned long  int resolution_num;
    unsigned long  int resolution_den;
    unsigned char reserved[32];
};

struct snd_timer_select
{
    struct snd_timer_id  id  ;
    unsigned char reserved[32];
};

struct snd_timer_info
{
    unsigned int flags;
    int card;
    unsigned char id[64];
    unsigned char name[80];
    unsigned long  int reserved0;
    unsigned long  int resolution;
    unsigned char reserved[64];
};

struct snd_timer_params
{
    unsigned int flags;
    unsigned int ticks;
    unsigned int queue_size;
    unsigned int reserved0;
    unsigned int filter;
    unsigned char reserved[60];
};

struct snd_timer_status
{
    struct timespec  tstamp  ;
    unsigned int resolution;
    unsigned int lost;
    unsigned int overrun;
    unsigned int queue;
    unsigned char reserved[64];
};

struct snd_timer_uinfo
{
    unsigned long  long  resolution  ;
    int fd;
    unsigned int id;
    unsigned char reserved[16];
};

struct snd_timer_read
{
    unsigned int resolution;
    unsigned int ticks;
};

enum { SNDRV_TIMER_EVENT_RESOLUTION=(0),
SNDRV_TIMER_EVENT_TICK 
,SNDRV_TIMER_EVENT_START 
,SNDRV_TIMER_EVENT_STOP 
,SNDRV_TIMER_EVENT_CONTINUE 
,SNDRV_TIMER_EVENT_PAUSE 
,SNDRV_TIMER_EVENT_EARLY 
,SNDRV_TIMER_EVENT_SUSPEND 
,SNDRV_TIMER_EVENT_RESUME 
,SNDRV_TIMER_EVENT_MSTART=((0+2)+10),
SNDRV_TIMER_EVENT_MSTOP=((0+3)+10),
SNDRV_TIMER_EVENT_MCONTINUE=((0+4)+10),
SNDRV_TIMER_EVENT_MPAUSE=((0+5)+10),
SNDRV_TIMER_EVENT_MSUSPEND=((0+7)+10),
SNDRV_TIMER_EVENT_MRESUME=((0+8)+10)
};

struct snd_timer_tread
{
    int event;
    struct __time_pad  pad1  ;
    struct timespec  tstamp  ;
    unsigned int val;
    struct __time_pad  pad2  ;
};

struct snd_ctl_card_info
{
    int card;
    int pad;
    unsigned char id[16];
    unsigned char driver[16];
    unsigned char name[32];
    unsigned char longname[80];
    unsigned char reserved_[16];
    unsigned char mixername[80];
    unsigned char components[128];
};

struct snd_ctl_elem_id
{
    unsigned int numid;
    int  iface  ;
    unsigned int device;
    unsigned int subdevice;
    unsigned char name[44];
    unsigned int index;
};

struct snd_ctl_elem_list
{
    unsigned int offset;
    unsigned int space;
    unsigned int used;
    unsigned int count;
    struct snd_ctl_elem_id*  pids  ;
    unsigned char reserved[50];
};

struct anonymous_typeX124
{
    long min;
    long max;
    long step;
};

struct anonymous_typeX125
{
    long long min;
    long long max;
    long long step;
};

struct anonymous_typeX126
{
    unsigned int items;
    unsigned int item;
    char name[64];
    unsigned long  long  names_ptr  ;
    unsigned int names_length;
};

union anonymous_typeZ123
{
    struct {
        long min;
        long max;
        long step;
    } integer;
    struct {
        long long min;
        long long max;
        long long step;
    } integer64;
    struct {
        unsigned int items;
        unsigned int item;
        char name[64];
        unsigned long  long  names_ptr  ;
        unsigned int names_length;
    } enumerated;
unsigned char reserved[128];
};

struct anonymous_typeX128
{
    long min;
    long max;
    long step;
};

struct anonymous_typeX129
{
    long long min;
    long long max;
    long long step;
};

struct anonymous_typeX130
{
    unsigned int items;
    unsigned int item;
    char name[64];
    unsigned long  long  names_ptr  ;
    unsigned int names_length;
};

union anonymous_typeZ127
{
    struct {
        long min;
        long max;
        long step;
    } integer;
    struct {
        long long min;
        long long max;
        long long step;
    } integer64;
    struct {
        unsigned int items;
        unsigned int item;
        char name[64];
        unsigned long  long  names_ptr  ;
        unsigned int names_length;
    } enumerated;
unsigned char reserved[128];
};

struct snd_ctl_elem_info
{
    struct snd_ctl_elem_id  id  ;
    int  type  ;
    unsigned int access;
    unsigned int count;
    int  owner  ;
    union {
        struct {
            long min;
            long max;
            long step;
        } integer;
        struct {
            long long min;
            long long max;
            long long step;
        } integer64;
        struct {
            unsigned int items;
            unsigned int item;
            char name[64];
            unsigned long  long  names_ptr  ;
            unsigned int names_length;
        } enumerated;
        unsigned char reserved[128];
    } value;
    unsigned char reserved[64];
};

union anonymous_typeZ132
{
long value[128];
long* value_ptr;
};

union anonymous_typeZ133
{
long long value[64];
long  long* value_ptr;
};

union anonymous_typeZ134
{
unsigned int item[128];
unsigned int* item_ptr;
};

union anonymous_typeZ135
{
unsigned char data[512];
unsigned char* data_ptr;
};

union anonymous_typeZ131
{
    union {
        long value[128];
        long* value_ptr;
    } integer;
    union {
        long long value[64];
        long  long* value_ptr;
    } integer64;
    union {
        unsigned int item[128];
        unsigned int* item_ptr;
    } enumerated;
    union {
        unsigned char data[512];
        unsigned char* data_ptr;
    } bytes;
struct snd_aes_iec958  iec958  ;
};

union anonymous_typeZ137
{
long value[128];
long* value_ptr;
};

union anonymous_typeZ138
{
long long value[64];
long  long* value_ptr;
};

union anonymous_typeZ139
{
unsigned int item[128];
unsigned int* item_ptr;
};

union anonymous_typeZ140
{
unsigned char data[512];
unsigned char* data_ptr;
};

union anonymous_typeZ136
{
    union {
        long value[128];
        long* value_ptr;
    } integer;
    union {
        long long value[64];
        long  long* value_ptr;
    } integer64;
    union {
        unsigned int item[128];
        unsigned int* item_ptr;
    } enumerated;
    union {
        unsigned char data[512];
        unsigned char* data_ptr;
    } bytes;
struct snd_aes_iec958  iec958  ;
};

struct snd_ctl_elem_value
{
    struct snd_ctl_elem_id  id  ;
    unsigned int indirect:1;
    union {
        union {
            long value[128];
            long* value_ptr;
        } integer;
        union {
            long long value[64];
            long  long* value_ptr;
        } integer64;
        union {
            unsigned int item[128];
            unsigned int* item_ptr;
        } enumerated;
        union {
            unsigned char data[512];
            unsigned char* data_ptr;
        } bytes;
        struct snd_aes_iec958  iec958  ;
    } value;
    unsigned char reserved[128];
};

struct snd_ctl_tlv
{
    unsigned int numid;
    unsigned int length;
    unsigned int tlv[];
};

enum  sndrv_ctl_event_type { SNDRV_CTL_EVENT_ELEM=(0),
SNDRV_CTL_EVENT_LAST=((0))
};

struct anonymous_typeX142
{
    unsigned int mask;
    struct snd_ctl_elem_id  id  ;
};

union anonymous_typeZ141
{
    struct {
        unsigned int mask;
        struct snd_ctl_elem_id  id  ;
    } elem;
unsigned char data8[60];
};

struct anonymous_typeX144
{
    unsigned int mask;
    struct snd_ctl_elem_id  id  ;
};

union anonymous_typeZ143
{
    struct {
        unsigned int mask;
        struct snd_ctl_elem_id  id  ;
    } elem;
unsigned char data8[60];
};

struct snd_ctl_event
{
    int type;
    union {
        struct {
            unsigned int mask;
            struct snd_ctl_elem_id  id  ;
        } elem;
        unsigned char data8[60];
    } data;
};

struct snd_seq_addr
{
    unsigned char client;
    unsigned char port;
};

struct snd_seq_connect
{
    struct snd_seq_addr  sender  ;
    struct snd_seq_addr  dest  ;
};

struct snd_seq_ev_note
{
    unsigned char channel;
    unsigned char note;
    unsigned char velocity;
    unsigned char off_velocity;
    unsigned int duration;
};

struct snd_seq_ev_ctrl
{
    unsigned char channel;
    unsigned char unused1;
    unsigned char unused2;
    unsigned char unused3;
    unsigned int param;
    int value;
};

struct snd_seq_ev_raw8
{
    unsigned char d[12];
};

struct snd_seq_ev_raw32
{
    unsigned int d[3];
};

struct snd_seq_ev_ext
{
    unsigned int len;
    void* ptr;
} __attribute__((packed));

struct snd_seq_result
{
    int event;
    int result;
};

struct snd_seq_real_time
{
    unsigned int tv_sec;
    unsigned int tv_nsec;
};

union snd_seq_timestamp
{
unsigned int  tick  ;
struct snd_seq_real_time  time  ;
};

struct snd_seq_queue_skew
{
    unsigned int value;
    unsigned int base;
};

union anonymous_typeZ145
{
int value;
union snd_seq_timestamp  time  ;
unsigned int position;
struct snd_seq_queue_skew  skew  ;
unsigned int d32[2];
unsigned char d8[8];
};

union anonymous_typeZ146
{
int value;
union snd_seq_timestamp  time  ;
unsigned int position;
struct snd_seq_queue_skew  skew  ;
unsigned int d32[2];
unsigned char d8[8];
};

struct snd_seq_ev_queue_control
{
    unsigned char queue;
    unsigned char pad[3];
    union {
        int value;
        union snd_seq_timestamp  time  ;
        unsigned int position;
        struct snd_seq_queue_skew  skew  ;
        unsigned int d32[2];
        unsigned char d8[8];
    } param;
};

struct snd_seq_ev_quote
{
    struct snd_seq_addr  origin  ;
    unsigned short int value;
    struct snd_seq_event* event;
} __attribute__((packed));

struct snd_seq_ev_ump_notify
{
    unsigned char client;
    unsigned char block;
};

union snd_seq_event_data
{
struct snd_seq_ev_note  note  ;
struct snd_seq_ev_ctrl  control  ;
struct snd_seq_ev_raw8  raw8  ;
struct snd_seq_ev_raw32  raw32  ;
struct snd_seq_ev_ext  ext  ;
struct snd_seq_ev_queue_control  queue  ;
union snd_seq_timestamp  time  ;
struct snd_seq_addr  addr  ;
struct snd_seq_connect  connect  ;
struct snd_seq_result  result  ;
struct snd_seq_ev_quote  quote  ;
struct snd_seq_ev_ump_notify  ump_notify  ;
};

struct snd_seq_event
{
    unsigned char  type  ;
    unsigned char flags;
    char tag;
    unsigned char queue;
    union snd_seq_timestamp  time  ;
    struct snd_seq_addr  source  ;
    struct snd_seq_addr  dest  ;
    union snd_seq_event_data  data  ;
};

union anonymous_typeZ147
{
union snd_seq_event_data  data  ;
unsigned int ump[4];
};

union anonymous_typeZ148
{
union snd_seq_event_data  data  ;
unsigned int ump[4];
};

struct snd_seq_ump_event
{
    unsigned char  type  ;
    unsigned char flags;
    char tag;
    unsigned char queue;
    union snd_seq_timestamp  time  ;
    struct snd_seq_addr  source  ;
    struct snd_seq_addr  dest  ;
    union {
        union snd_seq_event_data  data  ;
        unsigned int ump[4];
    };
};

struct snd_seq_event_bounce
{
    int err;
    struct snd_seq_event  event  ;
};

struct snd_seq_system_info
{
    int queues;
    int clients;
    int ports;
    int channels;
    int cur_clients;
    int cur_queues;
    char reserved[24];
};

struct snd_seq_running_info
{
    unsigned char client;
    unsigned char big_endian;
    unsigned char cpu_mode;
    unsigned char pad;
    unsigned char reserved[12];
};

struct snd_seq_client_info
{
    int client;
    int  type  ;
    char name[64];
    unsigned int filter;
    unsigned char multicast_filter[8];
    unsigned char event_filter[32];
    int num_ports;
    int event_lost;
    int card;
    int pid;
    unsigned int midi_version;
    unsigned int group_filter;
    char reserved[48];
};

struct snd_seq_client_pool
{
    int client;
    int output_pool;
    int input_pool;
    int output_room;
    int output_free;
    int input_free;
    char reserved[64];
};

struct snd_seq_remove_events
{
    unsigned int remove_mode;
    union snd_seq_timestamp  time  ;
    unsigned char queue;
    struct snd_seq_addr  dest  ;
    unsigned char channel;
    int type;
    char tag;
    int reserved[10];
};

struct snd_seq_port_info
{
    struct snd_seq_addr  addr  ;
    char name[64];
    unsigned int capability;
    unsigned int type;
    int midi_channels;
    int midi_voices;
    int synth_voices;
    int read_use;
    int write_use;
    void* kernel;
    unsigned int flags;
    unsigned char time_queue;
    unsigned char direction;
    unsigned char ump_group;
    char reserved[57];
};

struct snd_seq_queue_info
{
    int queue;
    int owner;
    unsigned int locked:1;
    char name[64];
    unsigned int flags;
    char reserved[60];
};

struct snd_seq_queue_status
{
    int queue;
    int events;
    unsigned int  tick  ;
    struct snd_seq_real_time  time  ;
    int running;
    int flags;
    char reserved[64];
};

struct snd_seq_queue_tempo
{
    int queue;
    unsigned int tempo;
    int ppq;
    unsigned int skew_value;
    unsigned int skew_base;
    unsigned short int tempo_base;
    char reserved[22];
};

struct anonymous_typeX150
{
    struct snd_timer_id  id  ;
    unsigned int resolution;
};

union anonymous_typeZ149
{
    struct {
        struct snd_timer_id  id  ;
        unsigned int resolution;
    } alsa;
};

struct anonymous_typeX152
{
    struct snd_timer_id  id  ;
    unsigned int resolution;
};

union anonymous_typeZ151
{
    struct {
        struct snd_timer_id  id  ;
        unsigned int resolution;
    } alsa;
};

struct snd_seq_queue_timer
{
    int queue;
    int type;
    union {
        struct {
            struct snd_timer_id  id  ;
            unsigned int resolution;
        } alsa;
    } u;
    char reserved[64];
};

struct snd_seq_queue_client
{
    int queue;
    int client;
    int used;
    char reserved[64];
};

struct snd_seq_port_subscribe
{
    struct snd_seq_addr  sender  ;
    struct snd_seq_addr  dest  ;
    unsigned int voices;
    unsigned int flags;
    unsigned char queue;
    unsigned char pad[3];
    char reserved[64];
};

struct snd_seq_query_subs
{
    struct snd_seq_addr  root  ;
    int type;
    int index;
    int num_subs;
    struct snd_seq_addr  addr  ;
    unsigned char queue;
    unsigned int flags;
    char reserved[64];
};

struct snd_seq_client_ump_info
{
    int client;
    int type;
    unsigned char info[512];
} __attribute__((packed));

struct edid_info
{
    unsigned char dummy[128];
};

struct v86_regs
{
    unsigned int  ebx  ;
    unsigned int  ecx  ;
    unsigned int  edx  ;
    unsigned int  esi  ;
    unsigned int  edi  ;
    unsigned int  ebp  ;
    unsigned int  eax  ;
    unsigned int  eip  ;
    unsigned int  eflags  ;
    unsigned int  esp  ;
    unsigned short int  cs  ;
    unsigned short int  ss  ;
    unsigned short int  es  ;
    unsigned short int  ds  ;
    unsigned short int  fs  ;
    unsigned short int  gs  ;
};

struct uvesafb_task
{
    unsigned char  flags  ;
    int buf_len;
    struct v86_regs  regs  ;
};

struct vbe_ib
{
    char vbe_signature[4];
    unsigned short int  vbe_version  ;
    unsigned int  oem_string_ptr  ;
    unsigned int  capabilities  ;
    unsigned int  mode_list_ptr  ;
    unsigned short int  total_memory  ;
    unsigned short int  oem_software_rev  ;
    unsigned int  oem_vendor_name_ptr  ;
    unsigned int  oem_product_name_ptr  ;
    unsigned int  oem_product_rev_ptr  ;
    unsigned char  reserved[222]  ;
    char oem_data[256];
    char misc_data[512];
} __attribute__ ((packed));

struct drm_clip_rect
{
    unsigned short int x1;
    unsigned short int y1;
    unsigned short int x2;
    unsigned short int y2;
};

struct drm_drawable_info
{
    unsigned int num_rects;
    struct drm_clip_rect*  rects  ;
};

struct drm_tex_region
{
    unsigned char next;
    unsigned char prev;
    unsigned char in_use;
    unsigned char padding;
    unsigned int age;
};

struct drm_hw_lock
{
    volatile unsigned int lock;
    char padding[60];
};

struct drm_version
{
    int version_major;
    int version_minor;
    int version_patchlevel;
    unsigned long  int  name_len  ;
    char* name;
    unsigned long  int  date_len  ;
    char* date;
    unsigned long  int  desc_len  ;
    char* desc;
};

struct drm_unique
{
    unsigned long  int  unique_len  ;
    char* unique;
};

struct drm_list
{
    int count;
    struct drm_version*  version  ;
};

struct drm_block
{
    int unused;
};

enum  anonymous_typeY152 { DRM_ADD_COMMAND 
,DRM_RM_COMMAND 
,DRM_INST_HANDLER 
,DRM_UNINST_HANDLER 
};

struct drm_control
{
    enum anonymous_typeY152 func;
    int irq;
};

enum  drm_map_type { _DRM_FRAME_BUFFER=(0),
_DRM_REGISTERS=(1),
_DRM_SHM=(2),
_DRM_AGP=(3),
_DRM_SCATTER_GATHER=(4),
_DRM_CONSISTENT=(5)
};

enum  drm_map_flags { _DRM_RESTRICTED=(0x01),
_DRM_READ_ONLY=(0x02),
_DRM_LOCKED=(0x04),
_DRM_KERNEL=(0x08),
_DRM_WRITE_COMBINING=(0x10),
_DRM_CONTAINS_LOCK=(0x20),
_DRM_REMOVABLE=(0x40),
_DRM_DRIVER=(0x80)
};

struct drm_ctx_priv_map
{
    unsigned int ctx_id;
    void* handle;
};

struct drm_map
{
    unsigned long  int offset;
    unsigned long  int size;
    enum drm_map_type type;
    enum drm_map_flags flags;
    void* handle;
    int mtrr;
};

struct drm_client
{
    int idx;
    int auth;
    unsigned long  int pid;
    unsigned long  int uid;
    unsigned long  int magic;
    unsigned long  int iocs;
};

enum  drm_stat_type { _DRM_STAT_LOCK 
,_DRM_STAT_OPENS 
,_DRM_STAT_CLOSES 
,_DRM_STAT_IOCTLS 
,_DRM_STAT_LOCKS 
,_DRM_STAT_UNLOCKS 
,_DRM_STAT_VALUE 
,_DRM_STAT_BYTE 
,_DRM_STAT_COUNT 
,_DRM_STAT_IRQ 
,_DRM_STAT_PRIMARY 
,_DRM_STAT_SECONDARY 
,_DRM_STAT_DMA 
,_DRM_STAT_SPECIAL 
,_DRM_STAT_MISSED 
};

struct anonymous_typeX153
{
    unsigned long  int value;
    enum drm_stat_type type;
};

struct anonymous_typeX154
{
    unsigned long  int value;
    enum drm_stat_type type;
};

struct drm_stats
{
    unsigned long  int count;
    struct {
        unsigned long  int value;
        enum drm_stat_type type;
    } data;
};

enum  drm_lock_flags { _DRM_LOCK_READY=(0x01),
_DRM_LOCK_QUIESCENT=(0x02),
_DRM_LOCK_FLUSH=(0x04),
_DRM_LOCK_FLUSH_ALL=(0x08),
_DRM_HALT_ALL_QUEUES=(0x10),
_DRM_HALT_CUR_QUEUES=(0x20)
};

struct drm_lock
{
    int context;
    enum drm_lock_flags flags;
};

enum  drm_dma_flags { _DRM_DMA_BLOCK=(0x01),
_DRM_DMA_WHILE_LOCKED=(0x02),
_DRM_DMA_PRIORITY=(0x04),
_DRM_DMA_WAIT=(0x10),
_DRM_DMA_SMALLER_OK=(0x20),
_DRM_DMA_LARGER_OK=(0x40)
};

enum  anonymous_typeY154 { _DRM_PAGE_ALIGN=(0x01),
_DRM_AGP_BUFFER=(0x02),
_DRM_SG_BUFFER=(0x04),
_DRM_FB_BUFFER=(0x08),
_DRM_PCI_BUFFER_RO=(0x10)
};

struct drm_buf_desc
{
    int count;
    int size;
    int low_mark;
    int high_mark;
    enum anonymous_typeY154 flags;
    unsigned long  int agp_start;
};

struct drm_buf_info
{
    int count;
    struct drm_buf_desc*  list  ;
};

struct drm_buf_free
{
    int count;
    int* list;
};

struct drm_buf_pub
{
    int idx;
    int total;
    int used;
    void* address;
};

struct drm_buf_map
{
    int count;
    void* virtual;
    struct drm_buf_pub*  list  ;
};

struct drm_dma
{
    int context;
    int send_count;
    int* send_indices;
    int* send_sizes;
    enum drm_dma_flags flags;
    int request_count;
    int request_size;
    int* request_indices;
    int* request_sizes;
    int granted_count;
};

enum  drm_ctx_flags { _DRM_CONTEXT_PRESERVED=(0x01),
_DRM_CONTEXT_2DONLY=(0x02)
};

struct drm_ctx
{
    unsigned int  handle  ;
    enum drm_ctx_flags flags;
};

struct drm_ctx_res
{
    int count;
    struct drm_ctx*  contexts  ;
};

struct drm_draw
{
    unsigned int  handle  ;
};

struct drm_update_draw
{
    unsigned int  handle  ;
    unsigned int type;
    unsigned int num;
    unsigned long  long data;
};

struct drm_auth
{
    unsigned int  magic  ;
};

struct drm_irq_busid
{
    int irq;
    int busnum;
    int devnum;
    int funcnum;
};

enum  drm_vblank_seq_type { _DRM_VBLANK_ABSOLUTE=(0x0),
_DRM_VBLANK_RELATIVE=(0x1),
_DRM_VBLANK_HIGH_CRTC_MASK=(0x0000003e),
_DRM_VBLANK_EVENT=(0x4000000),
_DRM_VBLANK_FLIP=(0x8000000),
_DRM_VBLANK_NEXTONMISS=(0x10000000),
_DRM_VBLANK_SECONDARY=(0x20000000),
_DRM_VBLANK_SIGNAL=(0x40000000)
};

struct drm_wait_vblank_request
{
    enum drm_vblank_seq_type type;
    unsigned int sequence;
    unsigned long  int signal;
};

struct drm_wait_vblank_reply
{
    enum drm_vblank_seq_type type;
    unsigned int sequence;
    long tval_sec;
    long tval_usec;
};

union drm_wait_vblank
{
struct drm_wait_vblank_request  request  ;
struct drm_wait_vblank_reply  reply  ;
};

struct drm_modeset_ctl
{
    unsigned int  crtc  ;
    unsigned int  cmd  ;
};

struct drm_agp_mode
{
    unsigned long  int mode;
};

struct drm_agp_buffer
{
    unsigned long  int size;
    unsigned long  int handle;
    unsigned long  int type;
    unsigned long  int physical;
};

struct drm_agp_binding
{
    unsigned long  int handle;
    unsigned long  int offset;
};

struct drm_agp_info
{
    int agp_version_major;
    int agp_version_minor;
    unsigned long  int mode;
    unsigned long  int aperture_base;
    unsigned long  int aperture_size;
    unsigned long  int memory_allowed;
    unsigned long  int memory_used;
    unsigned short int id_vendor;
    unsigned short int id_device;
};

struct drm_scatter_gather
{
    unsigned long  int size;
    unsigned long  int handle;
};

struct drm_set_version
{
    int drm_di_major;
    int drm_di_minor;
    int drm_dd_major;
    int drm_dd_minor;
};

struct drm_gem_close
{
    unsigned int  handle  ;
    unsigned int  pad  ;
};

struct drm_gem_flink
{
    unsigned int  handle  ;
    unsigned int  name  ;
};

struct drm_gem_open
{
    unsigned int  name  ;
    unsigned int  handle  ;
    unsigned long  long  size  ;
};

struct drm_get_cap
{
    unsigned long  long  capability  ;
    unsigned long  long  value  ;
};

struct drm_set_client_cap
{
    unsigned long  long  capability  ;
    unsigned long  long  value  ;
};

struct drm_prime_handle
{
    unsigned int  handle  ;
    unsigned int  flags  ;
    int  fd  ;
};

struct drm_syncobj_create
{
    unsigned int  handle  ;
    unsigned int  flags  ;
};

struct drm_syncobj_destroy
{
    unsigned int  handle  ;
    unsigned int  pad  ;
};

struct drm_syncobj_handle
{
    unsigned int  handle  ;
    unsigned int  flags  ;
    int  fd  ;
    unsigned int  pad  ;
    unsigned long  long  point  ;
};

struct drm_syncobj_transfer
{
    unsigned int  src_handle  ;
    unsigned int  dst_handle  ;
    unsigned long  long  src_point  ;
    unsigned long  long  dst_point  ;
    unsigned int  flags  ;
    unsigned int  pad  ;
};

struct drm_syncobj_wait
{
    unsigned long  long  handles  ;
    long long  timeout_nsec  ;
    unsigned int  count_handles  ;
    unsigned int  flags  ;
    unsigned int  first_signaled  ;
    unsigned int  pad  ;
    unsigned long  long  deadline_nsec  ;
};

struct drm_syncobj_timeline_wait
{
    unsigned long  long  handles  ;
    unsigned long  long  points  ;
    long long  timeout_nsec  ;
    unsigned int  count_handles  ;
    unsigned int  flags  ;
    unsigned int  first_signaled  ;
    unsigned int  pad  ;
    unsigned long  long  deadline_nsec  ;
};

struct drm_syncobj_eventfd
{
    unsigned int  handle  ;
    unsigned int  flags  ;
    unsigned long  long  point  ;
    int  fd  ;
    unsigned int  pad  ;
};

struct drm_syncobj_array
{
    unsigned long  long  handles  ;
    unsigned int  count_handles  ;
    unsigned int  pad  ;
};

struct drm_syncobj_timeline_array
{
    unsigned long  long  handles  ;
    unsigned long  long  points  ;
    unsigned int  count_handles  ;
    unsigned int  flags  ;
};

struct drm_crtc_get_sequence
{
    unsigned int  crtc_id  ;
    unsigned int  active  ;
    unsigned long  long  sequence  ;
    long long  sequence_ns  ;
};

struct drm_crtc_queue_sequence
{
    unsigned int  crtc_id  ;
    unsigned int  flags  ;
    unsigned long  long  sequence  ;
    unsigned long  long  user_data  ;
};

struct drm_set_client_name
{
    unsigned long  long  name_len  ;
    unsigned long  long  name  ;
};

struct drm_mode_modeinfo
{
    unsigned int  clock  ;
    unsigned short int  hdisplay  ;
    unsigned short int  hsync_start  ;
    unsigned short int  hsync_end  ;
    unsigned short int  htotal  ;
    unsigned short int  hskew  ;
    unsigned short int  vdisplay  ;
    unsigned short int  vsync_start  ;
    unsigned short int  vsync_end  ;
    unsigned short int  vtotal  ;
    unsigned short int  vscan  ;
    unsigned int  vrefresh  ;
    unsigned int  flags  ;
    unsigned int  type  ;
    char name[32];
};

struct drm_mode_card_res
{
    unsigned long  long  fb_id_ptr  ;
    unsigned long  long  crtc_id_ptr  ;
    unsigned long  long  connector_id_ptr  ;
    unsigned long  long  encoder_id_ptr  ;
    unsigned int  count_fbs  ;
    unsigned int  count_crtcs  ;
    unsigned int  count_connectors  ;
    unsigned int  count_encoders  ;
    unsigned int  min_width  ;
    unsigned int  max_width  ;
    unsigned int  min_height  ;
    unsigned int  max_height  ;
};

struct drm_mode_crtc
{
    unsigned long  long  set_connectors_ptr  ;
    unsigned int  count_connectors  ;
    unsigned int  crtc_id  ;
    unsigned int  fb_id  ;
    unsigned int  x  ;
    unsigned int  y  ;
    unsigned int  gamma_size  ;
    unsigned int  mode_valid  ;
    struct drm_mode_modeinfo  mode  ;
};

struct drm_mode_set_plane
{
    unsigned int  plane_id  ;
    unsigned int  crtc_id  ;
    unsigned int  fb_id  ;
    unsigned int  flags  ;
    int  crtc_x  ;
    int  crtc_y  ;
    unsigned int  crtc_w  ;
    unsigned int  crtc_h  ;
    unsigned int  src_x  ;
    unsigned int  src_y  ;
    unsigned int  src_h  ;
    unsigned int  src_w  ;
};

struct drm_mode_get_plane
{
    unsigned int  plane_id  ;
    unsigned int  crtc_id  ;
    unsigned int  fb_id  ;
    unsigned int  possible_crtcs  ;
    unsigned int  gamma_size  ;
    unsigned int  count_format_types  ;
    unsigned long  long  format_type_ptr  ;
};

struct drm_mode_get_plane_res
{
    unsigned long  long  plane_id_ptr  ;
    unsigned int  count_planes  ;
};

struct drm_mode_get_encoder
{
    unsigned int  encoder_id  ;
    unsigned int  encoder_type  ;
    unsigned int  crtc_id  ;
    unsigned int  possible_crtcs  ;
    unsigned int  possible_clones  ;
};

enum  drm_mode_subconnector { DRM_MODE_SUBCONNECTOR_Automatic=(0),
DRM_MODE_SUBCONNECTOR_Unknown=(0),
DRM_MODE_SUBCONNECTOR_VGA=(1),
DRM_MODE_SUBCONNECTOR_DVID=(3),
DRM_MODE_SUBCONNECTOR_DVIA=(4),
DRM_MODE_SUBCONNECTOR_Composite=(5),
DRM_MODE_SUBCONNECTOR_SVIDEO=(6),
DRM_MODE_SUBCONNECTOR_Component=(8),
DRM_MODE_SUBCONNECTOR_SCART=(9),
DRM_MODE_SUBCONNECTOR_DisplayPort=(10),
DRM_MODE_SUBCONNECTOR_HDMIA=(11),
DRM_MODE_SUBCONNECTOR_Native=(15),
DRM_MODE_SUBCONNECTOR_Wireless=(18)
};

struct drm_mode_get_connector
{
    unsigned long  long  encoders_ptr  ;
    unsigned long  long  modes_ptr  ;
    unsigned long  long  props_ptr  ;
    unsigned long  long  prop_values_ptr  ;
    unsigned int  count_modes  ;
    unsigned int  count_props  ;
    unsigned int  count_encoders  ;
    unsigned int  encoder_id  ;
    unsigned int  connector_id  ;
    unsigned int  connector_type  ;
    unsigned int  connector_type_id  ;
    unsigned int  connection  ;
    unsigned int  mm_width  ;
    unsigned int  mm_height  ;
    unsigned int  subpixel  ;
    unsigned int  pad  ;
};

struct drm_mode_property_enum
{
    unsigned long  long  value  ;
    char name[32];
};

struct drm_mode_get_property
{
    unsigned long  long  values_ptr  ;
    unsigned long  long  enum_blob_ptr  ;
    unsigned int  prop_id  ;
    unsigned int  flags  ;
    char name[32];
    unsigned int  count_values  ;
    unsigned int  count_enum_blobs  ;
};

struct drm_mode_connector_set_property
{
    unsigned long  long  value  ;
    unsigned int  prop_id  ;
    unsigned int  connector_id  ;
};

struct drm_mode_obj_get_properties
{
    unsigned long  long  props_ptr  ;
    unsigned long  long  prop_values_ptr  ;
    unsigned int  count_props  ;
    unsigned int  obj_id  ;
    unsigned int  obj_type  ;
};

struct drm_mode_obj_set_property
{
    unsigned long  long  value  ;
    unsigned int  prop_id  ;
    unsigned int  obj_id  ;
    unsigned int  obj_type  ;
};

struct drm_mode_get_blob
{
    unsigned int  blob_id  ;
    unsigned int  length  ;
    unsigned long  long  data  ;
};

struct drm_mode_fb_cmd
{
    unsigned int  fb_id  ;
    unsigned int  width  ;
    unsigned int  height  ;
    unsigned int  pitch  ;
    unsigned int  bpp  ;
    unsigned int  depth  ;
    unsigned int  handle  ;
};

struct drm_mode_fb_cmd2
{
    unsigned int  fb_id  ;
    unsigned int  width  ;
    unsigned int  height  ;
    unsigned int  pixel_format  ;
    unsigned int  flags  ;
    unsigned int  handles[4]  ;
    unsigned int  pitches[4]  ;
    unsigned int  offsets[4]  ;
    unsigned long  long  modifier[4]  ;
};

struct drm_mode_fb_dirty_cmd
{
    unsigned int  fb_id  ;
    unsigned int  flags  ;
    unsigned int  color  ;
    unsigned int  num_clips  ;
    unsigned long  long  clips_ptr  ;
};

struct drm_mode_mode_cmd
{
    unsigned int  connector_id  ;
    struct drm_mode_modeinfo  mode  ;
};

struct drm_mode_cursor
{
    unsigned int  flags  ;
    unsigned int  crtc_id  ;
    int  x  ;
    int  y  ;
    unsigned int  width  ;
    unsigned int  height  ;
    unsigned int  handle  ;
};

struct drm_mode_cursor2
{
    unsigned int  flags  ;
    unsigned int  crtc_id  ;
    int  x  ;
    int  y  ;
    unsigned int  width  ;
    unsigned int  height  ;
    unsigned int  handle  ;
    int  hot_x  ;
    int  hot_y  ;
};

struct drm_mode_crtc_lut
{
    unsigned int  crtc_id  ;
    unsigned int  gamma_size  ;
    unsigned long  long  red  ;
    unsigned long  long  green  ;
    unsigned long  long  blue  ;
};

struct drm_color_ctm
{
    unsigned long  long  matrix[9]  ;
};

struct drm_color_lut
{
    unsigned short int  red  ;
    unsigned short int  green  ;
    unsigned short int  blue  ;
    unsigned short int  reserved  ;
};

struct drm_plane_size_hint
{
    unsigned short int  width  ;
    unsigned short int  height  ;
};

struct anonymous_typeX155
{
    unsigned short int  x  ;
    unsigned short int  y  ;
};

struct anonymous_typeX156
{
    unsigned short int  x  ;
    unsigned short int  y  ;
};

struct anonymous_typeX157
{
    unsigned short int  x  ;
    unsigned short int  y  ;
};

struct anonymous_typeX158
{
    unsigned short int  x  ;
    unsigned short int  y  ;
};

struct hdr_metadata_infoframe
{
    unsigned char  eotf  ;
    unsigned char  metadata_type  ;
    struct {
        unsigned short int  x  ;
        unsigned short int  y  ;
    } display_primaries;
    struct {
        unsigned short int  x  ;
        unsigned short int  y  ;
    } white_point;
    unsigned short int  max_display_mastering_luminance  ;
    unsigned short int  min_display_mastering_luminance  ;
    unsigned short int  max_cll  ;
    unsigned short int  max_fall  ;
};

union anonymous_typeZ159
{
struct hdr_metadata_infoframe  hdmi_metadata_type1  ;
};

union anonymous_typeZ160
{
struct hdr_metadata_infoframe  hdmi_metadata_type1  ;
};

struct hdr_output_metadata
{
    unsigned int  metadata_type  ;
    union {
        struct hdr_metadata_infoframe  hdmi_metadata_type1  ;
    };
};

struct drm_mode_crtc_page_flip
{
    unsigned int  crtc_id  ;
    unsigned int  fb_id  ;
    unsigned int  flags  ;
    unsigned int  reserved  ;
    unsigned long  long  user_data  ;
};

struct drm_mode_crtc_page_flip_target
{
    unsigned int  crtc_id  ;
    unsigned int  fb_id  ;
    unsigned int  flags  ;
    unsigned int  sequence  ;
    unsigned long  long  user_data  ;
};

struct drm_mode_create_dumb
{
    unsigned int  height  ;
    unsigned int  width  ;
    unsigned int  bpp  ;
    unsigned int  flags  ;
    unsigned int  handle  ;
    unsigned int  pitch  ;
    unsigned long  long  size  ;
};

struct drm_mode_map_dumb
{
    unsigned int  handle  ;
    unsigned int  pad  ;
    unsigned long  long  offset  ;
};

struct drm_mode_destroy_dumb
{
    unsigned int  handle  ;
};

struct drm_mode_atomic
{
    unsigned int  flags  ;
    unsigned int  count_objs  ;
    unsigned long  long  objs_ptr  ;
    unsigned long  long  count_props_ptr  ;
    unsigned long  long  props_ptr  ;
    unsigned long  long  prop_values_ptr  ;
    unsigned long  long  reserved  ;
    unsigned long  long  user_data  ;
};

struct drm_format_modifier_blob
{
    unsigned int  version  ;
    unsigned int  flags  ;
    unsigned int  count_formats  ;
    unsigned int  formats_offset  ;
    unsigned int  count_modifiers  ;
    unsigned int  modifiers_offset  ;
};

struct drm_format_modifier
{
    unsigned long  long  formats  ;
    unsigned int  offset  ;
    unsigned int  pad  ;
    unsigned long  long  modifier  ;
};

struct drm_mode_create_blob
{
    unsigned long  long  data  ;
    unsigned int  length  ;
    unsigned int  blob_id  ;
};

struct drm_mode_destroy_blob
{
    unsigned int  blob_id  ;
};

struct drm_mode_create_lease
{
    unsigned long  long  object_ids  ;
    unsigned int  object_count  ;
    unsigned int  flags  ;
    unsigned int  lessee_id  ;
    unsigned int  fd  ;
};

struct drm_mode_list_lessees
{
    unsigned int  count_lessees  ;
    unsigned int  pad  ;
    unsigned long  long  lessees_ptr  ;
};

struct drm_mode_get_lease
{
    unsigned int  count_objects  ;
    unsigned int  pad  ;
    unsigned long  long  objects_ptr  ;
};

struct drm_mode_revoke_lease
{
    unsigned int  lessee_id  ;
};

struct drm_mode_rect
{
    int  x1  ;
    int  y1  ;
    int  x2  ;
    int  y2  ;
};

struct drm_mode_closefb
{
    unsigned int  fb_id  ;
    unsigned int  pad  ;
};

struct drm_event
{
    unsigned int  type  ;
    unsigned int  length  ;
};

struct drm_event_vblank
{
    struct drm_event  base  ;
    unsigned long  long  user_data  ;
    unsigned int  tv_sec  ;
    unsigned int  tv_usec  ;
    unsigned int  sequence  ;
    unsigned int  crtc_id  ;
};

struct drm_event_crtc_sequence
{
    struct drm_event  base  ;
    unsigned long  long  user_data  ;
    long long  time_ns  ;
    unsigned long  long  sequence  ;
};

struct in6_flowlabel_req
{
    struct in6_addr  flr_dst  ;
    unsigned int  flr_label  ;
    unsigned char  flr_action  ;
    unsigned char  flr_share  ;
    unsigned short int  flr_flags  ;
    unsigned short int  flr_expires  ;
    unsigned short int  flr_linger  ;
    unsigned int  __flr_pad  ;
};

enum  ib_uverbs_write_cmds { IB_USER_VERBS_CMD_GET_CONTEXT 
,IB_USER_VERBS_CMD_QUERY_DEVICE 
,IB_USER_VERBS_CMD_QUERY_PORT 
,IB_USER_VERBS_CMD_ALLOC_PD 
,IB_USER_VERBS_CMD_DEALLOC_PD 
,IB_USER_VERBS_CMD_CREATE_AH 
,IB_USER_VERBS_CMD_MODIFY_AH 
,IB_USER_VERBS_CMD_QUERY_AH 
,IB_USER_VERBS_CMD_DESTROY_AH 
,IB_USER_VERBS_CMD_REG_MR 
,IB_USER_VERBS_CMD_REG_SMR 
,IB_USER_VERBS_CMD_REREG_MR 
,IB_USER_VERBS_CMD_QUERY_MR 
,IB_USER_VERBS_CMD_DEREG_MR 
,IB_USER_VERBS_CMD_ALLOC_MW 
,IB_USER_VERBS_CMD_BIND_MW 
,IB_USER_VERBS_CMD_DEALLOC_MW 
,IB_USER_VERBS_CMD_CREATE_COMP_CHANNEL 
,IB_USER_VERBS_CMD_CREATE_CQ 
,IB_USER_VERBS_CMD_RESIZE_CQ 
,IB_USER_VERBS_CMD_DESTROY_CQ 
,IB_USER_VERBS_CMD_POLL_CQ 
,IB_USER_VERBS_CMD_PEEK_CQ 
,IB_USER_VERBS_CMD_REQ_NOTIFY_CQ 
,IB_USER_VERBS_CMD_CREATE_QP 
,IB_USER_VERBS_CMD_QUERY_QP 
,IB_USER_VERBS_CMD_MODIFY_QP 
,IB_USER_VERBS_CMD_DESTROY_QP 
,IB_USER_VERBS_CMD_POST_SEND 
,IB_USER_VERBS_CMD_POST_RECV 
,IB_USER_VERBS_CMD_ATTACH_MCAST 
,IB_USER_VERBS_CMD_DETACH_MCAST 
,IB_USER_VERBS_CMD_CREATE_SRQ 
,IB_USER_VERBS_CMD_MODIFY_SRQ 
,IB_USER_VERBS_CMD_QUERY_SRQ 
,IB_USER_VERBS_CMD_DESTROY_SRQ 
,IB_USER_VERBS_CMD_POST_SRQ_RECV 
,IB_USER_VERBS_CMD_OPEN_XRCD 
,IB_USER_VERBS_CMD_CLOSE_XRCD 
,IB_USER_VERBS_CMD_CREATE_XSRQ 
,IB_USER_VERBS_CMD_OPEN_QP 
};

enum { IB_USER_VERBS_EX_CMD_QUERY_DEVICE=((1)),
IB_USER_VERBS_EX_CMD_CREATE_CQ=((18)),
IB_USER_VERBS_EX_CMD_CREATE_QP=((24)),
IB_USER_VERBS_EX_CMD_MODIFY_QP=((26)),
IB_USER_VERBS_EX_CMD_CREATE_FLOW=(50),
IB_USER_VERBS_EX_CMD_DESTROY_FLOW 
,IB_USER_VERBS_EX_CMD_CREATE_WQ 
,IB_USER_VERBS_EX_CMD_MODIFY_WQ 
,IB_USER_VERBS_EX_CMD_DESTROY_WQ 
,IB_USER_VERBS_EX_CMD_CREATE_RWQ_IND_TBL 
,IB_USER_VERBS_EX_CMD_DESTROY_RWQ_IND_TBL 
,IB_USER_VERBS_EX_CMD_MODIFY_CQ 
};

enum  ib_placement_type { IB_FLUSH_GLOBAL=(1U<<0),
IB_FLUSH_PERSISTENT=(1U<<1)
};

enum  ib_selectivity_level { IB_FLUSH_RANGE=(0),
IB_FLUSH_MR 
};

struct ib_uverbs_async_event_desc
{
    unsigned long  long  element  __attribute__((aligned(8))) ;
    unsigned int  event_type  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_comp_event_desc
{
    unsigned long  long  cq_handle  __attribute__((aligned(8))) ;
};

struct ib_uverbs_cq_moderation_caps
{
    unsigned short int  max_cq_moderation_count  ;
    unsigned short int  max_cq_moderation_period  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_cmd_hdr
{
    unsigned int  command  ;
    unsigned short int  in_words  ;
    unsigned short int  out_words  ;
};

struct ib_uverbs_ex_cmd_hdr
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned short int  provider_in_words  ;
    unsigned short int  provider_out_words  ;
    unsigned int  cmd_hdr_reserved  ;
};

struct ib_uverbs_get_context
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_get_context_resp
{
    unsigned int  async_fd  ;
    unsigned int  num_comp_vectors  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_query_device
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_query_device_resp
{
    unsigned long  long  fw_ver  __attribute__((aligned(8))) ;
    unsigned long  long  node_guid  ;
    unsigned long  long  sys_image_guid  ;
    unsigned long  long  max_mr_size  __attribute__((aligned(8))) ;
    unsigned long  long  page_size_cap  __attribute__((aligned(8))) ;
    unsigned int  vendor_id  ;
    unsigned int  vendor_part_id  ;
    unsigned int  hw_ver  ;
    unsigned int  max_qp  ;
    unsigned int  max_qp_wr  ;
    unsigned int  device_cap_flags  ;
    unsigned int  max_sge  ;
    unsigned int  max_sge_rd  ;
    unsigned int  max_cq  ;
    unsigned int  max_cqe  ;
    unsigned int  max_mr  ;
    unsigned int  max_pd  ;
    unsigned int  max_qp_rd_atom  ;
    unsigned int  max_ee_rd_atom  ;
    unsigned int  max_res_rd_atom  ;
    unsigned int  max_qp_init_rd_atom  ;
    unsigned int  max_ee_init_rd_atom  ;
    unsigned int  atomic_cap  ;
    unsigned int  max_ee  ;
    unsigned int  max_rdd  ;
    unsigned int  max_mw  ;
    unsigned int  max_raw_ipv6_qp  ;
    unsigned int  max_raw_ethy_qp  ;
    unsigned int  max_mcast_grp  ;
    unsigned int  max_mcast_qp_attach  ;
    unsigned int  max_total_mcast_qp_attach  ;
    unsigned int  max_ah  ;
    unsigned int  max_fmr  ;
    unsigned int  max_map_per_fmr  ;
    unsigned int  max_srq  ;
    unsigned int  max_srq_wr  ;
    unsigned int  max_srq_sge  ;
    unsigned short int  max_pkeys  ;
    unsigned char  local_ca_ack_delay  ;
    unsigned char  phys_port_cnt  ;
    unsigned char  reserved[4]  ;
};

struct ib_uverbs_ex_query_device
{
    unsigned int  comp_mask  ;
    unsigned int  reserved  ;
};

enum  ib_uverbs_odp_general_cap_bits { IB_UVERBS_ODP_SUPPORT=(1<<0),
IB_UVERBS_ODP_SUPPORT_IMPLICIT=(1<<1)
};

enum  ib_uverbs_odp_transport_cap_bits { IB_UVERBS_ODP_SUPPORT_SEND=(1<<0),
IB_UVERBS_ODP_SUPPORT_RECV=(1<<1),
IB_UVERBS_ODP_SUPPORT_WRITE=(1<<2),
IB_UVERBS_ODP_SUPPORT_READ=(1<<3),
IB_UVERBS_ODP_SUPPORT_ATOMIC=(1<<4),
IB_UVERBS_ODP_SUPPORT_SRQ_RECV=(1<<5),
IB_UVERBS_ODP_SUPPORT_FLUSH=(1<<6),
IB_UVERBS_ODP_SUPPORT_ATOMIC_WRITE=(1<<7)
};

struct anonymous_typeX161
{
    unsigned int  rc_odp_caps  ;
    unsigned int  uc_odp_caps  ;
    unsigned int  ud_odp_caps  ;
};

struct anonymous_typeX162
{
    unsigned int  rc_odp_caps  ;
    unsigned int  uc_odp_caps  ;
    unsigned int  ud_odp_caps  ;
};

struct ib_uverbs_odp_caps
{
    unsigned long  long  general_caps  __attribute__((aligned(8))) ;
    struct {
        unsigned int  rc_odp_caps  ;
        unsigned int  uc_odp_caps  ;
        unsigned int  ud_odp_caps  ;
    } per_transport_caps;
    unsigned int  reserved  ;
};

struct ib_uverbs_rss_caps
{
    unsigned int  supported_qpts  ;
    unsigned int  max_rwq_indirection_tables  ;
    unsigned int  max_rwq_indirection_table_size  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_tm_caps
{
    unsigned int  max_rndv_hdr_size  ;
    unsigned int  max_num_tags  ;
    unsigned int  flags  ;
    unsigned int  max_ops  ;
    unsigned int  max_sge  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_ex_query_device_resp
{
    struct ib_uverbs_query_device_resp  base  ;
    unsigned int  comp_mask  ;
    unsigned int  response_length  ;
    struct ib_uverbs_odp_caps  odp_caps  ;
    unsigned long  long  timestamp_mask  __attribute__((aligned(8))) ;
    unsigned long  long  hca_core_clock  __attribute__((aligned(8))) ;
    unsigned long  long  device_cap_flags_ex  __attribute__((aligned(8))) ;
    struct ib_uverbs_rss_caps  rss_caps  ;
    unsigned int  max_wq_type_rq  ;
    unsigned int  raw_packet_caps  ;
    struct ib_uverbs_tm_caps  tm_caps  ;
    struct ib_uverbs_cq_moderation_caps  cq_moderation_caps  ;
    unsigned long  long  max_dm_size  __attribute__((aligned(8))) ;
    unsigned int  xrc_odp_caps  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_query_port
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned char  port_num  ;
    unsigned char  reserved[7]  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_query_port_resp
{
    unsigned int  port_cap_flags  ;
    unsigned int  max_msg_sz  ;
    unsigned int  bad_pkey_cntr  ;
    unsigned int  qkey_viol_cntr  ;
    unsigned int  gid_tbl_len  ;
    unsigned short int  pkey_tbl_len  ;
    unsigned short int  lid  ;
    unsigned short int  sm_lid  ;
    unsigned char  state  ;
    unsigned char  max_mtu  ;
    unsigned char  active_mtu  ;
    unsigned char  lmc  ;
    unsigned char  max_vl_num  ;
    unsigned char  sm_sl  ;
    unsigned char  subnet_timeout  ;
    unsigned char  init_type_reply  ;
    unsigned char  active_width  ;
    unsigned char  active_speed  ;
    unsigned char  phys_state  ;
    unsigned char  link_layer  ;
    unsigned char  flags  ;
    unsigned char  reserved  ;
};

struct ib_uverbs_alloc_pd
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_alloc_pd_resp
{
    unsigned int  pd_handle  ;
    unsigned int  driver_data[]  ;
};

struct ib_uverbs_dealloc_pd
{
    unsigned int  pd_handle  ;
};

struct ib_uverbs_open_xrcd
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  fd  ;
    unsigned int  oflags  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_open_xrcd_resp
{
    unsigned int  xrcd_handle  ;
    unsigned int  driver_data[]  ;
};

struct ib_uverbs_close_xrcd
{
    unsigned int  xrcd_handle  ;
};

struct ib_uverbs_reg_mr
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  start  __attribute__((aligned(8))) ;
    unsigned long  long  length  __attribute__((aligned(8))) ;
    unsigned long  long  hca_va  __attribute__((aligned(8))) ;
    unsigned int  pd_handle  ;
    unsigned int  access_flags  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_reg_mr_resp
{
    unsigned int  mr_handle  ;
    unsigned int  lkey  ;
    unsigned int  rkey  ;
    unsigned int  driver_data[]  ;
};

struct ib_uverbs_rereg_mr
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  mr_handle  ;
    unsigned int  flags  ;
    unsigned long  long  start  __attribute__((aligned(8))) ;
    unsigned long  long  length  __attribute__((aligned(8))) ;
    unsigned long  long  hca_va  __attribute__((aligned(8))) ;
    unsigned int  pd_handle  ;
    unsigned int  access_flags  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_rereg_mr_resp
{
    unsigned int  lkey  ;
    unsigned int  rkey  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_dereg_mr
{
    unsigned int  mr_handle  ;
};

struct ib_uverbs_alloc_mw
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  pd_handle  ;
    unsigned char  mw_type  ;
    unsigned char  reserved[3]  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_alloc_mw_resp
{
    unsigned int  mw_handle  ;
    unsigned int  rkey  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_dealloc_mw
{
    unsigned int  mw_handle  ;
};

struct ib_uverbs_create_comp_channel
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
};

struct ib_uverbs_create_comp_channel_resp
{
    unsigned int  fd  ;
};

struct ib_uverbs_create_cq
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  user_handle  __attribute__((aligned(8))) ;
    unsigned int  cqe  ;
    unsigned int  comp_vector  ;
    int  comp_channel  ;
    unsigned int  reserved  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

enum  ib_uverbs_ex_create_cq_flags { IB_UVERBS_CQ_FLAGS_TIMESTAMP_COMPLETION=(1<<0),
IB_UVERBS_CQ_FLAGS_IGNORE_OVERRUN=(1<<1)
};

struct ib_uverbs_ex_create_cq
{
    unsigned long  long  user_handle  __attribute__((aligned(8))) ;
    unsigned int  cqe  ;
    unsigned int  comp_vector  ;
    int  comp_channel  ;
    unsigned int  comp_mask  ;
    unsigned int  flags  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_create_cq_resp
{
    unsigned int  cq_handle  ;
    unsigned int  cqe  ;
    unsigned long  long  driver_data[0]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_ex_create_cq_resp
{
    struct ib_uverbs_create_cq_resp  base  ;
    unsigned int  comp_mask  ;
    unsigned int  response_length  ;
};

struct ib_uverbs_resize_cq
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  cq_handle  ;
    unsigned int  cqe  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_resize_cq_resp
{
    unsigned int  cqe  ;
    unsigned int  reserved  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_poll_cq
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  cq_handle  ;
    unsigned int  ne  ;
};

enum  ib_uverbs_wc_opcode { IB_UVERBS_WC_SEND=(0),
IB_UVERBS_WC_RDMA_WRITE=(1),
IB_UVERBS_WC_RDMA_READ=(2),
IB_UVERBS_WC_COMP_SWAP=(3),
IB_UVERBS_WC_FETCH_ADD=(4),
IB_UVERBS_WC_BIND_MW=(5),
IB_UVERBS_WC_LOCAL_INV=(6),
IB_UVERBS_WC_TSO=(7),
IB_UVERBS_WC_FLUSH=(8),
IB_UVERBS_WC_ATOMIC_WRITE=(9)
};

union anonymous_typeZ163
{
unsigned int  imm_data  ;
unsigned int  invalidate_rkey  ;
};

union anonymous_typeZ164
{
unsigned int  imm_data  ;
unsigned int  invalidate_rkey  ;
};

struct ib_uverbs_wc
{
    unsigned long  long  wr_id  __attribute__((aligned(8))) ;
    unsigned int  status  ;
    unsigned int  opcode  ;
    unsigned int  vendor_err  ;
    unsigned int  byte_len  ;
    union {
        unsigned int  imm_data  ;
        unsigned int  invalidate_rkey  ;
    } ex;
    unsigned int  qp_num  ;
    unsigned int  src_qp  ;
    unsigned int  wc_flags  ;
    unsigned short int  pkey_index  ;
    unsigned short int  slid  ;
    unsigned char  sl  ;
    unsigned char  dlid_path_bits  ;
    unsigned char  port_num  ;
    unsigned char  reserved  ;
};

struct ib_uverbs_poll_cq_resp
{
    unsigned int  count  ;
    unsigned int  reserved  ;
    struct ib_uverbs_wc  wc[]  ;
};

struct ib_uverbs_req_notify_cq
{
    unsigned int  cq_handle  ;
    unsigned int  solicited_only  ;
};

struct ib_uverbs_destroy_cq
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  cq_handle  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_destroy_cq_resp
{
    unsigned int  comp_events_reported  ;
    unsigned int  async_events_reported  ;
};

struct ib_uverbs_global_route
{
    unsigned char  dgid[16]  ;
    unsigned int  flow_label  ;
    unsigned char  sgid_index  ;
    unsigned char  hop_limit  ;
    unsigned char  traffic_class  ;
    unsigned char  reserved  ;
};

struct ib_uverbs_ah_attr
{
    struct ib_uverbs_global_route  grh  ;
    unsigned short int  dlid  ;
    unsigned char  sl  ;
    unsigned char  src_path_bits  ;
    unsigned char  static_rate  ;
    unsigned char  is_global  ;
    unsigned char  port_num  ;
    unsigned char  reserved  ;
};

struct ib_uverbs_qp_attr
{
    unsigned int  qp_attr_mask  ;
    unsigned int  qp_state  ;
    unsigned int  cur_qp_state  ;
    unsigned int  path_mtu  ;
    unsigned int  path_mig_state  ;
    unsigned int  qkey  ;
    unsigned int  rq_psn  ;
    unsigned int  sq_psn  ;
    unsigned int  dest_qp_num  ;
    unsigned int  qp_access_flags  ;
    struct ib_uverbs_ah_attr  ah_attr  ;
    struct ib_uverbs_ah_attr  alt_ah_attr  ;
    unsigned int  max_send_wr  ;
    unsigned int  max_recv_wr  ;
    unsigned int  max_send_sge  ;
    unsigned int  max_recv_sge  ;
    unsigned int  max_inline_data  ;
    unsigned short int  pkey_index  ;
    unsigned short int  alt_pkey_index  ;
    unsigned char  en_sqd_async_notify  ;
    unsigned char  sq_draining  ;
    unsigned char  max_rd_atomic  ;
    unsigned char  max_dest_rd_atomic  ;
    unsigned char  min_rnr_timer  ;
    unsigned char  port_num  ;
    unsigned char  timeout  ;
    unsigned char  retry_cnt  ;
    unsigned char  rnr_retry  ;
    unsigned char  alt_port_num  ;
    unsigned char  alt_timeout  ;
    unsigned char  reserved[5]  ;
};

struct ib_uverbs_create_qp
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  user_handle  __attribute__((aligned(8))) ;
    unsigned int  pd_handle  ;
    unsigned int  send_cq_handle  ;
    unsigned int  recv_cq_handle  ;
    unsigned int  srq_handle  ;
    unsigned int  max_send_wr  ;
    unsigned int  max_recv_wr  ;
    unsigned int  max_send_sge  ;
    unsigned int  max_recv_sge  ;
    unsigned int  max_inline_data  ;
    unsigned char  sq_sig_all  ;
    unsigned char  qp_type  ;
    unsigned char  is_srq  ;
    unsigned char  reserved  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

enum  ib_uverbs_create_qp_mask { IB_UVERBS_CREATE_QP_MASK_IND_TABLE=(1UL<<0)
};

enum { IB_UVERBS_CREATE_QP_SUP_COMP_MASK=((1UL<<0))
};

struct ib_uverbs_ex_create_qp
{
    unsigned long  long  user_handle  __attribute__((aligned(8))) ;
    unsigned int  pd_handle  ;
    unsigned int  send_cq_handle  ;
    unsigned int  recv_cq_handle  ;
    unsigned int  srq_handle  ;
    unsigned int  max_send_wr  ;
    unsigned int  max_recv_wr  ;
    unsigned int  max_send_sge  ;
    unsigned int  max_recv_sge  ;
    unsigned int  max_inline_data  ;
    unsigned char  sq_sig_all  ;
    unsigned char  qp_type  ;
    unsigned char  is_srq  ;
    unsigned char  reserved  ;
    unsigned int  comp_mask  ;
    unsigned int  create_flags  ;
    unsigned int  rwq_ind_tbl_handle  ;
    unsigned int  source_qpn  ;
};

struct ib_uverbs_open_qp
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  user_handle  __attribute__((aligned(8))) ;
    unsigned int  pd_handle  ;
    unsigned int  qpn  ;
    unsigned char  qp_type  ;
    unsigned char  reserved[7]  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_create_qp_resp
{
    unsigned int  qp_handle  ;
    unsigned int  qpn  ;
    unsigned int  max_send_wr  ;
    unsigned int  max_recv_wr  ;
    unsigned int  max_send_sge  ;
    unsigned int  max_recv_sge  ;
    unsigned int  max_inline_data  ;
    unsigned int  reserved  ;
    unsigned int  driver_data[0]  ;
};

struct ib_uverbs_ex_create_qp_resp
{
    struct ib_uverbs_create_qp_resp  base  ;
    unsigned int  comp_mask  ;
    unsigned int  response_length  ;
};

struct ib_uverbs_qp_dest
{
    unsigned char  dgid[16]  ;
    unsigned int  flow_label  ;
    unsigned short int  dlid  ;
    unsigned short int  reserved  ;
    unsigned char  sgid_index  ;
    unsigned char  hop_limit  ;
    unsigned char  traffic_class  ;
    unsigned char  sl  ;
    unsigned char  src_path_bits  ;
    unsigned char  static_rate  ;
    unsigned char  is_global  ;
    unsigned char  port_num  ;
};

struct ib_uverbs_query_qp
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  qp_handle  ;
    unsigned int  attr_mask  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_query_qp_resp
{
    struct ib_uverbs_qp_dest  dest  ;
    struct ib_uverbs_qp_dest  alt_dest  ;
    unsigned int  max_send_wr  ;
    unsigned int  max_recv_wr  ;
    unsigned int  max_send_sge  ;
    unsigned int  max_recv_sge  ;
    unsigned int  max_inline_data  ;
    unsigned int  qkey  ;
    unsigned int  rq_psn  ;
    unsigned int  sq_psn  ;
    unsigned int  dest_qp_num  ;
    unsigned int  qp_access_flags  ;
    unsigned short int  pkey_index  ;
    unsigned short int  alt_pkey_index  ;
    unsigned char  qp_state  ;
    unsigned char  cur_qp_state  ;
    unsigned char  path_mtu  ;
    unsigned char  path_mig_state  ;
    unsigned char  sq_draining  ;
    unsigned char  max_rd_atomic  ;
    unsigned char  max_dest_rd_atomic  ;
    unsigned char  min_rnr_timer  ;
    unsigned char  port_num  ;
    unsigned char  timeout  ;
    unsigned char  retry_cnt  ;
    unsigned char  rnr_retry  ;
    unsigned char  alt_port_num  ;
    unsigned char  alt_timeout  ;
    unsigned char  sq_sig_all  ;
    unsigned char  reserved[5]  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_modify_qp
{
    struct ib_uverbs_qp_dest  dest  ;
    struct ib_uverbs_qp_dest  alt_dest  ;
    unsigned int  qp_handle  ;
    unsigned int  attr_mask  ;
    unsigned int  qkey  ;
    unsigned int  rq_psn  ;
    unsigned int  sq_psn  ;
    unsigned int  dest_qp_num  ;
    unsigned int  qp_access_flags  ;
    unsigned short int  pkey_index  ;
    unsigned short int  alt_pkey_index  ;
    unsigned char  qp_state  ;
    unsigned char  cur_qp_state  ;
    unsigned char  path_mtu  ;
    unsigned char  path_mig_state  ;
    unsigned char  en_sqd_async_notify  ;
    unsigned char  max_rd_atomic  ;
    unsigned char  max_dest_rd_atomic  ;
    unsigned char  min_rnr_timer  ;
    unsigned char  port_num  ;
    unsigned char  timeout  ;
    unsigned char  retry_cnt  ;
    unsigned char  rnr_retry  ;
    unsigned char  alt_port_num  ;
    unsigned char  alt_timeout  ;
    unsigned char  reserved[2]  ;
    unsigned long  long  driver_data[0]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_ex_modify_qp
{
    struct ib_uverbs_modify_qp  base  ;
    unsigned int  rate_limit  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_ex_modify_qp_resp
{
    unsigned int  comp_mask  ;
    unsigned int  response_length  ;
};

struct ib_uverbs_destroy_qp
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  qp_handle  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_destroy_qp_resp
{
    unsigned int  events_reported  ;
};

struct ib_uverbs_sge
{
    unsigned long  long  addr  __attribute__((aligned(8))) ;
    unsigned int  length  ;
    unsigned int  lkey  ;
};

enum  ib_uverbs_wr_opcode { IB_UVERBS_WR_RDMA_WRITE=(0),
IB_UVERBS_WR_RDMA_WRITE_WITH_IMM=(1),
IB_UVERBS_WR_SEND=(2),
IB_UVERBS_WR_SEND_WITH_IMM=(3),
IB_UVERBS_WR_RDMA_READ=(4),
IB_UVERBS_WR_ATOMIC_CMP_AND_SWP=(5),
IB_UVERBS_WR_ATOMIC_FETCH_AND_ADD=(6),
IB_UVERBS_WR_LOCAL_INV=(7),
IB_UVERBS_WR_BIND_MW=(8),
IB_UVERBS_WR_SEND_WITH_INV=(9),
IB_UVERBS_WR_TSO=(10),
IB_UVERBS_WR_RDMA_READ_WITH_INV=(11),
IB_UVERBS_WR_MASKED_ATOMIC_CMP_AND_SWP=(12),
IB_UVERBS_WR_MASKED_ATOMIC_FETCH_AND_ADD=(13),
IB_UVERBS_WR_FLUSH=(14),
IB_UVERBS_WR_ATOMIC_WRITE=(15)
};

union anonymous_typeZ165
{
unsigned int  imm_data  ;
unsigned int  invalidate_rkey  ;
};

union anonymous_typeZ166
{
unsigned int  imm_data  ;
unsigned int  invalidate_rkey  ;
};

struct anonymous_typeX168
{
    unsigned long  long  remote_addr  __attribute__((aligned(8))) ;
    unsigned int  rkey  ;
    unsigned int  reserved  ;
};

struct anonymous_typeX169
{
    unsigned long  long  remote_addr  __attribute__((aligned(8))) ;
    unsigned long  long  compare_add  __attribute__((aligned(8))) ;
    unsigned long  long  swap  __attribute__((aligned(8))) ;
    unsigned int  rkey  ;
    unsigned int  reserved  ;
};

struct anonymous_typeX170
{
    unsigned int  ah  ;
    unsigned int  remote_qpn  ;
    unsigned int  remote_qkey  ;
    unsigned int  reserved  ;
};

union anonymous_typeZ167
{
    struct {
        unsigned long  long  remote_addr  __attribute__((aligned(8))) ;
        unsigned int  rkey  ;
        unsigned int  reserved  ;
    } rdma;
    struct {
        unsigned long  long  remote_addr  __attribute__((aligned(8))) ;
        unsigned long  long  compare_add  __attribute__((aligned(8))) ;
        unsigned long  long  swap  __attribute__((aligned(8))) ;
        unsigned int  rkey  ;
        unsigned int  reserved  ;
    } atomic;
    struct {
        unsigned int  ah  ;
        unsigned int  remote_qpn  ;
        unsigned int  remote_qkey  ;
        unsigned int  reserved  ;
    } ud;
};

struct anonymous_typeX172
{
    unsigned long  long  remote_addr  __attribute__((aligned(8))) ;
    unsigned int  rkey  ;
    unsigned int  reserved  ;
};

struct anonymous_typeX173
{
    unsigned long  long  remote_addr  __attribute__((aligned(8))) ;
    unsigned long  long  compare_add  __attribute__((aligned(8))) ;
    unsigned long  long  swap  __attribute__((aligned(8))) ;
    unsigned int  rkey  ;
    unsigned int  reserved  ;
};

struct anonymous_typeX174
{
    unsigned int  ah  ;
    unsigned int  remote_qpn  ;
    unsigned int  remote_qkey  ;
    unsigned int  reserved  ;
};

union anonymous_typeZ171
{
    struct {
        unsigned long  long  remote_addr  __attribute__((aligned(8))) ;
        unsigned int  rkey  ;
        unsigned int  reserved  ;
    } rdma;
    struct {
        unsigned long  long  remote_addr  __attribute__((aligned(8))) ;
        unsigned long  long  compare_add  __attribute__((aligned(8))) ;
        unsigned long  long  swap  __attribute__((aligned(8))) ;
        unsigned int  rkey  ;
        unsigned int  reserved  ;
    } atomic;
    struct {
        unsigned int  ah  ;
        unsigned int  remote_qpn  ;
        unsigned int  remote_qkey  ;
        unsigned int  reserved  ;
    } ud;
};

struct ib_uverbs_send_wr
{
    unsigned long  long  wr_id  __attribute__((aligned(8))) ;
    unsigned int  num_sge  ;
    unsigned int  opcode  ;
    unsigned int  send_flags  ;
    union {
        unsigned int  imm_data  ;
        unsigned int  invalidate_rkey  ;
    } ex;
    union {
        struct {
            unsigned long  long  remote_addr  __attribute__((aligned(8))) ;
            unsigned int  rkey  ;
            unsigned int  reserved  ;
        } rdma;
        struct {
            unsigned long  long  remote_addr  __attribute__((aligned(8))) ;
            unsigned long  long  compare_add  __attribute__((aligned(8))) ;
            unsigned long  long  swap  __attribute__((aligned(8))) ;
            unsigned int  rkey  ;
            unsigned int  reserved  ;
        } atomic;
        struct {
            unsigned int  ah  ;
            unsigned int  remote_qpn  ;
            unsigned int  remote_qkey  ;
            unsigned int  reserved  ;
        } ud;
    } wr;
};

struct ib_uverbs_post_send
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  qp_handle  ;
    unsigned int  wr_count  ;
    unsigned int  sge_count  ;
    unsigned int  wqe_size  ;
    struct ib_uverbs_send_wr  send_wr[]  ;
};

struct ib_uverbs_post_send_resp
{
    unsigned int  bad_wr  ;
};

struct ib_uverbs_recv_wr
{
    unsigned long  long  wr_id  __attribute__((aligned(8))) ;
    unsigned int  num_sge  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_post_recv
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  qp_handle  ;
    unsigned int  wr_count  ;
    unsigned int  sge_count  ;
    unsigned int  wqe_size  ;
    struct ib_uverbs_recv_wr  recv_wr[]  ;
};

struct ib_uverbs_post_recv_resp
{
    unsigned int  bad_wr  ;
};

struct ib_uverbs_post_srq_recv
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  srq_handle  ;
    unsigned int  wr_count  ;
    unsigned int  sge_count  ;
    unsigned int  wqe_size  ;
    struct ib_uverbs_recv_wr  recv[]  ;
};

struct ib_uverbs_post_srq_recv_resp
{
    unsigned int  bad_wr  ;
};

struct ib_uverbs_create_ah
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  user_handle  __attribute__((aligned(8))) ;
    unsigned int  pd_handle  ;
    unsigned int  reserved  ;
    struct ib_uverbs_ah_attr  attr  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_create_ah_resp
{
    unsigned int  ah_handle  ;
    unsigned int  driver_data[]  ;
};

struct ib_uverbs_destroy_ah
{
    unsigned int  ah_handle  ;
};

struct ib_uverbs_attach_mcast
{
    unsigned char  gid[16]  ;
    unsigned int  qp_handle  ;
    unsigned short int  mlid  ;
    unsigned short int  reserved  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_detach_mcast
{
    unsigned char  gid[16]  ;
    unsigned int  qp_handle  ;
    unsigned short int  mlid  ;
    unsigned short int  reserved  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_flow_spec_hdr
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
    unsigned long  long  flow_spec_data[0]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_flow_eth_filter
{
    unsigned char  dst_mac[6]  ;
    unsigned char  src_mac[6]  ;
    unsigned short int  ether_type  ;
    unsigned short int  vlan_tag  ;
};

struct anonymous_typeX176
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ175
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX178
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ177
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_eth
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    struct ib_uverbs_flow_eth_filter  val  ;
    struct ib_uverbs_flow_eth_filter  mask  ;
};

struct ib_uverbs_flow_ipv4_filter
{
    unsigned int  src_ip  ;
    unsigned int  dst_ip  ;
    unsigned char  proto  ;
    unsigned char  tos  ;
    unsigned char  ttl  ;
    unsigned char  flags  ;
};

struct anonymous_typeX180
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ179
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX182
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ181
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_ipv4
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    struct ib_uverbs_flow_ipv4_filter  val  ;
    struct ib_uverbs_flow_ipv4_filter  mask  ;
};

struct ib_uverbs_flow_tcp_udp_filter
{
    unsigned short int  dst_port  ;
    unsigned short int  src_port  ;
};

struct anonymous_typeX184
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ183
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX186
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ185
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_tcp_udp
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    struct ib_uverbs_flow_tcp_udp_filter  val  ;
    struct ib_uverbs_flow_tcp_udp_filter  mask  ;
};

struct ib_uverbs_flow_ipv6_filter
{
    unsigned char  src_ip[16]  ;
    unsigned char  dst_ip[16]  ;
    unsigned int  flow_label  ;
    unsigned char  next_hdr  ;
    unsigned char  traffic_class  ;
    unsigned char  hop_limit  ;
    unsigned char  reserved  ;
};

struct anonymous_typeX188
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ187
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX190
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ189
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_ipv6
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    struct ib_uverbs_flow_ipv6_filter  val  ;
    struct ib_uverbs_flow_ipv6_filter  mask  ;
};

struct anonymous_typeX192
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ191
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX194
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ193
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_action_tag
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    unsigned int  tag_id  ;
    unsigned int  reserved1  ;
};

struct anonymous_typeX196
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ195
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX198
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ197
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_action_drop
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
};

struct anonymous_typeX200
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ199
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX202
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ201
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_action_handle
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    unsigned int  handle  ;
    unsigned int  reserved1  ;
};

struct anonymous_typeX204
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ203
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX206
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ205
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_action_count
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    unsigned int  handle  ;
    unsigned int  reserved1  ;
};

struct ib_uverbs_flow_tunnel_filter
{
    unsigned int  tunnel_id  ;
};

struct anonymous_typeX208
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ207
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX210
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ209
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_tunnel
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    struct ib_uverbs_flow_tunnel_filter  val  ;
    struct ib_uverbs_flow_tunnel_filter  mask  ;
};

struct ib_uverbs_flow_spec_esp_filter
{
    unsigned int  spi  ;
    unsigned int  seq  ;
};

struct anonymous_typeX212
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ211
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX214
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ213
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_esp
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    struct ib_uverbs_flow_spec_esp_filter  val  ;
    struct ib_uverbs_flow_spec_esp_filter  mask  ;
};

struct ib_uverbs_flow_gre_filter
{
    unsigned short int  c_ks_res0_ver  ;
    unsigned short int  protocol  ;
    unsigned int  key  ;
};

struct anonymous_typeX216
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ215
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX218
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ217
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_gre
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    struct ib_uverbs_flow_gre_filter  val  ;
    struct ib_uverbs_flow_gre_filter  mask  ;
};

struct ib_uverbs_flow_mpls_filter
{
    unsigned int  label  ;
};

struct anonymous_typeX220
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ219
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct anonymous_typeX222
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  reserved  ;
};

union anonymous_typeZ221
{
struct ib_uverbs_flow_spec_hdr  hdr  ;
    struct {
        unsigned int  type  ;
        unsigned short int  size  ;
        unsigned short int  reserved  ;
    };
};

struct ib_uverbs_flow_spec_mpls
{
    union {
        struct ib_uverbs_flow_spec_hdr  hdr  ;
        struct {
            unsigned int  type  ;
            unsigned short int  size  ;
            unsigned short int  reserved  ;
        };
    };
    struct ib_uverbs_flow_mpls_filter  val  ;
    struct ib_uverbs_flow_mpls_filter  mask  ;
};

struct ib_uverbs_flow_attr
{
    unsigned int  type  ;
    unsigned short int  size  ;
    unsigned short int  priority  ;
    unsigned char  num_of_specs  ;
    unsigned char  reserved[2]  ;
    unsigned char  port  ;
    unsigned int  flags  ;
    struct ib_uverbs_flow_spec_hdr  flow_specs[]  ;
};

struct ib_uverbs_create_flow
{
    unsigned int  comp_mask  ;
    unsigned int  qp_handle  ;
    struct ib_uverbs_flow_attr  flow_attr  ;
};

struct ib_uverbs_create_flow_resp
{
    unsigned int  comp_mask  ;
    unsigned int  flow_handle  ;
};

struct ib_uverbs_destroy_flow
{
    unsigned int  comp_mask  ;
    unsigned int  flow_handle  ;
};

struct ib_uverbs_create_srq
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  user_handle  __attribute__((aligned(8))) ;
    unsigned int  pd_handle  ;
    unsigned int  max_wr  ;
    unsigned int  max_sge  ;
    unsigned int  srq_limit  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_create_xsrq
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  user_handle  __attribute__((aligned(8))) ;
    unsigned int  srq_type  ;
    unsigned int  pd_handle  ;
    unsigned int  max_wr  ;
    unsigned int  max_sge  ;
    unsigned int  srq_limit  ;
    unsigned int  max_num_tags  ;
    unsigned int  xrcd_handle  ;
    unsigned int  cq_handle  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_create_srq_resp
{
    unsigned int  srq_handle  ;
    unsigned int  max_wr  ;
    unsigned int  max_sge  ;
    unsigned int  srqn  ;
    unsigned int  driver_data[]  ;
};

struct ib_uverbs_modify_srq
{
    unsigned int  srq_handle  ;
    unsigned int  attr_mask  ;
    unsigned int  max_wr  ;
    unsigned int  srq_limit  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_query_srq
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  srq_handle  ;
    unsigned int  reserved  ;
    unsigned long  long  driver_data[]  __attribute__((aligned(8))) ;
};

struct ib_uverbs_query_srq_resp
{
    unsigned int  max_wr  ;
    unsigned int  max_sge  ;
    unsigned int  srq_limit  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_destroy_srq
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  srq_handle  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_destroy_srq_resp
{
    unsigned int  events_reported  ;
};

struct ib_uverbs_ex_create_wq
{
    unsigned int  comp_mask  ;
    unsigned int  wq_type  ;
    unsigned long  long  user_handle  __attribute__((aligned(8))) ;
    unsigned int  pd_handle  ;
    unsigned int  cq_handle  ;
    unsigned int  max_wr  ;
    unsigned int  max_sge  ;
    unsigned int  create_flags  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_ex_create_wq_resp
{
    unsigned int  comp_mask  ;
    unsigned int  response_length  ;
    unsigned int  wq_handle  ;
    unsigned int  max_wr  ;
    unsigned int  max_sge  ;
    unsigned int  wqn  ;
};

struct ib_uverbs_ex_destroy_wq
{
    unsigned int  comp_mask  ;
    unsigned int  wq_handle  ;
};

struct ib_uverbs_ex_destroy_wq_resp
{
    unsigned int  comp_mask  ;
    unsigned int  response_length  ;
    unsigned int  events_reported  ;
    unsigned int  reserved  ;
};

struct ib_uverbs_ex_modify_wq
{
    unsigned int  attr_mask  ;
    unsigned int  wq_handle  ;
    unsigned int  wq_state  ;
    unsigned int  curr_wq_state  ;
    unsigned int  flags  ;
    unsigned int  flags_mask  ;
};

struct ib_uverbs_ex_create_rwq_ind_table
{
    unsigned int  comp_mask  ;
    unsigned int  log_ind_tbl_size  ;
    unsigned int  wq_handles[]  ;
};

struct ib_uverbs_ex_create_rwq_ind_table_resp
{
    unsigned int  comp_mask  ;
    unsigned int  response_length  ;
    unsigned int  ind_tbl_handle  ;
    unsigned int  ind_tbl_num  ;
};

struct ib_uverbs_ex_destroy_rwq_ind_table
{
    unsigned int  comp_mask  ;
    unsigned int  ind_tbl_handle  ;
};

struct ib_uverbs_cq_moderation
{
    unsigned short int  cq_count  ;
    unsigned short int  cq_period  ;
};

struct ib_uverbs_ex_modify_cq
{
    unsigned int  cq_handle  ;
    unsigned int  attr_mask  ;
    struct ib_uverbs_cq_moderation  attr  ;
    unsigned int  reserved  ;
};

enum  ib_uverbs_device_cap_flags { IB_UVERBS_DEVICE_RESIZE_MAX_WR=(1<<0),
IB_UVERBS_DEVICE_BAD_PKEY_CNTR=(1<<1),
IB_UVERBS_DEVICE_BAD_QKEY_CNTR=(1<<2),
IB_UVERBS_DEVICE_RAW_MULTI=(1<<3),
IB_UVERBS_DEVICE_AUTO_PATH_MIG=(1<<4),
IB_UVERBS_DEVICE_CHANGE_PHY_PORT=(1<<5),
IB_UVERBS_DEVICE_UD_AV_PORT_ENFORCE=(1<<6),
IB_UVERBS_DEVICE_CURR_QP_STATE_MOD=(1<<7),
IB_UVERBS_DEVICE_SHUTDOWN_PORT=(1<<8),
IB_UVERBS_DEVICE_PORT_ACTIVE_EVENT=(1<<10),
IB_UVERBS_DEVICE_SYS_IMAGE_GUID=(1<<11),
IB_UVERBS_DEVICE_RC_RNR_NAK_GEN=(1<<12),
IB_UVERBS_DEVICE_SRQ_RESIZE=(1<<13),
IB_UVERBS_DEVICE_N_NOTIFY_CQ=(1<<14),
IB_UVERBS_DEVICE_MEM_WINDOW=(1<<17),
IB_UVERBS_DEVICE_UD_IP_CSUM=(1<<18),
IB_UVERBS_DEVICE_XRC=(1<<20),
IB_UVERBS_DEVICE_MEM_MGT_EXTENSIONS=(1<<21),
IB_UVERBS_DEVICE_MEM_WINDOW_TYPE_2A=(1<<23),
IB_UVERBS_DEVICE_MEM_WINDOW_TYPE_2B=(1<<24),
IB_UVERBS_DEVICE_RC_IP_CSUM=(1<<25),
IB_UVERBS_DEVICE_RAW_IP_CSUM=(1<<26),
IB_UVERBS_DEVICE_MANAGED_FLOW_STEERING=(1<<29),
IB_UVERBS_DEVICE_RAW_SCATTER_FCS=(1ULL<<34),
IB_UVERBS_DEVICE_PCI_WRITE_END_PADDING=(1ULL<<36),
IB_UVERBS_DEVICE_FLUSH_GLOBAL=(1ULL<<38),
IB_UVERBS_DEVICE_FLUSH_PERSISTENT=(1ULL<<39),
IB_UVERBS_DEVICE_ATOMIC_WRITE=(1ULL<<40)
};

enum  ib_uverbs_raw_packet_caps { IB_UVERBS_RAW_PACKET_CAP_CVLAN_STRIPPING=(1<<0),
IB_UVERBS_RAW_PACKET_CAP_SCATTER_FCS=(1<<1),
IB_UVERBS_RAW_PACKET_CAP_IP_CSUM=(1<<2),
IB_UVERBS_RAW_PACKET_CAP_DELAY_DROP=(1<<3)
};

enum { IB_PATH_GMP=(1),
IB_PATH_PRIMARY=((1<<1)),
IB_PATH_ALTERNATE=((1<<2)),
IB_PATH_OUTBOUND=((1<<3)),
IB_PATH_INBOUND=((1<<4)),
IB_PATH_INBOUND_REVERSE=((1<<5)),
IB_PATH_BIDIRECTIONAL=(((1<<3))|((1<<5)))
};

struct ib_path_rec_data
{
    unsigned int  flags  ;
    unsigned int  reserved  ;
    unsigned int  path_rec[16]  ;
};

struct ib_user_path_rec
{
    unsigned char  dgid[16]  ;
    unsigned char  sgid[16]  ;
    unsigned short int  dlid  ;
    unsigned short int  slid  ;
    unsigned int  raw_traffic  ;
    unsigned int  flow_label  ;
    unsigned int  reversible  ;
    unsigned int  mtu  ;
    unsigned short int  pkey  ;
    unsigned char  hop_limit  ;
    unsigned char  traffic_class  ;
    unsigned char  numb_path  ;
    unsigned char  sl  ;
    unsigned char  mtu_selector  ;
    unsigned char  rate_selector  ;
    unsigned char  rate  ;
    unsigned char  packet_life_time_selector  ;
    unsigned char  packet_life_time  ;
    unsigned char  preference  ;
};

enum { RDMA_USER_CM_CMD_CREATE_ID 
,RDMA_USER_CM_CMD_DESTROY_ID 
,RDMA_USER_CM_CMD_BIND_IP 
,RDMA_USER_CM_CMD_RESOLVE_IP 
,RDMA_USER_CM_CMD_RESOLVE_ROUTE 
,RDMA_USER_CM_CMD_QUERY_ROUTE 
,RDMA_USER_CM_CMD_CONNECT 
,RDMA_USER_CM_CMD_LISTEN 
,RDMA_USER_CM_CMD_ACCEPT 
,RDMA_USER_CM_CMD_REJECT 
,RDMA_USER_CM_CMD_DISCONNECT 
,RDMA_USER_CM_CMD_INIT_QP_ATTR 
,RDMA_USER_CM_CMD_GET_EVENT 
,RDMA_USER_CM_CMD_GET_OPTION 
,RDMA_USER_CM_CMD_SET_OPTION 
,RDMA_USER_CM_CMD_NOTIFY 
,RDMA_USER_CM_CMD_JOIN_IP_MCAST 
,RDMA_USER_CM_CMD_LEAVE_MCAST 
,RDMA_USER_CM_CMD_MIGRATE_ID 
,RDMA_USER_CM_CMD_QUERY 
,RDMA_USER_CM_CMD_BIND 
,RDMA_USER_CM_CMD_RESOLVE_ADDR 
,RDMA_USER_CM_CMD_JOIN_MCAST 
};

enum  rdma_ucm_port_space { RDMA_PS_IPOIB=(0x0002),
RDMA_PS_IB=(0x013F),
RDMA_PS_TCP=(0x0106),
RDMA_PS_UDP=(0x0111)
};

struct rdma_ucm_cmd_hdr
{
    unsigned int  cmd  ;
    unsigned short int  in  ;
    unsigned short int  out  ;
};

struct rdma_ucm_create_id
{
    unsigned long  long  uid  __attribute__((aligned(8))) ;
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned short int  ps  ;
    unsigned char  qp_type  ;
    unsigned char  reserved[5]  ;
};

struct rdma_ucm_create_id_resp
{
    unsigned int  id  ;
};

struct rdma_ucm_destroy_id
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  id  ;
    unsigned int  reserved  ;
};

struct rdma_ucm_destroy_id_resp
{
    unsigned int  events_reported  ;
};

struct rdma_ucm_bind_ip
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    struct sockaddr_in6  addr  ;
    unsigned int  id  ;
};

struct rdma_ucm_bind
{
    unsigned int  id  ;
    unsigned short int  addr_size  ;
    unsigned short int  reserved  ;
    struct __kernel_sockaddr_storage  addr  ;
};

struct rdma_ucm_resolve_ip
{
    struct sockaddr_in6  src_addr  ;
    struct sockaddr_in6  dst_addr  ;
    unsigned int  id  ;
    unsigned int  timeout_ms  ;
};

struct rdma_ucm_resolve_addr
{
    unsigned int  id  ;
    unsigned int  timeout_ms  ;
    unsigned short int  src_size  ;
    unsigned short int  dst_size  ;
    unsigned int  reserved  ;
    struct __kernel_sockaddr_storage  src_addr  ;
    struct __kernel_sockaddr_storage  dst_addr  ;
};

struct rdma_ucm_resolve_route
{
    unsigned int  id  ;
    unsigned int  timeout_ms  ;
};

enum { RDMA_USER_CM_QUERY_ADDR 
,RDMA_USER_CM_QUERY_PATH 
,RDMA_USER_CM_QUERY_GID 
};

struct rdma_ucm_query
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  id  ;
    unsigned int  option  ;
};

struct rdma_ucm_query_route_resp
{
    unsigned long  long  node_guid  __attribute__((aligned(8))) ;
    struct ib_user_path_rec  ib_route[2]  ;
    struct sockaddr_in6  src_addr  ;
    struct sockaddr_in6  dst_addr  ;
    unsigned int  num_paths  ;
    unsigned char  port_num  ;
    unsigned char  reserved[3]  ;
    unsigned int  ibdev_index  ;
    unsigned int  reserved1  ;
};

struct rdma_ucm_query_addr_resp
{
    unsigned long  long  node_guid  __attribute__((aligned(8))) ;
    unsigned char  port_num  ;
    unsigned char  reserved  ;
    unsigned short int  pkey  ;
    unsigned short int  src_size  ;
    unsigned short int  dst_size  ;
    struct __kernel_sockaddr_storage  src_addr  ;
    struct __kernel_sockaddr_storage  dst_addr  ;
    unsigned int  ibdev_index  ;
    unsigned int  reserved1  ;
};

struct rdma_ucm_query_path_resp
{
    unsigned int  num_paths  ;
    unsigned int  reserved  ;
    struct ib_path_rec_data  path_data[]  ;
};

struct rdma_ucm_conn_param
{
    unsigned int  qp_num  ;
    unsigned int  qkey  ;
    unsigned char  private_data[256]  ;
    unsigned char  private_data_len  ;
    unsigned char  srq  ;
    unsigned char  responder_resources  ;
    unsigned char  initiator_depth  ;
    unsigned char  flow_control  ;
    unsigned char  retry_count  ;
    unsigned char  rnr_retry_count  ;
    unsigned char  valid  ;
};

struct rdma_ucm_ud_param
{
    unsigned int  qp_num  ;
    unsigned int  qkey  ;
    struct ib_uverbs_ah_attr  ah_attr  ;
    unsigned char  private_data[256]  ;
    unsigned char  private_data_len  ;
    unsigned char  reserved[7]  ;
};

struct rdma_ucm_ece
{
    unsigned int  vendor_id  ;
    unsigned int  attr_mod  ;
};

struct rdma_ucm_connect
{
    struct rdma_ucm_conn_param  conn_param  ;
    unsigned int  id  ;
    unsigned int  reserved  ;
    struct rdma_ucm_ece  ece  ;
};

struct rdma_ucm_listen
{
    unsigned int  id  ;
    unsigned int  backlog  ;
};

struct rdma_ucm_accept
{
    unsigned long  long  uid  __attribute__((aligned(8))) ;
    struct rdma_ucm_conn_param  conn_param  ;
    unsigned int  id  ;
    unsigned int  reserved  ;
    struct rdma_ucm_ece  ece  ;
};

struct rdma_ucm_reject
{
    unsigned int  id  ;
    unsigned char  private_data_len  ;
    unsigned char  reason  ;
    unsigned char  reserved[2]  ;
    unsigned char  private_data[256]  ;
};

struct rdma_ucm_disconnect
{
    unsigned int  id  ;
};

struct rdma_ucm_init_qp_attr
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  id  ;
    unsigned int  qp_state  ;
};

struct rdma_ucm_notify
{
    unsigned int  id  ;
    unsigned int  event  ;
};

struct rdma_ucm_join_ip_mcast
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  uid  __attribute__((aligned(8))) ;
    struct sockaddr_in6  addr  ;
    unsigned int  id  ;
};

enum { RDMA_MC_JOIN_FLAG_FULLMEMBER 
,RDMA_MC_JOIN_FLAG_SENDONLY_FULLMEMBER 
,RDMA_MC_JOIN_FLAG_RESERVED 
};

struct rdma_ucm_join_mcast
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned long  long  uid  __attribute__((aligned(8))) ;
    unsigned int  id  ;
    unsigned short int  addr_size  ;
    unsigned short int  join_flags  ;
    struct __kernel_sockaddr_storage  addr  ;
};

struct rdma_ucm_get_event
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
};

union anonymous_typeZ223
{
struct rdma_ucm_conn_param  conn  ;
struct rdma_ucm_ud_param  ud  ;
};

union anonymous_typeZ224
{
struct rdma_ucm_conn_param  conn  ;
struct rdma_ucm_ud_param  ud  ;
};

struct rdma_ucm_event_resp
{
    unsigned long  long  uid  __attribute__((aligned(8))) ;
    unsigned int  id  ;
    unsigned int  event  ;
    unsigned int  status  ;
    union {
        struct rdma_ucm_conn_param  conn  ;
        struct rdma_ucm_ud_param  ud  ;
    } param;
    unsigned int  reserved  ;
    struct rdma_ucm_ece  ece  ;
};

enum { RDMA_OPTION_ID=(0),
RDMA_OPTION_IB=(1)
};

enum { RDMA_OPTION_ID_TOS=(0),
RDMA_OPTION_ID_REUSEADDR=(1),
RDMA_OPTION_ID_AFONLY=(2),
RDMA_OPTION_ID_ACK_TIMEOUT=(3)
};

enum { RDMA_OPTION_IB_PATH=(1)
};

struct rdma_ucm_set_option
{
    unsigned long  long  optval  __attribute__((aligned(8))) ;
    unsigned int  id  ;
    unsigned int  level  ;
    unsigned int  optname  ;
    unsigned int  optlen  ;
};

struct rdma_ucm_migrate_id
{
    unsigned long  long  response  __attribute__((aligned(8))) ;
    unsigned int  id  ;
    unsigned int  fd  ;
};

struct rdma_ucm_migrate_resp
{
    unsigned int  events_reported  ;
};

enum { RDMA_NL_IWCM=(2),
RDMA_NL_RSVD 
,RDMA_NL_LS 
,RDMA_NL_NLDEV 
,RDMA_NL_NUM_CLIENTS 
};

enum { RDMA_NL_GROUP_IWPM=(2),
RDMA_NL_GROUP_LS 
,RDMA_NL_GROUP_NOTIFY 
,RDMA_NL_NUM_GROUPS 
};

enum { IWPM_FLAGS_NO_PORT_MAP=((1<<0))
};

enum { RDMA_NL_IWPM_REG_PID=(0),
RDMA_NL_IWPM_ADD_MAPPING 
,RDMA_NL_IWPM_QUERY_MAPPING 
,RDMA_NL_IWPM_REMOVE_MAPPING 
,RDMA_NL_IWPM_REMOTE_INFO 
,RDMA_NL_IWPM_HANDLE_ERR 
,RDMA_NL_IWPM_MAPINFO 
,RDMA_NL_IWPM_MAPINFO_NUM 
,RDMA_NL_IWPM_HELLO 
,RDMA_NL_IWPM_NUM_OPS 
};

enum { IWPM_NLA_REG_PID_UNSPEC=(0),
IWPM_NLA_REG_PID_SEQ 
,IWPM_NLA_REG_IF_NAME 
,IWPM_NLA_REG_IBDEV_NAME 
,IWPM_NLA_REG_ULIB_NAME 
,IWPM_NLA_REG_PID_MAX 
};

enum { IWPM_NLA_RREG_PID_UNSPEC=(0),
IWPM_NLA_RREG_PID_SEQ 
,IWPM_NLA_RREG_IBDEV_NAME 
,IWPM_NLA_RREG_ULIB_NAME 
,IWPM_NLA_RREG_ULIB_VER 
,IWPM_NLA_RREG_PID_ERR 
,IWPM_NLA_RREG_PID_MAX 
};

enum { IWPM_NLA_MANAGE_MAPPING_UNSPEC=(0),
IWPM_NLA_MANAGE_MAPPING_SEQ 
,IWPM_NLA_MANAGE_ADDR 
,IWPM_NLA_MANAGE_FLAGS 
,IWPM_NLA_MANAGE_MAPPING_MAX 
};

enum { IWPM_NLA_RMANAGE_MAPPING_UNSPEC=(0),
IWPM_NLA_RMANAGE_MAPPING_SEQ 
,IWPM_NLA_RMANAGE_ADDR 
,IWPM_NLA_RMANAGE_MAPPED_LOC_ADDR 
,IWPM_NLA_MANAGE_MAPPED_LOC_ADDR=((0+3)),
IWPM_NLA_RMANAGE_MAPPING_ERR 
,IWPM_NLA_RMANAGE_MAPPING_MAX 
};

enum { IWPM_NLA_QUERY_MAPPING_UNSPEC=(0),
IWPM_NLA_QUERY_MAPPING_SEQ 
,IWPM_NLA_QUERY_LOCAL_ADDR 
,IWPM_NLA_QUERY_REMOTE_ADDR 
,IWPM_NLA_QUERY_FLAGS 
,IWPM_NLA_QUERY_MAPPING_MAX 
};

enum { IWPM_NLA_RQUERY_MAPPING_UNSPEC=(0),
IWPM_NLA_RQUERY_MAPPING_SEQ 
,IWPM_NLA_RQUERY_LOCAL_ADDR 
,IWPM_NLA_RQUERY_REMOTE_ADDR 
,IWPM_NLA_RQUERY_MAPPED_LOC_ADDR 
,IWPM_NLA_RQUERY_MAPPED_REM_ADDR 
,IWPM_NLA_RQUERY_MAPPING_ERR 
,IWPM_NLA_RQUERY_MAPPING_MAX 
};

enum { IWPM_NLA_MAPINFO_REQ_UNSPEC=(0),
IWPM_NLA_MAPINFO_ULIB_NAME 
,IWPM_NLA_MAPINFO_ULIB_VER 
,IWPM_NLA_MAPINFO_REQ_MAX 
};

enum { IWPM_NLA_MAPINFO_UNSPEC=(0),
IWPM_NLA_MAPINFO_LOCAL_ADDR 
,IWPM_NLA_MAPINFO_MAPPED_ADDR 
,IWPM_NLA_MAPINFO_FLAGS 
,IWPM_NLA_MAPINFO_MAX 
};

enum { IWPM_NLA_MAPINFO_NUM_UNSPEC=(0),
IWPM_NLA_MAPINFO_SEQ 
,IWPM_NLA_MAPINFO_SEND_NUM 
,IWPM_NLA_MAPINFO_ACK_NUM 
,IWPM_NLA_MAPINFO_NUM_MAX 
};

enum { IWPM_NLA_ERR_UNSPEC=(0),
IWPM_NLA_ERR_SEQ 
,IWPM_NLA_ERR_CODE 
,IWPM_NLA_ERR_MAX 
};

enum { IWPM_NLA_HELLO_UNSPEC=(0),
IWPM_NLA_HELLO_ABI_VERSION 
,IWPM_NLA_HELLO_MAX 
};

enum { RDMA_NODE_IB_CA=(1),
RDMA_NODE_IB_SWITCH 
,RDMA_NODE_IB_ROUTER 
,RDMA_NODE_RNIC 
,RDMA_NODE_USNIC 
,RDMA_NODE_USNIC_UDP 
,RDMA_NODE_UNSPECIFIED 
};

enum { RDMA_NL_LS_OP_RESOLVE=(0),
RDMA_NL_LS_OP_SET_TIMEOUT 
,RDMA_NL_LS_OP_IP_RESOLVE 
,RDMA_NL_LS_NUM_OPS 
};

enum { LS_RESOLVE_PATH_USE_ALL=(0),
LS_RESOLVE_PATH_USE_UNIDIRECTIONAL 
,LS_RESOLVE_PATH_USE_GMP 
,LS_RESOLVE_PATH_USE_MAX 
};

struct rdma_ls_resolve_header
{
    unsigned char  device_name[64]  ;
    unsigned char  port_num  ;
    unsigned char  path_use  ;
};

struct rdma_ls_ip_resolve_header
{
    unsigned int  ifindex  ;
};

enum { LS_NLA_TYPE_UNSPEC=(0),
LS_NLA_TYPE_PATH_RECORD 
,LS_NLA_TYPE_TIMEOUT 
,LS_NLA_TYPE_SERVICE_ID 
,LS_NLA_TYPE_DGID 
,LS_NLA_TYPE_SGID 
,LS_NLA_TYPE_TCLASS 
,LS_NLA_TYPE_PKEY 
,LS_NLA_TYPE_QOS_CLASS 
,LS_NLA_TYPE_IPV4 
,LS_NLA_TYPE_IPV6 
,LS_NLA_TYPE_MAX 
};

struct rdma_nla_ls_gid
{
    unsigned char  gid[16]  ;
};

enum  rdma_nldev_command { RDMA_NLDEV_CMD_UNSPEC 
,RDMA_NLDEV_CMD_GET 
,RDMA_NLDEV_CMD_SET 
,RDMA_NLDEV_CMD_NEWLINK 
,RDMA_NLDEV_CMD_DELLINK 
,RDMA_NLDEV_CMD_PORT_GET 
,RDMA_NLDEV_CMD_SYS_GET 
,RDMA_NLDEV_CMD_SYS_SET 
,RDMA_NLDEV_CMD_RES_GET=(9),
RDMA_NLDEV_CMD_RES_QP_GET 
,RDMA_NLDEV_CMD_RES_CM_ID_GET 
,RDMA_NLDEV_CMD_RES_CQ_GET 
,RDMA_NLDEV_CMD_RES_MR_GET 
,RDMA_NLDEV_CMD_RES_PD_GET 
,RDMA_NLDEV_CMD_GET_CHARDEV 
,RDMA_NLDEV_CMD_STAT_SET 
,RDMA_NLDEV_CMD_STAT_GET 
,RDMA_NLDEV_CMD_STAT_DEL 
,RDMA_NLDEV_CMD_RES_QP_GET_RAW 
,RDMA_NLDEV_CMD_RES_CQ_GET_RAW 
,RDMA_NLDEV_CMD_RES_MR_GET_RAW 
,RDMA_NLDEV_CMD_RES_CTX_GET 
,RDMA_NLDEV_CMD_RES_SRQ_GET 
,RDMA_NLDEV_CMD_STAT_GET_STATUS 
,RDMA_NLDEV_CMD_RES_SRQ_GET_RAW 
,RDMA_NLDEV_CMD_NEWDEV 
,RDMA_NLDEV_CMD_DELDEV 
,RDMA_NLDEV_CMD_MONITOR 
,RDMA_NLDEV_NUM_OPS 
};

enum  rdma_nldev_print_type { RDMA_NLDEV_PRINT_TYPE_UNSPEC 
,RDMA_NLDEV_PRINT_TYPE_HEX 
};

enum  rdma_nldev_attr { RDMA_NLDEV_ATTR_UNSPEC 
,RDMA_NLDEV_ATTR_PAD=((0)),
RDMA_NLDEV_ATTR_DEV_INDEX 
,RDMA_NLDEV_ATTR_DEV_NAME 
,RDMA_NLDEV_ATTR_PORT_INDEX 
,RDMA_NLDEV_ATTR_CAP_FLAGS 
,RDMA_NLDEV_ATTR_FW_VERSION 
,RDMA_NLDEV_ATTR_NODE_GUID 
,RDMA_NLDEV_ATTR_SYS_IMAGE_GUID 
,RDMA_NLDEV_ATTR_SUBNET_PREFIX 
,RDMA_NLDEV_ATTR_LID 
,RDMA_NLDEV_ATTR_SM_LID 
,RDMA_NLDEV_ATTR_LMC 
,RDMA_NLDEV_ATTR_PORT_STATE 
,RDMA_NLDEV_ATTR_PORT_PHYS_STATE 
,RDMA_NLDEV_ATTR_DEV_NODE_TYPE 
,RDMA_NLDEV_ATTR_RES_SUMMARY 
,RDMA_NLDEV_ATTR_RES_SUMMARY_ENTRY 
,RDMA_NLDEV_ATTR_RES_SUMMARY_ENTRY_NAME 
,RDMA_NLDEV_ATTR_RES_SUMMARY_ENTRY_CURR 
,RDMA_NLDEV_ATTR_RES_QP 
,RDMA_NLDEV_ATTR_RES_QP_ENTRY 
,RDMA_NLDEV_ATTR_RES_LQPN 
,RDMA_NLDEV_ATTR_RES_RQPN 
,RDMA_NLDEV_ATTR_RES_RQ_PSN 
,RDMA_NLDEV_ATTR_RES_SQ_PSN 
,RDMA_NLDEV_ATTR_RES_PATH_MIG_STATE 
,RDMA_NLDEV_ATTR_RES_TYPE 
,RDMA_NLDEV_ATTR_RES_STATE 
,RDMA_NLDEV_ATTR_RES_PID 
,RDMA_NLDEV_ATTR_RES_KERN_NAME 
,RDMA_NLDEV_ATTR_RES_CM_ID 
,RDMA_NLDEV_ATTR_RES_CM_ID_ENTRY 
,RDMA_NLDEV_ATTR_RES_PS 
,RDMA_NLDEV_ATTR_RES_SRC_ADDR 
,RDMA_NLDEV_ATTR_RES_DST_ADDR 
,RDMA_NLDEV_ATTR_RES_CQ 
,RDMA_NLDEV_ATTR_RES_CQ_ENTRY 
,RDMA_NLDEV_ATTR_RES_CQE 
,RDMA_NLDEV_ATTR_RES_USECNT 
,RDMA_NLDEV_ATTR_RES_POLL_CTX 
,RDMA_NLDEV_ATTR_RES_MR 
,RDMA_NLDEV_ATTR_RES_MR_ENTRY 
,RDMA_NLDEV_ATTR_RES_RKEY 
,RDMA_NLDEV_ATTR_RES_LKEY 
,RDMA_NLDEV_ATTR_RES_IOVA 
,RDMA_NLDEV_ATTR_RES_MRLEN 
,RDMA_NLDEV_ATTR_RES_PD 
,RDMA_NLDEV_ATTR_RES_PD_ENTRY 
,RDMA_NLDEV_ATTR_RES_LOCAL_DMA_LKEY 
,RDMA_NLDEV_ATTR_RES_UNSAFE_GLOBAL_RKEY 
,RDMA_NLDEV_ATTR_NDEV_INDEX 
,RDMA_NLDEV_ATTR_NDEV_NAME 
,RDMA_NLDEV_ATTR_DRIVER 
,RDMA_NLDEV_ATTR_DRIVER_ENTRY 
,RDMA_NLDEV_ATTR_DRIVER_STRING 
,RDMA_NLDEV_ATTR_DRIVER_PRINT_TYPE 
,RDMA_NLDEV_ATTR_DRIVER_S32 
,RDMA_NLDEV_ATTR_DRIVER_U32 
,RDMA_NLDEV_ATTR_DRIVER_S64 
,RDMA_NLDEV_ATTR_DRIVER_U64 
,RDMA_NLDEV_ATTR_RES_PDN 
,RDMA_NLDEV_ATTR_RES_CQN 
,RDMA_NLDEV_ATTR_RES_MRN 
,RDMA_NLDEV_ATTR_RES_CM_IDN 
,RDMA_NLDEV_ATTR_RES_CTXN 
,RDMA_NLDEV_ATTR_LINK_TYPE 
,RDMA_NLDEV_SYS_ATTR_NETNS_MODE 
,RDMA_NLDEV_ATTR_DEV_PROTOCOL 
,RDMA_NLDEV_NET_NS_FD 
,RDMA_NLDEV_ATTR_CHARDEV_TYPE 
,RDMA_NLDEV_ATTR_CHARDEV_NAME 
,RDMA_NLDEV_ATTR_CHARDEV_ABI 
,RDMA_NLDEV_ATTR_CHARDEV 
,RDMA_NLDEV_ATTR_UVERBS_DRIVER_ID 
,RDMA_NLDEV_ATTR_STAT_MODE 
,RDMA_NLDEV_ATTR_STAT_RES 
,RDMA_NLDEV_ATTR_STAT_AUTO_MODE_MASK 
,RDMA_NLDEV_ATTR_STAT_COUNTER 
,RDMA_NLDEV_ATTR_STAT_COUNTER_ENTRY 
,RDMA_NLDEV_ATTR_STAT_COUNTER_ID 
,RDMA_NLDEV_ATTR_STAT_HWCOUNTERS 
,RDMA_NLDEV_ATTR_STAT_HWCOUNTER_ENTRY 
,RDMA_NLDEV_ATTR_STAT_HWCOUNTER_ENTRY_NAME 
,RDMA_NLDEV_ATTR_STAT_HWCOUNTER_ENTRY_VALUE 
,RDMA_NLDEV_ATTR_DEV_DIM 
,RDMA_NLDEV_ATTR_RES_RAW 
,RDMA_NLDEV_ATTR_RES_CTX 
,RDMA_NLDEV_ATTR_RES_CTX_ENTRY 
,RDMA_NLDEV_ATTR_RES_SRQ 
,RDMA_NLDEV_ATTR_RES_SRQ_ENTRY 
,RDMA_NLDEV_ATTR_RES_SRQN 
,RDMA_NLDEV_ATTR_MIN_RANGE 
,RDMA_NLDEV_ATTR_MAX_RANGE 
,RDMA_NLDEV_SYS_ATTR_COPY_ON_FORK 
,RDMA_NLDEV_ATTR_STAT_HWCOUNTER_INDEX 
,RDMA_NLDEV_ATTR_STAT_HWCOUNTER_DYNAMIC 
,RDMA_NLDEV_SYS_ATTR_PRIVILEGED_QKEY_MODE 
,RDMA_NLDEV_ATTR_DRIVER_DETAILS 
,RDMA_NLDEV_ATTR_RES_SUBTYPE 
,RDMA_NLDEV_ATTR_DEV_TYPE 
,RDMA_NLDEV_ATTR_PARENT_NAME 
,RDMA_NLDEV_ATTR_NAME_ASSIGN_TYPE 
,RDMA_NLDEV_ATTR_EVENT_TYPE 
,RDMA_NLDEV_SYS_ATTR_MONITOR_MODE 
,RDMA_NLDEV_ATTR_STAT_OPCOUNTER_ENABLED 
,RDMA_NLDEV_ATTR_MAX 
};

enum  rdma_nl_counter_mode { RDMA_COUNTER_MODE_NONE 
,RDMA_COUNTER_MODE_AUTO 
,RDMA_COUNTER_MODE_MANUAL 
,RDMA_COUNTER_MODE_MAX 
};

enum  rdma_nl_counter_mask { RDMA_COUNTER_MASK_QP_TYPE=(1),
RDMA_COUNTER_MASK_PID=(1<<1)
};

enum  rdma_nl_dev_type { RDMA_DEVICE_TYPE_SMI=(1)
};

enum  rdma_nl_name_assign_type { RDMA_NAME_ASSIGN_TYPE_UNKNOWN=(0),
RDMA_NAME_ASSIGN_TYPE_USER=(1)
};

enum  rdma_nl_notify_event_type { RDMA_REGISTER_EVENT 
,RDMA_UNREGISTER_EVENT 
,RDMA_NETDEV_ATTACH_EVENT 
,RDMA_NETDEV_DETACH_EVENT 
,RDMA_RENAME_EVENT 
,RDMA_NETDEV_RENAME_EVENT 
};

struct erase_info_user
{
    unsigned int  start  ;
    unsigned int  length  ;
};

struct erase_info_user64
{
    unsigned long  long  start  ;
    unsigned long  long  length  ;
};

struct mtd_oob_buf
{
    unsigned int  start  ;
    unsigned int  length  ;
    unsigned char* ptr;
};

struct mtd_oob_buf64
{
    unsigned long  long  start  ;
    unsigned int  pad  ;
    unsigned int  length  ;
    unsigned long  long  usr_ptr  ;
};

enum { MTD_OPS_PLACE_OOB=(0),
MTD_OPS_AUTO_OOB=(1),
MTD_OPS_RAW=(2)
};

struct mtd_write_req
{
    unsigned long  long  start  ;
    unsigned long  long  len  ;
    unsigned long  long  ooblen  ;
    unsigned long  long  usr_data  ;
    unsigned long  long  usr_oob  ;
    unsigned char  mode  ;
    unsigned char  padding[7]  ;
};

struct mtd_read_req_ecc_stats
{
    unsigned int  uncorrectable_errors  ;
    unsigned int  corrected_bitflips  ;
    unsigned int  max_bitflips  ;
};

struct mtd_read_req
{
    unsigned long  long  start  ;
    unsigned long  long  len  ;
    unsigned long  long  ooblen  ;
    unsigned long  long  usr_data  ;
    unsigned long  long  usr_oob  ;
    unsigned char  mode  ;
    unsigned char  padding[7]  ;
    struct mtd_read_req_ecc_stats  ecc_stats  ;
};

struct mtd_info_user
{
    unsigned char  type  ;
    unsigned int  flags  ;
    unsigned int  size  ;
    unsigned int  erasesize  ;
    unsigned int  writesize  ;
    unsigned int  oobsize  ;
    unsigned long  long  padding  ;
};

struct region_info_user
{
    unsigned int  offset  ;
    unsigned int  erasesize  ;
    unsigned int  numblocks  ;
    unsigned int  regionindex  ;
};

struct otp_info
{
    unsigned int  start  ;
    unsigned int  length  ;
    unsigned int  locked  ;
};

struct nand_oobinfo
{
    unsigned int  useecc  ;
    unsigned int  eccbytes  ;
    unsigned int  oobfree[8][2]  ;
    unsigned int  eccpos[32]  ;
};

struct nand_oobfree
{
    unsigned int  offset  ;
    unsigned int  length  ;
};

struct nand_ecclayout_user
{
    unsigned int  eccbytes  ;
    unsigned int  eccpos[64]  ;
    unsigned int  oobavail  ;
    struct nand_oobfree  oobfree[8]  ;
};

struct mtd_ecc_stats
{
    unsigned int  corrected  ;
    unsigned int  failed  ;
    unsigned int  badblocks  ;
    unsigned int  bbtblocks  ;
};

enum  mtd_file_modes { MTD_FILE_MODE_NORMAL=(0),
MTD_FILE_MODE_OTP_FACTORY=(1),
MTD_FILE_MODE_OTP_USER=(2),
MTD_FILE_MODE_RAW 
};

enum { UBI_DYNAMIC_VOLUME=(3),
UBI_STATIC_VOLUME=(4)
};

enum { UBI_VOL_PROP_DIRECT_WRITE=(1)
};

struct ubi_attach_req
{
    int  ubi_num  ;
    int  mtd_num  ;
    int  vid_hdr_offset  ;
    short  max_beb_per1024  ;
    char  disable_fm  ;
    char  need_resv_pool  ;
    char  padding[8]  ;
};

enum { UBI_VOL_SKIP_CRC_CHECK_FLG=(0x1)
};

struct ubi_mkvol_req
{
    int  vol_id  ;
    int  alignment  ;
    long long  bytes  ;
    char  vol_type  ;
    unsigned char  flags  ;
    short  name_len  ;
    char  padding2[4]  ;
    char name[127+1];
} __attribute__((packed));

struct ubi_rsvol_req
{
    long long  bytes  ;
    int  vol_id  ;
} __attribute__((packed));

struct anonymous_typeX225
{
    int  vol_id  ;
    short  name_len  ;
    char  padding2[2]  ;
    char name[127+1];
};

struct anonymous_typeX226
{
    int  vol_id  ;
    short  name_len  ;
    char  padding2[2]  ;
    char name[127+1];
};

struct ubi_rnvol_req
{
    int  count  ;
    char  padding1[12]  ;
    struct {
        int  vol_id  ;
        short  name_len  ;
        char  padding2[2]  ;
        char name[127+1];
    } ents;
} __attribute__((packed));

struct ubi_ecinfo_req
{
    int  start  ;
    int  length  ;
    int  read_length  ;
    char  padding[16]  ;
    int  erase_counters[]  ;
} __attribute__((packed));

struct ubi_leb_change_req
{
    int  lnum  ;
    int  bytes  ;
    char  dtype  ;
    char  padding[7]  ;
} __attribute__((packed));

struct ubi_map_req
{
    int  lnum  ;
    char  dtype  ;
    char  padding[3]  ;
} __attribute__((packed));

struct ubi_set_vol_prop_req
{
    unsigned char  property  ;
    unsigned char  padding[7]  ;
    unsigned long  long  value  ;
} __attribute__((packed));

struct ubi_blkcreate_req
{
    char  padding[128]  ;
} __attribute__((packed));

struct reg_genl_event
{
    char reg_name[32];
    unsigned long  int  event  ;
};

enum { REG_GENL_ATTR_UNSPEC 
,REG_GENL_ATTR_EVENT 
,__REG_GENL_ATTR_MAX 
};

enum { REG_GENL_CMD_UNSPEC 
,REG_GENL_CMD_EVENT 
,__REG_GENL_CMD_MAX 
};

struct ioctl_evtchn_bind_virq
{
    unsigned int virq;
};

struct ioctl_evtchn_bind_interdomain
{
    unsigned int remote_domain;
    unsigned int remote_port;
};

struct ioctl_evtchn_bind_unbound_port
{
    unsigned int remote_domain;
};

struct ioctl_evtchn_unbind
{
    unsigned int port;
};

struct ioctl_evtchn_notify
{
    unsigned int port;
};

struct ioctl_evtchn_restrict_domid
{
    unsigned short int  domid  ;
};

struct ioctl_evtchn_bind
{
    unsigned int port;
};

struct ioctl_gntdev_grant_ref
{
    unsigned int  domid  ;
    unsigned int  ref  ;
};

struct ioctl_gntdev_map_grant_ref
{
    unsigned int  count  ;
    unsigned int  pad  ;
    unsigned long  long  index  ;
    struct ioctl_gntdev_grant_ref  refs[1]  ;
};

struct ioctl_gntdev_unmap_grant_ref
{
    unsigned long  long  index  ;
    unsigned int  count  ;
    unsigned int  pad  ;
};

struct ioctl_gntdev_get_offset_for_vaddr
{
    unsigned long  long  vaddr  ;
    unsigned long  long  offset  ;
    unsigned int  count  ;
    unsigned int  pad  ;
};

struct ioctl_gntdev_set_max_grants
{
    unsigned int  count  ;
};

struct ioctl_gntdev_unmap_notify
{
    unsigned long  long  index  ;
    unsigned int  action  ;
    unsigned int  event_channel_port  ;
};

struct anonymous_typeX228
{
    unsigned int  ref  ;
    unsigned short int  offset  ;
    unsigned short int  domid  ;
};

union anonymous_typeZ227
{
void* virt;
    struct {
        unsigned int  ref  ;
        unsigned short int  offset  ;
        unsigned short int  domid  ;
    } foreign;
};

struct anonymous_typeX230
{
    unsigned int  ref  ;
    unsigned short int  offset  ;
    unsigned short int  domid  ;
};

union anonymous_typeZ229
{
void* virt;
    struct {
        unsigned int  ref  ;
        unsigned short int  offset  ;
        unsigned short int  domid  ;
    } foreign;
};

struct gntdev_grant_copy_segment
{
    union {
        void* virt;
        struct {
            unsigned int  ref  ;
            unsigned short int  offset  ;
            unsigned short int  domid  ;
        } foreign;
    } source;
    union {
        void* virt;
        struct {
            unsigned int  ref  ;
            unsigned short int  offset  ;
            unsigned short int  domid  ;
        } foreign;
    } dest;
    unsigned short int  len  ;
    unsigned short int  flags  ;
    short  status  ;
};

struct ioctl_gntdev_grant_copy
{
    unsigned int count;
    struct gntdev_grant_copy_segment*  segments  ;
};

struct ioctl_gntdev_dmabuf_exp_from_refs
{
    unsigned int  flags  ;
    unsigned int  count  ;
    unsigned int  fd  ;
    unsigned int  domid  ;
    unsigned int  refs[1]  ;
};

struct ioctl_gntdev_dmabuf_exp_wait_released
{
    unsigned int  fd  ;
    unsigned int  wait_to_ms  ;
};

struct ioctl_gntdev_dmabuf_imp_to_refs
{
    unsigned int  fd  ;
    unsigned int  count  ;
    unsigned int  domid  ;
    unsigned int  reserved  ;
    unsigned int  refs[1]  ;
};

struct ioctl_gntdev_dmabuf_imp_release
{
    unsigned int  fd  ;
    unsigned int  reserved  ;
};

struct privcmd_hypercall
{
    unsigned long  long  op  ;
    unsigned long  long  arg[5]  ;
};

struct privcmd_mmap_entry
{
    unsigned long  long  va  ;
    unsigned long  long  mfn  ;
    unsigned long  long  npages  ;
};

struct privcmd_mmap
{
    int num;
    unsigned short int  dom  ;
    struct privcmd_mmap_entry*  entry  ;
};

struct privcmd_mmapbatch
{
    int num;
    unsigned short int  dom  ;
    unsigned long  long  addr  ;
    unsigned long  int*  arr  ;
};

struct privcmd_mmapbatch_v2
{
    unsigned int num;
    unsigned short int  dom  ;
    unsigned long  long  addr  ;
    const unsigned long  int*  arr  ;
    int* err;
};

struct privcmd_dm_op_buf
{
    void* uptr;
    unsigned long  size  ;
};

struct privcmd_dm_op
{
    unsigned short int  dom  ;
    unsigned short int  num  ;
    const struct privcmd_dm_op_buf*  ubufs  ;
};

struct privcmd_mmap_resource
{
    unsigned short int  dom  ;
    unsigned int  type  ;
    unsigned int  id  ;
    unsigned int  idx  ;
    unsigned long  long  num  ;
    unsigned long  long  addr  ;
};

struct privcmd_irqfd
{
    unsigned long  long  dm_op  ;
    unsigned int  size  ;
    unsigned int  fd  ;
    unsigned int  flags  ;
    unsigned short int  dom  ;
    unsigned char  pad[2]  ;
};

struct privcmd_ioeventfd
{
    unsigned long  long  ioreq  ;
    unsigned long  long  ports  ;
    unsigned long  long  addr  ;
    unsigned int  addr_len  ;
    unsigned int  event_fd  ;
    unsigned int  vcpus  ;
    unsigned int  vq  ;
    unsigned int  flags  ;
    unsigned short int  dom  ;
    unsigned char  pad[2]  ;
};

struct privcmd_pcidev_get_gsi
{
    unsigned int  sbdf  ;
    unsigned int  gsi  ;
};

typedef unsigned char __uapi_uuid_t[16];

struct cxl_mbox_get_sup_feats_in
{
    unsigned int  count  ;
    unsigned short int  start_idx  ;
    unsigned char  reserved[2]  ;
} __attribute__ ((__packed__));

struct cxl_feat_entry
{
    unsigned char  uuid[16]  ;
    unsigned short int  id  ;
    unsigned short int  get_feat_size  ;
    unsigned short int  set_feat_size  ;
    unsigned int  flags  ;
    unsigned char  get_feat_ver  ;
    unsigned char  set_feat_ver  ;
    unsigned short int  effects  ;
    unsigned char  reserved[18]  ;
} __attribute__ ((__packed__));

struct anonymous_typeX232
{
    unsigned short int  num_entries  ;
    unsigned short int  supported_feats  ;
    unsigned char  reserved[4]  ;
};

struct anonymous_typeX234
{
    unsigned short int  num_entries  ;
    unsigned short int  supported_feats  ;
    unsigned char  reserved[4]  ;
};

struct cxl_mbox_get_sup_feats_out_hdr
{
    unsigned short int  num_entries  ;
    unsigned short int  supported_feats  ;
    unsigned char  reserved[4]  ;
};

struct cxl_mbox_get_sup_feats_out
{
    union {
        struct {
            unsigned short int  num_entries  ;
            unsigned short int  supported_feats  ;
            unsigned char  reserved[4]  ;
        };
        struct cxl_mbox_get_sup_feats_out_hdr hdr;
    };
    struct cxl_feat_entry  ents[]  ;
} __attribute__ ((__packed__));

struct cxl_mbox_get_feat_in
{
    unsigned char  uuid[16]  ;
    unsigned short int  offset  ;
    unsigned short int  count  ;
    unsigned char  selection  ;
} __attribute__ ((__packed__));

enum  cxl_get_feat_selection { CXL_GET_FEAT_SEL_CURRENT_VALUE 
,CXL_GET_FEAT_SEL_DEFAULT_VALUE 
,CXL_GET_FEAT_SEL_SAVED_VALUE 
,CXL_GET_FEAT_SEL_MAX 
};

struct anonymous_typeX236
{
    unsigned char  uuid[16]  ;
    unsigned int  flags  ;
    unsigned short int  offset  ;
    unsigned char  version  ;
    unsigned char  rsvd[9]  ;
};

struct anonymous_typeX238
{
    unsigned char  uuid[16]  ;
    unsigned int  flags  ;
    unsigned short int  offset  ;
    unsigned char  version  ;
    unsigned char  rsvd[9]  ;
};

struct cxl_mbox_set_feat_hdr
{
    unsigned char  uuid[16]  ;
    unsigned int  flags  ;
    unsigned short int  offset  ;
    unsigned char  version  ;
    unsigned char  rsvd[9]  ;
};

struct cxl_mbox_set_feat_in
{
    union {
        struct {
            unsigned char  uuid[16]  ;
            unsigned int  flags  ;
            unsigned short int  offset  ;
            unsigned char  version  ;
            unsigned char  rsvd[9]  ;
        };
        struct cxl_mbox_set_feat_hdr hdr;
    };
    unsigned char  feat_data[]  ;
} __attribute__((packed));

enum  cxl_set_feat_flag_data_transfer { CXL_SET_FEAT_FLAG_FULL_DATA_TRANSFER=(0),
CXL_SET_FEAT_FLAG_INITIATE_DATA_TRANSFER 
,CXL_SET_FEAT_FLAG_CONTINUE_DATA_TRANSFER 
,CXL_SET_FEAT_FLAG_FINISH_DATA_TRANSFER 
,CXL_SET_FEAT_FLAG_ABORT_DATA_TRANSFER 
,CXL_SET_FEAT_FLAG_DATA_TRANSFER_MAX 
};

enum { FWCTL_CMD_BASE=(0),
FWCTL_CMD_INFO=(0),
FWCTL_CMD_RPC=(1)
};

enum  fwctl_device_type { FWCTL_DEVICE_TYPE_ERROR=(0),
FWCTL_DEVICE_TYPE_MLX5=(1),
FWCTL_DEVICE_TYPE_CXL=(2),
FWCTL_DEVICE_TYPE_PDS=(4)
};

struct fwctl_info
{
    unsigned int  size  ;
    unsigned int  flags  ;
    unsigned int  out_device_type  ;
    unsigned int  device_data_len  ;
    unsigned long  long  out_device_data  __attribute__((aligned(8))) ;
};

enum  fwctl_rpc_scope { FWCTL_RPC_CONFIGURATION=(0),
FWCTL_RPC_DEBUG_READ_ONLY=(1),
FWCTL_RPC_DEBUG_WRITE=(2),
FWCTL_RPC_DEBUG_WRITE_FULL=(3)
};

struct fwctl_rpc
{
    unsigned int  size  ;
    unsigned int  scope  ;
    unsigned int  in_len  ;
    unsigned int  out_len  ;
    unsigned long  long  in  __attribute__((aligned(8))) ;
    unsigned long  long  out  __attribute__((aligned(8))) ;
};

/// variable definition ///
extern const struct in6_addr  in6addr_any  ;
extern const struct in6_addr  in6addr_loopback  ;
extern char** __environ;
extern char** environ;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern const struct _ns_flagdata  _ns_flagdata[]  ;
extern char* telcmds[];
extern char* slc_names[];
extern char* authtype_names[];
extern char* encrypt_names[];
extern char* enctype_names[];
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
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
extern struct anonymous_typeX66*  _nc_wacs  ;
extern struct typenode*  TYPE_ALPHA  ;
extern struct typenode*  TYPE_ALNUM  ;
extern struct typenode*  TYPE_ENUM  ;
extern struct typenode*  TYPE_INTEGER  ;
extern struct typenode*  TYPE_NUMERIC  ;
extern struct typenode*  TYPE_REGEXP  ;
extern struct typenode*  TYPE_IPV4  ;
extern struct term*  cur_term  ;
extern const char* const boolnames[];
extern const char* const boolcodes[];
extern const char* const boolfnames[];
extern const char* const numnames[];
extern const char* const numcodes[];
extern const char* const numfnames[];
extern const char* const strnames[];
extern const char* const strcodes[];
extern const char* const strfnames[];
extern struct _keymap_entry  emacs_standard_keymap[257]  ;
extern struct _keymap_entry  emacs_meta_keymap[257]  ;
extern struct _keymap_entry  emacs_ctlx_keymap[257]  ;
extern struct _keymap_entry  vi_insertion_keymap[257]  ;
extern struct _keymap_entry  vi_movement_keymap[257]  ;
extern char* (*(*tilde_expansion_preexpansion_hook))(char*)  ;
extern char* (*(*tilde_expansion_failure_hook))(char*)  ;
extern char** tilde_additional_prefixes;
extern char** tilde_additional_suffixes;
extern struct undo_list*  rl_undo_list  ;
extern struct _funmap**  funmap  ;
extern const char* rl_library_version;
extern int rl_readline_version;
extern int rl_gnu_readline_p;
extern unsigned long  int rl_readline_state;
extern int rl_editing_mode;
extern int rl_insert_mode;
extern const char* rl_readline_name;
extern char* rl_prompt;
extern char* rl_display_prompt;
extern char* rl_line_buffer;
extern int rl_point;
extern int rl_end;
extern int rl_mark;
extern int rl_done;
extern int rl_eof_found;
extern int rl_pending_input;
extern int rl_dispatching;
extern int rl_explicit_arg;
extern int rl_numeric_arg;
extern int (*(*rl_last_func))(int,int)  ;
extern const char* rl_terminal_name;
extern struct _IO_FILE*  rl_instream  ;
extern struct _IO_FILE*  rl_outstream  ;
extern int rl_prefer_env_winsize;
extern int (*(*rl_startup_hook))()  ;
extern int (*(*rl_pre_input_hook))()  ;
extern int (*(*rl_event_hook))()  ;
extern int (*(*rl_signal_event_hook))()  ;
extern int (*(*rl_timeout_event_hook))()  ;
extern int (*(*rl_input_available_hook))()  ;
extern int (*(*rl_getc_function))(struct _IO_FILE* )  ;
extern void (*(*rl_redisplay_function))()  ;
extern void (*(*rl_prep_term_function))(int)  ;
extern void (*(*rl_deprep_term_function))()  ;
extern void (*(*rl_macro_display_hook))(const char*,const char*,int,const char*)  ;
extern struct _keymap_entry*  rl_executing_keymap  ;
extern struct _keymap_entry*  rl_binding_keymap  ;
extern int rl_executing_key;
extern char* rl_executing_keyseq;
extern int rl_key_sequence_length;
extern int rl_erase_empty_line;
extern int rl_already_prompted;
extern int rl_num_chars_to_read;
extern char* rl_executing_macro;
extern int rl_catch_signals;
extern int rl_catch_sigwinch;
extern int rl_change_environment;
extern char* (*(*rl_completion_entry_function))(const char*,int)  ;
extern char* (*(*rl_menu_completion_entry_function))(const char*,int)  ;
extern int (*(*rl_ignore_some_completions_function))(char**)  ;
extern char** (*(*rl_attempted_completion_function))(const char*,int,int)  ;
extern const char* rl_basic_word_break_characters;
extern const char* rl_completer_word_break_characters;
extern char* (*(*rl_completion_word_break_hook))()  ;
extern const char* rl_completer_quote_characters;
extern const char* rl_basic_quote_characters;
extern const char* rl_filename_quote_characters;
extern const char* rl_special_prefixes;
extern int (*(*rl_directory_completion_hook))(char**)  ;
extern int (*(*rl_directory_rewrite_hook))(char**)  ;
extern int (*(*rl_filename_stat_hook))(char**)  ;
extern char* (*(*rl_filename_rewrite_hook))(char*,int)  ;
extern char* (*(*rl_completion_rewrite_hook))(char*,int)  ;
extern void (*(*rl_completion_display_matches_hook))(char**,int,int)  ;
extern int rl_filename_completion_desired;
extern int rl_filename_quoting_desired;
extern int rl_full_quoting_desired;
extern char* (*(*rl_filename_quoting_function))(char*,int,char*)  ;
extern char* (*(*rl_filename_dequoting_function))(char*,int)  ;
extern int (*(*rl_char_is_quoted_p))(char*,int)  ;
extern int rl_attempted_completion_over;
extern int rl_completion_type;
extern int rl_completion_invoking_key;
extern int rl_completion_query_items;
extern int rl_completion_append_character;
extern int rl_completion_suppress_append;
extern int rl_completion_quote_character;
extern int rl_completion_found_quote;
extern int rl_completion_suppress_quote;
extern int rl_sort_completion_matches;
extern int rl_completion_mark_symlink_dirs;
extern int rl_ignore_completion_duplicates;
extern int rl_inhibit_completion;
extern int rl_persistent_signal_handlers;
extern char* __tzname[2];
extern int __daylight;
extern long  int __timezone;
extern char* tzname[2];
extern int daylight;
extern long  int timezone;
extern int getdate_err;
extern int history_base;
extern int history_length;
extern int history_max_entries;
extern int history_offset;
extern int history_lines_read_from_file;
extern int history_lines_written_to_file;
extern char history_expansion_char;
extern char history_subst_char;
extern char* history_word_delimiters;
extern char history_comment_char;
extern char* history_no_expand_chars;
extern char* history_search_delimiter_chars;
extern int history_quotes_inhibit_expansion;
extern int history_quoting_state;
extern int history_write_timestamps;
extern int history_multiline_entries;
extern int history_file_version;
extern int max_input_history;
extern int (*(*history_inhibit_expansion_function))(char*,int)  ;
extern int (*OSSL_provider_init)(const struct ossl_core_handle_st* ,const struct ossl_dispatch_st* ,const struct ossl_dispatch_st** ,void**)  ;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
// source head

// header function
int select(int __nfds, struct anonymous_typeX3* __restrict  __readfds  , struct anonymous_typeX3* __restrict  __writefds  , struct anonymous_typeX3* __restrict  __exceptfds  , struct timeval* __restrict  __timeout  );
int pselect(int __nfds, struct anonymous_typeX3* __restrict  __readfds  , struct anonymous_typeX3* __restrict  __writefds  , struct anonymous_typeX3* __restrict  __exceptfds  , const struct timespec* __restrict  __timeout  , const struct anonymous_typeX2* __restrict  __sigmask  );
struct cmsghdr*  __cmsg_nxthdr(struct msghdr*  __mhdr  , struct cmsghdr*  __cmsg  );
int socket(int __domain, int __type, int __protocol);
int socketpair(int __domain, int __type, int __protocol, int __fds[2]);
int bind(int __fd, const struct sockaddr* __restrict  __addr  , unsigned int  __len  );
int getsockname(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __len  );
int connect(int __fd, const struct sockaddr* __restrict  __addr  , unsigned int  __len  );
int getpeername(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __len  );
long  int  send(int __fd, const void* __buf, unsigned long  __n  , int __flags);
long  int  recv(int __fd, void* __buf, unsigned long  __n  , int __flags);
long  int  sendto(int __fd, const void* __buf, unsigned long  __n  , int __flags, const struct sockaddr* __restrict  __addr  , unsigned int  __addr_len  );
long  int  recvfrom(int __fd, void* __restrict __buf, unsigned long  __n  , int __flags, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __addr_len  );
long  int  sendmsg(int __fd, const struct msghdr*  __message  , int __flags);
int sendmmsg(int __fd, struct mmsghdr*  __vmessages  , unsigned int __vlen, int __flags);
long  int  recvmsg(int __fd, struct msghdr*  __message  , int __flags);
int recvmmsg(int __fd, struct mmsghdr*  __vmessages  , unsigned int __vlen, int __flags, struct timespec*  __tmo  );
int getsockopt(int __fd, int __level, int __optname, void* __restrict __optval, unsigned int* __restrict  __optlen  );
int setsockopt(int __fd, int __level, int __optname, const void* __optval, unsigned int  __optlen  );
int listen(int __fd, int __n);
int accept(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __addr_len  );
int accept4(int __fd, struct sockaddr* __restrict  __addr  , unsigned int* __restrict  __addr_len  , int __flags);
int shutdown(int __fd, int __how);
int sockatmark(int __fd);
int isfdtype(int __fd, int __fdtype);
unsigned int  ntohl(unsigned int  __netlong  ) __attribute__ ((__const__));
unsigned short int  ntohs(unsigned short int  __netshort  ) __attribute__ ((__const__));
unsigned int  htonl(unsigned int  __hostlong  ) __attribute__ ((__const__));
unsigned short int  htons(unsigned short int  __hostshort  ) __attribute__ ((__const__));
int bindresvport(int __sockfd, struct sockaddr_in*  __sock_in  );
int bindresvport6(int __sockfd, struct sockaddr_in6*  __sock_in  );
int inet6_option_space(int __nbytes) __attribute__ ((__deprecated__));
int inet6_option_init(void* __bp, struct cmsghdr**  __cmsgp  , int __type) __attribute__ ((__deprecated__));
int inet6_option_append(struct cmsghdr*  __cmsg  , const unsigned char*  __typep  , int __multx, int __plusy) __attribute__ ((__deprecated__));
unsigned char*  inet6_option_alloc(struct cmsghdr*  __cmsg  , int __datalen, int __multx, int __plusy) __attribute__ ((__deprecated__));
int inet6_option_next(const struct cmsghdr*  __cmsg  , unsigned char**  __tptrp  ) __attribute__ ((__deprecated__));
int inet6_option_find(const struct cmsghdr*  __cmsg  , unsigned char**  __tptrp  , int __type) __attribute__ ((__deprecated__));
int inet6_opt_init(void* __extbuf, unsigned int  __extlen  );
int inet6_opt_append(void* __extbuf, unsigned int  __extlen  , int __offset, unsigned char  __type  , unsigned int  __len  , unsigned char  __align  , void** __databufp);
int inet6_opt_finish(void* __extbuf, unsigned int  __extlen  , int __offset);
int inet6_opt_set_val(void* __databuf, int __offset, void* __val, unsigned int  __vallen  );
int inet6_opt_next(void* __extbuf, unsigned int  __extlen  , int __offset, unsigned char*  __typep  , unsigned int*  __lenp  , void** __databufp);
int inet6_opt_find(void* __extbuf, unsigned int  __extlen  , int __offset, unsigned char  __type  , unsigned int*  __lenp  , void** __databufp);
int inet6_opt_get_val(void* __databuf, int __offset, void* __val, unsigned int  __vallen  );
unsigned int  inet6_rth_space(int __type, int __segments);
void* inet6_rth_init(void* __bp, unsigned int  __bp_len  , int __type, int __segments);
int inet6_rth_add(void* __bp, const struct in6_addr*  __addr  );
int inet6_rth_reverse(const void* __in, void* __out);
int inet6_rth_segments(const void* __bp);
struct in6_addr*  inet6_rth_getaddr(const void* __bp, int __index);
int getipv4sourcefilter(int __s, struct in_addr  __interface_addr  , struct in_addr  __group  , unsigned int*  __fmode  , unsigned int*  __numsrc  , struct in_addr*  __slist  );
int setipv4sourcefilter(int __s, struct in_addr  __interface_addr  , struct in_addr  __group  , unsigned int  __fmode  , unsigned int  __numsrc  , const struct in_addr*  __slist  );
int getsourcefilter(int __s, unsigned int  __interface_addr  , const struct sockaddr*  __group  , unsigned int  __grouplen  , unsigned int*  __fmode  , unsigned int*  __numsrc  , struct sockaddr_storage*  __slist  );
int setsourcefilter(int __s, unsigned int  __interface_addr  , const struct sockaddr*  __group  , unsigned int  __grouplen  , unsigned int  __fmode  , unsigned int  __numsrc  , const struct sockaddr_storage*  __slist  );
unsigned int  inet_addr(const char* __cp);
unsigned int  inet_lnaof(struct in_addr  __in  );
struct in_addr  inet_makeaddr(unsigned int  __net  , unsigned int  __host  );
unsigned int  inet_netof(struct in_addr  __in  );
unsigned int  inet_network(const char* __cp);
char* inet_ntoa(struct in_addr  __in  );
int inet_pton(int __af, const char* __restrict __cp, void* __restrict __buf);
const char* inet_ntop(int __af, const void* __restrict __cp, char* __restrict __buf, unsigned int  __len  );
int inet_aton(const char* __cp, struct in_addr*  __inp  );
char* inet_neta(unsigned int  __net  , char* __buf, unsigned long  __len  ) __attribute__ ((__deprecated__));
char* inet_net_ntop(int __af, const void* __cp, int __bits, char* __buf, unsigned long  __len  );
int inet_net_pton(int __af, const char* __cp, void* __buf, unsigned long  __len  );
unsigned int inet_nsap_addr(const char* __cp, unsigned char* __buf, int __len);
char* inet_nsap_ntoa(int __len, const unsigned char* __cp, char* __buf);
long  int __sysconf(int __name);
void (*__sysv_signal(int __sig, void (*__handler)(int)  ))(int) ;
void (*sysv_signal(int __sig, void (*__handler)(int)  ))(int) ;
void (*signal(int __sig, void (*__handler)(int)  ))(int) ;
int kill(int  __pid  , int __sig);
int killpg(int  __pgrp  , int __sig);
int raise(int __sig);
void (*ssignal(int __sig, void (*__handler)(int)  ))(int) ;
int gsignal(int __sig);
void psignal(int __sig, const char* __s);
void psiginfo(const struct anonymous_typeX19*  __pinfo  , const char* __s);
int sigpause(int __sig) __asm__ ("__xpg_sigpause")
  __attribute__ ((__deprecated__));
int sigblock(int __mask) __attribute__ ((__deprecated__));
int sigsetmask(int __mask) __attribute__ ((__deprecated__));
int siggetmask() __attribute__ ((__deprecated__));
int sigemptyset(struct anonymous_typeX2*  __set  );
int sigfillset(struct anonymous_typeX2*  __set  );
int sigaddset(struct anonymous_typeX2*  __set  , int __signo);
int sigdelset(struct anonymous_typeX2*  __set  , int __signo);
int sigismember(const struct anonymous_typeX2*  __set  , int __signo);
int sigisemptyset(const struct anonymous_typeX2*  __set  );
int sigandset(struct anonymous_typeX2*  __set  , const struct anonymous_typeX2*  __left  , const struct anonymous_typeX2*  __right  );
int sigorset(struct anonymous_typeX2*  __set  , const struct anonymous_typeX2*  __left  , const struct anonymous_typeX2*  __right  );
int sigprocmask(int __how, const struct anonymous_typeX2* __restrict  __set  , struct anonymous_typeX2* __restrict  __oset  );
int sigsuspend(const struct anonymous_typeX2*  __set  );
int sigaction(int __sig, const struct sigaction* __restrict  __act  , struct sigaction* __restrict  __oact  );
int sigpending(struct anonymous_typeX2*  __set  );
int sigwait(const struct anonymous_typeX2* __restrict  __set  , int* __restrict __sig);
int sigwaitinfo(const struct anonymous_typeX2* __restrict  __set  , struct anonymous_typeX19* __restrict  __info  );
int sigtimedwait(const struct anonymous_typeX2* __restrict  __set  , struct anonymous_typeX19* __restrict  __info  , const struct timespec* __restrict  __timeout  );
int sigqueue(int  __pid  , int __sig, const union sigval  __val  );
int sigreturn(struct sigcontext*  __scp  );
int siginterrupt(int __sig, int __interrupt) __attribute__ ((__deprecated__));
int access(const char* __name, int __type);
int euidaccess(const char* __name, int __type);
int eaccess(const char* __name, int __type);
int execveat(int __fd, const char* __path, char* const __argv[], char* const __envp[], int __flags);
int faccessat(int __fd, const char* __file, int __type, int __flag);
long  int  lseek(int __fd, long  int  __offset  , int __whence);
long  int  lseek64(int __fd, long  int  __offset  , int __whence);
int close(int __fd);
void closefrom(int __lowfd);
long  int  read(int __fd, void* __buf, unsigned long  __nbytes  );
long  int  write(int __fd, const void* __buf, unsigned long  __n  );
long  int  pread(int __fd, void* __buf, unsigned long  __nbytes  , long  int  __offset  );
long  int  pwrite(int __fd, const void* __buf, unsigned long  __n  , long  int  __offset  );
long  int  pread64(int __fd, void* __buf, unsigned long  __nbytes  , long  int  __offset  );
long  int  pwrite64(int __fd, const void* __buf, unsigned long  __n  , long  int  __offset  );
int pipe(int __pipedes[2]);
int pipe2(int __pipedes[2], int __flags);
unsigned int alarm(unsigned int __seconds);
unsigned int sleep(unsigned int __seconds);
unsigned int  ualarm(unsigned int  __value  , unsigned int  __interval  );
int usleep(unsigned int  __useconds  );
int pause();
int chown(const char* __file, unsigned int  __owner  , unsigned int  __group  );
int fchown(int __fd, unsigned int  __owner  , unsigned int  __group  );
int lchown(const char* __file, unsigned int  __owner  , unsigned int  __group  );
int fchownat(int __fd, const char* __file, unsigned int  __owner  , unsigned int  __group  , int __flag);
int chdir(const char* __path);
int fchdir(int __fd);
char* getcwd(char* __buf, unsigned long  __size  );
char* get_current_dir_name();
char* getwd(char* __buf) __attribute__ ((__deprecated__)) 
    ;
int dup(int __fd);
int dup2(int __fd, int __fd2);
int dup3(int __fd, int __fd2, int __flags);
int execve(const char* __path, char* const __argv[], char* const __envp[]);
int fexecve(int __fd, char* const __argv[], char* const __envp[]);
int execv(const char* __path, char* const __argv[]);
int execle(const char* __path, const char* __arg, ...);
int execl(const char* __path, const char* __arg, ...);
int execvp(const char* __file, char* const __argv[]);
int execlp(const char* __file, const char* __arg, ...);
int execvpe(const char* __file, char* const __argv[], char* const __envp[]);
int nice(int __inc);
void _exit(int __status) __attribute__ ((__noreturn__));
long  int pathconf(const char* __path, int __name);
long  int fpathconf(int __fd, int __name);
long  int sysconf(int __name);
unsigned long  confstr(int __name, char* __buf, unsigned long  __len  );
int  getpid();
int  getppid();
int  getpgrp();
int  __getpgid(int  __pid  );
int  getpgid(int  __pid  );
int setpgid(int  __pid  , int  __pgid  );
int setpgrp();
int  setsid();
int  getsid(int  __pid  );
unsigned int  getuid();
unsigned int  geteuid();
unsigned int  getgid();
unsigned int  getegid();
int getgroups(int __size, unsigned int  __list[]  );
int group_member(unsigned int  __gid  );
int setuid(unsigned int  __uid  );
int setreuid(unsigned int  __ruid  , unsigned int  __euid  );
int seteuid(unsigned int  __uid  );
int setgid(unsigned int  __gid  );
int setregid(unsigned int  __rgid  , unsigned int  __egid  );
int setegid(unsigned int  __gid  );
int getresuid(unsigned int*  __ruid  , unsigned int*  __euid  , unsigned int*  __suid  );
int getresgid(unsigned int*  __rgid  , unsigned int*  __egid  , unsigned int*  __sgid  );
int setresuid(unsigned int  __ruid  , unsigned int  __euid  , unsigned int  __suid  );
int setresgid(unsigned int  __rgid  , unsigned int  __egid  , unsigned int  __sgid  );
int  fork();
int  vfork();
int  _Fork();
char* ttyname(int __fd);
int ttyname_r(int __fd, char* __buf, unsigned long  __buflen  );
int isatty(int __fd);
int ttyslot();
int link(const char* __from, const char* __to);
int linkat(int __fromfd, const char* __from, int __tofd, const char* __to, int __flags);
int symlink(const char* __from, const char* __to);
long  int  readlink(const char* __restrict __path, char* __restrict __buf, unsigned long  __len  );
int symlinkat(const char* __from, int __tofd, const char* __to);
long  int  readlinkat(int __fd, const char* __restrict __path, char* __restrict __buf, unsigned long  __len  );
int unlink(const char* __name);
int unlinkat(int __fd, const char* __name, int __flag);
int rmdir(const char* __path);
int  tcgetpgrp(int __fd);
int tcsetpgrp(int __fd, int  __pgrp_id  );
char* getlogin();
int getlogin_r(char* __name, unsigned long  __name_len  );
int setlogin(const char* __name);
int getopt(int ___argc, char** const ___argv, const char* __shortopts);
int gethostname(char* __name, unsigned long  __len  );
int sethostname(const char* __name, unsigned long  __len  );
int sethostid(long  int __id);
int getdomainname(char* __name, unsigned long  __len  );
int setdomainname(const char* __name, unsigned long  __len  );
int vhangup();
int revoke(const char* __file);
int profil(unsigned short int* __sample_buffer, unsigned long  __size  , unsigned long  __offset  , unsigned int __scale);
int acct(const char* __name);
char* getusershell();
void endusershell();
void setusershell();
int daemon(int __nochdir, int __noclose);
int chroot(const char* __path);
char* getpass(const char* __prompt);
int fsync(int __fd);
int syncfs(int __fd);
long  int gethostid();
void sync();
int getpagesize() __attribute__ ((__const__));
int getdtablesize();
int truncate(const char* __file, long  int  __length  );
int truncate64(const char* __file, long  int  __length  );
int ftruncate(int __fd, long  int  __length  );
int ftruncate64(int __fd, long  int  __length  );
int brk(void* __addr);
void* sbrk(long  int  __delta  );
long  int syscall(long  int __sysno, ...);
int lockf(int __fd, int __cmd, long  int  __len  );
int lockf64(int __fd, int __cmd, long  int  __len  );
long  int  copy_file_range(int __infd, long  int*  __pinoff  , int __outfd, long  int*  __poutoff  , unsigned long  __length  , unsigned int __flags);
int fdatasync(int __fildes);
char* crypt(const char* __key, const char* __salt);
void swab(const void* __restrict __from, void* __restrict __to, long  int  __n  );
int getentropy(void* __buffer, unsigned long  __length  );
int close_range(unsigned int __fd, unsigned int __max_fd, int __flags);
int  gettid();
int sigaltstack(const struct anonymous_typeX52* __restrict  __ss  , struct anonymous_typeX52* __restrict  __oss  );
int sigstack(struct sigstack*  __ss  , struct sigstack*  __oss  ) __attribute__ ((__deprecated__));
int sighold(int __sig) __attribute__ ((__deprecated__));
int sigrelse(int __sig) __attribute__ ((__deprecated__));
int sigignore(int __sig) __attribute__ ((__deprecated__));
void (*sigset(int __sig, void (*__disp)(int)  ))(int)  __attribute__ ((__deprecated__)) ;
int pthread_sigmask(int __how, const struct anonymous_typeX2* __restrict  __newmask  , struct anonymous_typeX2* __restrict  __oldmask  );
int pthread_kill(unsigned long  int  __threadid  , int __signo);
int pthread_sigqueue(unsigned long  int  __threadid  , int __signo, const union sigval  __value  );
int __libc_current_sigrtmin();
int __libc_current_sigrtmax();
int tgkill(int  __tgid  , int  __tid  , int __signal);
int ns_msg_getflag(struct __ns_msg    , int );
unsigned int ns_get16(const unsigned char* );
unsigned long  int ns_get32(const unsigned char* );
void ns_put16(unsigned int , unsigned char* );
void ns_put32(unsigned long  int , unsigned char* );
int ns_initparse(const unsigned char* , int , struct __ns_msg*    );
int ns_skiprr(const unsigned char* , const unsigned char* , enum __ns_sect    , int );
int ns_parserr(struct __ns_msg*    , enum __ns_sect    , int , struct __ns_rr*    );
int ns_sprintrr(const struct __ns_msg*    , const struct __ns_rr*    , const char* , const char* , char* , unsigned long    ) __attribute__ ((__deprecated__));
int ns_sprintrrf(const unsigned char* , unsigned long    , const char* , enum __ns_class    , enum __ns_type    , unsigned long  int , const unsigned char* , unsigned long    , const char* , const char* , char* , unsigned long    ) __attribute__ ((__deprecated__));
int ns_format_ttl(unsigned long  int , char* , unsigned long    ) __attribute__ ((__deprecated__));
int ns_parse_ttl(const char* , unsigned long  int* ) __attribute__ ((__deprecated__));
unsigned int  ns_datetosecs(const char* , int* ) __attribute__ ((__deprecated__));
int ns_name_ntol(const unsigned char* , unsigned char* , unsigned long    );
int ns_name_ntop(const unsigned char* , char* , unsigned long    );
int ns_name_pton(const char* , unsigned char* , unsigned long    );
int ns_name_unpack(const unsigned char* , const unsigned char* , const unsigned char* , unsigned char* , unsigned long    );
int ns_name_pack(const unsigned char* , unsigned char* , int , const unsigned char** , const unsigned char** );
int ns_name_uncompress(const unsigned char* , const unsigned char* , const unsigned char* , char* , unsigned long    );
int ns_name_compress(const char* , unsigned char* , unsigned long    , const unsigned char** , const unsigned char** );
int ns_name_skip(const unsigned char** , const unsigned char* );
void ns_name_rollback(const unsigned char* , const unsigned char** , const unsigned char** );
int ns_samedomain(const char* , const char* ) __attribute__ ((__deprecated__));
int ns_subdomain(const char* , const char* ) __attribute__ ((__deprecated__));
int ns_makecanon(const char* , char* , unsigned long    ) __attribute__ ((__deprecated__));
int ns_samename(const char* , const char* ) __attribute__ ((__deprecated__));
const char* gnu_get_libc_release();
const char* gnu_get_libc_version();
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(struct _IO_FILE*  __stream  );
struct _IO_FILE*  tmpfile() __attribute__ ((__malloc__))  ;
struct _IO_FILE*  tmpfile64() __attribute__ ((__malloc__))  ;
char* tmpnam(char [20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx) __attribute__ ((__malloc__))  ;
int fflush(struct _IO_FILE*  __stream  );
int fflush_unlocked(struct _IO_FILE*  __stream  );
int fcloseall();
struct _IO_FILE*  fopen(const char* __restrict __filename, const char* __restrict __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  freopen(const char* __restrict __filename, const char* __restrict __modes, struct _IO_FILE* __restrict  __stream  );
struct _IO_FILE*  fopen64(const char* __restrict __filename, const char* __restrict __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  freopen64(const char* __restrict __filename, const char* __restrict __modes, struct _IO_FILE* __restrict  __stream  );
struct _IO_FILE*  fdopen(int __fd, const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  fopencookie(void* __restrict __magic_cookie, const char* __restrict __modes, struct _IO_cookie_io_functions_t  __io_funcs  ) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  fmemopen(void* __s, unsigned long  __len  , const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  open_memstream(char** __bufloc, unsigned long*  __sizeloc  ) __attribute__ ((__malloc__))  ;
void setbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf);
int setvbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, int __modes, unsigned long  __n  );
void setbuffer(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, unsigned long  __size  );
void setlinebuf(struct _IO_FILE*  __stream  );
int fprintf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int printf(const char* __restrict __format, ...);
int sprintf(char* __restrict __s, const char* __restrict __format, ...);
int vfprintf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int vprintf(const char* __restrict __format, __builtin_va_list  __arg  );
int vsprintf(char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
int snprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict __format, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 3, 0)));
int vasprintf(char** __restrict __ptr, const char* __restrict __f, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 2, 0))) ;
int __asprintf(char** __restrict __ptr, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3))) ;
int asprintf(char** __restrict __ptr, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3))) ;
int vdprintf(int __fd, const char* __restrict __fmt, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 2, 0)));
int dprintf(int __fd, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int scanf(const char* __restrict __format, ...);
int sscanf(const char* __restrict __s, const char* __restrict __format, ...);
int __isoc23_fscanf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int __isoc23_scanf(const char* __restrict __format, ...);
int __isoc23_sscanf(const char* __restrict __s, const char* __restrict __format, ...);
int vfscanf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)))  ;
int vscanf(const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 1, 0))) ;
int vsscanf(const char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)));
int __isoc23_vfscanf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int __isoc23_vscanf(const char* __restrict __format, __builtin_va_list  __arg  );
int __isoc23_vsscanf(const char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
int fgetc(struct _IO_FILE*  __stream  );
int getc(struct _IO_FILE*  __stream  );
int getchar();
int getc_unlocked(struct _IO_FILE*  __stream  );
int getchar_unlocked();
int fgetc_unlocked(struct _IO_FILE*  __stream  );
int fputc(int __c, struct _IO_FILE*  __stream  );
int putc(int __c, struct _IO_FILE*  __stream  );
int putchar(int __c);
int fputc_unlocked(int __c, struct _IO_FILE*  __stream  );
int putc_unlocked(int __c, struct _IO_FILE*  __stream  );
int putchar_unlocked(int __c);
int getw(struct _IO_FILE*  __stream  );
int putw(int __w, struct _IO_FILE*  __stream  );
char* fgets(char* __restrict __s, int __n, struct _IO_FILE* __restrict  __stream  );
char* fgets_unlocked(char* __restrict __s, int __n, struct _IO_FILE* __restrict  __stream  );
long  int  __getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getline(char** __restrict __lineptr, unsigned long* __restrict  __n  , struct _IO_FILE* __restrict  __stream  );
int fputs(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE*  __stream  );
unsigned long  fread(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __s  );
int fputs_unlocked(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
unsigned long  fread_unlocked(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite_unlocked(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
int fseek(struct _IO_FILE*  __stream  , long  int __off, int __whence);
long  int ftell(struct _IO_FILE*  __stream  );
void rewind(struct _IO_FILE*  __stream  );
int fseeko(struct _IO_FILE*  __stream  , long  int  __off  , int __whence);
long  int  ftello(struct _IO_FILE*  __stream  );
int fgetpos(struct _IO_FILE* __restrict  __stream  , struct _G_fpos_t* __restrict  __pos  );
int fsetpos(struct _IO_FILE*  __stream  , const struct _G_fpos_t*  __pos  );
int fseeko64(struct _IO_FILE*  __stream  , long  int  __off  , int __whence);
long  int  ftello64(struct _IO_FILE*  __stream  );
int fgetpos64(struct _IO_FILE* __restrict  __stream  , struct _G_fpos64_t* __restrict  __pos  );
int fsetpos64(struct _IO_FILE*  __stream  , const struct _G_fpos64_t*  __pos  );
void clearerr(struct _IO_FILE*  __stream  );
int feof(struct _IO_FILE*  __stream  );
int ferror(struct _IO_FILE*  __stream  );
void clearerr_unlocked(struct _IO_FILE*  __stream  );
int feof_unlocked(struct _IO_FILE*  __stream  );
int ferror_unlocked(struct _IO_FILE*  __stream  );
void perror(const char* __s);
int fileno(struct _IO_FILE*  __stream  );
int fileno_unlocked(struct _IO_FILE*  __stream  );
int pclose(struct _IO_FILE*  __stream  );
struct _IO_FILE*  popen(const char* __command, const char* __modes) __attribute__ ((__malloc__))  ;
char* ctermid(char* __s);
char* cuserid(char* __s);
int obstack_printf(struct obstack* __restrict  __obstack  , const char* __restrict __format, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int obstack_vprintf(struct obstack* __restrict  __obstack  , const char* __restrict __format, __builtin_va_list  __args  ) __attribute__ ((__format__ (__printf__, 2, 0)));
void flockfile(struct _IO_FILE*  __stream  );
int ftrylockfile(struct _IO_FILE*  __stream  );
void funlockfile(struct _IO_FILE*  __stream  );
int __uflow(struct _IO_FILE*    );
int __overflow(struct _IO_FILE*    , int );
int*  wcscpy(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
unsigned long  wcslcpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
unsigned long  wcslcat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
int*  wcscat(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
int wcscmp(const int*  __s1  , const int*  __s2  ) __attribute__ ((__pure__)) ;
int wcsncmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__)) ;
int wcscasecmp(const int*  __s1  , const int*  __s2  );
int wcsncasecmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  );
int wcscasecmp_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
int wcsncasecmp_l(const int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int wcscoll(const int*  __s1  , const int*  __s2  );
unsigned long  wcsxfrm(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
int wcscoll_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
unsigned long  wcsxfrm_l(int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int*  wcsdup(const int*  __s  ) __attribute__ ((__malloc__)) ;
int*  wcschr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcsrchr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcschrnul(const int*  __s  , int  __wc  ) __attribute__ ((__pure__));
unsigned long  wcscspn(const int*  __wcs  , const int*  __reject  ) __attribute__ ((__pure__));
unsigned long  wcsspn(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcspbrk(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcsstr(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
int*  wcstok(int* __restrict  __s  , const int* __restrict  __delim  , int** __restrict  __ptr  );
unsigned long  wcslen(const int*  __s  ) __attribute__ ((__pure__));
int*  wcswcs(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
unsigned long  wcsnlen(const int*  __s  , unsigned long  __maxlen  ) __attribute__ ((__pure__));
int*  wmemchr(const int*  __s  , int  __c  , unsigned long  __n  ) __attribute__ ((__pure__));
int wmemcmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__));
int*  wmemcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
int*  wmemmove(int*  __s1  , const int*  __s2  , unsigned long  __n  );
int*  wmemset(int*  __s  , int  __c  , unsigned long  __n  );
int*  wmempcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
unsigned int  btowc(int __c);
int wctob(unsigned int  __c  );
int mbsinit(const struct anonymous_typeX63*  __ps  ) __attribute__ ((__pure__));
unsigned long  mbrtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX63* __restrict  __p  );
unsigned long  wcrtomb(char* __restrict __s, int  __wc  , struct anonymous_typeX63* __restrict  __ps  );
unsigned long  __mbrlen(const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX63* __restrict  __ps  );
unsigned long  mbrlen(const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX63* __restrict  __ps  );
unsigned long  mbsrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  __len  , struct anonymous_typeX63* __restrict  __ps  );
unsigned long  wcsrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  __len  , struct anonymous_typeX63* __restrict  __ps  );
unsigned long  mbsnrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  __nmc  , unsigned long  __len  , struct anonymous_typeX63* __restrict  __ps  );
unsigned long  wcsnrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  __nwc  , unsigned long  __len  , struct anonymous_typeX63* __restrict  __ps  );
int wcwidth(int  __c  );
int wcswidth(const int*  __s  , unsigned long  __n  );
double wcstod(const int* __restrict  __nptr  , int** __restrict  __endptr  );
float wcstof(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  double wcstold(const int* __restrict  __nptr  , int** __restrict  __endptr  );
float  wcstof32(const int* __restrict  __nptr  , int** __restrict  __endptr  );
double  wcstof64(const int* __restrict  __nptr  , int** __restrict  __endptr  );
double  wcstof32x(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  double  wcstof64x(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  int wcstol(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int wcstoul(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int wcstoll(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int wcstoull(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int wcstoq(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int wcstouq(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int __isoc23_wcstol(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int __isoc23_wcstoul(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int __isoc23_wcstoll(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int __isoc23_wcstoull(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int wcstol_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int wcstoul_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int wcstoll_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int wcstoull_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long  int __isoc23_wcstol_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int __isoc23_wcstoul_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int __isoc23_wcstoll_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int __isoc23_wcstoull_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
double wcstod_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
float wcstof_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
long  double wcstold_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
float  wcstof32_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
double  wcstof64_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
double  wcstof32x_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
long  double  wcstof64x_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
int*  wcpcpy(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcpncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
struct _IO_FILE*  open_wmemstream(int**  __bufloc  , unsigned long*  __sizeloc  ) __attribute__ ((__malloc__)) ;
int fwide(struct _IO_FILE*  __fp  , int __mode);
int fwprintf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int wprintf(const int* __restrict  __format  , ...);
int swprintf(int* __restrict  __s  , unsigned long  __n  , const int* __restrict  __format  , ...);
int vfwprintf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int vwprintf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int vswprintf(int* __restrict  __s  , unsigned long  __n  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int fwscanf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int wscanf(const int* __restrict  __format  , ...);
int swscanf(const int* __restrict  __s  , const int* __restrict  __format  , ...);
int __isoc23_fwscanf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int __isoc23_wscanf(const int* __restrict  __format  , ...);
int __isoc23_swscanf(const int* __restrict  __s  , const int* __restrict  __format  , ...);
int vfwscanf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int vwscanf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int vswscanf(const int* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc23_vfwscanf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc23_vwscanf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc23_vswscanf(const int* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
unsigned int  fgetwc(struct _IO_FILE*  __stream  );
unsigned int  getwc(struct _IO_FILE*  __stream  );
unsigned int  getwchar();
unsigned int  fputwc(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwc(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwchar(int  __wc  );
int*  fgetws(int* __restrict  __ws  , int __n, struct _IO_FILE* __restrict  __stream  );
int fputws(const int* __restrict  __ws  , struct _IO_FILE* __restrict  __stream  );
unsigned int  ungetwc(unsigned int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  getwc_unlocked(struct _IO_FILE*  __stream  );
unsigned int  getwchar_unlocked();
unsigned int  fgetwc_unlocked(struct _IO_FILE*  __stream  );
unsigned int  fputwc_unlocked(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwc_unlocked(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwchar_unlocked(int  __wc  );
int*  fgetws_unlocked(int* __restrict  __ws  , int __n, struct _IO_FILE* __restrict  __stream  );
int fputws_unlocked(const int* __restrict  __ws  , struct _IO_FILE* __restrict  __stream  );
unsigned long  wcsftime(int* __restrict  __s  , unsigned long  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  );
unsigned long  wcsftime_l(int* __restrict  __s  , unsigned long  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
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
int baudrate();
int beep();
int bkgd(unsigned int    );
void bkgdset(unsigned int    );
int border(unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    );
int box(struct _win_st*    , unsigned int    , unsigned int    );
_Bool can_change_color();
int cbreak();
int chgat(int , unsigned int    , short , const void* );
int clear();
int clearok(struct _win_st*    , _Bool );
int clrtobot();
int clrtoeol();
int color_content(short , short* , short* , short* );
int color_set(short , void* );
int COLOR_PAIR(int );
int copywin(const struct _win_st*    , struct _win_st*    , int , int , int , int , int , int , int );
int curs_set(int );
int def_prog_mode();
int def_shell_mode();
int delay_output(int );
int delch();
void delscreen(struct screen*    );
int delwin(struct _win_st*    );
int deleteln();
struct _win_st*  derwin(struct _win_st*    , int , int , int , int );
int doupdate();
struct _win_st*  dupwin(struct _win_st*    );
int echo();
int echochar(const unsigned int    );
int erase();
int endwin();
char erasechar();
void filter();
int flash();
int flushinp();
unsigned int  getbkgd(struct _win_st*    );
int getch();
int getnstr(char* , int );
int getstr(char* );
struct _win_st*  getwin(struct _IO_FILE*    );
int halfdelay(int );
_Bool has_colors();
_Bool has_ic();
_Bool has_il();
int hline(unsigned int    , int );
void idcok(struct _win_st*    , _Bool );
int idlok(struct _win_st*    , _Bool );
void immedok(struct _win_st*    , _Bool );
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
_Bool isendwin();
_Bool is_linetouched(struct _win_st*    , int );
_Bool is_wintouched(struct _win_st*    );
const char* keyname(int );
int keypad(struct _win_st*    , _Bool );
char killchar();
int leaveok(struct _win_st*    , _Bool );
char* longname();
int meta(struct _win_st*    , _Bool );
int move(int , int );
int mvaddch(int , int , const unsigned int    );
int mvaddchnstr(int , int , const unsigned int*    , int );
int mvaddchstr(int , int , const unsigned int*    );
int mvaddnstr(int , int , const char* , int );
int mvaddstr(int , int , const char* );
int mvchgat(int , int , int , unsigned int    , short , const void* );
int mvcur(int , int , int , int );
int mvdelch(int , int );
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
int mvprintw(int , int , const char* , ...) __attribute__((format(printf,3,4)));
int mvscanw(int , int , const char* , ...);
int mvvline(int , int , unsigned int    , int );
int mvwaddch(struct _win_st*    , int , int , const unsigned int    );
int mvwaddchnstr(struct _win_st*    , int , int , const unsigned int*    , int );
int mvwaddchstr(struct _win_st*    , int , int , const unsigned int*    );
int mvwaddnstr(struct _win_st*    , int , int , const char* , int );
int mvwaddstr(struct _win_st*    , int , int , const char* );
int mvwchgat(struct _win_st*    , int , int , int , unsigned int    , short , const void* );
int mvwdelch(struct _win_st*    , int , int );
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
int mvwprintw(struct _win_st*    , int , int , const char* , ...) __attribute__((format(printf,4,5)));
int mvwscanw(struct _win_st*    , int , int , const char* , ...);
int mvwvline(struct _win_st*    , int , int , unsigned int    , int );
int napms(int );
struct _win_st*  newpad(int , int );
struct screen*  newterm(const char* , struct _IO_FILE*    , struct _IO_FILE*    );
struct _win_st*  newwin(int , int , int , int );
int nl();
int nocbreak();
int nodelay(struct _win_st*    , _Bool );
int noecho();
int nonl();
void noqiflush();
int noraw();
int notimeout(struct _win_st*    , _Bool );
int overlay(const struct _win_st*    , struct _win_st*    );
int overwrite(const struct _win_st*    , struct _win_st*    );
int pair_content(short , short* , short* );
int PAIR_NUMBER(int );
int pechochar(struct _win_st*    , const unsigned int    );
int pnoutrefresh(struct _win_st*    , int , int , int , int , int , int );
int prefresh(struct _win_st*    , int , int , int , int , int , int );
int printw(const char* , ...) __attribute__((format(printf,1,2)));
int putwin(struct _win_st*    , struct _IO_FILE*    );
void qiflush();
int raw();
int redrawwin(struct _win_st*    );
int refresh();
int resetty();
int reset_prog_mode();
int reset_shell_mode();
int ripoffline(int , int (*anonymous_lambda_var_nameZ1)(struct _win_st* ,int));
int savetty();
int scanw(const char* , ...);
int scr_dump(const char* );
int scr_init(const char* );
int scrl(int );
int scroll(struct _win_st*    );
int scrollok(struct _win_st*    , _Bool );
int scr_restore(const char* );
int scr_set(const char* );
int setscrreg(int , int );
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
int syncok(struct _win_st*    , _Bool );
unsigned int  termattrs();
char* termname();
void timeout(int );
int touchline(struct _win_st*    , int , int );
int touchwin(struct _win_st*    );
int typeahead(int );
int ungetch(int );
int untouchwin(struct _win_st*    );
void use_env(_Bool );
void use_tioctl(_Bool );
int vidattr(unsigned int    );
int vidputs(unsigned int    , int (*anonymous_var_nameY505)(int)  );
int vline(unsigned int    , int );
int vwprintw(struct _win_st*    , const char* , __builtin_va_list    ) __attribute__((deprecated))	
		__attribute__((format(printf,2,0)));
int vw_printw(struct _win_st*    , const char* , __builtin_va_list    ) __attribute__((format(printf,2,0)));
int vwscanw(struct _win_st*    , const char* , __builtin_va_list    ) __attribute__((deprecated))	
		;
int vw_scanw(struct _win_st*    , const char* , __builtin_va_list    );
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
int wclrtobot(struct _win_st*    );
int wclrtoeol(struct _win_st*    );
int wcolor_set(struct _win_st*    , short , void* );
void wcursyncup(struct _win_st*    );
int wdelch(struct _win_st*    );
int wdeleteln(struct _win_st*    );
int wechochar(struct _win_st*    , const unsigned int    );
int werase(struct _win_st*    );
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
int wmove(struct _win_st*    , int , int );
int wnoutrefresh(struct _win_st*    );
int wprintw(struct _win_st*    , const char* , ...) __attribute__((format(printf,2,3)));
int wredrawln(struct _win_st*    , int , int );
int wrefresh(struct _win_st*    );
int wscanw(struct _win_st*    , const char* , ...);
int wscrl(struct _win_st*    , int );
int wsetscrreg(struct _win_st*    , int , int );
int wstandout(struct _win_st*    );
int wstandend(struct _win_st*    );
void wsyncdown(struct _win_st*    );
void wsyncup(struct _win_st*    );
void wtimeout(struct _win_st*    , int );
int wtouchln(struct _win_st*    , int , int , int );
int wvline(struct _win_st*    , unsigned int    , int );
int tigetflag(const char* );
int tigetnum(const char* );
char* tigetstr(const char* );
int putp(const char* );
char* tparm(const char* , ...);
char* tiparm(const char* , ...);
char* tiparm_s(int , int , const char* , ...);
int tiscan_s(int* , int* , const char* );
int getattrs(const struct _win_st*    );
int getcurx(const struct _win_st*    );
int getcury(const struct _win_st*    );
int getbegx(const struct _win_st*    );
int getbegy(const struct _win_st*    );
int getmaxx(const struct _win_st*    );
int getmaxy(const struct _win_st*    );
int getparx(const struct _win_st*    );
int getpary(const struct _win_st*    );
int alloc_pair(int , int );
int assume_default_colors(int , int );
const char* curses_version();
int define_key(const char* , int );
int extended_color_content(int , int* , int* , int* );
int extended_pair_content(int , int* , int* );
int extended_slk_color(int );
int find_pair(int , int );
int free_pair(int );
int get_escdelay();
int init_extended_color(int , int , int , int );
int init_extended_pair(int , int , int );
int is_cbreak();
int is_echo();
int is_nl();
int is_raw();
_Bool is_term_resized(int , int );
int key_defined(const char* );
char* keybound(int , int );
int keyok(int , _Bool );
void nofilter();
void reset_color_pairs();
int resize_term(int , int );
int resizeterm(int , int );
int set_escdelay(int );
int set_tabsize(int );
int use_default_colors();
int use_legacy_coding(int );
int use_screen(struct screen*    , int (*anonymous_var_nameY706)(struct screen* ,void*)  , void* );
int use_window(struct _win_st*    , int (*anonymous_var_nameY709)(struct _win_st* ,void*)  , void* );
int wresize(struct _win_st*    , int , int );
int use_extended_names(_Bool );
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
struct screen*  new_prescr();
int baudrate_sp(struct screen*    );
int beep_sp(struct screen*    );
_Bool can_change_color_sp(struct screen*    );
int cbreak_sp(struct screen*    );
int curs_set_sp(struct screen*    , int );
int color_content_sp(struct screen*    , short , short* , short* , short* );
int def_prog_mode_sp(struct screen*    );
int def_shell_mode_sp(struct screen*    );
int delay_output_sp(struct screen*    , int );
int doupdate_sp(struct screen*    );
int echo_sp(struct screen*    );
int endwin_sp(struct screen*    );
char erasechar_sp(struct screen*    );
void filter_sp(struct screen*    );
int flash_sp(struct screen*    );
int flushinp_sp(struct screen*    );
struct _win_st*  getwin_sp(struct screen*    , struct _IO_FILE*    );
int halfdelay_sp(struct screen*    , int );
_Bool has_colors_sp(struct screen*    );
_Bool has_ic_sp(struct screen*    );
_Bool has_il_sp(struct screen*    );
int init_color_sp(struct screen*    , short , short , short , short );
int init_pair_sp(struct screen*    , short , short , short );
int intrflush_sp(struct screen*    , struct _win_st*    , _Bool );
_Bool isendwin_sp(struct screen*    );
const char* keyname_sp(struct screen*    , int );
char killchar_sp(struct screen*    );
char* longname_sp(struct screen*    );
int mvcur_sp(struct screen*    , int , int , int , int );
int napms_sp(struct screen*    , int );
struct _win_st*  newpad_sp(struct screen*    , int , int );
struct screen*  newterm_sp(struct screen*    , const char* , struct _IO_FILE*    , struct _IO_FILE*    );
struct _win_st*  newwin_sp(struct screen*    , int , int , int , int );
int nl_sp(struct screen*    );
int nocbreak_sp(struct screen*    );
int noecho_sp(struct screen*    );
int nonl_sp(struct screen*    );
void noqiflush_sp(struct screen*    );
int noraw_sp(struct screen*    );
int pair_content_sp(struct screen*    , short , short* , short* );
void qiflush_sp(struct screen*    );
int raw_sp(struct screen*    );
int reset_prog_mode_sp(struct screen*    );
int reset_shell_mode_sp(struct screen*    );
int resetty_sp(struct screen*    );
int ripoffline_sp(struct screen*    , int , int (*anonymous_lambda_var_nameZ2)(struct _win_st* ,int));
int savetty_sp(struct screen*    );
int scr_init_sp(struct screen*    , const char* );
int scr_restore_sp(struct screen*    , const char* );
int scr_set_sp(struct screen*    , const char* );
int slk_attroff_sp(struct screen*    , const unsigned int    );
int slk_attron_sp(struct screen*    , const unsigned int    );
int slk_attrset_sp(struct screen*    , const unsigned int    );
unsigned int  slk_attr_sp(struct screen*    );
int slk_attr_set_sp(struct screen*    , const unsigned int    , short , void* );
int slk_clear_sp(struct screen*    );
int slk_color_sp(struct screen*    , short );
int slk_init_sp(struct screen*    , int );
char* slk_label_sp(struct screen*    , int );
int slk_noutrefresh_sp(struct screen*    );
int slk_refresh_sp(struct screen*    );
int slk_restore_sp(struct screen*    );
int slk_set_sp(struct screen*    , int , const char* , int );
int slk_touch_sp(struct screen*    );
int start_color_sp(struct screen*    );
unsigned int  termattrs_sp(struct screen*    );
char* termname_sp(struct screen*    );
int typeahead_sp(struct screen*    , int );
int ungetch_sp(struct screen*    , int );
void use_env_sp(struct screen*    , _Bool );
void use_tioctl_sp(struct screen*    , _Bool );
int vidattr_sp(struct screen*    , unsigned int    );
int vidputs_sp(struct screen*    , unsigned int    , int (*anonymous_var_nameY866)(struct screen* ,int)  );
int alloc_pair_sp(struct screen*    , int , int );
int assume_default_colors_sp(struct screen*    , int , int );
int define_key_sp(struct screen*    , const char* , int );
int extended_color_content_sp(struct screen*    , int , int* , int* , int* );
int extended_pair_content_sp(struct screen*    , int , int* , int* );
int extended_slk_color_sp(struct screen*    , int );
int find_pair_sp(struct screen*    , int , int );
int free_pair_sp(struct screen*    , int );
int get_escdelay_sp(struct screen*    );
int init_extended_color_sp(struct screen*    , int , int , int , int );
int init_extended_pair_sp(struct screen*    , int , int , int );
int is_cbreak_sp(struct screen*    );
int is_echo_sp(struct screen*    );
int is_nl_sp(struct screen*    );
int is_raw_sp(struct screen*    );
_Bool is_term_resized_sp(struct screen*    , int , int );
int key_defined_sp(struct screen*    , const char* );
char* keybound_sp(struct screen*    , int , int );
int keyok_sp(struct screen*    , int , _Bool );
void nofilter_sp(struct screen*    );
void reset_color_pairs_sp(struct screen*    );
int resize_term_sp(struct screen*    , int , int );
int resizeterm_sp(struct screen*    , int , int );
int set_escdelay_sp(struct screen*    , int );
int set_tabsize_sp(struct screen*    , int );
int use_default_colors_sp(struct screen*    );
int use_legacy_coding_sp(struct screen*    , int );
int add_wch(const struct anonymous_typeX66*    );
int add_wchnstr(const struct anonymous_typeX66*    , int );
int add_wchstr(const struct anonymous_typeX66*    );
int addnwstr(const int*    , int );
int addwstr(const int*    );
int bkgrnd(const struct anonymous_typeX66*    );
void bkgrndset(const struct anonymous_typeX66*    );
int border_set(const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    );
int box_set(struct _win_st*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    );
int echo_wchar(const struct anonymous_typeX66*    );
int erasewchar(int*    );
int get_wch(unsigned int*    );
int get_wstr(unsigned int*    );
int getbkgrnd(struct anonymous_typeX66*    );
int getcchar(const struct anonymous_typeX66*    , int*    , unsigned int*    , short* , void* );
int getn_wstr(unsigned int*    , int );
int hline_set(const struct anonymous_typeX66*    , int );
int in_wch(struct anonymous_typeX66*    );
int in_wchnstr(struct anonymous_typeX66*    , int );
int in_wchstr(struct anonymous_typeX66*    );
int innwstr(int*    , int );
int ins_nwstr(const int*    , int );
int ins_wch(const struct anonymous_typeX66*    );
int ins_wstr(const int*    );
int inwstr(int*    );
const char* key_name(int    );
int killwchar(int*    );
int mvadd_wch(int , int , const struct anonymous_typeX66*    );
int mvadd_wchnstr(int , int , const struct anonymous_typeX66*    , int );
int mvadd_wchstr(int , int , const struct anonymous_typeX66*    );
int mvaddnwstr(int , int , const int*    , int );
int mvaddwstr(int , int , const int*    );
int mvget_wch(int , int , unsigned int*    );
int mvget_wstr(int , int , unsigned int*    );
int mvgetn_wstr(int , int , unsigned int*    , int );
int mvhline_set(int , int , const struct anonymous_typeX66*    , int );
int mvin_wch(int , int , struct anonymous_typeX66*    );
int mvin_wchnstr(int , int , struct anonymous_typeX66*    , int );
int mvin_wchstr(int , int , struct anonymous_typeX66*    );
int mvinnwstr(int , int , int*    , int );
int mvins_nwstr(int , int , const int*    , int );
int mvins_wch(int , int , const struct anonymous_typeX66*    );
int mvins_wstr(int , int , const int*    );
int mvinwstr(int , int , int*    );
int mvvline_set(int , int , const struct anonymous_typeX66*    , int );
int mvwadd_wch(struct _win_st*    , int , int , const struct anonymous_typeX66*    );
int mvwadd_wchnstr(struct _win_st*    , int , int , const struct anonymous_typeX66*    , int );
int mvwadd_wchstr(struct _win_st*    , int , int , const struct anonymous_typeX66*    );
int mvwaddnwstr(struct _win_st*    , int , int , const int*    , int );
int mvwaddwstr(struct _win_st*    , int , int , const int*    );
int mvwget_wch(struct _win_st*    , int , int , unsigned int*    );
int mvwget_wstr(struct _win_st*    , int , int , unsigned int*    );
int mvwgetn_wstr(struct _win_st*    , int , int , unsigned int*    , int );
int mvwhline_set(struct _win_st*    , int , int , const struct anonymous_typeX66*    , int );
int mvwin_wch(struct _win_st*    , int , int , struct anonymous_typeX66*    );
int mvwin_wchnstr(struct _win_st*    , int , int , struct anonymous_typeX66*    , int );
int mvwin_wchstr(struct _win_st*    , int , int , struct anonymous_typeX66*    );
int mvwinnwstr(struct _win_st*    , int , int , int*    , int );
int mvwins_nwstr(struct _win_st*    , int , int , const int*    , int );
int mvwins_wch(struct _win_st*    , int , int , const struct anonymous_typeX66*    );
int mvwins_wstr(struct _win_st*    , int , int , const int*    );
int mvwinwstr(struct _win_st*    , int , int , int*    );
int mvwvline_set(struct _win_st*    , int , int , const struct anonymous_typeX66*    , int );
int pecho_wchar(struct _win_st*    , const struct anonymous_typeX66*    );
int setcchar(struct anonymous_typeX66*    , const int*    , const unsigned int    , short , const void* );
int slk_wset(int , const int*    , int );
unsigned int  term_attrs();
int unget_wch(const int    );
int vid_attr(unsigned int    , short , void* );
int vid_puts(unsigned int    , short , void* , int (*anonymous_var_nameY1138)(int)  );
int vline_set(const struct anonymous_typeX66*    , int );
int wadd_wch(struct _win_st*    , const struct anonymous_typeX66*    );
int wadd_wchnstr(struct _win_st*    , const struct anonymous_typeX66*    , int );
int wadd_wchstr(struct _win_st*    , const struct anonymous_typeX66*    );
int waddnwstr(struct _win_st*    , const int*    , int );
int waddwstr(struct _win_st*    , const int*    );
int wbkgrnd(struct _win_st*    , const struct anonymous_typeX66*    );
void wbkgrndset(struct _win_st*    , const struct anonymous_typeX66*    );
int wborder_set(struct _win_st*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    , const struct anonymous_typeX66*    );
int wecho_wchar(struct _win_st*    , const struct anonymous_typeX66*    );
int wget_wch(struct _win_st*    , unsigned int*    );
int wget_wstr(struct _win_st*    , unsigned int*    );
int wgetbkgrnd(struct _win_st*    , struct anonymous_typeX66*    );
int wgetn_wstr(struct _win_st*    , unsigned int*    , int );
int whline_set(struct _win_st*    , const struct anonymous_typeX66*    , int );
int win_wch(struct _win_st*    , struct anonymous_typeX66*    );
int win_wchnstr(struct _win_st*    , struct anonymous_typeX66*    , int );
int win_wchstr(struct _win_st*    , struct anonymous_typeX66*    );
int winnwstr(struct _win_st*    , int*    , int );
int wins_nwstr(struct _win_st*    , const int*    , int );
int wins_wch(struct _win_st*    , const struct anonymous_typeX66*    );
int wins_wstr(struct _win_st*    , const int*    );
int winwstr(struct _win_st*    , int*    );
int*  wunctrl(struct anonymous_typeX66*    );
int wvline_set(struct _win_st*    , const struct anonymous_typeX66*    , int );
unsigned int  term_attrs_sp(struct screen*    );
int erasewchar_sp(struct screen*    , int*    );
int killwchar_sp(struct screen*    , int*    );
int unget_wch_sp(struct screen*    , const int    );
int vid_attr_sp(struct screen*    , unsigned int    , short , void* );
int vid_puts_sp(struct screen*    , unsigned int    , short , void* , int (*anonymous_var_nameY1218)(struct screen* ,int)  );
int*  wunctrl_sp(struct screen*    , struct anonymous_typeX66*    );
_Bool has_mouse();
int getmouse(struct anonymous_typeX67*    );
int ungetmouse(struct anonymous_typeX67*    );
unsigned int  mousemask(unsigned int    , unsigned int*    );
_Bool wenclose(const struct _win_st*    , int , int );
int mouseinterval(int );
_Bool wmouse_trafo(const struct _win_st*    , int* , int* , _Bool );
_Bool mouse_trafo(int* , int* , _Bool );
_Bool has_mouse_sp(struct screen*    );
int getmouse_sp(struct screen*    , struct anonymous_typeX67*    );
int ungetmouse_sp(struct screen*    , struct anonymous_typeX67*    );
unsigned int  mousemask_sp(struct screen*    , unsigned int    , unsigned int*    );
int mouseinterval_sp(struct screen*    , int );
int mcprint(char* , int );
int has_key(int );
int has_key_sp(struct screen*    , int );
int mcprint_sp(struct screen*    , char* , int );
void _tracef(const char* , ...) __attribute__((format(printf,1,2)));
char* _traceattr(unsigned int    );
char* _traceattr2(int , unsigned int    );
char* _tracechar(int );
char* _tracechtype(unsigned int    );
char* _tracechtype2(int , unsigned int    );
char* _tracecchar_t(const struct anonymous_typeX66*    );
char* _tracecchar_t2(int , const struct anonymous_typeX66*    );
void trace(const unsigned int ) __attribute__((deprecated));
unsigned int curses_trace(const unsigned int );
void exit_curses(int );
const char* unctrl(unsigned int    );
const char* unctrl_sp(struct screen*    , unsigned int    );
struct typenode*  new_fieldtype(_Bool (* const field_check)(struct fieldnode* ,const void*), _Bool (* const char_check)(int,const void*));
struct typenode*  link_fieldtype(struct typenode*    , struct typenode*    );
int free_fieldtype(struct typenode*    );
int set_fieldtype_arg(struct typenode*    , void* (* const make_arg)(__builtin_va_list* ), void* (* const copy_arg)(const void*), void (* const free_arg)(void*));
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
int unfocus_current_field(struct formnode*    );
int field_index(const struct fieldnode*    );
int set_form_page(struct formnode*    , int );
int form_page(const struct formnode*    );
int scale_form(const struct formnode*    , int* , int* );
int set_form_init(struct formnode*    , void (*anonymous_var_nameY1390)(struct formnode* )  );
int set_form_term(struct formnode*    , void (*anonymous_var_nameY1392)(struct formnode* )  );
int set_field_init(struct formnode*    , void (*anonymous_var_nameY1394)(struct formnode* )  );
int set_field_term(struct formnode*    , void (*anonymous_var_nameY1396)(struct formnode* )  );
int post_form(struct formnode*    );
int unpost_form(struct formnode*    );
int pos_form_cursor(struct formnode*    );
int form_driver(struct formnode*    , int );
int form_driver_w(struct formnode*    , int , int    );
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
struct formnode*  new_form_sp(struct screen*    , struct fieldnode**    );
struct tagITEM**  menu_items(const struct tagMENU*    );
struct tagITEM*  current_item(const struct tagMENU*    );
struct tagITEM*  new_item(const char* , const char* );
struct tagMENU*  new_menu(struct tagITEM**    );
int  item_opts(const struct tagITEM*    );
int  menu_opts(const struct tagMENU*    );
void (*item_init(const struct tagMENU*    ))(struct tagMENU* ) ;
void (*item_term(const struct tagMENU*    ))(struct tagMENU* ) ;
void (*menu_init(const struct tagMENU*    ))(struct tagMENU* ) ;
void (*menu_term(const struct tagMENU*    ))(struct tagMENU* ) ;
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
int set_item_init(struct tagMENU*    , void (*anonymous_var_nameY1466)(struct tagMENU* )  );
int set_item_opts(struct tagITEM*    , int    );
int set_item_term(struct tagMENU*    , void (*anonymous_var_nameY1470)(struct tagMENU* )  );
int set_item_userptr(struct tagITEM*    , void* );
int set_item_value(struct tagITEM*    , _Bool );
int set_menu_back(struct tagMENU*    , unsigned int    );
int set_menu_fore(struct tagMENU*    , unsigned int    );
int set_menu_format(struct tagMENU*    , int , int );
int set_menu_grey(struct tagMENU*    , unsigned int    );
int set_menu_init(struct tagMENU*    , void (*anonymous_var_nameY1485)(struct tagMENU* )  );
int set_menu_items(struct tagMENU*    , struct tagITEM**    );
int set_menu_mark(struct tagMENU*    , const char* );
int set_menu_opts(struct tagMENU*    , int    );
int set_menu_pad(struct tagMENU*    , int );
int set_menu_pattern(struct tagMENU*    , const char* );
int set_menu_sub(struct tagMENU*    , struct _win_st*    );
int set_menu_term(struct tagMENU*    , void (*anonymous_var_nameY1499)(struct tagMENU* )  );
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
struct tagMENU*  new_menu_sp(struct screen*    , struct tagITEM**    );
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
int set_panel_userptr(struct panel*    , const void* );
const void* panel_userptr(const struct panel*    );
int move_panel(struct panel*    , int , int );
int replace_panel(struct panel*    , struct _win_st*    );
int panel_hidden(const struct panel*    );
struct panel*  ground_panel(struct screen*    );
struct panel*  ceiling_panel(struct screen*    );
void update_panels_sp(struct screen*    );
unsigned int  cfgetospeed(const struct termios*  __termios_p  );
unsigned int  cfgetispeed(const struct termios*  __termios_p  );
int cfsetospeed(struct termios*  __termios_p  , unsigned int  __speed  );
int cfsetispeed(struct termios*  __termios_p  , unsigned int  __speed  );
int cfsetspeed(struct termios*  __termios_p  , unsigned int  __speed  );
unsigned int  cfgetobaud(const struct termios*  __termios_p  );
unsigned int  cfgetibaud(const struct termios*  __termios_p  );
int cfsetobaud(struct termios*  __termios_p  , unsigned int  __baud  );
int cfsetibaud(struct termios*  __termios_p  , unsigned int  __baud  );
int cfsetbaud(struct termios*  __termios_p  , unsigned int  __baud  );
int tcgetattr(int __fd, struct termios*  __termios_p  );
int tcsetattr(int __fd, int __optional_actions, const struct termios*  __termios_p  );
void cfmakeraw(struct termios*  __termios_p  );
int tcsendbreak(int __fd, int __duration);
int tcdrain(int __fd);
int tcflush(int __fd, int __queue_selector);
int tcflow(int __fd, int __action);
int  tcgetsid(int __fd);
struct term*  set_curterm(struct term*    );
int del_curterm(struct term*    );
int restartterm(const char* , int , int* );
int setupterm(const char* , int , int* );
char* tgetstr(const char* , char** );
char* tgoto(const char* , int , int );
int tgetent(char* , const char* );
int tgetflag(const char* );
int tgetnum(const char* );
int tputs(const char* , int , int (*anonymous_lambda_var_nameZ3)(int));
char* tigetstr_sp(struct screen*    , const char* );
int putp_sp(struct screen*    , const char* );
int tigetflag_sp(struct screen*    , const char* );
int tigetnum_sp(struct screen*    , const char* );
char* tparm_sp(struct screen*    , const char* , ...);
char* tgetstr_sp(struct screen*    , const char* , char** );
char* tgoto_sp(struct screen*    , const char* , int , int );
int tgetent_sp(struct screen*    , char* , const char* );
int tgetflag_sp(struct screen*    , const char* );
int tgetnum_sp(struct screen*    , const char* );
int tputs_sp(struct screen*    , const char* , int , int (*anonymous_var_nameY1596)(struct screen* ,int)  );
struct term*  set_curterm_sp(struct screen*    , struct term*    );
int del_curterm_sp(struct screen*    , struct term*    );
int restartterm_sp(struct screen*    , const char* , int , int* );
void exit_terminfo(int );
unsigned int if_nametoindex(const char* __ifname);
char* if_indextoname(unsigned int __ifindex, char __ifname[16]);
struct if_nameindex*  if_nameindex();
void if_freenameindex(struct if_nameindex*  __ptr  );
int ioctl(int __fd, unsigned long  int __request, ...);
int gettimeofday(struct timeval* __restrict  __tv  , void* __restrict __tz);
int settimeofday(const struct timeval*  __tv  , const struct timezone*  __tz  );
int adjtime(const struct timeval*  __delta  , struct timeval*  __olddelta  );
int getitimer(enum __itimer_which  __which  , struct itimerval*  __value  );
int setitimer(enum __itimer_which  __which  , const struct itimerval* __restrict  __new  , struct itimerval* __restrict  __old  );
int utimes(const char* __file, const struct timeval  __tvp[2]  );
int lutimes(const char* __file, const struct timeval  __tvp[2]  );
int futimes(int __fd, const struct timeval  __tvp[2]  );
int futimesat(int __fd, const char* __file, const struct timeval  __tvp[2]  );
void setrpcent(int __stayopen);
void endrpcent();
struct rpcent*  getrpcbyname(const char* __name);
struct rpcent*  getrpcbynumber(int __number);
struct rpcent*  getrpcent();
int getrpcbyname_r(const char* __name, struct rpcent*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct rpcent**  __result  );
int getrpcbynumber_r(int __number, struct rpcent*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct rpcent**  __result  );
int getrpcent_r(struct rpcent*  __result_buf  , char* __buffer, unsigned long  __buflen  , struct rpcent**  __result  );
const unsigned short int** __ctype_b_loc() __attribute__ ((__const__));
const int**  __ctype_tolower_loc() __attribute__ ((__const__));
const int**  __ctype_toupper_loc() __attribute__ ((__const__));
int isalnum(int );
int isalpha(int );
int iscntrl(int );
int isdigit(int );
int islower(int );
int isgraph(int );
int isprint(int );
int ispunct(int );
int isspace(int );
int isupper(int );
int isxdigit(int );
int tolower(int __c);
int toupper(int __c);
int isblank(int );
int isctype(int __c, int __mask);
int isascii(int __c);
int toascii(int __c);
int _toupper(int );
int _tolower(int );
int isalnum_l(int , struct __locale_struct*    );
int isalpha_l(int , struct __locale_struct*    );
int iscntrl_l(int , struct __locale_struct*    );
int isdigit_l(int , struct __locale_struct*    );
int islower_l(int , struct __locale_struct*    );
int isgraph_l(int , struct __locale_struct*    );
int isprint_l(int , struct __locale_struct*    );
int ispunct_l(int , struct __locale_struct*    );
int isspace_l(int , struct __locale_struct*    );
int isupper_l(int , struct __locale_struct*    );
int isxdigit_l(int , struct __locale_struct*    );
int isblank_l(int , struct __locale_struct*    );
int __tolower_l(int __c, struct __locale_struct*  __l  );
int tolower_l(int __c, struct __locale_struct*  __l  );
int __toupper_l(int __c, struct __locale_struct*  __l  );
int toupper_l(int __c, struct __locale_struct*  __l  );
void* memcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* memmove(void* __dest, const void* __src, unsigned long  __n  );
void* memccpy(void* __restrict __dest, const void* __restrict __src, int __c, unsigned long  __n  );
void* memset(void* __s, int __c, unsigned long  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* memchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* rawmemchr(const void* __s, int __c) __attribute__ ((__pure__)) ;
void* memrchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) 
      ;
char* strcpy(char* __restrict __dest, const char* __restrict __src);
char* strncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* strcat(char* __restrict __dest, const char* __restrict __src);
char* strncat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcoll(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
unsigned long  strxfrm(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct*  __l  ) __attribute__ ((__pure__)) ;
unsigned long  strxfrm_l(char* __dest, const char* __src, unsigned long  __n  , struct __locale_struct*  __l  );
char* strdup(const char* __s) __attribute__ ((__malloc__)) ;
char* strndup(const char* __string, unsigned long  __n  ) __attribute__ ((__malloc__)) ;
char* strchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strrchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strchrnul(const char* __s, int __c) __attribute__ ((__pure__)) ;
unsigned long  strcspn(const char* __s, const char* __reject) __attribute__ ((__pure__)) ;
unsigned long  strspn(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strpbrk(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strstr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
char* strtok(char* __restrict __s, const char* __restrict __delim);
char* __strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
void* memmem(const void* __haystack, unsigned long  __haystacklen  , const void* __needle, unsigned long  __needlelen  ) __attribute__ ((__pure__)) 
    
    ;
void* __mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
unsigned long  strlen(const char* __s) __attribute__ ((__pure__)) ;
unsigned long  strnlen(const char* __string, unsigned long  __maxlen  ) __attribute__ ((__pure__)) ;
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  __buflen  );
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct*  __l  );
int bcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void bcopy(const void* __src, void* __dest, unsigned long  __n  );
void bzero(void* __s, unsigned long  __n  );
char* index(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* rindex(const char* __s, int __c) __attribute__ ((__pure__)) ;
int ffs(int __i) __attribute__ ((__const__));
int ffsl(long  int __l) __attribute__ ((__const__));
int ffsll(long long int __ll) __attribute__ ((__const__));
int strcasecmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncasecmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  __n  , struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
void explicit_bzero(void* __s, unsigned long  __n  );
char* strsep(char** __restrict __stringp, const char* __restrict __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __restrict __dest, const char* __restrict __src);
char* stpcpy(char* __restrict __dest, const char* __restrict __src);
char* __stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strverscmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  __n  );
char* basename(const char* __filename);
char* tilde_expand(const char* );
char* tilde_expand_word(const char* );
char* tilde_find_word(const char* , int , int* );
int rl_digit_argument(int , int );
int rl_universal_argument(int , int );
int rl_forward_byte(int , int );
int rl_forward_char(int , int );
int rl_forward(int , int );
int rl_backward_byte(int , int );
int rl_backward_char(int , int );
int rl_backward(int , int );
int rl_beg_of_line(int , int );
int rl_end_of_line(int , int );
int rl_forward_word(int , int );
int rl_backward_word(int , int );
int rl_refresh_line(int , int );
int rl_clear_screen(int , int );
int rl_clear_display(int , int );
int rl_skip_csi_sequence(int , int );
int rl_arrow_keys(int , int );
int rl_previous_screen_line(int , int );
int rl_next_screen_line(int , int );
int rl_insert(int , int );
int rl_quoted_insert(int , int );
int rl_tab_insert(int , int );
int rl_newline(int , int );
int rl_do_lowercase_version(int , int );
int rl_rubout(int , int );
int rl_delete(int , int );
int rl_rubout_or_delete(int , int );
int rl_delete_horizontal_space(int , int );
int rl_delete_or_show_completions(int , int );
int rl_insert_comment(int , int );
int rl_upcase_word(int , int );
int rl_downcase_word(int , int );
int rl_capitalize_word(int , int );
int rl_transpose_words(int , int );
int rl_transpose_chars(int , int );
int rl_char_search(int , int );
int rl_backward_char_search(int , int );
int rl_beginning_of_history(int , int );
int rl_end_of_history(int , int );
int rl_get_next_history(int , int );
int rl_get_previous_history(int , int );
int rl_operate_and_get_next(int , int );
int rl_fetch_history(int , int );
int rl_set_mark(int , int );
int rl_exchange_point_and_mark(int , int );
int rl_vi_editing_mode(int , int );
int rl_emacs_editing_mode(int , int );
int rl_overwrite_mode(int , int );
int rl_re_read_init_file(int , int );
int rl_dump_functions(int , int );
int rl_dump_macros(int , int );
int rl_dump_variables(int , int );
int rl_complete(int , int );
int rl_possible_completions(int , int );
int rl_insert_completions(int , int );
int rl_old_menu_complete(int , int );
int rl_menu_complete(int , int );
int rl_backward_menu_complete(int , int );
int rl_export_completions(int , int );
int rl_kill_word(int , int );
int rl_backward_kill_word(int , int );
int rl_kill_line(int , int );
int rl_backward_kill_line(int , int );
int rl_kill_full_line(int , int );
int rl_unix_word_rubout(int , int );
int rl_unix_filename_rubout(int , int );
int rl_unix_line_discard(int , int );
int rl_copy_region_to_kill(int , int );
int rl_kill_region(int , int );
int rl_copy_forward_word(int , int );
int rl_copy_backward_word(int , int );
int rl_yank(int , int );
int rl_yank_pop(int , int );
int rl_yank_nth_arg(int , int );
int rl_yank_last_arg(int , int );
int rl_bracketed_paste_begin(int , int );
int rl_reverse_search_history(int , int );
int rl_forward_search_history(int , int );
int rl_start_kbd_macro(int , int );
int rl_end_kbd_macro(int , int );
int rl_call_last_kbd_macro(int , int );
int rl_print_last_kbd_macro(int , int );
int rl_revert_line(int , int );
int rl_undo_command(int , int );
int rl_tilde_expand(int , int );
int rl_restart_output(int , int );
int rl_stop_output(int , int );
int rl_abort(int , int );
int rl_tty_status(int , int );
int rl_execute_named_command(int , int );
int rl_history_search_forward(int , int );
int rl_history_search_backward(int , int );
int rl_history_substr_search_forward(int , int );
int rl_history_substr_search_backward(int , int );
int rl_noninc_forward_search(int , int );
int rl_noninc_reverse_search(int , int );
int rl_noninc_forward_search_again(int , int );
int rl_noninc_reverse_search_again(int , int );
int rl_insert_close(int , int );
void rl_callback_handler_install(const char* , void (*(*anonymous_var_nameY1889))(char*)  );
void rl_callback_read_char();
void rl_callback_handler_remove();
void rl_callback_sigcleanup();
int rl_vi_redo(int , int );
int rl_vi_undo(int , int );
int rl_vi_yank_arg(int , int );
int rl_vi_fetch_history(int , int );
int rl_vi_search_again(int , int );
int rl_vi_search(int , int );
int rl_vi_complete(int , int );
int rl_vi_tilde_expand(int , int );
int rl_vi_prev_word(int , int );
int rl_vi_next_word(int , int );
int rl_vi_end_word(int , int );
int rl_vi_insert_beg(int , int );
int rl_vi_append_mode(int , int );
int rl_vi_append_eol(int , int );
int rl_vi_eof_maybe(int , int );
int rl_vi_insertion_mode(int , int );
int rl_vi_insert_mode(int , int );
int rl_vi_movement_mode(int , int );
int rl_vi_arg_digit(int , int );
int rl_vi_change_case(int , int );
int rl_vi_put(int , int );
int rl_vi_column(int , int );
int rl_vi_delete_to(int , int );
int rl_vi_change_to(int , int );
int rl_vi_yank_to(int , int );
int rl_vi_yank_pop(int , int );
int rl_vi_rubout(int , int );
int rl_vi_delete(int , int );
int rl_vi_back_to_indent(int , int );
int rl_vi_unix_word_rubout(int , int );
int rl_vi_first_print(int , int );
int rl_vi_char_search(int , int );
int rl_vi_match(int , int );
int rl_vi_change_char(int , int );
int rl_vi_subst(int , int );
int rl_vi_overstrike(int , int );
int rl_vi_overstrike_delete(int , int );
int rl_vi_replace(int , int );
int rl_vi_set_mark(int , int );
int rl_vi_goto_mark(int , int );
int rl_vi_check();
int rl_vi_domove(int , int* );
int rl_vi_bracktype(int );
void rl_vi_start_inserting(int , int , int );
int rl_vi_fWord(int , int );
int rl_vi_bWord(int , int );
int rl_vi_eWord(int , int );
int rl_vi_fword(int , int );
int rl_vi_bword(int , int );
int rl_vi_eword(int , int );
char* readline(const char* );
int rl_set_prompt(const char* );
int rl_expand_prompt(char* );
int rl_initialize();
int rl_discard_argument();
int rl_add_defun(const char* , int (*(*anonymous_var_nameY1992))(int,int)  , int );
int rl_bind_key(int , int (*(*anonymous_var_nameY1995))(int,int)  );
int rl_bind_key_in_map(int , int (*(*anonymous_var_nameY1997))(int,int)  , struct _keymap_entry*    );
int rl_unbind_key(int );
int rl_unbind_key_in_map(int , struct _keymap_entry*    );
int rl_bind_key_if_unbound(int , int (*(*anonymous_var_nameY2003))(int,int)  );
int rl_bind_key_if_unbound_in_map(int , int (*(*anonymous_var_nameY2005))(int,int)  , struct _keymap_entry*    );
int rl_unbind_function_in_map(int (*(*anonymous_var_nameY2007))(int,int)  , struct _keymap_entry*    );
int rl_unbind_command_in_map(const char* , struct _keymap_entry*    );
int rl_bind_keyseq(const char* , int (*(*anonymous_var_nameY2012))(int,int)  );
int rl_bind_keyseq_in_map(const char* , int (*(*anonymous_var_nameY2014))(int,int)  , struct _keymap_entry*    );
int rl_bind_keyseq_if_unbound(const char* , int (*(*anonymous_var_nameY2017))(int,int)  );
int rl_bind_keyseq_if_unbound_in_map(const char* , int (*(*anonymous_var_nameY2019))(int,int)  , struct _keymap_entry*    );
int rl_generic_bind(int , const char* , char* , struct _keymap_entry*    );
char* rl_variable_value(const char* );
int rl_variable_bind(const char* , const char* );
int rl_set_key(const char* , int (*(*anonymous_var_nameY2029))(int,int)  , struct _keymap_entry*    );
int rl_macro_bind(const char* , const char* , struct _keymap_entry*    );
int rl_translate_keyseq(const char* , char* , int* );
char* rl_untranslate_keyseq(int );
int (*(*rl_named_function(const char* )))(int,int) ;
int (*(*rl_function_of_keyseq(const char* , struct _keymap_entry*    , int* )))(int,int) ;
int (*(*rl_function_of_keyseq_len(const char* , unsigned long    , struct _keymap_entry*    , int* )))(int,int) ;
int rl_trim_arg_from_keyseq(const char* , unsigned long    , struct _keymap_entry*    );
void rl_list_funmap_names();
char** rl_invoking_keyseqs_in_map(int (*(*anonymous_var_nameY2049))(int,int)  , struct _keymap_entry*    );
char** rl_invoking_keyseqs(int (*(*anonymous_var_nameY2051))(int,int)  );
void rl_print_keybinding(const char* , struct _keymap_entry*    , int );
void rl_function_dumper(int );
void rl_macro_dumper(int );
void rl_variable_dumper(int );
int rl_read_init_file(const char* );
int rl_parse_and_bind(char* );
struct _keymap_entry*  rl_make_bare_keymap();
int rl_empty_keymap(struct _keymap_entry*    );
struct _keymap_entry*  rl_copy_keymap(struct _keymap_entry*    );
struct _keymap_entry*  rl_make_keymap();
void rl_discard_keymap(struct _keymap_entry*    );
void rl_free_keymap(struct _keymap_entry*    );
struct _keymap_entry*  rl_get_keymap_by_name(const char* );
char* rl_get_keymap_name(struct _keymap_entry*    );
void rl_set_keymap(struct _keymap_entry*    );
struct _keymap_entry*  rl_get_keymap();
int rl_set_keymap_name(const char* , struct _keymap_entry*    );
void rl_set_keymap_from_edit_mode();
char* rl_get_keymap_name_from_edit_mode();
int rl_add_funmap_entry(const char* , int (*(*anonymous_var_nameY2070))(int,int)  );
const char** rl_funmap_names();
void rl_initialize_funmap();
void rl_push_macro_input(char* );
void rl_add_undo(enum undo_code , int , int , char* );
void rl_free_undo_list();
int rl_do_undo();
int rl_begin_undo_group();
int rl_end_undo_group();
int rl_modifying(int , int );
void rl_redisplay();
int rl_on_new_line();
int rl_on_new_line_with_prompt();
int rl_forced_update_display();
int rl_clear_visible_line();
int rl_clear_message();
int rl_reset_line_state();
int rl_crlf();
void rl_keep_mark_active();
void rl_activate_mark();
void rl_deactivate_mark();
int rl_mark_active_p();
int rl_message(const char* , ...) __attribute__((__format__ (printf, 1, 2)));
int rl_show_char(int );
int rl_character_len(int , int );
void rl_redraw_prompt_last_line();
void rl_save_prompt();
void rl_restore_prompt();
void rl_replace_line(const char* , int );
int rl_insert_text(const char* );
int rl_delete_text(int , int );
int rl_kill_text(int , int );
char* rl_copy_text(int , int );
void rl_prep_terminal(int );
void rl_deprep_terminal();
void rl_tty_set_default_bindings(struct _keymap_entry*    );
void rl_tty_unset_default_bindings(struct _keymap_entry*    );
int rl_tty_set_echoing(int );
int rl_reset_terminal(const char* );
void rl_resize_terminal();
void rl_set_screen_size(int , int );
void rl_get_screen_size(int* , int* );
void rl_reset_screen_size();
char* rl_get_termcap(const char* );
void rl_reparse_colors();
int rl_stuff_char(int );
int rl_execute_next(int );
int rl_clear_pending_input();
int rl_read_key();
int rl_getc(struct _IO_FILE*    );
int rl_set_keyboard_input_timeout(int );
int rl_set_timeout(unsigned int , unsigned int );
int rl_timeout_remaining(unsigned int* , unsigned int* );
void rl_extend_line_buffer(int );
int rl_ding();
int rl_alphabetic(int );
void rl_free(void* );
int rl_set_signals();
int rl_clear_signals();
void rl_cleanup_after_signal();
void rl_reset_after_signal();
void rl_free_line_state();
int rl_pending_signal();
void rl_check_signals();
void rl_echo_signal_char(int );
int rl_set_paren_blink_timeout(int );
void rl_clear_history();
int rl_maybe_save_line();
int rl_maybe_unsave_line();
int rl_maybe_replace_line();
int rl_complete_internal(int );
void rl_display_match_list(char** , int , int );
char** rl_completion_matches(const char* , char* (*(*anonymous_var_nameY2119))(const char*,int)  );
char* rl_username_completion_function(const char* , int );
char* rl_filename_completion_function(const char* , int );
int rl_completion_mode(int (*(*anonymous_var_nameY2124))(int,int)  );
int rl_save_state(struct readline_state*    );
int rl_restore_state(struct readline_state*    );
int clock_adjtime(int  __clock_id  , struct timex*  __utx  );
long  int  clock();
long  int  time(long  int*  __timer  );
double difftime(long  int  __time1  , long  int  __time0  );
long  int  mktime(struct tm*  __tp  );
unsigned long  strftime(char* __restrict __s, unsigned long  __maxsize  , const char* __restrict __format, const struct tm* __restrict  __tp  );
char* strptime(const char* __restrict __s, const char* __restrict __fmt, struct tm*  __tp  );
unsigned long  strftime_l(char* __restrict __s, unsigned long  __maxsize  , const char* __restrict __format, const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
char* strptime_l(const char* __restrict __s, const char* __restrict __fmt, struct tm*  __tp  , struct __locale_struct*  __loc  );
struct tm*  gmtime(const long  int*  __timer  );
struct tm*  localtime(const long  int*  __timer  );
struct tm*  gmtime_r(const long  int* __restrict  __timer  , struct tm* __restrict  __tp  );
struct tm*  localtime_r(const long  int* __restrict  __timer  , struct tm* __restrict  __tp  );
char* asctime(const struct tm*  __tp  );
char* ctime(const long  int*  __timer  );
char* asctime_r(const struct tm* __restrict  __tp  , char* __restrict __buf);
char* ctime_r(const long  int* __restrict  __timer  , char* __restrict __buf);
void tzset();
long  int  timegm(struct tm*  __tp  );
long  int  timelocal(struct tm*  __tp  );
int dysize(int __year) __attribute__ ((__const__));
int nanosleep(const struct timespec*  __requested_time  , struct timespec*  __remaining  );
int clock_getres(int  __clock_id  , struct timespec*  __res  );
int clock_gettime(int  __clock_id  , struct timespec*  __tp  );
int clock_settime(int  __clock_id  , const struct timespec*  __tp  );
int clock_nanosleep(int  __clock_id  , int __flags, const struct timespec*  __req  , struct timespec*  __rem  );
int clock_getcpuclockid(int  __pid  , int*  __clock_id  );
int timer_create(int  __clock_id  , struct sigevent* __restrict  __evp  , void** __restrict  __timerid  );
int timer_delete(void*  __timerid  );
int timer_settime(void*  __timerid  , int __flags, const struct itimerspec* __restrict  __value  , struct itimerspec* __restrict  __ovalue  );
int timer_gettime(void*  __timerid  , struct itimerspec*  __value  );
int timer_getoverrun(void*  __timerid  );
int timespec_get(struct timespec*  __ts  , int __base);
int timespec_getres(struct timespec*  __ts  , int __base);
struct tm*  getdate(const char* __string);
int getdate_r(const char* __restrict __string, struct tm* __restrict  __resbufp  );
void using_history();
struct _hist_state*  history_get_history_state();
void history_set_history_state(struct _hist_state*    );
void add_history(const char* );
void add_history_time(const char* );
struct _hist_entry*  remove_history(int );
struct _hist_entry**  remove_history_range(int , int );
struct _hist_entry*  alloc_history_entry(char* , char* );
struct _hist_entry*  copy_history_entry(struct _hist_entry*    );
void*  free_history_entry(struct _hist_entry*    );
struct _hist_entry*  replace_history_entry(int , const char* , void*    );
void clear_history();
void stifle_history(int );
int unstifle_history();
int history_is_stifled();
struct _hist_entry**  history_list();
int where_history();
struct _hist_entry*  current_history();
struct _hist_entry*  history_get(int );
long  int  history_get_time(struct _hist_entry*    );
int history_total_bytes();
int history_set_pos(int );
struct _hist_entry*  previous_history();
struct _hist_entry*  next_history();
int history_search(const char* , int );
int history_search_prefix(const char* , int );
int history_search_pos(const char* , int , int );
int read_history(const char* );
int read_history_range(const char* , int , int );
int write_history(const char* );
int append_history(int , const char* );
int history_truncate_file(const char* , int );
int history_expand(const char* , char** );
char* history_arg_extract(int , int , const char* );
char* get_history_event(const char* , int* , int );
char** history_tokenize(const char* );
long  int  imaxabs(long  int  __n  ) __attribute__ ((__const__));
unsigned long  int  uimaxabs(long  int  __n  ) __attribute__ ((__const__));
struct anonymous_typeX96  imaxdiv(long  int  __numer  , long  int  __denom  ) __attribute__ ((__const__));
long  int  strtoimax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int  strtoumax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long  int  wcstoimax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int  wcstoumax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int  __isoc23_strtoimax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int  __isoc23_strtoumax(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long  int  __isoc23_wcstoimax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int  __isoc23_wcstoumax(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  __ctype_get_mb_cur_max();
double atof(const char* __nptr) __attribute__ ((__pure__))  ;
int atoi(const char* __nptr) __attribute__ ((__pure__))  ;
long  int atol(const char* __nptr) __attribute__ ((__pure__))  ;
long long int atoll(const char* __nptr) __attribute__ ((__pure__))  ;
double strtod(const char* __restrict __nptr, char** __restrict __endptr);
float strtof(const char* __restrict __nptr, char** __restrict __endptr);
long  double strtold(const char* __restrict __nptr, char** __restrict __endptr);
float  strtof32(const char* __restrict __nptr, char** __restrict __endptr);
double  strtof64(const char* __restrict __nptr, char** __restrict __endptr);
double  strtof32x(const char* __restrict __nptr, char** __restrict __endptr);
long  double  strtof64x(const char* __restrict __nptr, char** __restrict __endptr);
long  int strtol(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int strtoul(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int strtoq(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int strtouq(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int strtoll(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int strtoull(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long  int __isoc23_strtol(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int __isoc23_strtoul(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int __isoc23_strtoll(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int __isoc23_strtoull(const char* __restrict __nptr, char** __restrict __endptr, int __base);
int strfromd(char* __dest, unsigned long  __size  , const char* __format, double __f);
int strfromf(char* __dest, unsigned long  __size  , const char* __format, float __f);
int strfroml(char* __dest, unsigned long  __size  , const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  __size  , const char* __format, float  __f  );
int strfromf64(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf32x(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf64x(char* __dest, unsigned long  __size  , const char* __format, long  double  __f  );
long  int strtol_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long  int strtoul_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long long int strtoll_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long long int strtoull_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long  int __isoc23_strtol_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long  int __isoc23_strtoul_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long long int __isoc23_strtoll_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long long int __isoc23_strtoull_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
double strtod_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
float strtof_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
long  double strtold_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
float  strtof32_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
double  strtof64_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
double  strtof32x_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
long  double  strtof64x_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
char* l64a(long  int __n);
long  int a64l(const char* __s) __attribute__ ((__pure__))  ;
long  int random();
void srandom(unsigned int __seed);
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  __statelen  );
char* setstate(char* __statebuf);
int random_r(struct random_data* __restrict  __buf  , int* __restrict  __result  );
int srandom_r(unsigned int __seed, struct random_data*  __buf  );
int initstate_r(unsigned int __seed, char* __restrict __statebuf, unsigned long  __statelen  , struct random_data* __restrict  __buf  );
int setstate_r(char* __restrict __statebuf, struct random_data* __restrict  __buf  );
int rand();
void srand(unsigned int __seed);
int rand_r(unsigned int* __seed);
double drand48();
double erand48(unsigned short int __xsubi[3]);
long  int lrand48();
long  int nrand48(unsigned short int __xsubi[3]);
long  int mrand48();
long  int jrand48(unsigned short int __xsubi[3]);
void srand48(long  int __seedval);
unsigned short int* seed48(unsigned short int __seed16v[3]);
void lcong48(unsigned short int __param[7]);
int drand48_r(struct drand48_data* __restrict  __buffer  , double* __restrict __result);
int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , double* __restrict __result);
int lrand48_r(struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int mrand48_r(struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int srand48_r(long  int __seedval, struct drand48_data*  __buffer  );
int seed48_r(unsigned short int __seed16v[3], struct drand48_data*  __buffer  );
int lcong48_r(unsigned short int __param[7], struct drand48_data*  __buffer  );
unsigned int  arc4random();
void arc4random_buf(void* __buf, unsigned long  __size  );
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
void* malloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
void* calloc(unsigned long  __nmemb  , unsigned long  __size  ) __attribute__ ((__malloc__))  ;
void* realloc(void* __ptr, unsigned long  __size  );
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  __nmemb  , unsigned long  __size  );
void* alloca(unsigned long  __size  );
void* valloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
int posix_memalign(void** __memptr, unsigned long  __alignment  , unsigned long  __size  );
void* aligned_alloc(unsigned long  __alignment  , unsigned long  __size  ) __attribute__ ((__malloc__)) 
      ;
void abort() __attribute__ ((__noreturn__)) ;
int atexit(void (*__func)());
int at_quick_exit(void (*__func)());
int on_exit(void (*__func)(int,void*), void* __arg);
void exit(int __status) __attribute__ ((__noreturn__));
void quick_exit(int __status) __attribute__ ((__noreturn__));
void _Exit(int __status) __attribute__ ((__noreturn__));
char* getenv(const char* __name);
char* secure_getenv(const char* __name);
int putenv(char* __string);
int setenv(const char* __name, const char* __value, int __replace);
int unsetenv(const char* __name);
int clearenv();
char* mktemp(char* __template);
int mkstemp(char* __template);
int mkstemp64(char* __template);
int mkstemps(char* __template, int __suffixlen);
int mkstemps64(char* __template, int __suffixlen);
char* mkdtemp(char* __template);
int mkostemp(char* __template, int __flags);
int mkostemp64(char* __template, int __flags);
int mkostemps(char* __template, int __suffixlen, int __flags);
int mkostemps64(char* __template, int __suffixlen, int __flags);
int system(const char* __command);
char* canonicalize_file_name(const char* __name) __attribute__ ((__malloc__))
      ;
char* realpath(const char* __restrict __name, char* __restrict __resolved);
void* bsearch(const void* __key, const void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort_r(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*,void*)  , void* __arg);
int abs(int __x) __attribute__ ((__const__)) ;
long  int labs(long  int __x) __attribute__ ((__const__)) ;
long long int llabs(long long int __x) __attribute__ ((__const__)) ;
unsigned int uabs(int __x) __attribute__ ((__const__)) ;
unsigned long  int ulabs(long  int __x) __attribute__ ((__const__)) ;
unsigned long long int ullabs(long long int __x) __attribute__ ((__const__)) ;
struct anonymous_typeX97  div(int __numer, int __denom) __attribute__ ((__const__)) ;
struct anonymous_typeX98  ldiv(long  int __numer, long  int __denom) __attribute__ ((__const__)) ;
struct anonymous_typeX99  lldiv(long long int __numer, long long int __denom) __attribute__ ((__const__)) ;
char* ecvt(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* fcvt(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* qfcvt(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* qgcvt(long  double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int fcvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qecvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qfcvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int mblen(const char* __s, unsigned long  __n  );
int mbtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  );
int wctomb(char* __s, int  __wchar  );
unsigned long  mbstowcs(int* __restrict  __pwcs  , const char* __restrict __s, unsigned long  __n  );
unsigned long  wcstombs(char* __restrict __s, const int* __restrict  __pwcs  , unsigned long  __n  );
int rpmatch(const char* __response);
int getsubopt(char** __restrict __optionp, char** const __restrict __tokens, char** __restrict __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  __buflen  );
int getpt();
int getloadavg(double __loadavg[], int __nelem);
int OPENSSL_sk_num(const struct stack_st*    );
void* OPENSSL_sk_value(const struct stack_st*    , int );
void* OPENSSL_sk_set(struct stack_st*  st  , int i, const void* data);
struct stack_st*  OPENSSL_sk_new(int (*cmp)(const void*,const void*)  );
struct stack_st*  OPENSSL_sk_new_null();
struct stack_st*  OPENSSL_sk_new_reserve(int (*c)(const void*,const void*)  , int n);
int OPENSSL_sk_reserve(struct stack_st*  st  , int n);
void OPENSSL_sk_free(struct stack_st*    );
void OPENSSL_sk_pop_free(struct stack_st*  st  , void (*func)(void*));
struct stack_st*  OPENSSL_sk_deep_copy(const struct stack_st*    , void* (*c)(const void*)  , void (*f)(void*)  );
int OPENSSL_sk_insert(struct stack_st*  sk  , const void* data, int where);
void* OPENSSL_sk_delete(struct stack_st*  st  , int loc);
void* OPENSSL_sk_delete_ptr(struct stack_st*  st  , const void* p);
int OPENSSL_sk_find(struct stack_st*  st  , const void* data);
int OPENSSL_sk_find_ex(struct stack_st*  st  , const void* data);
int OPENSSL_sk_find_all(struct stack_st*  st  , const void* data, int* pnum);
int OPENSSL_sk_push(struct stack_st*  st  , const void* data);
int OPENSSL_sk_unshift(struct stack_st*  st  , const void* data);
void* OPENSSL_sk_shift(struct stack_st*  st  );
void* OPENSSL_sk_pop(struct stack_st*  st  );
void OPENSSL_sk_zero(struct stack_st*  st  );
int (*OPENSSL_sk_set_cmp_func(struct stack_st*  sk  , int (*cmp)(const void*,const void*)  ))(const void*,const void*) ;
struct stack_st*  OPENSSL_sk_dup(const struct stack_st*  st  );
void OPENSSL_sk_sort(struct stack_st*  st  );
int OPENSSL_sk_is_sorted(const struct stack_st*  st  );
int ERR_load_ASN1_strings();
int ERR_load_ASYNC_strings();
int ERR_load_BIO_strings();
int ERR_load_BN_strings();
int ERR_load_BUF_strings();
int ERR_load_CMS_strings();
int ERR_load_COMP_strings();
int ERR_load_CONF_strings();
int ERR_load_CRYPTO_strings();
int ERR_load_CT_strings();
int ERR_load_DH_strings();
int ERR_load_DSA_strings();
int ERR_load_EC_strings();
int ERR_load_ERR_strings();
int ERR_load_EVP_strings();
int ERR_load_KDF_strings();
int ERR_load_OBJ_strings();
int ERR_load_OCSP_strings();
int ERR_load_PEM_strings();
int ERR_load_PKCS12_strings();
int ERR_load_PKCS7_strings();
int ERR_load_RAND_strings();
int ERR_load_RSA_strings();
int ERR_load_OSSL_STORE_strings();
int ERR_load_TS_strings();
int ERR_load_UI_strings();
int ERR_load_X509_strings();
int ERR_load_X509V3_strings();
void*  CRYPTO_THREAD_lock_new();
int CRYPTO_THREAD_read_lock(void*  lock  );
int CRYPTO_THREAD_write_lock(void*  lock  );
int CRYPTO_THREAD_unlock(void*  lock  );
void CRYPTO_THREAD_lock_free(void*  lock  );
int CRYPTO_atomic_add(int* val, int amount, int* ret, void*  lock  );
int CRYPTO_atomic_add64(unsigned long  int*  val  , unsigned long  int  op  , unsigned long  int*  ret  , void*  lock  );
int CRYPTO_atomic_and(unsigned long  int*  val  , unsigned long  int  op  , unsigned long  int*  ret  , void*  lock  );
int CRYPTO_atomic_or(unsigned long  int*  val  , unsigned long  int  op  , unsigned long  int*  ret  , void*  lock  );
int CRYPTO_atomic_load(unsigned long  int*  val  , unsigned long  int*  ret  , void*  lock  );
int CRYPTO_atomic_load_int(int* val, int* ret, void*  lock  );
int CRYPTO_atomic_store(unsigned long  int*  dst  , unsigned long  int  val  , void*  lock  );
unsigned long  OPENSSL_strlcpy(char* dst, const char* src, unsigned long  siz  );
unsigned long  OPENSSL_strlcat(char* dst, const char* src, unsigned long  siz  );
unsigned long  OPENSSL_strnlen(const char* str, unsigned long  maxlen  );
int OPENSSL_strtoul(const char* str, char** endptr, int base, unsigned long  int* num);
int OPENSSL_buf2hexstr_ex(char* str, unsigned long  str_n  , unsigned long*  strlength  , const unsigned char* buf, unsigned long  buflen  , const char sep);
char* OPENSSL_buf2hexstr(const unsigned char* buf, long buflen);
int OPENSSL_hexstr2buf_ex(unsigned char* buf, unsigned long  buf_n  , unsigned long*  buflen  , const char* str, const char sep);
unsigned char* OPENSSL_hexstr2buf(const char* str, long* buflen);
int OPENSSL_hexchar2int(unsigned char c);
int OPENSSL_strcasecmp(const char* s1, const char* s2);
int OPENSSL_strncasecmp(const char* s1, const char* s2, unsigned long  n  );
unsigned int OPENSSL_version_major();
unsigned int OPENSSL_version_minor();
unsigned int OPENSSL_version_patch();
const char* OPENSSL_version_pre_release();
const char* OPENSSL_version_build_metadata();
unsigned long  int OpenSSL_version_num();
const char* OpenSSL_version(int type);
const char* OPENSSL_info(int type);
int OPENSSL_issetugid();
int CRYPTO_get_ex_new_index(int class_index, long argl, void* argp, void (*(*new_func))(void*,void*,struct crypto_ex_data_st* ,int,long,void*)  , int (*(*dup_func))(struct crypto_ex_data_st* ,const struct crypto_ex_data_st* ,void**,int,long,void*)  , void (*(*free_func))(void*,void*,struct crypto_ex_data_st* ,int,long,void*)  );
int CRYPTO_free_ex_index(int class_index, int idx);
int CRYPTO_new_ex_data(int class_index, void* obj, struct crypto_ex_data_st*  ad  );
int CRYPTO_dup_ex_data(int class_index, struct crypto_ex_data_st*  to  , const struct crypto_ex_data_st*  from  );
void CRYPTO_free_ex_data(int class_index, void* obj, struct crypto_ex_data_st*  ad  );
int CRYPTO_alloc_ex_data(int class_index, void* obj, struct crypto_ex_data_st*  ad  , int idx);
int CRYPTO_set_ex_data(struct crypto_ex_data_st*  ad  , int idx, void* val);
void* CRYPTO_get_ex_data(const struct crypto_ex_data_st*  ad  , int idx);
int CRYPTO_set_mem_functions(void* (*malloc_fn)(unsigned long ,const char*,int)  , void* (*realloc_fn)(void*,unsigned long ,const char*,int)  , void (*free_fn)(void*,const char*,int)  );
void CRYPTO_get_mem_functions(void* (*(*malloc_fn))(unsigned long ,const char*,int)  , void* (*(*realloc_fn))(void*,unsigned long ,const char*,int)  , void (*(*free_fn))(void*,const char*,int)  );
__attribute__((__malloc__))  void* CRYPTO_malloc(unsigned long  num  , const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_zalloc(unsigned long  num  , const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_aligned_alloc(unsigned long  num  , unsigned long  align  , void** freeptr, const char* file, int line);
void* CRYPTO_memdup(const void* str, unsigned long  siz  , const char* file, int line);
char* CRYPTO_strdup(const char* str, const char* file, int line);
char* CRYPTO_strndup(const char* str, unsigned long  s  , const char* file, int line);
void CRYPTO_free(void* ptr, const char* file, int line);
void CRYPTO_clear_free(void* ptr, unsigned long  num  , const char* file, int line);
void* CRYPTO_realloc(void* addr, unsigned long  num  , const char* file, int line);
void* CRYPTO_clear_realloc(void* addr, unsigned long  old_num  , unsigned long  num  , const char* file, int line);
int CRYPTO_secure_malloc_init(unsigned long  sz  , unsigned long  minsize  );
int CRYPTO_secure_malloc_done();
__attribute__((__malloc__))  void* CRYPTO_secure_malloc(unsigned long  num  , const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_secure_zalloc(unsigned long  num  , const char* file, int line);
void CRYPTO_secure_free(void* ptr, const char* file, int line);
void CRYPTO_secure_clear_free(void* ptr, unsigned long  num  , const char* file, int line);
int CRYPTO_secure_allocated(const void* ptr);
int CRYPTO_secure_malloc_initialized();
unsigned long  CRYPTO_secure_actual_size(void* ptr);
unsigned long  CRYPTO_secure_used();
void OPENSSL_cleanse(void* ptr, unsigned long  len  );
_Noreturn  void OPENSSL_die(const char* assertion, const char* file, int line);
int OPENSSL_isservice();
void OPENSSL_init();
void OPENSSL_fork_prepare();
void OPENSSL_fork_parent();
void OPENSSL_fork_child();
struct tm*  OPENSSL_gmtime(const long  int*  timer  , struct tm*  result  );
int OPENSSL_gmtime_adj(struct tm*  tm  , int offset_day, long offset_sec);
int OPENSSL_gmtime_diff(int* pday, int* psec, const struct tm*  from  , const struct tm*  to  );
int CRYPTO_memcmp(const void* in_a, const void* in_b, unsigned long  len  );
void OPENSSL_cleanup();
int OPENSSL_init_crypto(unsigned long  int  opts  , const struct ossl_init_settings_st*  settings  );
int OPENSSL_atexit(void (*handler)());
void OPENSSL_thread_stop();
void OPENSSL_thread_stop_ex(struct ossl_lib_ctx_st*  ctx  );
struct ossl_init_settings_st*  OPENSSL_INIT_new();
int OPENSSL_INIT_set_config_filename(struct ossl_init_settings_st*  settings  , const char* config_filename);
void OPENSSL_INIT_set_config_file_flags(struct ossl_init_settings_st*  settings  , unsigned long  int flags);
int OPENSSL_INIT_set_config_appname(struct ossl_init_settings_st*  settings  , const char* config_appname);
void OPENSSL_INIT_free(struct ossl_init_settings_st*  settings  );
int clone(int (*__fn)(void*), void* __child_stack, int __flags, void* __arg, ...);
int unshare(int __flags);
int sched_getcpu();
int getcpu(unsigned int* , unsigned int* );
int setns(int __fd, int __nstype);
int sched_setattr(int  tid  , struct sched_attr*  attr  , unsigned int flags);
int sched_getattr(int  tid  , struct sched_attr*  attr  , unsigned int size, unsigned int flags);
int __sched_cpucount(unsigned long  __setsize  , const struct anonymous_typeX101*  __setp  );
struct anonymous_typeX101*  __sched_cpualloc(unsigned long  __count  );
void __sched_cpufree(struct anonymous_typeX101*  __set  );
int sched_setparam(int  __pid  , const struct sched_param*  __param  );
int sched_getparam(int  __pid  , struct sched_param*  __param  );
int sched_setscheduler(int  __pid  , int __policy, const struct sched_param*  __param  );
int sched_getscheduler(int  __pid  );
int sched_yield();
int sched_get_priority_max(int __algorithm);
int sched_get_priority_min(int __algorithm);
int sched_rr_get_interval(int  __pid  , struct timespec*  __t  );
int sched_setaffinity(int  __pid  , unsigned long  __cpusetsize  , const struct anonymous_typeX101*  __cpuset  );
int sched_getaffinity(int  __pid  , unsigned long  __cpusetsize  , struct anonymous_typeX101*  __cpuset  );
int pthread_create(unsigned long  int* __restrict  __newthread  , const union pthread_attr_t* __restrict  __attr  , void* (*__start_routine)(void*), void* __restrict __arg);
void pthread_exit(void* __retval) __attribute__ ((__noreturn__));
int pthread_join(unsigned long  int  __th  , void** __thread_return);
int pthread_tryjoin_np(unsigned long  int  __th  , void** __thread_return);
int pthread_timedjoin_np(unsigned long  int  __th  , void** __thread_return, const struct timespec*  __abstime  );
int pthread_clockjoin_np(unsigned long  int  __th  , void** __thread_return, int  __clockid  , const struct timespec*  __abstime  );
int pthread_detach(unsigned long  int  __th  );
unsigned long  int  pthread_self() __attribute__ ((__const__));
int pthread_equal(unsigned long  int  __thread1  , unsigned long  int  __thread2  ) __attribute__ ((__const__));
int pthread_attr_init(union pthread_attr_t*  __attr  );
int pthread_attr_destroy(union pthread_attr_t*  __attr  );
int pthread_attr_getdetachstate(const union pthread_attr_t*  __attr  , int* __detachstate);
int pthread_attr_setdetachstate(union pthread_attr_t*  __attr  , int __detachstate);
int pthread_attr_getguardsize(const union pthread_attr_t*  __attr  , unsigned long*  __guardsize  );
int pthread_attr_setguardsize(union pthread_attr_t*  __attr  , unsigned long  __guardsize  );
int pthread_attr_getschedparam(const union pthread_attr_t* __restrict  __attr  , struct sched_param* __restrict  __param  );
int pthread_attr_setschedparam(union pthread_attr_t* __restrict  __attr  , const struct sched_param* __restrict  __param  );
int pthread_attr_getschedpolicy(const union pthread_attr_t* __restrict  __attr  , int* __restrict __policy);
int pthread_attr_setschedpolicy(union pthread_attr_t*  __attr  , int __policy);
int pthread_attr_getinheritsched(const union pthread_attr_t* __restrict  __attr  , int* __restrict __inherit);
int pthread_attr_setinheritsched(union pthread_attr_t*  __attr  , int __inherit);
int pthread_attr_getscope(const union pthread_attr_t* __restrict  __attr  , int* __restrict __scope);
int pthread_attr_setscope(union pthread_attr_t*  __attr  , int __scope);
int pthread_attr_getstackaddr(const union pthread_attr_t* __restrict  __attr  , void** __restrict __stackaddr) __attribute__ ((__deprecated__));
int pthread_attr_setstackaddr(union pthread_attr_t*  __attr  , void* __stackaddr) __attribute__ ((__deprecated__));
int pthread_attr_getstacksize(const union pthread_attr_t* __restrict  __attr  , unsigned long* __restrict  __stacksize  );
int pthread_attr_setstacksize(union pthread_attr_t*  __attr  , unsigned long  __stacksize  );
int pthread_attr_getstack(const union pthread_attr_t* __restrict  __attr  , void** __restrict __stackaddr, unsigned long* __restrict  __stacksize  );
int pthread_attr_setstack(union pthread_attr_t*  __attr  , void* __stackaddr, unsigned long  __stacksize  );
int pthread_attr_setaffinity_np(union pthread_attr_t*  __attr  , unsigned long  __cpusetsize  , const struct anonymous_typeX101*  __cpuset  );
int pthread_attr_getaffinity_np(const union pthread_attr_t*  __attr  , unsigned long  __cpusetsize  , struct anonymous_typeX101*  __cpuset  );
int pthread_getattr_default_np(union pthread_attr_t*  __attr  );
int pthread_attr_setsigmask_np(union pthread_attr_t*  __attr  , const struct anonymous_typeX2*  sigmask  );
int pthread_attr_getsigmask_np(const union pthread_attr_t*  __attr  , struct anonymous_typeX2*  sigmask  );
int pthread_setattr_default_np(const union pthread_attr_t*  __attr  );
int pthread_getattr_np(unsigned long  int  __th  , union pthread_attr_t*  __attr  );
int pthread_setschedparam(unsigned long  int  __target_thread  , int __policy, const struct sched_param*  __param  );
int pthread_getschedparam(unsigned long  int  __target_thread  , int* __restrict __policy, struct sched_param* __restrict  __param  );
int pthread_setschedprio(unsigned long  int  __target_thread  , int __prio);
int pthread_getname_np(unsigned long  int  __target_thread  , char* __buf, unsigned long  __buflen  );
int pthread_setname_np(unsigned long  int  __target_thread  , const char* __name);
int pthread_getconcurrency();
int pthread_setconcurrency(int __level);
int pthread_yield();
int pthread_setaffinity_np(unsigned long  int  __th  , unsigned long  __cpusetsize  , const struct anonymous_typeX101*  __cpuset  );
int pthread_getaffinity_np(unsigned long  int  __th  , unsigned long  __cpusetsize  , struct anonymous_typeX101*  __cpuset  );
int pthread_once(int*  __once_control  , void (*__init_routine)());
int pthread_setcancelstate(int __state, int* __oldstate);
int pthread_setcanceltype(int __type, int* __oldtype);
int pthread_cancel(unsigned long  int  __th  );
void pthread_testcancel();
void __pthread_register_cancel(struct anonymous_typeX102*  __buf  );
void __pthread_unregister_cancel(struct anonymous_typeX102*  __buf  );
void __pthread_register_cancel_defer(struct anonymous_typeX102*  __buf  );
void __pthread_unregister_cancel_restore(struct anonymous_typeX102*  __buf  );
void __pthread_unwind_next(struct anonymous_typeX102*  __buf  ) __attribute__ ((__noreturn__))
#line 677 "/usr/include/pthread.h"
     __attribute__ ((__weak__))
#line 679 "/usr/include/pthread.h"
     ;
int __sigsetjmp(struct __jmp_buf_tag  __env[1]  , int __savemask);
int pthread_mutex_init(union anonymous_typeZ9*  __mutex  , const union anonymous_typeZ7*  __mutexattr  );
int pthread_mutex_destroy(union anonymous_typeZ9*  __mutex  );
int pthread_mutex_trylock(union anonymous_typeZ9*  __mutex  );
int pthread_mutex_lock(union anonymous_typeZ9*  __mutex  );
int pthread_mutex_timedlock(union anonymous_typeZ9* __restrict  __mutex  , const struct timespec* __restrict  __abstime  );
int pthread_mutex_clocklock(union anonymous_typeZ9* __restrict  __mutex  , int  __clockid  , const struct timespec* __restrict  __abstime  );
int pthread_mutex_unlock(union anonymous_typeZ9*  __mutex  );
int pthread_mutex_getprioceiling(const union anonymous_typeZ9* __restrict  __mutex  , int* __restrict __prioceiling);
int pthread_mutex_setprioceiling(union anonymous_typeZ9* __restrict  __mutex  , int __prioceiling, int* __restrict __old_ceiling);
int pthread_mutex_consistent(union anonymous_typeZ9*  __mutex  );
int pthread_mutexattr_init(union anonymous_typeZ7*  __attr  );
int pthread_mutexattr_destroy(union anonymous_typeZ7*  __attr  );
int pthread_mutexattr_getpshared(const union anonymous_typeZ7* __restrict  __attr  , int* __restrict __pshared);
int pthread_mutexattr_setpshared(union anonymous_typeZ7*  __attr  , int __pshared);
int pthread_mutexattr_gettype(const union anonymous_typeZ7* __restrict  __attr  , int* __restrict __kind);
int pthread_mutexattr_settype(union anonymous_typeZ7*  __attr  , int __kind);
int pthread_mutexattr_getprotocol(const union anonymous_typeZ7* __restrict  __attr  , int* __restrict __protocol);
int pthread_mutexattr_setprotocol(union anonymous_typeZ7*  __attr  , int __protocol);
int pthread_mutexattr_getprioceiling(const union anonymous_typeZ7* __restrict  __attr  , int* __restrict __prioceiling);
int pthread_mutexattr_setprioceiling(union anonymous_typeZ7*  __attr  , int __prioceiling);
int pthread_mutexattr_getrobust(const union anonymous_typeZ7*  __attr  , int* __robustness);
int pthread_mutexattr_setrobust(union anonymous_typeZ7*  __attr  , int __robustness);
int pthread_rwlock_init(union anonymous_typeZ11* __restrict  __rwlock  , const union anonymous_typeZ12* __restrict  __attr  );
int pthread_rwlock_destroy(union anonymous_typeZ11*  __rwlock  );
int pthread_rwlock_rdlock(union anonymous_typeZ11*  __rwlock  );
int pthread_rwlock_tryrdlock(union anonymous_typeZ11*  __rwlock  );
int pthread_rwlock_timedrdlock(union anonymous_typeZ11* __restrict  __rwlock  , const struct timespec* __restrict  __abstime  );
int pthread_rwlock_clockrdlock(union anonymous_typeZ11* __restrict  __rwlock  , int  __clockid  , const struct timespec* __restrict  __abstime  );
int pthread_rwlock_wrlock(union anonymous_typeZ11*  __rwlock  );
int pthread_rwlock_trywrlock(union anonymous_typeZ11*  __rwlock  );
int pthread_rwlock_timedwrlock(union anonymous_typeZ11* __restrict  __rwlock  , const struct timespec* __restrict  __abstime  );
int pthread_rwlock_clockwrlock(union anonymous_typeZ11* __restrict  __rwlock  , int  __clockid  , const struct timespec* __restrict  __abstime  );
int pthread_rwlock_unlock(union anonymous_typeZ11*  __rwlock  );
int pthread_rwlockattr_init(union anonymous_typeZ12*  __attr  );
int pthread_rwlockattr_destroy(union anonymous_typeZ12*  __attr  );
int pthread_rwlockattr_getpshared(const union anonymous_typeZ12* __restrict  __attr  , int* __restrict __pshared);
int pthread_rwlockattr_setpshared(union anonymous_typeZ12*  __attr  , int __pshared);
int pthread_rwlockattr_getkind_np(const union anonymous_typeZ12* __restrict  __attr  , int* __restrict __pref);
int pthread_rwlockattr_setkind_np(union anonymous_typeZ12*  __attr  , int __pref);
int pthread_cond_init(union anonymous_typeZ10* __restrict  __cond  , const union anonymous_typeZ8* __restrict  __cond_attr  );
int pthread_cond_destroy(union anonymous_typeZ10*  __cond  );
int pthread_cond_signal(union anonymous_typeZ10*  __cond  );
int pthread_cond_broadcast(union anonymous_typeZ10*  __cond  );
int pthread_cond_wait(union anonymous_typeZ10* __restrict  __cond  , union anonymous_typeZ9* __restrict  __mutex  );
int pthread_cond_timedwait(union anonymous_typeZ10* __restrict  __cond  , union anonymous_typeZ9* __restrict  __mutex  , const struct timespec* __restrict  __abstime  );
int pthread_cond_clockwait(union anonymous_typeZ10* __restrict  __cond  , union anonymous_typeZ9* __restrict  __mutex  , int  __clock_id  , const struct timespec* __restrict  __abstime  );
int pthread_condattr_init(union anonymous_typeZ8*  __attr  );
int pthread_condattr_destroy(union anonymous_typeZ8*  __attr  );
int pthread_condattr_getpshared(const union anonymous_typeZ8* __restrict  __attr  , int* __restrict __pshared);
int pthread_condattr_setpshared(union anonymous_typeZ8*  __attr  , int __pshared);
int pthread_condattr_getclock(const union anonymous_typeZ8* __restrict  __attr  , int* __restrict  __clock_id  );
int pthread_condattr_setclock(union anonymous_typeZ8*  __attr  , int  __clock_id  );
int pthread_spin_init(int*  __lock  , int __pshared);
int pthread_spin_destroy(int*  __lock  );
int pthread_spin_lock(int*  __lock  );
int pthread_spin_trylock(int*  __lock  );
int pthread_spin_unlock(int*  __lock  );
int pthread_barrier_init(union anonymous_typeZ13* __restrict  __barrier  , const union anonymous_typeZ14* __restrict  __attr  , unsigned int __count);
int pthread_barrier_destroy(union anonymous_typeZ13*  __barrier  );
int pthread_barrier_wait(union anonymous_typeZ13*  __barrier  );
int pthread_barrierattr_init(union anonymous_typeZ14*  __attr  );
int pthread_barrierattr_destroy(union anonymous_typeZ14*  __attr  );
int pthread_barrierattr_getpshared(const union anonymous_typeZ14* __restrict  __attr  , int* __restrict __pshared);
int pthread_barrierattr_setpshared(union anonymous_typeZ14*  __attr  , int __pshared);
int pthread_key_create(unsigned int*  __key  , void (*__destr_function)(void*));
int pthread_key_delete(unsigned int  __key  );
void* pthread_getspecific(unsigned int  __key  );
int pthread_setspecific(unsigned int  __key  , const void* __pointer);
int pthread_getcpuclockid(unsigned long  int  __thread_id  , int*  __clock_id  );
int  pthread_gettid_np(unsigned long  int  __thread_id  );
int pthread_atfork(void (*__prepare)(), void (*__parent)(), void (*__child)());
int CRYPTO_THREAD_run_once(int*  once  , void (*init)());
int CRYPTO_THREAD_init_local(unsigned int*  key  , void (*cleanup)(void*));
void* CRYPTO_THREAD_get_local(unsigned int*  key  );
int CRYPTO_THREAD_set_local(unsigned int*  key  , void* val);
int CRYPTO_THREAD_cleanup_local(unsigned int*  key  );
unsigned long  int  CRYPTO_THREAD_get_current_id();
int CRYPTO_THREAD_compare_id(unsigned long  int  a  , unsigned long  int  b  );
struct ossl_lib_ctx_st*  OSSL_LIB_CTX_new();
struct ossl_lib_ctx_st*  OSSL_LIB_CTX_new_from_dispatch(const struct ossl_core_handle_st*  handle  , const struct ossl_dispatch_st*  in  );
struct ossl_lib_ctx_st*  OSSL_LIB_CTX_new_child(const struct ossl_core_handle_st*  handle  , const struct ossl_dispatch_st*  in  );
int OSSL_LIB_CTX_load_config(struct ossl_lib_ctx_st*  ctx  , const char* config_file);
void OSSL_LIB_CTX_free(struct ossl_lib_ctx_st*    );
struct ossl_lib_ctx_st*  OSSL_LIB_CTX_get0_global_default();
struct ossl_lib_ctx_st*  OSSL_LIB_CTX_set0_default(struct ossl_lib_ctx_st*  libctx  );
int OSSL_LIB_CTX_get_conf_diagnostics(struct ossl_lib_ctx_st*  ctx  );
void OSSL_LIB_CTX_set_conf_diagnostics(struct ossl_lib_ctx_st*  ctx  , int value);
void OSSL_sleep(unsigned long  int  millis  );
void* OSSL_LIB_CTX_get_data(struct ossl_lib_ctx_st*  ctx  , int index);
struct comp_ctx_st*  COMP_CTX_new(struct comp_method_st*  meth  );
const struct comp_method_st*  COMP_CTX_get_method(const struct comp_ctx_st*  ctx  );
int COMP_CTX_get_type(const struct comp_ctx_st*  comp  );
int COMP_get_type(const struct comp_method_st*  meth  );
const char* COMP_get_name(const struct comp_method_st*  meth  );
void COMP_CTX_free(struct comp_ctx_st*  ctx  );
int COMP_compress_block(struct comp_ctx_st*  ctx  , unsigned char* out, int olen, unsigned char* in, int ilen);
int COMP_expand_block(struct comp_ctx_st*  ctx  , unsigned char* out, int olen, unsigned char* in, int ilen);
struct comp_method_st*  COMP_zlib();
struct comp_method_st*  COMP_zlib_oneshot();
struct comp_method_st*  COMP_brotli();
struct comp_method_st*  COMP_brotli_oneshot();
struct comp_method_st*  COMP_zstd();
struct comp_method_st*  COMP_zstd_oneshot();
int BIO_get_new_index();
void BIO_set_flags(struct bio_st*  b  , int flags);
int BIO_test_flags(const struct bio_st*  b  , int flags);
void BIO_clear_flags(struct bio_st*  b  , int flags);
long (*BIO_get_callback(const struct bio_st*  b  ))(struct bio_st* ,int,const char*,int,long,long) ;
void BIO_set_callback(struct bio_st*  b  , long (*callback)(struct bio_st* ,int,const char*,int,long,long)  );
long BIO_debug_callback(struct bio_st*  bio  , int cmd, const char* argp, int argi, long argl, long ret);
long (*BIO_get_callback_ex(const struct bio_st*  b  ))(struct bio_st* ,int,const char*,unsigned long ,int,long,int,unsigned long* ) ;
void BIO_set_callback_ex(struct bio_st*  b  , long (*callback)(struct bio_st* ,int,const char*,unsigned long ,int,long,int,unsigned long* )  );
long BIO_debug_callback_ex(struct bio_st*  bio  , int oper, const char* argp, unsigned long  len  , int argi, long argl, int ret, unsigned long*  processed  );
char* BIO_get_callback_arg(const struct bio_st*  b  );
void BIO_set_callback_arg(struct bio_st*  b  , char* arg);
const char* BIO_method_name(const struct bio_st*  b  );
int BIO_method_type(const struct bio_st*  b  );
unsigned long  BIO_ctrl_pending(struct bio_st*  b  );
unsigned long  BIO_ctrl_wpending(struct bio_st*  b  );
unsigned long  BIO_ctrl_get_write_guarantee(struct bio_st*  b  );
unsigned long  BIO_ctrl_get_read_request(struct bio_st*  b  );
int BIO_ctrl_reset_read_request(struct bio_st*  b  );
int BIO_set_ex_data(struct bio_st*  bio  , int idx, void* data);
void* BIO_get_ex_data(const struct bio_st*  bio  , int idx);
unsigned long  int  BIO_number_read(struct bio_st*  bio  );
unsigned long  int  BIO_number_written(struct bio_st*  bio  );
int BIO_asn1_set_prefix(struct bio_st*  b  , int (*(*prefix))(struct bio_st* ,unsigned char**,int*,void*)  , int (*(*prefix_free))(struct bio_st* ,unsigned char**,int*,void*)  );
int BIO_asn1_get_prefix(struct bio_st*  b  , int (*(*(*pprefix)))(struct bio_st* ,unsigned char**,int*,void*)  , int (*(*(*pprefix_free)))(struct bio_st* ,unsigned char**,int*,void*)  );
int BIO_asn1_set_suffix(struct bio_st*  b  , int (*(*suffix))(struct bio_st* ,unsigned char**,int*,void*)  , int (*(*suffix_free))(struct bio_st* ,unsigned char**,int*,void*)  );
int BIO_asn1_get_suffix(struct bio_st*  b  , int (*(*(*psuffix)))(struct bio_st* ,unsigned char**,int*,void*)  , int (*(*(*psuffix_free)))(struct bio_st* ,unsigned char**,int*,void*)  );
const struct bio_method_st*  BIO_s_file();
struct bio_st*  BIO_new_file(const char* filename, const char* mode);
struct bio_st*  BIO_new_from_core_bio(struct ossl_lib_ctx_st*  libctx  , struct ossl_core_bio_st*  corebio  );
struct bio_st*  BIO_new_fp(struct _IO_FILE*  stream  , int close_flag);
struct bio_st*  BIO_new_ex(struct ossl_lib_ctx_st*  libctx  , const struct bio_method_st*  method  );
struct bio_st*  BIO_new(const struct bio_method_st*  type  );
int BIO_free(struct bio_st*  a  );
void BIO_set_data(struct bio_st*  a  , void* ptr);
void* BIO_get_data(struct bio_st*  a  );
void BIO_set_init(struct bio_st*  a  , int init);
int BIO_get_init(struct bio_st*  a  );
void BIO_set_shutdown(struct bio_st*  a  , int shut);
int BIO_get_shutdown(struct bio_st*  a  );
void BIO_vfree(struct bio_st*  a  );
int BIO_up_ref(struct bio_st*  a  );
int BIO_read(struct bio_st*  b  , void* data, int dlen);
int BIO_read_ex(struct bio_st*  b  , void* data, unsigned long  dlen  , unsigned long*  readbytes  );
int BIO_recvmmsg(struct bio_st*  b  , struct bio_msg_st*  msg  , unsigned long  stride  , unsigned long  num_msg  , unsigned long  int  flags  , unsigned long*  msgs_processed  );
int BIO_gets(struct bio_st*  bp  , char* buf, int size);
int BIO_get_line(struct bio_st*  bio  , char* buf, int size);
int BIO_write(struct bio_st*  b  , const void* data, int dlen);
int BIO_write_ex(struct bio_st*  b  , const void* data, unsigned long  dlen  , unsigned long*  written  );
int BIO_sendmmsg(struct bio_st*  b  , struct bio_msg_st*  msg  , unsigned long  stride  , unsigned long  num_msg  , unsigned long  int  flags  , unsigned long*  msgs_processed  );
int BIO_get_rpoll_descriptor(struct bio_st*  b  , struct bio_poll_descriptor_st*  desc  );
int BIO_get_wpoll_descriptor(struct bio_st*  b  , struct bio_poll_descriptor_st*  desc  );
int BIO_puts(struct bio_st*  bp  , const char* buf);
int BIO_indent(struct bio_st*  b  , int indent, int max);
long BIO_ctrl(struct bio_st*  bp  , int cmd, long larg, void* parg);
long BIO_callback_ctrl(struct bio_st*  b  , int cmd, int (*(*fp))(struct bio_st* ,int,int)  );
void* BIO_ptr_ctrl(struct bio_st*  bp  , int cmd, long larg);
long BIO_int_ctrl(struct bio_st*  bp  , int cmd, long larg, int iarg);
struct bio_st*  BIO_push(struct bio_st*  b  , struct bio_st*  append  );
struct bio_st*  BIO_pop(struct bio_st*  b  );
void BIO_free_all(struct bio_st*  a  );
struct bio_st*  BIO_find_type(struct bio_st*  b  , int bio_type);
struct bio_st*  BIO_next(struct bio_st*  b  );
void BIO_set_next(struct bio_st*  b  , struct bio_st*  next  );
struct bio_st*  BIO_get_retry_BIO(struct bio_st*  bio  , int* reason);
int BIO_get_retry_reason(struct bio_st*  bio  );
void BIO_set_retry_reason(struct bio_st*  bio  , int reason);
struct bio_st*  BIO_dup_chain(struct bio_st*  in  );
int BIO_nread0(struct bio_st*  bio  , char** buf);
int BIO_nread(struct bio_st*  bio  , char** buf, int num);
int BIO_nwrite0(struct bio_st*  bio  , char** buf);
int BIO_nwrite(struct bio_st*  bio  , char** buf, int num);
const struct bio_method_st*  BIO_s_mem();
const struct bio_method_st*  BIO_s_dgram_mem();
const struct bio_method_st*  BIO_s_secmem();
struct bio_st*  BIO_new_mem_buf(const void* buf, int len);
const struct bio_method_st*  BIO_s_socket();
const struct bio_method_st*  BIO_s_connect();
const struct bio_method_st*  BIO_s_accept();
const struct bio_method_st*  BIO_s_fd();
const struct bio_method_st*  BIO_s_log();
const struct bio_method_st*  BIO_s_bio();
const struct bio_method_st*  BIO_s_null();
const struct bio_method_st*  BIO_f_null();
const struct bio_method_st*  BIO_f_buffer();
const struct bio_method_st*  BIO_f_readbuffer();
const struct bio_method_st*  BIO_f_linebuffer();
const struct bio_method_st*  BIO_f_nbio_test();
const struct bio_method_st*  BIO_f_prefix();
const struct bio_method_st*  BIO_s_core();
const struct bio_method_st*  BIO_s_dgram_pair();
const struct bio_method_st*  BIO_s_datagram();
int BIO_dgram_non_fatal_error(int error);
struct bio_st*  BIO_new_dgram(int fd, int close_flag);
const struct bio_method_st*  BIO_s_datagram_sctp();
struct bio_st*  BIO_new_dgram_sctp(int fd, int close_flag);
int BIO_dgram_is_sctp(struct bio_st*  bio  );
int BIO_dgram_sctp_notification_cb(struct bio_st*  b  , void (*handle_notifications)(struct bio_st* ,void*,void*)  , void* context);
int BIO_dgram_sctp_wait_for_dry(struct bio_st*  b  );
int BIO_dgram_sctp_msg_waiting(struct bio_st*  b  );
int BIO_sock_should_retry(int i);
int BIO_sock_non_fatal_error(int error);
int BIO_err_is_non_fatal(unsigned int errcode);
int BIO_socket_wait(int fd, int for_read, long  int  max_time  );
int BIO_wait(struct bio_st*  bio  , long  int  max_time  , unsigned int nap_milliseconds);
int BIO_do_connect_retry(struct bio_st*  bio  , int timeout, int nap_milliseconds);
int BIO_fd_should_retry(int i);
int BIO_fd_non_fatal_error(int error);
int BIO_dump_cb(int (*cb)(const void*,unsigned long ,void*), void* u, const void* s, int len);
int BIO_dump_indent_cb(int (*cb)(const void*,unsigned long ,void*), void* u, const void* s, int len, int indent);
int BIO_dump(struct bio_st*  b  , const void* bytes, int len);
int BIO_dump_indent(struct bio_st*  b  , const void* bytes, int len, int indent);
int BIO_dump_fp(struct _IO_FILE*  fp  , const void* s, int len);
int BIO_dump_indent_fp(struct _IO_FILE*  fp  , const void* s, int len, int indent);
int BIO_hex_string(struct bio_st*  out  , int indent, int width, const void* data, int datalen);
union bio_addr_st*  BIO_ADDR_new();
int BIO_ADDR_copy(union bio_addr_st*  dst  , const union bio_addr_st*  src  );
union bio_addr_st*  BIO_ADDR_dup(const union bio_addr_st*  ap  );
int BIO_ADDR_rawmake(union bio_addr_st*  ap  , int family, const void* where, unsigned long  wherelen  , unsigned short int port);
void BIO_ADDR_free(union bio_addr_st*    );
void BIO_ADDR_clear(union bio_addr_st*  ap  );
int BIO_ADDR_family(const union bio_addr_st*  ap  );
int BIO_ADDR_rawaddress(const union bio_addr_st*  ap  , void* p, unsigned long*  l  );
unsigned short int BIO_ADDR_rawport(const union bio_addr_st*  ap  );
char* BIO_ADDR_hostname_string(const union bio_addr_st*  ap  , int numeric);
char* BIO_ADDR_service_string(const union bio_addr_st*  ap  , int numeric);
char* BIO_ADDR_path_string(const union bio_addr_st*  ap  );
const struct bio_addrinfo_st*  BIO_ADDRINFO_next(const struct bio_addrinfo_st*  bai  );
int BIO_ADDRINFO_family(const struct bio_addrinfo_st*  bai  );
int BIO_ADDRINFO_socktype(const struct bio_addrinfo_st*  bai  );
int BIO_ADDRINFO_protocol(const struct bio_addrinfo_st*  bai  );
const union bio_addr_st*  BIO_ADDRINFO_address(const struct bio_addrinfo_st*  bai  );
void BIO_ADDRINFO_free(struct bio_addrinfo_st*  bai  );
int BIO_parse_hostserv(const char* hostserv, char** host, char** service, enum BIO_hostserv_priorities hostserv_prio);
int BIO_lookup(const char* host, const char* service, enum BIO_lookup_type lookup_type, int family, int socktype, struct bio_addrinfo_st**  res  );
int BIO_lookup_ex(const char* host, const char* service, int lookup_type, int family, int socktype, int protocol, struct bio_addrinfo_st**  res  );
int BIO_sock_error(int sock);
int BIO_socket_ioctl(int fd, long type, void* arg);
int BIO_socket_nbio(int fd, int mode);
int BIO_sock_init();
int BIO_set_tcp_ndelay(int sock, int turn_on);
struct hostent* BIO_gethostbyname(const char* name);
int BIO_get_port(const char* str, unsigned short int* port_ptr);
int BIO_get_host_ip(const char* str, unsigned char* ip);
int BIO_get_accept_socket(char* host_port, int mode);
int BIO_accept(int sock, char** ip_port);
int BIO_sock_info(int sock, enum BIO_sock_info_type type, union BIO_sock_info_u*  info  );
int BIO_socket(int domain, int socktype, int protocol, int options);
int BIO_connect(int sock, const union bio_addr_st*  addr  , int options);
int BIO_bind(int sock, const union bio_addr_st*  addr  , int options);
int BIO_listen(int sock, const union bio_addr_st*  addr  , int options);
int BIO_accept_ex(int accept_sock, union bio_addr_st*  addr  , int options);
int BIO_closesocket(int sock);
struct bio_st*  BIO_new_socket(int sock, int close_flag);
struct bio_st*  BIO_new_connect(const char* host_port);
struct bio_st*  BIO_new_accept(const char* host_port);
struct bio_st*  BIO_new_fd(int fd, int close_flag);
int BIO_new_bio_pair(struct bio_st**  bio1  , unsigned long  writebuf1  , struct bio_st**  bio2  , unsigned long  writebuf2  );
int BIO_new_bio_dgram_pair(struct bio_st**  bio1  , unsigned long  writebuf1  , struct bio_st**  bio2  , unsigned long  writebuf2  );
void BIO_copy_next_retry(struct bio_st*  b  );
int BIO_printf(struct bio_st*  bio  , const char* format, ...) __attribute__((__format__(__printf__, 2, 3)));
int BIO_vprintf(struct bio_st*  bio  , const char* format, __builtin_va_list  args  ) __attribute__((__format__(__printf__, 2, 0)));
int BIO_snprintf(char* buf, unsigned long  n  , const char* format, ...) __attribute__((__format__(__printf__, 3, 4)));
int BIO_vsnprintf(char* buf, unsigned long  n  , const char* format, __builtin_va_list  args  ) __attribute__((__format__(__printf__, 3, 0)));
struct bio_method_st*  BIO_meth_new(int type, const char* name);
void BIO_meth_free(struct bio_method_st*  biom  );
int BIO_meth_set_write(struct bio_method_st*  biom  , int (*write)(struct bio_st* ,const char*,int));
int BIO_meth_set_write_ex(struct bio_method_st*  biom  , int (*bwrite)(struct bio_st* ,const char*,unsigned long ,unsigned long* ));
int BIO_meth_set_sendmmsg(struct bio_method_st*  biom  , int (*f)(struct bio_st* ,struct bio_msg_st* ,unsigned long ,unsigned long ,unsigned long  int ,unsigned long* ));
int BIO_meth_set_read(struct bio_method_st*  biom  , int (*read)(struct bio_st* ,char*,int));
int BIO_meth_set_read_ex(struct bio_method_st*  biom  , int (*bread)(struct bio_st* ,char*,unsigned long ,unsigned long* ));
int BIO_meth_set_recvmmsg(struct bio_method_st*  biom  , int (*f)(struct bio_st* ,struct bio_msg_st* ,unsigned long ,unsigned long ,unsigned long  int ,unsigned long* ));
int BIO_meth_set_puts(struct bio_method_st*  biom  , int (*puts)(struct bio_st* ,const char*));
int BIO_meth_set_gets(struct bio_method_st*  biom  , int (*ossl_gets)(struct bio_st* ,char*,int));
int BIO_meth_set_ctrl(struct bio_method_st*  biom  , long (*ctrl)(struct bio_st* ,int,long,void*));
int BIO_meth_set_create(struct bio_method_st*  biom  , int (*create)(struct bio_st* ));
int BIO_meth_set_destroy(struct bio_method_st*  biom  , int (*destroy)(struct bio_st* ));
int BIO_meth_set_callback_ctrl(struct bio_method_st*  biom  , long (*callback_ctrl)(struct bio_st* ,int,int (*(*))(struct bio_st* ,int,int) ));
int (*BIO_meth_get_write(const struct bio_method_st*  _function_pointer_result_var_name_a1  ))(struct bio_st* ,const char*,int);
int (*BIO_meth_get_write_ex(const struct bio_method_st*  _function_pointer_result_var_name_a2  ))(struct bio_st* ,const char*,unsigned long ,unsigned long* );
int (*BIO_meth_get_sendmmsg(const struct bio_method_st*  _function_pointer_result_var_name_a3  ))(struct bio_st* ,struct bio_msg_st* ,unsigned long ,unsigned long ,unsigned long  int ,unsigned long* );
int (*BIO_meth_get_read(const struct bio_method_st*  _function_pointer_result_var_name_a4  ))(struct bio_st* ,char*,int);
int (*BIO_meth_get_read_ex(const struct bio_method_st*  _function_pointer_result_var_name_a5  ))(struct bio_st* ,char*,unsigned long ,unsigned long* );
int (*BIO_meth_get_recvmmsg(const struct bio_method_st*  _function_pointer_result_var_name_a6  ))(struct bio_st* ,struct bio_msg_st* ,unsigned long ,unsigned long ,unsigned long  int ,unsigned long* );
int (*BIO_meth_get_puts(const struct bio_method_st*  _function_pointer_result_var_name_a7  ))(struct bio_st* ,const char*);
int (*BIO_meth_get_gets(const struct bio_method_st*  _function_pointer_result_var_name_a8  ))(struct bio_st* ,char*,int);
long (*BIO_meth_get_ctrl(const struct bio_method_st*  _function_pointer_result_var_name_a9  ))(struct bio_st* ,int,long,void*);
int (*BIO_meth_get_create(const struct bio_method_st*  _function_pointer_result_var_name_a10  ))(struct bio_st* );
int (*BIO_meth_get_destroy(const struct bio_method_st*  _function_pointer_result_var_name_a11  ))(struct bio_st* );
long (*BIO_meth_get_callback_ctrl(const struct bio_method_st*  _function_pointer_result_var_name_a12  ))(struct bio_st* ,int,int (*(*))(struct bio_st* ,int,int) );
struct buf_mem_st*  BUF_MEM_new();
struct buf_mem_st*  BUF_MEM_new_ex(unsigned long  int flags);
void BUF_MEM_free(struct buf_mem_st*  a  );
unsigned long  BUF_MEM_grow(struct buf_mem_st*  str  , unsigned long  len  );
unsigned long  BUF_MEM_grow_clean(struct buf_mem_st*  str  , unsigned long  len  );
void BUF_reverse(unsigned char* out, const unsigned char* in, unsigned long  siz  );
void BN_set_flags(struct bignum_st*  b  , int n);
int BN_get_flags(const struct bignum_st*  b  , int n);
void BN_with_flags(struct bignum_st*  dest  , const struct bignum_st*  b  , int flags);
int BN_GENCB_call(struct bn_gencb_st*  cb  , int a, int b);
struct bn_gencb_st*  BN_GENCB_new();
void BN_GENCB_free(struct bn_gencb_st*  cb  );
void BN_GENCB_set_old(struct bn_gencb_st*  gencb  , void (*callback)(int,int,void*), void* cb_arg);
void BN_GENCB_set(struct bn_gencb_st*  gencb  , int (*callback)(int,int,struct bn_gencb_st* ), void* cb_arg);
void* BN_GENCB_get_arg(struct bn_gencb_st*  cb  );
int BN_abs_is_word(const struct bignum_st*  a  , const unsigned long  int w);
int BN_is_zero(const struct bignum_st*  a  );
int BN_is_one(const struct bignum_st*  a  );
int BN_is_word(const struct bignum_st*  a  , const unsigned long  int w);
int BN_is_odd(const struct bignum_st*  a  );
void BN_zero_ex(struct bignum_st*  a  );
const struct bignum_st*  BN_value_one();
char* BN_options();
struct bignum_ctx*  BN_CTX_new_ex(struct ossl_lib_ctx_st*  ctx  );
struct bignum_ctx*  BN_CTX_new();
struct bignum_ctx*  BN_CTX_secure_new_ex(struct ossl_lib_ctx_st*  ctx  );
struct bignum_ctx*  BN_CTX_secure_new();
void BN_CTX_free(struct bignum_ctx*  c  );
void BN_CTX_start(struct bignum_ctx*  ctx  );
struct bignum_st*  BN_CTX_get(struct bignum_ctx*  ctx  );
void BN_CTX_end(struct bignum_ctx*  ctx  );
int BN_rand_ex(struct bignum_st*  rnd  , int bits, int top, int bottom, unsigned int strength, struct bignum_ctx*  ctx  );
int BN_rand(struct bignum_st*  rnd  , int bits, int top, int bottom);
int BN_priv_rand_ex(struct bignum_st*  rnd  , int bits, int top, int bottom, unsigned int strength, struct bignum_ctx*  ctx  );
int BN_priv_rand(struct bignum_st*  rnd  , int bits, int top, int bottom);
int BN_rand_range_ex(struct bignum_st*  r  , const struct bignum_st*  range  , unsigned int strength, struct bignum_ctx*  ctx  );
int BN_rand_range(struct bignum_st*  rnd  , const struct bignum_st*  range  );
int BN_priv_rand_range_ex(struct bignum_st*  r  , const struct bignum_st*  range  , unsigned int strength, struct bignum_ctx*  ctx  );
int BN_priv_rand_range(struct bignum_st*  rnd  , const struct bignum_st*  range  );
int BN_pseudo_rand(struct bignum_st*  rnd  , int bits, int top, int bottom);
int BN_pseudo_rand_range(struct bignum_st*  rnd  , const struct bignum_st*  range  );
int BN_num_bits(const struct bignum_st*  a  );
int BN_num_bits_word(unsigned long  int l);
int BN_security_bits(int L, int N);
struct bignum_st*  BN_new();
struct bignum_st*  BN_secure_new();
void BN_clear_free(struct bignum_st*  a  );
struct bignum_st*  BN_copy(struct bignum_st*  a  , const struct bignum_st*  b  );
void BN_swap(struct bignum_st*  a  , struct bignum_st*  b  );
struct bignum_st*  BN_bin2bn(const unsigned char* s, int len, struct bignum_st*  ret  );
struct bignum_st*  BN_signed_bin2bn(const unsigned char* s, int len, struct bignum_st*  ret  );
int BN_bn2bin(const struct bignum_st*  a  , unsigned char* to);
int BN_bn2binpad(const struct bignum_st*  a  , unsigned char* to, int tolen);
int BN_signed_bn2bin(const struct bignum_st*  a  , unsigned char* to, int tolen);
struct bignum_st*  BN_lebin2bn(const unsigned char* s, int len, struct bignum_st*  ret  );
struct bignum_st*  BN_signed_lebin2bn(const unsigned char* s, int len, struct bignum_st*  ret  );
int BN_bn2lebinpad(const struct bignum_st*  a  , unsigned char* to, int tolen);
int BN_signed_bn2lebin(const struct bignum_st*  a  , unsigned char* to, int tolen);
struct bignum_st*  BN_native2bn(const unsigned char* s, int len, struct bignum_st*  ret  );
struct bignum_st*  BN_signed_native2bn(const unsigned char* s, int len, struct bignum_st*  ret  );
int BN_bn2nativepad(const struct bignum_st*  a  , unsigned char* to, int tolen);
int BN_signed_bn2native(const struct bignum_st*  a  , unsigned char* to, int tolen);
struct bignum_st*  BN_mpi2bn(const unsigned char* s, int len, struct bignum_st*  ret  );
int BN_bn2mpi(const struct bignum_st*  a  , unsigned char* to);
int BN_sub(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  );
int BN_usub(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  );
int BN_uadd(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  );
int BN_add(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  );
int BN_mul(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int BN_sqr(struct bignum_st*  r  , const struct bignum_st*  a  , struct bignum_ctx*  ctx  );
void BN_set_negative(struct bignum_st*  b  , int n);
int BN_is_negative(const struct bignum_st*  b  );
int BN_div(struct bignum_st*  dv  , struct bignum_st*  rem  , const struct bignum_st*  m  , const struct bignum_st*  d  , struct bignum_ctx*  ctx  );
int BN_nnmod(struct bignum_st*  r  , const struct bignum_st*  m  , const struct bignum_st*  d  , struct bignum_ctx*  ctx  );
int BN_mod_add(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  );
int BN_mod_add_quick(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const struct bignum_st*  m  );
int BN_mod_sub(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  );
int BN_mod_sub_quick(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const struct bignum_st*  m  );
int BN_mod_mul(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  );
int BN_mod_sqr(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  );
int BN_mod_lshift1(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  );
int BN_mod_lshift1_quick(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  m  );
int BN_mod_lshift(struct bignum_st*  r  , const struct bignum_st*  a  , int n, const struct bignum_st*  m  , struct bignum_ctx*  ctx  );
int BN_mod_lshift_quick(struct bignum_st*  r  , const struct bignum_st*  a  , int n, const struct bignum_st*  m  );
unsigned long  int BN_mod_word(const struct bignum_st*  a  , unsigned long  int w);
unsigned long  int BN_div_word(struct bignum_st*  a  , unsigned long  int w);
int BN_mul_word(struct bignum_st*  a  , unsigned long  int w);
int BN_add_word(struct bignum_st*  a  , unsigned long  int w);
int BN_sub_word(struct bignum_st*  a  , unsigned long  int w);
int BN_set_word(struct bignum_st*  a  , unsigned long  int w);
unsigned long  int BN_get_word(const struct bignum_st*  a  );
int BN_cmp(const struct bignum_st*  a  , const struct bignum_st*  b  );
void BN_free(struct bignum_st*  a  );
int BN_is_bit_set(const struct bignum_st*  a  , int n);
int BN_lshift(struct bignum_st*  r  , const struct bignum_st*  a  , int n);
int BN_lshift1(struct bignum_st*  r  , const struct bignum_st*  a  );
int BN_exp(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_mod_exp(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  );
int BN_mod_exp_mont(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  , struct bn_mont_ctx_st*  m_ctx  );
int BN_mod_exp_mont_consttime(struct bignum_st*  rr  , const struct bignum_st*  a  , const struct bignum_st*  p  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  , struct bn_mont_ctx_st*  in_mont  );
int BN_mod_exp_mont_word(struct bignum_st*  r  , unsigned long  int a, const struct bignum_st*  p  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  , struct bn_mont_ctx_st*  m_ctx  );
int BN_mod_exp2_mont(struct bignum_st*  r  , const struct bignum_st*  a1  , const struct bignum_st*  p1  , const struct bignum_st*  a2  , const struct bignum_st*  p2  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  , struct bn_mont_ctx_st*  m_ctx  );
int BN_mod_exp_simple(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  );
int BN_mod_exp_mont_consttime_x2(struct bignum_st*  rr1  , const struct bignum_st*  a1  , const struct bignum_st*  p1  , const struct bignum_st*  m1  , struct bn_mont_ctx_st*  in_mont1  , struct bignum_st*  rr2  , const struct bignum_st*  a2  , const struct bignum_st*  p2  , const struct bignum_st*  m2  , struct bn_mont_ctx_st*  in_mont2  , struct bignum_ctx*  ctx  );
int BN_mask_bits(struct bignum_st*  a  , int n);
int BN_print_fp(struct _IO_FILE*  fp  , const struct bignum_st*  a  );
int BN_print(struct bio_st*  bio  , const struct bignum_st*  a  );
int BN_reciprocal(struct bignum_st*  r  , const struct bignum_st*  m  , int len, struct bignum_ctx*  ctx  );
int BN_rshift(struct bignum_st*  r  , const struct bignum_st*  a  , int n);
int BN_rshift1(struct bignum_st*  r  , const struct bignum_st*  a  );
void BN_clear(struct bignum_st*  a  );
struct bignum_st*  BN_dup(const struct bignum_st*  a  );
int BN_ucmp(const struct bignum_st*  a  , const struct bignum_st*  b  );
int BN_set_bit(struct bignum_st*  a  , int n);
int BN_clear_bit(struct bignum_st*  a  , int n);
char* BN_bn2hex(const struct bignum_st*  a  );
char* BN_bn2dec(const struct bignum_st*  a  );
int BN_hex2bn(struct bignum_st**  a  , const char* str);
int BN_dec2bn(struct bignum_st**  a  , const char* str);
int BN_asc2bn(struct bignum_st**  a  , const char* str);
int BN_gcd(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int BN_kronecker(const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int BN_are_coprime(struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
struct bignum_st*  BN_mod_inverse(struct bignum_st*  ret  , const struct bignum_st*  a  , const struct bignum_st*  n  , struct bignum_ctx*  ctx  );
struct bignum_st*  BN_mod_sqrt(struct bignum_st*  ret  , const struct bignum_st*  a  , const struct bignum_st*  n  , struct bignum_ctx*  ctx  );
void BN_consttime_swap(unsigned long  int swap, struct bignum_st*  a  , struct bignum_st*  b  , int nwords);
struct bignum_st*  BN_generate_prime(struct bignum_st*  ret  , int bits, int safe, const struct bignum_st*  add  , const struct bignum_st*  rem  , void (*callback)(int,int,void*), void* cb_arg);
int BN_is_prime(const struct bignum_st*  p  , int nchecks, void (*callback)(int,int,void*), struct bignum_ctx*  ctx  , void* cb_arg);
int BN_is_prime_fasttest(const struct bignum_st*  p  , int nchecks, void (*callback)(int,int,void*), struct bignum_ctx*  ctx  , void* cb_arg, int do_trial_division);
int BN_is_prime_ex(const struct bignum_st*  p  , int nchecks, struct bignum_ctx*  ctx  , struct bn_gencb_st*  cb  );
int BN_is_prime_fasttest_ex(const struct bignum_st*  p  , int nchecks, struct bignum_ctx*  ctx  , int do_trial_division, struct bn_gencb_st*  cb  );
int BN_generate_prime_ex2(struct bignum_st*  ret  , int bits, int safe, const struct bignum_st*  add  , const struct bignum_st*  rem  , struct bn_gencb_st*  cb  , struct bignum_ctx*  ctx  );
int BN_generate_prime_ex(struct bignum_st*  ret  , int bits, int safe, const struct bignum_st*  add  , const struct bignum_st*  rem  , struct bn_gencb_st*  cb  );
int BN_check_prime(const struct bignum_st*  p  , struct bignum_ctx*  ctx  , struct bn_gencb_st*  cb  );
int BN_X931_generate_Xpq(struct bignum_st*  Xp  , struct bignum_st*  Xq  , int nbits, struct bignum_ctx*  ctx  );
int BN_X931_derive_prime_ex(struct bignum_st*  p  , struct bignum_st*  p1  , struct bignum_st*  p2  , const struct bignum_st*  Xp  , const struct bignum_st*  Xp1  , const struct bignum_st*  Xp2  , const struct bignum_st*  e  , struct bignum_ctx*  ctx  , struct bn_gencb_st*  cb  );
int BN_X931_generate_prime_ex(struct bignum_st*  p  , struct bignum_st*  p1  , struct bignum_st*  p2  , struct bignum_st*  Xp1  , struct bignum_st*  Xp2  , const struct bignum_st*  Xp  , const struct bignum_st*  e  , struct bignum_ctx*  ctx  , struct bn_gencb_st*  cb  );
struct bn_mont_ctx_st*  BN_MONT_CTX_new();
int BN_mod_mul_montgomery(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bn_mont_ctx_st*  mont  , struct bignum_ctx*  ctx  );
int BN_to_montgomery(struct bignum_st*  r  , const struct bignum_st*  a  , struct bn_mont_ctx_st*  mont  , struct bignum_ctx*  ctx  );
int BN_from_montgomery(struct bignum_st*  r  , const struct bignum_st*  a  , struct bn_mont_ctx_st*  mont  , struct bignum_ctx*  ctx  );
void BN_MONT_CTX_free(struct bn_mont_ctx_st*  mont  );
int BN_MONT_CTX_set(struct bn_mont_ctx_st*  mont  , const struct bignum_st*  mod  , struct bignum_ctx*  ctx  );
struct bn_mont_ctx_st*  BN_MONT_CTX_copy(struct bn_mont_ctx_st*  to  , struct bn_mont_ctx_st*  from  );
struct bn_mont_ctx_st*  BN_MONT_CTX_set_locked(struct bn_mont_ctx_st**  pmont  , void*  lock  , const struct bignum_st*  mod  , struct bignum_ctx*  ctx  );
struct bn_blinding_st*  BN_BLINDING_new(const struct bignum_st*  A  , const struct bignum_st*  Ai  , struct bignum_st*  mod  );
void BN_BLINDING_free(struct bn_blinding_st*  b  );
int BN_BLINDING_update(struct bn_blinding_st*  b  , struct bignum_ctx*  ctx  );
int BN_BLINDING_convert(struct bignum_st*  n  , struct bn_blinding_st*  b  , struct bignum_ctx*  ctx  );
int BN_BLINDING_invert(struct bignum_st*  n  , struct bn_blinding_st*  b  , struct bignum_ctx*  ctx  );
int BN_BLINDING_convert_ex(struct bignum_st*  n  , struct bignum_st*  r  , struct bn_blinding_st*  b  , struct bignum_ctx*    );
int BN_BLINDING_invert_ex(struct bignum_st*  n  , const struct bignum_st*  r  , struct bn_blinding_st*  b  , struct bignum_ctx*    );
int BN_BLINDING_is_current_thread(struct bn_blinding_st*  b  );
void BN_BLINDING_set_current_thread(struct bn_blinding_st*  b  );
int BN_BLINDING_lock(struct bn_blinding_st*  b  );
int BN_BLINDING_unlock(struct bn_blinding_st*  b  );
unsigned long  int BN_BLINDING_get_flags(const struct bn_blinding_st*    );
void BN_BLINDING_set_flags(struct bn_blinding_st*    , unsigned long  int );
struct bn_blinding_st*  BN_BLINDING_create_param(struct bn_blinding_st*  b  , const struct bignum_st*  e  , struct bignum_st*  m  , struct bignum_ctx*  ctx  , int (*bn_mod_exp)(struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* ), struct bn_mont_ctx_st*  m_ctx  );
void BN_set_params(int mul, int high, int low, int mont);
int BN_get_params(int which);
struct bn_recp_ctx_st*  BN_RECP_CTX_new();
void BN_RECP_CTX_free(struct bn_recp_ctx_st*  recp  );
int BN_RECP_CTX_set(struct bn_recp_ctx_st*  recp  , const struct bignum_st*  rdiv  , struct bignum_ctx*  ctx  );
int BN_mod_mul_reciprocal(struct bignum_st*  r  , const struct bignum_st*  x  , const struct bignum_st*  y  , struct bn_recp_ctx_st*  recp  , struct bignum_ctx*  ctx  );
int BN_mod_exp_recp(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  );
int BN_div_recp(struct bignum_st*  dv  , struct bignum_st*  rem  , const struct bignum_st*  m  , struct bn_recp_ctx_st*  recp  , struct bignum_ctx*  ctx  );
int BN_nist_mod_192(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_nist_mod_224(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_nist_mod_256(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_nist_mod_384(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_nist_mod_521(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
const struct bignum_st*  BN_get0_nist_prime_192();
const struct bignum_st*  BN_get0_nist_prime_224();
const struct bignum_st*  BN_get0_nist_prime_256();
const struct bignum_st*  BN_get0_nist_prime_384();
const struct bignum_st*  BN_get0_nist_prime_521();
int (*BN_nist_mod_func(const struct bignum_st*  _function_pointer_result_var_name_a13  ))(struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* );
int BN_generate_dsa_nonce(struct bignum_st*  out  , const struct bignum_st*  range  , const struct bignum_st*  priv  , const unsigned char* message, unsigned long  message_len  , struct bignum_ctx*  ctx  );
struct bignum_st*  BN_get_rfc2409_prime_768(struct bignum_st*  bn  );
struct bignum_st*  BN_get_rfc2409_prime_1024(struct bignum_st*  bn  );
struct bignum_st*  BN_get_rfc3526_prime_1536(struct bignum_st*  bn  );
struct bignum_st*  BN_get_rfc3526_prime_2048(struct bignum_st*  bn  );
struct bignum_st*  BN_get_rfc3526_prime_3072(struct bignum_st*  bn  );
struct bignum_st*  BN_get_rfc3526_prime_4096(struct bignum_st*  bn  );
struct bignum_st*  BN_get_rfc3526_prime_6144(struct bignum_st*  bn  );
struct bignum_st*  BN_get_rfc3526_prime_8192(struct bignum_st*  bn  );
int BN_bntest_rand(struct bignum_st*  rnd  , int bits, int top, int bottom);
struct ossl_param_st*  OSSL_PARAM_locate(struct ossl_param_st*  p  , const char* key);
const struct ossl_param_st*  OSSL_PARAM_locate_const(const struct ossl_param_st*  p  , const char* key);
struct ossl_param_st  OSSL_PARAM_construct_int(const char* key, int* buf);
struct ossl_param_st  OSSL_PARAM_construct_uint(const char* key, unsigned int* buf);
struct ossl_param_st  OSSL_PARAM_construct_long(const char* key, long  int* buf);
struct ossl_param_st  OSSL_PARAM_construct_ulong(const char* key, unsigned long  int* buf);
struct ossl_param_st  OSSL_PARAM_construct_int32(const char* key, int*  buf  );
struct ossl_param_st  OSSL_PARAM_construct_uint32(const char* key, unsigned int*  buf  );
struct ossl_param_st  OSSL_PARAM_construct_int64(const char* key, long  int*  buf  );
struct ossl_param_st  OSSL_PARAM_construct_uint64(const char* key, unsigned long  int*  buf  );
struct ossl_param_st  OSSL_PARAM_construct_size_t(const char* key, unsigned long*  buf  );
struct ossl_param_st  OSSL_PARAM_construct_time_t(const char* key, long  int*  buf  );
struct ossl_param_st  OSSL_PARAM_construct_BN(const char* key, unsigned char* buf, unsigned long  bsize  );
struct ossl_param_st  OSSL_PARAM_construct_double(const char* key, double* buf);
struct ossl_param_st  OSSL_PARAM_construct_utf8_string(const char* key, char* buf, unsigned long  bsize  );
struct ossl_param_st  OSSL_PARAM_construct_utf8_ptr(const char* key, char** buf, unsigned long  bsize  );
struct ossl_param_st  OSSL_PARAM_construct_octet_string(const char* key, void* buf, unsigned long  bsize  );
struct ossl_param_st  OSSL_PARAM_construct_octet_ptr(const char* key, void** buf, unsigned long  bsize  );
struct ossl_param_st  OSSL_PARAM_construct_end();
int OSSL_PARAM_allocate_from_text(struct ossl_param_st*  to  , const struct ossl_param_st*  paramdefs  , const char* key, const char* value, unsigned long  value_n  , int* found);
int OSSL_PARAM_print_to_bio(const struct ossl_param_st*  params  , struct bio_st*  bio  , int print_values);
int OSSL_PARAM_get_int(const struct ossl_param_st*  p  , int* val);
int OSSL_PARAM_get_uint(const struct ossl_param_st*  p  , unsigned int* val);
int OSSL_PARAM_get_long(const struct ossl_param_st*  p  , long  int* val);
int OSSL_PARAM_get_ulong(const struct ossl_param_st*  p  , unsigned long  int* val);
int OSSL_PARAM_get_int32(const struct ossl_param_st*  p  , int*  val  );
int OSSL_PARAM_get_uint32(const struct ossl_param_st*  p  , unsigned int*  val  );
int OSSL_PARAM_get_int64(const struct ossl_param_st*  p  , long  int*  val  );
int OSSL_PARAM_get_uint64(const struct ossl_param_st*  p  , unsigned long  int*  val  );
int OSSL_PARAM_get_size_t(const struct ossl_param_st*  p  , unsigned long*  val  );
int OSSL_PARAM_get_time_t(const struct ossl_param_st*  p  , long  int*  val  );
int OSSL_PARAM_set_int(struct ossl_param_st*  p  , int val);
int OSSL_PARAM_set_uint(struct ossl_param_st*  p  , unsigned int val);
int OSSL_PARAM_set_long(struct ossl_param_st*  p  , long  int val);
int OSSL_PARAM_set_ulong(struct ossl_param_st*  p  , unsigned long  int val);
int OSSL_PARAM_set_int32(struct ossl_param_st*  p  , int  val  );
int OSSL_PARAM_set_uint32(struct ossl_param_st*  p  , unsigned int  val  );
int OSSL_PARAM_set_int64(struct ossl_param_st*  p  , long  int  val  );
int OSSL_PARAM_set_uint64(struct ossl_param_st*  p  , unsigned long  int  val  );
int OSSL_PARAM_set_size_t(struct ossl_param_st*  p  , unsigned long  val  );
int OSSL_PARAM_set_time_t(struct ossl_param_st*  p  , long  int  val  );
int OSSL_PARAM_get_double(const struct ossl_param_st*  p  , double* val);
int OSSL_PARAM_set_double(struct ossl_param_st*  p  , double val);
int OSSL_PARAM_get_BN(const struct ossl_param_st*  p  , struct bignum_st**  val  );
int OSSL_PARAM_set_BN(struct ossl_param_st*  p  , const struct bignum_st*  val  );
int OSSL_PARAM_get_utf8_string(const struct ossl_param_st*  p  , char** val, unsigned long  max_len  );
int OSSL_PARAM_set_utf8_string(struct ossl_param_st*  p  , const char* val);
int OSSL_PARAM_get_octet_string(const struct ossl_param_st*  p  , void** val, unsigned long  max_len  , unsigned long*  used_len  );
int OSSL_PARAM_set_octet_string(struct ossl_param_st*  p  , const void* val, unsigned long  len  );
int OSSL_PARAM_get_utf8_ptr(const struct ossl_param_st*  p  , const char** val);
int OSSL_PARAM_set_utf8_ptr(struct ossl_param_st*  p  , const char* val);
int OSSL_PARAM_get_octet_ptr(const struct ossl_param_st*  p  , const void** val, unsigned long*  used_len  );
int OSSL_PARAM_set_octet_ptr(struct ossl_param_st*  p  , const void* val, unsigned long  used_len  );
int OSSL_PARAM_get_utf8_string_ptr(const struct ossl_param_st*  p  , const char** val);
int OSSL_PARAM_get_octet_string_ptr(const struct ossl_param_st*  p  , const void** val, unsigned long*  used_len  );
int OSSL_PARAM_modified(const struct ossl_param_st*  p  );
void OSSL_PARAM_set_all_unmodified(struct ossl_param_st*  p  );
struct ossl_param_st*  OSSL_PARAM_dup(const struct ossl_param_st*  p  );
struct ossl_param_st*  OSSL_PARAM_merge(const struct ossl_param_st*  p1  , const struct ossl_param_st*  p2  );
void OSSL_PARAM_free(struct ossl_param_st*  p  );
void OSSL_INDICATOR_set_callback(struct ossl_lib_ctx_st*  libctx  , int (*(*cb))(const char*,const char*,const struct ossl_param_st )  );
void OSSL_INDICATOR_get_callback(struct ossl_lib_ctx_st*  libctx  , int (*(*(*cb)))(const char*,const char*,const struct ossl_param_st )  );
struct stack_st_ASN1_TYPE*  d2i_ASN1_SEQUENCE_ANY(struct stack_st_ASN1_TYPE**  a  , const unsigned char** in, long len);
int i2d_ASN1_SEQUENCE_ANY(const struct stack_st_ASN1_TYPE*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_SEQUENCE_ANY_it();
struct stack_st_ASN1_TYPE*  d2i_ASN1_SET_ANY(struct stack_st_ASN1_TYPE**  a  , const unsigned char** in, long len);
int i2d_ASN1_SET_ANY(const struct stack_st_ASN1_TYPE*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_SET_ANY_it();
struct asn1_type_st*  ASN1_TYPE_new();
void ASN1_TYPE_free(struct asn1_type_st*  a  );
struct asn1_type_st*  d2i_ASN1_TYPE(struct asn1_type_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_TYPE(const struct asn1_type_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_ANY_it();
int ASN1_TYPE_get(const struct asn1_type_st*  a  );
void ASN1_TYPE_set(struct asn1_type_st*  a  , int type, void* value);
int ASN1_TYPE_set1(struct asn1_type_st*  a  , int type, const void* value);
int ASN1_TYPE_cmp(const struct asn1_type_st*  a  , const struct asn1_type_st*  b  );
struct asn1_type_st*  ASN1_TYPE_pack_sequence(const struct ASN1_ITEM_st*  it  , void* s, struct asn1_type_st**  t  );
void* ASN1_TYPE_unpack_sequence(const struct ASN1_ITEM_st*  it  , const struct asn1_type_st*  t  );
struct asn1_object_st*  ASN1_OBJECT_new();
void ASN1_OBJECT_free(struct asn1_object_st*  a  );
struct asn1_object_st*  d2i_ASN1_OBJECT(struct asn1_object_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_OBJECT(const struct asn1_object_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_OBJECT_it();
struct asn1_string_st*  ASN1_STRING_new();
void ASN1_STRING_free(struct asn1_string_st*  a  );
void ASN1_STRING_clear_free(struct asn1_string_st*  a  );
int ASN1_STRING_copy(struct asn1_string_st*  dst  , const struct asn1_string_st*  str  );
struct asn1_string_st*  ASN1_STRING_dup(const struct asn1_string_st*  a  );
struct asn1_string_st*  ASN1_STRING_type_new(int type);
int ASN1_STRING_cmp(const struct asn1_string_st*  a  , const struct asn1_string_st*  b  );
int ASN1_STRING_set(struct asn1_string_st*  str  , const void* data, int len);
void ASN1_STRING_set0(struct asn1_string_st*  str  , void* data, int len);
int ASN1_STRING_length(const struct asn1_string_st*  x  );
void ASN1_STRING_length_set(struct asn1_string_st*  x  , int n);
int ASN1_STRING_type(const struct asn1_string_st*  x  );
unsigned char* ASN1_STRING_data(struct asn1_string_st*  x  );
const unsigned char* ASN1_STRING_get0_data(const struct asn1_string_st*  x  );
struct asn1_string_st*  ASN1_BIT_STRING_new();
void ASN1_BIT_STRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_BIT_STRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_BIT_STRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_BIT_STRING_it();
int ASN1_BIT_STRING_set(struct asn1_string_st*  a  , unsigned char* d, int length);
int ASN1_BIT_STRING_set_bit(struct asn1_string_st*  a  , int n, int value);
int ASN1_BIT_STRING_get_bit(const struct asn1_string_st*  a  , int n);
int ASN1_BIT_STRING_check(const struct asn1_string_st*  a  , const unsigned char* flags, int flags_len);
int ASN1_BIT_STRING_name_print(struct bio_st*  out  , struct asn1_string_st*  bs  , struct BIT_STRING_BITNAME_st*  tbl  , int indent);
int ASN1_BIT_STRING_num_asc(const char* name, struct BIT_STRING_BITNAME_st*  tbl  );
int ASN1_BIT_STRING_set_asc(struct asn1_string_st*  bs  , const char* name, int value, struct BIT_STRING_BITNAME_st*  tbl  );
struct asn1_string_st*  ASN1_INTEGER_new();
void ASN1_INTEGER_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_INTEGER(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_INTEGER(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_INTEGER_it();
struct asn1_string_st*  d2i_ASN1_UINTEGER(struct asn1_string_st**  a  , const unsigned char** pp, long length);
struct asn1_string_st*  ASN1_INTEGER_dup(const struct asn1_string_st*  a  );
int ASN1_INTEGER_cmp(const struct asn1_string_st*  x  , const struct asn1_string_st*  y  );
struct asn1_string_st*  ASN1_ENUMERATED_new();
void ASN1_ENUMERATED_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_ENUMERATED(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_ENUMERATED(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_ENUMERATED_it();
int ASN1_UTCTIME_check(const struct asn1_string_st*  a  );
struct asn1_string_st*  ASN1_UTCTIME_set(struct asn1_string_st*  s  , long  int  t  );
struct asn1_string_st*  ASN1_UTCTIME_adj(struct asn1_string_st*  s  , long  int  t  , int offset_day, long offset_sec);
int ASN1_UTCTIME_set_string(struct asn1_string_st*  s  , const char* str);
int ASN1_UTCTIME_cmp_time_t(const struct asn1_string_st*  s  , long  int  t  );
int ASN1_GENERALIZEDTIME_check(const struct asn1_string_st*  a  );
struct asn1_string_st*  ASN1_GENERALIZEDTIME_set(struct asn1_string_st*  s  , long  int  t  );
struct asn1_string_st*  ASN1_GENERALIZEDTIME_adj(struct asn1_string_st*  s  , long  int  t  , int offset_day, long offset_sec);
int ASN1_GENERALIZEDTIME_set_string(struct asn1_string_st*  s  , const char* str);
int ASN1_TIME_diff(int* pday, int* psec, const struct asn1_string_st*  from  , const struct asn1_string_st*  to  );
struct asn1_string_st*  ASN1_OCTET_STRING_new();
void ASN1_OCTET_STRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_OCTET_STRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_OCTET_STRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_OCTET_STRING_it();
struct asn1_string_st*  ASN1_OCTET_STRING_dup(const struct asn1_string_st*  a  );
int ASN1_OCTET_STRING_cmp(const struct asn1_string_st*  a  , const struct asn1_string_st*  b  );
int ASN1_OCTET_STRING_set(struct asn1_string_st*  str  , const unsigned char* data, int len);
struct asn1_string_st*  ASN1_VISIBLESTRING_new();
void ASN1_VISIBLESTRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_VISIBLESTRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_VISIBLESTRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_VISIBLESTRING_it();
struct asn1_string_st*  ASN1_UNIVERSALSTRING_new();
void ASN1_UNIVERSALSTRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_UNIVERSALSTRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_UNIVERSALSTRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_UNIVERSALSTRING_it();
struct asn1_string_st*  ASN1_UTF8STRING_new();
void ASN1_UTF8STRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_UTF8STRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_UTF8STRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_UTF8STRING_it();
int*  ASN1_NULL_new();
void ASN1_NULL_free(int*  a  );
int*  d2i_ASN1_NULL(int**  a  , const unsigned char** in, long len);
int i2d_ASN1_NULL(const int*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_NULL_it();
struct asn1_string_st*  ASN1_BMPSTRING_new();
void ASN1_BMPSTRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_BMPSTRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_BMPSTRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_BMPSTRING_it();
int UTF8_getc(const unsigned char* str, int len, unsigned long  int* val);
int UTF8_putc(unsigned char* str, int len, unsigned long  int value);
struct asn1_string_st*  ASN1_PRINTABLE_new();
void ASN1_PRINTABLE_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_PRINTABLE(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_PRINTABLE(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_PRINTABLE_it();
struct asn1_string_st*  DIRECTORYSTRING_new();
void DIRECTORYSTRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_DIRECTORYSTRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_DIRECTORYSTRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  DIRECTORYSTRING_it();
struct asn1_string_st*  DISPLAYTEXT_new();
void DISPLAYTEXT_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_DISPLAYTEXT(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_DISPLAYTEXT(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  DISPLAYTEXT_it();
struct asn1_string_st*  ASN1_PRINTABLESTRING_new();
void ASN1_PRINTABLESTRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_PRINTABLESTRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_PRINTABLESTRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_PRINTABLESTRING_it();
struct asn1_string_st*  ASN1_T61STRING_new();
void ASN1_T61STRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_T61STRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_T61STRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_T61STRING_it();
struct asn1_string_st*  ASN1_IA5STRING_new();
void ASN1_IA5STRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_IA5STRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_IA5STRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_IA5STRING_it();
struct asn1_string_st*  ASN1_GENERALSTRING_new();
void ASN1_GENERALSTRING_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_GENERALSTRING(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_GENERALSTRING(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_GENERALSTRING_it();
struct asn1_string_st*  ASN1_UTCTIME_new();
void ASN1_UTCTIME_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_UTCTIME(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_UTCTIME(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_UTCTIME_it();
struct asn1_string_st*  ASN1_GENERALIZEDTIME_new();
void ASN1_GENERALIZEDTIME_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_GENERALIZEDTIME(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_GENERALIZEDTIME(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_GENERALIZEDTIME_it();
struct asn1_string_st*  ASN1_TIME_new();
void ASN1_TIME_free(struct asn1_string_st*  a  );
struct asn1_string_st*  d2i_ASN1_TIME(struct asn1_string_st**  a  , const unsigned char** in, long len);
int i2d_ASN1_TIME(const struct asn1_string_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  ASN1_TIME_it();
struct asn1_string_st*  ASN1_TIME_dup(const struct asn1_string_st*  a  );
struct asn1_string_st*  ASN1_UTCTIME_dup(const struct asn1_string_st*  a  );
struct asn1_string_st*  ASN1_GENERALIZEDTIME_dup(const struct asn1_string_st*  a  );
const struct ASN1_ITEM_st*  ASN1_OCTET_STRING_NDEF_it();
struct asn1_string_st*  ASN1_TIME_set(struct asn1_string_st*  s  , long  int  t  );
struct asn1_string_st*  ASN1_TIME_adj(struct asn1_string_st*  s  , long  int  t  , int offset_day, long offset_sec);
int ASN1_TIME_check(const struct asn1_string_st*  t  );
struct asn1_string_st*  ASN1_TIME_to_generalizedtime(const struct asn1_string_st*  t  , struct asn1_string_st**  out  );
int ASN1_TIME_set_string(struct asn1_string_st*  s  , const char* str);
int ASN1_TIME_set_string_X509(struct asn1_string_st*  s  , const char* str);
int ASN1_TIME_to_tm(const struct asn1_string_st*  s  , struct tm*  tm  );
int ASN1_TIME_normalize(struct asn1_string_st*  s  );
int ASN1_TIME_cmp_time_t(const struct asn1_string_st*  s  , long  int  t  );
int ASN1_TIME_compare(const struct asn1_string_st*  a  , const struct asn1_string_st*  b  );
int i2a_ASN1_INTEGER(struct bio_st*  bp  , const struct asn1_string_st*  a  );
int a2i_ASN1_INTEGER(struct bio_st*  bp  , struct asn1_string_st*  bs  , char* buf, int size);
int i2a_ASN1_ENUMERATED(struct bio_st*  bp  , const struct asn1_string_st*  a  );
int a2i_ASN1_ENUMERATED(struct bio_st*  bp  , struct asn1_string_st*  bs  , char* buf, int size);
int i2a_ASN1_OBJECT(struct bio_st*  bp  , const struct asn1_object_st*  a  );
int a2i_ASN1_STRING(struct bio_st*  bp  , struct asn1_string_st*  bs  , char* buf, int size);
int i2a_ASN1_STRING(struct bio_st*  bp  , const struct asn1_string_st*  a  , int type);
int i2t_ASN1_OBJECT(char* buf, int buf_len, const struct asn1_object_st*  a  );
int a2d_ASN1_OBJECT(unsigned char* out, int olen, const char* buf, int num);
struct asn1_object_st*  ASN1_OBJECT_create(int nid, unsigned char* data, int len, const char* sn, const char* ln);
int ASN1_INTEGER_get_int64(long  int*  pr  , const struct asn1_string_st*  a  );
int ASN1_INTEGER_set_int64(struct asn1_string_st*  a  , long  int  r  );
int ASN1_INTEGER_get_uint64(unsigned long  int*  pr  , const struct asn1_string_st*  a  );
int ASN1_INTEGER_set_uint64(struct asn1_string_st*  a  , unsigned long  int  r  );
int ASN1_INTEGER_set(struct asn1_string_st*  a  , long v);
long ASN1_INTEGER_get(const struct asn1_string_st*  a  );
struct asn1_string_st*  BN_to_ASN1_INTEGER(const struct bignum_st*  bn  , struct asn1_string_st*  ai  );
struct bignum_st*  ASN1_INTEGER_to_BN(const struct asn1_string_st*  ai  , struct bignum_st*  bn  );
int ASN1_ENUMERATED_get_int64(long  int*  pr  , const struct asn1_string_st*  a  );
int ASN1_ENUMERATED_set_int64(struct asn1_string_st*  a  , long  int  r  );
int ASN1_ENUMERATED_set(struct asn1_string_st*  a  , long v);
long ASN1_ENUMERATED_get(const struct asn1_string_st*  a  );
struct asn1_string_st*  BN_to_ASN1_ENUMERATED(const struct bignum_st*  bn  , struct asn1_string_st*  ai  );
struct bignum_st*  ASN1_ENUMERATED_to_BN(const struct asn1_string_st*  ai  , struct bignum_st*  bn  );
int ASN1_PRINTABLE_type(const unsigned char* s, int max);
unsigned long  int ASN1_tag2bit(int tag);
int ASN1_get_object(const unsigned char** pp, long* plength, int* ptag, int* pclass, long omax);
int ASN1_check_infinite_end(unsigned char** p, long len);
int ASN1_const_check_infinite_end(const unsigned char** p, long len);
void ASN1_put_object(unsigned char** pp, int constructed, int length, int tag, int xclass);
int ASN1_put_eoc(unsigned char** pp);
int ASN1_object_size(int constructed, int length, int tag);
void* ASN1_dup(int (*(*i2d))(const void*,unsigned char**)  , void* (*(*d2i))(void**,const unsigned char**,long)  , const void* x);
void* ASN1_item_dup(const struct ASN1_ITEM_st*  it  , const void* x);
int ASN1_item_sign_ex(const struct ASN1_ITEM_st*  it  , struct X509_algor_st*  algor1  , struct X509_algor_st*  algor2  , struct asn1_string_st*  signature  , const void* data, const struct asn1_string_st*  id  , struct evp_pkey_st*  pkey  , const struct evp_md_st*  md  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int ASN1_item_verify_ex(const struct ASN1_ITEM_st*  it  , const struct X509_algor_st*  alg  , const struct asn1_string_st*  signature  , const void* data, const struct asn1_string_st*  id  , struct evp_pkey_st*  pkey  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
void* ASN1_d2i_fp(void* (*xnew)(), void* (*(*d2i))(void**,const unsigned char**,long)  , struct _IO_FILE*  in  , void** x);
void* ASN1_item_d2i_fp_ex(const struct ASN1_ITEM_st*  it  , struct _IO_FILE*  in  , void* x, struct ossl_lib_ctx_st*  libctx  , const char* propq);
void* ASN1_item_d2i_fp(const struct ASN1_ITEM_st*  it  , struct _IO_FILE*  in  , void* x);
int ASN1_i2d_fp(int (*(*i2d))(const void*,unsigned char**)  , struct _IO_FILE*  out  , const void* x);
int ASN1_item_i2d_fp(const struct ASN1_ITEM_st*  it  , struct _IO_FILE*  out  , const void* x);
int ASN1_STRING_print_ex_fp(struct _IO_FILE*  fp  , const struct asn1_string_st*  str  , unsigned long  int flags);
int ASN1_STRING_to_UTF8(unsigned char** out, const struct asn1_string_st*  in  );
void* ASN1_d2i_bio(void* (*xnew)(), void* (*(*d2i))(void**,const unsigned char**,long)  , struct bio_st*  in  , void** x);
void* ASN1_item_d2i_bio_ex(const struct ASN1_ITEM_st*  it  , struct bio_st*  in  , void* pval, struct ossl_lib_ctx_st*  libctx  , const char* propq);
void* ASN1_item_d2i_bio(const struct ASN1_ITEM_st*  it  , struct bio_st*  in  , void* pval);
int ASN1_i2d_bio(int (*(*i2d))(const void*,unsigned char**)  , struct bio_st*  out  , const void* x);
int ASN1_item_i2d_bio(const struct ASN1_ITEM_st*  it  , struct bio_st*  out  , const void* x);
struct bio_st*  ASN1_item_i2d_mem_bio(const struct ASN1_ITEM_st*  it  , const struct ASN1_VALUE_st*  val  );
int ASN1_UTCTIME_print(struct bio_st*  fp  , const struct asn1_string_st*  a  );
int ASN1_GENERALIZEDTIME_print(struct bio_st*  fp  , const struct asn1_string_st*  a  );
int ASN1_TIME_print(struct bio_st*  bp  , const struct asn1_string_st*  tm  );
int ASN1_TIME_print_ex(struct bio_st*  bp  , const struct asn1_string_st*  tm  , unsigned long  int flags);
int ASN1_STRING_print(struct bio_st*  bp  , const struct asn1_string_st*  v  );
int ASN1_STRING_print_ex(struct bio_st*  out  , const struct asn1_string_st*  str  , unsigned long  int flags);
int ASN1_buf_print(struct bio_st*  bp  , const unsigned char* buf, unsigned long  buflen  , int off);
int ASN1_bn_print(struct bio_st*  bp  , const char* number, const struct bignum_st*  num  , unsigned char* buf, int off);
int ASN1_parse(struct bio_st*  bp  , const unsigned char* pp, long len, int indent);
int ASN1_parse_dump(struct bio_st*  bp  , const unsigned char* pp, long len, int indent, int dump);
const char* ASN1_tag2str(int tag);
int ASN1_UNIVERSALSTRING_to_string(struct asn1_string_st*  s  );
int ASN1_TYPE_set_octetstring(struct asn1_type_st*  a  , unsigned char* data, int len);
int ASN1_TYPE_get_octetstring(const struct asn1_type_st*  a  , unsigned char* data, int max_len);
int ASN1_TYPE_set_int_octetstring(struct asn1_type_st*  a  , long num, unsigned char* data, int len);
int ASN1_TYPE_get_int_octetstring(const struct asn1_type_st*  a  , long* num, unsigned char* data, int max_len);
void* ASN1_item_unpack(const struct asn1_string_st*  oct  , const struct ASN1_ITEM_st*  it  );
void* ASN1_item_unpack_ex(const struct asn1_string_st*  oct  , const struct ASN1_ITEM_st*  it  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct asn1_string_st*  ASN1_item_pack(void* obj, const struct ASN1_ITEM_st*  it  , struct asn1_string_st**  oct  );
void ASN1_STRING_set_default_mask(unsigned long  int mask);
int ASN1_STRING_set_default_mask_asc(const char* p);
unsigned long  int ASN1_STRING_get_default_mask();
int ASN1_mbstring_copy(struct asn1_string_st**  out  , const unsigned char* in, int len, int inform, unsigned long  int mask);
int ASN1_mbstring_ncopy(struct asn1_string_st**  out  , const unsigned char* in, int len, int inform, unsigned long  int mask, long minsize, long maxsize);
struct asn1_string_st*  ASN1_STRING_set_by_NID(struct asn1_string_st**  out  , const unsigned char* in, int inlen, int inform, int nid);
struct asn1_string_table_st*  ASN1_STRING_TABLE_get(int nid);
int ASN1_STRING_TABLE_add(int , long , long , unsigned long  int , unsigned long  int );
void ASN1_STRING_TABLE_cleanup();
struct ASN1_VALUE_st*  ASN1_item_new(const struct ASN1_ITEM_st*  it  );
struct ASN1_VALUE_st*  ASN1_item_new_ex(const struct ASN1_ITEM_st*  it  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
void ASN1_item_free(struct ASN1_VALUE_st*  val  , const struct ASN1_ITEM_st*  it  );
struct ASN1_VALUE_st*  ASN1_item_d2i_ex(struct ASN1_VALUE_st**  val  , const unsigned char** in, long len, const struct ASN1_ITEM_st*  it  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct ASN1_VALUE_st*  ASN1_item_d2i(struct ASN1_VALUE_st**  val  , const unsigned char** in, long len, const struct ASN1_ITEM_st*  it  );
int ASN1_item_i2d(const struct ASN1_VALUE_st*  val  , unsigned char** out, const struct ASN1_ITEM_st*  it  );
int ASN1_item_ndef_i2d(const struct ASN1_VALUE_st*  val  , unsigned char** out, const struct ASN1_ITEM_st*  it  );
void ASN1_add_oid_module();
void ASN1_add_stable_module();
struct asn1_type_st*  ASN1_generate_nconf(const char* str, struct conf_st*  nconf  );
struct asn1_type_st*  ASN1_generate_v3(const char* str, struct v3_ext_ctx*  cnf  );
int ASN1_str2mask(const char* str, unsigned long  int* pmask);
int ASN1_item_print(struct bio_st*  out  , const struct ASN1_VALUE_st*  ifld  , int indent, const struct ASN1_ITEM_st*  it  , const struct asn1_pctx_st*  pctx  );
struct asn1_pctx_st*  ASN1_PCTX_new();
void ASN1_PCTX_free(struct asn1_pctx_st*  p  );
unsigned long  int ASN1_PCTX_get_flags(const struct asn1_pctx_st*  p  );
void ASN1_PCTX_set_flags(struct asn1_pctx_st*  p  , unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_nm_flags(const struct asn1_pctx_st*  p  );
void ASN1_PCTX_set_nm_flags(struct asn1_pctx_st*  p  , unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_cert_flags(const struct asn1_pctx_st*  p  );
void ASN1_PCTX_set_cert_flags(struct asn1_pctx_st*  p  , unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_oid_flags(const struct asn1_pctx_st*  p  );
void ASN1_PCTX_set_oid_flags(struct asn1_pctx_st*  p  , unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_str_flags(const struct asn1_pctx_st*  p  );
void ASN1_PCTX_set_str_flags(struct asn1_pctx_st*  p  , unsigned long  int flags);
struct asn1_sctx_st*  ASN1_SCTX_new(int (*scan_cb)(struct asn1_sctx_st* ));
void ASN1_SCTX_free(struct asn1_sctx_st*  p  );
const struct ASN1_ITEM_st*  ASN1_SCTX_get_item(struct asn1_sctx_st*  p  );
const struct ASN1_TEMPLATE_st*  ASN1_SCTX_get_template(struct asn1_sctx_st*  p  );
unsigned long  int ASN1_SCTX_get_flags(struct asn1_sctx_st*  p  );
void ASN1_SCTX_set_app_data(struct asn1_sctx_st*  p  , void* data);
void* ASN1_SCTX_get_app_data(struct asn1_sctx_st*  p  );
const struct bio_method_st*  BIO_f_asn1();
struct bio_st*  BIO_new_NDEF(struct bio_st*  out  , struct ASN1_VALUE_st*  val  , const struct ASN1_ITEM_st*  it  );
int i2d_ASN1_bio_stream(struct bio_st*  out  , struct ASN1_VALUE_st*  val  , struct bio_st*  in  , int flags, const struct ASN1_ITEM_st*  it  );
int PEM_write_bio_ASN1_stream(struct bio_st*  out  , struct ASN1_VALUE_st*  val  , struct bio_st*  in  , int flags, const char* hdr, const struct ASN1_ITEM_st*  it  );
int SMIME_write_ASN1(struct bio_st*  bio  , struct ASN1_VALUE_st*  val  , struct bio_st*  data  , int flags, int ctype_nid, int econt_nid, struct stack_st_X509_ALGOR*  mdalgs  , const struct ASN1_ITEM_st*  it  );
int SMIME_write_ASN1_ex(struct bio_st*  bio  , struct ASN1_VALUE_st*  val  , struct bio_st*  data  , int flags, int ctype_nid, int econt_nid, struct stack_st_X509_ALGOR*  mdalgs  , const struct ASN1_ITEM_st*  it  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct ASN1_VALUE_st*  SMIME_read_ASN1(struct bio_st*  bio  , struct bio_st**  bcont  , const struct ASN1_ITEM_st*  it  );
struct ASN1_VALUE_st*  SMIME_read_ASN1_ex(struct bio_st*  bio  , int flags, struct bio_st**  bcont  , const struct ASN1_ITEM_st*  it  , struct ASN1_VALUE_st**  x  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int SMIME_crlf_copy(struct bio_st*  in  , struct bio_st*  out  , int flags);
int SMIME_text(struct bio_st*  in  , struct bio_st*  out  );
const struct ASN1_ITEM_st*  ASN1_ITEM_lookup(const char* name);
const struct ASN1_ITEM_st*  ASN1_ITEM_get(unsigned long  i  );
int OBJ_NAME_init();
int OBJ_NAME_new_index(unsigned long  int (*hash_func)(const char*), int (*cmp_func)(const char*,const char*), void (*free_func)(const char*,int,const char*));
const char* OBJ_NAME_get(const char* name, int type);
int OBJ_NAME_add(const char* name, int type, const char* data);
int OBJ_NAME_remove(const char* name, int type);
void OBJ_NAME_cleanup(int type);
void OBJ_NAME_do_all(int type, void (*fn)(const struct obj_name_st* ,void*), void* arg);
void OBJ_NAME_do_all_sorted(int type, void (*fn)(const struct obj_name_st* ,void*), void* arg);
struct asn1_object_st*  OBJ_dup(const struct asn1_object_st*  a  );
struct asn1_object_st*  OBJ_nid2obj(int n);
const char* OBJ_nid2ln(int n);
const char* OBJ_nid2sn(int n);
int OBJ_obj2nid(const struct asn1_object_st*  o  );
struct asn1_object_st*  OBJ_txt2obj(const char* s, int no_name);
int OBJ_obj2txt(char* buf, int buf_len, const struct asn1_object_st*  a  , int no_name);
int OBJ_txt2nid(const char* s);
int OBJ_ln2nid(const char* s);
int OBJ_sn2nid(const char* s);
int OBJ_cmp(const struct asn1_object_st*  a  , const struct asn1_object_st*  b  );
const void* OBJ_bsearch_(const void* key, const void* base, int num, int size, int (*cmp)(const void*,const void*));
const void* OBJ_bsearch_ex_(const void* key, const void* base, int num, int size, int (*cmp)(const void*,const void*), int flags);
int OBJ_new_nid(int num);
int OBJ_add_object(const struct asn1_object_st*  obj  );
int OBJ_create(const char* oid, const char* sn, const char* ln);
int OBJ_create_objects(struct bio_st*  in  );
unsigned long  OBJ_length(const struct asn1_object_st*  obj  );
const unsigned char* OBJ_get0_data(const struct asn1_object_st*  obj  );
int OBJ_find_sigid_algs(int signid, int* pdig_nid, int* ppkey_nid);
int OBJ_find_sigid_by_algs(int* psignid, int dig_nid, int pkey_nid);
int OBJ_add_sigid(int signid, int dig_id, int pkey_id);
void OBJ_sigid_free();
int EVP_set_default_properties(struct ossl_lib_ctx_st*  libctx  , const char* propq);
char* EVP_get1_default_properties(struct ossl_lib_ctx_st*  libctx  );
int EVP_default_properties_is_fips_enabled(struct ossl_lib_ctx_st*  libctx  );
int EVP_default_properties_enable_fips(struct ossl_lib_ctx_st*  libctx  , int enable);
struct evp_md_st*  EVP_MD_meth_new(int md_type, int pkey_type);
struct evp_md_st*  EVP_MD_meth_dup(const struct evp_md_st*  md  );
void EVP_MD_meth_free(struct evp_md_st*  md  );
int EVP_MD_meth_set_input_blocksize(struct evp_md_st*  md  , int blocksize);
int EVP_MD_meth_set_result_size(struct evp_md_st*  md  , int resultsize);
int EVP_MD_meth_set_app_datasize(struct evp_md_st*  md  , int datasize);
int EVP_MD_meth_set_flags(struct evp_md_st*  md  , unsigned long  int flags);
int EVP_MD_meth_set_init(struct evp_md_st*  md  , int (*init)(struct evp_md_ctx_st* ));
int EVP_MD_meth_set_update(struct evp_md_st*  md  , int (*update)(struct evp_md_ctx_st* ,const void*,unsigned long ));
int EVP_MD_meth_set_final(struct evp_md_st*  md  , int (*final)(struct evp_md_ctx_st* ,unsigned char*));
int EVP_MD_meth_set_copy(struct evp_md_st*  md  , int (*copy)(struct evp_md_ctx_st* ,const struct evp_md_ctx_st* ));
int EVP_MD_meth_set_cleanup(struct evp_md_st*  md  , int (*cleanup)(struct evp_md_ctx_st* ));
int EVP_MD_meth_set_ctrl(struct evp_md_st*  md  , int (*ctrl)(struct evp_md_ctx_st* ,int,int,void*));
int EVP_MD_meth_get_input_blocksize(const struct evp_md_st*  md  );
int EVP_MD_meth_get_result_size(const struct evp_md_st*  md  );
int EVP_MD_meth_get_app_datasize(const struct evp_md_st*  md  );
unsigned long  int EVP_MD_meth_get_flags(const struct evp_md_st*  md  );
int (*EVP_MD_meth_get_init(const struct evp_md_st*  _function_pointer_result_var_name_a14  ))(struct evp_md_ctx_st* );
int (*EVP_MD_meth_get_update(const struct evp_md_st*  _function_pointer_result_var_name_a15  ))(struct evp_md_ctx_st* ,const void*,unsigned long );
int (*EVP_MD_meth_get_final(const struct evp_md_st*  _function_pointer_result_var_name_a16  ))(struct evp_md_ctx_st* ,unsigned char*);
int (*EVP_MD_meth_get_copy(const struct evp_md_st*  _function_pointer_result_var_name_a17  ))(struct evp_md_ctx_st* ,const struct evp_md_ctx_st* );
int (*EVP_MD_meth_get_cleanup(const struct evp_md_st*  _function_pointer_result_var_name_a18  ))(struct evp_md_ctx_st* );
int (*EVP_MD_meth_get_ctrl(const struct evp_md_st*  _function_pointer_result_var_name_a19  ))(struct evp_md_ctx_st* ,int,int,void*);
struct evp_cipher_st*  EVP_CIPHER_meth_new(int cipher_type, int block_size, int key_len);
struct evp_cipher_st*  EVP_CIPHER_meth_dup(const struct evp_cipher_st*  cipher  );
void EVP_CIPHER_meth_free(struct evp_cipher_st*  cipher  );
int EVP_CIPHER_meth_set_iv_length(struct evp_cipher_st*  cipher  , int iv_len);
int EVP_CIPHER_meth_set_flags(struct evp_cipher_st*  cipher  , unsigned long  int flags);
int EVP_CIPHER_meth_set_impl_ctx_size(struct evp_cipher_st*  cipher  , int ctx_size);
int EVP_CIPHER_meth_set_init(struct evp_cipher_st*  cipher  , int (*init)(struct evp_cipher_ctx_st* ,const unsigned char*,const unsigned char*,int));
int EVP_CIPHER_meth_set_do_cipher(struct evp_cipher_st*  cipher  , int (*do_cipher)(struct evp_cipher_ctx_st* ,unsigned char*,const unsigned char*,unsigned long ));
int EVP_CIPHER_meth_set_cleanup(struct evp_cipher_st*  cipher  , int (*cleanup)(struct evp_cipher_ctx_st* ));
int EVP_CIPHER_meth_set_set_asn1_params(struct evp_cipher_st*  cipher  , int (*set_asn1_parameters)(struct evp_cipher_ctx_st* ,struct asn1_type_st* ));
int EVP_CIPHER_meth_set_get_asn1_params(struct evp_cipher_st*  cipher  , int (*get_asn1_parameters)(struct evp_cipher_ctx_st* ,struct asn1_type_st* ));
int EVP_CIPHER_meth_set_ctrl(struct evp_cipher_st*  cipher  , int (*ctrl)(struct evp_cipher_ctx_st* ,int,int,void*));
int (*EVP_CIPHER_meth_get_init(const struct evp_cipher_st*  _function_pointer_result_var_name_a20  ))(struct evp_cipher_ctx_st* ,const unsigned char*,const unsigned char*,int);
int (*EVP_CIPHER_meth_get_do_cipher(const struct evp_cipher_st*  _function_pointer_result_var_name_a21  ))(struct evp_cipher_ctx_st* ,unsigned char*,const unsigned char*,unsigned long );
int (*EVP_CIPHER_meth_get_cleanup(const struct evp_cipher_st*  _function_pointer_result_var_name_a22  ))(struct evp_cipher_ctx_st* );
int (*EVP_CIPHER_meth_get_set_asn1_params(const struct evp_cipher_st*  _function_pointer_result_var_name_a23  ))(struct evp_cipher_ctx_st* ,struct asn1_type_st* );
int (*EVP_CIPHER_meth_get_get_asn1_params(const struct evp_cipher_st*  _function_pointer_result_var_name_a24  ))(struct evp_cipher_ctx_st* ,struct asn1_type_st* );
int (*EVP_CIPHER_meth_get_ctrl(const struct evp_cipher_st*  _function_pointer_result_var_name_a25  ))(struct evp_cipher_ctx_st* ,int,int,void*);
int EVP_MD_get_type(const struct evp_md_st*  md  );
const char* EVP_MD_get0_name(const struct evp_md_st*  md  );
const char* EVP_MD_get0_description(const struct evp_md_st*  md  );
int EVP_MD_is_a(const struct evp_md_st*  md  , const char* name);
int EVP_MD_names_do_all(const struct evp_md_st*  md  , void (*fn)(const char*,void*), void* data);
const struct ossl_provider_st*  EVP_MD_get0_provider(const struct evp_md_st*  md  );
int EVP_MD_get_pkey_type(const struct evp_md_st*  md  );
int EVP_MD_get_size(const struct evp_md_st*  md  );
int EVP_MD_get_block_size(const struct evp_md_st*  md  );
unsigned long  int EVP_MD_get_flags(const struct evp_md_st*  md  );
int EVP_MD_xof(const struct evp_md_st*  md  );
const struct evp_md_st*  EVP_MD_CTX_get0_md(const struct evp_md_ctx_st*  ctx  );
struct evp_md_st*  EVP_MD_CTX_get1_md(struct evp_md_ctx_st*  ctx  );
const struct evp_md_st*  EVP_MD_CTX_md(const struct evp_md_ctx_st*  ctx  );
int (*EVP_MD_CTX_update_fn(struct evp_md_ctx_st*  _function_pointer_result_var_name_a26  ))(struct evp_md_ctx_st* ,const void*,unsigned long );
void EVP_MD_CTX_set_update_fn(struct evp_md_ctx_st*  ctx  , int (*update)(struct evp_md_ctx_st* ,const void*,unsigned long ));
int EVP_MD_CTX_get_size_ex(const struct evp_md_ctx_st*  ctx  );
struct evp_pkey_ctx_st*  EVP_MD_CTX_get_pkey_ctx(const struct evp_md_ctx_st*  ctx  );
void EVP_MD_CTX_set_pkey_ctx(struct evp_md_ctx_st*  ctx  , struct evp_pkey_ctx_st*  pctx  );
void* EVP_MD_CTX_get0_md_data(const struct evp_md_ctx_st*  ctx  );
int EVP_CIPHER_get_nid(const struct evp_cipher_st*  cipher  );
const char* EVP_CIPHER_get0_name(const struct evp_cipher_st*  cipher  );
const char* EVP_CIPHER_get0_description(const struct evp_cipher_st*  cipher  );
int EVP_CIPHER_is_a(const struct evp_cipher_st*  cipher  , const char* name);
int EVP_CIPHER_names_do_all(const struct evp_cipher_st*  cipher  , void (*fn)(const char*,void*), void* data);
const struct ossl_provider_st*  EVP_CIPHER_get0_provider(const struct evp_cipher_st*  cipher  );
int EVP_CIPHER_get_block_size(const struct evp_cipher_st*  cipher  );
int EVP_CIPHER_impl_ctx_size(const struct evp_cipher_st*  cipher  );
int EVP_CIPHER_get_key_length(const struct evp_cipher_st*  cipher  );
int EVP_CIPHER_get_iv_length(const struct evp_cipher_st*  cipher  );
unsigned long  int EVP_CIPHER_get_flags(const struct evp_cipher_st*  cipher  );
int EVP_CIPHER_get_mode(const struct evp_cipher_st*  cipher  );
int EVP_CIPHER_get_type(const struct evp_cipher_st*  cipher  );
struct evp_cipher_st*  EVP_CIPHER_fetch(struct ossl_lib_ctx_st*  ctx  , const char* algorithm, const char* properties);
int EVP_CIPHER_can_pipeline(const struct evp_cipher_st*  cipher  , int enc);
int EVP_CIPHER_up_ref(struct evp_cipher_st*  cipher  );
void EVP_CIPHER_free(struct evp_cipher_st*  cipher  );
const struct evp_cipher_st*  EVP_CIPHER_CTX_get0_cipher(const struct evp_cipher_ctx_st*  ctx  );
struct evp_cipher_st*  EVP_CIPHER_CTX_get1_cipher(struct evp_cipher_ctx_st*  ctx  );
int EVP_CIPHER_CTX_is_encrypting(const struct evp_cipher_ctx_st*  ctx  );
int EVP_CIPHER_CTX_get_nid(const struct evp_cipher_ctx_st*  ctx  );
int EVP_CIPHER_CTX_get_block_size(const struct evp_cipher_ctx_st*  ctx  );
int EVP_CIPHER_CTX_get_key_length(const struct evp_cipher_ctx_st*  ctx  );
int EVP_CIPHER_CTX_get_iv_length(const struct evp_cipher_ctx_st*  ctx  );
int EVP_CIPHER_CTX_get_tag_length(const struct evp_cipher_ctx_st*  ctx  );
const struct evp_cipher_st*  EVP_CIPHER_CTX_cipher(const struct evp_cipher_ctx_st*  ctx  );
const unsigned char* EVP_CIPHER_CTX_iv(const struct evp_cipher_ctx_st*  ctx  );
const unsigned char* EVP_CIPHER_CTX_original_iv(const struct evp_cipher_ctx_st*  ctx  );
unsigned char* EVP_CIPHER_CTX_iv_noconst(struct evp_cipher_ctx_st*  ctx  );
int EVP_CIPHER_CTX_get_updated_iv(struct evp_cipher_ctx_st*  ctx  , void* buf, unsigned long  len  );
int EVP_CIPHER_CTX_get_original_iv(struct evp_cipher_ctx_st*  ctx  , void* buf, unsigned long  len  );
unsigned char* EVP_CIPHER_CTX_buf_noconst(struct evp_cipher_ctx_st*  ctx  );
int EVP_CIPHER_CTX_get_num(const struct evp_cipher_ctx_st*  ctx  );
int EVP_CIPHER_CTX_set_num(struct evp_cipher_ctx_st*  ctx  , int num);
struct evp_cipher_ctx_st*  EVP_CIPHER_CTX_dup(const struct evp_cipher_ctx_st*  in  );
int EVP_CIPHER_CTX_copy(struct evp_cipher_ctx_st*  out  , const struct evp_cipher_ctx_st*  in  );
void* EVP_CIPHER_CTX_get_app_data(const struct evp_cipher_ctx_st*  ctx  );
void EVP_CIPHER_CTX_set_app_data(struct evp_cipher_ctx_st*  ctx  , void* data);
void* EVP_CIPHER_CTX_get_cipher_data(const struct evp_cipher_ctx_st*  ctx  );
void* EVP_CIPHER_CTX_set_cipher_data(struct evp_cipher_ctx_st*  ctx  , void* cipher_data);
int EVP_Cipher(struct evp_cipher_ctx_st*  c  , unsigned char* out, const unsigned char* in, unsigned int inl);
int EVP_MD_get_params(const struct evp_md_st*  digest  , struct ossl_param_st  params[]  );
int EVP_MD_CTX_set_params(struct evp_md_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_MD_CTX_get_params(struct evp_md_ctx_st*  ctx  , struct ossl_param_st  params[]  );
const struct ossl_param_st*  EVP_MD_gettable_params(const struct evp_md_st*  digest  );
const struct ossl_param_st*  EVP_MD_settable_ctx_params(const struct evp_md_st*  md  );
const struct ossl_param_st*  EVP_MD_gettable_ctx_params(const struct evp_md_st*  md  );
const struct ossl_param_st*  EVP_MD_CTX_settable_params(struct evp_md_ctx_st*  ctx  );
const struct ossl_param_st*  EVP_MD_CTX_gettable_params(struct evp_md_ctx_st*  ctx  );
int EVP_MD_CTX_ctrl(struct evp_md_ctx_st*  ctx  , int cmd, int p1, void* p2);
struct evp_md_ctx_st*  EVP_MD_CTX_new();
int EVP_MD_CTX_reset(struct evp_md_ctx_st*  ctx  );
void EVP_MD_CTX_free(struct evp_md_ctx_st*  ctx  );
struct evp_md_ctx_st*  EVP_MD_CTX_dup(const struct evp_md_ctx_st*  in  );
int EVP_MD_CTX_copy_ex(struct evp_md_ctx_st*  out  , const struct evp_md_ctx_st*  in  );
void EVP_MD_CTX_set_flags(struct evp_md_ctx_st*  ctx  , int flags);
void EVP_MD_CTX_clear_flags(struct evp_md_ctx_st*  ctx  , int flags);
int EVP_MD_CTX_test_flags(const struct evp_md_ctx_st*  ctx  , int flags);
int EVP_DigestInit_ex2(struct evp_md_ctx_st*  ctx  , const struct evp_md_st*  type  , const struct ossl_param_st  params[]  );
int EVP_DigestInit_ex(struct evp_md_ctx_st*  ctx  , const struct evp_md_st*  type  , struct engine_st*  impl  );
int EVP_DigestUpdate(struct evp_md_ctx_st*  ctx  , const void* d, unsigned long  cnt  );
int EVP_DigestFinal_ex(struct evp_md_ctx_st*  ctx  , unsigned char* md, unsigned int* s);
int EVP_Digest(const void* data, unsigned long  count  , unsigned char* md, unsigned int* size, const struct evp_md_st*  type  , struct engine_st*  impl  );
int EVP_Q_digest(struct ossl_lib_ctx_st*  libctx  , const char* name, const char* propq, const void* data, unsigned long  datalen  , unsigned char* md, unsigned long*  mdlen  );
int EVP_MD_CTX_copy(struct evp_md_ctx_st*  out  , const struct evp_md_ctx_st*  in  );
int EVP_DigestInit(struct evp_md_ctx_st*  ctx  , const struct evp_md_st*  type  );
int EVP_DigestFinal(struct evp_md_ctx_st*  ctx  , unsigned char* md, unsigned int* s);
int EVP_DigestFinalXOF(struct evp_md_ctx_st*  ctx  , unsigned char* out, unsigned long  outlen  );
int EVP_DigestSqueeze(struct evp_md_ctx_st*  ctx  , unsigned char* out, unsigned long  outlen  );
struct evp_md_st*  EVP_MD_fetch(struct ossl_lib_ctx_st*  ctx  , const char* algorithm, const char* properties);
int EVP_MD_up_ref(struct evp_md_st*  md  );
void EVP_MD_free(struct evp_md_st*  md  );
int EVP_read_pw_string(char* buf, int length, const char* prompt, int verify);
int EVP_read_pw_string_min(char* buf, int minlen, int maxlen, const char* prompt, int verify);
void EVP_set_pw_prompt(const char* prompt);
char* EVP_get_pw_prompt();
int EVP_BytesToKey(const struct evp_cipher_st*  type  , const struct evp_md_st*  md  , const unsigned char* salt, const unsigned char* data, int datal, int count, unsigned char* key, unsigned char* iv);
void EVP_CIPHER_CTX_set_flags(struct evp_cipher_ctx_st*  ctx  , int flags);
void EVP_CIPHER_CTX_clear_flags(struct evp_cipher_ctx_st*  ctx  , int flags);
int EVP_CIPHER_CTX_test_flags(const struct evp_cipher_ctx_st*  ctx  , int flags);
int EVP_EncryptInit(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, const unsigned char* iv);
int EVP_EncryptInit_ex(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , struct engine_st*  impl  , const unsigned char* key, const unsigned char* iv);
int EVP_EncryptInit_ex2(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, const unsigned char* iv, const struct ossl_param_st  params[]  );
int EVP_EncryptUpdate(struct evp_cipher_ctx_st*  ctx  , unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_EncryptFinal_ex(struct evp_cipher_ctx_st*  ctx  , unsigned char* out, int* outl);
int EVP_EncryptFinal(struct evp_cipher_ctx_st*  ctx  , unsigned char* out, int* outl);
int EVP_DecryptInit(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, const unsigned char* iv);
int EVP_DecryptInit_ex(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , struct engine_st*  impl  , const unsigned char* key, const unsigned char* iv);
int EVP_DecryptInit_ex2(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, const unsigned char* iv, const struct ossl_param_st  params[]  );
int EVP_DecryptUpdate(struct evp_cipher_ctx_st*  ctx  , unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_DecryptFinal(struct evp_cipher_ctx_st*  ctx  , unsigned char* outm, int* outl);
int EVP_DecryptFinal_ex(struct evp_cipher_ctx_st*  ctx  , unsigned char* outm, int* outl);
int EVP_CipherInit(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, const unsigned char* iv, int enc);
int EVP_CipherInit_ex(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , struct engine_st*  impl  , const unsigned char* key, const unsigned char* iv, int enc);
int EVP_CipherInit_SKEY(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , struct evp_skey_st*  skey  , const unsigned char* iv, unsigned long  iv_len  , int enc, const struct ossl_param_st  params[]  );
int EVP_CipherInit_ex2(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, const unsigned char* iv, int enc, const struct ossl_param_st  params[]  );
int EVP_CipherUpdate(struct evp_cipher_ctx_st*  ctx  , unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_CipherFinal(struct evp_cipher_ctx_st*  ctx  , unsigned char* outm, int* outl);
int EVP_CipherPipelineEncryptInit(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, unsigned long  keylen  , unsigned long  numpipes  , const unsigned char** iv, unsigned long  ivlen  );
int EVP_CipherPipelineDecryptInit(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, unsigned long  keylen  , unsigned long  numpipes  , const unsigned char** iv, unsigned long  ivlen  );
int EVP_CipherPipelineUpdate(struct evp_cipher_ctx_st*  ctx  , unsigned char** out, unsigned long*  outl  , const unsigned long*  outsize  , const unsigned char** in, const unsigned long*  inl  );
int EVP_CipherPipelineFinal(struct evp_cipher_ctx_st*  ctx  , unsigned char** outm, unsigned long*  outl  , const unsigned long*  outsize  );
int EVP_CipherFinal_ex(struct evp_cipher_ctx_st*  ctx  , unsigned char* outm, int* outl);
int EVP_SignFinal(struct evp_md_ctx_st*  ctx  , unsigned char* md, unsigned int* s, struct evp_pkey_st*  pkey  );
int EVP_SignFinal_ex(struct evp_md_ctx_st*  ctx  , unsigned char* md, unsigned int* s, struct evp_pkey_st*  pkey  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int EVP_DigestSign(struct evp_md_ctx_st*  ctx  , unsigned char* sigret, unsigned long*  siglen  , const unsigned char* tbs, unsigned long  tbslen  );
int EVP_VerifyFinal(struct evp_md_ctx_st*  ctx  , const unsigned char* sigbuf, unsigned int siglen, struct evp_pkey_st*  pkey  );
int EVP_VerifyFinal_ex(struct evp_md_ctx_st*  ctx  , const unsigned char* sigbuf, unsigned int siglen, struct evp_pkey_st*  pkey  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int EVP_DigestVerify(struct evp_md_ctx_st*  ctx  , const unsigned char* sigret, unsigned long  siglen  , const unsigned char* tbs, unsigned long  tbslen  );
int EVP_DigestSignInit_ex(struct evp_md_ctx_st*  ctx  , struct evp_pkey_ctx_st**  pctx  , const char* mdname, struct ossl_lib_ctx_st*  libctx  , const char* props, struct evp_pkey_st*  pkey  , const struct ossl_param_st  params[]  );
int EVP_DigestSignInit(struct evp_md_ctx_st*  ctx  , struct evp_pkey_ctx_st**  pctx  , const struct evp_md_st*  type  , struct engine_st*  e  , struct evp_pkey_st*  pkey  );
int EVP_DigestSignUpdate(struct evp_md_ctx_st*  ctx  , const void* data, unsigned long  dsize  );
int EVP_DigestSignFinal(struct evp_md_ctx_st*  ctx  , unsigned char* sigret, unsigned long*  siglen  );
int EVP_DigestVerifyInit_ex(struct evp_md_ctx_st*  ctx  , struct evp_pkey_ctx_st**  pctx  , const char* mdname, struct ossl_lib_ctx_st*  libctx  , const char* props, struct evp_pkey_st*  pkey  , const struct ossl_param_st  params[]  );
int EVP_DigestVerifyInit(struct evp_md_ctx_st*  ctx  , struct evp_pkey_ctx_st**  pctx  , const struct evp_md_st*  type  , struct engine_st*  e  , struct evp_pkey_st*  pkey  );
int EVP_DigestVerifyUpdate(struct evp_md_ctx_st*  ctx  , const void* data, unsigned long  dsize  );
int EVP_DigestVerifyFinal(struct evp_md_ctx_st*  ctx  , const unsigned char* sig, unsigned long  siglen  );
int EVP_OpenInit(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  type  , const unsigned char* ek, int ekl, const unsigned char* iv, struct evp_pkey_st*  priv  );
int EVP_OpenFinal(struct evp_cipher_ctx_st*  ctx  , unsigned char* out, int* outl);
int EVP_SealInit(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  type  , unsigned char** ek, int* ekl, unsigned char* iv, struct evp_pkey_st**  pubk  , int npubk);
int EVP_SealFinal(struct evp_cipher_ctx_st*  ctx  , unsigned char* out, int* outl);
struct evp_Encode_Ctx_st*  EVP_ENCODE_CTX_new();
void EVP_ENCODE_CTX_free(struct evp_Encode_Ctx_st*  ctx  );
int EVP_ENCODE_CTX_copy(struct evp_Encode_Ctx_st*  dctx  , const struct evp_Encode_Ctx_st*  sctx  );
int EVP_ENCODE_CTX_num(struct evp_Encode_Ctx_st*  ctx  );
void EVP_EncodeInit(struct evp_Encode_Ctx_st*  ctx  );
int EVP_EncodeUpdate(struct evp_Encode_Ctx_st*  ctx  , unsigned char* out, int* outl, const unsigned char* in, int inl);
void EVP_EncodeFinal(struct evp_Encode_Ctx_st*  ctx  , unsigned char* out, int* outl);
int EVP_EncodeBlock(unsigned char* t, const unsigned char* f, int n);
void EVP_DecodeInit(struct evp_Encode_Ctx_st*  ctx  );
int EVP_DecodeUpdate(struct evp_Encode_Ctx_st*  ctx  , unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_DecodeFinal(struct evp_Encode_Ctx_st*  ctx  , unsigned char* out, int* outl);
int EVP_DecodeBlock(unsigned char* t, const unsigned char* f, int n);
struct evp_cipher_ctx_st*  EVP_CIPHER_CTX_new();
int EVP_CIPHER_CTX_reset(struct evp_cipher_ctx_st*  c  );
void EVP_CIPHER_CTX_free(struct evp_cipher_ctx_st*  c  );
int EVP_CIPHER_CTX_set_key_length(struct evp_cipher_ctx_st*  x  , int keylen);
int EVP_CIPHER_CTX_set_padding(struct evp_cipher_ctx_st*  c  , int pad);
int EVP_CIPHER_CTX_ctrl(struct evp_cipher_ctx_st*  ctx  , int type, int arg, void* ptr);
int EVP_CIPHER_CTX_rand_key(struct evp_cipher_ctx_st*  ctx  , unsigned char* key);
int EVP_CIPHER_get_params(struct evp_cipher_st*  cipher  , struct ossl_param_st  params[]  );
int EVP_CIPHER_CTX_set_params(struct evp_cipher_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_CIPHER_CTX_get_params(struct evp_cipher_ctx_st*  ctx  , struct ossl_param_st  params[]  );
const struct ossl_param_st*  EVP_CIPHER_gettable_params(const struct evp_cipher_st*  cipher  );
const struct ossl_param_st*  EVP_CIPHER_settable_ctx_params(const struct evp_cipher_st*  cipher  );
const struct ossl_param_st*  EVP_CIPHER_gettable_ctx_params(const struct evp_cipher_st*  cipher  );
const struct ossl_param_st*  EVP_CIPHER_CTX_settable_params(struct evp_cipher_ctx_st*  ctx  );
const struct ossl_param_st*  EVP_CIPHER_CTX_gettable_params(struct evp_cipher_ctx_st*  ctx  );
int EVP_CIPHER_CTX_set_algor_params(struct evp_cipher_ctx_st*  ctx  , const struct X509_algor_st*  alg  );
int EVP_CIPHER_CTX_get_algor_params(struct evp_cipher_ctx_st*  ctx  , struct X509_algor_st*  alg  );
int EVP_CIPHER_CTX_get_algor(struct evp_cipher_ctx_st*  ctx  , struct X509_algor_st**  alg  );
const struct bio_method_st*  BIO_f_md();
const struct bio_method_st*  BIO_f_base64();
const struct bio_method_st*  BIO_f_cipher();
const struct bio_method_st*  BIO_f_reliable();
int BIO_set_cipher(struct bio_st*  b  , const struct evp_cipher_st*  c  , const unsigned char* k, const unsigned char* i, int enc);
const struct evp_md_st*  EVP_md_null();
const struct evp_md_st*  EVP_md2();
const struct evp_md_st*  EVP_md4();
const struct evp_md_st*  EVP_md5();
const struct evp_md_st*  EVP_md5_sha1();
const struct evp_md_st*  EVP_blake2b512();
const struct evp_md_st*  EVP_blake2s256();
const struct evp_md_st*  EVP_sha1();
const struct evp_md_st*  EVP_sha224();
const struct evp_md_st*  EVP_sha256();
const struct evp_md_st*  EVP_sha384();
const struct evp_md_st*  EVP_sha512();
const struct evp_md_st*  EVP_sha512_224();
const struct evp_md_st*  EVP_sha512_256();
const struct evp_md_st*  EVP_sha3_224();
const struct evp_md_st*  EVP_sha3_256();
const struct evp_md_st*  EVP_sha3_384();
const struct evp_md_st*  EVP_sha3_512();
const struct evp_md_st*  EVP_shake128();
const struct evp_md_st*  EVP_shake256();
const struct evp_md_st*  EVP_ripemd160();
const struct evp_md_st*  EVP_whirlpool();
const struct evp_md_st*  EVP_sm3();
const struct evp_cipher_st*  EVP_enc_null();
const struct evp_cipher_st*  EVP_des_ecb();
const struct evp_cipher_st*  EVP_des_ede();
const struct evp_cipher_st*  EVP_des_ede3();
const struct evp_cipher_st*  EVP_des_ede_ecb();
const struct evp_cipher_st*  EVP_des_ede3_ecb();
const struct evp_cipher_st*  EVP_des_cfb64();
const struct evp_cipher_st*  EVP_des_cfb1();
const struct evp_cipher_st*  EVP_des_cfb8();
const struct evp_cipher_st*  EVP_des_ede_cfb64();
const struct evp_cipher_st*  EVP_des_ede3_cfb64();
const struct evp_cipher_st*  EVP_des_ede3_cfb1();
const struct evp_cipher_st*  EVP_des_ede3_cfb8();
const struct evp_cipher_st*  EVP_des_ofb();
const struct evp_cipher_st*  EVP_des_ede_ofb();
const struct evp_cipher_st*  EVP_des_ede3_ofb();
const struct evp_cipher_st*  EVP_des_cbc();
const struct evp_cipher_st*  EVP_des_ede_cbc();
const struct evp_cipher_st*  EVP_des_ede3_cbc();
const struct evp_cipher_st*  EVP_desx_cbc();
const struct evp_cipher_st*  EVP_des_ede3_wrap();
const struct evp_cipher_st*  EVP_rc4();
const struct evp_cipher_st*  EVP_rc4_40();
const struct evp_cipher_st*  EVP_rc4_hmac_md5();
const struct evp_cipher_st*  EVP_idea_ecb();
const struct evp_cipher_st*  EVP_idea_cfb64();
const struct evp_cipher_st*  EVP_idea_ofb();
const struct evp_cipher_st*  EVP_idea_cbc();
const struct evp_cipher_st*  EVP_rc2_ecb();
const struct evp_cipher_st*  EVP_rc2_cbc();
const struct evp_cipher_st*  EVP_rc2_40_cbc();
const struct evp_cipher_st*  EVP_rc2_64_cbc();
const struct evp_cipher_st*  EVP_rc2_cfb64();
const struct evp_cipher_st*  EVP_rc2_ofb();
const struct evp_cipher_st*  EVP_bf_ecb();
const struct evp_cipher_st*  EVP_bf_cbc();
const struct evp_cipher_st*  EVP_bf_cfb64();
const struct evp_cipher_st*  EVP_bf_ofb();
const struct evp_cipher_st*  EVP_cast5_ecb();
const struct evp_cipher_st*  EVP_cast5_cbc();
const struct evp_cipher_st*  EVP_cast5_cfb64();
const struct evp_cipher_st*  EVP_cast5_ofb();
const struct evp_cipher_st*  EVP_rc5_32_12_16_cbc();
const struct evp_cipher_st*  EVP_rc5_32_12_16_ecb();
const struct evp_cipher_st*  EVP_rc5_32_12_16_cfb64();
const struct evp_cipher_st*  EVP_rc5_32_12_16_ofb();
const struct evp_cipher_st*  EVP_aes_128_ecb();
const struct evp_cipher_st*  EVP_aes_128_cbc();
const struct evp_cipher_st*  EVP_aes_128_cfb1();
const struct evp_cipher_st*  EVP_aes_128_cfb8();
const struct evp_cipher_st*  EVP_aes_128_cfb128();
const struct evp_cipher_st*  EVP_aes_128_ofb();
const struct evp_cipher_st*  EVP_aes_128_ctr();
const struct evp_cipher_st*  EVP_aes_128_ccm();
const struct evp_cipher_st*  EVP_aes_128_gcm();
const struct evp_cipher_st*  EVP_aes_128_xts();
const struct evp_cipher_st*  EVP_aes_128_wrap();
const struct evp_cipher_st*  EVP_aes_128_wrap_pad();
const struct evp_cipher_st*  EVP_aes_128_ocb();
const struct evp_cipher_st*  EVP_aes_192_ecb();
const struct evp_cipher_st*  EVP_aes_192_cbc();
const struct evp_cipher_st*  EVP_aes_192_cfb1();
const struct evp_cipher_st*  EVP_aes_192_cfb8();
const struct evp_cipher_st*  EVP_aes_192_cfb128();
const struct evp_cipher_st*  EVP_aes_192_ofb();
const struct evp_cipher_st*  EVP_aes_192_ctr();
const struct evp_cipher_st*  EVP_aes_192_ccm();
const struct evp_cipher_st*  EVP_aes_192_gcm();
const struct evp_cipher_st*  EVP_aes_192_wrap();
const struct evp_cipher_st*  EVP_aes_192_wrap_pad();
const struct evp_cipher_st*  EVP_aes_192_ocb();
const struct evp_cipher_st*  EVP_aes_256_ecb();
const struct evp_cipher_st*  EVP_aes_256_cbc();
const struct evp_cipher_st*  EVP_aes_256_cfb1();
const struct evp_cipher_st*  EVP_aes_256_cfb8();
const struct evp_cipher_st*  EVP_aes_256_cfb128();
const struct evp_cipher_st*  EVP_aes_256_ofb();
const struct evp_cipher_st*  EVP_aes_256_ctr();
const struct evp_cipher_st*  EVP_aes_256_ccm();
const struct evp_cipher_st*  EVP_aes_256_gcm();
const struct evp_cipher_st*  EVP_aes_256_xts();
const struct evp_cipher_st*  EVP_aes_256_wrap();
const struct evp_cipher_st*  EVP_aes_256_wrap_pad();
const struct evp_cipher_st*  EVP_aes_256_ocb();
const struct evp_cipher_st*  EVP_aes_128_cbc_hmac_sha1();
const struct evp_cipher_st*  EVP_aes_256_cbc_hmac_sha1();
const struct evp_cipher_st*  EVP_aes_128_cbc_hmac_sha256();
const struct evp_cipher_st*  EVP_aes_256_cbc_hmac_sha256();
const struct evp_cipher_st*  EVP_aria_128_ecb();
const struct evp_cipher_st*  EVP_aria_128_cbc();
const struct evp_cipher_st*  EVP_aria_128_cfb1();
const struct evp_cipher_st*  EVP_aria_128_cfb8();
const struct evp_cipher_st*  EVP_aria_128_cfb128();
const struct evp_cipher_st*  EVP_aria_128_ctr();
const struct evp_cipher_st*  EVP_aria_128_ofb();
const struct evp_cipher_st*  EVP_aria_128_gcm();
const struct evp_cipher_st*  EVP_aria_128_ccm();
const struct evp_cipher_st*  EVP_aria_192_ecb();
const struct evp_cipher_st*  EVP_aria_192_cbc();
const struct evp_cipher_st*  EVP_aria_192_cfb1();
const struct evp_cipher_st*  EVP_aria_192_cfb8();
const struct evp_cipher_st*  EVP_aria_192_cfb128();
const struct evp_cipher_st*  EVP_aria_192_ctr();
const struct evp_cipher_st*  EVP_aria_192_ofb();
const struct evp_cipher_st*  EVP_aria_192_gcm();
const struct evp_cipher_st*  EVP_aria_192_ccm();
const struct evp_cipher_st*  EVP_aria_256_ecb();
const struct evp_cipher_st*  EVP_aria_256_cbc();
const struct evp_cipher_st*  EVP_aria_256_cfb1();
const struct evp_cipher_st*  EVP_aria_256_cfb8();
const struct evp_cipher_st*  EVP_aria_256_cfb128();
const struct evp_cipher_st*  EVP_aria_256_ctr();
const struct evp_cipher_st*  EVP_aria_256_ofb();
const struct evp_cipher_st*  EVP_aria_256_gcm();
const struct evp_cipher_st*  EVP_aria_256_ccm();
const struct evp_cipher_st*  EVP_camellia_128_ecb();
const struct evp_cipher_st*  EVP_camellia_128_cbc();
const struct evp_cipher_st*  EVP_camellia_128_cfb1();
const struct evp_cipher_st*  EVP_camellia_128_cfb8();
const struct evp_cipher_st*  EVP_camellia_128_cfb128();
const struct evp_cipher_st*  EVP_camellia_128_ofb();
const struct evp_cipher_st*  EVP_camellia_128_ctr();
const struct evp_cipher_st*  EVP_camellia_192_ecb();
const struct evp_cipher_st*  EVP_camellia_192_cbc();
const struct evp_cipher_st*  EVP_camellia_192_cfb1();
const struct evp_cipher_st*  EVP_camellia_192_cfb8();
const struct evp_cipher_st*  EVP_camellia_192_cfb128();
const struct evp_cipher_st*  EVP_camellia_192_ofb();
const struct evp_cipher_st*  EVP_camellia_192_ctr();
const struct evp_cipher_st*  EVP_camellia_256_ecb();
const struct evp_cipher_st*  EVP_camellia_256_cbc();
const struct evp_cipher_st*  EVP_camellia_256_cfb1();
const struct evp_cipher_st*  EVP_camellia_256_cfb8();
const struct evp_cipher_st*  EVP_camellia_256_cfb128();
const struct evp_cipher_st*  EVP_camellia_256_ofb();
const struct evp_cipher_st*  EVP_camellia_256_ctr();
const struct evp_cipher_st*  EVP_chacha20();
const struct evp_cipher_st*  EVP_chacha20_poly1305();
const struct evp_cipher_st*  EVP_seed_ecb();
const struct evp_cipher_st*  EVP_seed_cbc();
const struct evp_cipher_st*  EVP_seed_cfb128();
const struct evp_cipher_st*  EVP_seed_ofb();
int EVP_add_cipher(const struct evp_cipher_st*  cipher  );
int EVP_add_digest(const struct evp_md_st*  digest  );
const struct evp_cipher_st*  EVP_get_cipherbyname(const char* name);
const struct evp_md_st*  EVP_get_digestbyname(const char* name);
void EVP_CIPHER_do_all(void (*fn)(const struct evp_cipher_st* ,const char*,const char*,void*), void* arg);
void EVP_CIPHER_do_all_sorted(void (*fn)(const struct evp_cipher_st* ,const char*,const char*,void*), void* arg);
void EVP_CIPHER_do_all_provided(struct ossl_lib_ctx_st*  libctx  , void (*fn)(struct evp_cipher_st* ,void*), void* arg);
void EVP_MD_do_all(void (*fn)(const struct evp_md_st* ,const char*,const char*,void*), void* arg);
void EVP_MD_do_all_sorted(void (*fn)(const struct evp_md_st* ,const char*,const char*,void*), void* arg);
void EVP_MD_do_all_provided(struct ossl_lib_ctx_st*  libctx  , void (*fn)(struct evp_md_st* ,void*), void* arg);
struct evp_mac_st*  EVP_MAC_fetch(struct ossl_lib_ctx_st*  libctx  , const char* algorithm, const char* properties);
int EVP_MAC_up_ref(struct evp_mac_st*  mac  );
void EVP_MAC_free(struct evp_mac_st*  mac  );
const char* EVP_MAC_get0_name(const struct evp_mac_st*  mac  );
const char* EVP_MAC_get0_description(const struct evp_mac_st*  mac  );
int EVP_MAC_is_a(const struct evp_mac_st*  mac  , const char* name);
const struct ossl_provider_st*  EVP_MAC_get0_provider(const struct evp_mac_st*  mac  );
int EVP_MAC_get_params(struct evp_mac_st*  mac  , struct ossl_param_st  params[]  );
struct evp_mac_ctx_st*  EVP_MAC_CTX_new(struct evp_mac_st*  mac  );
void EVP_MAC_CTX_free(struct evp_mac_ctx_st*  ctx  );
struct evp_mac_ctx_st*  EVP_MAC_CTX_dup(const struct evp_mac_ctx_st*  src  );
struct evp_mac_st*  EVP_MAC_CTX_get0_mac(struct evp_mac_ctx_st*  ctx  );
int EVP_MAC_CTX_get_params(struct evp_mac_ctx_st*  ctx  , struct ossl_param_st  params[]  );
int EVP_MAC_CTX_set_params(struct evp_mac_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
unsigned long  EVP_MAC_CTX_get_mac_size(struct evp_mac_ctx_st*  ctx  );
unsigned long  EVP_MAC_CTX_get_block_size(struct evp_mac_ctx_st*  ctx  );
unsigned char* EVP_Q_mac(struct ossl_lib_ctx_st*  libctx  , const char* name, const char* propq, const char* subalg, const struct ossl_param_st*  params  , const void* key, unsigned long  keylen  , const unsigned char* data, unsigned long  datalen  , unsigned char* out, unsigned long  outsize  , unsigned long*  outlen  );
int EVP_MAC_init(struct evp_mac_ctx_st*  ctx  , const unsigned char* key, unsigned long  keylen  , const struct ossl_param_st  params[]  );
int EVP_MAC_init_SKEY(struct evp_mac_ctx_st*  ctx  , struct evp_skey_st*  skey  , const struct ossl_param_st  params[]  );
int EVP_MAC_update(struct evp_mac_ctx_st*  ctx  , const unsigned char* data, unsigned long  datalen  );
int EVP_MAC_final(struct evp_mac_ctx_st*  ctx  , unsigned char* out, unsigned long*  outl  , unsigned long  outsize  );
int EVP_MAC_finalXOF(struct evp_mac_ctx_st*  ctx  , unsigned char* out, unsigned long  outsize  );
const struct ossl_param_st*  EVP_MAC_gettable_params(const struct evp_mac_st*  mac  );
const struct ossl_param_st*  EVP_MAC_gettable_ctx_params(const struct evp_mac_st*  mac  );
const struct ossl_param_st*  EVP_MAC_settable_ctx_params(const struct evp_mac_st*  mac  );
const struct ossl_param_st*  EVP_MAC_CTX_gettable_params(struct evp_mac_ctx_st*  ctx  );
const struct ossl_param_st*  EVP_MAC_CTX_settable_params(struct evp_mac_ctx_st*  ctx  );
void EVP_MAC_do_all_provided(struct ossl_lib_ctx_st*  libctx  , void (*fn)(struct evp_mac_st* ,void*), void* arg);
int EVP_MAC_names_do_all(const struct evp_mac_st*  mac  , void (*fn)(const char*,void*), void* data);
struct evp_rand_st*  EVP_RAND_fetch(struct ossl_lib_ctx_st*  libctx  , const char* algorithm, const char* properties);
int EVP_RAND_up_ref(struct evp_rand_st*  rand  );
void EVP_RAND_free(struct evp_rand_st*  rand  );
const char* EVP_RAND_get0_name(const struct evp_rand_st*  rand  );
const char* EVP_RAND_get0_description(const struct evp_rand_st*  md  );
int EVP_RAND_is_a(const struct evp_rand_st*  rand  , const char* name);
const struct ossl_provider_st*  EVP_RAND_get0_provider(const struct evp_rand_st*  rand  );
int EVP_RAND_get_params(struct evp_rand_st*  rand  , struct ossl_param_st  params[]  );
struct evp_rand_ctx_st*  EVP_RAND_CTX_new(struct evp_rand_st*  rand  , struct evp_rand_ctx_st*  parent  );
int EVP_RAND_CTX_up_ref(struct evp_rand_ctx_st*  ctx  );
void EVP_RAND_CTX_free(struct evp_rand_ctx_st*  ctx  );
struct evp_rand_st*  EVP_RAND_CTX_get0_rand(struct evp_rand_ctx_st*  ctx  );
int EVP_RAND_CTX_get_params(struct evp_rand_ctx_st*  ctx  , struct ossl_param_st  params[]  );
int EVP_RAND_CTX_set_params(struct evp_rand_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
const struct ossl_param_st*  EVP_RAND_gettable_params(const struct evp_rand_st*  rand  );
const struct ossl_param_st*  EVP_RAND_gettable_ctx_params(const struct evp_rand_st*  rand  );
const struct ossl_param_st*  EVP_RAND_settable_ctx_params(const struct evp_rand_st*  rand  );
const struct ossl_param_st*  EVP_RAND_CTX_gettable_params(struct evp_rand_ctx_st*  ctx  );
const struct ossl_param_st*  EVP_RAND_CTX_settable_params(struct evp_rand_ctx_st*  ctx  );
void EVP_RAND_do_all_provided(struct ossl_lib_ctx_st*  libctx  , void (*fn)(struct evp_rand_st* ,void*), void* arg);
int EVP_RAND_names_do_all(const struct evp_rand_st*  rand  , void (*fn)(const char*,void*), void* data);
int EVP_RAND_instantiate(struct evp_rand_ctx_st*  ctx  , unsigned int strength, int prediction_resistance, const unsigned char* pstr, unsigned long  pstr_len  , const struct ossl_param_st  params[]  );
int EVP_RAND_uninstantiate(struct evp_rand_ctx_st*  ctx  );
int EVP_RAND_generate(struct evp_rand_ctx_st*  ctx  , unsigned char* out, unsigned long  outlen  , unsigned int strength, int prediction_resistance, const unsigned char* addin, unsigned long  addin_len  );
int EVP_RAND_reseed(struct evp_rand_ctx_st*  ctx  , int prediction_resistance, const unsigned char* ent, unsigned long  ent_len  , const unsigned char* addin, unsigned long  addin_len  );
int EVP_RAND_nonce(struct evp_rand_ctx_st*  ctx  , unsigned char* out, unsigned long  outlen  );
int EVP_RAND_enable_locking(struct evp_rand_ctx_st*  ctx  );
int EVP_RAND_verify_zeroization(struct evp_rand_ctx_st*  ctx  );
unsigned int EVP_RAND_get_strength(struct evp_rand_ctx_st*  ctx  );
int EVP_RAND_get_state(struct evp_rand_ctx_st*  ctx  );
int EVP_PKEY_decrypt_old(unsigned char* dec_key, const unsigned char* enc_key, int enc_key_len, struct evp_pkey_st*  private_key  );
int EVP_PKEY_encrypt_old(unsigned char* enc_key, const unsigned char* key, int key_len, struct evp_pkey_st*  pub_key  );
int EVP_PKEY_is_a(const struct evp_pkey_st*  pkey  , const char* name);
int EVP_PKEY_type_names_do_all(const struct evp_pkey_st*  pkey  , void (*fn)(const char*,void*), void* data);
int EVP_PKEY_type(int type);
int EVP_PKEY_get_id(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_get_base_id(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_get_bits(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_get_security_bits(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_get_size(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_can_sign(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_set_type(struct evp_pkey_st*  pkey  , int type);
int EVP_PKEY_set_type_str(struct evp_pkey_st*  pkey  , const char* str, int len);
int EVP_PKEY_set_type_by_keymgmt(struct evp_pkey_st*  pkey  , struct evp_keymgmt_st*  keymgmt  );
int EVP_PKEY_assign(struct evp_pkey_st*  pkey  , int type, void* key);
void* EVP_PKEY_get0(const struct evp_pkey_st*  pkey  );
const unsigned char* EVP_PKEY_get0_hmac(const struct evp_pkey_st*  pkey  , unsigned long*  len  );
const unsigned char* EVP_PKEY_get0_poly1305(const struct evp_pkey_st*  pkey  , unsigned long*  len  );
const unsigned char* EVP_PKEY_get0_siphash(const struct evp_pkey_st*  pkey  , unsigned long*  len  );
int EVP_PKEY_set1_RSA(struct evp_pkey_st*  pkey  , struct rsa_st*  key  );
const struct rsa_st*  EVP_PKEY_get0_RSA(const struct evp_pkey_st*  pkey  );
struct rsa_st*  EVP_PKEY_get1_RSA(struct evp_pkey_st*  pkey  );
int EVP_PKEY_set1_DSA(struct evp_pkey_st*  pkey  , struct dsa_st*  key  );
const struct dsa_st*  EVP_PKEY_get0_DSA(const struct evp_pkey_st*  pkey  );
struct dsa_st*  EVP_PKEY_get1_DSA(struct evp_pkey_st*  pkey  );
int EVP_PKEY_set1_DH(struct evp_pkey_st*  pkey  , struct dh_st*  key  );
const struct dh_st*  EVP_PKEY_get0_DH(const struct evp_pkey_st*  pkey  );
struct dh_st*  EVP_PKEY_get1_DH(struct evp_pkey_st*  pkey  );
int EVP_PKEY_set1_EC_KEY(struct evp_pkey_st*  pkey  , struct ec_key_st*  key  );
const struct ec_key_st*  EVP_PKEY_get0_EC_KEY(const struct evp_pkey_st*  pkey  );
struct ec_key_st*  EVP_PKEY_get1_EC_KEY(struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  EVP_PKEY_new();
int EVP_PKEY_up_ref(struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  EVP_PKEY_dup(struct evp_pkey_st*  pkey  );
void EVP_PKEY_free(struct evp_pkey_st*  pkey  );
const char* EVP_PKEY_get0_description(const struct evp_pkey_st*  pkey  );
const struct ossl_provider_st*  EVP_PKEY_get0_provider(const struct evp_pkey_st*  key  );
struct evp_pkey_st*  d2i_PublicKey(int type, struct evp_pkey_st**  a  , const unsigned char** pp, long length);
int i2d_PublicKey(const struct evp_pkey_st*  a  , unsigned char** pp);
struct evp_pkey_st*  d2i_PrivateKey_ex(int type, struct evp_pkey_st**  a  , const unsigned char** pp, long length, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  d2i_PrivateKey(int type, struct evp_pkey_st**  a  , const unsigned char** pp, long length);
struct evp_pkey_st*  d2i_AutoPrivateKey_ex(struct evp_pkey_st**  a  , const unsigned char** pp, long length, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  d2i_AutoPrivateKey(struct evp_pkey_st**  a  , const unsigned char** pp, long length);
int i2d_PrivateKey(const struct evp_pkey_st*  a  , unsigned char** pp);
int i2d_KeyParams(const struct evp_pkey_st*  a  , unsigned char** pp);
struct evp_pkey_st*  d2i_KeyParams(int type, struct evp_pkey_st**  a  , const unsigned char** pp, long length);
int i2d_KeyParams_bio(struct bio_st*  bp  , const struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  d2i_KeyParams_bio(int type, struct evp_pkey_st**  a  , struct bio_st*  in  );
int EVP_PKEY_copy_parameters(struct evp_pkey_st*  to  , const struct evp_pkey_st*  from  );
int EVP_PKEY_missing_parameters(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_save_parameters(struct evp_pkey_st*  pkey  , int mode);
int EVP_PKEY_parameters_eq(const struct evp_pkey_st*  a  , const struct evp_pkey_st*  b  );
int EVP_PKEY_eq(const struct evp_pkey_st*  a  , const struct evp_pkey_st*  b  );
int EVP_PKEY_cmp_parameters(const struct evp_pkey_st*  a  , const struct evp_pkey_st*  b  );
int EVP_PKEY_cmp(const struct evp_pkey_st*  a  , const struct evp_pkey_st*  b  );
int EVP_PKEY_print_public(struct bio_st*  out  , const struct evp_pkey_st*  pkey  , int indent, struct asn1_pctx_st*  pctx  );
int EVP_PKEY_print_private(struct bio_st*  out  , const struct evp_pkey_st*  pkey  , int indent, struct asn1_pctx_st*  pctx  );
int EVP_PKEY_print_params(struct bio_st*  out  , const struct evp_pkey_st*  pkey  , int indent, struct asn1_pctx_st*  pctx  );
int EVP_PKEY_print_public_fp(struct _IO_FILE*  fp  , const struct evp_pkey_st*  pkey  , int indent, struct asn1_pctx_st*  pctx  );
int EVP_PKEY_print_private_fp(struct _IO_FILE*  fp  , const struct evp_pkey_st*  pkey  , int indent, struct asn1_pctx_st*  pctx  );
int EVP_PKEY_print_params_fp(struct _IO_FILE*  fp  , const struct evp_pkey_st*  pkey  , int indent, struct asn1_pctx_st*  pctx  );
int EVP_PKEY_get_default_digest_nid(struct evp_pkey_st*  pkey  , int* pnid);
int EVP_PKEY_get_default_digest_name(struct evp_pkey_st*  pkey  , char* mdname, unsigned long  mdname_sz  );
int EVP_PKEY_digestsign_supports_digest(struct evp_pkey_st*  pkey  , struct ossl_lib_ctx_st*  libctx  , const char* name, const char* propq);
int EVP_PKEY_set1_encoded_public_key(struct evp_pkey_st*  pkey  , const unsigned char* pub, unsigned long  publen  );
unsigned long  EVP_PKEY_get1_encoded_public_key(struct evp_pkey_st*  pkey  , unsigned char** ppub);
int EVP_CIPHER_param_to_asn1(struct evp_cipher_ctx_st*  c  , struct asn1_type_st*  type  );
int EVP_CIPHER_asn1_to_param(struct evp_cipher_ctx_st*  c  , struct asn1_type_st*  type  );
int EVP_CIPHER_set_asn1_iv(struct evp_cipher_ctx_st*  c  , struct asn1_type_st*  type  );
int EVP_CIPHER_get_asn1_iv(struct evp_cipher_ctx_st*  c  , struct asn1_type_st*  type  );
int PKCS5_PBE_keyivgen(struct evp_cipher_ctx_st*  ctx  , const char* pass, int passlen, struct asn1_type_st*  param  , const struct evp_cipher_st*  cipher  , const struct evp_md_st*  md  , int en_de);
int PKCS5_PBE_keyivgen_ex(struct evp_cipher_ctx_st*  cctx  , const char* pass, int passlen, struct asn1_type_st*  param  , const struct evp_cipher_st*  cipher  , const struct evp_md_st*  md  , int en_de, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PKCS5_PBKDF2_HMAC_SHA1(const char* pass, int passlen, const unsigned char* salt, int saltlen, int iter, int keylen, unsigned char* out);
int PKCS5_PBKDF2_HMAC(const char* pass, int passlen, const unsigned char* salt, int saltlen, int iter, const struct evp_md_st*  digest  , int keylen, unsigned char* out);
int PKCS5_v2_PBE_keyivgen(struct evp_cipher_ctx_st*  ctx  , const char* pass, int passlen, struct asn1_type_st*  param  , const struct evp_cipher_st*  cipher  , const struct evp_md_st*  md  , int en_de);
int PKCS5_v2_PBE_keyivgen_ex(struct evp_cipher_ctx_st*  ctx  , const char* pass, int passlen, struct asn1_type_st*  param  , const struct evp_cipher_st*  cipher  , const struct evp_md_st*  md  , int en_de, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int EVP_PBE_scrypt(const char* pass, unsigned long  passlen  , const unsigned char* salt, unsigned long  saltlen  , unsigned long  int  N  , unsigned long  int  r  , unsigned long  int  p  , unsigned long  int  maxmem  , unsigned char* key, unsigned long  keylen  );
int EVP_PBE_scrypt_ex(const char* pass, unsigned long  passlen  , const unsigned char* salt, unsigned long  saltlen  , unsigned long  int  N  , unsigned long  int  r  , unsigned long  int  p  , unsigned long  int  maxmem  , unsigned char* key, unsigned long  keylen  , struct ossl_lib_ctx_st*  ctx  , const char* propq);
int PKCS5_v2_scrypt_keyivgen(struct evp_cipher_ctx_st*  ctx  , const char* pass, int passlen, struct asn1_type_st*  param  , const struct evp_cipher_st*  c  , const struct evp_md_st*  md  , int en_de);
int PKCS5_v2_scrypt_keyivgen_ex(struct evp_cipher_ctx_st*  ctx  , const char* pass, int passlen, struct asn1_type_st*  param  , const struct evp_cipher_st*  c  , const struct evp_md_st*  md  , int en_de, struct ossl_lib_ctx_st*  libctx  , const char* propq);
void PKCS5_PBE_add();
int EVP_PBE_CipherInit(struct asn1_object_st*  pbe_obj  , const char* pass, int passlen, struct asn1_type_st*  param  , struct evp_cipher_ctx_st*  ctx  , int en_de);
int EVP_PBE_CipherInit_ex(struct asn1_object_st*  pbe_obj  , const char* pass, int passlen, struct asn1_type_st*  param  , struct evp_cipher_ctx_st*  ctx  , int en_de, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int EVP_PBE_alg_add_type(int pbe_type, int pbe_nid, int cipher_nid, int md_nid, int (*(*keygen))(struct evp_cipher_ctx_st* ,const char*,int,struct asn1_type_st* ,const struct evp_cipher_st* ,const struct evp_md_st* ,int)  );
int EVP_PBE_alg_add(int nid, const struct evp_cipher_st*  cipher  , const struct evp_md_st*  md  , int (*(*keygen))(struct evp_cipher_ctx_st* ,const char*,int,struct asn1_type_st* ,const struct evp_cipher_st* ,const struct evp_md_st* ,int)  );
int EVP_PBE_find(int type, int pbe_nid, int* pcnid, int* pmnid, int (*(*(*pkeygen)))(struct evp_cipher_ctx_st* ,const char*,int,struct asn1_type_st* ,const struct evp_cipher_st* ,const struct evp_md_st* ,int)  );
int EVP_PBE_find_ex(int type, int pbe_nid, int* pcnid, int* pmnid, int (*(*(*pkeygen)))(struct evp_cipher_ctx_st* ,const char*,int,struct asn1_type_st* ,const struct evp_cipher_st* ,const struct evp_md_st* ,int)  , int (*(*(*pkeygen_ex)))(struct evp_cipher_ctx_st* ,const char*,int,struct asn1_type_st* ,const struct evp_cipher_st* ,const struct evp_md_st* ,int,struct ossl_lib_ctx_st* ,const char*)  );
void EVP_PBE_cleanup();
int EVP_PBE_get(int* ptype, int* ppbe_nid, unsigned long  num  );
int EVP_PKEY_asn1_get_count();
const struct evp_pkey_asn1_method_st*  EVP_PKEY_asn1_get0(int idx);
const struct evp_pkey_asn1_method_st*  EVP_PKEY_asn1_find(struct engine_st**  pe  , int type);
const struct evp_pkey_asn1_method_st*  EVP_PKEY_asn1_find_str(struct engine_st**  pe  , const char* str, int len);
int EVP_PKEY_asn1_add0(const struct evp_pkey_asn1_method_st*  ameth  );
int EVP_PKEY_asn1_add_alias(int to, int from);
int EVP_PKEY_asn1_get0_info(int* ppkey_id, int* pkey_base_id, int* ppkey_flags, const char** pinfo, const char** ppem_str, const struct evp_pkey_asn1_method_st*  ameth  );
const struct evp_pkey_asn1_method_st*  EVP_PKEY_get0_asn1(const struct evp_pkey_st*  pkey  );
struct evp_pkey_asn1_method_st*  EVP_PKEY_asn1_new(int id, int flags, const char* pem_str, const char* info);
void EVP_PKEY_asn1_copy(struct evp_pkey_asn1_method_st*  dst  , const struct evp_pkey_asn1_method_st*  src  );
void EVP_PKEY_asn1_free(struct evp_pkey_asn1_method_st*  ameth  );
void EVP_PKEY_asn1_set_public(struct evp_pkey_asn1_method_st*  ameth  , int (*pub_decode)(struct evp_pkey_st* ,const struct X509_pubkey_st* ), int (*pub_encode)(struct X509_pubkey_st* ,const struct evp_pkey_st* ), int (*pub_cmp)(const struct evp_pkey_st* ,const struct evp_pkey_st* ), int (*pub_print)(struct bio_st* ,const struct evp_pkey_st* ,int,struct asn1_pctx_st* ), int (*pkey_size)(const struct evp_pkey_st* ), int (*pkey_bits)(const struct evp_pkey_st* ));
void EVP_PKEY_asn1_set_private(struct evp_pkey_asn1_method_st*  ameth  , int (*priv_decode)(struct evp_pkey_st* ,const struct pkcs8_priv_key_info_st* ), int (*priv_encode)(struct pkcs8_priv_key_info_st* ,const struct evp_pkey_st* ), int (*priv_print)(struct bio_st* ,const struct evp_pkey_st* ,int,struct asn1_pctx_st* ));
void EVP_PKEY_asn1_set_param(struct evp_pkey_asn1_method_st*  ameth  , int (*param_decode)(struct evp_pkey_st* ,const unsigned char**,int), int (*param_encode)(const struct evp_pkey_st* ,unsigned char**), int (*param_missing)(const struct evp_pkey_st* ), int (*param_copy)(struct evp_pkey_st* ,const struct evp_pkey_st* ), int (*param_cmp)(const struct evp_pkey_st* ,const struct evp_pkey_st* ), int (*param_print)(struct bio_st* ,const struct evp_pkey_st* ,int,struct asn1_pctx_st* ));
void EVP_PKEY_asn1_set_free(struct evp_pkey_asn1_method_st*  ameth  , void (*pkey_free)(struct evp_pkey_st* ));
void EVP_PKEY_asn1_set_ctrl(struct evp_pkey_asn1_method_st*  ameth  , int (*pkey_ctrl)(struct evp_pkey_st* ,int,long,void*));
void EVP_PKEY_asn1_set_item(struct evp_pkey_asn1_method_st*  ameth  , int (*item_verify)(struct evp_md_ctx_st* ,const struct ASN1_ITEM_st* ,const void*,const struct X509_algor_st* ,const struct asn1_string_st* ,struct evp_pkey_st* ), int (*item_sign)(struct evp_md_ctx_st* ,const struct ASN1_ITEM_st* ,const void*,struct X509_algor_st* ,struct X509_algor_st* ,struct asn1_string_st* ));
void EVP_PKEY_asn1_set_siginf(struct evp_pkey_asn1_method_st*  ameth  , int (*siginf_set)(struct x509_sig_info_st* ,const struct X509_algor_st* ,const struct asn1_string_st* ));
void EVP_PKEY_asn1_set_check(struct evp_pkey_asn1_method_st*  ameth  , int (*pkey_check)(const struct evp_pkey_st* ));
void EVP_PKEY_asn1_set_public_check(struct evp_pkey_asn1_method_st*  ameth  , int (*pkey_pub_check)(const struct evp_pkey_st* ));
void EVP_PKEY_asn1_set_param_check(struct evp_pkey_asn1_method_st*  ameth  , int (*pkey_param_check)(const struct evp_pkey_st* ));
void EVP_PKEY_asn1_set_set_priv_key(struct evp_pkey_asn1_method_st*  ameth  , int (*set_priv_key)(struct evp_pkey_st* ,const unsigned char*,unsigned long ));
void EVP_PKEY_asn1_set_set_pub_key(struct evp_pkey_asn1_method_st*  ameth  , int (*set_pub_key)(struct evp_pkey_st* ,const unsigned char*,unsigned long ));
void EVP_PKEY_asn1_set_get_priv_key(struct evp_pkey_asn1_method_st*  ameth  , int (*get_priv_key)(const struct evp_pkey_st* ,unsigned char*,unsigned long* ));
void EVP_PKEY_asn1_set_get_pub_key(struct evp_pkey_asn1_method_st*  ameth  , int (*get_pub_key)(const struct evp_pkey_st* ,unsigned char*,unsigned long* ));
void EVP_PKEY_asn1_set_security_bits(struct evp_pkey_asn1_method_st*  ameth  , int (*pkey_security_bits)(const struct evp_pkey_st* ));
int EVP_PKEY_CTX_get_signature_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st**  md  );
int EVP_PKEY_CTX_set_signature_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_set1_id(struct evp_pkey_ctx_st*  ctx  , const void* id, int len);
int EVP_PKEY_CTX_get1_id(struct evp_pkey_ctx_st*  ctx  , void* id);
int EVP_PKEY_CTX_get1_id_len(struct evp_pkey_ctx_st*  ctx  , unsigned long*  id_len  );
int EVP_PKEY_CTX_set_kem_op(struct evp_pkey_ctx_st*  ctx  , const char* op);
const char* EVP_PKEY_get0_type_name(const struct evp_pkey_st*  key  );
int EVP_PKEY_CTX_set_mac_key(struct evp_pkey_ctx_st*  ctx  , const unsigned char* key, int keylen);
const struct evp_pkey_method_st*  EVP_PKEY_meth_find(int type);
struct evp_pkey_method_st*  EVP_PKEY_meth_new(int id, int flags);
void EVP_PKEY_meth_get0_info(int* ppkey_id, int* pflags, const struct evp_pkey_method_st*  meth  );
void EVP_PKEY_meth_copy(struct evp_pkey_method_st*  dst  , const struct evp_pkey_method_st*  src  );
void EVP_PKEY_meth_free(struct evp_pkey_method_st*  pmeth  );
int EVP_PKEY_meth_add0(const struct evp_pkey_method_st*  pmeth  );
int EVP_PKEY_meth_remove(const struct evp_pkey_method_st*  pmeth  );
unsigned long  EVP_PKEY_meth_get_count();
const struct evp_pkey_method_st*  EVP_PKEY_meth_get0(unsigned long  idx  );
struct evp_keymgmt_st*  EVP_KEYMGMT_fetch(struct ossl_lib_ctx_st*  ctx  , const char* algorithm, const char* properties);
int EVP_KEYMGMT_up_ref(struct evp_keymgmt_st*  keymgmt  );
void EVP_KEYMGMT_free(struct evp_keymgmt_st*  keymgmt  );
const struct ossl_provider_st*  EVP_KEYMGMT_get0_provider(const struct evp_keymgmt_st*  keymgmt  );
const char* EVP_KEYMGMT_get0_name(const struct evp_keymgmt_st*  keymgmt  );
const char* EVP_KEYMGMT_get0_description(const struct evp_keymgmt_st*  keymgmt  );
int EVP_KEYMGMT_is_a(const struct evp_keymgmt_st*  keymgmt  , const char* name);
void EVP_KEYMGMT_do_all_provided(struct ossl_lib_ctx_st*  libctx  , void (*fn)(struct evp_keymgmt_st* ,void*), void* arg);
int EVP_KEYMGMT_names_do_all(const struct evp_keymgmt_st*  keymgmt  , void (*fn)(const char*,void*), void* data);
const struct ossl_param_st*  EVP_KEYMGMT_gettable_params(const struct evp_keymgmt_st*  keymgmt  );
const struct ossl_param_st*  EVP_KEYMGMT_settable_params(const struct evp_keymgmt_st*  keymgmt  );
const struct ossl_param_st*  EVP_KEYMGMT_gen_settable_params(const struct evp_keymgmt_st*  keymgmt  );
const struct ossl_param_st*  EVP_KEYMGMT_gen_gettable_params(const struct evp_keymgmt_st*  keymgmt  );
struct evp_skeymgmt_st*  EVP_SKEYMGMT_fetch(struct ossl_lib_ctx_st*  ctx  , const char* algorithm, const char* properties);
int EVP_SKEYMGMT_up_ref(struct evp_skeymgmt_st*  keymgmt  );
void EVP_SKEYMGMT_free(struct evp_skeymgmt_st*  keymgmt  );
const struct ossl_provider_st*  EVP_SKEYMGMT_get0_provider(const struct evp_skeymgmt_st*  keymgmt  );
const char* EVP_SKEYMGMT_get0_name(const struct evp_skeymgmt_st*  keymgmt  );
const char* EVP_SKEYMGMT_get0_description(const struct evp_skeymgmt_st*  keymgmt  );
int EVP_SKEYMGMT_is_a(const struct evp_skeymgmt_st*  keymgmt  , const char* name);
void EVP_SKEYMGMT_do_all_provided(struct ossl_lib_ctx_st*  libctx  , void (*fn)(struct evp_skeymgmt_st* ,void*), void* arg);
int EVP_SKEYMGMT_names_do_all(const struct evp_skeymgmt_st*  keymgmt  , void (*fn)(const char*,void*), void* data);
const struct ossl_param_st*  EVP_SKEYMGMT_get0_gen_settable_params(const struct evp_skeymgmt_st*  skeymgmt  );
const struct ossl_param_st*  EVP_SKEYMGMT_get0_imp_settable_params(const struct evp_skeymgmt_st*  skeymgmt  );
struct evp_pkey_ctx_st*  EVP_PKEY_CTX_new(struct evp_pkey_st*  pkey  , struct engine_st*  e  );
struct evp_pkey_ctx_st*  EVP_PKEY_CTX_new_id(int id, struct engine_st*  e  );
struct evp_pkey_ctx_st*  EVP_PKEY_CTX_new_from_name(struct ossl_lib_ctx_st*  libctx  , const char* name, const char* propquery);
struct evp_pkey_ctx_st*  EVP_PKEY_CTX_new_from_pkey(struct ossl_lib_ctx_st*  libctx  , struct evp_pkey_st*  pkey  , const char* propquery);
struct evp_pkey_ctx_st*  EVP_PKEY_CTX_dup(const struct evp_pkey_ctx_st*  ctx  );
void EVP_PKEY_CTX_free(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_CTX_is_a(struct evp_pkey_ctx_st*  ctx  , const char* keytype);
int EVP_PKEY_CTX_get_params(struct evp_pkey_ctx_st*  ctx  , struct ossl_param_st*  params  );
const struct ossl_param_st*  EVP_PKEY_CTX_gettable_params(const struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_CTX_set_params(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st*  params  );
const struct ossl_param_st*  EVP_PKEY_CTX_settable_params(const struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_CTX_set_algor_params(struct evp_pkey_ctx_st*  ctx  , const struct X509_algor_st*  alg  );
int EVP_PKEY_CTX_get_algor_params(struct evp_pkey_ctx_st*  ctx  , struct X509_algor_st*  alg  );
int EVP_PKEY_CTX_get_algor(struct evp_pkey_ctx_st*  ctx  , struct X509_algor_st**  alg  );
int EVP_PKEY_CTX_ctrl(struct evp_pkey_ctx_st*  ctx  , int keytype, int optype, int cmd, int p1, void* p2);
int EVP_PKEY_CTX_ctrl_str(struct evp_pkey_ctx_st*  ctx  , const char* type, const char* value);
int EVP_PKEY_CTX_ctrl_uint64(struct evp_pkey_ctx_st*  ctx  , int keytype, int optype, int cmd, unsigned long  int  value  );
int EVP_PKEY_CTX_str2ctrl(struct evp_pkey_ctx_st*  ctx  , int cmd, const char* str);
int EVP_PKEY_CTX_hex2ctrl(struct evp_pkey_ctx_st*  ctx  , int cmd, const char* hex);
int EVP_PKEY_CTX_md(struct evp_pkey_ctx_st*  ctx  , int optype, int cmd, const char* md);
int EVP_PKEY_CTX_get_operation(struct evp_pkey_ctx_st*  ctx  );
void EVP_PKEY_CTX_set0_keygen_info(struct evp_pkey_ctx_st*  ctx  , int* dat, int datlen);
struct evp_pkey_st*  EVP_PKEY_new_mac_key(int type, struct engine_st*  e  , const unsigned char* key, int keylen);
struct evp_pkey_st*  EVP_PKEY_new_raw_private_key_ex(struct ossl_lib_ctx_st*  libctx  , const char* keytype, const char* propq, const unsigned char* priv, unsigned long  len  );
struct evp_pkey_st*  EVP_PKEY_new_raw_private_key(int type, struct engine_st*  e  , const unsigned char* priv, unsigned long  len  );
struct evp_pkey_st*  EVP_PKEY_new_raw_public_key_ex(struct ossl_lib_ctx_st*  libctx  , const char* keytype, const char* propq, const unsigned char* pub, unsigned long  len  );
struct evp_pkey_st*  EVP_PKEY_new_raw_public_key(int type, struct engine_st*  e  , const unsigned char* pub, unsigned long  len  );
int EVP_PKEY_get_raw_private_key(const struct evp_pkey_st*  pkey  , unsigned char* priv, unsigned long*  len  );
int EVP_PKEY_get_raw_public_key(const struct evp_pkey_st*  pkey  , unsigned char* pub, unsigned long*  len  );
struct evp_pkey_st*  EVP_PKEY_new_CMAC_key(struct engine_st*  e  , const unsigned char* priv, unsigned long  len  , const struct evp_cipher_st*  cipher  );
void EVP_PKEY_CTX_set_data(struct evp_pkey_ctx_st*  ctx  , void* data);
void* EVP_PKEY_CTX_get_data(const struct evp_pkey_ctx_st*  ctx  );
struct evp_pkey_st*  EVP_PKEY_CTX_get0_pkey(struct evp_pkey_ctx_st*  ctx  );
struct evp_pkey_st*  EVP_PKEY_CTX_get0_peerkey(struct evp_pkey_ctx_st*  ctx  );
void EVP_PKEY_CTX_set_app_data(struct evp_pkey_ctx_st*  ctx  , void* data);
void* EVP_PKEY_CTX_get_app_data(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_CTX_set_signature(struct evp_pkey_ctx_st*  pctx  , const unsigned char* sig, unsigned long  siglen  );
void EVP_SIGNATURE_free(struct evp_signature_st*  signature  );
int EVP_SIGNATURE_up_ref(struct evp_signature_st*  signature  );
struct ossl_provider_st*  EVP_SIGNATURE_get0_provider(const struct evp_signature_st*  signature  );
struct evp_signature_st*  EVP_SIGNATURE_fetch(struct ossl_lib_ctx_st*  ctx  , const char* algorithm, const char* properties);
int EVP_SIGNATURE_is_a(const struct evp_signature_st*  signature  , const char* name);
const char* EVP_SIGNATURE_get0_name(const struct evp_signature_st*  signature  );
const char* EVP_SIGNATURE_get0_description(const struct evp_signature_st*  signature  );
void EVP_SIGNATURE_do_all_provided(struct ossl_lib_ctx_st*  libctx  , void (*fn)(struct evp_signature_st* ,void*), void* data);
int EVP_SIGNATURE_names_do_all(const struct evp_signature_st*  signature  , void (*fn)(const char*,void*), void* data);
const struct ossl_param_st*  EVP_SIGNATURE_gettable_ctx_params(const struct evp_signature_st*  sig  );
const struct ossl_param_st*  EVP_SIGNATURE_settable_ctx_params(const struct evp_signature_st*  sig  );
void EVP_ASYM_CIPHER_free(struct evp_asym_cipher_st*  cipher  );
int EVP_ASYM_CIPHER_up_ref(struct evp_asym_cipher_st*  cipher  );
struct ossl_provider_st*  EVP_ASYM_CIPHER_get0_provider(const struct evp_asym_cipher_st*  cipher  );
struct evp_asym_cipher_st*  EVP_ASYM_CIPHER_fetch(struct ossl_lib_ctx_st*  ctx  , const char* algorithm, const char* properties);
int EVP_ASYM_CIPHER_is_a(const struct evp_asym_cipher_st*  cipher  , const char* name);
const char* EVP_ASYM_CIPHER_get0_name(const struct evp_asym_cipher_st*  cipher  );
const char* EVP_ASYM_CIPHER_get0_description(const struct evp_asym_cipher_st*  cipher  );
void EVP_ASYM_CIPHER_do_all_provided(struct ossl_lib_ctx_st*  libctx  , void (*fn)(struct evp_asym_cipher_st* ,void*), void* arg);
int EVP_ASYM_CIPHER_names_do_all(const struct evp_asym_cipher_st*  cipher  , void (*fn)(const char*,void*), void* data);
const struct ossl_param_st*  EVP_ASYM_CIPHER_gettable_ctx_params(const struct evp_asym_cipher_st*  ciph  );
const struct ossl_param_st*  EVP_ASYM_CIPHER_settable_ctx_params(const struct evp_asym_cipher_st*  ciph  );
void EVP_KEM_free(struct evp_kem_st*  wrap  );
int EVP_KEM_up_ref(struct evp_kem_st*  wrap  );
struct ossl_provider_st*  EVP_KEM_get0_provider(const struct evp_kem_st*  wrap  );
struct evp_kem_st*  EVP_KEM_fetch(struct ossl_lib_ctx_st*  ctx  , const char* algorithm, const char* properties);
int EVP_KEM_is_a(const struct evp_kem_st*  wrap  , const char* name);
const char* EVP_KEM_get0_name(const struct evp_kem_st*  wrap  );
const char* EVP_KEM_get0_description(const struct evp_kem_st*  wrap  );
void EVP_KEM_do_all_provided(struct ossl_lib_ctx_st*  libctx  , void (*fn)(struct evp_kem_st* ,void*), void* arg);
int EVP_KEM_names_do_all(const struct evp_kem_st*  wrap  , void (*fn)(const char*,void*), void* data);
const struct ossl_param_st*  EVP_KEM_gettable_ctx_params(const struct evp_kem_st*  kem  );
const struct ossl_param_st*  EVP_KEM_settable_ctx_params(const struct evp_kem_st*  kem  );
int EVP_PKEY_sign_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_sign_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_sign_init_ex2(struct evp_pkey_ctx_st*  ctx  , struct evp_signature_st*  algo  , const struct ossl_param_st  params[]  );
int EVP_PKEY_sign(struct evp_pkey_ctx_st*  ctx  , unsigned char* sig, unsigned long*  siglen  , const unsigned char* tbs, unsigned long  tbslen  );
int EVP_PKEY_sign_message_init(struct evp_pkey_ctx_st*  ctx  , struct evp_signature_st*  algo  , const struct ossl_param_st  params[]  );
int EVP_PKEY_sign_message_update(struct evp_pkey_ctx_st*  ctx  , const unsigned char* in, unsigned long  inlen  );
int EVP_PKEY_sign_message_final(struct evp_pkey_ctx_st*  ctx  , unsigned char* sig, unsigned long*  siglen  );
int EVP_PKEY_verify_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_verify_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_verify_init_ex2(struct evp_pkey_ctx_st*  ctx  , struct evp_signature_st*  algo  , const struct ossl_param_st  params[]  );
int EVP_PKEY_verify(struct evp_pkey_ctx_st*  ctx  , const unsigned char* sig, unsigned long  siglen  , const unsigned char* tbs, unsigned long  tbslen  );
int EVP_PKEY_verify_message_init(struct evp_pkey_ctx_st*  ctx  , struct evp_signature_st*  algo  , const struct ossl_param_st  params[]  );
int EVP_PKEY_verify_message_update(struct evp_pkey_ctx_st*  ctx  , const unsigned char* in, unsigned long  inlen  );
int EVP_PKEY_verify_message_final(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_verify_recover_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_verify_recover_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_verify_recover_init_ex2(struct evp_pkey_ctx_st*  ctx  , struct evp_signature_st*  algo  , const struct ossl_param_st  params[]  );
int EVP_PKEY_verify_recover(struct evp_pkey_ctx_st*  ctx  , unsigned char* rout, unsigned long*  routlen  , const unsigned char* sig, unsigned long  siglen  );
int EVP_PKEY_encrypt_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_encrypt_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_encrypt(struct evp_pkey_ctx_st*  ctx  , unsigned char* out, unsigned long*  outlen  , const unsigned char* in, unsigned long  inlen  );
int EVP_PKEY_decrypt_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_decrypt_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_decrypt(struct evp_pkey_ctx_st*  ctx  , unsigned char* out, unsigned long*  outlen  , const unsigned char* in, unsigned long  inlen  );
int EVP_PKEY_derive_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_derive_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_derive_set_peer_ex(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st*  peer  , int validate_peer);
int EVP_PKEY_derive_set_peer(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st*  peer  );
int EVP_PKEY_derive(struct evp_pkey_ctx_st*  ctx  , unsigned char* key, unsigned long*  keylen  );
int EVP_PKEY_encapsulate_init(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_auth_encapsulate_init(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st*  authpriv  , const struct ossl_param_st  params[]  );
int EVP_PKEY_encapsulate(struct evp_pkey_ctx_st*  ctx  , unsigned char* wrappedkey, unsigned long*  wrappedkeylen  , unsigned char* genkey, unsigned long*  genkeylen  );
int EVP_PKEY_decapsulate_init(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_auth_decapsulate_init(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st*  authpub  , const struct ossl_param_st  params[]  );
int EVP_PKEY_decapsulate(struct evp_pkey_ctx_st*  ctx  , unsigned char* unwrapped, unsigned long*  unwrappedlen  , const unsigned char* wrapped, unsigned long  wrappedlen  );
int EVP_PKEY_fromdata_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_fromdata(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st**  ppkey  , int selection, struct ossl_param_st  param[]  );
const struct ossl_param_st*  EVP_PKEY_fromdata_settable(struct evp_pkey_ctx_st*  ctx  , int selection);
int EVP_PKEY_todata(const struct evp_pkey_st*  pkey  , int selection, struct ossl_param_st**  params  );
int EVP_PKEY_export(const struct evp_pkey_st*  pkey  , int selection, int (*(*export_cb))(const struct ossl_param_st ,void*)  , void* export_cbarg);
const struct ossl_param_st*  EVP_PKEY_gettable_params(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_get_params(const struct evp_pkey_st*  pkey  , struct ossl_param_st  params[]  );
int EVP_PKEY_get_int_param(const struct evp_pkey_st*  pkey  , const char* key_name, int* out);
int EVP_PKEY_get_size_t_param(const struct evp_pkey_st*  pkey  , const char* key_name, unsigned long*  out  );
int EVP_PKEY_get_bn_param(const struct evp_pkey_st*  pkey  , const char* key_name, struct bignum_st**  bn  );
int EVP_PKEY_get_utf8_string_param(const struct evp_pkey_st*  pkey  , const char* key_name, char* str, unsigned long  max_buf_sz  , unsigned long*  out_sz  );
int EVP_PKEY_get_octet_string_param(const struct evp_pkey_st*  pkey  , const char* key_name, unsigned char* buf, unsigned long  max_buf_sz  , unsigned long*  out_sz  );
const struct ossl_param_st*  EVP_PKEY_settable_params(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_set_params(struct evp_pkey_st*  pkey  , struct ossl_param_st  params[]  );
int EVP_PKEY_set_int_param(struct evp_pkey_st*  pkey  , const char* key_name, int in);
int EVP_PKEY_set_size_t_param(struct evp_pkey_st*  pkey  , const char* key_name, unsigned long  in  );
int EVP_PKEY_set_bn_param(struct evp_pkey_st*  pkey  , const char* key_name, const struct bignum_st*  bn  );
int EVP_PKEY_set_utf8_string_param(struct evp_pkey_st*  pkey  , const char* key_name, const char* str);
int EVP_PKEY_set_octet_string_param(struct evp_pkey_st*  pkey  , const char* key_name, const unsigned char* buf, unsigned long  bsize  );
int EVP_PKEY_get_ec_point_conv_form(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_get_field_type(const struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  EVP_PKEY_Q_keygen(struct ossl_lib_ctx_st*  libctx  , const char* propq, const char* type, ...);
int EVP_PKEY_paramgen_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_paramgen(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st**  ppkey  );
int EVP_PKEY_keygen_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_keygen(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st**  ppkey  );
int EVP_PKEY_generate(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st**  ppkey  );
int EVP_PKEY_check(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_public_check(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_public_check_quick(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_param_check(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_param_check_quick(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_private_check(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_pairwise_check(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_set_ex_data(struct evp_pkey_st*  key  , int idx, void* arg);
void* EVP_PKEY_get_ex_data(const struct evp_pkey_st*  key  , int idx);
void EVP_PKEY_CTX_set_cb(struct evp_pkey_ctx_st*  ctx  , int (*(*cb))(struct evp_pkey_ctx_st* )  );
int (*(*EVP_PKEY_CTX_get_cb(struct evp_pkey_ctx_st*  ctx  )))(struct evp_pkey_ctx_st* ) ;
int EVP_PKEY_CTX_get_keygen_info(struct evp_pkey_ctx_st*  ctx  , int idx);
void EVP_PKEY_meth_set_init(struct evp_pkey_method_st*  pmeth  , int (*init)(struct evp_pkey_ctx_st* ));
void EVP_PKEY_meth_set_copy(struct evp_pkey_method_st*  pmeth  , int (*copy)(struct evp_pkey_ctx_st* ,const struct evp_pkey_ctx_st* ));
void EVP_PKEY_meth_set_cleanup(struct evp_pkey_method_st*  pmeth  , void (*cleanup)(struct evp_pkey_ctx_st* ));
void EVP_PKEY_meth_set_paramgen(struct evp_pkey_method_st*  pmeth  , int (*paramgen_init)(struct evp_pkey_ctx_st* ), int (*paramgen)(struct evp_pkey_ctx_st* ,struct evp_pkey_st* ));
void EVP_PKEY_meth_set_keygen(struct evp_pkey_method_st*  pmeth  , int (*keygen_init)(struct evp_pkey_ctx_st* ), int (*keygen)(struct evp_pkey_ctx_st* ,struct evp_pkey_st* ));
void EVP_PKEY_meth_set_sign(struct evp_pkey_method_st*  pmeth  , int (*sign_init)(struct evp_pkey_ctx_st* ), int (*sign)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_set_verify(struct evp_pkey_method_st*  pmeth  , int (*verify_init)(struct evp_pkey_ctx_st* ), int (*verify)(struct evp_pkey_ctx_st* ,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_set_verify_recover(struct evp_pkey_method_st*  pmeth  , int (*verify_recover_init)(struct evp_pkey_ctx_st* ), int (*verify_recover)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_set_signctx(struct evp_pkey_method_st*  pmeth  , int (*signctx_init)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ), int (*signctx)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ,struct evp_md_ctx_st* ));
void EVP_PKEY_meth_set_verifyctx(struct evp_pkey_method_st*  pmeth  , int (*verifyctx_init)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ), int (*verifyctx)(struct evp_pkey_ctx_st* ,const unsigned char*,int,struct evp_md_ctx_st* ));
void EVP_PKEY_meth_set_encrypt(struct evp_pkey_method_st*  pmeth  , int (*encrypt_init)(struct evp_pkey_ctx_st* ), int (*encryptfn)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_set_decrypt(struct evp_pkey_method_st*  pmeth  , int (*decrypt_init)(struct evp_pkey_ctx_st* ), int (*decrypt)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_set_derive(struct evp_pkey_method_st*  pmeth  , int (*derive_init)(struct evp_pkey_ctx_st* ), int (*derive)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ));
void EVP_PKEY_meth_set_ctrl(struct evp_pkey_method_st*  pmeth  , int (*ctrl)(struct evp_pkey_ctx_st* ,int,int,void*), int (*ctrl_str)(struct evp_pkey_ctx_st* ,const char*,const char*));
void EVP_PKEY_meth_set_digestsign(struct evp_pkey_method_st*  pmeth  , int (*digestsign)(struct evp_md_ctx_st* ,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_set_digestverify(struct evp_pkey_method_st*  pmeth  , int (*digestverify)(struct evp_md_ctx_st* ,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_set_check(struct evp_pkey_method_st*  pmeth  , int (*check)(struct evp_pkey_st* ));
void EVP_PKEY_meth_set_public_check(struct evp_pkey_method_st*  pmeth  , int (*check)(struct evp_pkey_st* ));
void EVP_PKEY_meth_set_param_check(struct evp_pkey_method_st*  pmeth  , int (*check)(struct evp_pkey_st* ));
void EVP_PKEY_meth_set_digest_custom(struct evp_pkey_method_st*  pmeth  , int (*digest_custom)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ));
void EVP_PKEY_meth_get_init(const struct evp_pkey_method_st*  pmeth  , int (**pinit)(struct evp_pkey_ctx_st* ));
void EVP_PKEY_meth_get_copy(const struct evp_pkey_method_st*  pmeth  , int (**pcopy)(struct evp_pkey_ctx_st* ,const struct evp_pkey_ctx_st* ));
void EVP_PKEY_meth_get_cleanup(const struct evp_pkey_method_st*  pmeth  , void (**pcleanup)(struct evp_pkey_ctx_st* ));
void EVP_PKEY_meth_get_paramgen(const struct evp_pkey_method_st*  pmeth  , int (**pparamgen_init)(struct evp_pkey_ctx_st* ), int (**pparamgen)(struct evp_pkey_ctx_st* ,struct evp_pkey_st* ));
void EVP_PKEY_meth_get_keygen(const struct evp_pkey_method_st*  pmeth  , int (**pkeygen_init)(struct evp_pkey_ctx_st* ), int (**pkeygen)(struct evp_pkey_ctx_st* ,struct evp_pkey_st* ));
void EVP_PKEY_meth_get_sign(const struct evp_pkey_method_st*  pmeth  , int (**psign_init)(struct evp_pkey_ctx_st* ), int (**psign)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_get_verify(const struct evp_pkey_method_st*  pmeth  , int (**pverify_init)(struct evp_pkey_ctx_st* ), int (**pverify)(struct evp_pkey_ctx_st* ,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_get_verify_recover(const struct evp_pkey_method_st*  pmeth  , int (**pverify_recover_init)(struct evp_pkey_ctx_st* ), int (**pverify_recover)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_get_signctx(const struct evp_pkey_method_st*  pmeth  , int (**psignctx_init)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ), int (**psignctx)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ,struct evp_md_ctx_st* ));
void EVP_PKEY_meth_get_verifyctx(const struct evp_pkey_method_st*  pmeth  , int (**pverifyctx_init)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ), int (**pverifyctx)(struct evp_pkey_ctx_st* ,const unsigned char*,int,struct evp_md_ctx_st* ));
void EVP_PKEY_meth_get_encrypt(const struct evp_pkey_method_st*  pmeth  , int (**pencrypt_init)(struct evp_pkey_ctx_st* ), int (**pencryptfn)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_get_decrypt(const struct evp_pkey_method_st*  pmeth  , int (**pdecrypt_init)(struct evp_pkey_ctx_st* ), int (**pdecrypt)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_get_derive(const struct evp_pkey_method_st*  pmeth  , int (**pderive_init)(struct evp_pkey_ctx_st* ), int (**pderive)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long* ));
void EVP_PKEY_meth_get_ctrl(const struct evp_pkey_method_st*  pmeth  , int (**pctrl)(struct evp_pkey_ctx_st* ,int,int,void*), int (**pctrl_str)(struct evp_pkey_ctx_st* ,const char*,const char*));
void EVP_PKEY_meth_get_digestsign(const struct evp_pkey_method_st*  pmeth  , int (**digestsign)(struct evp_md_ctx_st* ,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_get_digestverify(const struct evp_pkey_method_st*  pmeth  , int (**digestverify)(struct evp_md_ctx_st* ,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ));
void EVP_PKEY_meth_get_check(const struct evp_pkey_method_st*  pmeth  , int (**pcheck)(struct evp_pkey_st* ));
void EVP_PKEY_meth_get_public_check(const struct evp_pkey_method_st*  pmeth  , int (**pcheck)(struct evp_pkey_st* ));
void EVP_PKEY_meth_get_param_check(const struct evp_pkey_method_st*  pmeth  , int (**pcheck)(struct evp_pkey_st* ));
void EVP_PKEY_meth_get_digest_custom(const struct evp_pkey_method_st*  pmeth  , int (**pdigest_custom)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ));
void EVP_KEYEXCH_free(struct evp_keyexch_st*  exchange  );
int EVP_KEYEXCH_up_ref(struct evp_keyexch_st*  exchange  );
struct evp_keyexch_st*  EVP_KEYEXCH_fetch(struct ossl_lib_ctx_st*  ctx  , const char* algorithm, const char* properties);
struct ossl_provider_st*  EVP_KEYEXCH_get0_provider(const struct evp_keyexch_st*  exchange  );
int EVP_KEYEXCH_is_a(const struct evp_keyexch_st*  keyexch  , const char* name);
const char* EVP_KEYEXCH_get0_name(const struct evp_keyexch_st*  keyexch  );
const char* EVP_KEYEXCH_get0_description(const struct evp_keyexch_st*  keyexch  );
void EVP_KEYEXCH_do_all_provided(struct ossl_lib_ctx_st*  libctx  , void (*fn)(struct evp_keyexch_st* ,void*), void* data);
int EVP_KEYEXCH_names_do_all(const struct evp_keyexch_st*  keyexch  , void (*fn)(const char*,void*), void* data);
const struct ossl_param_st*  EVP_KEYEXCH_gettable_ctx_params(const struct evp_keyexch_st*  keyexch  );
const struct ossl_param_st*  EVP_KEYEXCH_settable_ctx_params(const struct evp_keyexch_st*  keyexch  );
void EVP_add_alg_module();
int EVP_PKEY_CTX_set_group_name(struct evp_pkey_ctx_st*  ctx  , const char* name);
int EVP_PKEY_CTX_get_group_name(struct evp_pkey_ctx_st*  ctx  , char* name, unsigned long  namelen  );
int EVP_PKEY_get_group_name(const struct evp_pkey_st*  pkey  , char* name, unsigned long  name_sz  , unsigned long*  gname_len  );
struct ossl_lib_ctx_st*  EVP_PKEY_CTX_get0_libctx(struct evp_pkey_ctx_st*  ctx  );
const char* EVP_PKEY_CTX_get0_propq(const struct evp_pkey_ctx_st*  ctx  );
const struct ossl_provider_st*  EVP_PKEY_CTX_get0_provider(const struct evp_pkey_ctx_st*  ctx  );
int EVP_SKEY_is_a(const struct evp_skey_st*  skey  , const char* name);
struct evp_skey_st*  EVP_SKEY_import(struct ossl_lib_ctx_st*  libctx  , const char* skeymgmtname, const char* propquery, int selection, const struct ossl_param_st*  params  );
struct evp_skey_st*  EVP_SKEY_generate(struct ossl_lib_ctx_st*  libctx  , const char* skeymgmtname, const char* propquery, const struct ossl_param_st*  params  );
struct evp_skey_st*  EVP_SKEY_import_raw_key(struct ossl_lib_ctx_st*  libctx  , const char* skeymgmtname, unsigned char* key, unsigned long  keylen  , const char* propquery);
int EVP_SKEY_get0_raw_key(const struct evp_skey_st*  skey  , const unsigned char** key, unsigned long*  len  );
const char* EVP_SKEY_get0_key_id(const struct evp_skey_st*  skey  );
int EVP_SKEY_export(const struct evp_skey_st*  skey  , int selection, int (*(*export_cb))(const struct ossl_param_st ,void*)  , void* export_cbarg);
int EVP_SKEY_up_ref(struct evp_skey_st*  skey  );
void EVP_SKEY_free(struct evp_skey_st*  skey  );
const char* EVP_SKEY_get0_skeymgmt_name(const struct evp_skey_st*  skey  );
const char* EVP_SKEY_get0_provider_name(const struct evp_skey_st*  skey  );
struct evp_skey_st*  EVP_SKEY_to_provider(struct evp_skey_st*  skey  , struct ossl_lib_ctx_st*  libctx  , struct ossl_provider_st*  prov  , const char* propquery);
int EVP_PKEY_CTX_set_ec_paramgen_curve_nid(struct evp_pkey_ctx_st*  ctx  , int nid);
int EVP_PKEY_CTX_set_ec_param_enc(struct evp_pkey_ctx_st*  ctx  , int param_enc);
int EVP_PKEY_CTX_set_ecdh_cofactor_mode(struct evp_pkey_ctx_st*  ctx  , int cofactor_mode);
int EVP_PKEY_CTX_get_ecdh_cofactor_mode(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_CTX_set_ecdh_kdf_type(struct evp_pkey_ctx_st*  ctx  , int kdf);
int EVP_PKEY_CTX_get_ecdh_kdf_type(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_CTX_set_ecdh_kdf_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_get_ecdh_kdf_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st**  md  );
int EVP_PKEY_CTX_set_ecdh_kdf_outlen(struct evp_pkey_ctx_st*  ctx  , int len);
int EVP_PKEY_CTX_get_ecdh_kdf_outlen(struct evp_pkey_ctx_st*  ctx  , int* len);
int EVP_PKEY_CTX_set0_ecdh_kdf_ukm(struct evp_pkey_ctx_st*  ctx  , unsigned char* ukm, int len);
int EVP_PKEY_CTX_get0_ecdh_kdf_ukm(struct evp_pkey_ctx_st*  ctx  , unsigned char** ukm);
const char* OSSL_EC_curve_nid2name(int nid);
const struct ec_method_st*  EC_GFp_simple_method();
const struct ec_method_st*  EC_GFp_mont_method();
const struct ec_method_st*  EC_GFp_nist_method();
const struct ec_method_st*  EC_GFp_nistp224_method();
const struct ec_method_st*  EC_GFp_nistp256_method();
const struct ec_method_st*  EC_GFp_nistp521_method();
struct ec_group_st*  EC_GROUP_new(const struct ec_method_st*  meth  );
void EC_GROUP_clear_free(struct ec_group_st*  group  );
const struct ec_method_st*  EC_GROUP_method_of(const struct ec_group_st*  group  );
int EC_METHOD_get_field_type(const struct ec_method_st*  meth  );
void EC_GROUP_free(struct ec_group_st*  group  );
int EC_GROUP_copy(struct ec_group_st*  dst  , const struct ec_group_st*  src  );
struct ec_group_st*  EC_GROUP_dup(const struct ec_group_st*  src  );
int EC_GROUP_set_generator(struct ec_group_st*  group  , const struct ec_point_st*  generator  , const struct bignum_st*  order  , const struct bignum_st*  cofactor  );
const struct ec_point_st*  EC_GROUP_get0_generator(const struct ec_group_st*  group  );
struct bn_mont_ctx_st*  EC_GROUP_get_mont_data(const struct ec_group_st*  group  );
int EC_GROUP_get_order(const struct ec_group_st*  group  , struct bignum_st*  order  , struct bignum_ctx*  ctx  );
const struct bignum_st*  EC_GROUP_get0_order(const struct ec_group_st*  group  );
int EC_GROUP_order_bits(const struct ec_group_st*  group  );
int EC_GROUP_get_cofactor(const struct ec_group_st*  group  , struct bignum_st*  cofactor  , struct bignum_ctx*  ctx  );
const struct bignum_st*  EC_GROUP_get0_cofactor(const struct ec_group_st*  group  );
void EC_GROUP_set_curve_name(struct ec_group_st*  group  , int nid);
int EC_GROUP_get_curve_name(const struct ec_group_st*  group  );
const struct bignum_st*  EC_GROUP_get0_field(const struct ec_group_st*  group  );
int EC_GROUP_get_field_type(const struct ec_group_st*  group  );
void EC_GROUP_set_asn1_flag(struct ec_group_st*  group  , int flag);
int EC_GROUP_get_asn1_flag(const struct ec_group_st*  group  );
void EC_GROUP_set_point_conversion_form(struct ec_group_st*  group  , enum anonymous_typeY107  form  );
enum anonymous_typeY107  EC_GROUP_get_point_conversion_form(const struct ec_group_st*    );
unsigned char* EC_GROUP_get0_seed(const struct ec_group_st*  x  );
unsigned long  EC_GROUP_get_seed_len(const struct ec_group_st*    );
unsigned long  EC_GROUP_set_seed(struct ec_group_st*    , const unsigned char* , unsigned long  len  );
int EC_GROUP_set_curve(struct ec_group_st*  group  , const struct bignum_st*  p  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int EC_GROUP_get_curve(const struct ec_group_st*  group  , struct bignum_st*  p  , struct bignum_st*  a  , struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int EC_GROUP_set_curve_GFp(struct ec_group_st*  group  , const struct bignum_st*  p  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int EC_GROUP_get_curve_GFp(const struct ec_group_st*  group  , struct bignum_st*  p  , struct bignum_st*  a  , struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int EC_GROUP_get_degree(const struct ec_group_st*  group  );
int EC_GROUP_check(const struct ec_group_st*  group  , struct bignum_ctx*  ctx  );
int EC_GROUP_check_discriminant(const struct ec_group_st*  group  , struct bignum_ctx*  ctx  );
int EC_GROUP_cmp(const struct ec_group_st*  a  , const struct ec_group_st*  b  , struct bignum_ctx*  ctx  );
struct ec_group_st*  EC_GROUP_new_curve_GFp(const struct bignum_st*  p  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
struct ec_group_st*  EC_GROUP_new_from_params(const struct ossl_param_st  params[]  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct ossl_param_st*  EC_GROUP_to_params(const struct ec_group_st*  group  , struct ossl_lib_ctx_st*  libctx  , const char* propq, struct bignum_ctx*  bnctx  );
struct ec_group_st*  EC_GROUP_new_by_curve_name_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq, int nid);
struct ec_group_st*  EC_GROUP_new_by_curve_name(int nid);
struct ec_group_st*  EC_GROUP_new_from_ecparameters(const struct ec_parameters_st*  params  );
struct ec_parameters_st*  EC_GROUP_get_ecparameters(const struct ec_group_st*  group  , struct ec_parameters_st*  params  );
struct ec_group_st*  EC_GROUP_new_from_ecpkparameters(const struct ecpk_parameters_st*  params  );
struct ecpk_parameters_st*  EC_GROUP_get_ecpkparameters(const struct ec_group_st*  group  , struct ecpk_parameters_st*  params  );
unsigned long  EC_get_builtin_curves(struct anonymous_typeX108*  r  , unsigned long  nitems  );
const char* EC_curve_nid2nist(int nid);
int EC_curve_nist2nid(const char* name);
int EC_GROUP_check_named_curve(const struct ec_group_st*  group  , int nist_only, struct bignum_ctx*  ctx  );
struct ec_point_st*  EC_POINT_new(const struct ec_group_st*  group  );
void EC_POINT_free(struct ec_point_st*  point  );
void EC_POINT_clear_free(struct ec_point_st*  point  );
int EC_POINT_copy(struct ec_point_st*  dst  , const struct ec_point_st*  src  );
struct ec_point_st*  EC_POINT_dup(const struct ec_point_st*  src  , const struct ec_group_st*  group  );
int EC_POINT_set_to_infinity(const struct ec_group_st*  group  , struct ec_point_st*  point  );
const struct ec_method_st*  EC_POINT_method_of(const struct ec_point_st*  point  );
int EC_POINT_set_Jprojective_coordinates_GFp(const struct ec_group_st*  group  , struct ec_point_st*  p  , const struct bignum_st*  x  , const struct bignum_st*  y  , const struct bignum_st*  z  , struct bignum_ctx*  ctx  );
int EC_POINT_get_Jprojective_coordinates_GFp(const struct ec_group_st*  group  , const struct ec_point_st*  p  , struct bignum_st*  x  , struct bignum_st*  y  , struct bignum_st*  z  , struct bignum_ctx*  ctx  );
int EC_POINT_set_affine_coordinates(const struct ec_group_st*  group  , struct ec_point_st*  p  , const struct bignum_st*  x  , const struct bignum_st*  y  , struct bignum_ctx*  ctx  );
int EC_POINT_get_affine_coordinates(const struct ec_group_st*  group  , const struct ec_point_st*  p  , struct bignum_st*  x  , struct bignum_st*  y  , struct bignum_ctx*  ctx  );
int EC_POINT_set_affine_coordinates_GFp(const struct ec_group_st*  group  , struct ec_point_st*  p  , const struct bignum_st*  x  , const struct bignum_st*  y  , struct bignum_ctx*  ctx  );
int EC_POINT_get_affine_coordinates_GFp(const struct ec_group_st*  group  , const struct ec_point_st*  p  , struct bignum_st*  x  , struct bignum_st*  y  , struct bignum_ctx*  ctx  );
int EC_POINT_set_compressed_coordinates(const struct ec_group_st*  group  , struct ec_point_st*  p  , const struct bignum_st*  x  , int y_bit, struct bignum_ctx*  ctx  );
int EC_POINT_set_compressed_coordinates_GFp(const struct ec_group_st*  group  , struct ec_point_st*  p  , const struct bignum_st*  x  , int y_bit, struct bignum_ctx*  ctx  );
unsigned long  EC_POINT_point2oct(const struct ec_group_st*  group  , const struct ec_point_st*  p  , enum anonymous_typeY107  form  , unsigned char* buf, unsigned long  len  , struct bignum_ctx*  ctx  );
int EC_POINT_oct2point(const struct ec_group_st*  group  , struct ec_point_st*  p  , const unsigned char* buf, unsigned long  len  , struct bignum_ctx*  ctx  );
unsigned long  EC_POINT_point2buf(const struct ec_group_st*  group  , const struct ec_point_st*  point  , enum anonymous_typeY107  form  , unsigned char** pbuf, struct bignum_ctx*  ctx  );
struct bignum_st*  EC_POINT_point2bn(const struct ec_group_st*    , const struct ec_point_st*    , enum anonymous_typeY107  form  , struct bignum_st*    , struct bignum_ctx*    );
struct ec_point_st*  EC_POINT_bn2point(const struct ec_group_st*    , const struct bignum_st*    , struct ec_point_st*    , struct bignum_ctx*    );
char* EC_POINT_point2hex(const struct ec_group_st*    , const struct ec_point_st*    , enum anonymous_typeY107  form  , struct bignum_ctx*    );
struct ec_point_st*  EC_POINT_hex2point(const struct ec_group_st*    , const char* , struct ec_point_st*    , struct bignum_ctx*    );
int EC_POINT_add(const struct ec_group_st*  group  , struct ec_point_st*  r  , const struct ec_point_st*  a  , const struct ec_point_st*  b  , struct bignum_ctx*  ctx  );
int EC_POINT_dbl(const struct ec_group_st*  group  , struct ec_point_st*  r  , const struct ec_point_st*  a  , struct bignum_ctx*  ctx  );
int EC_POINT_invert(const struct ec_group_st*  group  , struct ec_point_st*  a  , struct bignum_ctx*  ctx  );
int EC_POINT_is_at_infinity(const struct ec_group_st*  group  , const struct ec_point_st*  p  );
int EC_POINT_is_on_curve(const struct ec_group_st*  group  , const struct ec_point_st*  point  , struct bignum_ctx*  ctx  );
int EC_POINT_cmp(const struct ec_group_st*  group  , const struct ec_point_st*  a  , const struct ec_point_st*  b  , struct bignum_ctx*  ctx  );
int EC_POINT_make_affine(const struct ec_group_st*  group  , struct ec_point_st*  point  , struct bignum_ctx*  ctx  );
int EC_POINTs_make_affine(const struct ec_group_st*  group  , unsigned long  num  , struct ec_point_st*  points[]  , struct bignum_ctx*  ctx  );
int EC_POINTs_mul(const struct ec_group_st*  group  , struct ec_point_st*  r  , const struct bignum_st*  n  , unsigned long  num  , const struct ec_point_st*  p[]  , const struct bignum_st*  m[]  , struct bignum_ctx*  ctx  );
int EC_POINT_mul(const struct ec_group_st*  group  , struct ec_point_st*  r  , const struct bignum_st*  n  , const struct ec_point_st*  q  , const struct bignum_st*  m  , struct bignum_ctx*  ctx  );
int EC_GROUP_precompute_mult(struct ec_group_st*  group  , struct bignum_ctx*  ctx  );
int EC_GROUP_have_precompute_mult(const struct ec_group_st*  group  );
const struct ASN1_ITEM_st*  ECPKPARAMETERS_it();
struct ecpk_parameters_st*  ECPKPARAMETERS_new();
void ECPKPARAMETERS_free(struct ecpk_parameters_st*  a  );
const struct ASN1_ITEM_st*  ECPARAMETERS_it();
struct ec_parameters_st*  ECPARAMETERS_new();
void ECPARAMETERS_free(struct ec_parameters_st*  a  );
int EC_GROUP_get_basis_type(const struct ec_group_st*    );
struct ec_group_st*  d2i_ECPKParameters(struct ec_group_st**    , const unsigned char** in, long len);
int i2d_ECPKParameters(const struct ec_group_st*    , unsigned char** out);
int ECPKParameters_print(struct bio_st*  bp  , const struct ec_group_st*  x  , int off);
int ECPKParameters_print_fp(struct _IO_FILE*  fp  , const struct ec_group_st*  x  , int off);
struct ec_key_st*  EC_KEY_new_ex(struct ossl_lib_ctx_st*  ctx  , const char* propq);
struct ec_key_st*  EC_KEY_new();
int EC_KEY_get_flags(const struct ec_key_st*  key  );
void EC_KEY_set_flags(struct ec_key_st*  key  , int flags);
void EC_KEY_clear_flags(struct ec_key_st*  key  , int flags);
int EC_KEY_decoded_from_explicit_params(const struct ec_key_st*  key  );
struct ec_key_st*  EC_KEY_new_by_curve_name_ex(struct ossl_lib_ctx_st*  ctx  , const char* propq, int nid);
struct ec_key_st*  EC_KEY_new_by_curve_name(int nid);
void EC_KEY_free(struct ec_key_st*  key  );
struct ec_key_st*  EC_KEY_copy(struct ec_key_st*  dst  , const struct ec_key_st*  src  );
struct ec_key_st*  EC_KEY_dup(const struct ec_key_st*  src  );
int EC_KEY_up_ref(struct ec_key_st*  key  );
struct engine_st*  EC_KEY_get0_engine(const struct ec_key_st*  eckey  );
const struct ec_group_st*  EC_KEY_get0_group(const struct ec_key_st*  key  );
int EC_KEY_set_group(struct ec_key_st*  key  , const struct ec_group_st*  group  );
const struct bignum_st*  EC_KEY_get0_private_key(const struct ec_key_st*  key  );
int EC_KEY_set_private_key(struct ec_key_st*  key  , const struct bignum_st*  prv  );
const struct ec_point_st*  EC_KEY_get0_public_key(const struct ec_key_st*  key  );
int EC_KEY_set_public_key(struct ec_key_st*  key  , const struct ec_point_st*  pub  );
unsigned int EC_KEY_get_enc_flags(const struct ec_key_st*  key  );
void EC_KEY_set_enc_flags(struct ec_key_st*  eckey  , unsigned int flags);
enum anonymous_typeY107  EC_KEY_get_conv_form(const struct ec_key_st*  key  );
void EC_KEY_set_conv_form(struct ec_key_st*  eckey  , enum anonymous_typeY107  cform  );
int EC_KEY_set_ex_data(struct ec_key_st*  key  , int idx, void* arg);
void* EC_KEY_get_ex_data(const struct ec_key_st*  key  , int idx);
void EC_KEY_set_asn1_flag(struct ec_key_st*  eckey  , int asn1_flag);
int EC_KEY_precompute_mult(struct ec_key_st*  key  , struct bignum_ctx*  ctx  );
int EC_KEY_generate_key(struct ec_key_st*  key  );
int EC_KEY_check_key(const struct ec_key_st*  key  );
int EC_KEY_can_sign(const struct ec_key_st*  eckey  );
int EC_KEY_set_public_key_affine_coordinates(struct ec_key_st*  key  , struct bignum_st*  x  , struct bignum_st*  y  );
unsigned long  EC_KEY_key2buf(const struct ec_key_st*  key  , enum anonymous_typeY107  form  , unsigned char** pbuf, struct bignum_ctx*  ctx  );
int EC_KEY_oct2key(struct ec_key_st*  key  , const unsigned char* buf, unsigned long  len  , struct bignum_ctx*  ctx  );
int EC_KEY_oct2priv(struct ec_key_st*  key  , const unsigned char* buf, unsigned long  len  );
unsigned long  EC_KEY_priv2oct(const struct ec_key_st*  key  , unsigned char* buf, unsigned long  len  );
unsigned long  EC_KEY_priv2buf(const struct ec_key_st*  eckey  , unsigned char** pbuf);
struct ec_key_st*  d2i_ECPrivateKey(struct ec_key_st**  key  , const unsigned char** in, long len);
int i2d_ECPrivateKey(const struct ec_key_st*  key  , unsigned char** out);
struct ec_key_st*  d2i_ECParameters(struct ec_key_st**  key  , const unsigned char** in, long len);
int i2d_ECParameters(const struct ec_key_st*  key  , unsigned char** out);
struct ec_key_st*  o2i_ECPublicKey(struct ec_key_st**  key  , const unsigned char** in, long len);
int i2o_ECPublicKey(const struct ec_key_st*  key  , unsigned char** out);
int ECParameters_print(struct bio_st*  bp  , const struct ec_key_st*  key  );
int EC_KEY_print(struct bio_st*  bp  , const struct ec_key_st*  key  , int off);
int ECParameters_print_fp(struct _IO_FILE*  fp  , const struct ec_key_st*  key  );
int EC_KEY_print_fp(struct _IO_FILE*  fp  , const struct ec_key_st*  key  , int off);
const struct ec_key_method_st*  EC_KEY_OpenSSL();
const struct ec_key_method_st*  EC_KEY_get_default_method();
void EC_KEY_set_default_method(const struct ec_key_method_st*  meth  );
const struct ec_key_method_st*  EC_KEY_get_method(const struct ec_key_st*  key  );
int EC_KEY_set_method(struct ec_key_st*  key  , const struct ec_key_method_st*  meth  );
struct ec_key_st*  EC_KEY_new_method(struct engine_st*  engine  );
int ECDH_KDF_X9_62(unsigned char* out, unsigned long  outlen  , const unsigned char* Z, unsigned long  Zlen  , const unsigned char* sinfo, unsigned long  sinfolen  , const struct evp_md_st*  md  );
int ECDH_compute_key(void* out, unsigned long  outlen  , const struct ec_point_st*  pub_key  , const struct ec_key_st*  ecdh  , void* (*KDF)(const void*,unsigned long ,void*,unsigned long* ));
struct ECDSA_SIG_st*  ECDSA_SIG_new();
void ECDSA_SIG_free(struct ECDSA_SIG_st*  sig  );
struct ECDSA_SIG_st*  d2i_ECDSA_SIG(struct ECDSA_SIG_st**  a  , const unsigned char** in, long len);
int i2d_ECDSA_SIG(const struct ECDSA_SIG_st*  a  , unsigned char** out);
void ECDSA_SIG_get0(const struct ECDSA_SIG_st*  sig  , const struct bignum_st**  pr  , const struct bignum_st**  ps  );
const struct bignum_st*  ECDSA_SIG_get0_r(const struct ECDSA_SIG_st*  sig  );
const struct bignum_st*  ECDSA_SIG_get0_s(const struct ECDSA_SIG_st*  sig  );
int ECDSA_SIG_set0(struct ECDSA_SIG_st*  sig  , struct bignum_st*  r  , struct bignum_st*  s  );
struct ECDSA_SIG_st*  ECDSA_do_sign(const unsigned char* dgst, int dgst_len, struct ec_key_st*  eckey  );
struct ECDSA_SIG_st*  ECDSA_do_sign_ex(const unsigned char* dgst, int dgstlen, const struct bignum_st*  kinv  , const struct bignum_st*  rp  , struct ec_key_st*  eckey  );
int ECDSA_do_verify(const unsigned char* dgst, int dgst_len, const struct ECDSA_SIG_st*  sig  , struct ec_key_st*  eckey  );
int ECDSA_sign_setup(struct ec_key_st*  eckey  , struct bignum_ctx*  ctx  , struct bignum_st**  kinv  , struct bignum_st**  rp  );
int ECDSA_sign(int type, const unsigned char* dgst, int dgstlen, unsigned char* sig, unsigned int* siglen, struct ec_key_st*  eckey  );
int ECDSA_sign_ex(int type, const unsigned char* dgst, int dgstlen, unsigned char* sig, unsigned int* siglen, const struct bignum_st*  kinv  , const struct bignum_st*  rp  , struct ec_key_st*  eckey  );
int ECDSA_verify(int type, const unsigned char* dgst, int dgstlen, const unsigned char* sig, int siglen, struct ec_key_st*  eckey  );
int ECDSA_size(const struct ec_key_st*  eckey  );
struct ec_key_method_st*  EC_KEY_METHOD_new(const struct ec_key_method_st*  meth  );
void EC_KEY_METHOD_free(struct ec_key_method_st*  meth  );
void EC_KEY_METHOD_set_init(struct ec_key_method_st*  meth  , int (*init)(struct ec_key_st* ), void (*finish)(struct ec_key_st* ), int (*copy)(struct ec_key_st* ,const struct ec_key_st* ), int (*set_group)(struct ec_key_st* ,const struct ec_group_st* ), int (*set_private)(struct ec_key_st* ,const struct bignum_st* ), int (*set_public)(struct ec_key_st* ,const struct ec_point_st* ));
void EC_KEY_METHOD_set_keygen(struct ec_key_method_st*  meth  , int (*keygen)(struct ec_key_st* ));
void EC_KEY_METHOD_set_compute_key(struct ec_key_method_st*  meth  , int (*ckey)(unsigned char**,unsigned long* ,const struct ec_point_st* ,const struct ec_key_st* ));
void EC_KEY_METHOD_set_sign(struct ec_key_method_st*  meth  , int (*sign)(int,const unsigned char*,int,unsigned char*,unsigned int*,const struct bignum_st* ,const struct bignum_st* ,struct ec_key_st* ), int (*sign_setup)(struct ec_key_st* ,struct bignum_ctx* ,struct bignum_st** ,struct bignum_st** ), struct ECDSA_SIG_st* (*sign_sig)(const unsigned char*,int,const struct bignum_st* ,const struct bignum_st* ,struct ec_key_st* ));
void EC_KEY_METHOD_set_verify(struct ec_key_method_st*  meth  , int (*verify)(int,const unsigned char*,int,const unsigned char*,int,struct ec_key_st* ), int (*verify_sig)(const unsigned char*,int,const struct ECDSA_SIG_st* ,struct ec_key_st* ));
void EC_KEY_METHOD_get_init(const struct ec_key_method_st*  meth  , int (**pinit)(struct ec_key_st* ), void (**pfinish)(struct ec_key_st* ), int (**pcopy)(struct ec_key_st* ,const struct ec_key_st* ), int (**pset_group)(struct ec_key_st* ,const struct ec_group_st* ), int (**pset_private)(struct ec_key_st* ,const struct bignum_st* ), int (**pset_public)(struct ec_key_st* ,const struct ec_point_st* ));
void EC_KEY_METHOD_get_keygen(const struct ec_key_method_st*  meth  , int (**pkeygen)(struct ec_key_st* ));
void EC_KEY_METHOD_get_compute_key(const struct ec_key_method_st*  meth  , int (**pck)(unsigned char**,unsigned long* ,const struct ec_point_st* ,const struct ec_key_st* ));
void EC_KEY_METHOD_get_sign(const struct ec_key_method_st*  meth  , int (**psign)(int,const unsigned char*,int,unsigned char*,unsigned int*,const struct bignum_st* ,const struct bignum_st* ,struct ec_key_st* ), int (**psign_setup)(struct ec_key_st* ,struct bignum_ctx* ,struct bignum_st** ,struct bignum_st** ), struct ECDSA_SIG_st* (**psign_sig)(const unsigned char*,int,const struct bignum_st* ,const struct bignum_st* ,struct ec_key_st* ));
void EC_KEY_METHOD_get_verify(const struct ec_key_method_st*  meth  , int (**pverify)(int,const unsigned char*,int,const unsigned char*,int,struct ec_key_st* ), int (**pverify_sig)(const unsigned char*,int,const struct ECDSA_SIG_st* ,struct ec_key_st* ));
int EVP_PKEY_CTX_set_rsa_padding(struct evp_pkey_ctx_st*  ctx  , int pad_mode);
int EVP_PKEY_CTX_get_rsa_padding(struct evp_pkey_ctx_st*  ctx  , int* pad_mode);
int EVP_PKEY_CTX_set_rsa_pss_saltlen(struct evp_pkey_ctx_st*  ctx  , int saltlen);
int EVP_PKEY_CTX_get_rsa_pss_saltlen(struct evp_pkey_ctx_st*  ctx  , int* saltlen);
int EVP_PKEY_CTX_set_rsa_keygen_bits(struct evp_pkey_ctx_st*  ctx  , int bits);
int EVP_PKEY_CTX_set1_rsa_keygen_pubexp(struct evp_pkey_ctx_st*  ctx  , struct bignum_st*  pubexp  );
int EVP_PKEY_CTX_set_rsa_keygen_primes(struct evp_pkey_ctx_st*  ctx  , int primes);
int EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(struct evp_pkey_ctx_st*  ctx  , int saltlen);
int EVP_PKEY_CTX_set_rsa_keygen_pubexp(struct evp_pkey_ctx_st*  ctx  , struct bignum_st*  pubexp  );
int EVP_PKEY_CTX_set_rsa_mgf1_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_set_rsa_mgf1_md_name(struct evp_pkey_ctx_st*  ctx  , const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_get_rsa_mgf1_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st**  md  );
int EVP_PKEY_CTX_get_rsa_mgf1_md_name(struct evp_pkey_ctx_st*  ctx  , char* name, unsigned long  namelen  );
int EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(struct evp_pkey_ctx_st*  ctx  , const char* mdname);
int EVP_PKEY_CTX_set_rsa_pss_keygen_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(struct evp_pkey_ctx_st*  ctx  , const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_set_rsa_oaep_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_set_rsa_oaep_md_name(struct evp_pkey_ctx_st*  ctx  , const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_get_rsa_oaep_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st**  md  );
int EVP_PKEY_CTX_get_rsa_oaep_md_name(struct evp_pkey_ctx_st*  ctx  , char* name, unsigned long  namelen  );
int EVP_PKEY_CTX_set0_rsa_oaep_label(struct evp_pkey_ctx_st*  ctx  , void* label, int llen);
int EVP_PKEY_CTX_get0_rsa_oaep_label(struct evp_pkey_ctx_st*  ctx  , unsigned char** label);
struct rsa_st*  RSA_new();
struct rsa_st*  RSA_new_method(struct engine_st*  engine  );
int RSA_bits(const struct rsa_st*  rsa  );
int RSA_size(const struct rsa_st*  rsa  );
int RSA_security_bits(const struct rsa_st*  rsa  );
int RSA_set0_key(struct rsa_st*  r  , struct bignum_st*  n  , struct bignum_st*  e  , struct bignum_st*  d  );
int RSA_set0_factors(struct rsa_st*  r  , struct bignum_st*  p  , struct bignum_st*  q  );
int RSA_set0_crt_params(struct rsa_st*  r  , struct bignum_st*  dmp1  , struct bignum_st*  dmq1  , struct bignum_st*  iqmp  );
int RSA_set0_multi_prime_params(struct rsa_st*  r  , struct bignum_st*  primes[]  , struct bignum_st*  exps[]  , struct bignum_st*  coeffs[]  , int pnum);
void RSA_get0_key(const struct rsa_st*  r  , const struct bignum_st**  n  , const struct bignum_st**  e  , const struct bignum_st**  d  );
void RSA_get0_factors(const struct rsa_st*  r  , const struct bignum_st**  p  , const struct bignum_st**  q  );
int RSA_get_multi_prime_extra_count(const struct rsa_st*  r  );
int RSA_get0_multi_prime_factors(const struct rsa_st*  r  , const struct bignum_st*  primes[]  );
void RSA_get0_crt_params(const struct rsa_st*  r  , const struct bignum_st**  dmp1  , const struct bignum_st**  dmq1  , const struct bignum_st**  iqmp  );
int RSA_get0_multi_prime_crt_params(const struct rsa_st*  r  , const struct bignum_st*  exps[]  , const struct bignum_st*  coeffs[]  );
const struct bignum_st*  RSA_get0_n(const struct rsa_st*  d  );
const struct bignum_st*  RSA_get0_e(const struct rsa_st*  d  );
const struct bignum_st*  RSA_get0_d(const struct rsa_st*  d  );
const struct bignum_st*  RSA_get0_p(const struct rsa_st*  d  );
const struct bignum_st*  RSA_get0_q(const struct rsa_st*  d  );
const struct bignum_st*  RSA_get0_dmp1(const struct rsa_st*  r  );
const struct bignum_st*  RSA_get0_dmq1(const struct rsa_st*  r  );
const struct bignum_st*  RSA_get0_iqmp(const struct rsa_st*  r  );
const struct rsa_pss_params_st*  RSA_get0_pss_params(const struct rsa_st*  r  );
void RSA_clear_flags(struct rsa_st*  r  , int flags);
int RSA_test_flags(const struct rsa_st*  r  , int flags);
void RSA_set_flags(struct rsa_st*  r  , int flags);
int RSA_get_version(struct rsa_st*  r  );
struct engine_st*  RSA_get0_engine(const struct rsa_st*  r  );
struct rsa_st*  RSA_generate_key(int bits, unsigned long  int e, void (*callback)(int,int,void*), void* cb_arg);
int RSA_generate_key_ex(struct rsa_st*  rsa  , int bits, struct bignum_st*  e  , struct bn_gencb_st*  cb  );
int RSA_generate_multi_prime_key(struct rsa_st*  rsa  , int bits, int primes, struct bignum_st*  e  , struct bn_gencb_st*  cb  );
int RSA_X931_derive_ex(struct rsa_st*  rsa  , struct bignum_st*  p1  , struct bignum_st*  p2  , struct bignum_st*  q1  , struct bignum_st*  q2  , const struct bignum_st*  Xp1  , const struct bignum_st*  Xp2  , const struct bignum_st*  Xp  , const struct bignum_st*  Xq1  , const struct bignum_st*  Xq2  , const struct bignum_st*  Xq  , const struct bignum_st*  e  , struct bn_gencb_st*  cb  );
int RSA_X931_generate_key_ex(struct rsa_st*  rsa  , int bits, const struct bignum_st*  e  , struct bn_gencb_st*  cb  );
int RSA_check_key(const struct rsa_st*    );
int RSA_check_key_ex(const struct rsa_st*    , struct bn_gencb_st*  cb  );
int RSA_public_encrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st*  rsa  , int padding);
int RSA_private_encrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st*  rsa  , int padding);
int RSA_public_decrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st*  rsa  , int padding);
int RSA_private_decrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st*  rsa  , int padding);
void RSA_free(struct rsa_st*  r  );
int RSA_up_ref(struct rsa_st*  r  );
int RSA_flags(const struct rsa_st*  r  );
void RSA_set_default_method(const struct rsa_meth_st*  meth  );
const struct rsa_meth_st*  RSA_get_default_method();
const struct rsa_meth_st*  RSA_null_method();
const struct rsa_meth_st*  RSA_get_method(const struct rsa_st*  rsa  );
int RSA_set_method(struct rsa_st*  rsa  , const struct rsa_meth_st*  meth  );
const struct rsa_meth_st*  RSA_PKCS1_OpenSSL();
struct rsa_st*  d2i_RSAPublicKey(struct rsa_st**  a  , const unsigned char** in, long len);
int i2d_RSAPublicKey(const struct rsa_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  RSAPublicKey_it();
struct rsa_st*  d2i_RSAPrivateKey(struct rsa_st**  a  , const unsigned char** in, long len);
int i2d_RSAPrivateKey(const struct rsa_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  RSAPrivateKey_it();
int RSA_pkey_ctx_ctrl(struct evp_pkey_ctx_st*  ctx  , int optype, int cmd, int p1, void* p2);
struct rsa_pss_params_st*  RSA_PSS_PARAMS_new();
void RSA_PSS_PARAMS_free(struct rsa_pss_params_st*  a  );
struct rsa_pss_params_st*  d2i_RSA_PSS_PARAMS(struct rsa_pss_params_st**  a  , const unsigned char** in, long len);
int i2d_RSA_PSS_PARAMS(const struct rsa_pss_params_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  RSA_PSS_PARAMS_it();
struct rsa_pss_params_st*  RSA_PSS_PARAMS_dup(const struct rsa_pss_params_st*  a  );
struct rsa_oaep_params_st*  RSA_OAEP_PARAMS_new();
void RSA_OAEP_PARAMS_free(struct rsa_oaep_params_st*  a  );
struct rsa_oaep_params_st*  d2i_RSA_OAEP_PARAMS(struct rsa_oaep_params_st**  a  , const unsigned char** in, long len);
int i2d_RSA_OAEP_PARAMS(const struct rsa_oaep_params_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  RSA_OAEP_PARAMS_it();
int RSA_print_fp(struct _IO_FILE*  fp  , const struct rsa_st*  r  , int offset);
int RSA_print(struct bio_st*  bp  , const struct rsa_st*  r  , int offset);
int RSA_sign(int type, const unsigned char* m, unsigned int m_length, unsigned char* sigret, unsigned int* siglen, struct rsa_st*  rsa  );
int RSA_verify(int type, const unsigned char* m, unsigned int m_length, const unsigned char* sigbuf, unsigned int siglen, struct rsa_st*  rsa  );
int RSA_sign_ASN1_OCTET_STRING(int type, const unsigned char* m, unsigned int m_length, unsigned char* sigret, unsigned int* siglen, struct rsa_st*  rsa  );
int RSA_verify_ASN1_OCTET_STRING(int type, const unsigned char* m, unsigned int m_length, unsigned char* sigbuf, unsigned int siglen, struct rsa_st*  rsa  );
int RSA_blinding_on(struct rsa_st*  rsa  , struct bignum_ctx*  ctx  );
void RSA_blinding_off(struct rsa_st*  rsa  );
struct bn_blinding_st*  RSA_setup_blinding(struct rsa_st*  rsa  , struct bignum_ctx*  ctx  );
int RSA_padding_add_PKCS1_type_1(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_PKCS1_type_1(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int RSA_padding_add_PKCS1_type_2(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_PKCS1_type_2(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int PKCS1_MGF1(unsigned char* mask, long len, const unsigned char* seed, long seedlen, const struct evp_md_st*  dgst  );
int RSA_padding_add_PKCS1_OAEP(unsigned char* to, int tlen, const unsigned char* f, int fl, const unsigned char* p, int pl);
int RSA_padding_check_PKCS1_OAEP(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len, const unsigned char* p, int pl);
int RSA_padding_add_PKCS1_OAEP_mgf1(unsigned char* to, int tlen, const unsigned char* from, int flen, const unsigned char* param, int plen, const struct evp_md_st*  md  , const struct evp_md_st*  mgf1md  );
int RSA_padding_check_PKCS1_OAEP_mgf1(unsigned char* to, int tlen, const unsigned char* from, int flen, int num, const unsigned char* param, int plen, const struct evp_md_st*  md  , const struct evp_md_st*  mgf1md  );
int RSA_padding_add_none(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_none(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int RSA_padding_add_X931(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_X931(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int RSA_X931_hash_id(int nid);
int RSA_verify_PKCS1_PSS(struct rsa_st*  rsa  , const unsigned char* mHash, const struct evp_md_st*  Hash  , const unsigned char* EM, int sLen);
int RSA_padding_add_PKCS1_PSS(struct rsa_st*  rsa  , unsigned char* EM, const unsigned char* mHash, const struct evp_md_st*  Hash  , int sLen);
int RSA_verify_PKCS1_PSS_mgf1(struct rsa_st*  rsa  , const unsigned char* mHash, const struct evp_md_st*  Hash  , const struct evp_md_st*  mgf1Hash  , const unsigned char* EM, int sLen);
int RSA_padding_add_PKCS1_PSS_mgf1(struct rsa_st*  rsa  , unsigned char* EM, const unsigned char* mHash, const struct evp_md_st*  Hash  , const struct evp_md_st*  mgf1Hash  , int sLen);
int RSA_set_ex_data(struct rsa_st*  r  , int idx, void* arg);
void* RSA_get_ex_data(const struct rsa_st*  r  , int idx);
struct rsa_st*  RSAPublicKey_dup(const struct rsa_st*  a  );
struct rsa_st*  RSAPrivateKey_dup(const struct rsa_st*  a  );
struct rsa_meth_st*  RSA_meth_new(const char* name, int flags);
void RSA_meth_free(struct rsa_meth_st*  meth  );
struct rsa_meth_st*  RSA_meth_dup(const struct rsa_meth_st*  meth  );
const char* RSA_meth_get0_name(const struct rsa_meth_st*  meth  );
int RSA_meth_set1_name(struct rsa_meth_st*  meth  , const char* name);
int RSA_meth_get_flags(const struct rsa_meth_st*  meth  );
int RSA_meth_set_flags(struct rsa_meth_st*  meth  , int flags);
void* RSA_meth_get0_app_data(const struct rsa_meth_st*  meth  );
int RSA_meth_set0_app_data(struct rsa_meth_st*  meth  , void* app_data);
int (*RSA_meth_get_pub_enc(const struct rsa_meth_st*  _function_pointer_result_var_name_a27  ))(int,const unsigned char*,unsigned char*,struct rsa_st* ,int);
int RSA_meth_set_pub_enc(struct rsa_meth_st*  rsa  , int (*pub_enc)(int,const unsigned char*,unsigned char*,struct rsa_st* ,int));
int (*RSA_meth_get_pub_dec(const struct rsa_meth_st*  _function_pointer_result_var_name_a28  ))(int,const unsigned char*,unsigned char*,struct rsa_st* ,int);
int RSA_meth_set_pub_dec(struct rsa_meth_st*  rsa  , int (*pub_dec)(int,const unsigned char*,unsigned char*,struct rsa_st* ,int));
int (*RSA_meth_get_priv_enc(const struct rsa_meth_st*  _function_pointer_result_var_name_a29  ))(int,const unsigned char*,unsigned char*,struct rsa_st* ,int);
int RSA_meth_set_priv_enc(struct rsa_meth_st*  rsa  , int (*priv_enc)(int,const unsigned char*,unsigned char*,struct rsa_st* ,int));
int (*RSA_meth_get_priv_dec(const struct rsa_meth_st*  _function_pointer_result_var_name_a30  ))(int,const unsigned char*,unsigned char*,struct rsa_st* ,int);
int RSA_meth_set_priv_dec(struct rsa_meth_st*  rsa  , int (*priv_dec)(int,const unsigned char*,unsigned char*,struct rsa_st* ,int));
int (*RSA_meth_get_mod_exp(const struct rsa_meth_st*  _function_pointer_result_var_name_a31  ))(struct bignum_st* ,const struct bignum_st* ,struct rsa_st* ,struct bignum_ctx* );
int RSA_meth_set_mod_exp(struct rsa_meth_st*  rsa  , int (*mod_exp)(struct bignum_st* ,const struct bignum_st* ,struct rsa_st* ,struct bignum_ctx* ));
int (*RSA_meth_get_bn_mod_exp(const struct rsa_meth_st*  _function_pointer_result_var_name_a32  ))(struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* );
int RSA_meth_set_bn_mod_exp(struct rsa_meth_st*  rsa  , int (*bn_mod_exp)(struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* ));
int (*RSA_meth_get_init(const struct rsa_meth_st*  _function_pointer_result_var_name_a33  ))(struct rsa_st* );
int RSA_meth_set_init(struct rsa_meth_st*  rsa  , int (*init)(struct rsa_st* ));
int (*RSA_meth_get_finish(const struct rsa_meth_st*  _function_pointer_result_var_name_a34  ))(struct rsa_st* );
int RSA_meth_set_finish(struct rsa_meth_st*  rsa  , int (*finish)(struct rsa_st* ));
int (*RSA_meth_get_sign(const struct rsa_meth_st*  _function_pointer_result_var_name_a35  ))(int,const unsigned char*,unsigned int,unsigned char*,unsigned int*,const struct rsa_st* );
int RSA_meth_set_sign(struct rsa_meth_st*  rsa  , int (*sign)(int,const unsigned char*,unsigned int,unsigned char*,unsigned int*,const struct rsa_st* ));
int (*RSA_meth_get_verify(const struct rsa_meth_st*  _function_pointer_result_var_name_a36  ))(int,const unsigned char*,unsigned int,const unsigned char*,unsigned int,const struct rsa_st* );
int RSA_meth_set_verify(struct rsa_meth_st*  rsa  , int (*verify)(int,const unsigned char*,unsigned int,const unsigned char*,unsigned int,const struct rsa_st* ));
int (*RSA_meth_get_keygen(const struct rsa_meth_st*  _function_pointer_result_var_name_a37  ))(struct rsa_st* ,int,struct bignum_st* ,struct bn_gencb_st* );
int RSA_meth_set_keygen(struct rsa_meth_st*  rsa  , int (*keygen)(struct rsa_st* ,int,struct bignum_st* ,struct bn_gencb_st* ));
int (*RSA_meth_get_multi_prime_keygen(const struct rsa_meth_st*  _function_pointer_result_var_name_a38  ))(struct rsa_st* ,int,int,struct bignum_st* ,struct bn_gencb_st* );
int RSA_meth_set_multi_prime_keygen(struct rsa_meth_st*  meth  , int (*keygen)(struct rsa_st* ,int,int,struct bignum_st* ,struct bn_gencb_st* ));
int EVP_PKEY_CTX_set_dh_paramgen_type(struct evp_pkey_ctx_st*  ctx  , int typ);
int EVP_PKEY_CTX_set_dh_paramgen_gindex(struct evp_pkey_ctx_st*  ctx  , int gindex);
int EVP_PKEY_CTX_set_dh_paramgen_seed(struct evp_pkey_ctx_st*  ctx  , const unsigned char* seed, unsigned long  seedlen  );
int EVP_PKEY_CTX_set_dh_paramgen_prime_len(struct evp_pkey_ctx_st*  ctx  , int pbits);
int EVP_PKEY_CTX_set_dh_paramgen_subprime_len(struct evp_pkey_ctx_st*  ctx  , int qlen);
int EVP_PKEY_CTX_set_dh_paramgen_generator(struct evp_pkey_ctx_st*  ctx  , int gen);
int EVP_PKEY_CTX_set_dh_nid(struct evp_pkey_ctx_st*  ctx  , int nid);
int EVP_PKEY_CTX_set_dh_rfc5114(struct evp_pkey_ctx_st*  ctx  , int gen);
int EVP_PKEY_CTX_set_dhx_rfc5114(struct evp_pkey_ctx_st*  ctx  , int gen);
int EVP_PKEY_CTX_set_dh_pad(struct evp_pkey_ctx_st*  ctx  , int pad);
int EVP_PKEY_CTX_set_dh_kdf_type(struct evp_pkey_ctx_st*  ctx  , int kdf);
int EVP_PKEY_CTX_get_dh_kdf_type(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_CTX_set0_dh_kdf_oid(struct evp_pkey_ctx_st*  ctx  , struct asn1_object_st*  oid  );
int EVP_PKEY_CTX_get0_dh_kdf_oid(struct evp_pkey_ctx_st*  ctx  , struct asn1_object_st**  oid  );
int EVP_PKEY_CTX_set_dh_kdf_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_get_dh_kdf_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st**  md  );
int EVP_PKEY_CTX_set_dh_kdf_outlen(struct evp_pkey_ctx_st*  ctx  , int len);
int EVP_PKEY_CTX_get_dh_kdf_outlen(struct evp_pkey_ctx_st*  ctx  , int* len);
int EVP_PKEY_CTX_set0_dh_kdf_ukm(struct evp_pkey_ctx_st*  ctx  , unsigned char* ukm, int len);
int EVP_PKEY_CTX_get0_dh_kdf_ukm(struct evp_pkey_ctx_st*  ctx  , unsigned char** ukm);
const struct ASN1_ITEM_st*  DHparams_it();
struct dh_st*  DHparams_dup(const struct dh_st*  a  );
const struct dh_method*  DH_OpenSSL();
void DH_set_default_method(const struct dh_method*  meth  );
const struct dh_method*  DH_get_default_method();
int DH_set_method(struct dh_st*  dh  , const struct dh_method*  meth  );
struct dh_st*  DH_new_method(struct engine_st*  engine  );
struct dh_st*  DH_new();
void DH_free(struct dh_st*  dh  );
int DH_up_ref(struct dh_st*  dh  );
int DH_bits(const struct dh_st*  dh  );
int DH_size(const struct dh_st*  dh  );
int DH_security_bits(const struct dh_st*  dh  );
int DH_set_ex_data(struct dh_st*  d  , int idx, void* arg);
void* DH_get_ex_data(const struct dh_st*  d  , int idx);
int DH_generate_parameters_ex(struct dh_st*  dh  , int prime_len, int generator, struct bn_gencb_st*  cb  );
int DH_check_params_ex(const struct dh_st*  dh  );
int DH_check_ex(const struct dh_st*  dh  );
int DH_check_pub_key_ex(const struct dh_st*  dh  , const struct bignum_st*  pub_key  );
int DH_check_params(const struct dh_st*  dh  , int* ret);
int DH_check(const struct dh_st*  dh  , int* codes);
int DH_check_pub_key(const struct dh_st*  dh  , const struct bignum_st*  pub_key  , int* codes);
int DH_generate_key(struct dh_st*  dh  );
int DH_compute_key(unsigned char* key, const struct bignum_st*  pub_key  , struct dh_st*  dh  );
int DH_compute_key_padded(unsigned char* key, const struct bignum_st*  pub_key  , struct dh_st*  dh  );
struct dh_st*  d2i_DHparams(struct dh_st**  a  , const unsigned char** in, long len);
int i2d_DHparams(const struct dh_st*  a  , unsigned char** out);
struct dh_st*  d2i_DHxparams(struct dh_st**  a  , const unsigned char** in, long len);
int i2d_DHxparams(const struct dh_st*  a  , unsigned char** out);
int DHparams_print_fp(struct _IO_FILE*  fp  , const struct dh_st*  x  );
int DHparams_print(struct bio_st*  bp  , const struct dh_st*  x  );
struct dh_st*  DH_get_1024_160();
struct dh_st*  DH_get_2048_224();
struct dh_st*  DH_get_2048_256();
struct dh_st*  DH_new_by_nid(int nid);
int DH_get_nid(const struct dh_st*  dh  );
int DH_KDF_X9_42(unsigned char* out, unsigned long  outlen  , const unsigned char* Z, unsigned long  Zlen  , struct asn1_object_st*  key_oid  , const unsigned char* ukm, unsigned long  ukmlen  , const struct evp_md_st*  md  );
void DH_get0_pqg(const struct dh_st*  dh  , const struct bignum_st**  p  , const struct bignum_st**  q  , const struct bignum_st**  g  );
int DH_set0_pqg(struct dh_st*  dh  , struct bignum_st*  p  , struct bignum_st*  q  , struct bignum_st*  g  );
void DH_get0_key(const struct dh_st*  dh  , const struct bignum_st**  pub_key  , const struct bignum_st**  priv_key  );
int DH_set0_key(struct dh_st*  dh  , struct bignum_st*  pub_key  , struct bignum_st*  priv_key  );
const struct bignum_st*  DH_get0_p(const struct dh_st*  dh  );
const struct bignum_st*  DH_get0_q(const struct dh_st*  dh  );
const struct bignum_st*  DH_get0_g(const struct dh_st*  dh  );
const struct bignum_st*  DH_get0_priv_key(const struct dh_st*  dh  );
const struct bignum_st*  DH_get0_pub_key(const struct dh_st*  dh  );
void DH_clear_flags(struct dh_st*  dh  , int flags);
int DH_test_flags(const struct dh_st*  dh  , int flags);
void DH_set_flags(struct dh_st*  dh  , int flags);
struct engine_st*  DH_get0_engine(struct dh_st*  d  );
long DH_get_length(const struct dh_st*  dh  );
int DH_set_length(struct dh_st*  dh  , long length);
struct dh_method*  DH_meth_new(const char* name, int flags);
void DH_meth_free(struct dh_method*  dhm  );
struct dh_method*  DH_meth_dup(const struct dh_method*  dhm  );
const char* DH_meth_get0_name(const struct dh_method*  dhm  );
int DH_meth_set1_name(struct dh_method*  dhm  , const char* name);
int DH_meth_get_flags(const struct dh_method*  dhm  );
int DH_meth_set_flags(struct dh_method*  dhm  , int flags);
void* DH_meth_get0_app_data(const struct dh_method*  dhm  );
int DH_meth_set0_app_data(struct dh_method*  dhm  , void* app_data);
int (*DH_meth_get_generate_key(const struct dh_method*  _function_pointer_result_var_name_a39  ))(struct dh_st* );
int DH_meth_set_generate_key(struct dh_method*  dhm  , int (*generate_key)(struct dh_st* ));
int (*DH_meth_get_compute_key(const struct dh_method*  _function_pointer_result_var_name_a40  ))(unsigned char*,const struct bignum_st* ,struct dh_st* );
int DH_meth_set_compute_key(struct dh_method*  dhm  , int (*compute_key)(unsigned char*,const struct bignum_st* ,struct dh_st* ));
int (*DH_meth_get_bn_mod_exp(const struct dh_method*  _function_pointer_result_var_name_a41  ))(const struct dh_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* );
int DH_meth_set_bn_mod_exp(struct dh_method*  dhm  , int (*bn_mod_exp)(const struct dh_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* ));
int (*DH_meth_get_init(const struct dh_method*  _function_pointer_result_var_name_a42  ))(struct dh_st* );
int DH_meth_set_init(struct dh_method*  dhm  , int (*init)(struct dh_st* ));
int (*DH_meth_get_finish(const struct dh_method*  _function_pointer_result_var_name_a43  ))(struct dh_st* );
int DH_meth_set_finish(struct dh_method*  dhm  , int (*finish)(struct dh_st* ));
int (*DH_meth_get_generate_params(const struct dh_method*  _function_pointer_result_var_name_a44  ))(struct dh_st* ,int,int,struct bn_gencb_st* );
int DH_meth_set_generate_params(struct dh_method*  dhm  , int (*generate_params)(struct dh_st* ,int,int,struct bn_gencb_st* ));
struct dh_st*  DH_generate_parameters(int prime_len, int generator, void (*callback)(int,int,void*), void* cb_arg);
int EVP_PKEY_CTX_set_dsa_paramgen_bits(struct evp_pkey_ctx_st*  ctx  , int nbits);
int EVP_PKEY_CTX_set_dsa_paramgen_q_bits(struct evp_pkey_ctx_st*  ctx  , int qbits);
int EVP_PKEY_CTX_set_dsa_paramgen_md_props(struct evp_pkey_ctx_st*  ctx  , const char* md_name, const char* md_properties);
int EVP_PKEY_CTX_set_dsa_paramgen_gindex(struct evp_pkey_ctx_st*  ctx  , int gindex);
int EVP_PKEY_CTX_set_dsa_paramgen_type(struct evp_pkey_ctx_st*  ctx  , const char* name);
int EVP_PKEY_CTX_set_dsa_paramgen_seed(struct evp_pkey_ctx_st*  ctx  , const unsigned char* seed, unsigned long  seedlen  );
int EVP_PKEY_CTX_set_dsa_paramgen_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
struct DSA_SIG_st*  DSA_SIG_new();
void DSA_SIG_free(struct DSA_SIG_st*  a  );
struct DSA_SIG_st*  d2i_DSA_SIG(struct DSA_SIG_st**  a  , const unsigned char** in, long len);
int i2d_DSA_SIG(const struct DSA_SIG_st*  a  , unsigned char** out);
void DSA_SIG_get0(const struct DSA_SIG_st*  sig  , const struct bignum_st**  pr  , const struct bignum_st**  ps  );
int DSA_SIG_set0(struct DSA_SIG_st*  sig  , struct bignum_st*  r  , struct bignum_st*  s  );
struct dsa_st*  DSAparams_dup(const struct dsa_st*  a  );
struct DSA_SIG_st*  DSA_do_sign(const unsigned char* dgst, int dlen, struct dsa_st*  dsa  );
int DSA_do_verify(const unsigned char* dgst, int dgst_len, struct DSA_SIG_st*  sig  , struct dsa_st*  dsa  );
const struct dsa_method*  DSA_OpenSSL();
void DSA_set_default_method(const struct dsa_method*    );
const struct dsa_method*  DSA_get_default_method();
int DSA_set_method(struct dsa_st*  dsa  , const struct dsa_method*    );
const struct dsa_method*  DSA_get_method(struct dsa_st*  d  );
struct dsa_st*  DSA_new();
struct dsa_st*  DSA_new_method(struct engine_st*  engine  );
void DSA_free(struct dsa_st*  r  );
int DSA_up_ref(struct dsa_st*  r  );
int DSA_size(const struct dsa_st*    );
int DSA_bits(const struct dsa_st*  d  );
int DSA_security_bits(const struct dsa_st*  d  );
int DSA_sign_setup(struct dsa_st*  dsa  , struct bignum_ctx*  ctx_in  , struct bignum_st**  kinvp  , struct bignum_st**  rp  );
int DSA_sign(int type, const unsigned char* dgst, int dlen, unsigned char* sig, unsigned int* siglen, struct dsa_st*  dsa  );
int DSA_verify(int type, const unsigned char* dgst, int dgst_len, const unsigned char* sigbuf, int siglen, struct dsa_st*  dsa  );
int DSA_set_ex_data(struct dsa_st*  d  , int idx, void* arg);
void* DSA_get_ex_data(const struct dsa_st*  d  , int idx);
struct dsa_st*  d2i_DSAPublicKey(struct dsa_st**  a  , const unsigned char** in, long len);
int i2d_DSAPublicKey(const struct dsa_st*  a  , unsigned char** out);
struct dsa_st*  d2i_DSAPrivateKey(struct dsa_st**  a  , const unsigned char** in, long len);
int i2d_DSAPrivateKey(const struct dsa_st*  a  , unsigned char** out);
struct dsa_st*  d2i_DSAparams(struct dsa_st**  a  , const unsigned char** in, long len);
int i2d_DSAparams(const struct dsa_st*  a  , unsigned char** out);
struct dsa_st*  DSA_generate_parameters(int bits, unsigned char* seed, int seed_len, int* counter_ret, unsigned long  int* h_ret, void (*callback)(int,int,void*), void* cb_arg);
int DSA_generate_parameters_ex(struct dsa_st*  dsa  , int bits, const unsigned char* seed, int seed_len, int* counter_ret, unsigned long  int* h_ret, struct bn_gencb_st*  cb  );
int DSA_generate_key(struct dsa_st*  a  );
int DSAparams_print(struct bio_st*  bp  , const struct dsa_st*  x  );
int DSA_print(struct bio_st*  bp  , const struct dsa_st*  x  , int off);
int DSAparams_print_fp(struct _IO_FILE*  fp  , const struct dsa_st*  x  );
int DSA_print_fp(struct _IO_FILE*  bp  , const struct dsa_st*  x  , int off);
struct dh_st*  DSA_dup_DH(const struct dsa_st*  r  );
void DSA_get0_pqg(const struct dsa_st*  d  , const struct bignum_st**  p  , const struct bignum_st**  q  , const struct bignum_st**  g  );
int DSA_set0_pqg(struct dsa_st*  d  , struct bignum_st*  p  , struct bignum_st*  q  , struct bignum_st*  g  );
void DSA_get0_key(const struct dsa_st*  d  , const struct bignum_st**  pub_key  , const struct bignum_st**  priv_key  );
int DSA_set0_key(struct dsa_st*  d  , struct bignum_st*  pub_key  , struct bignum_st*  priv_key  );
const struct bignum_st*  DSA_get0_p(const struct dsa_st*  d  );
const struct bignum_st*  DSA_get0_q(const struct dsa_st*  d  );
const struct bignum_st*  DSA_get0_g(const struct dsa_st*  d  );
const struct bignum_st*  DSA_get0_pub_key(const struct dsa_st*  d  );
const struct bignum_st*  DSA_get0_priv_key(const struct dsa_st*  d  );
void DSA_clear_flags(struct dsa_st*  d  , int flags);
int DSA_test_flags(const struct dsa_st*  d  , int flags);
void DSA_set_flags(struct dsa_st*  d  , int flags);
struct engine_st*  DSA_get0_engine(struct dsa_st*  d  );
struct dsa_method*  DSA_meth_new(const char* name, int flags);
void DSA_meth_free(struct dsa_method*  dsam  );
struct dsa_method*  DSA_meth_dup(const struct dsa_method*  dsam  );
const char* DSA_meth_get0_name(const struct dsa_method*  dsam  );
int DSA_meth_set1_name(struct dsa_method*  dsam  , const char* name);
int DSA_meth_get_flags(const struct dsa_method*  dsam  );
int DSA_meth_set_flags(struct dsa_method*  dsam  , int flags);
void* DSA_meth_get0_app_data(const struct dsa_method*  dsam  );
int DSA_meth_set0_app_data(struct dsa_method*  dsam  , void* app_data);
struct DSA_SIG_st* (*DSA_meth_get_sign(const struct dsa_method*  _function_pointer_result_var_name_a45  ))(const unsigned char*,int,struct dsa_st* );
int DSA_meth_set_sign(struct dsa_method*  dsam  , struct DSA_SIG_st* (*sign)(const unsigned char*,int,struct dsa_st* ));
int (*DSA_meth_get_sign_setup(const struct dsa_method*  _function_pointer_result_var_name_a46  ))(struct dsa_st* ,struct bignum_ctx* ,struct bignum_st** ,struct bignum_st** );
int DSA_meth_set_sign_setup(struct dsa_method*  dsam  , int (*sign_setup)(struct dsa_st* ,struct bignum_ctx* ,struct bignum_st** ,struct bignum_st** ));
int (*DSA_meth_get_verify(const struct dsa_method*  _function_pointer_result_var_name_a47  ))(const unsigned char*,int,struct DSA_SIG_st* ,struct dsa_st* );
int DSA_meth_set_verify(struct dsa_method*  dsam  , int (*verify)(const unsigned char*,int,struct DSA_SIG_st* ,struct dsa_st* ));
int (*DSA_meth_get_mod_exp(const struct dsa_method*  _function_pointer_result_var_name_a48  ))(struct dsa_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* );
int DSA_meth_set_mod_exp(struct dsa_method*  dsam  , int (*mod_exp)(struct dsa_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* ));
int (*DSA_meth_get_bn_mod_exp(const struct dsa_method*  _function_pointer_result_var_name_a49  ))(struct dsa_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* );
int DSA_meth_set_bn_mod_exp(struct dsa_method*  dsam  , int (*bn_mod_exp)(struct dsa_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* ));
int (*DSA_meth_get_init(const struct dsa_method*  _function_pointer_result_var_name_a50  ))(struct dsa_st* );
int DSA_meth_set_init(struct dsa_method*  dsam  , int (*init)(struct dsa_st* ));
int (*DSA_meth_get_finish(const struct dsa_method*  _function_pointer_result_var_name_a51  ))(struct dsa_st* );
int DSA_meth_set_finish(struct dsa_method*  dsam  , int (*finish)(struct dsa_st* ));
int (*DSA_meth_get_paramgen(const struct dsa_method*  _function_pointer_result_var_name_a52  ))(struct dsa_st* ,int,const unsigned char*,int,int*,unsigned long  int*,struct bn_gencb_st* );
int DSA_meth_set_paramgen(struct dsa_method*  dsam  , int (*paramgen)(struct dsa_st* ,int,const unsigned char*,int,int*,unsigned long  int*,struct bn_gencb_st* ));
int (*DSA_meth_get_keygen(const struct dsa_method*  _function_pointer_result_var_name_a53  ))(struct dsa_st* );
int DSA_meth_set_keygen(struct dsa_method*  dsam  , int (*keygen)(struct dsa_st* ));
int SHA1_Init(struct SHAstate_st*  c  );
int SHA1_Update(struct SHAstate_st*  c  , const void* data, unsigned long  len  );
int SHA1_Final(unsigned char* md, struct SHAstate_st*  c  );
void SHA1_Transform(struct SHAstate_st*  c  , const unsigned char* data);
unsigned char* SHA1(const unsigned char* d, unsigned long  n  , unsigned char* md);
int SHA224_Init(struct SHA256state_st*  c  );
int SHA224_Update(struct SHA256state_st*  c  , const void* data, unsigned long  len  );
int SHA224_Final(unsigned char* md, struct SHA256state_st*  c  );
int SHA256_Init(struct SHA256state_st*  c  );
int SHA256_Update(struct SHA256state_st*  c  , const void* data, unsigned long  len  );
int SHA256_Final(unsigned char* md, struct SHA256state_st*  c  );
void SHA256_Transform(struct SHA256state_st*  c  , const unsigned char* data);
unsigned char* SHA224(const unsigned char* d, unsigned long  n  , unsigned char* md);
unsigned char* SHA256(const unsigned char* d, unsigned long  n  , unsigned char* md);
int SHA384_Init(struct SHA512state_st*  c  );
int SHA384_Update(struct SHA512state_st*  c  , const void* data, unsigned long  len  );
int SHA384_Final(unsigned char* md, struct SHA512state_st*  c  );
int SHA512_Init(struct SHA512state_st*  c  );
int SHA512_Update(struct SHA512state_st*  c  , const void* data, unsigned long  len  );
int SHA512_Final(unsigned char* md, struct SHA512state_st*  c  );
void SHA512_Transform(struct SHA512state_st*  c  , const unsigned char* data);
unsigned char* SHA384(const unsigned char* d, unsigned long  n  , unsigned char* md);
unsigned char* SHA512(const unsigned char* d, unsigned long  n  , unsigned char* md);
int OPENSSL_LH_error(struct lhash_st*  lh  );
struct lhash_st*  OPENSSL_LH_new(unsigned long  int (*h)(const void*)  , int (*c)(const void*,const void*)  );
struct lhash_st*  OPENSSL_LH_set_thunks(struct lhash_st*  lh  , unsigned long  int (*hw)(const void*,unsigned long  int (*)(const void*) )  , int (*cw)(const void*,const void*,int (*)(const void*,const void*) )  , void (*daw)(void*,void (*)(void*) )  , void (*daaw)(void*,void*,void (*)(void*,void*) )  );
void OPENSSL_LH_free(struct lhash_st*  lh  );
void OPENSSL_LH_flush(struct lhash_st*  lh  );
void* OPENSSL_LH_insert(struct lhash_st*  lh  , void* data);
void* OPENSSL_LH_delete(struct lhash_st*  lh  , const void* data);
void* OPENSSL_LH_retrieve(struct lhash_st*  lh  , const void* data);
void OPENSSL_LH_doall(struct lhash_st*  lh  , void (*func)(void*)  );
void OPENSSL_LH_doall_arg(struct lhash_st*  lh  , void (*func)(void*,void*)  , void* arg);
void OPENSSL_LH_doall_arg_thunk(struct lhash_st*  lh  , void (*daaw)(void*,void*,void (*)(void*,void*) )  , void (*fn)(void*,void*)  , void* arg);
unsigned long  int OPENSSL_LH_strhash(const char* c);
unsigned long  int OPENSSL_LH_num_items(const struct lhash_st*  lh  );
unsigned long  int OPENSSL_LH_get_down_load(const struct lhash_st*  lh  );
void OPENSSL_LH_set_down_load(struct lhash_st*  lh  , unsigned long  int down_load);
void OPENSSL_LH_stats(const struct lhash_st*  lh  , struct _IO_FILE*  fp  );
void OPENSSL_LH_node_stats(const struct lhash_st*  lh  , struct _IO_FILE*  fp  );
void OPENSSL_LH_node_usage_stats(const struct lhash_st*  lh  , struct _IO_FILE*  fp  );
void OPENSSL_LH_stats_bio(const struct lhash_st*  lh  , struct bio_st*  out  );
void OPENSSL_LH_node_stats_bio(const struct lhash_st*  lh  , struct bio_st*  out  );
void OPENSSL_LH_node_usage_stats_bio(const struct lhash_st*  lh  , struct bio_st*  out  );
int X509_TRUST_set(int* t, int trust);
int X509_TRUST_get_count();
struct x509_trust_st*  X509_TRUST_get0(int idx);
int X509_TRUST_get_by_id(int id);
int X509_TRUST_add(int id, int flags, int (*ck)(struct x509_trust_st* ,struct x509_st* ,int), const char* name, int arg1, void* arg2);
void X509_TRUST_cleanup();
int X509_TRUST_get_flags(const struct x509_trust_st*  xp  );
char* X509_TRUST_get0_name(const struct x509_trust_st*  xp  );
int X509_TRUST_get_trust(const struct x509_trust_st*  xp  );
int X509_trusted(const struct x509_st*  x  );
int X509_add1_trust_object(struct x509_st*  x  , const struct asn1_object_st*  obj  );
int X509_add1_reject_object(struct x509_st*  x  , const struct asn1_object_st*  obj  );
void X509_trust_clear(struct x509_st*  x  );
void X509_reject_clear(struct x509_st*  x  );
struct stack_st_ASN1_OBJECT*  X509_get0_trust_objects(struct x509_st*  x  );
struct stack_st_ASN1_OBJECT*  X509_get0_reject_objects(struct x509_st*  x  );
int (*X509_TRUST_set_default(int (*_function_pointer_result_var_name_a54)(int,struct x509_st* ,int)))(int,struct x509_st* ,int);
int X509_check_trust(struct x509_st*  x  , int id, int flags);
int X509_verify_cert(struct x509_store_ctx_st*  ctx  );
int X509_STORE_CTX_verify(struct x509_store_ctx_st*  ctx  );
struct stack_st_X509*  X509_build_chain(struct x509_st*  target  , struct stack_st_X509*  certs  , struct x509_store_st*  store  , int with_self_signed, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_STORE_set_depth(struct x509_store_st*  store  , int depth);
int X509_STORE_CTX_print_verify_cb(int ok, struct x509_store_ctx_st*  ctx  );
void X509_STORE_CTX_set_depth(struct x509_store_ctx_st*  ctx  , int depth);
int X509_OBJECT_idx_by_subject(struct stack_st_X509_OBJECT*  h  , enum anonymous_typeY111  type  , const struct X509_name_st*  name  );
struct x509_object_st*  X509_OBJECT_retrieve_by_subject(struct stack_st_X509_OBJECT*  h  , enum anonymous_typeY111  type  , const struct X509_name_st*  name  );
struct x509_object_st*  X509_OBJECT_retrieve_match(struct stack_st_X509_OBJECT*  h  , struct x509_object_st*  x  );
int X509_OBJECT_up_ref_count(struct x509_object_st*  a  );
struct x509_object_st*  X509_OBJECT_new();
void X509_OBJECT_free(struct x509_object_st*  a  );
enum anonymous_typeY111  X509_OBJECT_get_type(const struct x509_object_st*  a  );
struct x509_st*  X509_OBJECT_get0_X509(const struct x509_object_st*  a  );
int X509_OBJECT_set1_X509(struct x509_object_st*  a  , struct x509_st*  obj  );
struct X509_crl_st*  X509_OBJECT_get0_X509_CRL(const struct x509_object_st*  a  );
int X509_OBJECT_set1_X509_CRL(struct x509_object_st*  a  , struct X509_crl_st*  obj  );
struct x509_store_st*  X509_STORE_new();
void X509_STORE_free(struct x509_store_st*  xs  );
int X509_STORE_lock(struct x509_store_st*  xs  );
int X509_STORE_unlock(struct x509_store_st*  xs  );
int X509_STORE_up_ref(struct x509_store_st*  xs  );
struct stack_st_X509_OBJECT*  X509_STORE_get0_objects(const struct x509_store_st*  xs  );
struct stack_st_X509_OBJECT*  X509_STORE_get1_objects(struct x509_store_st*  xs  );
struct stack_st_X509*  X509_STORE_get1_all_certs(struct x509_store_st*  xs  );
struct stack_st_X509*  X509_STORE_CTX_get1_certs(struct x509_store_ctx_st*  xs  , const struct X509_name_st*  nm  );
struct stack_st_X509_CRL*  X509_STORE_CTX_get1_crls(const struct x509_store_ctx_st*  st  , const struct X509_name_st*  nm  );
int X509_STORE_set_flags(struct x509_store_st*  xs  , unsigned long  int flags);
int X509_STORE_set_purpose(struct x509_store_st*  xs  , int purpose);
int X509_STORE_set_trust(struct x509_store_st*  xs  , int trust);
int X509_STORE_set1_param(struct x509_store_st*  xs  , const struct X509_VERIFY_PARAM_st*  pm  );
struct X509_VERIFY_PARAM_st*  X509_STORE_get0_param(const struct x509_store_st*  xs  );
void X509_STORE_set_verify(struct x509_store_st*  xs  , int (*verify)(struct x509_store_ctx_st* )  );
void X509_STORE_CTX_set_verify(struct x509_store_ctx_st*  ctx  , int (*verify)(struct x509_store_ctx_st* )  );
int (*X509_STORE_get_verify(const struct x509_store_st*  xs  ))(struct x509_store_ctx_st* ) ;
void X509_STORE_set_verify_cb(struct x509_store_st*  xs  , int (*verify_cb)(int,struct x509_store_ctx_st* )  );
int (*X509_STORE_get_verify_cb(const struct x509_store_st*  xs  ))(int,struct x509_store_ctx_st* ) ;
void X509_STORE_set_get_issuer(struct x509_store_st*  xs  , int (*get_issuer)(struct x509_st** ,struct x509_store_ctx_st* ,struct x509_st* )  );
int (*X509_STORE_get_get_issuer(const struct x509_store_st*  xs  ))(struct x509_st** ,struct x509_store_ctx_st* ,struct x509_st* ) ;
void X509_STORE_set_check_issued(struct x509_store_st*  xs  , int (*check_issued)(struct x509_store_ctx_st* ,struct x509_st* ,struct x509_st* )  );
int (*X509_STORE_get_check_issued(const struct x509_store_st*  s  ))(struct x509_store_ctx_st* ,struct x509_st* ,struct x509_st* ) ;
void X509_STORE_set_check_revocation(struct x509_store_st*  xs  , int (*check_revocation)(struct x509_store_ctx_st* )  );
int (*X509_STORE_get_check_revocation(const struct x509_store_st*  xs  ))(struct x509_store_ctx_st* ) ;
void X509_STORE_set_get_crl(struct x509_store_st*  xs  , int (*get_crl)(struct x509_store_ctx_st* ,struct X509_crl_st** ,struct x509_st* )  );
int (*X509_STORE_get_get_crl(const struct x509_store_st*  xs  ))(struct x509_store_ctx_st* ,struct X509_crl_st** ,struct x509_st* ) ;
void X509_STORE_set_check_crl(struct x509_store_st*  xs  , int (*check_crl)(struct x509_store_ctx_st* ,struct X509_crl_st* )  );
int (*X509_STORE_get_check_crl(const struct x509_store_st*  xs  ))(struct x509_store_ctx_st* ,struct X509_crl_st* ) ;
void X509_STORE_set_cert_crl(struct x509_store_st*  xs  , int (*cert_crl)(struct x509_store_ctx_st* ,struct X509_crl_st* ,struct x509_st* )  );
int (*X509_STORE_get_cert_crl(const struct x509_store_st*  xs  ))(struct x509_store_ctx_st* ,struct X509_crl_st* ,struct x509_st* ) ;
void X509_STORE_set_check_policy(struct x509_store_st*  xs  , int (*check_policy)(struct x509_store_ctx_st* )  );
int (*X509_STORE_get_check_policy(const struct x509_store_st*  s  ))(struct x509_store_ctx_st* ) ;
void X509_STORE_set_lookup_certs(struct x509_store_st*  xs  , struct stack_st_X509* (*lookup_certs)(struct x509_store_ctx_st* ,const struct X509_name_st* )  );
struct stack_st_X509* (*X509_STORE_get_lookup_certs(const struct x509_store_st*  s  ))(struct x509_store_ctx_st* ,const struct X509_name_st* ) ;
void X509_STORE_set_lookup_crls(struct x509_store_st*  xs  , struct stack_st_X509_CRL* (*lookup_crls)(const struct x509_store_ctx_st* ,const struct X509_name_st* )  );
struct stack_st_X509_CRL* (*X509_STORE_get_lookup_crls(const struct x509_store_st*  xs  ))(const struct x509_store_ctx_st* ,const struct X509_name_st* ) ;
void X509_STORE_set_cleanup(struct x509_store_st*  xs  , int (*cleanup)(struct x509_store_ctx_st* )  );
int (*X509_STORE_get_cleanup(const struct x509_store_st*  xs  ))(struct x509_store_ctx_st* ) ;
int X509_STORE_set_ex_data(struct x509_store_st*  xs  , int idx, void* data);
void* X509_STORE_get_ex_data(const struct x509_store_st*  xs  , int idx);
struct x509_store_ctx_st*  X509_STORE_CTX_new_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct x509_store_ctx_st*  X509_STORE_CTX_new();
int X509_STORE_CTX_get1_issuer(struct x509_st**  issuer  , struct x509_store_ctx_st*  ctx  , struct x509_st*  x  );
void X509_STORE_CTX_free(struct x509_store_ctx_st*  ctx  );
int X509_STORE_CTX_init(struct x509_store_ctx_st*  ctx  , struct x509_store_st*  trust_store  , struct x509_st*  target  , struct stack_st_X509*  untrusted  );
int X509_STORE_CTX_init_rpk(struct x509_store_ctx_st*  ctx  , struct x509_store_st*  trust_store  , struct evp_pkey_st*  rpk  );
void X509_STORE_CTX_set0_trusted_stack(struct x509_store_ctx_st*  ctx  , struct stack_st_X509*  sk  );
void X509_STORE_CTX_cleanup(struct x509_store_ctx_st*  ctx  );
struct x509_store_st*  X509_STORE_CTX_get0_store(const struct x509_store_ctx_st*  ctx  );
struct x509_st*  X509_STORE_CTX_get0_cert(const struct x509_store_ctx_st*  ctx  );
struct evp_pkey_st*  X509_STORE_CTX_get0_rpk(const struct x509_store_ctx_st*  ctx  );
struct stack_st_X509*  X509_STORE_CTX_get0_untrusted(const struct x509_store_ctx_st*  ctx  );
void X509_STORE_CTX_set0_untrusted(struct x509_store_ctx_st*  ctx  , struct stack_st_X509*  sk  );
void X509_STORE_CTX_set_verify_cb(struct x509_store_ctx_st*  ctx  , int (*verify)(int,struct x509_store_ctx_st* )  );
int (*X509_STORE_CTX_get_verify_cb(const struct x509_store_ctx_st*  ctx  ))(int,struct x509_store_ctx_st* ) ;
int (*X509_STORE_CTX_get_verify(const struct x509_store_ctx_st*  ctx  ))(struct x509_store_ctx_st* ) ;
int (*X509_STORE_CTX_get_get_issuer(const struct x509_store_ctx_st*  ctx  ))(struct x509_st** ,struct x509_store_ctx_st* ,struct x509_st* ) ;
int (*X509_STORE_CTX_get_check_issued(const struct x509_store_ctx_st*  ctx  ))(struct x509_store_ctx_st* ,struct x509_st* ,struct x509_st* ) ;
int (*X509_STORE_CTX_get_check_revocation(const struct x509_store_ctx_st*  ctx  ))(struct x509_store_ctx_st* ) ;
void X509_STORE_CTX_set_get_crl(struct x509_store_ctx_st*  ctx  , int (*get_crl)(struct x509_store_ctx_st* ,struct X509_crl_st** ,struct x509_st* )  );
int (*X509_STORE_CTX_get_get_crl(const struct x509_store_ctx_st*  ctx  ))(struct x509_store_ctx_st* ,struct X509_crl_st** ,struct x509_st* ) ;
int (*X509_STORE_CTX_get_check_crl(const struct x509_store_ctx_st*  ctx  ))(struct x509_store_ctx_st* ,struct X509_crl_st* ) ;
int (*X509_STORE_CTX_get_cert_crl(const struct x509_store_ctx_st*  ctx  ))(struct x509_store_ctx_st* ,struct X509_crl_st* ,struct x509_st* ) ;
int (*X509_STORE_CTX_get_check_policy(const struct x509_store_ctx_st*  ctx  ))(struct x509_store_ctx_st* ) ;
struct stack_st_X509* (*X509_STORE_CTX_get_lookup_certs(const struct x509_store_ctx_st*  ctx  ))(struct x509_store_ctx_st* ,const struct X509_name_st* ) ;
struct stack_st_X509_CRL* (*X509_STORE_CTX_get_lookup_crls(const struct x509_store_ctx_st*  ctx  ))(const struct x509_store_ctx_st* ,const struct X509_name_st* ) ;
int (*X509_STORE_CTX_get_cleanup(const struct x509_store_ctx_st*  ctx  ))(struct x509_store_ctx_st* ) ;
struct x509_lookup_st*  X509_STORE_add_lookup(struct x509_store_st*  xs  , struct x509_lookup_method_st*  m  );
struct x509_lookup_method_st*  X509_LOOKUP_hash_dir();
struct x509_lookup_method_st*  X509_LOOKUP_file();
struct x509_lookup_method_st*  X509_LOOKUP_store();
struct x509_lookup_method_st*  X509_LOOKUP_meth_new(const char* name);
void X509_LOOKUP_meth_free(struct x509_lookup_method_st*  method  );
int X509_LOOKUP_meth_set_new_item(struct x509_lookup_method_st*  method  , int (*new_item)(struct x509_lookup_st* ));
int (*X509_LOOKUP_meth_get_new_item(const struct x509_lookup_method_st*  _function_pointer_result_var_name_a55  ))(struct x509_lookup_st* );
int X509_LOOKUP_meth_set_free(struct x509_lookup_method_st*  method  , void (*free_fn)(struct x509_lookup_st* ));
void (*X509_LOOKUP_meth_get_free(const struct x509_lookup_method_st*  _function_pointer_result_var_name_a56  ))(struct x509_lookup_st* );
int X509_LOOKUP_meth_set_init(struct x509_lookup_method_st*  method  , int (*init)(struct x509_lookup_st* ));
int (*X509_LOOKUP_meth_get_init(const struct x509_lookup_method_st*  _function_pointer_result_var_name_a57  ))(struct x509_lookup_st* );
int X509_LOOKUP_meth_set_shutdown(struct x509_lookup_method_st*  method  , int (*shutdown)(struct x509_lookup_st* ));
int (*X509_LOOKUP_meth_get_shutdown(const struct x509_lookup_method_st*  _function_pointer_result_var_name_a58  ))(struct x509_lookup_st* );
int X509_LOOKUP_meth_set_ctrl(struct x509_lookup_method_st*  method  , int (*ctrl_fn)(struct x509_lookup_st* ,int,const char*,long,char**)  );
int (*X509_LOOKUP_meth_get_ctrl(const struct x509_lookup_method_st*  method  ))(struct x509_lookup_st* ,int,const char*,long,char**) ;
int X509_LOOKUP_meth_set_get_by_subject(struct x509_lookup_method_st*  method  , int (*fn)(struct x509_lookup_st* ,enum anonymous_typeY111 ,const struct X509_name_st* ,struct x509_object_st* )  );
int (*X509_LOOKUP_meth_get_get_by_subject(const struct x509_lookup_method_st*  method  ))(struct x509_lookup_st* ,enum anonymous_typeY111 ,const struct X509_name_st* ,struct x509_object_st* ) ;
int X509_LOOKUP_meth_set_get_by_issuer_serial(struct x509_lookup_method_st*  method  , int (*fn)(struct x509_lookup_st* ,enum anonymous_typeY111 ,const struct X509_name_st* ,const struct asn1_string_st* ,struct x509_object_st* )  );
int (*X509_LOOKUP_meth_get_get_by_issuer_serial(const struct x509_lookup_method_st*  method  ))(struct x509_lookup_st* ,enum anonymous_typeY111 ,const struct X509_name_st* ,const struct asn1_string_st* ,struct x509_object_st* ) ;
int X509_LOOKUP_meth_set_get_by_fingerprint(struct x509_lookup_method_st*  method  , int (*fn)(struct x509_lookup_st* ,enum anonymous_typeY111 ,const unsigned char*,int,struct x509_object_st* )  );
int (*X509_LOOKUP_meth_get_get_by_fingerprint(const struct x509_lookup_method_st*  method  ))(struct x509_lookup_st* ,enum anonymous_typeY111 ,const unsigned char*,int,struct x509_object_st* ) ;
int X509_LOOKUP_meth_set_get_by_alias(struct x509_lookup_method_st*  method  , int (*fn)(struct x509_lookup_st* ,enum anonymous_typeY111 ,const char*,int,struct x509_object_st* )  );
int (*X509_LOOKUP_meth_get_get_by_alias(const struct x509_lookup_method_st*  method  ))(struct x509_lookup_st* ,enum anonymous_typeY111 ,const char*,int,struct x509_object_st* ) ;
int X509_STORE_add_cert(struct x509_store_st*  xs  , struct x509_st*  x  );
int X509_STORE_add_crl(struct x509_store_st*  xs  , struct X509_crl_st*  x  );
int X509_STORE_CTX_get_by_subject(const struct x509_store_ctx_st*  vs  , enum anonymous_typeY111  type  , const struct X509_name_st*  name  , struct x509_object_st*  ret  );
struct x509_object_st*  X509_STORE_CTX_get_obj_by_subject(struct x509_store_ctx_st*  vs  , enum anonymous_typeY111  type  , const struct X509_name_st*  name  );
int X509_LOOKUP_ctrl(struct x509_lookup_st*  ctx  , int cmd, const char* argc, long argl, char** ret);
int X509_LOOKUP_ctrl_ex(struct x509_lookup_st*  ctx  , int cmd, const char* argc, long argl, char** ret, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_load_cert_file(struct x509_lookup_st*  ctx  , const char* file, int type);
int X509_load_cert_file_ex(struct x509_lookup_st*  ctx  , const char* file, int type, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_load_crl_file(struct x509_lookup_st*  ctx  , const char* file, int type);
int X509_load_cert_crl_file(struct x509_lookup_st*  ctx  , const char* file, int type);
int X509_load_cert_crl_file_ex(struct x509_lookup_st*  ctx  , const char* file, int type, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct x509_lookup_st*  X509_LOOKUP_new(struct x509_lookup_method_st*  method  );
void X509_LOOKUP_free(struct x509_lookup_st*  ctx  );
int X509_LOOKUP_init(struct x509_lookup_st*  ctx  );
int X509_LOOKUP_by_subject(struct x509_lookup_st*  ctx  , enum anonymous_typeY111  type  , const struct X509_name_st*  name  , struct x509_object_st*  ret  );
int X509_LOOKUP_by_subject_ex(struct x509_lookup_st*  ctx  , enum anonymous_typeY111  type  , const struct X509_name_st*  name  , struct x509_object_st*  ret  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_LOOKUP_by_issuer_serial(struct x509_lookup_st*  ctx  , enum anonymous_typeY111  type  , const struct X509_name_st*  name  , const struct asn1_string_st*  serial  , struct x509_object_st*  ret  );
int X509_LOOKUP_by_fingerprint(struct x509_lookup_st*  ctx  , enum anonymous_typeY111  type  , const unsigned char* bytes, int len, struct x509_object_st*  ret  );
int X509_LOOKUP_by_alias(struct x509_lookup_st*  ctx  , enum anonymous_typeY111  type  , const char* str, int len, struct x509_object_st*  ret  );
int X509_LOOKUP_set_method_data(struct x509_lookup_st*  ctx  , void* data);
void* X509_LOOKUP_get_method_data(const struct x509_lookup_st*  ctx  );
struct x509_store_st*  X509_LOOKUP_get_store(const struct x509_lookup_st*  ctx  );
int X509_LOOKUP_shutdown(struct x509_lookup_st*  ctx  );
int X509_STORE_load_file(struct x509_store_st*  xs  , const char* file);
int X509_STORE_load_path(struct x509_store_st*  xs  , const char* path);
int X509_STORE_load_store(struct x509_store_st*  xs  , const char* store);
int X509_STORE_load_locations(struct x509_store_st*  s  , const char* file, const char* dir);
int X509_STORE_set_default_paths(struct x509_store_st*  xs  );
int X509_STORE_load_file_ex(struct x509_store_st*  xs  , const char* file, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_STORE_load_store_ex(struct x509_store_st*  xs  , const char* store, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_STORE_load_locations_ex(struct x509_store_st*  xs  , const char* file, const char* dir, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_STORE_set_default_paths_ex(struct x509_store_st*  xs  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_STORE_CTX_set_ex_data(struct x509_store_ctx_st*  ctx  , int idx, void* data);
void* X509_STORE_CTX_get_ex_data(const struct x509_store_ctx_st*  ctx  , int idx);
int X509_STORE_CTX_get_error(const struct x509_store_ctx_st*  ctx  );
void X509_STORE_CTX_set_error(struct x509_store_ctx_st*  ctx  , int s);
int X509_STORE_CTX_get_error_depth(const struct x509_store_ctx_st*  ctx  );
void X509_STORE_CTX_set_error_depth(struct x509_store_ctx_st*  ctx  , int depth);
struct x509_st*  X509_STORE_CTX_get_current_cert(const struct x509_store_ctx_st*  ctx  );
void X509_STORE_CTX_set_current_cert(struct x509_store_ctx_st*  ctx  , struct x509_st*  x  );
struct x509_st*  X509_STORE_CTX_get0_current_issuer(const struct x509_store_ctx_st*  ctx  );
struct X509_crl_st*  X509_STORE_CTX_get0_current_crl(const struct x509_store_ctx_st*  ctx  );
struct x509_store_ctx_st*  X509_STORE_CTX_get0_parent_ctx(const struct x509_store_ctx_st*  ctx  );
struct stack_st_X509*  X509_STORE_CTX_get0_chain(const struct x509_store_ctx_st*  ctx  );
struct stack_st_X509*  X509_STORE_CTX_get1_chain(const struct x509_store_ctx_st*  ctx  );
void X509_STORE_CTX_set_cert(struct x509_store_ctx_st*  ctx  , struct x509_st*  target  );
void X509_STORE_CTX_set0_rpk(struct x509_store_ctx_st*  ctx  , struct evp_pkey_st*  target  );
void X509_STORE_CTX_set0_verified_chain(struct x509_store_ctx_st*  c  , struct stack_st_X509*  sk  );
void X509_STORE_CTX_set0_crls(struct x509_store_ctx_st*  ctx  , struct stack_st_X509_CRL*  sk  );
int X509_STORE_CTX_set_purpose(struct x509_store_ctx_st*  ctx  , int purpose);
int X509_STORE_CTX_set_trust(struct x509_store_ctx_st*  ctx  , int trust);
int X509_STORE_CTX_purpose_inherit(struct x509_store_ctx_st*  ctx  , int def_purpose, int purpose, int trust);
void X509_STORE_CTX_set_flags(struct x509_store_ctx_st*  ctx  , unsigned long  int flags);
void X509_STORE_CTX_set_time(struct x509_store_ctx_st*  ctx  , unsigned long  int flags, long  int  t  );
void X509_STORE_CTX_set_current_reasons(struct x509_store_ctx_st*  ctx  , unsigned int current_reasons);
struct X509_POLICY_TREE_st*  X509_STORE_CTX_get0_policy_tree(const struct x509_store_ctx_st*  ctx  );
int X509_STORE_CTX_get_explicit_policy(const struct x509_store_ctx_st*  ctx  );
int X509_STORE_CTX_get_num_untrusted(const struct x509_store_ctx_st*  ctx  );
struct X509_VERIFY_PARAM_st*  X509_STORE_CTX_get0_param(const struct x509_store_ctx_st*  ctx  );
void X509_STORE_CTX_set0_param(struct x509_store_ctx_st*  ctx  , struct X509_VERIFY_PARAM_st*  param  );
int X509_STORE_CTX_set_default(struct x509_store_ctx_st*  ctx  , const char* name);
void X509_STORE_CTX_set0_dane(struct x509_store_ctx_st*  ctx  , struct ssl_dane_st*  dane  );
struct X509_VERIFY_PARAM_st*  X509_VERIFY_PARAM_new();
void X509_VERIFY_PARAM_free(struct X509_VERIFY_PARAM_st*  param  );
int X509_VERIFY_PARAM_inherit(struct X509_VERIFY_PARAM_st*  to  , const struct X509_VERIFY_PARAM_st*  from  );
int X509_VERIFY_PARAM_set1(struct X509_VERIFY_PARAM_st*  to  , const struct X509_VERIFY_PARAM_st*  from  );
int X509_VERIFY_PARAM_set1_name(struct X509_VERIFY_PARAM_st*  param  , const char* name);
int X509_VERIFY_PARAM_set_flags(struct X509_VERIFY_PARAM_st*  param  , unsigned long  int flags);
int X509_VERIFY_PARAM_clear_flags(struct X509_VERIFY_PARAM_st*  param  , unsigned long  int flags);
unsigned long  int X509_VERIFY_PARAM_get_flags(const struct X509_VERIFY_PARAM_st*  param  );
int X509_VERIFY_PARAM_set_purpose(struct X509_VERIFY_PARAM_st*  param  , int purpose);
int X509_VERIFY_PARAM_get_purpose(const struct X509_VERIFY_PARAM_st*  param  );
int X509_VERIFY_PARAM_set_trust(struct X509_VERIFY_PARAM_st*  param  , int trust);
void X509_VERIFY_PARAM_set_depth(struct X509_VERIFY_PARAM_st*  param  , int depth);
void X509_VERIFY_PARAM_set_auth_level(struct X509_VERIFY_PARAM_st*  param  , int auth_level);
long  int  X509_VERIFY_PARAM_get_time(const struct X509_VERIFY_PARAM_st*  param  );
void X509_VERIFY_PARAM_set_time(struct X509_VERIFY_PARAM_st*  param  , long  int  t  );
int X509_VERIFY_PARAM_add0_policy(struct X509_VERIFY_PARAM_st*  param  , struct asn1_object_st*  policy  );
int X509_VERIFY_PARAM_set1_policies(struct X509_VERIFY_PARAM_st*  param  , struct stack_st_ASN1_OBJECT*  policies  );
int X509_VERIFY_PARAM_set_inh_flags(struct X509_VERIFY_PARAM_st*  param  , unsigned int  flags  );
unsigned int  X509_VERIFY_PARAM_get_inh_flags(const struct X509_VERIFY_PARAM_st*  param  );
char* X509_VERIFY_PARAM_get0_host(struct X509_VERIFY_PARAM_st*  param  , int idx);
int X509_VERIFY_PARAM_set1_host(struct X509_VERIFY_PARAM_st*  param  , const char* name, unsigned long  namelen  );
int X509_VERIFY_PARAM_add1_host(struct X509_VERIFY_PARAM_st*  param  , const char* name, unsigned long  namelen  );
void X509_VERIFY_PARAM_set_hostflags(struct X509_VERIFY_PARAM_st*  param  , unsigned int flags);
unsigned int X509_VERIFY_PARAM_get_hostflags(const struct X509_VERIFY_PARAM_st*  param  );
char* X509_VERIFY_PARAM_get0_peername(const struct X509_VERIFY_PARAM_st*  param  );
void X509_VERIFY_PARAM_move_peername(struct X509_VERIFY_PARAM_st*    , struct X509_VERIFY_PARAM_st*    );
char* X509_VERIFY_PARAM_get0_email(struct X509_VERIFY_PARAM_st*  param  );
int X509_VERIFY_PARAM_set1_email(struct X509_VERIFY_PARAM_st*  param  , const char* email, unsigned long  emaillen  );
char* X509_VERIFY_PARAM_get1_ip_asc(struct X509_VERIFY_PARAM_st*  param  );
int X509_VERIFY_PARAM_set1_ip(struct X509_VERIFY_PARAM_st*  param  , const unsigned char* ip, unsigned long  iplen  );
int X509_VERIFY_PARAM_set1_ip_asc(struct X509_VERIFY_PARAM_st*  param  , const char* ipasc);
int X509_VERIFY_PARAM_get_depth(const struct X509_VERIFY_PARAM_st*  param  );
int X509_VERIFY_PARAM_get_auth_level(const struct X509_VERIFY_PARAM_st*  param  );
const char* X509_VERIFY_PARAM_get0_name(const struct X509_VERIFY_PARAM_st*  param  );
int X509_VERIFY_PARAM_add0_table(struct X509_VERIFY_PARAM_st*  param  );
int X509_VERIFY_PARAM_get_count();
const struct X509_VERIFY_PARAM_st*  X509_VERIFY_PARAM_get0(int id);
const struct X509_VERIFY_PARAM_st*  X509_VERIFY_PARAM_lookup(const char* name);
void X509_VERIFY_PARAM_table_cleanup();
int X509_policy_check(struct X509_POLICY_TREE_st**  ptree  , int* pexplicit_policy, struct stack_st_X509*  certs  , struct stack_st_ASN1_OBJECT*  policy_oids  , unsigned int flags);
void X509_policy_tree_free(struct X509_POLICY_TREE_st*  tree  );
int X509_policy_tree_level_count(const struct X509_POLICY_TREE_st*  tree  );
struct X509_POLICY_LEVEL_st*  X509_policy_tree_get0_level(const struct X509_POLICY_TREE_st*  tree  , int i);
struct stack_st_X509_POLICY_NODE* X509_policy_tree_get0_policies(const struct X509_POLICY_TREE_st*  tree  );
struct stack_st_X509_POLICY_NODE* X509_policy_tree_get0_user_policies(const struct X509_POLICY_TREE_st*  tree  );
int X509_policy_level_node_count(struct X509_POLICY_LEVEL_st*  level  );
struct X509_POLICY_NODE_st*  X509_policy_level_get0_node(const struct X509_POLICY_LEVEL_st*  level  , int i);
const struct asn1_object_st*  X509_policy_node_get0_policy(const struct X509_POLICY_NODE_st*  node  );
struct stack_st_POLICYQUALINFO* X509_policy_node_get0_qualifiers(const struct X509_POLICY_NODE_st*  node  );
const struct X509_POLICY_NODE_st*  X509_policy_node_get0_parent(const struct X509_POLICY_NODE_st*  node  );
struct pkcs7_issuer_and_serial_st*  PKCS7_ISSUER_AND_SERIAL_new();
void PKCS7_ISSUER_AND_SERIAL_free(struct pkcs7_issuer_and_serial_st*  a  );
struct pkcs7_issuer_and_serial_st*  d2i_PKCS7_ISSUER_AND_SERIAL(struct pkcs7_issuer_and_serial_st**  a  , const unsigned char** in, long len);
int i2d_PKCS7_ISSUER_AND_SERIAL(const struct pkcs7_issuer_and_serial_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS7_ISSUER_AND_SERIAL_it();
int PKCS7_ISSUER_AND_SERIAL_digest(struct pkcs7_issuer_and_serial_st*  data  , const struct evp_md_st*  type  , unsigned char* md, unsigned int* len);
struct pkcs7_st*  d2i_PKCS7_fp(struct _IO_FILE*  fp  , struct pkcs7_st**  p7  );
int i2d_PKCS7_fp(struct _IO_FILE*  fp  , const struct pkcs7_st*  p7  );
struct pkcs7_st*  PKCS7_dup(const struct pkcs7_st*  a  );
struct pkcs7_st*  d2i_PKCS7_bio(struct bio_st*  bp  , struct pkcs7_st**  p7  );
int i2d_PKCS7_bio(struct bio_st*  bp  , const struct pkcs7_st*  p7  );
int i2d_PKCS7_bio_stream(struct bio_st*  out  , struct pkcs7_st*  p7  , struct bio_st*  in  , int flags);
int PEM_write_bio_PKCS7_stream(struct bio_st*  out  , struct pkcs7_st*  p7  , struct bio_st*  in  , int flags);
struct pkcs7_signer_info_st*  PKCS7_SIGNER_INFO_new();
void PKCS7_SIGNER_INFO_free(struct pkcs7_signer_info_st*  a  );
struct pkcs7_signer_info_st*  d2i_PKCS7_SIGNER_INFO(struct pkcs7_signer_info_st**  a  , const unsigned char** in, long len);
int i2d_PKCS7_SIGNER_INFO(const struct pkcs7_signer_info_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS7_SIGNER_INFO_it();
struct pkcs7_recip_info_st*  PKCS7_RECIP_INFO_new();
void PKCS7_RECIP_INFO_free(struct pkcs7_recip_info_st*  a  );
struct pkcs7_recip_info_st*  d2i_PKCS7_RECIP_INFO(struct pkcs7_recip_info_st**  a  , const unsigned char** in, long len);
int i2d_PKCS7_RECIP_INFO(const struct pkcs7_recip_info_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS7_RECIP_INFO_it();
struct pkcs7_signed_st*  PKCS7_SIGNED_new();
void PKCS7_SIGNED_free(struct pkcs7_signed_st*  a  );
struct pkcs7_signed_st*  d2i_PKCS7_SIGNED(struct pkcs7_signed_st**  a  , const unsigned char** in, long len);
int i2d_PKCS7_SIGNED(const struct pkcs7_signed_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS7_SIGNED_it();
struct pkcs7_enc_content_st*  PKCS7_ENC_CONTENT_new();
void PKCS7_ENC_CONTENT_free(struct pkcs7_enc_content_st*  a  );
struct pkcs7_enc_content_st*  d2i_PKCS7_ENC_CONTENT(struct pkcs7_enc_content_st**  a  , const unsigned char** in, long len);
int i2d_PKCS7_ENC_CONTENT(const struct pkcs7_enc_content_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS7_ENC_CONTENT_it();
struct pkcs7_enveloped_st*  PKCS7_ENVELOPE_new();
void PKCS7_ENVELOPE_free(struct pkcs7_enveloped_st*  a  );
struct pkcs7_enveloped_st*  d2i_PKCS7_ENVELOPE(struct pkcs7_enveloped_st**  a  , const unsigned char** in, long len);
int i2d_PKCS7_ENVELOPE(const struct pkcs7_enveloped_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS7_ENVELOPE_it();
struct pkcs7_signedandenveloped_st*  PKCS7_SIGN_ENVELOPE_new();
void PKCS7_SIGN_ENVELOPE_free(struct pkcs7_signedandenveloped_st*  a  );
struct pkcs7_signedandenveloped_st*  d2i_PKCS7_SIGN_ENVELOPE(struct pkcs7_signedandenveloped_st**  a  , const unsigned char** in, long len);
int i2d_PKCS7_SIGN_ENVELOPE(const struct pkcs7_signedandenveloped_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS7_SIGN_ENVELOPE_it();
struct pkcs7_digest_st*  PKCS7_DIGEST_new();
void PKCS7_DIGEST_free(struct pkcs7_digest_st*  a  );
struct pkcs7_digest_st*  d2i_PKCS7_DIGEST(struct pkcs7_digest_st**  a  , const unsigned char** in, long len);
int i2d_PKCS7_DIGEST(const struct pkcs7_digest_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS7_DIGEST_it();
struct pkcs7_encrypted_st*  PKCS7_ENCRYPT_new();
void PKCS7_ENCRYPT_free(struct pkcs7_encrypted_st*  a  );
struct pkcs7_encrypted_st*  d2i_PKCS7_ENCRYPT(struct pkcs7_encrypted_st**  a  , const unsigned char** in, long len);
int i2d_PKCS7_ENCRYPT(const struct pkcs7_encrypted_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS7_ENCRYPT_it();
struct pkcs7_st*  PKCS7_new();
void PKCS7_free(struct pkcs7_st*  a  );
struct pkcs7_st*  d2i_PKCS7(struct pkcs7_st**  a  , const unsigned char** in, long len);
int i2d_PKCS7(const struct pkcs7_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS7_it();
struct pkcs7_st*  PKCS7_new_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq);
const struct ASN1_ITEM_st*  PKCS7_ATTR_SIGN_it();
const struct ASN1_ITEM_st*  PKCS7_ATTR_VERIFY_it();
int i2d_PKCS7_NDEF(const struct pkcs7_st*  a  , unsigned char** out);
int PKCS7_print_ctx(struct bio_st*  out  , const struct pkcs7_st*  x  , int indent, const struct asn1_pctx_st*  pctx  );
long PKCS7_ctrl(struct pkcs7_st*  p7  , int cmd, long larg, char* parg);
int PKCS7_type_is_other(struct pkcs7_st*  p7  );
int PKCS7_set_type(struct pkcs7_st*  p7  , int type);
int PKCS7_set0_type_other(struct pkcs7_st*  p7  , int type, struct asn1_type_st*  other  );
int PKCS7_set_content(struct pkcs7_st*  p7  , struct pkcs7_st*  p7_data  );
int PKCS7_SIGNER_INFO_set(struct pkcs7_signer_info_st*  p7i  , struct x509_st*  x509  , struct evp_pkey_st*  pkey  , const struct evp_md_st*  dgst  );
int PKCS7_SIGNER_INFO_sign(struct pkcs7_signer_info_st*  si  );
int PKCS7_add_signer(struct pkcs7_st*  p7  , struct pkcs7_signer_info_st*  p7i  );
int PKCS7_add_certificate(struct pkcs7_st*  p7  , struct x509_st*  cert  );
int PKCS7_add_crl(struct pkcs7_st*  p7  , struct X509_crl_st*  crl  );
int PKCS7_content_new(struct pkcs7_st*  p7  , int nid);
int PKCS7_dataVerify(struct x509_store_st*  cert_store  , struct x509_store_ctx_st*  ctx  , struct bio_st*  bio  , struct pkcs7_st*  p7  , struct pkcs7_signer_info_st*  si  );
int PKCS7_signatureVerify(struct bio_st*  bio  , struct pkcs7_st*  p7  , struct pkcs7_signer_info_st*  si  , struct x509_st*  signer  );
struct bio_st*  PKCS7_dataInit(struct pkcs7_st*  p7  , struct bio_st*  bio  );
int PKCS7_dataFinal(struct pkcs7_st*  p7  , struct bio_st*  bio  );
struct bio_st*  PKCS7_dataDecode(struct pkcs7_st*  p7  , struct evp_pkey_st*  pkey  , struct bio_st*  in_bio  , struct x509_st*  pcert  );
struct pkcs7_signer_info_st*  PKCS7_add_signature(struct pkcs7_st*  p7  , struct x509_st*  x509  , struct evp_pkey_st*  pkey  , const struct evp_md_st*  dgst  );
struct x509_st*  PKCS7_cert_from_signer_info(struct pkcs7_st*  p7  , struct pkcs7_signer_info_st*  si  );
int PKCS7_set_digest(struct pkcs7_st*  p7  , const struct evp_md_st*  md  );
struct stack_st_PKCS7_SIGNER_INFO*  PKCS7_get_signer_info(struct pkcs7_st*  p7  );
struct pkcs7_recip_info_st*  PKCS7_add_recipient(struct pkcs7_st*  p7  , struct x509_st*  x509  );
void PKCS7_SIGNER_INFO_get0_algs(struct pkcs7_signer_info_st*  si  , struct evp_pkey_st**  pk  , struct X509_algor_st**  pdig  , struct X509_algor_st**  psig  );
void PKCS7_RECIP_INFO_get0_alg(struct pkcs7_recip_info_st*  ri  , struct X509_algor_st**  penc  );
int PKCS7_add_recipient_info(struct pkcs7_st*  p7  , struct pkcs7_recip_info_st*  ri  );
int PKCS7_RECIP_INFO_set(struct pkcs7_recip_info_st*  p7i  , struct x509_st*  x509  );
int PKCS7_set_cipher(struct pkcs7_st*  p7  , const struct evp_cipher_st*  cipher  );
int PKCS7_stream(unsigned char*** boundary, struct pkcs7_st*  p7  );
struct pkcs7_issuer_and_serial_st*  PKCS7_get_issuer_and_serial(struct pkcs7_st*  p7  , int idx);
struct asn1_string_st*  PKCS7_get_octet_string(struct pkcs7_st*  p7  );
struct asn1_string_st*  PKCS7_digest_from_attributes(struct stack_st_X509_ATTRIBUTE*  sk  );
int PKCS7_add_signed_attribute(struct pkcs7_signer_info_st*  p7si  , int nid, int type, void* data);
int PKCS7_add_attribute(struct pkcs7_signer_info_st*  p7si  , int nid, int atrtype, void* value);
struct asn1_type_st*  PKCS7_get_attribute(const struct pkcs7_signer_info_st*  si  , int nid);
struct asn1_type_st*  PKCS7_get_signed_attribute(const struct pkcs7_signer_info_st*  si  , int nid);
int PKCS7_set_signed_attributes(struct pkcs7_signer_info_st*  p7si  , struct stack_st_X509_ATTRIBUTE*  sk  );
int PKCS7_set_attributes(struct pkcs7_signer_info_st*  p7si  , struct stack_st_X509_ATTRIBUTE*  sk  );
struct pkcs7_st*  PKCS7_sign(struct x509_st*  signcert  , struct evp_pkey_st*  pkey  , struct stack_st_X509*  certs  , struct bio_st*  data  , int flags);
struct pkcs7_st*  PKCS7_sign_ex(struct x509_st*  signcert  , struct evp_pkey_st*  pkey  , struct stack_st_X509*  certs  , struct bio_st*  data  , int flags, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct pkcs7_signer_info_st*  PKCS7_sign_add_signer(struct pkcs7_st*  p7  , struct x509_st*  signcert  , struct evp_pkey_st*  pkey  , const struct evp_md_st*  md  , int flags);
int PKCS7_final(struct pkcs7_st*  p7  , struct bio_st*  data  , int flags);
int PKCS7_verify(struct pkcs7_st*  p7  , struct stack_st_X509*  certs  , struct x509_store_st*  store  , struct bio_st*  indata  , struct bio_st*  out  , int flags);
struct stack_st_X509*  PKCS7_get0_signers(struct pkcs7_st*  p7  , struct stack_st_X509*  certs  , int flags);
struct pkcs7_st*  PKCS7_encrypt(struct stack_st_X509*  certs  , struct bio_st*  in  , const struct evp_cipher_st*  cipher  , int flags);
struct pkcs7_st*  PKCS7_encrypt_ex(struct stack_st_X509*  certs  , struct bio_st*  in  , const struct evp_cipher_st*  cipher  , int flags, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PKCS7_decrypt(struct pkcs7_st*  p7  , struct evp_pkey_st*  pkey  , struct x509_st*  cert  , struct bio_st*  data  , int flags);
int PKCS7_add_attrib_smimecap(struct pkcs7_signer_info_st*  si  , struct stack_st_X509_ALGOR*  cap  );
struct stack_st_X509_ALGOR*  PKCS7_get_smimecap(struct pkcs7_signer_info_st*  si  );
int PKCS7_simple_smimecap(struct stack_st_X509_ALGOR*  sk  , int nid, int arg);
int PKCS7_add_attrib_content_type(struct pkcs7_signer_info_st*  si  , struct asn1_object_st*  coid  );
int PKCS7_add0_attrib_signing_time(struct pkcs7_signer_info_st*  si  , struct asn1_string_st*  t  );
int PKCS7_add1_attrib_digest(struct pkcs7_signer_info_st*  si  , const unsigned char* md, int mdlen);
int SMIME_write_PKCS7(struct bio_st*  bio  , struct pkcs7_st*  p7  , struct bio_st*  data  , int flags);
struct pkcs7_st*  SMIME_read_PKCS7_ex(struct bio_st*  bio  , struct bio_st**  bcont  , struct pkcs7_st**  p7  );
struct pkcs7_st*  SMIME_read_PKCS7(struct bio_st*  bio  , struct bio_st**  bcont  );
struct bio_st*  BIO_new_PKCS7(struct bio_st*  out  , struct pkcs7_st*  p7  );
void X509_CRL_set_default_method(const struct x509_crl_method_st*  meth  );
struct x509_crl_method_st*  X509_CRL_METHOD_new(int (*crl_init)(struct X509_crl_st* ), int (*crl_free)(struct X509_crl_st* ), int (*crl_lookup)(struct X509_crl_st* ,struct x509_revoked_st** ,const struct asn1_string_st* ,const struct X509_name_st* ), int (*crl_verify)(struct X509_crl_st* ,struct evp_pkey_st* ));
void X509_CRL_METHOD_free(struct x509_crl_method_st*  m  );
void X509_CRL_set_meth_data(struct X509_crl_st*  crl  , void* dat);
void* X509_CRL_get_meth_data(struct X509_crl_st*  crl  );
const char* X509_verify_cert_error_string(long n);
int X509_verify(struct x509_st*  a  , struct evp_pkey_st*  r  );
int X509_self_signed(struct x509_st*  cert  , int verify_signature);
int X509_REQ_verify_ex(struct X509_req_st*  a  , struct evp_pkey_st*  r  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_REQ_verify(struct X509_req_st*  a  , struct evp_pkey_st*  r  );
int X509_CRL_verify(struct X509_crl_st*  a  , struct evp_pkey_st*  r  );
int NETSCAPE_SPKI_verify(struct Netscape_spki_st*  a  , struct evp_pkey_st*  r  );
struct Netscape_spki_st*  NETSCAPE_SPKI_b64_decode(const char* str, int len);
char* NETSCAPE_SPKI_b64_encode(struct Netscape_spki_st*  x  );
struct evp_pkey_st*  NETSCAPE_SPKI_get_pubkey(struct Netscape_spki_st*  x  );
int NETSCAPE_SPKI_set_pubkey(struct Netscape_spki_st*  x  , struct evp_pkey_st*  pkey  );
int NETSCAPE_SPKI_print(struct bio_st*  out  , struct Netscape_spki_st*  spki  );
int X509_signature_dump(struct bio_st*  bp  , const struct asn1_string_st*  sig  , int indent);
int X509_signature_print(struct bio_st*  bp  , const struct X509_algor_st*  alg  , const struct asn1_string_st*  sig  );
int X509_sign(struct x509_st*  x  , struct evp_pkey_st*  pkey  , const struct evp_md_st*  md  );
int X509_sign_ctx(struct x509_st*  x  , struct evp_md_ctx_st*  ctx  );
int X509_REQ_sign(struct X509_req_st*  x  , struct evp_pkey_st*  pkey  , const struct evp_md_st*  md  );
int X509_REQ_sign_ctx(struct X509_req_st*  x  , struct evp_md_ctx_st*  ctx  );
int X509_CRL_sign(struct X509_crl_st*  x  , struct evp_pkey_st*  pkey  , const struct evp_md_st*  md  );
int X509_CRL_sign_ctx(struct X509_crl_st*  x  , struct evp_md_ctx_st*  ctx  );
int NETSCAPE_SPKI_sign(struct Netscape_spki_st*  x  , struct evp_pkey_st*  pkey  , const struct evp_md_st*  md  );
int X509_pubkey_digest(const struct x509_st*  data  , const struct evp_md_st*  type  , unsigned char* md, unsigned int* len);
int X509_digest(const struct x509_st*  data  , const struct evp_md_st*  type  , unsigned char* md, unsigned int* len);
struct asn1_string_st*  X509_digest_sig(const struct x509_st*  cert  , struct evp_md_st**  md_used  , int* md_is_fallback);
int X509_CRL_digest(const struct X509_crl_st*  data  , const struct evp_md_st*  type  , unsigned char* md, unsigned int* len);
int X509_REQ_digest(const struct X509_req_st*  data  , const struct evp_md_st*  type  , unsigned char* md, unsigned int* len);
int X509_NAME_digest(const struct X509_name_st*  data  , const struct evp_md_st*  type  , unsigned char* md, unsigned int* len);
struct x509_st*  X509_load_http(const char* url, struct bio_st*  bio  , struct bio_st*  rbio  , int timeout);
struct X509_crl_st*  X509_CRL_load_http(const char* url, struct bio_st*  bio  , struct bio_st*  rbio  , int timeout);
int CONF_set_default_method(struct conf_method_st*  meth  );
void CONF_set_nconf(struct conf_st*  conf  , struct lhash_st_CONF_VALUE*  hash  );
struct lhash_st_CONF_VALUE*  CONF_load(struct lhash_st_CONF_VALUE*  conf  , const char* file, long* eline);
struct lhash_st_CONF_VALUE*  CONF_load_fp(struct lhash_st_CONF_VALUE*  conf  , struct _IO_FILE*  fp  , long* eline);
struct lhash_st_CONF_VALUE*  CONF_load_bio(struct lhash_st_CONF_VALUE*  conf  , struct bio_st*  bp  , long* eline);
struct stack_st_CONF_VALUE*  CONF_get_section(struct lhash_st_CONF_VALUE*  conf  , const char* section);
char* CONF_get_string(struct lhash_st_CONF_VALUE*  conf  , const char* group, const char* name);
long CONF_get_number(struct lhash_st_CONF_VALUE*  conf  , const char* group, const char* name);
void CONF_free(struct lhash_st_CONF_VALUE*  conf  );
int CONF_dump_fp(struct lhash_st_CONF_VALUE*  conf  , struct _IO_FILE*  out  );
int CONF_dump_bio(struct lhash_st_CONF_VALUE*  conf  , struct bio_st*  out  );
void OPENSSL_config(const char* config_name);
struct conf_st*  NCONF_new_ex(struct ossl_lib_ctx_st*  libctx  , struct conf_method_st*  meth  );
struct ossl_lib_ctx_st*  NCONF_get0_libctx(const struct conf_st*  conf  );
struct conf_st*  NCONF_new(struct conf_method_st*  meth  );
struct conf_method_st*  NCONF_default();
struct conf_method_st*  NCONF_WIN32();
void NCONF_free(struct conf_st*  conf  );
void NCONF_free_data(struct conf_st*  conf  );
int NCONF_load(struct conf_st*  conf  , const char* file, long* eline);
int NCONF_load_fp(struct conf_st*  conf  , struct _IO_FILE*  fp  , long* eline);
int NCONF_load_bio(struct conf_st*  conf  , struct bio_st*  bp  , long* eline);
struct stack_st_OPENSSL_CSTRING*  NCONF_get_section_names(const struct conf_st*  conf  );
struct stack_st_CONF_VALUE*  NCONF_get_section(const struct conf_st*  conf  , const char* section);
char* NCONF_get_string(const struct conf_st*  conf  , const char* group, const char* name);
int NCONF_get_number_e(const struct conf_st*  conf  , const char* group, const char* name, long* result);
int NCONF_dump_fp(const struct conf_st*  conf  , struct _IO_FILE*  out  );
int NCONF_dump_bio(const struct conf_st*  conf  , struct bio_st*  out  );
int CONF_modules_load(const struct conf_st*  cnf  , const char* appname, unsigned long  int flags);
int CONF_modules_load_file_ex(struct ossl_lib_ctx_st*  libctx  , const char* filename, const char* appname, unsigned long  int flags);
int CONF_modules_load_file(const char* filename, const char* appname, unsigned long  int flags);
void CONF_modules_unload(int all);
void CONF_modules_finish();
int CONF_module_add(const char* name, int (*(*ifunc))(struct conf_imodule_st* ,const struct conf_st* )  , void (*(*ffunc))(struct conf_imodule_st* )  );
const char* CONF_imodule_get_name(const struct conf_imodule_st*  md  );
const char* CONF_imodule_get_value(const struct conf_imodule_st*  md  );
void* CONF_imodule_get_usr_data(const struct conf_imodule_st*  md  );
void CONF_imodule_set_usr_data(struct conf_imodule_st*  md  , void* usr_data);
struct conf_module_st*  CONF_imodule_get_module(const struct conf_imodule_st*  md  );
unsigned long  int CONF_imodule_get_flags(const struct conf_imodule_st*  md  );
void CONF_imodule_set_flags(struct conf_imodule_st*  md  , unsigned long  int flags);
void* CONF_module_get_usr_data(struct conf_module_st*  pmod  );
void CONF_module_set_usr_data(struct conf_module_st*  pmod  , void* usr_data);
char* CONF_get1_default_config_file();
int CONF_parse_list(const char* list, int sep, int nospc, int (*list_cb)(const char*,int,void*), void* arg);
void OPENSSL_load_builtin_modules();
int OSSL_parse_url(const char* url, char** pscheme, char** puser, char** phost, char** pport, int* pport_num, char** ppath, char** pquery, char** pfrag);
struct ossl_http_req_ctx_st*  OSSL_HTTP_REQ_CTX_new(struct bio_st*  wbio  , struct bio_st*  rbio  , int buf_size);
void OSSL_HTTP_REQ_CTX_free(struct ossl_http_req_ctx_st*  rctx  );
int OSSL_HTTP_REQ_CTX_set_request_line(struct ossl_http_req_ctx_st*  rctx  , int method_POST, const char* server, const char* port, const char* path);
int OSSL_HTTP_REQ_CTX_add1_header(struct ossl_http_req_ctx_st*  rctx  , const char* name, const char* value);
int OSSL_HTTP_REQ_CTX_set_expected(struct ossl_http_req_ctx_st*  rctx  , const char* content_type, int asn1, int timeout, int keep_alive);
int OSSL_HTTP_REQ_CTX_set1_req(struct ossl_http_req_ctx_st*  rctx  , const char* content_type, const struct ASN1_ITEM_st*  it  , const struct ASN1_VALUE_st*  req  );
int OSSL_HTTP_REQ_CTX_nbio(struct ossl_http_req_ctx_st*  rctx  );
int OSSL_HTTP_REQ_CTX_nbio_d2i(struct ossl_http_req_ctx_st*  rctx  , struct ASN1_VALUE_st**  pval  , const struct ASN1_ITEM_st*  it  );
struct bio_st*  OSSL_HTTP_REQ_CTX_exchange(struct ossl_http_req_ctx_st*  rctx  );
struct bio_st*  OSSL_HTTP_REQ_CTX_get0_mem_bio(const struct ossl_http_req_ctx_st*  rctx  );
unsigned long  OSSL_HTTP_REQ_CTX_get_resp_len(const struct ossl_http_req_ctx_st*  rctx  );
void OSSL_HTTP_REQ_CTX_set_max_response_length(struct ossl_http_req_ctx_st*  rctx  , unsigned long  int len);
void OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(struct ossl_http_req_ctx_st*  rctx  , unsigned long  count  );
int OSSL_HTTP_is_alive(const struct ossl_http_req_ctx_st*  rctx  );
struct ossl_http_req_ctx_st*  OSSL_HTTP_open(const char* server, const char* port, const char* proxy, const char* no_proxy, int use_ssl, struct bio_st*  bio  , struct bio_st*  rbio  , struct bio_st* (*bio_update_fn)(struct bio_st* ,void*,int,int)  , void* arg, int buf_size, int overall_timeout);
int OSSL_HTTP_proxy_connect(struct bio_st*  bio  , const char* server, const char* port, const char* proxyuser, const char* proxypass, int timeout, struct bio_st*  bio_err  , const char* prog);
int OSSL_HTTP_set1_request(struct ossl_http_req_ctx_st*  rctx  , const char* path, const struct stack_st_CONF_VALUE*  headers  , const char* content_type, struct bio_st*  req  , const char* expected_content_type, int expect_asn1, unsigned long  max_resp_len  , int timeout, int keep_alive);
struct bio_st*  OSSL_HTTP_exchange(struct ossl_http_req_ctx_st*  rctx  , char** redirection_url);
struct bio_st*  OSSL_HTTP_get(const char* url, const char* proxy, const char* no_proxy, struct bio_st*  bio  , struct bio_st*  rbio  , struct bio_st* (*bio_update_fn)(struct bio_st* ,void*,int,int)  , void* arg, int buf_size, const struct stack_st_CONF_VALUE*  headers  , const char* expected_content_type, int expect_asn1, unsigned long  max_resp_len  , int timeout);
struct bio_st*  OSSL_HTTP_transfer(struct ossl_http_req_ctx_st**  prctx  , const char* server, const char* port, const char* path, int use_ssl, const char* proxy, const char* no_proxy, struct bio_st*  bio  , struct bio_st*  rbio  , struct bio_st* (*bio_update_fn)(struct bio_st* ,void*,int,int)  , void* arg, int buf_size, const struct stack_st_CONF_VALUE*  headers  , const char* content_type, struct bio_st*  req  , const char* expected_content_type, int expect_asn1, unsigned long  max_resp_len  , int timeout, int keep_alive);
int OSSL_HTTP_close(struct ossl_http_req_ctx_st*  rctx  , int ok);
int OSSL_HTTP_parse_url(const char* url, int* pssl, char** puser, char** phost, char** pport, int* pport_num, char** ppath, char** pquery, char** pfrag);
const char* OSSL_HTTP_adapt_proxy(const char* proxy, const char* no_proxy, const char* server, int use_ssl);
struct x509_st*  d2i_X509_fp(struct _IO_FILE*  fp  , struct x509_st**  x509  );
int i2d_X509_fp(struct _IO_FILE*  fp  , const struct x509_st*  x509  );
struct X509_crl_st*  d2i_X509_CRL_fp(struct _IO_FILE*  fp  , struct X509_crl_st**  crl  );
int i2d_X509_CRL_fp(struct _IO_FILE*  fp  , const struct X509_crl_st*  crl  );
struct X509_req_st*  d2i_X509_REQ_fp(struct _IO_FILE*  fp  , struct X509_req_st**  req  );
int i2d_X509_REQ_fp(struct _IO_FILE*  fp  , const struct X509_req_st*  req  );
struct rsa_st*  d2i_RSAPrivateKey_fp(struct _IO_FILE*  fp  , struct rsa_st**  rsa  );
int i2d_RSAPrivateKey_fp(struct _IO_FILE*  fp  , const struct rsa_st*  rsa  );
struct rsa_st*  d2i_RSAPublicKey_fp(struct _IO_FILE*  fp  , struct rsa_st**  rsa  );
int i2d_RSAPublicKey_fp(struct _IO_FILE*  fp  , const struct rsa_st*  rsa  );
struct rsa_st*  d2i_RSA_PUBKEY_fp(struct _IO_FILE*  fp  , struct rsa_st**  rsa  );
int i2d_RSA_PUBKEY_fp(struct _IO_FILE*  fp  , const struct rsa_st*  rsa  );
struct dsa_st*  d2i_DSA_PUBKEY_fp(struct _IO_FILE*  fp  , struct dsa_st**  dsa  );
int i2d_DSA_PUBKEY_fp(struct _IO_FILE*  fp  , const struct dsa_st*  dsa  );
struct dsa_st*  d2i_DSAPrivateKey_fp(struct _IO_FILE*  fp  , struct dsa_st**  dsa  );
int i2d_DSAPrivateKey_fp(struct _IO_FILE*  fp  , const struct dsa_st*  dsa  );
struct ec_key_st*  d2i_EC_PUBKEY_fp(struct _IO_FILE*  fp  , struct ec_key_st**  eckey  );
int i2d_EC_PUBKEY_fp(struct _IO_FILE*  fp  , const struct ec_key_st*  eckey  );
struct ec_key_st*  d2i_ECPrivateKey_fp(struct _IO_FILE*  fp  , struct ec_key_st**  eckey  );
int i2d_ECPrivateKey_fp(struct _IO_FILE*  fp  , const struct ec_key_st*  eckey  );
struct X509_sig_st*  d2i_PKCS8_fp(struct _IO_FILE*  fp  , struct X509_sig_st**  p8  );
int i2d_PKCS8_fp(struct _IO_FILE*  fp  , const struct X509_sig_st*  p8  );
struct X509_pubkey_st*  d2i_X509_PUBKEY_fp(struct _IO_FILE*  fp  , struct X509_pubkey_st**  xpk  );
int i2d_X509_PUBKEY_fp(struct _IO_FILE*  fp  , const struct X509_pubkey_st*  xpk  );
struct pkcs8_priv_key_info_st*  d2i_PKCS8_PRIV_KEY_INFO_fp(struct _IO_FILE*  fp  , struct pkcs8_priv_key_info_st**  p8inf  );
int i2d_PKCS8_PRIV_KEY_INFO_fp(struct _IO_FILE*  fp  , const struct pkcs8_priv_key_info_st*  p8inf  );
int i2d_PKCS8PrivateKeyInfo_fp(struct _IO_FILE*  fp  , const struct evp_pkey_st*  key  );
int i2d_PrivateKey_fp(struct _IO_FILE*  fp  , const struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  d2i_PrivateKey_ex_fp(struct _IO_FILE*  fp  , struct evp_pkey_st**  a  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  d2i_PrivateKey_fp(struct _IO_FILE*  fp  , struct evp_pkey_st**  a  );
int i2d_PUBKEY_fp(struct _IO_FILE*  fp  , const struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  d2i_PUBKEY_ex_fp(struct _IO_FILE*  fp  , struct evp_pkey_st**  a  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  d2i_PUBKEY_fp(struct _IO_FILE*  fp  , struct evp_pkey_st**  a  );
struct x509_st*  d2i_X509_bio(struct bio_st*  bp  , struct x509_st**  x509  );
int i2d_X509_bio(struct bio_st*  bp  , const struct x509_st*  x509  );
struct X509_crl_st*  d2i_X509_CRL_bio(struct bio_st*  bp  , struct X509_crl_st**  crl  );
int i2d_X509_CRL_bio(struct bio_st*  bp  , const struct X509_crl_st*  crl  );
struct X509_req_st*  d2i_X509_REQ_bio(struct bio_st*  bp  , struct X509_req_st**  req  );
int i2d_X509_REQ_bio(struct bio_st*  bp  , const struct X509_req_st*  req  );
struct rsa_st*  d2i_RSAPrivateKey_bio(struct bio_st*  bp  , struct rsa_st**  rsa  );
int i2d_RSAPrivateKey_bio(struct bio_st*  bp  , const struct rsa_st*  rsa  );
struct rsa_st*  d2i_RSAPublicKey_bio(struct bio_st*  bp  , struct rsa_st**  rsa  );
int i2d_RSAPublicKey_bio(struct bio_st*  bp  , const struct rsa_st*  rsa  );
struct rsa_st*  d2i_RSA_PUBKEY_bio(struct bio_st*  bp  , struct rsa_st**  rsa  );
int i2d_RSA_PUBKEY_bio(struct bio_st*  bp  , const struct rsa_st*  rsa  );
struct dsa_st*  d2i_DSA_PUBKEY_bio(struct bio_st*  bp  , struct dsa_st**  dsa  );
int i2d_DSA_PUBKEY_bio(struct bio_st*  bp  , const struct dsa_st*  dsa  );
struct dsa_st*  d2i_DSAPrivateKey_bio(struct bio_st*  bp  , struct dsa_st**  dsa  );
int i2d_DSAPrivateKey_bio(struct bio_st*  bp  , const struct dsa_st*  dsa  );
struct ec_key_st*  d2i_EC_PUBKEY_bio(struct bio_st*  bp  , struct ec_key_st**  eckey  );
int i2d_EC_PUBKEY_bio(struct bio_st*  bp  , const struct ec_key_st*  eckey  );
struct ec_key_st*  d2i_ECPrivateKey_bio(struct bio_st*  bp  , struct ec_key_st**  eckey  );
int i2d_ECPrivateKey_bio(struct bio_st*  bp  , const struct ec_key_st*  eckey  );
struct X509_sig_st*  d2i_PKCS8_bio(struct bio_st*  bp  , struct X509_sig_st**  p8  );
int i2d_PKCS8_bio(struct bio_st*  bp  , const struct X509_sig_st*  p8  );
struct X509_pubkey_st*  d2i_X509_PUBKEY_bio(struct bio_st*  bp  , struct X509_pubkey_st**  xpk  );
int i2d_X509_PUBKEY_bio(struct bio_st*  bp  , const struct X509_pubkey_st*  xpk  );
struct pkcs8_priv_key_info_st*  d2i_PKCS8_PRIV_KEY_INFO_bio(struct bio_st*  bp  , struct pkcs8_priv_key_info_st**  p8inf  );
int i2d_PKCS8_PRIV_KEY_INFO_bio(struct bio_st*  bp  , const struct pkcs8_priv_key_info_st*  p8inf  );
int i2d_PKCS8PrivateKeyInfo_bio(struct bio_st*  bp  , const struct evp_pkey_st*  key  );
int i2d_PrivateKey_bio(struct bio_st*  bp  , const struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  d2i_PrivateKey_ex_bio(struct bio_st*  bp  , struct evp_pkey_st**  a  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  d2i_PrivateKey_bio(struct bio_st*  bp  , struct evp_pkey_st**  a  );
int i2d_PUBKEY_bio(struct bio_st*  bp  , const struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  d2i_PUBKEY_ex_bio(struct bio_st*  bp  , struct evp_pkey_st**  a  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  d2i_PUBKEY_bio(struct bio_st*  bp  , struct evp_pkey_st**  a  );
struct x509_st*  X509_dup(const struct x509_st*  a  );
struct X509_algor_st*  X509_ALGOR_dup(const struct X509_algor_st*  a  );
struct x509_attributes_st*  X509_ATTRIBUTE_dup(const struct x509_attributes_st*  a  );
struct X509_crl_st*  X509_CRL_dup(const struct X509_crl_st*  a  );
struct X509_extension_st*  X509_EXTENSION_dup(const struct X509_extension_st*  a  );
struct X509_pubkey_st*  X509_PUBKEY_dup(const struct X509_pubkey_st*  a  );
struct X509_req_st*  X509_REQ_dup(const struct X509_req_st*  a  );
struct x509_revoked_st*  X509_REVOKED_dup(const struct x509_revoked_st*  a  );
int X509_ALGOR_set0(struct X509_algor_st*  alg  , struct asn1_object_st*  aobj  , int ptype, void* pval);
void X509_ALGOR_get0(const struct asn1_object_st**  paobj  , int* pptype, const void** ppval, const struct X509_algor_st*  algor  );
void X509_ALGOR_set_md(struct X509_algor_st*  alg  , const struct evp_md_st*  md  );
int X509_ALGOR_cmp(const struct X509_algor_st*  a  , const struct X509_algor_st*  b  );
int X509_ALGOR_copy(struct X509_algor_st*  dest  , const struct X509_algor_st*  src  );
struct X509_name_st*  X509_NAME_dup(const struct X509_name_st*  a  );
struct X509_name_entry_st*  X509_NAME_ENTRY_dup(const struct X509_name_entry_st*  a  );
int X509_cmp_time(const struct asn1_string_st*  s  , long  int*  t  );
int X509_cmp_current_time(const struct asn1_string_st*  s  );
int X509_cmp_timeframe(const struct X509_VERIFY_PARAM_st*  vpm  , const struct asn1_string_st*  start  , const struct asn1_string_st*  end  );
struct asn1_string_st*  X509_time_adj(struct asn1_string_st*  s  , long adj, long  int*  t  );
struct asn1_string_st*  X509_time_adj_ex(struct asn1_string_st*  s  , int offset_day, long offset_sec, long  int*  t  );
struct asn1_string_st*  X509_gmtime_adj(struct asn1_string_st*  s  , long adj);
const char* X509_get_default_cert_area();
const char* X509_get_default_cert_dir();
const char* X509_get_default_cert_file();
const char* X509_get_default_cert_dir_env();
const char* X509_get_default_cert_file_env();
const char* X509_get_default_private_dir();
struct X509_req_st*  X509_to_X509_REQ(struct x509_st*  x  , struct evp_pkey_st*  pkey  , const struct evp_md_st*  md  );
struct x509_st*  X509_REQ_to_X509(struct X509_req_st*  r  , int days, struct evp_pkey_st*  pkey  );
struct X509_algor_st*  X509_ALGOR_new();
void X509_ALGOR_free(struct X509_algor_st*  a  );
struct X509_algor_st*  d2i_X509_ALGOR(struct X509_algor_st**  a  , const unsigned char** in, long len);
int i2d_X509_ALGOR(const struct X509_algor_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_ALGOR_it();
struct stack_st_X509_ALGOR*  d2i_X509_ALGORS(struct stack_st_X509_ALGOR**  a  , const unsigned char** in, long len);
int i2d_X509_ALGORS(const struct stack_st_X509_ALGOR*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_ALGORS_it();
struct X509_val_st*  X509_VAL_new();
void X509_VAL_free(struct X509_val_st*  a  );
struct X509_val_st*  d2i_X509_VAL(struct X509_val_st**  a  , const unsigned char** in, long len);
int i2d_X509_VAL(const struct X509_val_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_VAL_it();
struct X509_pubkey_st*  X509_PUBKEY_new();
void X509_PUBKEY_free(struct X509_pubkey_st*  a  );
struct X509_pubkey_st*  d2i_X509_PUBKEY(struct X509_pubkey_st**  a  , const unsigned char** in, long len);
int i2d_X509_PUBKEY(const struct X509_pubkey_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_PUBKEY_it();
struct X509_pubkey_st*  X509_PUBKEY_new_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_PUBKEY_set(struct X509_pubkey_st**  x  , struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  X509_PUBKEY_get0(const struct X509_pubkey_st*  key  );
struct evp_pkey_st*  X509_PUBKEY_get(const struct X509_pubkey_st*  key  );
int X509_get_pubkey_parameters(struct evp_pkey_st*  pkey  , struct stack_st_X509*  chain  );
long X509_get_pathlen(struct x509_st*  x  );
struct evp_pkey_st*  d2i_PUBKEY(struct evp_pkey_st**  a  , const unsigned char** in, long len);
int i2d_PUBKEY(const struct evp_pkey_st*  a  , unsigned char** out);
struct evp_pkey_st*  d2i_PUBKEY_ex(struct evp_pkey_st**  a  , const unsigned char** pp, long length, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct rsa_st*  d2i_RSA_PUBKEY(struct rsa_st**  a  , const unsigned char** in, long len);
int i2d_RSA_PUBKEY(const struct rsa_st*  a  , unsigned char** out);
struct dsa_st*  d2i_DSA_PUBKEY(struct dsa_st**  a  , const unsigned char** in, long len);
int i2d_DSA_PUBKEY(const struct dsa_st*  a  , unsigned char** out);
struct ec_key_st*  d2i_EC_PUBKEY(struct ec_key_st**  a  , const unsigned char** in, long len);
int i2d_EC_PUBKEY(const struct ec_key_st*  a  , unsigned char** out);
struct X509_sig_st*  X509_SIG_new();
void X509_SIG_free(struct X509_sig_st*  a  );
struct X509_sig_st*  d2i_X509_SIG(struct X509_sig_st**  a  , const unsigned char** in, long len);
int i2d_X509_SIG(const struct X509_sig_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_SIG_it();
void X509_SIG_get0(const struct X509_sig_st*  sig  , const struct X509_algor_st**  palg  , const struct asn1_string_st**  pdigest  );
void X509_SIG_getm(struct X509_sig_st*  sig  , struct X509_algor_st**  palg  , struct asn1_string_st**  pdigest  );
struct X509_req_info_st*  X509_REQ_INFO_new();
void X509_REQ_INFO_free(struct X509_req_info_st*  a  );
struct X509_req_info_st*  d2i_X509_REQ_INFO(struct X509_req_info_st**  a  , const unsigned char** in, long len);
int i2d_X509_REQ_INFO(const struct X509_req_info_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_REQ_INFO_it();
struct X509_req_st*  X509_REQ_new();
void X509_REQ_free(struct X509_req_st*  a  );
struct X509_req_st*  d2i_X509_REQ(struct X509_req_st**  a  , const unsigned char** in, long len);
int i2d_X509_REQ(const struct X509_req_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_REQ_it();
struct X509_req_st*  X509_REQ_new_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct x509_attributes_st*  X509_ATTRIBUTE_new();
void X509_ATTRIBUTE_free(struct x509_attributes_st*  a  );
struct x509_attributes_st*  d2i_X509_ATTRIBUTE(struct x509_attributes_st**  a  , const unsigned char** in, long len);
int i2d_X509_ATTRIBUTE(const struct x509_attributes_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_ATTRIBUTE_it();
struct x509_attributes_st*  X509_ATTRIBUTE_create(int nid, int atrtype, void* value);
struct X509_extension_st*  X509_EXTENSION_new();
void X509_EXTENSION_free(struct X509_extension_st*  a  );
struct X509_extension_st*  d2i_X509_EXTENSION(struct X509_extension_st**  a  , const unsigned char** in, long len);
int i2d_X509_EXTENSION(const struct X509_extension_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_EXTENSION_it();
struct stack_st_X509_EXTENSION*  d2i_X509_EXTENSIONS(struct stack_st_X509_EXTENSION**  a  , const unsigned char** in, long len);
int i2d_X509_EXTENSIONS(const struct stack_st_X509_EXTENSION*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_EXTENSIONS_it();
struct X509_name_entry_st*  X509_NAME_ENTRY_new();
void X509_NAME_ENTRY_free(struct X509_name_entry_st*  a  );
struct X509_name_entry_st*  d2i_X509_NAME_ENTRY(struct X509_name_entry_st**  a  , const unsigned char** in, long len);
int i2d_X509_NAME_ENTRY(const struct X509_name_entry_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_NAME_ENTRY_it();
struct X509_name_st*  X509_NAME_new();
void X509_NAME_free(struct X509_name_st*  a  );
struct X509_name_st*  d2i_X509_NAME(struct X509_name_st**  a  , const unsigned char** in, long len);
int i2d_X509_NAME(const struct X509_name_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_NAME_it();
int X509_NAME_set(struct X509_name_st**  xn  , const struct X509_name_st*  name  );
struct x509_cinf_st*  X509_CINF_new();
void X509_CINF_free(struct x509_cinf_st*  a  );
struct x509_cinf_st*  d2i_X509_CINF(struct x509_cinf_st**  a  , const unsigned char** in, long len);
int i2d_X509_CINF(const struct x509_cinf_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_CINF_it();
struct x509_st*  X509_new();
void X509_free(struct x509_st*  a  );
struct x509_st*  d2i_X509(struct x509_st**  a  , const unsigned char** in, long len);
int i2d_X509(const struct x509_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_it();
struct x509_st*  X509_new_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct x509_cert_aux_st*  X509_CERT_AUX_new();
void X509_CERT_AUX_free(struct x509_cert_aux_st*  a  );
struct x509_cert_aux_st*  d2i_X509_CERT_AUX(struct x509_cert_aux_st**  a  , const unsigned char** in, long len);
int i2d_X509_CERT_AUX(const struct x509_cert_aux_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_CERT_AUX_it();
int X509_set_ex_data(struct x509_st*  r  , int idx, void* arg);
void* X509_get_ex_data(const struct x509_st*  r  , int idx);
struct x509_st*  d2i_X509_AUX(struct x509_st**  a  , const unsigned char** in, long len);
int i2d_X509_AUX(const struct x509_st*  a  , unsigned char** out);
int i2d_re_X509_tbs(struct x509_st*  x  , unsigned char** pp);
int X509_SIG_INFO_get(const struct x509_sig_info_st*  siginf  , int* mdnid, int* pknid, int* secbits, unsigned int*  flags  );
void X509_SIG_INFO_set(struct x509_sig_info_st*  siginf  , int mdnid, int pknid, int secbits, unsigned int  flags  );
int X509_get_signature_info(struct x509_st*  x  , int* mdnid, int* pknid, int* secbits, unsigned int*  flags  );
void X509_get0_signature(const struct asn1_string_st**  psig  , const struct X509_algor_st**  palg  , const struct x509_st*  x  );
int X509_get_signature_nid(const struct x509_st*  x  );
void X509_set0_distinguishing_id(struct x509_st*  x  , struct asn1_string_st*  d_id  );
struct asn1_string_st*  X509_get0_distinguishing_id(struct x509_st*  x  );
void X509_REQ_set0_distinguishing_id(struct X509_req_st*  x  , struct asn1_string_st*  d_id  );
struct asn1_string_st*  X509_REQ_get0_distinguishing_id(struct X509_req_st*  x  );
int X509_alias_set1(struct x509_st*  x  , const unsigned char* name, int len);
int X509_keyid_set1(struct x509_st*  x  , const unsigned char* id, int len);
unsigned char* X509_alias_get0(struct x509_st*  x  , int* len);
unsigned char* X509_keyid_get0(struct x509_st*  x  , int* len);
struct x509_revoked_st*  X509_REVOKED_new();
void X509_REVOKED_free(struct x509_revoked_st*  a  );
struct x509_revoked_st*  d2i_X509_REVOKED(struct x509_revoked_st**  a  , const unsigned char** in, long len);
int i2d_X509_REVOKED(const struct x509_revoked_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_REVOKED_it();
struct X509_crl_info_st*  X509_CRL_INFO_new();
void X509_CRL_INFO_free(struct X509_crl_info_st*  a  );
struct X509_crl_info_st*  d2i_X509_CRL_INFO(struct X509_crl_info_st**  a  , const unsigned char** in, long len);
int i2d_X509_CRL_INFO(const struct X509_crl_info_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_CRL_INFO_it();
struct X509_crl_st*  X509_CRL_new();
void X509_CRL_free(struct X509_crl_st*  a  );
struct X509_crl_st*  d2i_X509_CRL(struct X509_crl_st**  a  , const unsigned char** in, long len);
int i2d_X509_CRL(const struct X509_crl_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  X509_CRL_it();
struct X509_crl_st*  X509_CRL_new_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_CRL_add0_revoked(struct X509_crl_st*  crl  , struct x509_revoked_st*  rev  );
int X509_CRL_get0_by_serial(struct X509_crl_st*  crl  , struct x509_revoked_st**  ret  , const struct asn1_string_st*  serial  );
int X509_CRL_get0_by_cert(struct X509_crl_st*  crl  , struct x509_revoked_st**  ret  , struct x509_st*  x  );
struct private_key_st*  X509_PKEY_new();
void X509_PKEY_free(struct private_key_st*  a  );
struct Netscape_spki_st*  NETSCAPE_SPKI_new();
void NETSCAPE_SPKI_free(struct Netscape_spki_st*  a  );
struct Netscape_spki_st*  d2i_NETSCAPE_SPKI(struct Netscape_spki_st**  a  , const unsigned char** in, long len);
int i2d_NETSCAPE_SPKI(const struct Netscape_spki_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  NETSCAPE_SPKI_it();
struct Netscape_spkac_st*  NETSCAPE_SPKAC_new();
void NETSCAPE_SPKAC_free(struct Netscape_spkac_st*  a  );
struct Netscape_spkac_st*  d2i_NETSCAPE_SPKAC(struct Netscape_spkac_st**  a  , const unsigned char** in, long len);
int i2d_NETSCAPE_SPKAC(const struct Netscape_spkac_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  NETSCAPE_SPKAC_it();
struct Netscape_certificate_sequence*  NETSCAPE_CERT_SEQUENCE_new();
void NETSCAPE_CERT_SEQUENCE_free(struct Netscape_certificate_sequence*  a  );
struct Netscape_certificate_sequence*  d2i_NETSCAPE_CERT_SEQUENCE(struct Netscape_certificate_sequence**  a  , const unsigned char** in, long len);
int i2d_NETSCAPE_CERT_SEQUENCE(const struct Netscape_certificate_sequence*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  NETSCAPE_CERT_SEQUENCE_it();
struct X509_info_st*  X509_INFO_new();
void X509_INFO_free(struct X509_info_st*  a  );
char* X509_NAME_oneline(const struct X509_name_st*  a  , char* buf, int size);
int ASN1_verify(int (*(*i2d))(const void*,unsigned char**)  , struct X509_algor_st*  algor1  , struct asn1_string_st*  signature  , char* data, struct evp_pkey_st*  pkey  );
int ASN1_digest(int (*(*i2d))(const void*,unsigned char**)  , const struct evp_md_st*  type  , char* data, unsigned char* md, unsigned int* len);
int ASN1_sign(int (*(*i2d))(const void*,unsigned char**)  , struct X509_algor_st*  algor1  , struct X509_algor_st*  algor2  , struct asn1_string_st*  signature  , char* data, struct evp_pkey_st*  pkey  , const struct evp_md_st*  type  );
int ASN1_item_digest(const struct ASN1_ITEM_st*  it  , const struct evp_md_st*  type  , void* data, unsigned char* md, unsigned int* len);
int ASN1_item_verify(const struct ASN1_ITEM_st*  it  , const struct X509_algor_st*  alg  , const struct asn1_string_st*  signature  , const void* data, struct evp_pkey_st*  pkey  );
int ASN1_item_verify_ctx(const struct ASN1_ITEM_st*  it  , const struct X509_algor_st*  alg  , const struct asn1_string_st*  signature  , const void* data, struct evp_md_ctx_st*  ctx  );
int ASN1_item_sign(const struct ASN1_ITEM_st*  it  , struct X509_algor_st*  algor1  , struct X509_algor_st*  algor2  , struct asn1_string_st*  signature  , const void* data, struct evp_pkey_st*  pkey  , const struct evp_md_st*  md  );
int ASN1_item_sign_ctx(const struct ASN1_ITEM_st*  it  , struct X509_algor_st*  algor1  , struct X509_algor_st*  algor2  , struct asn1_string_st*  signature  , const void* data, struct evp_md_ctx_st*  ctx  );
long X509_get_version(const struct x509_st*  x  );
int X509_set_version(struct x509_st*  x  , long version);
int X509_set_serialNumber(struct x509_st*  x  , struct asn1_string_st*  serial  );
struct asn1_string_st*  X509_get_serialNumber(struct x509_st*  x  );
const struct asn1_string_st*  X509_get0_serialNumber(const struct x509_st*  x  );
int X509_set_issuer_name(struct x509_st*  x  , const struct X509_name_st*  name  );
struct X509_name_st*  X509_get_issuer_name(const struct x509_st*  a  );
int X509_set_subject_name(struct x509_st*  x  , const struct X509_name_st*  name  );
struct X509_name_st*  X509_get_subject_name(const struct x509_st*  a  );
const struct asn1_string_st*  X509_get0_notBefore(const struct x509_st*  x  );
struct asn1_string_st*  X509_getm_notBefore(const struct x509_st*  x  );
int X509_set1_notBefore(struct x509_st*  x  , const struct asn1_string_st*  tm  );
const struct asn1_string_st*  X509_get0_notAfter(const struct x509_st*  x  );
struct asn1_string_st*  X509_getm_notAfter(const struct x509_st*  x  );
int X509_set1_notAfter(struct x509_st*  x  , const struct asn1_string_st*  tm  );
int X509_set_pubkey(struct x509_st*  x  , struct evp_pkey_st*  pkey  );
int X509_up_ref(struct x509_st*  x  );
int X509_get_signature_type(const struct x509_st*  x  );
struct X509_pubkey_st*  X509_get_X509_PUBKEY(const struct x509_st*  x  );
const struct stack_st_X509_EXTENSION*  X509_get0_extensions(const struct x509_st*  x  );
void X509_get0_uids(const struct x509_st*  x  , const struct asn1_string_st**  piuid  , const struct asn1_string_st**  psuid  );
const struct X509_algor_st*  X509_get0_tbs_sigalg(const struct x509_st*  x  );
struct evp_pkey_st*  X509_get0_pubkey(const struct x509_st*  x  );
struct evp_pkey_st*  X509_get_pubkey(struct x509_st*  x  );
struct asn1_string_st*  X509_get0_pubkey_bitstr(const struct x509_st*  x  );
long X509_REQ_get_version(const struct X509_req_st*  req  );
int X509_REQ_set_version(struct X509_req_st*  x  , long version);
struct X509_name_st*  X509_REQ_get_subject_name(const struct X509_req_st*  req  );
int X509_REQ_set_subject_name(struct X509_req_st*  req  , const struct X509_name_st*  name  );
void X509_REQ_get0_signature(const struct X509_req_st*  req  , const struct asn1_string_st**  psig  , const struct X509_algor_st**  palg  );
void X509_REQ_set0_signature(struct X509_req_st*  req  , struct asn1_string_st*  psig  );
int X509_REQ_set1_signature_algo(struct X509_req_st*  req  , struct X509_algor_st*  palg  );
int X509_REQ_get_signature_nid(const struct X509_req_st*  req  );
int i2d_re_X509_REQ_tbs(struct X509_req_st*  req  , unsigned char** pp);
int X509_REQ_set_pubkey(struct X509_req_st*  x  , struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  X509_REQ_get_pubkey(struct X509_req_st*  req  );
struct evp_pkey_st*  X509_REQ_get0_pubkey(const struct X509_req_st*  req  );
struct X509_pubkey_st*  X509_REQ_get_X509_PUBKEY(struct X509_req_st*  req  );
int X509_REQ_extension_nid(int nid);
int* X509_REQ_get_extension_nids();
void X509_REQ_set_extension_nids(int* nids);
struct stack_st_X509_EXTENSION*  X509_REQ_get_extensions(struct X509_req_st*  req  );
int X509_REQ_add_extensions_nid(struct X509_req_st*  req  , const struct stack_st_X509_EXTENSION*  exts  , int nid);
int X509_REQ_add_extensions(struct X509_req_st*  req  , const struct stack_st_X509_EXTENSION*  ext  );
int X509_REQ_get_attr_count(const struct X509_req_st*  req  );
int X509_REQ_get_attr_by_NID(const struct X509_req_st*  req  , int nid, int lastpos);
int X509_REQ_get_attr_by_OBJ(const struct X509_req_st*  req  , const struct asn1_object_st*  obj  , int lastpos);
struct x509_attributes_st*  X509_REQ_get_attr(const struct X509_req_st*  req  , int loc);
struct x509_attributes_st*  X509_REQ_delete_attr(struct X509_req_st*  req  , int loc);
int X509_REQ_add1_attr(struct X509_req_st*  req  , struct x509_attributes_st*  attr  );
int X509_REQ_add1_attr_by_OBJ(struct X509_req_st*  req  , const struct asn1_object_st*  obj  , int type, const unsigned char* bytes, int len);
int X509_REQ_add1_attr_by_NID(struct X509_req_st*  req  , int nid, int type, const unsigned char* bytes, int len);
int X509_REQ_add1_attr_by_txt(struct X509_req_st*  req  , const char* attrname, int type, const unsigned char* bytes, int len);
int X509_CRL_set_version(struct X509_crl_st*  x  , long version);
int X509_CRL_set_issuer_name(struct X509_crl_st*  x  , const struct X509_name_st*  name  );
int X509_CRL_set1_lastUpdate(struct X509_crl_st*  x  , const struct asn1_string_st*  tm  );
int X509_CRL_set1_nextUpdate(struct X509_crl_st*  x  , const struct asn1_string_st*  tm  );
int X509_CRL_sort(struct X509_crl_st*  crl  );
int X509_CRL_up_ref(struct X509_crl_st*  crl  );
long X509_CRL_get_version(const struct X509_crl_st*  crl  );
const struct asn1_string_st*  X509_CRL_get0_lastUpdate(const struct X509_crl_st*  crl  );
const struct asn1_string_st*  X509_CRL_get0_nextUpdate(const struct X509_crl_st*  crl  );
struct asn1_string_st*  X509_CRL_get_lastUpdate(struct X509_crl_st*  crl  );
struct asn1_string_st*  X509_CRL_get_nextUpdate(struct X509_crl_st*  crl  );
struct X509_name_st*  X509_CRL_get_issuer(const struct X509_crl_st*  crl  );
const struct stack_st_X509_EXTENSION*  X509_CRL_get0_extensions(const struct X509_crl_st*  crl  );
struct stack_st_X509_REVOKED*  X509_CRL_get_REVOKED(struct X509_crl_st*  crl  );
void X509_CRL_get0_signature(const struct X509_crl_st*  crl  , const struct asn1_string_st**  psig  , const struct X509_algor_st**  palg  );
int X509_CRL_get_signature_nid(const struct X509_crl_st*  crl  );
int i2d_re_X509_CRL_tbs(struct X509_crl_st*  req  , unsigned char** pp);
const struct asn1_string_st*  X509_REVOKED_get0_serialNumber(const struct x509_revoked_st*  x  );
int X509_REVOKED_set_serialNumber(struct x509_revoked_st*  x  , struct asn1_string_st*  serial  );
const struct asn1_string_st*  X509_REVOKED_get0_revocationDate(const struct x509_revoked_st*  x  );
int X509_REVOKED_set_revocationDate(struct x509_revoked_st*  r  , struct asn1_string_st*  tm  );
const struct stack_st_X509_EXTENSION*  X509_REVOKED_get0_extensions(const struct x509_revoked_st*  r  );
struct X509_crl_st*  X509_CRL_diff(struct X509_crl_st*  base  , struct X509_crl_st*  newer  , struct evp_pkey_st*  skey  , const struct evp_md_st*  md  , unsigned int flags);
int X509_REQ_check_private_key(const struct X509_req_st*  req  , struct evp_pkey_st*  pkey  );
int X509_check_private_key(const struct x509_st*  cert  , const struct evp_pkey_st*  pkey  );
int X509_chain_check_suiteb(int* perror_depth, struct x509_st*  x  , struct stack_st_X509*  chain  , unsigned long  int flags);
int X509_CRL_check_suiteb(struct X509_crl_st*  crl  , struct evp_pkey_st*  pk  , unsigned long  int flags);
void OSSL_STACK_OF_X509_free(struct stack_st_X509*  certs  );
struct stack_st_X509*  X509_chain_up_ref(struct stack_st_X509*  chain  );
int X509_issuer_and_serial_cmp(const struct x509_st*  a  , const struct x509_st*  b  );
unsigned long  int X509_issuer_and_serial_hash(struct x509_st*  a  );
int X509_issuer_name_cmp(const struct x509_st*  a  , const struct x509_st*  b  );
unsigned long  int X509_issuer_name_hash(struct x509_st*  a  );
int X509_subject_name_cmp(const struct x509_st*  a  , const struct x509_st*  b  );
unsigned long  int X509_subject_name_hash(struct x509_st*  x  );
unsigned long  int X509_issuer_name_hash_old(struct x509_st*  a  );
unsigned long  int X509_subject_name_hash_old(struct x509_st*  x  );
int X509_add_cert(struct stack_st_X509*  sk  , struct x509_st*  cert  , int flags);
int X509_add_certs(struct stack_st_X509*  sk  , struct stack_st_X509*  certs  , int flags);
int X509_cmp(const struct x509_st*  a  , const struct x509_st*  b  );
int X509_NAME_cmp(const struct X509_name_st*  a  , const struct X509_name_st*  b  );
int X509_certificate_type(const struct x509_st*  x  , const struct evp_pkey_st*  pubkey  );
unsigned long  int X509_NAME_hash_ex(const struct X509_name_st*  x  , struct ossl_lib_ctx_st*  libctx  , const char* propq, int* ok);
unsigned long  int X509_NAME_hash_old(const struct X509_name_st*  x  );
int X509_CRL_cmp(const struct X509_crl_st*  a  , const struct X509_crl_st*  b  );
int X509_CRL_match(const struct X509_crl_st*  a  , const struct X509_crl_st*  b  );
int X509_aux_print(struct bio_st*  out  , struct x509_st*  x  , int indent);
int X509_print_ex_fp(struct _IO_FILE*  bp  , struct x509_st*  x  , unsigned long  int nmflag, unsigned long  int cflag);
int X509_print_fp(struct _IO_FILE*  bp  , struct x509_st*  x  );
int X509_CRL_print_fp(struct _IO_FILE*  bp  , struct X509_crl_st*  x  );
int X509_REQ_print_fp(struct _IO_FILE*  bp  , struct X509_req_st*  req  );
int X509_NAME_print_ex_fp(struct _IO_FILE*  fp  , const struct X509_name_st*  nm  , int indent, unsigned long  int flags);
int X509_NAME_print(struct bio_st*  bp  , const struct X509_name_st*  name  , int obase);
int X509_NAME_print_ex(struct bio_st*  out  , const struct X509_name_st*  nm  , int indent, unsigned long  int flags);
int X509_print_ex(struct bio_st*  bp  , struct x509_st*  x  , unsigned long  int nmflag, unsigned long  int cflag);
int X509_print(struct bio_st*  bp  , struct x509_st*  x  );
int X509_ocspid_print(struct bio_st*  bp  , struct x509_st*  x  );
int X509_CRL_print_ex(struct bio_st*  out  , struct X509_crl_st*  x  , unsigned long  int nmflag);
int X509_CRL_print(struct bio_st*  bp  , struct X509_crl_st*  x  );
int X509_REQ_print_ex(struct bio_st*  bp  , struct X509_req_st*  x  , unsigned long  int nmflag, unsigned long  int cflag);
int X509_REQ_print(struct bio_st*  bp  , struct X509_req_st*  req  );
int X509_NAME_entry_count(const struct X509_name_st*  name  );
int X509_NAME_get_text_by_NID(const struct X509_name_st*  name  , int nid, char* buf, int len);
int X509_NAME_get_text_by_OBJ(const struct X509_name_st*  name  , const struct asn1_object_st*  obj  , char* buf, int len);
int X509_NAME_get_index_by_NID(const struct X509_name_st*  name  , int nid, int lastpos);
int X509_NAME_get_index_by_OBJ(const struct X509_name_st*  name  , const struct asn1_object_st*  obj  , int lastpos);
struct X509_name_entry_st*  X509_NAME_get_entry(const struct X509_name_st*  name  , int loc);
struct X509_name_entry_st*  X509_NAME_delete_entry(struct X509_name_st*  name  , int loc);
int X509_NAME_add_entry(struct X509_name_st*  name  , const struct X509_name_entry_st*  ne  , int loc, int set);
int X509_NAME_add_entry_by_OBJ(struct X509_name_st*  name  , const struct asn1_object_st*  obj  , int type, const unsigned char* bytes, int len, int loc, int set);
int X509_NAME_add_entry_by_NID(struct X509_name_st*  name  , int nid, int type, const unsigned char* bytes, int len, int loc, int set);
struct X509_name_entry_st*  X509_NAME_ENTRY_create_by_txt(struct X509_name_entry_st**  ne  , const char* field, int type, const unsigned char* bytes, int len);
struct X509_name_entry_st*  X509_NAME_ENTRY_create_by_NID(struct X509_name_entry_st**  ne  , int nid, int type, const unsigned char* bytes, int len);
int X509_NAME_add_entry_by_txt(struct X509_name_st*  name  , const char* field, int type, const unsigned char* bytes, int len, int loc, int set);
struct X509_name_entry_st*  X509_NAME_ENTRY_create_by_OBJ(struct X509_name_entry_st**  ne  , const struct asn1_object_st*  obj  , int type, const unsigned char* bytes, int len);
int X509_NAME_ENTRY_set_object(struct X509_name_entry_st*  ne  , const struct asn1_object_st*  obj  );
int X509_NAME_ENTRY_set_data(struct X509_name_entry_st*  ne  , int type, const unsigned char* bytes, int len);
struct asn1_object_st*  X509_NAME_ENTRY_get_object(const struct X509_name_entry_st*  ne  );
struct asn1_string_st*  X509_NAME_ENTRY_get_data(const struct X509_name_entry_st*  ne  );
int X509_NAME_ENTRY_set(const struct X509_name_entry_st*  ne  );
int X509_NAME_get0_der(const struct X509_name_st*  nm  , const unsigned char** pder, unsigned long*  pderlen  );
int X509v3_get_ext_count(const struct stack_st_X509_EXTENSION*  x  );
int X509v3_get_ext_by_NID(const struct stack_st_X509_EXTENSION*  x  , int nid, int lastpos);
int X509v3_get_ext_by_OBJ(const struct stack_st_X509_EXTENSION*  x  , const struct asn1_object_st*  obj  , int lastpos);
int X509v3_get_ext_by_critical(const struct stack_st_X509_EXTENSION*  x  , int crit, int lastpos);
struct X509_extension_st*  X509v3_get_ext(const struct stack_st_X509_EXTENSION*  x  , int loc);
struct X509_extension_st*  X509v3_delete_ext(struct stack_st_X509_EXTENSION*  x  , int loc);
struct stack_st_X509_EXTENSION*  X509v3_add_ext(struct stack_st_X509_EXTENSION**  x  , struct X509_extension_st*  ex  , int loc);
struct stack_st_X509_EXTENSION*  X509v3_add_extensions(struct stack_st_X509_EXTENSION**  target  , const struct stack_st_X509_EXTENSION*  exts  );
int X509_get_ext_count(const struct x509_st*  x  );
int X509_get_ext_by_NID(const struct x509_st*  x  , int nid, int lastpos);
int X509_get_ext_by_OBJ(const struct x509_st*  x  , const struct asn1_object_st*  obj  , int lastpos);
int X509_get_ext_by_critical(const struct x509_st*  x  , int crit, int lastpos);
struct X509_extension_st*  X509_get_ext(const struct x509_st*  x  , int loc);
struct X509_extension_st*  X509_delete_ext(struct x509_st*  x  , int loc);
int X509_add_ext(struct x509_st*  x  , struct X509_extension_st*  ex  , int loc);
void* X509_get_ext_d2i(const struct x509_st*  x  , int nid, int* crit, int* idx);
int X509_add1_ext_i2d(struct x509_st*  x  , int nid, void* value, int crit, unsigned long  int flags);
int X509_CRL_get_ext_count(const struct X509_crl_st*  x  );
int X509_CRL_get_ext_by_NID(const struct X509_crl_st*  x  , int nid, int lastpos);
int X509_CRL_get_ext_by_OBJ(const struct X509_crl_st*  x  , const struct asn1_object_st*  obj  , int lastpos);
int X509_CRL_get_ext_by_critical(const struct X509_crl_st*  x  , int crit, int lastpos);
struct X509_extension_st*  X509_CRL_get_ext(const struct X509_crl_st*  x  , int loc);
struct X509_extension_st*  X509_CRL_delete_ext(struct X509_crl_st*  x  , int loc);
int X509_CRL_add_ext(struct X509_crl_st*  x  , struct X509_extension_st*  ex  , int loc);
void* X509_CRL_get_ext_d2i(const struct X509_crl_st*  x  , int nid, int* crit, int* idx);
int X509_CRL_add1_ext_i2d(struct X509_crl_st*  x  , int nid, void* value, int crit, unsigned long  int flags);
int X509_REVOKED_get_ext_count(const struct x509_revoked_st*  x  );
int X509_REVOKED_get_ext_by_NID(const struct x509_revoked_st*  x  , int nid, int lastpos);
int X509_REVOKED_get_ext_by_OBJ(const struct x509_revoked_st*  x  , const struct asn1_object_st*  obj  , int lastpos);
int X509_REVOKED_get_ext_by_critical(const struct x509_revoked_st*  x  , int crit, int lastpos);
struct X509_extension_st*  X509_REVOKED_get_ext(const struct x509_revoked_st*  x  , int loc);
struct X509_extension_st*  X509_REVOKED_delete_ext(struct x509_revoked_st*  x  , int loc);
int X509_REVOKED_add_ext(struct x509_revoked_st*  x  , struct X509_extension_st*  ex  , int loc);
void* X509_REVOKED_get_ext_d2i(const struct x509_revoked_st*  x  , int nid, int* crit, int* idx);
int X509_REVOKED_add1_ext_i2d(struct x509_revoked_st*  x  , int nid, void* value, int crit, unsigned long  int flags);
struct X509_extension_st*  X509_EXTENSION_create_by_NID(struct X509_extension_st**  ex  , int nid, int crit, struct asn1_string_st*  data  );
struct X509_extension_st*  X509_EXTENSION_create_by_OBJ(struct X509_extension_st**  ex  , const struct asn1_object_st*  obj  , int crit, struct asn1_string_st*  data  );
int X509_EXTENSION_set_object(struct X509_extension_st*  ex  , const struct asn1_object_st*  obj  );
int X509_EXTENSION_set_critical(struct X509_extension_st*  ex  , int crit);
int X509_EXTENSION_set_data(struct X509_extension_st*  ex  , struct asn1_string_st*  data  );
struct asn1_object_st*  X509_EXTENSION_get_object(struct X509_extension_st*  ex  );
struct asn1_string_st*  X509_EXTENSION_get_data(struct X509_extension_st*  ne  );
int X509_EXTENSION_get_critical(const struct X509_extension_st*  ex  );
int X509at_get_attr_count(const struct stack_st_X509_ATTRIBUTE*  x  );
int X509at_get_attr_by_NID(const struct stack_st_X509_ATTRIBUTE*  x  , int nid, int lastpos);
int X509at_get_attr_by_OBJ(const struct stack_st_X509_ATTRIBUTE*  sk  , const struct asn1_object_st*  obj  , int lastpos);
struct x509_attributes_st*  X509at_get_attr(const struct stack_st_X509_ATTRIBUTE*  x  , int loc);
struct x509_attributes_st*  X509at_delete_attr(struct stack_st_X509_ATTRIBUTE*  x  , int loc);
struct stack_st_X509_ATTRIBUTE*  X509at_add1_attr(struct stack_st_X509_ATTRIBUTE**  x  , struct x509_attributes_st*  attr  );
struct stack_st_X509_ATTRIBUTE*  X509at_add1_attr_by_OBJ(struct stack_st_X509_ATTRIBUTE**  x  , const struct asn1_object_st*  obj  , int type, const unsigned char* bytes, int len);
struct stack_st_X509_ATTRIBUTE*  X509at_add1_attr_by_NID(struct stack_st_X509_ATTRIBUTE**  x  , int nid, int type, const unsigned char* bytes, int len);
struct stack_st_X509_ATTRIBUTE*  X509at_add1_attr_by_txt(struct stack_st_X509_ATTRIBUTE**  x  , const char* attrname, int type, const unsigned char* bytes, int len);
void* X509at_get0_data_by_OBJ(const struct stack_st_X509_ATTRIBUTE*  x  , const struct asn1_object_st*  obj  , int lastpos, int type);
struct x509_attributes_st*  X509_ATTRIBUTE_create_by_NID(struct x509_attributes_st**  attr  , int nid, int atrtype, const void* data, int len);
struct x509_attributes_st*  X509_ATTRIBUTE_create_by_OBJ(struct x509_attributes_st**  attr  , const struct asn1_object_st*  obj  , int atrtype, const void* data, int len);
struct x509_attributes_st*  X509_ATTRIBUTE_create_by_txt(struct x509_attributes_st**  attr  , const char* atrname, int type, const unsigned char* bytes, int len);
int X509_ATTRIBUTE_set1_object(struct x509_attributes_st*  attr  , const struct asn1_object_st*  obj  );
int X509_ATTRIBUTE_set1_data(struct x509_attributes_st*  attr  , int attrtype, const void* data, int len);
void* X509_ATTRIBUTE_get0_data(struct x509_attributes_st*  attr  , int idx, int atrtype, void* data);
int X509_ATTRIBUTE_count(const struct x509_attributes_st*  attr  );
struct asn1_object_st*  X509_ATTRIBUTE_get0_object(struct x509_attributes_st*  attr  );
struct asn1_type_st*  X509_ATTRIBUTE_get0_type(struct x509_attributes_st*  attr  , int idx);
int EVP_PKEY_get_attr_count(const struct evp_pkey_st*  key  );
int EVP_PKEY_get_attr_by_NID(const struct evp_pkey_st*  key  , int nid, int lastpos);
int EVP_PKEY_get_attr_by_OBJ(const struct evp_pkey_st*  key  , const struct asn1_object_st*  obj  , int lastpos);
struct x509_attributes_st*  EVP_PKEY_get_attr(const struct evp_pkey_st*  key  , int loc);
struct x509_attributes_st*  EVP_PKEY_delete_attr(struct evp_pkey_st*  key  , int loc);
int EVP_PKEY_add1_attr(struct evp_pkey_st*  key  , struct x509_attributes_st*  attr  );
int EVP_PKEY_add1_attr_by_OBJ(struct evp_pkey_st*  key  , const struct asn1_object_st*  obj  , int type, const unsigned char* bytes, int len);
int EVP_PKEY_add1_attr_by_NID(struct evp_pkey_st*  key  , int nid, int type, const unsigned char* bytes, int len);
int EVP_PKEY_add1_attr_by_txt(struct evp_pkey_st*  key  , const char* attrname, int type, const unsigned char* bytes, int len);
struct x509_st*  X509_find_by_issuer_and_serial(struct stack_st_X509*  sk  , const struct X509_name_st*  name  , const struct asn1_string_st*  serial  );
struct x509_st*  X509_find_by_subject(struct stack_st_X509*  sk  , const struct X509_name_st*  name  );
struct PBEPARAM_st*  PBEPARAM_new();
void PBEPARAM_free(struct PBEPARAM_st*  a  );
struct PBEPARAM_st*  d2i_PBEPARAM(struct PBEPARAM_st**  a  , const unsigned char** in, long len);
int i2d_PBEPARAM(const struct PBEPARAM_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PBEPARAM_it();
struct PBE2PARAM_st*  PBE2PARAM_new();
void PBE2PARAM_free(struct PBE2PARAM_st*  a  );
struct PBE2PARAM_st*  d2i_PBE2PARAM(struct PBE2PARAM_st**  a  , const unsigned char** in, long len);
int i2d_PBE2PARAM(const struct PBE2PARAM_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PBE2PARAM_it();
struct PBKDF2PARAM_st*  PBKDF2PARAM_new();
void PBKDF2PARAM_free(struct PBKDF2PARAM_st*  a  );
struct PBKDF2PARAM_st*  d2i_PBKDF2PARAM(struct PBKDF2PARAM_st**  a  , const unsigned char** in, long len);
int i2d_PBKDF2PARAM(const struct PBKDF2PARAM_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PBKDF2PARAM_it();
struct anonymous_typeX111*  PBMAC1PARAM_new();
void PBMAC1PARAM_free(struct anonymous_typeX111*  a  );
struct anonymous_typeX111*  d2i_PBMAC1PARAM(struct anonymous_typeX111**  a  , const unsigned char** in, long len);
int i2d_PBMAC1PARAM(const struct anonymous_typeX111*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PBMAC1PARAM_it();
struct SCRYPT_PARAMS_st*  SCRYPT_PARAMS_new();
void SCRYPT_PARAMS_free(struct SCRYPT_PARAMS_st*  a  );
struct SCRYPT_PARAMS_st*  d2i_SCRYPT_PARAMS(struct SCRYPT_PARAMS_st**  a  , const unsigned char** in, long len);
int i2d_SCRYPT_PARAMS(const struct SCRYPT_PARAMS_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  SCRYPT_PARAMS_it();
int PKCS5_pbe_set0_algor(struct X509_algor_st*  algor  , int alg, int iter, const unsigned char* salt, int saltlen);
int PKCS5_pbe_set0_algor_ex(struct X509_algor_st*  algor  , int alg, int iter, const unsigned char* salt, int saltlen, struct ossl_lib_ctx_st*  libctx  );
struct X509_algor_st*  PKCS5_pbe_set(int alg, int iter, const unsigned char* salt, int saltlen);
struct X509_algor_st*  PKCS5_pbe_set_ex(int alg, int iter, const unsigned char* salt, int saltlen, struct ossl_lib_ctx_st*  libctx  );
struct X509_algor_st*  PKCS5_pbe2_set(const struct evp_cipher_st*  cipher  , int iter, unsigned char* salt, int saltlen);
struct X509_algor_st*  PKCS5_pbe2_set_iv(const struct evp_cipher_st*  cipher  , int iter, unsigned char* salt, int saltlen, unsigned char* aiv, int prf_nid);
struct X509_algor_st*  PKCS5_pbe2_set_iv_ex(const struct evp_cipher_st*  cipher  , int iter, unsigned char* salt, int saltlen, unsigned char* aiv, int prf_nid, struct ossl_lib_ctx_st*  libctx  );
struct X509_algor_st*  PKCS5_pbe2_set_scrypt(const struct evp_cipher_st*  cipher  , const unsigned char* salt, int saltlen, unsigned char* aiv, unsigned long  int  N  , unsigned long  int  r  , unsigned long  int  p  );
struct X509_algor_st*  PKCS5_pbkdf2_set(int iter, unsigned char* salt, int saltlen, int prf_nid, int keylen);
struct X509_algor_st*  PKCS5_pbkdf2_set_ex(int iter, unsigned char* salt, int saltlen, int prf_nid, int keylen, struct ossl_lib_ctx_st*  libctx  );
struct PBKDF2PARAM_st*  PBMAC1_get1_pbkdf2_param(const struct X509_algor_st*  macalg  );
struct pkcs8_priv_key_info_st*  PKCS8_PRIV_KEY_INFO_new();
void PKCS8_PRIV_KEY_INFO_free(struct pkcs8_priv_key_info_st*  a  );
struct pkcs8_priv_key_info_st*  d2i_PKCS8_PRIV_KEY_INFO(struct pkcs8_priv_key_info_st**  a  , const unsigned char** in, long len);
int i2d_PKCS8_PRIV_KEY_INFO(const struct pkcs8_priv_key_info_st*  a  , unsigned char** out);
const struct ASN1_ITEM_st*  PKCS8_PRIV_KEY_INFO_it();
struct evp_pkey_st*  EVP_PKCS82PKEY(const struct pkcs8_priv_key_info_st*  p8  );
struct evp_pkey_st*  EVP_PKCS82PKEY_ex(const struct pkcs8_priv_key_info_st*  p8  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct pkcs8_priv_key_info_st*  EVP_PKEY2PKCS8(const struct evp_pkey_st*  pkey  );
int PKCS8_pkey_set0(struct pkcs8_priv_key_info_st*  priv  , struct asn1_object_st*  aobj  , int version, int ptype, void* pval, unsigned char* penc, int penclen);
int PKCS8_pkey_get0(const struct asn1_object_st**  ppkalg  , const unsigned char** pk, int* ppklen, const struct X509_algor_st**  pa  , const struct pkcs8_priv_key_info_st*  p8  );
const struct stack_st_X509_ATTRIBUTE*  PKCS8_pkey_get0_attrs(const struct pkcs8_priv_key_info_st*  p8  );
int PKCS8_pkey_add1_attr(struct pkcs8_priv_key_info_st*  p8  , struct x509_attributes_st*  attr  );
int PKCS8_pkey_add1_attr_by_NID(struct pkcs8_priv_key_info_st*  p8  , int nid, int type, const unsigned char* bytes, int len);
int PKCS8_pkey_add1_attr_by_OBJ(struct pkcs8_priv_key_info_st*  p8  , const struct asn1_object_st*  obj  , int type, const unsigned char* bytes, int len);
void X509_PUBKEY_set0_public_key(struct X509_pubkey_st*  pub  , unsigned char* penc, int penclen);
int X509_PUBKEY_set0_param(struct X509_pubkey_st*  pub  , struct asn1_object_st*  aobj  , int ptype, void* pval, unsigned char* penc, int penclen);
int X509_PUBKEY_get0_param(struct asn1_object_st**  ppkalg  , const unsigned char** pk, int* ppklen, struct X509_algor_st**  pa  , const struct X509_pubkey_st*  pub  );
int X509_PUBKEY_eq(const struct X509_pubkey_st*  a  , const struct X509_pubkey_st*  b  );
int PEM_get_EVP_CIPHER_INFO(char* header, struct evp_cipher_info_st*  cipher  );
int PEM_do_header(struct evp_cipher_info_st*  cipher  , unsigned char* data, long* len, int (*(*callback))(char*,int,int,void*)  , void* u);
int PEM_read_bio(struct bio_st*  bp  , char** name, char** header, unsigned char** data, long* len);
int PEM_read_bio_ex(struct bio_st*  bp  , char** name, char** header, unsigned char** data, long* len, unsigned int flags);
int PEM_bytes_read_bio_secmem(unsigned char** pdata, long* plen, char** pnm, const char* name, struct bio_st*  bp  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio(struct bio_st*  bp  , const char* name, const char* hdr, const unsigned char* data, long len);
int PEM_bytes_read_bio(unsigned char** pdata, long* plen, char** pnm, const char* name, struct bio_st*  bp  , int (*(*cb))(char*,int,int,void*)  , void* u);
void* PEM_ASN1_read_bio(void* (*(*d2i))(void**,const unsigned char**,long)  , const char* name, struct bio_st*  bp  , void** x, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_ASN1_write_bio(int (*(*i2d))(const void*,unsigned char**)  , const char* name, struct bio_st*  bp  , const void* x, const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_ASN1_write_bio_ctx(int (*(*i2d))(const void*,unsigned char**,void*)  , void* vctx, const char* name, struct bio_st*  bp  , const void* x, const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct stack_st_X509_INFO*  PEM_X509_INFO_read_bio(struct bio_st*  bp  , struct stack_st_X509_INFO*  sk  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct stack_st_X509_INFO*  PEM_X509_INFO_read_bio_ex(struct bio_st*  bp  , struct stack_st_X509_INFO*  sk  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_X509_INFO_write_bio(struct bio_st*  bp  , const struct X509_info_st*  xi  , struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cd))(char*,int,int,void*)  , void* u);
int PEM_read(struct _IO_FILE*  fp  , char** name, char** header, unsigned char** data, long* len);
int PEM_write(struct _IO_FILE*  fp  , const char* name, const char* hdr, const unsigned char* data, long len);
void* PEM_ASN1_read(void* (*(*d2i))(void**,const unsigned char**,long)  , const char* name, struct _IO_FILE*  fp  , void** x, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_ASN1_write(int (*(*i2d))(const void*,unsigned char**)  , const char* name, struct _IO_FILE*  fp  , const void* x, const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*callback))(char*,int,int,void*)  , void* u);
struct stack_st_X509_INFO*  PEM_X509_INFO_read(struct _IO_FILE*  fp  , struct stack_st_X509_INFO*  sk  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct stack_st_X509_INFO*  PEM_X509_INFO_read_ex(struct _IO_FILE*  fp  , struct stack_st_X509_INFO*  sk  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_SignInit(struct evp_md_ctx_st*  ctx  , struct evp_md_st*  type  );
int PEM_SignUpdate(struct evp_md_ctx_st*  ctx  , const unsigned char* d, unsigned int cnt);
int PEM_SignFinal(struct evp_md_ctx_st*  ctx  , unsigned char* sigret, unsigned int* siglen, struct evp_pkey_st*  pkey  );
int PEM_def_callback(char* buf, int num, int rwflag, void* userdata);
void PEM_proc_type(char* buf, int type);
void PEM_dek_info(char* buf, const char* type, int len, const char* str);
struct x509_st*  PEM_read_bio_X509(struct bio_st*  out  , struct x509_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct x509_st*  PEM_read_X509(struct _IO_FILE*  out  , struct x509_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_X509(struct bio_st*  out  , const struct x509_st*  x  );
int PEM_write_X509(struct _IO_FILE*  out  , const struct x509_st*  x  );
struct x509_st*  PEM_read_bio_X509_AUX(struct bio_st*  out  , struct x509_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct x509_st*  PEM_read_X509_AUX(struct _IO_FILE*  out  , struct x509_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_X509_AUX(struct bio_st*  out  , const struct x509_st*  x  );
int PEM_write_X509_AUX(struct _IO_FILE*  out  , const struct x509_st*  x  );
struct X509_req_st*  PEM_read_bio_X509_REQ(struct bio_st*  out  , struct X509_req_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct X509_req_st*  PEM_read_X509_REQ(struct _IO_FILE*  out  , struct X509_req_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_X509_REQ(struct bio_st*  out  , const struct X509_req_st*  x  );
int PEM_write_X509_REQ(struct _IO_FILE*  out  , const struct X509_req_st*  x  );
int PEM_write_bio_X509_REQ_NEW(struct bio_st*  out  , const struct X509_req_st*  x  );
int PEM_write_X509_REQ_NEW(struct _IO_FILE*  out  , const struct X509_req_st*  x  );
struct X509_crl_st*  PEM_read_bio_X509_CRL(struct bio_st*  out  , struct X509_crl_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct X509_crl_st*  PEM_read_X509_CRL(struct _IO_FILE*  out  , struct X509_crl_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_X509_CRL(struct bio_st*  out  , const struct X509_crl_st*  x  );
int PEM_write_X509_CRL(struct _IO_FILE*  out  , const struct X509_crl_st*  x  );
struct X509_pubkey_st*  PEM_read_bio_X509_PUBKEY(struct bio_st*  out  , struct X509_pubkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct X509_pubkey_st*  PEM_read_X509_PUBKEY(struct _IO_FILE*  out  , struct X509_pubkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_X509_PUBKEY(struct bio_st*  out  , const struct X509_pubkey_st*  x  );
int PEM_write_X509_PUBKEY(struct _IO_FILE*  out  , const struct X509_pubkey_st*  x  );
struct pkcs7_st*  PEM_read_bio_PKCS7(struct bio_st*  out  , struct pkcs7_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct pkcs7_st*  PEM_read_PKCS7(struct _IO_FILE*  out  , struct pkcs7_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PKCS7(struct bio_st*  out  , const struct pkcs7_st*  x  );
int PEM_write_PKCS7(struct _IO_FILE*  out  , const struct pkcs7_st*  x  );
struct Netscape_certificate_sequence*  PEM_read_bio_NETSCAPE_CERT_SEQUENCE(struct bio_st*  out  , struct Netscape_certificate_sequence**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct Netscape_certificate_sequence*  PEM_read_NETSCAPE_CERT_SEQUENCE(struct _IO_FILE*  out  , struct Netscape_certificate_sequence**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(struct bio_st*  out  , const struct Netscape_certificate_sequence*  x  );
int PEM_write_NETSCAPE_CERT_SEQUENCE(struct _IO_FILE*  out  , const struct Netscape_certificate_sequence*  x  );
struct X509_sig_st*  PEM_read_bio_PKCS8(struct bio_st*  out  , struct X509_sig_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct X509_sig_st*  PEM_read_PKCS8(struct _IO_FILE*  out  , struct X509_sig_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PKCS8(struct bio_st*  out  , const struct X509_sig_st*  x  );
int PEM_write_PKCS8(struct _IO_FILE*  out  , const struct X509_sig_st*  x  );
struct pkcs8_priv_key_info_st*  PEM_read_bio_PKCS8_PRIV_KEY_INFO(struct bio_st*  out  , struct pkcs8_priv_key_info_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct pkcs8_priv_key_info_st*  PEM_read_PKCS8_PRIV_KEY_INFO(struct _IO_FILE*  out  , struct pkcs8_priv_key_info_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PKCS8_PRIV_KEY_INFO(struct bio_st*  out  , const struct pkcs8_priv_key_info_st*  x  );
int PEM_write_PKCS8_PRIV_KEY_INFO(struct _IO_FILE*  out  , const struct pkcs8_priv_key_info_st*  x  );
struct rsa_st*  PEM_read_bio_RSAPrivateKey(struct bio_st*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct rsa_st*  PEM_read_RSAPrivateKey(struct _IO_FILE*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_RSAPrivateKey(struct bio_st*  out  , const struct rsa_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_RSAPrivateKey(struct _IO_FILE*  out  , const struct rsa_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct rsa_st*  PEM_read_bio_RSAPublicKey(struct bio_st*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct rsa_st*  PEM_read_RSAPublicKey(struct _IO_FILE*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_RSAPublicKey(struct bio_st*  out  , const struct rsa_st*  x  );
int PEM_write_RSAPublicKey(struct _IO_FILE*  out  , const struct rsa_st*  x  );
struct rsa_st*  PEM_read_bio_RSA_PUBKEY(struct bio_st*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct rsa_st*  PEM_read_RSA_PUBKEY(struct _IO_FILE*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_RSA_PUBKEY(struct bio_st*  out  , const struct rsa_st*  x  );
int PEM_write_RSA_PUBKEY(struct _IO_FILE*  out  , const struct rsa_st*  x  );
struct dsa_st*  PEM_read_bio_DSAPrivateKey(struct bio_st*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct dsa_st*  PEM_read_DSAPrivateKey(struct _IO_FILE*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_DSAPrivateKey(struct bio_st*  out  , const struct dsa_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_DSAPrivateKey(struct _IO_FILE*  out  , const struct dsa_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct dsa_st*  PEM_read_bio_DSA_PUBKEY(struct bio_st*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct dsa_st*  PEM_read_DSA_PUBKEY(struct _IO_FILE*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_DSA_PUBKEY(struct bio_st*  out  , const struct dsa_st*  x  );
int PEM_write_DSA_PUBKEY(struct _IO_FILE*  out  , const struct dsa_st*  x  );
struct dsa_st*  PEM_read_bio_DSAparams(struct bio_st*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct dsa_st*  PEM_read_DSAparams(struct _IO_FILE*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_DSAparams(struct bio_st*  out  , const struct dsa_st*  x  );
int PEM_write_DSAparams(struct _IO_FILE*  out  , const struct dsa_st*  x  );
struct ec_group_st*  PEM_read_bio_ECPKParameters(struct bio_st*  out  , struct ec_group_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct ec_group_st*  PEM_read_ECPKParameters(struct _IO_FILE*  out  , struct ec_group_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_ECPKParameters(struct bio_st*  out  , const struct ec_group_st*  x  );
int PEM_write_ECPKParameters(struct _IO_FILE*  out  , const struct ec_group_st*  x  );
struct ec_key_st*  PEM_read_bio_ECPrivateKey(struct bio_st*  out  , struct ec_key_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct ec_key_st*  PEM_read_ECPrivateKey(struct _IO_FILE*  out  , struct ec_key_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_ECPrivateKey(struct bio_st*  out  , const struct ec_key_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_ECPrivateKey(struct _IO_FILE*  out  , const struct ec_key_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct ec_key_st*  PEM_read_bio_EC_PUBKEY(struct bio_st*  out  , struct ec_key_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct ec_key_st*  PEM_read_EC_PUBKEY(struct _IO_FILE*  out  , struct ec_key_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_EC_PUBKEY(struct bio_st*  out  , const struct ec_key_st*  x  );
int PEM_write_EC_PUBKEY(struct _IO_FILE*  out  , const struct ec_key_st*  x  );
struct dh_st*  PEM_read_bio_DHparams(struct bio_st*  out  , struct dh_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct dh_st*  PEM_read_DHparams(struct _IO_FILE*  out  , struct dh_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_DHparams(struct bio_st*  out  , const struct dh_st*  x  );
int PEM_write_DHparams(struct _IO_FILE*  out  , const struct dh_st*  x  );
int PEM_write_bio_DHxparams(struct bio_st*  out  , const struct dh_st*  x  );
int PEM_write_DHxparams(struct _IO_FILE*  out  , const struct dh_st*  x  );
struct evp_pkey_st*  PEM_read_bio_PrivateKey(struct bio_st*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  PEM_read_bio_PrivateKey_ex(struct bio_st*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  PEM_read_PrivateKey(struct _IO_FILE*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  PEM_read_PrivateKey_ex(struct _IO_FILE*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_write_bio_PrivateKey(struct bio_st*  out  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PrivateKey_ex(struct bio_st*  out  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_write_PrivateKey(struct _IO_FILE*  out  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_PrivateKey_ex(struct _IO_FILE*  out  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  PEM_read_bio_PUBKEY(struct bio_st*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  PEM_read_bio_PUBKEY_ex(struct bio_st*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  PEM_read_PUBKEY(struct _IO_FILE*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  PEM_read_PUBKEY_ex(struct _IO_FILE*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_write_bio_PUBKEY(struct bio_st*  out  , const struct evp_pkey_st*  x  );
int PEM_write_bio_PUBKEY_ex(struct bio_st*  out  , const struct evp_pkey_st*  x  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_write_PUBKEY(struct _IO_FILE*  out  , const struct evp_pkey_st*  x  );
int PEM_write_PUBKEY_ex(struct _IO_FILE*  out  , const struct evp_pkey_st*  x  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_write_bio_PrivateKey_traditional(struct bio_st*  bp  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PKCS8PrivateKey_nid(struct bio_st*  bp  , const struct evp_pkey_st*  x  , int nid, const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PKCS8PrivateKey(struct bio_st*    , const struct evp_pkey_st*    , const struct evp_cipher_st*    , const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int i2d_PKCS8PrivateKey_bio(struct bio_st*  bp  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int i2d_PKCS8PrivateKey_nid_bio(struct bio_st*  bp  , const struct evp_pkey_st*  x  , int nid, const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  d2i_PKCS8PrivateKey_bio(struct bio_st*  bp  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int i2d_PKCS8PrivateKey_fp(struct _IO_FILE*  fp  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int i2d_PKCS8PrivateKey_nid_fp(struct _IO_FILE*  fp  , const struct evp_pkey_st*  x  , int nid, const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_PKCS8PrivateKey_nid(struct _IO_FILE*  fp  , const struct evp_pkey_st*  x  , int nid, const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  d2i_PKCS8PrivateKey_fp(struct _IO_FILE*  fp  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_PKCS8PrivateKey(struct _IO_FILE*  fp  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const char* kstr, int klen, int (*(*cd))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  PEM_read_bio_Parameters_ex(struct bio_st*  bp  , struct evp_pkey_st**  x  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  PEM_read_bio_Parameters(struct bio_st*  bp  , struct evp_pkey_st**  x  );
int PEM_write_bio_Parameters(struct bio_st*  bp  , const struct evp_pkey_st*  x  );
struct evp_pkey_st*  b2i_PrivateKey(const unsigned char** in, long length);
struct evp_pkey_st*  b2i_PublicKey(const unsigned char** in, long length);
struct evp_pkey_st*  b2i_PrivateKey_bio(struct bio_st*  in  );
struct evp_pkey_st*  b2i_PublicKey_bio(struct bio_st*  in  );
int i2b_PrivateKey_bio(struct bio_st*  out  , const struct evp_pkey_st*  pk  );
int i2b_PublicKey_bio(struct bio_st*  out  , const struct evp_pkey_st*  pk  );
struct evp_pkey_st*  b2i_PVK_bio(struct bio_st*  in  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  b2i_PVK_bio_ex(struct bio_st*  in  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int i2b_PVK_bio(struct bio_st*  out  , const struct evp_pkey_st*  pk  , int enclevel, int (*(*cb))(char*,int,int,void*)  , void* u);
int i2b_PVK_bio_ex(struct bio_st*  out  , const struct evp_pkey_st*  pk  , int enclevel, int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
unsigned long  HMAC_size(const struct hmac_ctx_st*  e  );
struct hmac_ctx_st*  HMAC_CTX_new();
int HMAC_CTX_reset(struct hmac_ctx_st*  ctx  );
void HMAC_CTX_free(struct hmac_ctx_st*  ctx  );
int HMAC_Init(struct hmac_ctx_st*  ctx  , const void* key, int len, const struct evp_md_st*  md  );
int HMAC_Init_ex(struct hmac_ctx_st*  ctx  , const void* key, int len, const struct evp_md_st*  md  , struct engine_st*  impl  );
int HMAC_Update(struct hmac_ctx_st*  ctx  , const unsigned char* data, unsigned long  len  );
int HMAC_Final(struct hmac_ctx_st*  ctx  , unsigned char* md, unsigned int* len);
int HMAC_CTX_copy(struct hmac_ctx_st*  dctx  , struct hmac_ctx_st*  sctx  );
void HMAC_CTX_set_flags(struct hmac_ctx_st*  ctx  , unsigned long  int flags);
const struct evp_md_st*  HMAC_CTX_get_md(const struct hmac_ctx_st*  ctx  );
unsigned char* HMAC(const struct evp_md_st*  evp_md  , const void* key, int key_len, const unsigned char* data, unsigned long  data_len  , unsigned char* md, unsigned int* md_len);
int ASYNC_init_thread(unsigned long  max_size  , unsigned long  init_size  );
void ASYNC_cleanup_thread();
struct async_wait_ctx_st*  ASYNC_WAIT_CTX_new();
void ASYNC_WAIT_CTX_free(struct async_wait_ctx_st*  ctx  );
int ASYNC_WAIT_CTX_set_wait_fd(struct async_wait_ctx_st*  ctx  , const void* key, int fd, void* custom_data, void (*cleanup)(struct async_wait_ctx_st* ,const void*,int,void*));
int ASYNC_WAIT_CTX_get_fd(struct async_wait_ctx_st*  ctx  , const void* key, int* fd, void** custom_data);
int ASYNC_WAIT_CTX_get_all_fds(struct async_wait_ctx_st*  ctx  , int* fd, unsigned long*  numfds  );
int ASYNC_WAIT_CTX_get_callback(struct async_wait_ctx_st*  ctx  , int (*(*callback))(void*)  , void** callback_arg);
int ASYNC_WAIT_CTX_set_callback(struct async_wait_ctx_st*  ctx  , int (*callback)(void*)  , void* callback_arg);
int ASYNC_WAIT_CTX_set_status(struct async_wait_ctx_st*  ctx  , int status);
int ASYNC_WAIT_CTX_get_status(struct async_wait_ctx_st*  ctx  );
int ASYNC_WAIT_CTX_get_changed_fds(struct async_wait_ctx_st*  ctx  , int* addfd, unsigned long*  numaddfds  , int* delfd, unsigned long*  numdelfds  );
int ASYNC_WAIT_CTX_clear_fd(struct async_wait_ctx_st*  ctx  , const void* key);
int ASYNC_is_capable();
int ASYNC_set_mem_functions(void* (*alloc_fn)(unsigned long* )  , void (*free_fn)(void*)  );
void ASYNC_get_mem_functions(void* (*(*alloc_fn))(unsigned long* )  , void (*(*free_fn))(void*)  );
int ASYNC_start_job(struct async_job_st**  job  , struct async_wait_ctx_st*  ctx  , int* ret, int (*func)(void*), void* args, unsigned long  size  );
int ASYNC_pause_job();
struct async_job_st*  ASYNC_get_current_job();
struct async_wait_ctx_st*  ASYNC_get_wait_ctx(struct async_job_st*  job  );
void ASYNC_block_pause();
void ASYNC_unblock_pause();
struct ct_policy_eval_ctx_st*  CT_POLICY_EVAL_CTX_new_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct ct_policy_eval_ctx_st*  CT_POLICY_EVAL_CTX_new();
void CT_POLICY_EVAL_CTX_free(struct ct_policy_eval_ctx_st*  ctx  );
struct x509_st*  CT_POLICY_EVAL_CTX_get0_cert(const struct ct_policy_eval_ctx_st*  ctx  );
int CT_POLICY_EVAL_CTX_set1_cert(struct ct_policy_eval_ctx_st*  ctx  , struct x509_st*  cert  );
struct x509_st*  CT_POLICY_EVAL_CTX_get0_issuer(const struct ct_policy_eval_ctx_st*  ctx  );
int CT_POLICY_EVAL_CTX_set1_issuer(struct ct_policy_eval_ctx_st*  ctx  , struct x509_st*  issuer  );
const struct ctlog_store_st*  CT_POLICY_EVAL_CTX_get0_log_store(const struct ct_policy_eval_ctx_st*  ctx  );
void CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE(struct ct_policy_eval_ctx_st*  ctx  , struct ctlog_store_st*  log_store  );
unsigned long  int  CT_POLICY_EVAL_CTX_get_time(const struct ct_policy_eval_ctx_st*  ctx  );
void CT_POLICY_EVAL_CTX_set_time(struct ct_policy_eval_ctx_st*  ctx  , unsigned long  int  time_in_ms  );
struct sct_st*  SCT_new();
struct sct_st*  SCT_new_from_base64(unsigned char version, const char* logid_base64, enum anonymous_typeY114  entry_type  , unsigned long  int  timestamp  , const char* extensions_base64, const char* signature_base64);
void SCT_free(struct sct_st*  sct  );
void SCT_LIST_free(struct stack_st_SCT*  a  );
enum anonymous_typeY114  SCT_get_version(const struct sct_st*  sct  );
int SCT_set_version(struct sct_st*  sct  , enum anonymous_typeY114  version  );
enum anonymous_typeY114  SCT_get_log_entry_type(const struct sct_st*  sct  );
int SCT_set_log_entry_type(struct sct_st*  sct  , enum anonymous_typeY114  entry_type  );
unsigned long  SCT_get0_log_id(const struct sct_st*  sct  , unsigned char** log_id);
int SCT_set0_log_id(struct sct_st*  sct  , unsigned char* log_id, unsigned long  log_id_len  );
int SCT_set1_log_id(struct sct_st*  sct  , const unsigned char* log_id, unsigned long  log_id_len  );
unsigned long  int  SCT_get_timestamp(const struct sct_st*  sct  );
void SCT_set_timestamp(struct sct_st*  sct  , unsigned long  int  timestamp  );
int SCT_get_signature_nid(const struct sct_st*  sct  );
int SCT_set_signature_nid(struct sct_st*  sct  , int nid);
unsigned long  SCT_get0_extensions(const struct sct_st*  sct  , unsigned char** ext);
void SCT_set0_extensions(struct sct_st*  sct  , unsigned char* ext, unsigned long  ext_len  );
int SCT_set1_extensions(struct sct_st*  sct  , const unsigned char* ext, unsigned long  ext_len  );
unsigned long  SCT_get0_signature(const struct sct_st*  sct  , unsigned char** sig);
void SCT_set0_signature(struct sct_st*  sct  , unsigned char* sig, unsigned long  sig_len  );
int SCT_set1_signature(struct sct_st*  sct  , const unsigned char* sig, unsigned long  sig_len  );
enum anonymous_typeY114  SCT_get_source(const struct sct_st*  sct  );
int SCT_set_source(struct sct_st*  sct  , enum anonymous_typeY114  source  );
const char* SCT_validation_status_string(const struct sct_st*  sct  );
void SCT_print(const struct sct_st*  sct  , struct bio_st*  out  , int indent, const struct ctlog_store_st*  logs  );
void SCT_LIST_print(const struct stack_st_SCT*  sct_list  , struct bio_st*  out  , int indent, const char* separator, const struct ctlog_store_st*  logs  );
enum anonymous_typeY114  SCT_get_validation_status(const struct sct_st*  sct  );
int SCT_validate(struct sct_st*  sct  , const struct ct_policy_eval_ctx_st*  ctx  );
int SCT_LIST_validate(const struct stack_st_SCT*  scts  , struct ct_policy_eval_ctx_st*  ctx  );
int i2o_SCT_LIST(const struct stack_st_SCT*  a  , unsigned char** pp);
struct stack_st_SCT*  o2i_SCT_LIST(struct stack_st_SCT**  a  , const unsigned char** pp, unsigned long  len  );
int i2d_SCT_LIST(const struct stack_st_SCT*  a  , unsigned char** pp);
struct stack_st_SCT*  d2i_SCT_LIST(struct stack_st_SCT**  a  , const unsigned char** pp, long len);
int i2o_SCT(const struct sct_st*  sct  , unsigned char** out);
struct sct_st*  o2i_SCT(struct sct_st**  psct  , const unsigned char** in, unsigned long  len  );
struct ctlog_st*  CTLOG_new_ex(struct evp_pkey_st*  public_key  , const char* name, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct ctlog_st*  CTLOG_new(struct evp_pkey_st*  public_key  , const char* name);
int CTLOG_new_from_base64_ex(struct ctlog_st**  ct_log  , const char* pkey_base64, const char* name, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int CTLOG_new_from_base64(struct ctlog_st**  ct_log  , const char* pkey_base64, const char* name);
void CTLOG_free(struct ctlog_st*  log  );
const char* CTLOG_get0_name(const struct ctlog_st*  log  );
void CTLOG_get0_log_id(const struct ctlog_st*  log  , const unsigned char**  log_id  , unsigned long*  log_id_len  );
struct evp_pkey_st*  CTLOG_get0_public_key(const struct ctlog_st*  log  );
struct ctlog_store_st*  CTLOG_STORE_new_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct ctlog_store_st*  CTLOG_STORE_new();
void CTLOG_STORE_free(struct ctlog_store_st*  store  );
const struct ctlog_st*  CTLOG_STORE_get0_log_by_id(const struct ctlog_store_st*  store  , const unsigned char*  log_id  , unsigned long  log_id_len  );
int CTLOG_STORE_load_file(struct ctlog_store_st*  store  , const char* file);
int CTLOG_STORE_load_default_file(struct ctlog_store_st*  store  );
int ERR_load_SSL_strings();
unsigned long  int  SSL_CTX_get_options(const struct ssl_ctx_st*  ctx  );
unsigned long  int  SSL_get_options(const struct ssl_st*  s  );
unsigned long  int  SSL_CTX_clear_options(struct ssl_ctx_st*  ctx  , unsigned long  int  op  );
unsigned long  int  SSL_clear_options(struct ssl_st*  s  , unsigned long  int  op  );
unsigned long  int  SSL_CTX_set_options(struct ssl_ctx_st*  ctx  , unsigned long  int  op  );
unsigned long  int  SSL_set_options(struct ssl_st*  s  , unsigned long  int  op  );
void SSL_CTX_set_msg_callback(struct ssl_ctx_st*  ctx  , void (*cb)(int,int,int,const void*,unsigned long ,struct ssl_st* ,void*));
void SSL_set_msg_callback(struct ssl_st*  ssl  , void (*cb)(int,int,int,const void*,unsigned long ,struct ssl_st* ,void*));
int SSL_SRP_CTX_init(struct ssl_st*  s  );
int SSL_CTX_SRP_CTX_init(struct ssl_ctx_st*  ctx  );
int SSL_SRP_CTX_free(struct ssl_st*  ctx  );
int SSL_CTX_SRP_CTX_free(struct ssl_ctx_st*  ctx  );
int SSL_srp_server_param_with_username(struct ssl_st*  s  , int* ad);
int SRP_Calc_A_param(struct ssl_st*  s  );
struct lhash_st_SSL_SESSION* SSL_CTX_sessions(struct ssl_ctx_st*  ctx  );
void SSL_CTX_sess_set_new_cb(struct ssl_ctx_st*  ctx  , int (*new_session_cb)(struct ssl_st*,struct ssl_session_st* ));
int (*SSL_CTX_sess_get_new_cb(struct ssl_ctx_st*  _function_pointer_result_var_name_a59  ))(struct ssl_st*,struct ssl_session_st* );
void SSL_CTX_sess_set_remove_cb(struct ssl_ctx_st*  ctx  , void (*remove_session_cb)(struct ssl_ctx_st*,struct ssl_session_st* ));
void (*SSL_CTX_sess_get_remove_cb(struct ssl_ctx_st*  _function_pointer_result_var_name_a60  ))(struct ssl_ctx_st*,struct ssl_session_st* );
void SSL_CTX_sess_set_get_cb(struct ssl_ctx_st*  ctx  , struct ssl_session_st* (*get_session_cb)(struct ssl_st*,const unsigned char*,int,int*));
struct ssl_session_st* (*SSL_CTX_sess_get_get_cb(struct ssl_ctx_st*  _function_pointer_result_var_name_a61  ))(struct ssl_st*,const unsigned char*,int,int*);
void SSL_CTX_set_info_callback(struct ssl_ctx_st*  ctx  , void (*cb)(const struct ssl_st* ,int,int));
void (*SSL_CTX_get_info_callback(struct ssl_ctx_st*  _function_pointer_result_var_name_a62  ))(const struct ssl_st* ,int,int);
void SSL_CTX_set_client_cert_cb(struct ssl_ctx_st*  ctx  , int (*client_cert_cb)(struct ssl_st* ,struct x509_st** ,struct evp_pkey_st** ));
int (*SSL_CTX_get_client_cert_cb(struct ssl_ctx_st*  _function_pointer_result_var_name_a63  ))(struct ssl_st* ,struct x509_st** ,struct evp_pkey_st** );
void SSL_CTX_set_cookie_generate_cb(struct ssl_ctx_st*  ctx  , int (*app_gen_cookie_cb)(struct ssl_st* ,unsigned char*,unsigned int*));
void SSL_CTX_set_cookie_verify_cb(struct ssl_ctx_st*  ctx  , int (*app_verify_cookie_cb)(struct ssl_st* ,const unsigned char*,unsigned int));
void SSL_CTX_set_stateless_cookie_generate_cb(struct ssl_ctx_st*  ctx  , int (*gen_stateless_cookie_cb)(struct ssl_st* ,unsigned char*,unsigned long* ));
void SSL_CTX_set_stateless_cookie_verify_cb(struct ssl_ctx_st*  ctx  , int (*verify_stateless_cookie_cb)(struct ssl_st* ,const unsigned char*,unsigned long ));
void SSL_CTX_set_next_protos_advertised_cb(struct ssl_ctx_st*  s  , int (*cb)(struct ssl_st* ,const unsigned char**,unsigned int*,void*)  , void* arg);
void SSL_CTX_set_next_proto_select_cb(struct ssl_ctx_st*  s  , int (*cb)(struct ssl_st* ,unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*)  , void* arg);
void SSL_get0_next_proto_negotiated(const struct ssl_st*  s  , const unsigned char** data, unsigned int* len);
int SSL_select_next_proto(unsigned char** out, unsigned char* outlen, const unsigned char* in, unsigned int inlen, const unsigned char* client, unsigned int client_len);
int SSL_CTX_set_alpn_protos(struct ssl_ctx_st*  ctx  , const unsigned char* protos, unsigned int protos_len);
int SSL_set_alpn_protos(struct ssl_st*  ssl  , const unsigned char* protos, unsigned int protos_len);
void SSL_CTX_set_alpn_select_cb(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,const unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*)  , void* arg);
void SSL_get0_alpn_selected(const struct ssl_st*  ssl  , const unsigned char** data, unsigned int* len);
void SSL_CTX_set_psk_client_callback(struct ssl_ctx_st*  ctx  , unsigned int (*cb)(struct ssl_st* ,const char*,char*,unsigned int,unsigned char*,unsigned int)  );
void SSL_set_psk_client_callback(struct ssl_st*  ssl  , unsigned int (*cb)(struct ssl_st* ,const char*,char*,unsigned int,unsigned char*,unsigned int)  );
void SSL_CTX_set_psk_server_callback(struct ssl_ctx_st*  ctx  , unsigned int (*cb)(struct ssl_st* ,const char*,unsigned char*,unsigned int)  );
void SSL_set_psk_server_callback(struct ssl_st*  ssl  , unsigned int (*cb)(struct ssl_st* ,const char*,unsigned char*,unsigned int)  );
int SSL_CTX_use_psk_identity_hint(struct ssl_ctx_st*  ctx  , const char* identity_hint);
int SSL_use_psk_identity_hint(struct ssl_st*  s  , const char* identity_hint);
const char* SSL_get_psk_identity_hint(const struct ssl_st*  s  );
const char* SSL_get_psk_identity(const struct ssl_st*  s  );
void SSL_set_psk_find_session_callback(struct ssl_st*  s  , int (*cb)(struct ssl_st* ,const unsigned char*,unsigned long ,struct ssl_session_st** )  );
void SSL_CTX_set_psk_find_session_callback(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,const unsigned char*,unsigned long ,struct ssl_session_st** )  );
void SSL_set_psk_use_session_callback(struct ssl_st*  s  , int (*cb)(struct ssl_st* ,const struct evp_md_st* ,const unsigned char**,unsigned long* ,struct ssl_session_st** )  );
void SSL_CTX_set_psk_use_session_callback(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,const struct evp_md_st* ,const unsigned char**,unsigned long* ,struct ssl_session_st** )  );
int SSL_CTX_has_client_custom_ext(const struct ssl_ctx_st*  ctx  , unsigned int ext_type);
int SSL_CTX_add_client_custom_ext(struct ssl_ctx_st*  ctx  , unsigned int ext_type, int (*add_cb)(struct ssl_st* ,unsigned int,const unsigned char**,unsigned long* ,int*,void*)  , void (*free_cb)(struct ssl_st* ,unsigned int,const unsigned char*,void*)  , void* add_arg, int (*parse_cb)(struct ssl_st* ,unsigned int,const unsigned char*,unsigned long ,int*,void*)  , void* parse_arg);
int SSL_CTX_add_server_custom_ext(struct ssl_ctx_st*  ctx  , unsigned int ext_type, int (*add_cb)(struct ssl_st* ,unsigned int,const unsigned char**,unsigned long* ,int*,void*)  , void (*free_cb)(struct ssl_st* ,unsigned int,const unsigned char*,void*)  , void* add_arg, int (*parse_cb)(struct ssl_st* ,unsigned int,const unsigned char*,unsigned long ,int*,void*)  , void* parse_arg);
int SSL_CTX_add_custom_ext(struct ssl_ctx_st*  ctx  , unsigned int ext_type, unsigned int context, int (*add_cb)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char**,unsigned long* ,struct x509_st* ,unsigned long ,int*,void*)  , void (*free_cb)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char*,void*)  , void* add_arg, int (*parse_cb)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char*,unsigned long ,struct x509_st* ,unsigned long ,int*,void*)  , void* parse_arg);
int SSL_extension_supported(unsigned int ext_type);
void SSL_CTX_set_keylog_callback(struct ssl_ctx_st*  ctx  , void (*cb)(const struct ssl_st* ,const char*)  );
void (*SSL_CTX_get_keylog_callback(const struct ssl_ctx_st*  ctx  ))(const struct ssl_st* ,const char*) ;
int SSL_CTX_set_max_early_data(struct ssl_ctx_st*  ctx  , unsigned int  max_early_data  );
unsigned int  SSL_CTX_get_max_early_data(const struct ssl_ctx_st*  ctx  );
int SSL_set_max_early_data(struct ssl_st*  s  , unsigned int  max_early_data  );
unsigned int  SSL_get_max_early_data(const struct ssl_st*  s  );
int SSL_CTX_set_recv_max_early_data(struct ssl_ctx_st*  ctx  , unsigned int  recv_max_early_data  );
unsigned int  SSL_CTX_get_recv_max_early_data(const struct ssl_ctx_st*  ctx  );
int SSL_set_recv_max_early_data(struct ssl_st*  s  , unsigned int  recv_max_early_data  );
unsigned int  SSL_get_recv_max_early_data(const struct ssl_st*  s  );
int SSL_CTX_set_tlsext_max_fragment_length(struct ssl_ctx_st*  ctx  , unsigned char  mode  );
int SSL_set_tlsext_max_fragment_length(struct ssl_st*  ssl  , unsigned char  mode  );
const char* SSL_get_servername(const struct ssl_st*  s  , const int type);
int SSL_get_servername_type(const struct ssl_st*  s  );
int SSL_export_keying_material(struct ssl_st*  s  , unsigned char* out, unsigned long  olen  , const char* label, unsigned long  llen  , const unsigned char* context, unsigned long  contextlen  , int use_context);
int SSL_export_keying_material_early(struct ssl_st*  s  , unsigned char* out, unsigned long  olen  , const char* label, unsigned long  llen  , const unsigned char* context, unsigned long  contextlen  );
int SSL_get_peer_signature_type_nid(const struct ssl_st*  s  , int* pnid);
int SSL_get_signature_type_nid(const struct ssl_st*  s  , int* pnid);
int SSL_get_sigalgs(struct ssl_st*  s  , int idx, int* psign, int* phash, int* psignandhash, unsigned char* rsig, unsigned char* rhash);
char* SSL_get1_builtin_sigalgs(struct ossl_lib_ctx_st*  libctx  );
int SSL_get_shared_sigalgs(struct ssl_st*  s  , int idx, int* psign, int* phash, int* psignandhash, unsigned char* rsig, unsigned char* rhash);
int SSL_check_chain(struct ssl_st*  s  , struct x509_st*  x  , struct evp_pkey_st*  pk  , struct stack_st_X509*  chain  );
int SSL_CTX_set_tlsext_ticket_key_evp_cb(struct ssl_ctx_st*  ctx  , int (*fp)(struct ssl_st* ,unsigned char*,unsigned char*,struct evp_cipher_ctx_st* ,struct evp_mac_ctx_st* ,int));
int SSL_CTX_set_tlsext_use_srtp(struct ssl_ctx_st*  ctx  , const char* profiles);
int SSL_set_tlsext_use_srtp(struct ssl_st*  ssl  , const char* profiles);
struct stack_st_SRTP_PROTECTION_PROFILE*  SSL_get_srtp_profiles(struct ssl_st*  ssl  );
struct srtp_protection_profile_st*  SSL_get_selected_srtp_profile(struct ssl_st*  s  );
const struct ssl_method_st*  OSSL_QUIC_client_method();
const struct ssl_method_st*  OSSL_QUIC_client_thread_method();
const struct ssl_method_st*  OSSL_QUIC_server_method();
void SSL_set_debug(struct ssl_st*  s  , int debug);
int SSL_in_init(const struct ssl_st*  s  );
int SSL_in_before(const struct ssl_st*  s  );
int SSL_is_init_finished(const struct ssl_st*  s  );
unsigned long  SSL_get_finished(const struct ssl_st*  s  , void* buf, unsigned long  count  );
unsigned long  SSL_get_peer_finished(const struct ssl_st*  s  , void* buf, unsigned long  count  );
struct ssl_session_st*  PEM_read_bio_SSL_SESSION(struct bio_st*  out  , struct ssl_session_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct ssl_session_st*  PEM_read_SSL_SESSION(struct _IO_FILE*  out  , struct ssl_session_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_SSL_SESSION(struct bio_st*  out  , const struct ssl_session_st*  x  );
int PEM_write_SSL_SESSION(struct _IO_FILE*  out  , const struct ssl_session_st*  x  );
const char* SSL_get0_group_name(struct ssl_st*  s  );
const char* SSL_group_to_name(struct ssl_st*  s  , int id);
int SSL_set0_tmp_dh_pkey(struct ssl_st*  s  , struct evp_pkey_st*  dhpkey  );
int SSL_CTX_set0_tmp_dh_pkey(struct ssl_ctx_st*  ctx  , struct evp_pkey_st*  dhpkey  );
const struct bio_method_st*  BIO_f_ssl();
struct bio_st*  BIO_new_ssl(struct ssl_ctx_st*  ctx  , int client);
struct bio_st*  BIO_new_ssl_connect(struct ssl_ctx_st*  ctx  );
struct bio_st*  BIO_new_buffer_ssl_connect(struct ssl_ctx_st*  ctx  );
int BIO_ssl_copy_session_id(struct bio_st*  to  , struct bio_st*  from  );
void BIO_ssl_shutdown(struct bio_st*  ssl_bio  );
int SSL_CTX_set_cipher_list(struct ssl_ctx_st*    , const char* str);
struct ssl_ctx_st*  SSL_CTX_new(const struct ssl_method_st*  meth  );
struct ssl_ctx_st*  SSL_CTX_new_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq, const struct ssl_method_st*  meth  );
int SSL_CTX_up_ref(struct ssl_ctx_st*  ctx  );
void SSL_CTX_free(struct ssl_ctx_st*    );
long SSL_CTX_set_timeout(struct ssl_ctx_st*  ctx  , long t);
long SSL_CTX_get_timeout(const struct ssl_ctx_st*  ctx  );
struct x509_store_st*  SSL_CTX_get_cert_store(const struct ssl_ctx_st*    );
void SSL_CTX_set_cert_store(struct ssl_ctx_st*    , struct x509_store_st*    );
void SSL_CTX_set1_cert_store(struct ssl_ctx_st*    , struct x509_store_st*    );
int SSL_want(const struct ssl_st*  s  );
int SSL_clear(struct ssl_st*  s  );
void SSL_CTX_flush_sessions(struct ssl_ctx_st*  ctx  , long tm);
void SSL_CTX_flush_sessions_ex(struct ssl_ctx_st*  ctx  , long  int  tm  );
const struct ssl_cipher_st*  SSL_get_current_cipher(const struct ssl_st*  s  );
const struct ssl_cipher_st*  SSL_get_pending_cipher(const struct ssl_st*  s  );
int SSL_CIPHER_get_bits(const struct ssl_cipher_st*  c  , int* alg_bits);
const char* SSL_CIPHER_get_version(const struct ssl_cipher_st*  c  );
const char* SSL_CIPHER_get_name(const struct ssl_cipher_st*  c  );
const char* SSL_CIPHER_standard_name(const struct ssl_cipher_st*  c  );
const char* OPENSSL_cipher_name(const char* rfc_name);
unsigned int  SSL_CIPHER_get_id(const struct ssl_cipher_st*  c  );
unsigned short int  SSL_CIPHER_get_protocol_id(const struct ssl_cipher_st*  c  );
int SSL_CIPHER_get_kx_nid(const struct ssl_cipher_st*  c  );
int SSL_CIPHER_get_auth_nid(const struct ssl_cipher_st*  c  );
const struct evp_md_st*  SSL_CIPHER_get_handshake_digest(const struct ssl_cipher_st*  c  );
int SSL_CIPHER_is_aead(const struct ssl_cipher_st*  c  );
int SSL_get_fd(const struct ssl_st*  s  );
int SSL_get_rfd(const struct ssl_st*  s  );
int SSL_get_wfd(const struct ssl_st*  s  );
const char* SSL_get_cipher_list(const struct ssl_st*  s  , int n);
char* SSL_get_shared_ciphers(const struct ssl_st*  s  , char* buf, int size);
int SSL_get_read_ahead(const struct ssl_st*  s  );
int SSL_pending(const struct ssl_st*  s  );
int SSL_has_pending(const struct ssl_st*  s  );
int SSL_set_fd(struct ssl_st*  s  , int fd);
int SSL_set_rfd(struct ssl_st*  s  , int fd);
int SSL_set_wfd(struct ssl_st*  s  , int fd);
void SSL_set0_rbio(struct ssl_st*  s  , struct bio_st*  rbio  );
void SSL_set0_wbio(struct ssl_st*  s  , struct bio_st*  wbio  );
void SSL_set_bio(struct ssl_st*  s  , struct bio_st*  rbio  , struct bio_st*  wbio  );
struct bio_st*  SSL_get_rbio(const struct ssl_st*  s  );
struct bio_st*  SSL_get_wbio(const struct ssl_st*  s  );
int SSL_set_cipher_list(struct ssl_st*  s  , const char* str);
int SSL_CTX_set_ciphersuites(struct ssl_ctx_st*  ctx  , const char* str);
int SSL_set_ciphersuites(struct ssl_st*  s  , const char* str);
void SSL_set_read_ahead(struct ssl_st*  s  , int yes);
int SSL_get_verify_mode(const struct ssl_st*  s  );
int SSL_get_verify_depth(const struct ssl_st*  s  );
int (*SSL_get_verify_callback(const struct ssl_st*  s  ))(int,struct x509_store_ctx_st* ) ;
void SSL_set_verify(struct ssl_st*  s  , int mode, int (*callback)(int,struct x509_store_ctx_st* )  );
void SSL_set_verify_depth(struct ssl_st*  s  , int depth);
void SSL_set_cert_cb(struct ssl_st*  s  , int (*cb)(struct ssl_st* ,void*), void* arg);
int SSL_use_RSAPrivateKey(struct ssl_st*  ssl  , struct rsa_st*  rsa  );
int SSL_use_RSAPrivateKey_ASN1(struct ssl_st*  ssl  , const unsigned char* d, long len);
int SSL_use_PrivateKey(struct ssl_st*  ssl  , struct evp_pkey_st*  pkey  );
int SSL_use_PrivateKey_ASN1(int pk, struct ssl_st*  ssl  , const unsigned char* d, long len);
int SSL_use_certificate(struct ssl_st*  ssl  , struct x509_st*  x  );
int SSL_use_certificate_ASN1(struct ssl_st*  ssl  , const unsigned char* d, int len);
int SSL_use_cert_and_key(struct ssl_st*  ssl  , struct x509_st*  x509  , struct evp_pkey_st*  privatekey  , struct stack_st_X509*  chain  , int override);
int SSL_CTX_use_serverinfo(struct ssl_ctx_st*  ctx  , const unsigned char* serverinfo, unsigned long  serverinfo_length  );
int SSL_CTX_use_serverinfo_ex(struct ssl_ctx_st*  ctx  , unsigned int version, const unsigned char* serverinfo, unsigned long  serverinfo_length  );
int SSL_CTX_use_serverinfo_file(struct ssl_ctx_st*  ctx  , const char* file);
int SSL_use_RSAPrivateKey_file(struct ssl_st*  ssl  , const char* file, int type);
int SSL_use_PrivateKey_file(struct ssl_st*  ssl  , const char* file, int type);
int SSL_use_certificate_file(struct ssl_st*  ssl  , const char* file, int type);
int SSL_CTX_use_RSAPrivateKey_file(struct ssl_ctx_st*  ctx  , const char* file, int type);
int SSL_CTX_use_PrivateKey_file(struct ssl_ctx_st*  ctx  , const char* file, int type);
int SSL_CTX_use_certificate_file(struct ssl_ctx_st*  ctx  , const char* file, int type);
int SSL_CTX_use_certificate_chain_file(struct ssl_ctx_st*  ctx  , const char* file);
int SSL_use_certificate_chain_file(struct ssl_st*  ssl  , const char* file);
struct stack_st_X509_NAME*  SSL_load_client_CA_file(const char* file);
struct stack_st_X509_NAME*  SSL_load_client_CA_file_ex(const char* file, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int SSL_add_file_cert_subjects_to_stack(struct stack_st_X509_NAME*  stackCAs  , const char* file);
int SSL_add_dir_cert_subjects_to_stack(struct stack_st_X509_NAME*  stackCAs  , const char* dir);
int SSL_add_store_cert_subjects_to_stack(struct stack_st_X509_NAME*  stackCAs  , const char* uri);
const char* SSL_state_string(const struct ssl_st*  s  );
const char* SSL_rstate_string(const struct ssl_st*  s  );
const char* SSL_state_string_long(const struct ssl_st*  s  );
const char* SSL_rstate_string_long(const struct ssl_st*  s  );
long SSL_SESSION_get_time(const struct ssl_session_st*  s  );
long SSL_SESSION_set_time(struct ssl_session_st*  s  , long t);
long SSL_SESSION_get_timeout(const struct ssl_session_st*  s  );
long SSL_SESSION_set_timeout(struct ssl_session_st*  s  , long t);
int SSL_SESSION_get_protocol_version(const struct ssl_session_st*  s  );
int SSL_SESSION_set_protocol_version(struct ssl_session_st*  s  , int version);
long  int  SSL_SESSION_get_time_ex(const struct ssl_session_st*  s  );
long  int  SSL_SESSION_set_time_ex(struct ssl_session_st*  s  , long  int  t  );
const char* SSL_SESSION_get0_hostname(const struct ssl_session_st*  s  );
int SSL_SESSION_set1_hostname(struct ssl_session_st*  s  , const char* hostname);
void SSL_SESSION_get0_alpn_selected(const struct ssl_session_st*  s  , const unsigned char** alpn, unsigned long*  len  );
int SSL_SESSION_set1_alpn_selected(struct ssl_session_st*  s  , const unsigned char* alpn, unsigned long  len  );
const struct ssl_cipher_st*  SSL_SESSION_get0_cipher(const struct ssl_session_st*  s  );
int SSL_SESSION_set_cipher(struct ssl_session_st*  s  , const struct ssl_cipher_st*  cipher  );
int SSL_SESSION_has_ticket(const struct ssl_session_st*  s  );
unsigned long  int SSL_SESSION_get_ticket_lifetime_hint(const struct ssl_session_st*  s  );
void SSL_SESSION_get0_ticket(const struct ssl_session_st*  s  , const unsigned char** tick, unsigned long*  len  );
unsigned int  SSL_SESSION_get_max_early_data(const struct ssl_session_st*  s  );
int SSL_SESSION_set_max_early_data(struct ssl_session_st*  s  , unsigned int  max_early_data  );
int SSL_copy_session_id(struct ssl_st*  to  , const struct ssl_st*  from  );
struct x509_st*  SSL_SESSION_get0_peer(struct ssl_session_st*  s  );
int SSL_SESSION_set1_id_context(struct ssl_session_st*  s  , const unsigned char* sid_ctx, unsigned int sid_ctx_len);
int SSL_SESSION_set1_id(struct ssl_session_st*  s  , const unsigned char* sid, unsigned int sid_len);
int SSL_SESSION_is_resumable(const struct ssl_session_st*  s  );
struct ssl_session_st*  SSL_SESSION_new();
struct ssl_session_st*  SSL_SESSION_dup(const struct ssl_session_st*  src  );
const unsigned char* SSL_SESSION_get_id(const struct ssl_session_st*  s  , unsigned int* len);
const unsigned char* SSL_SESSION_get0_id_context(const struct ssl_session_st*  s  , unsigned int* len);
unsigned int SSL_SESSION_get_compress_id(const struct ssl_session_st*  s  );
int SSL_SESSION_print_fp(struct _IO_FILE*  fp  , const struct ssl_session_st*  ses  );
int SSL_SESSION_print(struct bio_st*  fp  , const struct ssl_session_st*  ses  );
int SSL_SESSION_print_keylog(struct bio_st*  bp  , const struct ssl_session_st*  x  );
int SSL_SESSION_up_ref(struct ssl_session_st*  ses  );
void SSL_SESSION_free(struct ssl_session_st*  ses  );
int i2d_SSL_SESSION(const struct ssl_session_st*  in  , unsigned char** pp);
int SSL_set_session(struct ssl_st*  to  , struct ssl_session_st*  session  );
int SSL_CTX_add_session(struct ssl_ctx_st*  ctx  , struct ssl_session_st*  session  );
int SSL_CTX_remove_session(struct ssl_ctx_st*  ctx  , struct ssl_session_st*  session  );
int SSL_CTX_set_generate_session_id(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,unsigned char*,unsigned int*)  );
int SSL_set_generate_session_id(struct ssl_st*  s  , int (*cb)(struct ssl_st* ,unsigned char*,unsigned int*)  );
int SSL_has_matching_session_id(const struct ssl_st*  s  , const unsigned char* id, unsigned int id_len);
struct ssl_session_st*  d2i_SSL_SESSION(struct ssl_session_st**  a  , const unsigned char** pp, long length);
struct ssl_session_st*  d2i_SSL_SESSION_ex(struct ssl_session_st**  a  , const unsigned char** pp, long length, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct x509_st*  SSL_get0_peer_certificate(const struct ssl_st*  s  );
struct x509_st*  SSL_get1_peer_certificate(const struct ssl_st*  s  );
struct stack_st_X509*  SSL_get_peer_cert_chain(const struct ssl_st*  s  );
int SSL_CTX_get_verify_mode(const struct ssl_ctx_st*  ctx  );
int SSL_CTX_get_verify_depth(const struct ssl_ctx_st*  ctx  );
int (*SSL_CTX_get_verify_callback(const struct ssl_ctx_st*  ctx  ))(int,struct x509_store_ctx_st* ) ;
void SSL_CTX_set_verify(struct ssl_ctx_st*  ctx  , int mode, int (*callback)(int,struct x509_store_ctx_st* )  );
void SSL_CTX_set_verify_depth(struct ssl_ctx_st*  ctx  , int depth);
void SSL_CTX_set_cert_verify_callback(struct ssl_ctx_st*  ctx  , int (*cb)(struct x509_store_ctx_st* ,void*), void* arg);
void SSL_CTX_set_cert_cb(struct ssl_ctx_st*  c  , int (*cb)(struct ssl_st* ,void*), void* arg);
int SSL_CTX_use_RSAPrivateKey(struct ssl_ctx_st*  ctx  , struct rsa_st*  rsa  );
int SSL_CTX_use_RSAPrivateKey_ASN1(struct ssl_ctx_st*  ctx  , const unsigned char* d, long len);
int SSL_CTX_use_PrivateKey(struct ssl_ctx_st*  ctx  , struct evp_pkey_st*  pkey  );
int SSL_CTX_use_PrivateKey_ASN1(int pk, struct ssl_ctx_st*  ctx  , const unsigned char* d, long len);
int SSL_CTX_use_certificate(struct ssl_ctx_st*  ctx  , struct x509_st*  x  );
int SSL_CTX_use_certificate_ASN1(struct ssl_ctx_st*  ctx  , int len, const unsigned char* d);
int SSL_CTX_use_cert_and_key(struct ssl_ctx_st*  ctx  , struct x509_st*  x509  , struct evp_pkey_st*  privatekey  , struct stack_st_X509*  chain  , int override);
void SSL_CTX_set_default_passwd_cb(struct ssl_ctx_st*  ctx  , int (*(*cb))(char*,int,int,void*)  );
void SSL_CTX_set_default_passwd_cb_userdata(struct ssl_ctx_st*  ctx  , void* u);
int (*(*SSL_CTX_get_default_passwd_cb(struct ssl_ctx_st*  ctx  )))(char*,int,int,void*) ;
void* SSL_CTX_get_default_passwd_cb_userdata(struct ssl_ctx_st*  ctx  );
void SSL_set_default_passwd_cb(struct ssl_st*  s  , int (*(*cb))(char*,int,int,void*)  );
void SSL_set_default_passwd_cb_userdata(struct ssl_st*  s  , void* u);
int (*(*SSL_get_default_passwd_cb(struct ssl_st*  s  )))(char*,int,int,void*) ;
void* SSL_get_default_passwd_cb_userdata(struct ssl_st*  s  );
int SSL_CTX_check_private_key(const struct ssl_ctx_st*  ctx  );
int SSL_check_private_key(const struct ssl_st*  ctx  );
int SSL_CTX_set_session_id_context(struct ssl_ctx_st*  ctx  , const unsigned char* sid_ctx, unsigned int sid_ctx_len);
struct ssl_st*  SSL_new(struct ssl_ctx_st*  ctx  );
int SSL_up_ref(struct ssl_st*  s  );
int SSL_is_dtls(const struct ssl_st*  s  );
int SSL_is_tls(const struct ssl_st*  s  );
int SSL_is_quic(const struct ssl_st*  s  );
int SSL_set_session_id_context(struct ssl_st*  ssl  , const unsigned char* sid_ctx, unsigned int sid_ctx_len);
int SSL_CTX_set_purpose(struct ssl_ctx_st*  ctx  , int purpose);
int SSL_set_purpose(struct ssl_st*  ssl  , int purpose);
int SSL_CTX_set_trust(struct ssl_ctx_st*  ctx  , int trust);
int SSL_set_trust(struct ssl_st*  ssl  , int trust);
int SSL_set1_host(struct ssl_st*  s  , const char* host);
int SSL_add1_host(struct ssl_st*  s  , const char* host);
const char* SSL_get0_peername(struct ssl_st*  s  );
void SSL_set_hostflags(struct ssl_st*  s  , unsigned int flags);
int SSL_CTX_dane_enable(struct ssl_ctx_st*  ctx  );
int SSL_CTX_dane_mtype_set(struct ssl_ctx_st*  ctx  , const struct evp_md_st*  md  , unsigned char  mtype  , unsigned char  ord  );
int SSL_dane_enable(struct ssl_st*  s  , const char* basedomain);
int SSL_dane_tlsa_add(struct ssl_st*  s  , unsigned char  usage  , unsigned char  selector  , unsigned char  mtype  , const unsigned char* data, unsigned long  dlen  );
int SSL_get0_dane_authority(struct ssl_st*  s  , struct x509_st**  mcert  , struct evp_pkey_st**  mspki  );
int SSL_get0_dane_tlsa(struct ssl_st*  s  , unsigned char*  usage  , unsigned char*  selector  , unsigned char*  mtype  , const unsigned char** data, unsigned long*  dlen  );
struct ssl_dane_st*  SSL_get0_dane(struct ssl_st*  ssl  );
unsigned long  int SSL_CTX_dane_set_flags(struct ssl_ctx_st*  ctx  , unsigned long  int flags);
unsigned long  int SSL_CTX_dane_clear_flags(struct ssl_ctx_st*  ctx  , unsigned long  int flags);
unsigned long  int SSL_dane_set_flags(struct ssl_st*  ssl  , unsigned long  int flags);
unsigned long  int SSL_dane_clear_flags(struct ssl_st*  ssl  , unsigned long  int flags);
int SSL_CTX_set1_param(struct ssl_ctx_st*  ctx  , struct X509_VERIFY_PARAM_st*  vpm  );
int SSL_set1_param(struct ssl_st*  ssl  , struct X509_VERIFY_PARAM_st*  vpm  );
struct X509_VERIFY_PARAM_st*  SSL_CTX_get0_param(struct ssl_ctx_st*  ctx  );
struct X509_VERIFY_PARAM_st*  SSL_get0_param(struct ssl_st*  ssl  );
int SSL_CTX_set_srp_username(struct ssl_ctx_st*  ctx  , char* name);
int SSL_CTX_set_srp_password(struct ssl_ctx_st*  ctx  , char* password);
int SSL_CTX_set_srp_strength(struct ssl_ctx_st*  ctx  , int strength);
int SSL_CTX_set_srp_client_pwd_callback(struct ssl_ctx_st*  ctx  , char* (*cb)(struct ssl_st* ,void*));
int SSL_CTX_set_srp_verify_param_callback(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,void*));
int SSL_CTX_set_srp_username_callback(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,int*,void*));
int SSL_CTX_set_srp_cb_arg(struct ssl_ctx_st*  ctx  , void* arg);
int SSL_set_srp_server_param(struct ssl_st*  s  , const struct bignum_st*  N  , const struct bignum_st*  g  , struct bignum_st*  sa  , struct bignum_st*  v  , char* info);
int SSL_set_srp_server_param_pw(struct ssl_st*  s  , const char* user, const char* pass, const char* grp);
struct bignum_st*  SSL_get_srp_g(struct ssl_st*  s  );
struct bignum_st*  SSL_get_srp_N(struct ssl_st*  s  );
char* SSL_get_srp_username(struct ssl_st*  s  );
char* SSL_get_srp_userinfo(struct ssl_st*  s  );
void SSL_CTX_set_client_hello_cb(struct ssl_ctx_st*  c  , int (*cb)(struct ssl_st* ,int*,void*)  , void* arg);
void SSL_CTX_set_new_pending_conn_cb(struct ssl_ctx_st*  c  , int (*cb)(struct ssl_ctx_st* ,struct ssl_st* ,void*)  , void* arg);
int SSL_client_hello_isv2(struct ssl_st*  s  );
unsigned int SSL_client_hello_get0_legacy_version(struct ssl_st*  s  );
unsigned long  SSL_client_hello_get0_random(struct ssl_st*  s  , const unsigned char** out);
unsigned long  SSL_client_hello_get0_session_id(struct ssl_st*  s  , const unsigned char** out);
unsigned long  SSL_client_hello_get0_ciphers(struct ssl_st*  s  , const unsigned char** out);
unsigned long  SSL_client_hello_get0_compression_methods(struct ssl_st*  s  , const unsigned char** out);
int SSL_client_hello_get1_extensions_present(struct ssl_st*  s  , int** out, unsigned long*  outlen  );
int SSL_client_hello_get_extension_order(struct ssl_st*  s  , unsigned short int*  exts  , unsigned long*  num_exts  );
int SSL_client_hello_get0_ext(struct ssl_st*  s  , unsigned int type, const unsigned char** out, unsigned long*  outlen  );
void SSL_certs_clear(struct ssl_st*  s  );
void SSL_free(struct ssl_st*  ssl  );
int SSL_waiting_for_async(struct ssl_st*  s  );
int SSL_get_all_async_fds(struct ssl_st*  s  , int* fds, unsigned long*  numfds  );
int SSL_get_changed_async_fds(struct ssl_st*  s  , int* addfd, unsigned long*  numaddfds  , int* delfd, unsigned long*  numdelfds  );
int SSL_CTX_set_async_callback(struct ssl_ctx_st*  ctx  , int (*callback)(struct ssl_st* ,void*)  );
int SSL_CTX_set_async_callback_arg(struct ssl_ctx_st*  ctx  , void* arg);
int SSL_set_async_callback(struct ssl_st*  s  , int (*callback)(struct ssl_st* ,void*)  );
int SSL_set_async_callback_arg(struct ssl_st*  s  , void* arg);
int SSL_get_async_status(struct ssl_st*  s  , int* status);
int SSL_accept(struct ssl_st*  ssl  );
int SSL_stateless(struct ssl_st*  s  );
int SSL_connect(struct ssl_st*  ssl  );
int SSL_read(struct ssl_st*  ssl  , void* buf, int num);
int SSL_read_ex(struct ssl_st*  ssl  , void* buf, unsigned long  num  , unsigned long*  readbytes  );
int SSL_read_early_data(struct ssl_st*  s  , void* buf, unsigned long  num  , unsigned long*  readbytes  );
int SSL_peek(struct ssl_st*  ssl  , void* buf, int num);
int SSL_peek_ex(struct ssl_st*  ssl  , void* buf, unsigned long  num  , unsigned long*  readbytes  );
long  int  SSL_sendfile(struct ssl_st*  s  , int fd, long  int  offset  , unsigned long  size  , int flags);
int SSL_write(struct ssl_st*  ssl  , const void* buf, int num);
int SSL_write_ex(struct ssl_st*  s  , const void* buf, unsigned long  num  , unsigned long*  written  );
int SSL_write_early_data(struct ssl_st*  s  , const void* buf, unsigned long  num  , unsigned long*  written  );
long SSL_ctrl(struct ssl_st*  ssl  , int cmd, long larg, void* parg);
long SSL_callback_ctrl(struct ssl_st*    , int , void (*anonymous_lambda_var_nameZ52)());
long SSL_CTX_ctrl(struct ssl_ctx_st*  ctx  , int cmd, long larg, void* parg);
long SSL_CTX_callback_ctrl(struct ssl_ctx_st*    , int , void (*anonymous_lambda_var_nameZ53)());
int SSL_write_ex2(struct ssl_st*  s  , const void* buf, unsigned long  num  , unsigned long  int  flags  , unsigned long*  written  );
int SSL_get_early_data_status(const struct ssl_st*  s  );
int SSL_get_error(const struct ssl_st*  s  , int ret_code);
const char* SSL_get_version(const struct ssl_st*  s  );
int SSL_get_handshake_rtt(const struct ssl_st*  s  , unsigned long  int*  rtt  );
int SSL_CTX_set_ssl_version(struct ssl_ctx_st*  ctx  , const struct ssl_method_st*  meth  );
const struct ssl_method_st*  TLS_method();
const struct ssl_method_st*  TLS_server_method();
const struct ssl_method_st*  TLS_client_method();
const struct ssl_method_st*  TLSv1_method();
const struct ssl_method_st*  TLSv1_server_method();
const struct ssl_method_st*  TLSv1_client_method();
const struct ssl_method_st*  TLSv1_1_method();
const struct ssl_method_st*  TLSv1_1_server_method();
const struct ssl_method_st*  TLSv1_1_client_method();
const struct ssl_method_st*  TLSv1_2_method();
const struct ssl_method_st*  TLSv1_2_server_method();
const struct ssl_method_st*  TLSv1_2_client_method();
const struct ssl_method_st*  DTLSv1_method();
const struct ssl_method_st*  DTLSv1_server_method();
const struct ssl_method_st*  DTLSv1_client_method();
const struct ssl_method_st*  DTLSv1_2_method();
const struct ssl_method_st*  DTLSv1_2_server_method();
const struct ssl_method_st*  DTLSv1_2_client_method();
const struct ssl_method_st*  DTLS_method();
const struct ssl_method_st*  DTLS_server_method();
const struct ssl_method_st*  DTLS_client_method();
unsigned long  DTLS_get_data_mtu(const struct ssl_st*  s  );
struct stack_st_SSL_CIPHER*  SSL_get_ciphers(const struct ssl_st*  s  );
struct stack_st_SSL_CIPHER*  SSL_CTX_get_ciphers(const struct ssl_ctx_st*  ctx  );
struct stack_st_SSL_CIPHER*  SSL_get_client_ciphers(const struct ssl_st*  s  );
struct stack_st_SSL_CIPHER*  SSL_get1_supported_ciphers(struct ssl_st*  s  );
int SSL_do_handshake(struct ssl_st*  s  );
int SSL_key_update(struct ssl_st*  s  , int updatetype);
int SSL_get_key_update_type(const struct ssl_st*  s  );
int SSL_renegotiate(struct ssl_st*  s  );
int SSL_renegotiate_abbreviated(struct ssl_st*  s  );
int SSL_renegotiate_pending(const struct ssl_st*  s  );
int SSL_new_session_ticket(struct ssl_st*  s  );
int SSL_shutdown(struct ssl_st*  s  );
int SSL_verify_client_post_handshake(struct ssl_st*  s  );
void SSL_CTX_set_post_handshake_auth(struct ssl_ctx_st*  ctx  , int val);
void SSL_set_post_handshake_auth(struct ssl_st*  s  , int val);
const struct ssl_method_st*  SSL_CTX_get_ssl_method(const struct ssl_ctx_st*  ctx  );
const struct ssl_method_st*  SSL_get_ssl_method(const struct ssl_st*  s  );
int SSL_set_ssl_method(struct ssl_st*  s  , const struct ssl_method_st*  method  );
const char* SSL_alert_type_string_long(int value);
const char* SSL_alert_type_string(int value);
const char* SSL_alert_desc_string_long(int value);
const char* SSL_alert_desc_string(int value);
void SSL_set0_CA_list(struct ssl_st*  s  , struct stack_st_X509_NAME*  name_list  );
void SSL_CTX_set0_CA_list(struct ssl_ctx_st*  ctx  , struct stack_st_X509_NAME*  name_list  );
const struct stack_st_X509_NAME*  SSL_get0_CA_list(const struct ssl_st*  s  );
const struct stack_st_X509_NAME*  SSL_CTX_get0_CA_list(const struct ssl_ctx_st*  ctx  );
int SSL_add1_to_CA_list(struct ssl_st*  ssl  , const struct x509_st*  x  );
int SSL_CTX_add1_to_CA_list(struct ssl_ctx_st*  ctx  , const struct x509_st*  x  );
const struct stack_st_X509_NAME*  SSL_get0_peer_CA_list(const struct ssl_st*  s  );
void SSL_set_client_CA_list(struct ssl_st*  s  , struct stack_st_X509_NAME*  name_list  );
void SSL_CTX_set_client_CA_list(struct ssl_ctx_st*  ctx  , struct stack_st_X509_NAME*  name_list  );
struct stack_st_X509_NAME*  SSL_get_client_CA_list(const struct ssl_st*  s  );
struct stack_st_X509_NAME*  SSL_CTX_get_client_CA_list(const struct ssl_ctx_st*  s  );
int SSL_add_client_CA(struct ssl_st*  ssl  , struct x509_st*  x  );
int SSL_CTX_add_client_CA(struct ssl_ctx_st*  ctx  , struct x509_st*  x  );
void SSL_set_connect_state(struct ssl_st*  s  );
void SSL_set_accept_state(struct ssl_st*  s  );
long SSL_get_default_timeout(const struct ssl_st*  s  );
char* SSL_CIPHER_description(const struct ssl_cipher_st*    , char* buf, int size);
struct stack_st_X509_NAME*  SSL_dup_CA_list(const struct stack_st_X509_NAME*  sk  );
struct ssl_st*  SSL_dup(struct ssl_st*  ssl  );
struct x509_st*  SSL_get_certificate(const struct ssl_st*  ssl  );
struct evp_pkey_st* SSL_get_privatekey(const struct ssl_st*  ssl  );
struct x509_st*  SSL_CTX_get0_certificate(const struct ssl_ctx_st*  ctx  );
struct evp_pkey_st*  SSL_CTX_get0_privatekey(const struct ssl_ctx_st*  ctx  );
void SSL_CTX_set_quiet_shutdown(struct ssl_ctx_st*  ctx  , int mode);
int SSL_CTX_get_quiet_shutdown(const struct ssl_ctx_st*  ctx  );
void SSL_set_quiet_shutdown(struct ssl_st*  ssl  , int mode);
int SSL_get_quiet_shutdown(const struct ssl_st*  ssl  );
void SSL_set_shutdown(struct ssl_st*  ssl  , int mode);
int SSL_get_shutdown(const struct ssl_st*  ssl  );
int SSL_version(const struct ssl_st*  ssl  );
int SSL_client_version(const struct ssl_st*  s  );
int SSL_CTX_set_default_verify_paths(struct ssl_ctx_st*  ctx  );
int SSL_CTX_set_default_verify_dir(struct ssl_ctx_st*  ctx  );
int SSL_CTX_set_default_verify_file(struct ssl_ctx_st*  ctx  );
int SSL_CTX_set_default_verify_store(struct ssl_ctx_st*  ctx  );
int SSL_CTX_load_verify_file(struct ssl_ctx_st*  ctx  , const char* CAfile);
int SSL_CTX_load_verify_dir(struct ssl_ctx_st*  ctx  , const char* CApath);
int SSL_CTX_load_verify_store(struct ssl_ctx_st*  ctx  , const char* CAstore);
int SSL_CTX_load_verify_locations(struct ssl_ctx_st*  ctx  , const char* CAfile, const char* CApath);
struct ssl_session_st*  SSL_get_session(const struct ssl_st*  ssl  );
struct ssl_session_st*  SSL_get1_session(struct ssl_st*  ssl  );
struct ssl_ctx_st*  SSL_get_SSL_CTX(const struct ssl_st*  ssl  );
struct ssl_ctx_st*  SSL_set_SSL_CTX(struct ssl_st*  ssl  , struct ssl_ctx_st*  ctx  );
void SSL_set_info_callback(struct ssl_st*  ssl  , void (*cb)(const struct ssl_st* ,int,int));
void (*SSL_get_info_callback(const struct ssl_st*  _function_pointer_result_var_name_a64  ))(const struct ssl_st* ,int,int);
enum anonymous_typeY114  SSL_get_state(const struct ssl_st*  ssl  );
void SSL_set_verify_result(struct ssl_st*  ssl  , long v);
long SSL_get_verify_result(const struct ssl_st*  ssl  );
struct stack_st_X509*  SSL_get0_verified_chain(const struct ssl_st*  s  );
unsigned long  SSL_get_client_random(const struct ssl_st*  ssl  , unsigned char* out, unsigned long  outlen  );
unsigned long  SSL_get_server_random(const struct ssl_st*  ssl  , unsigned char* out, unsigned long  outlen  );
unsigned long  SSL_SESSION_get_master_key(const struct ssl_session_st*  sess  , unsigned char* out, unsigned long  outlen  );
int SSL_SESSION_set1_master_key(struct ssl_session_st*  sess  , const unsigned char* in, unsigned long  len  );
unsigned char  SSL_SESSION_get_max_fragment_length(const struct ssl_session_st*  sess  );
int SSL_set_ex_data(struct ssl_st*  ssl  , int idx, void* data);
void* SSL_get_ex_data(const struct ssl_st*  ssl  , int idx);
int SSL_SESSION_set_ex_data(struct ssl_session_st*  ss  , int idx, void* data);
void* SSL_SESSION_get_ex_data(const struct ssl_session_st*  ss  , int idx);
int SSL_CTX_set_ex_data(struct ssl_ctx_st*  ssl  , int idx, void* data);
void* SSL_CTX_get_ex_data(const struct ssl_ctx_st*  ssl  , int idx);
int SSL_get_ex_data_X509_STORE_CTX_idx();
void SSL_CTX_set_default_read_buffer_len(struct ssl_ctx_st*  ctx  , unsigned long  len  );
void SSL_set_default_read_buffer_len(struct ssl_st*  s  , unsigned long  len  );
void SSL_CTX_set_tmp_dh_callback(struct ssl_ctx_st*  ctx  , struct dh_st* (*dh)(struct ssl_st* ,int,int));
void SSL_set_tmp_dh_callback(struct ssl_st*  ssl  , struct dh_st* (*dh)(struct ssl_st* ,int,int));
const struct comp_method_st*  SSL_get_current_compression(const struct ssl_st*  s  );
const struct comp_method_st*  SSL_get_current_expansion(const struct ssl_st*  s  );
const char* SSL_COMP_get_name(const struct comp_method_st*  comp  );
const char* SSL_COMP_get0_name(const struct ssl_comp_st*  comp  );
int SSL_COMP_get_id(const struct ssl_comp_st*  comp  );
struct stack_st_SSL_COMP*  SSL_COMP_get_compression_methods();
struct stack_st_SSL_COMP*  SSL_COMP_set0_compression_methods(struct stack_st_SSL_COMP*  meths  );
int SSL_COMP_add_compression_method(int id, struct comp_method_st*  cm  );
const struct ssl_cipher_st*  SSL_CIPHER_find(struct ssl_st*  ssl  , const unsigned char* ptr);
int SSL_CIPHER_get_cipher_nid(const struct ssl_cipher_st*  c  );
int SSL_CIPHER_get_digest_nid(const struct ssl_cipher_st*  c  );
int SSL_bytes_to_cipher_list(struct ssl_st*  s  , const unsigned char* bytes, unsigned long  len  , int isv2format, struct stack_st_SSL_CIPHER**  sk  , struct stack_st_SSL_CIPHER**  scsvs  );
int SSL_set_session_ticket_ext(struct ssl_st*  s  , void* ext_data, int ext_len);
int SSL_set_session_ticket_ext_cb(struct ssl_st*  s  , int (*cb)(struct ssl_st* ,const unsigned char*,int,void*)  , void* arg);
int SSL_set_session_secret_cb(struct ssl_st*  s  , int (*session_secret_cb)(struct ssl_st* ,void*,int*,struct stack_st_SSL_CIPHER* ,const struct ssl_cipher_st** ,void*)  , void* arg);
void SSL_CTX_set_not_resumable_session_callback(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,int));
void SSL_set_not_resumable_session_callback(struct ssl_st*  ssl  , int (*cb)(struct ssl_st* ,int));
void SSL_CTX_set_record_padding_callback(struct ssl_ctx_st*  ctx  , unsigned long (*cb)(struct ssl_st* ,int,unsigned long ,void*));
void SSL_CTX_set_record_padding_callback_arg(struct ssl_ctx_st*  ctx  , void* arg);
void* SSL_CTX_get_record_padding_callback_arg(const struct ssl_ctx_st*  ctx  );
int SSL_CTX_set_block_padding(struct ssl_ctx_st*  ctx  , unsigned long  block_size  );
int SSL_CTX_set_block_padding_ex(struct ssl_ctx_st*  ctx  , unsigned long  app_block_size  , unsigned long  hs_block_size  );
int SSL_set_record_padding_callback(struct ssl_st*  ssl  , unsigned long (*cb)(struct ssl_st* ,int,unsigned long ,void*));
void SSL_set_record_padding_callback_arg(struct ssl_st*  ssl  , void* arg);
void* SSL_get_record_padding_callback_arg(const struct ssl_st*  ssl  );
int SSL_set_block_padding(struct ssl_st*  ssl  , unsigned long  block_size  );
int SSL_set_block_padding_ex(struct ssl_st*  ssl  , unsigned long  app_block_size  , unsigned long  hs_block_size  );
int SSL_set_num_tickets(struct ssl_st*  s  , unsigned long  num_tickets  );
unsigned long  SSL_get_num_tickets(const struct ssl_st*  s  );
int SSL_CTX_set_num_tickets(struct ssl_ctx_st*  ctx  , unsigned long  num_tickets  );
unsigned long  SSL_CTX_get_num_tickets(const struct ssl_ctx_st*  ctx  );
int SSL_handle_events(struct ssl_st*  s  );
int SSL_get_event_timeout(struct ssl_st*  s  , struct timeval*  tv  , int* is_infinite);
int SSL_get_rpoll_descriptor(struct ssl_st*  s  , struct bio_poll_descriptor_st*  desc  );
int SSL_get_wpoll_descriptor(struct ssl_st*  s  , struct bio_poll_descriptor_st*  desc  );
int SSL_net_read_desired(struct ssl_st*  s  );
int SSL_net_write_desired(struct ssl_st*  s  );
int SSL_set_blocking_mode(struct ssl_st*  s  , int blocking);
int SSL_get_blocking_mode(struct ssl_st*  s  );
int SSL_set1_initial_peer_addr(struct ssl_st*  s  , const union bio_addr_st*  peer_addr  );
struct ssl_st*  SSL_get0_connection(struct ssl_st*  s  );
int SSL_is_connection(struct ssl_st*  s  );
int SSL_is_listener(struct ssl_st*  ssl  );
struct ssl_st*  SSL_get0_listener(struct ssl_st*  s  );
struct ssl_st*  SSL_new_listener(struct ssl_ctx_st*  ctx  , unsigned long  int  flags  );
struct ssl_st*  SSL_new_listener_from(struct ssl_st*  ssl  , unsigned long  int  flags  );
struct ssl_st*  SSL_new_from_listener(struct ssl_st*  ssl  , unsigned long  int  flags  );
struct ssl_st*  SSL_accept_connection(struct ssl_st*  ssl  , unsigned long  int  flags  );
unsigned long  SSL_get_accept_connection_queue_len(struct ssl_st*  ssl  );
int SSL_listen(struct ssl_st*  ssl  );
int SSL_is_domain(struct ssl_st*  s  );
struct ssl_st*  SSL_get0_domain(struct ssl_st*  s  );
struct ssl_st*  SSL_new_domain(struct ssl_ctx_st*  ctx  , unsigned long  int  flags  );
int SSL_CTX_set_domain_flags(struct ssl_ctx_st*  ctx  , unsigned long  int  domain_flags  );
int SSL_CTX_get_domain_flags(const struct ssl_ctx_st*  ctx  , unsigned long  int*  domain_flags  );
int SSL_get_domain_flags(const struct ssl_st*  ssl  , unsigned long  int*  domain_flags  );
int SSL_get_stream_type(struct ssl_st*  s  );
unsigned long  int  SSL_get_stream_id(struct ssl_st*  s  );
int SSL_is_stream_local(struct ssl_st*  s  );
int SSL_set_default_stream_mode(struct ssl_st*  s  , unsigned int  mode  );
struct ssl_st*  SSL_new_stream(struct ssl_st*  s  , unsigned long  int  flags  );
int SSL_set_incoming_stream_policy(struct ssl_st*  s  , int policy, unsigned long  int  aec  );
struct ssl_st*  SSL_accept_stream(struct ssl_st*  s  , unsigned long  int  flags  );
unsigned long  SSL_get_accept_stream_queue_len(struct ssl_st*  s  );
int SSL_inject_net_dgram(struct ssl_st*  s  , const unsigned char* buf, unsigned long  buf_len  , const union bio_addr_st*  peer  , const union bio_addr_st*  local  );
int SSL_shutdown_ex(struct ssl_st*  ssl  , unsigned long  int  flags  , const struct ssl_shutdown_ex_args_st*  args  , unsigned long  args_len  );
int SSL_stream_conclude(struct ssl_st*  ssl  , unsigned long  int  flags  );
int SSL_stream_reset(struct ssl_st*  ssl  , const struct ssl_stream_reset_args_st*  args  , unsigned long  args_len  );
int SSL_get_stream_read_state(struct ssl_st*  ssl  );
int SSL_get_stream_write_state(struct ssl_st*  ssl  );
int SSL_get_stream_read_error_code(struct ssl_st*  ssl  , unsigned long  int*  app_error_code  );
int SSL_get_stream_write_error_code(struct ssl_st*  ssl  , unsigned long  int*  app_error_code  );
int SSL_get_conn_close_info(struct ssl_st*  ssl  , struct ssl_conn_close_info_st*  info  , unsigned long  info_len  );
int SSL_get_value_uint(struct ssl_st*  s  , unsigned int  class_  , unsigned int  id  , unsigned long  int*  v  );
int SSL_set_value_uint(struct ssl_st*  s  , unsigned int  class_  , unsigned int  id  , unsigned long  int  v  );
int SSL_poll(struct ssl_poll_item_st*  items  , unsigned long  num_items  , unsigned long  stride  , const struct timeval*  timeout  , unsigned long  int  flags  , unsigned long*  result_count  );
int SSL_session_reused(const struct ssl_st*  s  );
int SSL_is_server(const struct ssl_st*  s  );
struct ssl_conf_ctx_st*  SSL_CONF_CTX_new();
int SSL_CONF_CTX_finish(struct ssl_conf_ctx_st*  cctx  );
void SSL_CONF_CTX_free(struct ssl_conf_ctx_st*  cctx  );
unsigned int SSL_CONF_CTX_set_flags(struct ssl_conf_ctx_st*  cctx  , unsigned int flags);
unsigned int SSL_CONF_CTX_clear_flags(struct ssl_conf_ctx_st*  cctx  , unsigned int flags);
int SSL_CONF_CTX_set1_prefix(struct ssl_conf_ctx_st*  cctx  , const char* pre);
void SSL_CONF_CTX_set_ssl(struct ssl_conf_ctx_st*  cctx  , struct ssl_st*  ssl  );
void SSL_CONF_CTX_set_ssl_ctx(struct ssl_conf_ctx_st*  cctx  , struct ssl_ctx_st*  ctx  );
int SSL_CONF_cmd(struct ssl_conf_ctx_st*  cctx  , const char* cmd, const char* value);
int SSL_CONF_cmd_argv(struct ssl_conf_ctx_st*  cctx  , int* pargc, char*** pargv);
int SSL_CONF_cmd_value_type(struct ssl_conf_ctx_st*  cctx  , const char* cmd);
void SSL_add_ssl_module();
int SSL_config(struct ssl_st*  s  , const char* name);
int SSL_CTX_config(struct ssl_ctx_st*  ctx  , const char* name);
void SSL_trace(int write_p, int version, int content_type, const void* buf, unsigned long  len  , struct ssl_st*  ssl  , void* arg);
int DTLSv1_listen(struct ssl_st*  s  , union bio_addr_st*  client  );
int SSL_set_ct_validation_callback(struct ssl_st*  s  , int (*callback)(const struct ct_policy_eval_ctx_st* ,const struct stack_st_SCT* ,void*)  , void* arg);
int SSL_CTX_set_ct_validation_callback(struct ssl_ctx_st*  ctx  , int (*callback)(const struct ct_policy_eval_ctx_st* ,const struct stack_st_SCT* ,void*)  , void* arg);
int SSL_enable_ct(struct ssl_st*  s  , int validation_mode);
int SSL_CTX_enable_ct(struct ssl_ctx_st*  ctx  , int validation_mode);
int SSL_ct_is_enabled(const struct ssl_st*  s  );
int SSL_CTX_ct_is_enabled(const struct ssl_ctx_st*  ctx  );
const struct stack_st_SCT*  SSL_get0_peer_scts(struct ssl_st*  s  );
int SSL_CTX_set_default_ctlog_list_file(struct ssl_ctx_st*  ctx  );
int SSL_CTX_set_ctlog_list_file(struct ssl_ctx_st*  ctx  , const char* path);
void SSL_CTX_set0_ctlog_store(struct ssl_ctx_st*  ctx  , struct ctlog_store_st*  logs  );
const struct ctlog_store_st*  SSL_CTX_get0_ctlog_store(const struct ssl_ctx_st*  ctx  );
void SSL_set_security_level(struct ssl_st*  s  , int level);
int SSL_get_security_level(const struct ssl_st*  s  );
void SSL_set_security_callback(struct ssl_st*  s  , int (*cb)(const struct ssl_st* ,const struct ssl_ctx_st* ,int,int,int,void*,void*));
int (*SSL_get_security_callback(const struct ssl_st*  _function_pointer_result_var_name_a65  ))(const struct ssl_st* ,const struct ssl_ctx_st* ,int,int,int,void*,void*);
void SSL_set0_security_ex_data(struct ssl_st*  s  , void* ex);
void* SSL_get0_security_ex_data(const struct ssl_st*  s  );
void SSL_CTX_set_security_level(struct ssl_ctx_st*  ctx  , int level);
int SSL_CTX_get_security_level(const struct ssl_ctx_st*  ctx  );
void SSL_CTX_set_security_callback(struct ssl_ctx_st*  ctx  , int (*cb)(const struct ssl_st* ,const struct ssl_ctx_st* ,int,int,int,void*,void*));
int (*SSL_CTX_get_security_callback(const struct ssl_ctx_st*  _function_pointer_result_var_name_a66  ))(const struct ssl_st* ,const struct ssl_ctx_st* ,int,int,int,void*,void*);
void SSL_CTX_set0_security_ex_data(struct ssl_ctx_st*  ctx  , void* ex);
void* SSL_CTX_get0_security_ex_data(const struct ssl_ctx_st*  ctx  );
int OPENSSL_init_ssl(unsigned long  int  opts  , const struct ossl_init_settings_st*  settings  );
int SSL_free_buffers(struct ssl_st*  ssl  );
int SSL_alloc_buffers(struct ssl_st*  ssl  );
int SSL_CTX_set_session_ticket_cb(struct ssl_ctx_st*  ctx  , int (*gen_cb)(struct ssl_st* ,void*)  , int (*dec_cb)(struct ssl_st* ,struct ssl_session_st* ,const unsigned char*,unsigned long ,int ,void*)  , void* arg);
int SSL_SESSION_set1_ticket_appdata(struct ssl_session_st*  ss  , const void* data, unsigned long  len  );
int SSL_SESSION_get0_ticket_appdata(struct ssl_session_st*  ss  , void** data, unsigned long*  len  );
void DTLS_set_timer_cb(struct ssl_st*  s  , unsigned int (*cb)(struct ssl_st* ,unsigned int)  );
void SSL_CTX_set_allow_early_data_cb(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,void*)  , void* arg);
void SSL_set_allow_early_data_cb(struct ssl_st*  s  , int (*cb)(struct ssl_st* ,void*)  , void* arg);
const char* OSSL_default_cipher_list();
const char* OSSL_default_ciphersuites();
int SSL_CTX_compress_certs(struct ssl_ctx_st*  ctx  , int alg);
int SSL_compress_certs(struct ssl_st*  ssl  , int alg);
int SSL_CTX_set1_cert_comp_preference(struct ssl_ctx_st*  ctx  , int* algs, unsigned long  len  );
int SSL_set1_cert_comp_preference(struct ssl_st*  ssl  , int* algs, unsigned long  len  );
int SSL_CTX_set1_compressed_cert(struct ssl_ctx_st*  ctx  , int algorithm, unsigned char* comp_data, unsigned long  comp_length  , unsigned long  orig_length  );
int SSL_set1_compressed_cert(struct ssl_st*  ssl  , int algorithm, unsigned char* comp_data, unsigned long  comp_length  , unsigned long  orig_length  );
unsigned long  SSL_CTX_get1_compressed_cert(struct ssl_ctx_st*  ctx  , int alg, unsigned char** data, unsigned long*  orig_len  );
unsigned long  SSL_get1_compressed_cert(struct ssl_st*  ssl  , int alg, unsigned char** data, unsigned long*  orig_len  );
int SSL_add_expected_rpk(struct ssl_st*  s  , struct evp_pkey_st*  rpk  );
struct evp_pkey_st*  SSL_get0_peer_rpk(const struct ssl_st*  s  );
struct evp_pkey_st*  SSL_SESSION_get0_peer_rpk(struct ssl_session_st*  s  );
int SSL_get_negotiated_client_cert_type(const struct ssl_st*  s  );
int SSL_get_negotiated_server_cert_type(const struct ssl_st*  s  );
int SSL_set1_client_cert_type(struct ssl_st*  s  , const unsigned char* val, unsigned long  len  );
int SSL_set1_server_cert_type(struct ssl_st*  s  , const unsigned char* val, unsigned long  len  );
int SSL_CTX_set1_client_cert_type(struct ssl_ctx_st*  ctx  , const unsigned char* val, unsigned long  len  );
int SSL_CTX_set1_server_cert_type(struct ssl_ctx_st*  ctx  , const unsigned char* val, unsigned long  len  );
int SSL_get0_client_cert_type(const struct ssl_st*  s  , unsigned char** t, unsigned long*  len  );
int SSL_get0_server_cert_type(const struct ssl_st*  s  , unsigned char** t, unsigned long*  len  );
int SSL_CTX_get0_client_cert_type(const struct ssl_ctx_st*  ctx  , unsigned char** t, unsigned long*  len  );
int SSL_CTX_get0_server_cert_type(const struct ssl_ctx_st*  s  , unsigned char** t, unsigned long*  len  );
int SSL_set_quic_tls_cbs(struct ssl_st*  s  , const struct ossl_dispatch_st*  qtdis  , void* arg);
int SSL_set_quic_tls_transport_params(struct ssl_st*  s  , const unsigned char* params, unsigned long  params_len  );
int SSL_set_quic_tls_early_data_enabled(struct ssl_st*  s  , int enabled);
int* __errno_location() __attribute__ ((__const__));
void ERR_new();
void ERR_set_debug(const char* file, int line, const char* func);
void ERR_set_error(int lib, int reason, const char* fmt, ...);
void ERR_vset_error(int lib, int reason, const char* fmt, __builtin_va_list  args  );
void ERR_set_error_data(char* data, int flags);
unsigned long  int ERR_get_error();
unsigned long  int ERR_get_error_all(const char** file, int* line, const char** func, const char** data, int* flags);
unsigned long  int ERR_get_error_line(const char** file, int* line);
unsigned long  int ERR_get_error_line_data(const char** file, int* line, const char** data, int* flags);
unsigned long  int ERR_peek_error();
unsigned long  int ERR_peek_error_line(const char** file, int* line);
unsigned long  int ERR_peek_error_func(const char** func);
unsigned long  int ERR_peek_error_data(const char** data, int* flags);
unsigned long  int ERR_peek_error_all(const char** file, int* line, const char** func, const char** data, int* flags);
unsigned long  int ERR_peek_error_line_data(const char** file, int* line, const char** data, int* flags);
unsigned long  int ERR_peek_last_error();
unsigned long  int ERR_peek_last_error_line(const char** file, int* line);
unsigned long  int ERR_peek_last_error_func(const char** func);
unsigned long  int ERR_peek_last_error_data(const char** data, int* flags);
unsigned long  int ERR_peek_last_error_all(const char** file, int* line, const char** func, const char** data, int* flags);
unsigned long  int ERR_peek_last_error_line_data(const char** file, int* line, const char** data, int* flags);
void ERR_clear_error();
char* ERR_error_string(unsigned long  int e, char* buf);
void ERR_error_string_n(unsigned long  int e, char* buf, unsigned long  len  );
const char* ERR_lib_error_string(unsigned long  int e);
const char* ERR_func_error_string(unsigned long  int e);
const char* ERR_reason_error_string(unsigned long  int e);
void ERR_print_errors_cb(int (*cb)(const char*,unsigned long ,void*), void* u);
void ERR_print_errors_fp(struct _IO_FILE*  fp  );
void ERR_print_errors(struct bio_st*  bp  );
void ERR_add_error_data(int num, ...);
void ERR_add_error_vdata(int num, __builtin_va_list  args  );
void ERR_add_error_txt(const char* sepr, const char* txt);
void ERR_add_error_mem_bio(const char* sep, struct bio_st*  bio  );
int ERR_load_strings(int lib, struct ERR_string_data_st*  str  );
int ERR_load_strings_const(const struct ERR_string_data_st*  str  );
int ERR_unload_strings(int lib, struct ERR_string_data_st*  str  );
void ERR_remove_thread_state(void* );
void ERR_remove_state(unsigned long  int pid);
struct err_state_st*  ERR_get_state();
int ERR_get_next_error_library();
int ERR_set_mark();
int ERR_pop_to_mark();
int ERR_clear_last_mark();
int ERR_count_to_mark();
int ERR_pop();
struct err_state_st*  OSSL_ERR_STATE_new();
void OSSL_ERR_STATE_save(struct err_state_st*  es  );
void OSSL_ERR_STATE_save_to_mark(struct err_state_st*  es  );
void OSSL_ERR_STATE_restore(const struct err_state_st*  es  );
void OSSL_ERR_STATE_free(struct err_state_st*  es  );
int RAND_set_rand_method(const struct rand_meth_st*  meth  );
const struct rand_meth_st*  RAND_get_rand_method();
struct rand_meth_st*  RAND_OpenSSL();
int RAND_bytes(unsigned char* buf, int num);
int RAND_priv_bytes(unsigned char* buf, int num);
int RAND_priv_bytes_ex(struct ossl_lib_ctx_st*  ctx  , unsigned char* buf, unsigned long  num  , unsigned int strength);
int RAND_bytes_ex(struct ossl_lib_ctx_st*  ctx  , unsigned char* buf, unsigned long  num  , unsigned int strength);
int RAND_pseudo_bytes(unsigned char* buf, int num);
struct evp_rand_ctx_st*  RAND_get0_primary(struct ossl_lib_ctx_st*  ctx  );
struct evp_rand_ctx_st*  RAND_get0_public(struct ossl_lib_ctx_st*  ctx  );
struct evp_rand_ctx_st*  RAND_get0_private(struct ossl_lib_ctx_st*  ctx  );
int RAND_set0_public(struct ossl_lib_ctx_st*  ctx  , struct evp_rand_ctx_st*  rand  );
int RAND_set0_private(struct ossl_lib_ctx_st*  ctx  , struct evp_rand_ctx_st*  rand  );
int RAND_set_DRBG_type(struct ossl_lib_ctx_st*  ctx  , const char* drbg, const char* propq, const char* cipher, const char* digest);
int RAND_set_seed_source_type(struct ossl_lib_ctx_st*  ctx  , const char* seed, const char* propq);
void RAND_seed(const void* buf, int num);
void RAND_keep_random_devices_open(int keep);
void RAND_add(const void* buf, int num, double randomness);
int RAND_load_file(const char* file, long max_bytes);
int RAND_write_file(const char* file);
const char* RAND_file_name(char* file, unsigned long  num  );
int RAND_status();
int RAND_poll();
int RAND_set1_random_provider(struct ossl_lib_ctx_st*  ctx  , struct ossl_provider_st*  p  );
int test_headers_subdir();
// uniq global variable
// inline function
static inline unsigned short int  __bswap_16(unsigned short int  __bsx  )
{
        return ((unsigned short int )((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int  __bswap_32(unsigned int  __bsx  )
{
        return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int  __bswap_64(unsigned long  int  __bsx  )
{
        return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int  __uint16_identity(unsigned short int  __x  )
{
        return __x;
}
static inline unsigned int  __uint32_identity(unsigned int  __x  )
{
        return __x;
}
static inline unsigned long  int  __uint64_identity(unsigned long  int  __x  )
{
        return __x;
}
static inline unsigned int  __arch_swab32(unsigned int  val  )
{
     __asm  (
        "bswapl %0"
        :        "=r"
(val)        :        "0"
(val)    );
        return val;
}
static inline unsigned long  long  __arch_swab64(unsigned long  long  val  )
{
     __asm  (
        "bswapq %0"
        :        "=r"
(val)        :        "0"
(val)    );
        return val;
}
static inline unsigned short int  __fswab16(unsigned short int  val  )
{
        return ((unsigned short int )((((unsigned short int )(val)&(unsigned short int )0x00ffU)<<8)|(((unsigned short int )(val)&(unsigned short int )0xff00U)>>8)));
}
static inline unsigned int  __fswab32(unsigned int  val  )
{
        return __arch_swab32(val);
}
static inline unsigned long  long  __fswab64(unsigned long  long  val  )
{
        return __arch_swab64(val);
}
static inline unsigned int  __fswahw32(unsigned int  val  )
{
        return ((unsigned int )((((unsigned int )(val)&(unsigned int )0x0000ffffUL)<<16)|(((unsigned int )(val)&(unsigned int )0xffff0000UL)>>16)));
}
static inline unsigned int  __fswahb32(unsigned int  val  )
{
        return ((unsigned int )((((unsigned int )(val)&(unsigned int )0x00ff00ffUL)<<8)|(((unsigned int )(val)&(unsigned int )0xff00ff00UL)>>8)));
}
static inline unsigned long  int  __attribute__((__always_inline__))  __swab(const unsigned long  int y)
{
        return (unsigned long  long )(((__builtin_constant_p(y))?(((unsigned long  long )((((unsigned long  long )(y)&(unsigned long  long )0x00000000000000ffULL)<<56)|(((unsigned long  long )(y)&(unsigned long  long )0x000000000000ff00ULL)<<40)|(((unsigned long  long )(y)&(unsigned long  long )0x0000000000ff0000ULL)<<24)|(((unsigned long  long )(y)&(unsigned long  long )0x00000000ff000000ULL)<<8)|(((unsigned long  long )(y)&(unsigned long  long )0x000000ff00000000ULL)>>8)|(((unsigned long  long )(y)&(unsigned long  long )0x0000ff0000000000ULL)>>24)|(((unsigned long  long )(y)&(unsigned long  long )0x00ff000000000000ULL)>>40)|(((unsigned long  long )(y)&(unsigned long  long )0xff00000000000000ULL)>>56)))):(__fswab64(y))));
}
static inline unsigned short int  __attribute__((__always_inline__))  __swab16p(const unsigned short int*  p  )
{
        return (unsigned short int )(((__builtin_constant_p(*p))?(((unsigned short int )((((unsigned short int )(*p)&(unsigned short int )0x00ffU)<<8)|(((unsigned short int )(*p)&(unsigned short int )0xff00U)>>8)))):(__fswab16(*p))));
}
static inline unsigned int  __attribute__((__always_inline__))  __swab32p(const unsigned int*  p  )
{
        return (unsigned int )(((__builtin_constant_p(*p))?(((unsigned int )((((unsigned int )(*p)&(unsigned int )0x000000ffUL)<<24)|(((unsigned int )(*p)&(unsigned int )0x0000ff00UL)<<8)|(((unsigned int )(*p)&(unsigned int )0x00ff0000UL)>>8)|(((unsigned int )(*p)&(unsigned int )0xff000000UL)>>24)))):(__fswab32(*p))));
}
static inline unsigned long  long  __attribute__((__always_inline__))  __swab64p(const unsigned long  long*  p  )
{
        return (unsigned long  long )(((__builtin_constant_p(*p))?(((unsigned long  long )((((unsigned long  long )(*p)&(unsigned long  long )0x00000000000000ffULL)<<56)|(((unsigned long  long )(*p)&(unsigned long  long )0x000000000000ff00ULL)<<40)|(((unsigned long  long )(*p)&(unsigned long  long )0x0000000000ff0000ULL)<<24)|(((unsigned long  long )(*p)&(unsigned long  long )0x00000000ff000000ULL)<<8)|(((unsigned long  long )(*p)&(unsigned long  long )0x000000ff00000000ULL)>>8)|(((unsigned long  long )(*p)&(unsigned long  long )0x0000ff0000000000ULL)>>24)|(((unsigned long  long )(*p)&(unsigned long  long )0x00ff000000000000ULL)>>40)|(((unsigned long  long )(*p)&(unsigned long  long )0xff00000000000000ULL)>>56)))):(__fswab64(*p))));
}
static inline unsigned int  __swahw32p(const unsigned int*  p  )
{
        return (((__builtin_constant_p((unsigned int )(*p)))?(((unsigned int )((((unsigned int )(*p)&(unsigned int )0x0000ffffUL)<<16)|(((unsigned int )(*p)&(unsigned int )0xffff0000UL)>>16)))):(__fswahw32(*p))));
}
static inline unsigned int  __swahb32p(const unsigned int*  p  )
{
        return (((__builtin_constant_p((unsigned int )(*p)))?(((unsigned int )((((unsigned int )(*p)&(unsigned int )0x00ff00ffUL)<<8)|(((unsigned int )(*p)&(unsigned int )0xff00ff00UL)>>8)))):(__fswahb32(*p))));
}
static inline void __swab16s(unsigned short int*  p  )
{
    *p=__swab16p(p);
}
static inline void  __attribute__((__always_inline__))  __swab32s(unsigned int*  p  )
{
    *p=__swab32p(p);
}
static inline void  __attribute__((__always_inline__))  __swab64s(unsigned long  long*  p  )
{
    *p=__swab64p(p);
}
static inline void __swahw32s(unsigned int*  p  )
{
    *p=__swahw32p(p);
}
static inline void __swahb32s(unsigned int*  p  )
{
    *p=__swahb32p(p);
}
static inline unsigned long  long  __attribute__((__always_inline__))  __cpu_to_le64p(const unsigned long  long*  p  )
{
        return (unsigned long  long )*p;
}
static inline unsigned long  long  __attribute__((__always_inline__))  __le64_to_cpup(const unsigned long  long*  p  )
{
        return (unsigned long  long )*p;
}
static inline unsigned int  __attribute__((__always_inline__))  __cpu_to_le32p(const unsigned int*  p  )
{
        return (unsigned int )*p;
}
static inline unsigned int  __attribute__((__always_inline__))  __le32_to_cpup(const unsigned int*  p  )
{
        return (unsigned int )*p;
}
static inline unsigned short int  __attribute__((__always_inline__))  __cpu_to_le16p(const unsigned short int*  p  )
{
        return (unsigned short int )*p;
}
static inline unsigned short int  __attribute__((__always_inline__))  __le16_to_cpup(const unsigned short int*  p  )
{
        return (unsigned short int )*p;
}
static inline unsigned long  long  __attribute__((__always_inline__))  __cpu_to_be64p(const unsigned long  long*  p  )
{
        return (unsigned long  long )__swab64p(p);
}
static inline unsigned long  long  __attribute__((__always_inline__))  __be64_to_cpup(const unsigned long  long*  p  )
{
        return __swab64p((unsigned long  long* )p);
}
static inline unsigned int  __attribute__((__always_inline__))  __cpu_to_be32p(const unsigned int*  p  )
{
        return (unsigned int )__swab32p(p);
}
static inline unsigned int  __attribute__((__always_inline__))  __be32_to_cpup(const unsigned int*  p  )
{
        return __swab32p((unsigned int* )p);
}
static inline unsigned short int  __attribute__((__always_inline__))  __cpu_to_be16p(const unsigned short int*  p  )
{
        return (unsigned short int )__swab16p(p);
}
static inline unsigned short int  __attribute__((__always_inline__))  __be16_to_cpup(const unsigned short int*  p  )
{
        return __swab16p((unsigned short int* )p);
}
static inline char*  __attribute__((unused))  ossl_check_OPENSSL_STRING_type(char* ptr)
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_OPENSSL_STRING_sk_type(const struct stack_st_OPENSSL_STRING*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_OPENSSL_STRING_sk_type(struct stack_st_OPENSSL_STRING*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_OPENSSL_STRING_compfunc_type(int (*cmp)(const char** const,const char** const)  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_OPENSSL_STRING_copyfunc_type(char* (*cpy)(const char*)  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_OPENSSL_STRING_freefunc_type(void (*fr)(char*)  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline const char*  __attribute__((unused))  ossl_check_OPENSSL_CSTRING_type(const char* ptr)
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_OPENSSL_CSTRING_sk_type(const struct stack_st_OPENSSL_CSTRING*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_OPENSSL_CSTRING_sk_type(struct stack_st_OPENSSL_CSTRING*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_OPENSSL_CSTRING_compfunc_type(int (*cmp)(const char** const,const char** const)  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_OPENSSL_CSTRING_copyfunc_type(char* (*cpy)(const char*)  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_OPENSSL_CSTRING_freefunc_type(void (*fr)(char*)  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline void*  __attribute__((unused))  ossl_check_OPENSSL_BLOCK_type(void* ptr)
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_OPENSSL_BLOCK_sk_type(const struct stack_st_OPENSSL_BLOCK*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_OPENSSL_BLOCK_sk_type(struct stack_st_OPENSSL_BLOCK*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_OPENSSL_BLOCK_compfunc_type(int (*cmp)(const void** const,const void** const)  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_OPENSSL_BLOCK_copyfunc_type(void* (*cpy)(const void*)  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_OPENSSL_BLOCK_freefunc_type(void (*fr)(void*)  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline void*  __attribute__((unused))  ossl_check_void_type(void* ptr)
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_void_sk_type(const struct stack_st_void*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_void_sk_type(struct stack_st_void*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_void_compfunc_type(int (*cmp)(const void** const,const void** const)  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_void_copyfunc_type(void* (*cpy)(const void*)  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_void_freefunc_type(void (*fr)(void*)  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct ssl_comp_st*  __attribute__((unused))  ossl_check_SSL_COMP_type(struct ssl_comp_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_SSL_COMP_sk_type(const struct stack_st_SSL_COMP*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_SSL_COMP_sk_type(struct stack_st_SSL_COMP*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_SSL_COMP_compfunc_type(int (*cmp)(const struct ssl_comp_st** const ,const struct ssl_comp_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_SSL_COMP_copyfunc_type(struct ssl_comp_st* (*cpy)(const struct ssl_comp_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_SSL_COMP_freefunc_type(void (*fr)(struct ssl_comp_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct bio_st*  __attribute__((unused))  ossl_check_BIO_type(struct bio_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_BIO_sk_type(const struct stack_st_BIO*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_BIO_sk_type(struct stack_st_BIO*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_BIO_compfunc_type(int (*cmp)(const struct bio_st** const ,const struct bio_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_BIO_copyfunc_type(struct bio_st* (*cpy)(const struct bio_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_BIO_freefunc_type(void (*fr)(struct bio_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_core_gettable_params(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (const struct ossl_param_st* (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_core_get_params(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,struct ossl_param_st ) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ,struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_core_thread_start(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,void (*)(void*) ,void*) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ,void (*)(void*) ,void*) )opf->function;
}
static inline struct openssl_core_ctx_st* __attribute__((unused))  (*(*OSSL_FUNC_core_get_libctx(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (struct openssl_core_ctx_st* (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_core_new_error(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_core_set_error_debug(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,const char*,int,const char*) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ,const char*,int,const char*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_core_vset_error(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned int ,const char*,__builtin_va_list ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ,unsigned int ,const char*,__builtin_va_list ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_core_set_error_mark(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_core_clear_last_error_mark(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_core_pop_error_to_mark(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_core_obj_add_sigid(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,const char*,const char*,const char*) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ,const char*,const char*,const char*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_core_obj_create(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,const char*,const char*,const char*) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ,const char*,const char*,const char*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_malloc(const struct ossl_dispatch_st*  opf  )))(unsigned long ,const char*,int) 
{
        return (void* (*(*))(unsigned long ,const char*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_zalloc(const struct ossl_dispatch_st*  opf  )))(unsigned long ,const char*,int) 
{
        return (void* (*(*))(unsigned long ,const char*,int) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_free(const struct ossl_dispatch_st*  opf  )))(void*,const char*,int) 
{
        return (void (*(*))(void*,const char*,int) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_clear_free(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long ,const char*,int) 
{
        return (void (*(*))(void*,unsigned long ,const char*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_realloc(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long ,const char*,int) 
{
        return (void* (*(*))(void*,unsigned long ,const char*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_clear_realloc(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long ,unsigned long ,const char*,int) 
{
        return (void* (*(*))(void*,unsigned long ,unsigned long ,const char*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_secure_malloc(const struct ossl_dispatch_st*  opf  )))(unsigned long ,const char*,int) 
{
        return (void* (*(*))(unsigned long ,const char*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_secure_zalloc(const struct ossl_dispatch_st*  opf  )))(unsigned long ,const char*,int) 
{
        return (void* (*(*))(unsigned long ,const char*,int) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_secure_free(const struct ossl_dispatch_st*  opf  )))(void*,const char*,int) 
{
        return (void (*(*))(void*,const char*,int) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_secure_clear_free(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long ,const char*,int) 
{
        return (void (*(*))(void*,unsigned long ,const char*,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_secure_allocated(const struct ossl_dispatch_st*  opf  )))(const void*) 
{
        return (int (*(*))(const void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_OPENSSL_cleanse(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long ) 
{
        return (void (*(*))(void*,unsigned long ) )opf->function;
}
static inline struct ossl_core_bio_st* __attribute__((unused))  (*(*OSSL_FUNC_BIO_new_file(const struct ossl_dispatch_st*  opf  )))(const char*,const char*) 
{
        return (struct ossl_core_bio_st* (*(*))(const char*,const char*) )opf->function;
}
static inline struct ossl_core_bio_st* __attribute__((unused))  (*(*OSSL_FUNC_BIO_new_membuf(const struct ossl_dispatch_st*  opf  )))(const void*,int) 
{
        return (struct ossl_core_bio_st* (*(*))(const void*,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_read_ex(const struct ossl_dispatch_st*  opf  )))(struct ossl_core_bio_st* ,void*,unsigned long ,unsigned long* ) 
{
        return (int (*(*))(struct ossl_core_bio_st* ,void*,unsigned long ,unsigned long* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_write_ex(const struct ossl_dispatch_st*  opf  )))(struct ossl_core_bio_st* ,const void*,unsigned long ,unsigned long* ) 
{
        return (int (*(*))(struct ossl_core_bio_st* ,const void*,unsigned long ,unsigned long* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_gets(const struct ossl_dispatch_st*  opf  )))(struct ossl_core_bio_st* ,char*,int) 
{
        return (int (*(*))(struct ossl_core_bio_st* ,char*,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_puts(const struct ossl_dispatch_st*  opf  )))(struct ossl_core_bio_st* ,const char*) 
{
        return (int (*(*))(struct ossl_core_bio_st* ,const char*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_up_ref(const struct ossl_dispatch_st*  opf  )))(struct ossl_core_bio_st* ) 
{
        return (int (*(*))(struct ossl_core_bio_st* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_free(const struct ossl_dispatch_st*  opf  )))(struct ossl_core_bio_st* ) 
{
        return (int (*(*))(struct ossl_core_bio_st* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_vprintf(const struct ossl_dispatch_st*  opf  )))(struct ossl_core_bio_st* ,const char*,__builtin_va_list ) 
{
        return (int (*(*))(struct ossl_core_bio_st* ,const char*,__builtin_va_list ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_vsnprintf(const struct ossl_dispatch_st*  opf  )))(char*,unsigned long ,const char*,__builtin_va_list ) 
{
        return (int (*(*))(char*,unsigned long ,const char*,__builtin_va_list ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_ctrl(const struct ossl_dispatch_st*  opf  )))(struct ossl_core_bio_st* ,int,long,void*) 
{
        return (int (*(*))(struct ossl_core_bio_st* ,int,long,void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_indicator_cb(const struct ossl_dispatch_st*  opf  )))(struct openssl_core_ctx_st* ,int (*(*(*)))(const char*,const char*,const struct ossl_param_st ) ) 
{
        return (void (*(*))(struct openssl_core_ctx_st* ,int (*(*(*)))(const char*,const char*,const struct ossl_param_st ) ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_self_test_cb(const struct ossl_dispatch_st*  opf  )))(struct openssl_core_ctx_st* ,int (*(*(*)))(const struct ossl_param_st ,void*) ,void**) 
{
        return (void (*(*))(struct openssl_core_ctx_st* ,int (*(*(*)))(const struct ossl_param_st ,void*) ,void**) )opf->function;
}
static inline unsigned long __attribute__((unused))  (*(*OSSL_FUNC_get_entropy(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long ,unsigned long ) 
{
        return (unsigned long (*(*))(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long ,unsigned long ) )opf->function;
}
static inline unsigned long __attribute__((unused))  (*(*OSSL_FUNC_get_user_entropy(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long ,unsigned long ) 
{
        return (unsigned long (*(*))(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long ,unsigned long ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_cleanup_entropy(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_cleanup_user_entropy(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long ) )opf->function;
}
static inline unsigned long __attribute__((unused))  (*(*OSSL_FUNC_get_nonce(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char**,unsigned long ,unsigned long ,const void*,unsigned long ) 
{
        return (unsigned long (*(*))(const struct ossl_core_handle_st* ,unsigned char**,unsigned long ,unsigned long ,const void*,unsigned long ) )opf->function;
}
static inline unsigned long __attribute__((unused))  (*(*OSSL_FUNC_get_user_nonce(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char**,unsigned long ,unsigned long ,const void*,unsigned long ) 
{
        return (unsigned long (*(*))(const struct ossl_core_handle_st* ,unsigned char**,unsigned long ,unsigned long ,const void*,unsigned long ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_cleanup_nonce(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_cleanup_user_nonce(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_provider_register_child_cb(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,int (*)(const struct ossl_core_handle_st* ,void*),int (*)(const struct ossl_core_handle_st* ,void*),int (*)(const char*,void*),void*) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ,int (*)(const struct ossl_core_handle_st* ,void*),int (*)(const struct ossl_core_handle_st* ,void*),int (*)(const char*,void*),void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_provider_deregister_child_cb(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline const char* __attribute__((unused))  (*(*OSSL_FUNC_provider_name(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (const char* (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_provider_get0_provider_ctx(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (void* (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline const struct ossl_dispatch_st* __attribute__((unused))  (*(*OSSL_FUNC_provider_get0_dispatch(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (const struct ossl_dispatch_st* (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_provider_up_ref(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,int) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_provider_free(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,int) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_core_count_to_mark(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ) 
{
        return (int (*(*))(const struct ossl_core_handle_st* ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_provider_teardown(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_provider_gettable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_provider_get_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_algorithm_st* __attribute__((unused))  (*(*OSSL_FUNC_provider_query_operation(const struct ossl_dispatch_st*  opf  )))(void*,int,int*) 
{
        return (const struct ossl_algorithm_st* (*(*))(void*,int,int*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_provider_unquery_operation(const struct ossl_dispatch_st*  opf  )))(void*,int,const struct ossl_algorithm_st* ) 
{
        return (void (*(*))(void*,int,const struct ossl_algorithm_st* ) )opf->function;
}
static inline const struct ossl_item_st* __attribute__((unused))  (*(*OSSL_FUNC_provider_get_reason_strings(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_item_st* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_provider_get_capabilities(const struct ossl_dispatch_st*  opf  )))(void*,const char*,int (*(*))(const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,const char*,int (*(*))(const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_provider_self_test(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_provider_random_bytes(const struct ossl_dispatch_st*  opf  )))(void*,int,void*,unsigned long ,unsigned int) 
{
        return (int (*(*))(void*,int,void*,unsigned long ,unsigned int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_crypto_send(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,const unsigned char*,unsigned long ,unsigned long* ,void*) 
{
        return (int (*(*))(struct ssl_st* ,const unsigned char*,unsigned long ,unsigned long* ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_crypto_recv_rcd(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,const unsigned char**,unsigned long* ,void*) 
{
        return (int (*(*))(struct ssl_st* ,const unsigned char**,unsigned long* ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_crypto_release_rcd(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,unsigned long ,void*) 
{
        return (int (*(*))(struct ssl_st* ,unsigned long ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_yield_secret(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,unsigned int ,int,const unsigned char*,unsigned long ,void*) 
{
        return (int (*(*))(struct ssl_st* ,unsigned int ,int,const unsigned char*,unsigned long ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_got_transport_params(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,const unsigned char*,unsigned long ,void*) 
{
        return (int (*(*))(struct ssl_st* ,const unsigned char*,unsigned long ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_alert(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,unsigned char,void*) 
{
        return (int (*(*))(struct ssl_st* ,unsigned char,void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_digest_newctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_init(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_squeeze(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_digest(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ,unsigned char*,unsigned long* ,unsigned long ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ,unsigned char*,unsigned long* ,unsigned long ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_digest_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_digest_dupctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_digest_copyctx(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (void (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_get_params(const struct ossl_dispatch_st*  opf  )))(struct ossl_param_st ) 
{
        return (int (*(*))(struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_get_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_digest_gettable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_digest_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_digest_gettable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_cipher_newctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_encrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_decrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_update(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_cipher(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_pipeline_encrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ,unsigned long ,const unsigned char**,unsigned long ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ,unsigned long ,const unsigned char**,unsigned long ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_pipeline_decrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ,unsigned long ,const unsigned char**,unsigned long ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ,unsigned long ,const unsigned char**,unsigned long ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_pipeline_update(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long ,unsigned char**,unsigned long* ,const unsigned long* ,const unsigned char**,const unsigned long* ) 
{
        return (int (*(*))(void*,unsigned long ,unsigned char**,unsigned long* ,const unsigned long* ,const unsigned char**,const unsigned long* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_pipeline_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long ,unsigned char**,unsigned long* ,const unsigned long* ) 
{
        return (int (*(*))(void*,unsigned long ,unsigned char**,unsigned long* ,const unsigned long* ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_cipher_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_cipher_dupctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_get_params(const struct ossl_dispatch_st*  opf  )))(struct ossl_param_st ) 
{
        return (int (*(*))(struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_get_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_cipher_gettable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_cipher_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_cipher_gettable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_encrypt_skey_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const unsigned char*,unsigned long ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const unsigned char*,unsigned long ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_decrypt_skey_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const unsigned char*,unsigned long ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const unsigned char*,unsigned long ,const struct ossl_param_st ) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_mac_newctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_mac_dupctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_mac_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_mac_init(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_mac_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_mac_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_mac_gettable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_mac_gettable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_mac_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_mac_get_params(const struct ossl_dispatch_st*  opf  )))(struct ossl_param_st ) 
{
        return (int (*(*))(struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_mac_get_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_mac_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_mac_init_skey(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_kdf_newctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_kdf_dupctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_kdf_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_kdf_reset(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kdf_derive(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long ,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_kdf_gettable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_kdf_gettable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_kdf_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kdf_get_params(const struct ossl_dispatch_st*  opf  )))(struct ossl_param_st ) 
{
        return (int (*(*))(struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kdf_get_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kdf_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_rand_newctx(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_dispatch_st* ) 
{
        return (void* (*(*))(void*,void*,const struct ossl_dispatch_st* ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_rand_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_instantiate(const struct ossl_dispatch_st*  opf  )))(void*,unsigned int,int,const unsigned char*,unsigned long ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,unsigned int,int,const unsigned char*,unsigned long ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_uninstantiate(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_generate(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long ,unsigned int,int,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long ,unsigned int,int,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_reseed(const struct ossl_dispatch_st*  opf  )))(void*,int,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,int,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ) )opf->function;
}
static inline unsigned long __attribute__((unused))  (*(*OSSL_FUNC_rand_nonce(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned int,unsigned long ,unsigned long ) 
{
        return (unsigned long (*(*))(void*,unsigned char*,unsigned int,unsigned long ,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_enable_locking(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_lock(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_rand_unlock(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_rand_gettable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_rand_gettable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_rand_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_get_params(const struct ossl_dispatch_st*  opf  )))(struct ossl_param_st ) 
{
        return (int (*(*))(struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_get_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_rand_set_callbacks(const struct ossl_dispatch_st*  opf  )))(void*,int (*(*))(const struct ossl_param_st ,struct ossl_param_st ,void*) ,int (*(*))(const struct ossl_param_st ,void*) ,int (*(*))(const struct ossl_param_st ,struct ossl_param_st ,void*) ,int (*(*))(const struct ossl_param_st ,void*) ,void*) 
{
        return (void (*(*))(void*,int (*(*))(const struct ossl_param_st ,struct ossl_param_st ,void*) ,int (*(*))(const struct ossl_param_st ,void*) ,int (*(*))(const struct ossl_param_st ,struct ossl_param_st ,void*) ,int (*(*))(const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_verify_zeroization(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline unsigned long __attribute__((unused))  (*(*OSSL_FUNC_rand_get_seed(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char**,int,unsigned long ,unsigned long ,int,const unsigned char*,unsigned long ) 
{
        return (unsigned long (*(*))(void*,unsigned char**,int,unsigned long ,unsigned long ,int,const unsigned char*,unsigned long ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_rand_clear_seed(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long ) 
{
        return (void (*(*))(void*,unsigned char*,unsigned long ) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_new(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_gen_init(const struct ossl_dispatch_st*  opf  )))(void*,int,const struct ossl_param_st ) 
{
        return (void* (*(*))(void*,int,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_gen_set_template(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (int (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_gen_set_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_gen_settable_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_gen_get_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_gen_gettable_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_gen(const struct ossl_dispatch_st*  opf  )))(void*,int (*(*))(const struct ossl_param_st ,void*) ,void*) 
{
        return (void* (*(*))(void*,int (*(*))(const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_gen_cleanup(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_load(const struct ossl_dispatch_st*  opf  )))(const void*,unsigned long ) 
{
        return (void* (*(*))(const void*,unsigned long ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_free(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_get_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_gettable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_set_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_settable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline const char* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_query_operation_name(const struct ossl_dispatch_st*  opf  )))(int) 
{
        return (const char* (*(*))(int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_has(const struct ossl_dispatch_st*  opf  )))(const void*,int) 
{
        return (int (*(*))(const void*,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_validate(const struct ossl_dispatch_st*  opf  )))(const void*,int,int) 
{
        return (int (*(*))(const void*,int,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_match(const struct ossl_dispatch_st*  opf  )))(const void*,const void*,int) 
{
        return (int (*(*))(const void*,const void*,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_import(const struct ossl_dispatch_st*  opf  )))(void*,int,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,int,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_import_types(const struct ossl_dispatch_st*  opf  )))(int) 
{
        return (const struct ossl_param_st* (*(*))(int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_export(const struct ossl_dispatch_st*  opf  )))(void*,int,int (*(*))(const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,int,int (*(*))(const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_export_types(const struct ossl_dispatch_st*  opf  )))(int) 
{
        return (const struct ossl_param_st* (*(*))(int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_dup(const struct ossl_dispatch_st*  opf  )))(const void*,int) 
{
        return (void* (*(*))(const void*,int) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_import_types_ex(const struct ossl_dispatch_st*  opf  )))(void*,int) 
{
        return (const struct ossl_param_st* (*(*))(void*,int) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_export_types_ex(const struct ossl_dispatch_st*  opf  )))(void*,int) 
{
        return (const struct ossl_param_st* (*(*))(void*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_keyexch_newctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keyexch_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keyexch_derive(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keyexch_set_peer(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (int (*(*))(void*,void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_keyexch_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_keyexch_dupctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keyexch_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_keyexch_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keyexch_get_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_keyexch_gettable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_signature_newctx(const struct ossl_dispatch_st*  opf  )))(void*,const char*) 
{
        return (void* (*(*))(void*,const char*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_sign_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_sign(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_sign_message_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_sign_message_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_sign_message_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_message_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_message_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_message_final(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_recover_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_recover(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_sign_init(const struct ossl_dispatch_st*  opf  )))(void*,const char*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const char*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_sign_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_sign_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_sign(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_verify_init(const struct ossl_dispatch_st*  opf  )))(void*,const char*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const char*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_verify_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_verify_final(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_verify(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long ,const unsigned char*,unsigned long ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_signature_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_signature_dupctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_get_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_signature_gettable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_signature_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_get_ctx_md_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_signature_gettable_ctx_md_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_set_ctx_md_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_signature_settable_ctx_md_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline const char** __attribute__((unused))  (*(*OSSL_FUNC_signature_query_key_types(const struct ossl_dispatch_st*  opf  )))() 
{
        return (const char** (*(*))() )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_skeymgmt_free(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_skeymgmt_imp_settable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_skeymgmt_import(const struct ossl_dispatch_st*  opf  )))(void*,int,const struct ossl_param_st ) 
{
        return (void* (*(*))(void*,int,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_skeymgmt_export(const struct ossl_dispatch_st*  opf  )))(void*,int,int (*(*))(const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,int,int (*(*))(const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_skeymgmt_gen_settable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_skeymgmt_generate(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (void* (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const char* __attribute__((unused))  (*(*OSSL_FUNC_skeymgmt_get_key_id(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const char* (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_newctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_encrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_encrypt(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_decrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_decrypt(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned long ,const unsigned char*,unsigned long ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_dupctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_get_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_gettable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_kem_newctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_encapsulate_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_auth_encapsulate_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_encapsulate(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,unsigned char*,unsigned long* ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,unsigned char*,unsigned long* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_decapsulate_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_auth_decapsulate_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_decapsulate(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long* ,const unsigned char*,unsigned long ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_kem_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_kem_dupctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_get_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_param_st ) 
{
        return (int (*(*))(void*,struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_kem_gettable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_kem_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,void*) 
{
        return (const struct ossl_param_st* (*(*))(void*,void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_encoder_newctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_encoder_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_encoder_get_params(const struct ossl_dispatch_st*  opf  )))(struct ossl_param_st ) 
{
        return (int (*(*))(struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_encoder_gettable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_encoder_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_encoder_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_encoder_does_selection(const struct ossl_dispatch_st*  opf  )))(void*,int) 
{
        return (int (*(*))(void*,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_encoder_encode(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_core_bio_st* ,const void*,const struct ossl_param_st ,int,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,struct ossl_core_bio_st* ,const void*,const struct ossl_param_st ,int,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_encoder_import_object(const struct ossl_dispatch_st*  opf  )))(void*,int,const struct ossl_param_st ) 
{
        return (void* (*(*))(void*,int,const struct ossl_param_st ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_encoder_free_object(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_decoder_newctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_decoder_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_decoder_get_params(const struct ossl_dispatch_st*  opf  )))(struct ossl_param_st ) 
{
        return (int (*(*))(struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_decoder_gettable_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_decoder_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_decoder_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_decoder_does_selection(const struct ossl_dispatch_st*  opf  )))(void*,int) 
{
        return (int (*(*))(void*,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_decoder_decode(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_core_bio_st* ,int,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,struct ossl_core_bio_st* ,int,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_decoder_export_object(const struct ossl_dispatch_st*  opf  )))(void*,const void*,unsigned long ,int (*(*))(const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,const void*,unsigned long ,int (*(*))(const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_store_open(const struct ossl_dispatch_st*  opf  )))(void*,const char*) 
{
        return (void* (*(*))(void*,const char*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_store_attach(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_core_bio_st* ) 
{
        return (void* (*(*))(void*,struct ossl_core_bio_st* ) )opf->function;
}
static inline const struct ossl_param_st* __attribute__((unused))  (*(*OSSL_FUNC_store_settable_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (const struct ossl_param_st* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_set_ctx_params(const struct ossl_dispatch_st*  opf  )))(void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_load(const struct ossl_dispatch_st*  opf  )))(void*,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_eof(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_close(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_export_object(const struct ossl_dispatch_st*  opf  )))(void*,const void*,unsigned long ,int (*(*))(const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,const void*,unsigned long ,int (*(*))(const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_delete(const struct ossl_dispatch_st*  opf  )))(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_store_open_ex(const struct ossl_dispatch_st*  opf  )))(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*) 
{
        return (void* (*(*))(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long ,unsigned long* ,const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline struct X509_algor_st*  __attribute__((unused))  ossl_check_X509_ALGOR_type(struct X509_algor_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_ALGOR_sk_type(const struct stack_st_X509_ALGOR*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_ALGOR_sk_type(struct stack_st_X509_ALGOR*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_ALGOR_compfunc_type(int (*cmp)(const struct X509_algor_st** const ,const struct X509_algor_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_ALGOR_copyfunc_type(struct X509_algor_st* (*cpy)(const struct X509_algor_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_ALGOR_freefunc_type(void (*fr)(struct X509_algor_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct asn1_string_table_st*  __attribute__((unused))  ossl_check_ASN1_STRING_TABLE_type(struct asn1_string_table_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_ASN1_STRING_TABLE_sk_type(const struct stack_st_ASN1_STRING_TABLE*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_ASN1_STRING_TABLE_sk_type(struct stack_st_ASN1_STRING_TABLE*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_ASN1_STRING_TABLE_compfunc_type(int (*cmp)(const struct asn1_string_table_st** const ,const struct asn1_string_table_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_ASN1_STRING_TABLE_copyfunc_type(struct asn1_string_table_st* (*cpy)(const struct asn1_string_table_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_ASN1_STRING_TABLE_freefunc_type(void (*fr)(struct asn1_string_table_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct asn1_type_st*  __attribute__((unused))  ossl_check_ASN1_TYPE_type(struct asn1_type_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_ASN1_TYPE_sk_type(const struct stack_st_ASN1_TYPE*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_ASN1_TYPE_sk_type(struct stack_st_ASN1_TYPE*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_ASN1_TYPE_compfunc_type(int (*cmp)(const struct asn1_type_st** const ,const struct asn1_type_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_ASN1_TYPE_copyfunc_type(struct asn1_type_st* (*cpy)(const struct asn1_type_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_ASN1_TYPE_freefunc_type(void (*fr)(struct asn1_type_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct asn1_object_st*  __attribute__((unused))  ossl_check_ASN1_OBJECT_type(struct asn1_object_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_ASN1_OBJECT_sk_type(const struct stack_st_ASN1_OBJECT*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_ASN1_OBJECT_sk_type(struct stack_st_ASN1_OBJECT*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_ASN1_OBJECT_compfunc_type(int (*cmp)(const struct asn1_object_st** const ,const struct asn1_object_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_ASN1_OBJECT_copyfunc_type(struct asn1_object_st* (*cpy)(const struct asn1_object_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_ASN1_OBJECT_freefunc_type(void (*fr)(struct asn1_object_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct asn1_string_st*  __attribute__((unused))  ossl_check_ASN1_INTEGER_type(struct asn1_string_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_ASN1_INTEGER_sk_type(const struct stack_st_ASN1_INTEGER*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_ASN1_INTEGER_sk_type(struct stack_st_ASN1_INTEGER*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_ASN1_INTEGER_compfunc_type(int (*cmp)(const struct asn1_string_st** const ,const struct asn1_string_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_ASN1_INTEGER_copyfunc_type(struct asn1_string_st* (*cpy)(const struct asn1_string_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_ASN1_INTEGER_freefunc_type(void (*fr)(struct asn1_string_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct asn1_string_st*  __attribute__((unused))  ossl_check_ASN1_UTF8STRING_type(struct asn1_string_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_ASN1_UTF8STRING_sk_type(const struct stack_st_ASN1_UTF8STRING*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_ASN1_UTF8STRING_sk_type(struct stack_st_ASN1_UTF8STRING*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_ASN1_UTF8STRING_compfunc_type(int (*cmp)(const struct asn1_string_st** const ,const struct asn1_string_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_ASN1_UTF8STRING_copyfunc_type(struct asn1_string_st* (*cpy)(const struct asn1_string_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_ASN1_UTF8STRING_freefunc_type(void (*fr)(struct asn1_string_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct asn1_string_st*  __attribute__((unused))  ossl_check_ASN1_GENERALSTRING_type(struct asn1_string_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_ASN1_GENERALSTRING_sk_type(const struct stack_st_ASN1_GENERALSTRING*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_ASN1_GENERALSTRING_sk_type(struct stack_st_ASN1_GENERALSTRING*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_ASN1_GENERALSTRING_compfunc_type(int (*cmp)(const struct asn1_string_st** const ,const struct asn1_string_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_ASN1_GENERALSTRING_copyfunc_type(struct asn1_string_st* (*cpy)(const struct asn1_string_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_ASN1_GENERALSTRING_freefunc_type(void (*fr)(struct asn1_string_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct X509_name_st*  __attribute__((unused))  ossl_check_X509_NAME_type(struct X509_name_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_NAME_sk_type(const struct stack_st_X509_NAME*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_NAME_sk_type(struct stack_st_X509_NAME*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_NAME_compfunc_type(int (*cmp)(const struct X509_name_st** const ,const struct X509_name_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_NAME_copyfunc_type(struct X509_name_st* (*cpy)(const struct X509_name_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_NAME_freefunc_type(void (*fr)(struct X509_name_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct x509_st*  __attribute__((unused))  ossl_check_X509_type(struct x509_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_sk_type(const struct stack_st_X509*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_sk_type(struct stack_st_X509*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_compfunc_type(int (*cmp)(const struct x509_st** const ,const struct x509_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_copyfunc_type(struct x509_st* (*cpy)(const struct x509_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_freefunc_type(void (*fr)(struct x509_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct x509_revoked_st*  __attribute__((unused))  ossl_check_X509_REVOKED_type(struct x509_revoked_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_REVOKED_sk_type(const struct stack_st_X509_REVOKED*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_REVOKED_sk_type(struct stack_st_X509_REVOKED*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_REVOKED_compfunc_type(int (*cmp)(const struct x509_revoked_st** const ,const struct x509_revoked_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_REVOKED_copyfunc_type(struct x509_revoked_st* (*cpy)(const struct x509_revoked_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_REVOKED_freefunc_type(void (*fr)(struct x509_revoked_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct X509_crl_st*  __attribute__((unused))  ossl_check_X509_CRL_type(struct X509_crl_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_CRL_sk_type(const struct stack_st_X509_CRL*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_CRL_sk_type(struct stack_st_X509_CRL*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_CRL_compfunc_type(int (*cmp)(const struct X509_crl_st** const ,const struct X509_crl_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_CRL_copyfunc_type(struct X509_crl_st* (*cpy)(const struct X509_crl_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_CRL_freefunc_type(void (*fr)(struct X509_crl_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct X509_name_entry_st*  __attribute__((unused))  ossl_check_X509_NAME_ENTRY_type(struct X509_name_entry_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_NAME_ENTRY_sk_type(const struct stack_st_X509_NAME_ENTRY*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_NAME_ENTRY_sk_type(struct stack_st_X509_NAME_ENTRY*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_NAME_ENTRY_compfunc_type(int (*cmp)(const struct X509_name_entry_st** const ,const struct X509_name_entry_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_NAME_ENTRY_copyfunc_type(struct X509_name_entry_st* (*cpy)(const struct X509_name_entry_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_NAME_ENTRY_freefunc_type(void (*fr)(struct X509_name_entry_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct X509_extension_st*  __attribute__((unused))  ossl_check_X509_EXTENSION_type(struct X509_extension_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_EXTENSION_sk_type(const struct stack_st_X509_EXTENSION*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_EXTENSION_sk_type(struct stack_st_X509_EXTENSION*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_EXTENSION_compfunc_type(int (*cmp)(const struct X509_extension_st** const ,const struct X509_extension_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_EXTENSION_copyfunc_type(struct X509_extension_st* (*cpy)(const struct X509_extension_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_EXTENSION_freefunc_type(void (*fr)(struct X509_extension_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct x509_attributes_st*  __attribute__((unused))  ossl_check_X509_ATTRIBUTE_type(struct x509_attributes_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_ATTRIBUTE_sk_type(const struct stack_st_X509_ATTRIBUTE*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_ATTRIBUTE_sk_type(struct stack_st_X509_ATTRIBUTE*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_ATTRIBUTE_compfunc_type(int (*cmp)(const struct x509_attributes_st** const ,const struct x509_attributes_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_ATTRIBUTE_copyfunc_type(struct x509_attributes_st* (*cpy)(const struct x509_attributes_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_ATTRIBUTE_freefunc_type(void (*fr)(struct x509_attributes_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct X509_info_st*  __attribute__((unused))  ossl_check_X509_INFO_type(struct X509_info_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_INFO_sk_type(const struct stack_st_X509_INFO*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_INFO_sk_type(struct stack_st_X509_INFO*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_INFO_compfunc_type(int (*cmp)(const struct X509_info_st** const ,const struct X509_info_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_INFO_copyfunc_type(struct X509_info_st*  (*cpy)(const struct X509_info_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_INFO_freefunc_type(void (*fr)(struct X509_info_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline unsigned long  int lh_OPENSSL_STRING_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)  )
{
    unsigned long  int (*hfn_conv)(const char** );
    hfn_conv=(unsigned long  int (*)(const char** ))hfn;
        return hfn_conv((const char** )data);
}
static inline int lh_OPENSSL_STRING_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)  )
{
    int (*cfn_conv)(const char** ,const char** );
    cfn_conv=(int (*)(const char** ,const char** ))cfn;
        return cfn_conv((const char** )da,(const char** )db);
}
static inline void lh_OPENSSL_STRING_doall_thunk(void* node, void (*doall)(void*)  )
{
    void (*doall_conv)(char** );
    doall_conv=(void (*)(char** ))doall;
    doall_conv((char** )node);
}
static inline void lh_OPENSSL_STRING_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)  )
{
    void (*doall_conv)(char** ,void*);
    doall_conv=(void (*)(char** ,void*))doall;
    doall_conv((char** )node,arg);
}
static inline char**  __attribute__((unused))  ossl_check_OPENSSL_STRING_lh_plain_type(char**  ptr  )
{
        return ptr;
}
static inline const char**  __attribute__((unused))  ossl_check_const_OPENSSL_STRING_lh_plain_type(const char**  ptr  )
{
        return ptr;
}
static inline const struct lhash_st*  __attribute__((unused))  ossl_check_const_OPENSSL_STRING_lh_type(const struct lhash_st_OPENSSL_STRING*  lh  )
{
        return (const struct lhash_st* )lh;
}
static inline struct lhash_st*  __attribute__((unused))  ossl_check_OPENSSL_STRING_lh_type(struct lhash_st_OPENSSL_STRING*  lh  )
{
        return (struct lhash_st* )lh;
}
static inline int __attribute__((unused))  (*ossl_check_OPENSSL_STRING_lh_compfunc_type(int (*cmp)(const char** ,const char** )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline unsigned long  int __attribute__((unused))  (*ossl_check_OPENSSL_STRING_lh_hashfunc_type(unsigned long  int (*hfn)(const char** )  ))(const void*) 
{
        return (unsigned long  int (*)(const void*) )hfn;
}
static inline void __attribute__((unused))  (*ossl_check_OPENSSL_STRING_lh_doallfunc_type(void (*dfn)(char** )  ))(void*) 
{
        return (void (*)(void*) )dfn;
}
static inline unsigned long  int lh_OPENSSL_CSTRING_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)  )
{
    unsigned long  int (*hfn_conv)(const char** );
    hfn_conv=(unsigned long  int (*)(const char** ))hfn;
        return hfn_conv((const char** )data);
}
static inline int lh_OPENSSL_CSTRING_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)  )
{
    int (*cfn_conv)(const char** ,const char** );
    cfn_conv=(int (*)(const char** ,const char** ))cfn;
        return cfn_conv((const char** )da,(const char** )db);
}
static inline void lh_OPENSSL_CSTRING_doall_thunk(void* node, void (*doall)(void*)  )
{
    void (*doall_conv)(const char** );
    doall_conv=(void (*)(const char** ))doall;
    doall_conv((const char** )node);
}
static inline void lh_OPENSSL_CSTRING_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)  )
{
    void (*doall_conv)(const char** ,void*);
    doall_conv=(void (*)(const char** ,void*))doall;
    doall_conv((const char** )node,arg);
}
static inline const char**  __attribute__((unused))  ossl_check_OPENSSL_CSTRING_lh_plain_type(const char**  ptr  )
{
        return ptr;
}
static inline const char**  __attribute__((unused))  ossl_check_const_OPENSSL_CSTRING_lh_plain_type(const char**  ptr  )
{
        return ptr;
}
static inline const struct lhash_st*  __attribute__((unused))  ossl_check_const_OPENSSL_CSTRING_lh_type(const struct lhash_st_OPENSSL_CSTRING*  lh  )
{
        return (const struct lhash_st* )lh;
}
static inline struct lhash_st*  __attribute__((unused))  ossl_check_OPENSSL_CSTRING_lh_type(struct lhash_st_OPENSSL_CSTRING*  lh  )
{
        return (struct lhash_st* )lh;
}
static inline int __attribute__((unused))  (*ossl_check_OPENSSL_CSTRING_lh_compfunc_type(int (*cmp)(const char** ,const char** )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline unsigned long  int __attribute__((unused))  (*ossl_check_OPENSSL_CSTRING_lh_hashfunc_type(unsigned long  int (*hfn)(const char** )  ))(const void*) 
{
        return (unsigned long  int (*)(const void*) )hfn;
}
static inline void __attribute__((unused))  (*ossl_check_OPENSSL_CSTRING_lh_doallfunc_type(void (*dfn)(const char** )  ))(void*) 
{
        return (void (*)(void*) )dfn;
}
static inline struct x509_lookup_st*  __attribute__((unused))  ossl_check_X509_LOOKUP_type(struct x509_lookup_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_LOOKUP_sk_type(const struct stack_st_X509_LOOKUP*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_LOOKUP_sk_type(struct stack_st_X509_LOOKUP*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_LOOKUP_compfunc_type(int (*cmp)(const struct x509_lookup_st** const ,const struct x509_lookup_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_LOOKUP_copyfunc_type(struct x509_lookup_st* (*cpy)(const struct x509_lookup_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_LOOKUP_freefunc_type(void (*fr)(struct x509_lookup_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct x509_object_st*  __attribute__((unused))  ossl_check_X509_OBJECT_type(struct x509_object_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_OBJECT_sk_type(const struct stack_st_X509_OBJECT*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_OBJECT_sk_type(struct stack_st_X509_OBJECT*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_OBJECT_compfunc_type(int (*cmp)(const struct x509_object_st** const ,const struct x509_object_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_OBJECT_copyfunc_type(struct x509_object_st* (*cpy)(const struct x509_object_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_OBJECT_freefunc_type(void (*fr)(struct x509_object_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct X509_VERIFY_PARAM_st*  __attribute__((unused))  ossl_check_X509_VERIFY_PARAM_type(struct X509_VERIFY_PARAM_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_VERIFY_PARAM_sk_type(const struct stack_st_X509_VERIFY_PARAM*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_VERIFY_PARAM_sk_type(struct stack_st_X509_VERIFY_PARAM*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_VERIFY_PARAM_compfunc_type(int (*cmp)(const struct X509_VERIFY_PARAM_st** const ,const struct X509_VERIFY_PARAM_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_VERIFY_PARAM_copyfunc_type(struct X509_VERIFY_PARAM_st* (*cpy)(const struct X509_VERIFY_PARAM_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_VERIFY_PARAM_freefunc_type(void (*fr)(struct X509_VERIFY_PARAM_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct x509_trust_st*  __attribute__((unused))  ossl_check_X509_TRUST_type(struct x509_trust_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_X509_TRUST_sk_type(const struct stack_st_X509_TRUST*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_X509_TRUST_sk_type(struct stack_st_X509_TRUST*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_X509_TRUST_compfunc_type(int (*cmp)(const struct x509_trust_st** const ,const struct x509_trust_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_X509_TRUST_copyfunc_type(struct x509_trust_st*  (*cpy)(const struct x509_trust_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_X509_TRUST_freefunc_type(void (*fr)(struct x509_trust_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct pkcs7_signer_info_st*  __attribute__((unused))  ossl_check_PKCS7_SIGNER_INFO_type(struct pkcs7_signer_info_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_PKCS7_SIGNER_INFO_sk_type(const struct stack_st_PKCS7_SIGNER_INFO*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_PKCS7_SIGNER_INFO_sk_type(struct stack_st_PKCS7_SIGNER_INFO*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_PKCS7_SIGNER_INFO_compfunc_type(int (*cmp)(const struct pkcs7_signer_info_st** const ,const struct pkcs7_signer_info_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_PKCS7_SIGNER_INFO_copyfunc_type(struct pkcs7_signer_info_st*  (*cpy)(const struct pkcs7_signer_info_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_PKCS7_SIGNER_INFO_freefunc_type(void (*fr)(struct pkcs7_signer_info_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct pkcs7_recip_info_st*  __attribute__((unused))  ossl_check_PKCS7_RECIP_INFO_type(struct pkcs7_recip_info_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_PKCS7_RECIP_INFO_sk_type(const struct stack_st_PKCS7_RECIP_INFO*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_PKCS7_RECIP_INFO_sk_type(struct stack_st_PKCS7_RECIP_INFO*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_PKCS7_RECIP_INFO_compfunc_type(int (*cmp)(const struct pkcs7_recip_info_st** const ,const struct pkcs7_recip_info_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_PKCS7_RECIP_INFO_copyfunc_type(struct pkcs7_recip_info_st*  (*cpy)(const struct pkcs7_recip_info_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_PKCS7_RECIP_INFO_freefunc_type(void (*fr)(struct pkcs7_recip_info_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct pkcs7_st*  __attribute__((unused))  ossl_check_PKCS7_type(struct pkcs7_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_PKCS7_sk_type(const struct stack_st_PKCS7*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_PKCS7_sk_type(struct stack_st_PKCS7*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_PKCS7_compfunc_type(int (*cmp)(const struct pkcs7_st** const ,const struct pkcs7_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_PKCS7_copyfunc_type(struct pkcs7_st*  (*cpy)(const struct pkcs7_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_PKCS7_freefunc_type(void (*fr)(struct pkcs7_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct anonymous_typeX114*  __attribute__((unused))  ossl_check_CONF_VALUE_type(struct anonymous_typeX114*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_CONF_VALUE_sk_type(const struct stack_st_CONF_VALUE*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_CONF_VALUE_sk_type(struct stack_st_CONF_VALUE*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_CONF_VALUE_compfunc_type(int (*cmp)(const struct anonymous_typeX114** const ,const struct anonymous_typeX114** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_CONF_VALUE_copyfunc_type(struct anonymous_typeX114* (*cpy)(const struct anonymous_typeX114* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_CONF_VALUE_freefunc_type(void (*fr)(struct anonymous_typeX114* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline unsigned long  int lh_CONF_VALUE_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)  )
{
    unsigned long  int (*hfn_conv)(const struct anonymous_typeX114* );
    hfn_conv=(unsigned long  int (*)(const struct anonymous_typeX114* ))hfn;
        return hfn_conv((const struct anonymous_typeX114* )data);
}
static inline int lh_CONF_VALUE_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)  )
{
    int (*cfn_conv)(const struct anonymous_typeX114* ,const struct anonymous_typeX114* );
    cfn_conv=(int (*)(const struct anonymous_typeX114* ,const struct anonymous_typeX114* ))cfn;
        return cfn_conv((const struct anonymous_typeX114* )da,(const struct anonymous_typeX114* )db);
}
static inline void lh_CONF_VALUE_doall_thunk(void* node, void (*doall)(void*)  )
{
    void (*doall_conv)(struct anonymous_typeX114* );
    doall_conv=(void (*)(struct anonymous_typeX114* ))doall;
    doall_conv((struct anonymous_typeX114* )node);
}
static inline void lh_CONF_VALUE_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)  )
{
    void (*doall_conv)(struct anonymous_typeX114* ,void*);
    doall_conv=(void (*)(struct anonymous_typeX114* ,void*))doall;
    doall_conv((struct anonymous_typeX114* )node,arg);
}
static inline struct anonymous_typeX114*  __attribute__((unused))  ossl_check_CONF_VALUE_lh_plain_type(struct anonymous_typeX114*  ptr  )
{
        return ptr;
}
static inline const struct anonymous_typeX114*  __attribute__((unused))  ossl_check_const_CONF_VALUE_lh_plain_type(const struct anonymous_typeX114*  ptr  )
{
        return ptr;
}
static inline const struct lhash_st*  __attribute__((unused))  ossl_check_const_CONF_VALUE_lh_type(const struct lhash_st_CONF_VALUE*  lh  )
{
        return (const struct lhash_st* )lh;
}
static inline struct lhash_st*  __attribute__((unused))  ossl_check_CONF_VALUE_lh_type(struct lhash_st_CONF_VALUE*  lh  )
{
        return (struct lhash_st* )lh;
}
static inline int __attribute__((unused))  (*ossl_check_CONF_VALUE_lh_compfunc_type(int (*cmp)(const struct anonymous_typeX114* ,const struct anonymous_typeX114* )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline unsigned long  int __attribute__((unused))  (*ossl_check_CONF_VALUE_lh_hashfunc_type(unsigned long  int (*hfn)(const struct anonymous_typeX114* )  ))(const void*) 
{
        return (unsigned long  int (*)(const void*) )hfn;
}
static inline void __attribute__((unused))  (*ossl_check_CONF_VALUE_lh_doallfunc_type(void (*dfn)(struct anonymous_typeX114* )  ))(void*) 
{
        return (void (*)(void*) )dfn;
}
static inline struct sct_st*  __attribute__((unused))  ossl_check_SCT_type(struct sct_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_SCT_sk_type(const struct stack_st_SCT*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_SCT_sk_type(struct stack_st_SCT*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_SCT_compfunc_type(int (*cmp)(const struct sct_st** const ,const struct sct_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_SCT_copyfunc_type(struct sct_st* (*cpy)(const struct sct_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_SCT_freefunc_type(void (*fr)(struct sct_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct ctlog_st*  __attribute__((unused))  ossl_check_CTLOG_type(struct ctlog_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_CTLOG_sk_type(const struct stack_st_CTLOG*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_CTLOG_sk_type(struct stack_st_CTLOG*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_CTLOG_compfunc_type(int (*cmp)(const struct ctlog_st** const ,const struct ctlog_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_CTLOG_copyfunc_type(struct ctlog_st* (*cpy)(const struct ctlog_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_CTLOG_freefunc_type(void (*fr)(struct ctlog_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct srtp_protection_profile_st*  __attribute__((unused))  ossl_check_SRTP_PROTECTION_PROFILE_type(struct srtp_protection_profile_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_SRTP_PROTECTION_PROFILE_sk_type(const struct stack_st_SRTP_PROTECTION_PROFILE*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_SRTP_PROTECTION_PROFILE_sk_type(struct stack_st_SRTP_PROTECTION_PROFILE*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_SRTP_PROTECTION_PROFILE_compfunc_type(int (*cmp)(const struct srtp_protection_profile_st** const ,const struct srtp_protection_profile_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_SRTP_PROTECTION_PROFILE_copyfunc_type(struct srtp_protection_profile_st*  (*cpy)(const struct srtp_protection_profile_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_SRTP_PROTECTION_PROFILE_freefunc_type(void (*fr)(struct srtp_protection_profile_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline const struct ssl_cipher_st*  __attribute__((unused))  ossl_check_SSL_CIPHER_type(const struct ssl_cipher_st*  ptr  )
{
        return ptr;
}
static inline const struct stack_st*  __attribute__((unused))  ossl_check_const_SSL_CIPHER_sk_type(const struct stack_st_SSL_CIPHER*  sk  )
{
        return (const struct stack_st* )sk;
}
static inline struct stack_st*  __attribute__((unused))  ossl_check_SSL_CIPHER_sk_type(struct stack_st_SSL_CIPHER*  sk  )
{
        return (struct stack_st* )sk;
}
static inline int __attribute__((unused))  (*ossl_check_SSL_CIPHER_compfunc_type(int (*cmp)(const struct ssl_cipher_st** const ,const struct ssl_cipher_st** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_SSL_CIPHER_copyfunc_type(struct ssl_cipher_st* (*cpy)(const struct ssl_cipher_st* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_SSL_CIPHER_freefunc_type(void (*fr)(struct ssl_cipher_st* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline struct bio_poll_descriptor_st  __attribute__((unused))  SSL_as_poll_descriptor(struct ssl_st*  s  )
{
    struct bio_poll_descriptor_st  d  ;
    memset(&d, 0, sizeof(d));
    d.type=2;
    d.value.ssl=s;
        return d;
}
static inline int  __attribute__((unused))  ERR_GET_LIB(unsigned long  int errcode)
{
    if((((errcode)&((unsigned int)2147483647+1))!=0)) {
                return 2;
    }
        return (errcode>>23L)&0xFF;
}
static inline int  __attribute__((unused))  ERR_GET_RFLAGS(unsigned long  int errcode)
{
    if((((errcode)&((unsigned int)2147483647+1))!=0)) {
                return 0;
    }
        return errcode&(0x1F<<18L);
}
static inline int  __attribute__((unused))  ERR_GET_REASON(unsigned long  int errcode)
{
    if((((errcode)&((unsigned int)2147483647+1))!=0)) {
                return errcode&((unsigned int)2147483647);
    }
        return errcode&0x7FFFFF;
}
static inline int  __attribute__((unused))  ERR_FATAL_ERROR(unsigned long  int errcode)
{
        return (ERR_GET_RFLAGS(errcode)&(0x1<<18L))!=0;
}
static inline int  __attribute__((unused))  ERR_COMMON_ERROR(unsigned long  int errcode)
{
        return (ERR_GET_RFLAGS(errcode)&(0x2<<18L))!=0;
}
static inline unsigned long  int lh_ERR_STRING_DATA_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)  )
{
    unsigned long  int (*hfn_conv)(const struct ERR_string_data_st* );
    hfn_conv=(unsigned long  int (*)(const struct ERR_string_data_st* ))hfn;
        return hfn_conv((const struct ERR_string_data_st* )data);
}
static inline int lh_ERR_STRING_DATA_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)  )
{
    int (*cfn_conv)(const struct ERR_string_data_st* ,const struct ERR_string_data_st* );
    cfn_conv=(int (*)(const struct ERR_string_data_st* ,const struct ERR_string_data_st* ))cfn;
        return cfn_conv((const struct ERR_string_data_st* )da,(const struct ERR_string_data_st* )db);
}
static inline void lh_ERR_STRING_DATA_doall_thunk(void* node, void (*doall)(void*)  )
{
    void (*doall_conv)(struct ERR_string_data_st* );
    doall_conv=(void (*)(struct ERR_string_data_st* ))doall;
    doall_conv((struct ERR_string_data_st* )node);
}
static inline void lh_ERR_STRING_DATA_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)  )
{
    void (*doall_conv)(struct ERR_string_data_st* ,void*);
    doall_conv=(void (*)(struct ERR_string_data_st* ,void*))doall;
    doall_conv((struct ERR_string_data_st* )node,arg);
}
static inline struct ERR_string_data_st*  __attribute__((unused))  ossl_check_ERR_STRING_DATA_lh_plain_type(struct ERR_string_data_st*  ptr  )
{
        return ptr;
}
static inline const struct ERR_string_data_st*  __attribute__((unused))  ossl_check_const_ERR_STRING_DATA_lh_plain_type(const struct ERR_string_data_st*  ptr  )
{
        return ptr;
}
static inline const struct lhash_st*  __attribute__((unused))  ossl_check_const_ERR_STRING_DATA_lh_type(const struct lhash_st_ERR_STRING_DATA*  lh  )
{
        return (const struct lhash_st* )lh;
}
static inline struct lhash_st*  __attribute__((unused))  ossl_check_ERR_STRING_DATA_lh_type(struct lhash_st_ERR_STRING_DATA*  lh  )
{
        return (struct lhash_st* )lh;
}
static inline int __attribute__((unused))  (*ossl_check_ERR_STRING_DATA_lh_compfunc_type(int (*cmp)(const struct ERR_string_data_st* ,const struct ERR_string_data_st* )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline unsigned long  int __attribute__((unused))  (*ossl_check_ERR_STRING_DATA_lh_hashfunc_type(unsigned long  int (*hfn)(const struct ERR_string_data_st* )  ))(const void*) 
{
        return (unsigned long  int (*)(const void*) )hfn;
}
static inline void __attribute__((unused))  (*ossl_check_ERR_STRING_DATA_lh_doallfunc_type(void (*dfn)(struct ERR_string_data_st* )  ))(void*) 
{
        return (void (*)(void*) )dfn;
}
static inline int mtd_type_is_nand_user(const struct mtd_info_user*  mtd  )
{
        return mtd->type==4||mtd->type==8;
}

// body function
int test_headers_subdir()
{
        return 0;
}


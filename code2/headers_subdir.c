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

typedef long  ptrdiff_t  ;

typedef unsigned long  int  rsize_t  ;

typedef unsigned long  int  size_t  ;

typedef int  wchar_t  ;

typedef unsigned int  wint_t  ;

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

typedef unsigned long long int  ino_t  ;

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

typedef unsigned char  sa_family_t  ;

typedef unsigned int  socklen_t  ;

typedef unsigned int  sae_associd_t  ;

typedef unsigned int  sae_connid_t  ;

typedef struct sa_endpoints  sa_endpoints_t  ;

typedef struct in6_addr  in6_addr_t  ;

typedef int sig_atomic_t;

typedef struct __darwin_mcontext64*  mcontext_t  ;

typedef struct __darwin_sigaltstack  stack_t  ;

typedef struct __darwin_ucontext  ucontext_t  ;

typedef unsigned int  sigset_t  ;

typedef struct __siginfo  siginfo_t  ;

typedef void (*sig_t)(int);

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

typedef struct ether_header  ether_header_t  ;

typedef struct ether_addr  ether_addr_t  ;

typedef unsigned short int  n_short  ;

typedef unsigned int  n_long  ;

typedef unsigned int  n_time  ;

typedef struct anonymous_typeX12 CTL_MSG;

typedef struct anonymous_typeX13 CTL_RESPONSE;

typedef long long int  fpos_t  ;

typedef struct __sFILE  FILE  ;

typedef int (*Function)(const char*,int);

typedef void (*VFunction)();

typedef void (*VCPFunction)(char*);

typedef char* (*CPFunction)(const char*,int);

typedef char** (*CPPFunction)(const char*,int,int);

typedef char* (*rl_compentry_func_t)(const char*,int);

typedef int (*rl_command_func_t)(int,int);

typedef struct anonymous_typeX16 HISTORY_STATE;

typedef void* histdata_t;

typedef struct _hist_entry  HIST_ENTRY  ;

typedef struct _keymap_entry  KEYMAP_ENTRY  ;

typedef struct _keymap_entry*  Keymap  ;

typedef enum anonymous_typeY16 clockid_t;

typedef struct anonymous_typeX23 imaxdiv_t;

typedef long  int  ossl_intmax_t  ;

typedef unsigned long  int  ossl_uintmax_t  ;

typedef enum anonymous_typeY23 idtype_t;

typedef unsigned long long int  rlim_t  ;

typedef void* rusage_info_t;

typedef struct rusage_info_v6  rusage_info_current  ;

typedef int  ct_rune_t  ;

typedef int  rune_t  ;

typedef struct anonymous_typeX26 div_t;

typedef struct anonymous_typeX27 ldiv_t;

typedef struct anonymous_typeX28 lldiv_t;

typedef unsigned long  long malloc_type_id_t;

typedef struct _malloc_zone_t malloc_zone_t;

typedef struct stack_st OPENSSL_STACK;

typedef int (*OPENSSL_sk_compfunc)(const void*,const void*);

typedef void (*OPENSSL_sk_freefunc)(void*);

typedef void (*OPENSSL_sk_freefunc_thunk)(void (*)(void*) ,void*);

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

typedef int (*OSSL_PASSPHRASE_CALLBACK)(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*);

typedef struct anonymous_typeX29 CRYPTO_dynlock;

typedef void CRYPTO_RWLOCK;

typedef int (*sk_void_compfunc)(const void** const,const void** const);

typedef void (*sk_void_freefunc)(void*);

typedef void* (*sk_void_copyfunc)(const void*);

typedef void (*CRYPTO_EX_new)(void*,void*,struct crypto_ex_data_st* ,int,long,void*);

typedef void (*CRYPTO_EX_free)(void*,void*,struct crypto_ex_data_st* ,int,long,void*);

typedef int (*CRYPTO_EX_dup)(struct crypto_ex_data_st* ,const struct crypto_ex_data_st* ,void**,int,long,void*);

typedef struct crypto_threadid_st  CRYPTO_THREADID  ;

typedef void* (*CRYPTO_malloc_fn)(unsigned long  int ,const char*,int);

typedef void* (*CRYPTO_realloc_fn)(void*,unsigned long  int ,const char*,int);

typedef void (*CRYPTO_free_fn)(void*,const char*,int);

typedef unsigned int qos_class_t;

typedef struct pthread_override_s* pthread_override_t;

typedef unsigned int  mach_port_t  ;

typedef int (*pthread_jit_write_callback_t)(void*);

typedef struct _opaque_pthread_once_t  CRYPTO_ONCE  ;

typedef unsigned long  int  CRYPTO_THREAD_LOCAL  ;

typedef struct _opaque_pthread_t*  CRYPTO_THREAD_ID  ;

typedef struct ssl_comp_st SSL_COMP;

typedef int (*sk_SSL_COMP_compfunc)(const struct ssl_comp_st** const ,const struct ssl_comp_st** const );

typedef void (*sk_SSL_COMP_freefunc)(struct ssl_comp_st* );

typedef struct ssl_comp_st* (*sk_SSL_COMP_copyfunc)(const struct ssl_comp_st* );

typedef __builtin_va_list  va_list  ;

typedef __builtin_va_list  __gnuc_va_list  ;

typedef union bio_addr_st BIO_ADDR;

typedef struct bio_addrinfo_st BIO_ADDRINFO;

typedef long (*BIO_callback_fn)(struct bio_st* ,int,const char*,int,long,long);

typedef long (*BIO_callback_fn_ex)(struct bio_st* ,int,const char*,unsigned long  int ,int,long,int,unsigned long  int* );

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

typedef void* (*OSSL_FUNC_CRYPTO_malloc_fn)(unsigned long  int ,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_zalloc_fn)(unsigned long  int ,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_free_fn)(void*,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_clear_free_fn)(void*,unsigned long  int ,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_realloc_fn)(void*,unsigned long  int ,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_clear_realloc_fn)(void*,unsigned long  int ,unsigned long  int ,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_secure_malloc_fn)(unsigned long  int ,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_secure_zalloc_fn)(unsigned long  int ,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_secure_free_fn)(void*,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_secure_clear_free_fn)(void*,unsigned long  int ,const char*,int);

typedef int (*OSSL_FUNC_CRYPTO_secure_allocated_fn)(const void*);

typedef void (*OSSL_FUNC_OPENSSL_cleanse_fn)(void*,unsigned long  int );

typedef struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_file_fn)(const char*,const char*);

typedef struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_membuf_fn)(const void*,int);

typedef int (*OSSL_FUNC_BIO_read_ex_fn)(struct ossl_core_bio_st* ,void*,unsigned long  int ,unsigned long  int* );

typedef int (*OSSL_FUNC_BIO_write_ex_fn)(struct ossl_core_bio_st* ,const void*,unsigned long  int ,unsigned long  int* );

typedef int (*OSSL_FUNC_BIO_gets_fn)(struct ossl_core_bio_st* ,char*,int);

typedef int (*OSSL_FUNC_BIO_puts_fn)(struct ossl_core_bio_st* ,const char*);

typedef int (*OSSL_FUNC_BIO_up_ref_fn)(struct ossl_core_bio_st* );

typedef int (*OSSL_FUNC_BIO_free_fn)(struct ossl_core_bio_st* );

typedef int (*OSSL_FUNC_BIO_vprintf_fn)(struct ossl_core_bio_st* ,const char*,__builtin_va_list );

typedef int (*OSSL_FUNC_BIO_vsnprintf_fn)(char*,unsigned long  int ,const char*,__builtin_va_list );

typedef int (*OSSL_FUNC_BIO_ctrl_fn)(struct ossl_core_bio_st* ,int,long,void*);

typedef void (*OSSL_FUNC_indicator_cb_fn)(struct openssl_core_ctx_st* ,int (*(*(*)))(const char*,const char*,const struct ossl_param_st ) );

typedef void (*OSSL_FUNC_self_test_cb_fn)(struct openssl_core_ctx_st* ,int (*(*(*)))(const struct ossl_param_st ,void*) ,void**);

typedef unsigned long  int  (*OSSL_FUNC_get_entropy_fn)(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long  int ,unsigned long  int );

typedef unsigned long  int  (*OSSL_FUNC_get_user_entropy_fn)(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long  int ,unsigned long  int );

typedef void (*OSSL_FUNC_cleanup_entropy_fn)(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int );

typedef void (*OSSL_FUNC_cleanup_user_entropy_fn)(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int );

typedef unsigned long  int  (*OSSL_FUNC_get_nonce_fn)(const struct ossl_core_handle_st* ,unsigned char**,unsigned long  int ,unsigned long  int ,const void*,unsigned long  int );

typedef unsigned long  int  (*OSSL_FUNC_get_user_nonce_fn)(const struct ossl_core_handle_st* ,unsigned char**,unsigned long  int ,unsigned long  int ,const void*,unsigned long  int );

typedef void (*OSSL_FUNC_cleanup_nonce_fn)(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int );

typedef void (*OSSL_FUNC_cleanup_user_nonce_fn)(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int );

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

typedef int (*OSSL_FUNC_provider_random_bytes_fn)(void*,int,void*,unsigned long  int ,unsigned int);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_crypto_send_fn)(struct ssl_st* ,const unsigned char*,unsigned long  int ,unsigned long  int* ,void*);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_crypto_recv_rcd_fn)(struct ssl_st* ,const unsigned char**,unsigned long  int* ,void*);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_crypto_release_rcd_fn)(struct ssl_st* ,unsigned long  int ,void*);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_yield_secret_fn)(struct ssl_st* ,unsigned int ,int,const unsigned char*,unsigned long  int ,void*);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_got_transport_params_fn)(struct ssl_st* ,const unsigned char*,unsigned long  int ,void*);

typedef int (*OSSL_FUNC_SSL_QUIC_TLS_alert_fn)(struct ssl_st* ,unsigned char,void*);

typedef void* (*OSSL_FUNC_digest_newctx_fn)(void*);

typedef int (*OSSL_FUNC_digest_init_fn)(void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_digest_update_fn)(void*,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_digest_final_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int );

typedef int (*OSSL_FUNC_digest_squeeze_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int );

typedef int (*OSSL_FUNC_digest_digest_fn)(void*,const unsigned char*,unsigned long  int ,unsigned char*,unsigned long  int* ,unsigned long  int );

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

typedef int (*OSSL_FUNC_cipher_encrypt_init_fn)(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_decrypt_init_fn)(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_update_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_cipher_final_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int );

typedef int (*OSSL_FUNC_cipher_cipher_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_cipher_pipeline_encrypt_init_fn)(void*,const unsigned char*,unsigned long  int ,unsigned long  int ,const unsigned char**,unsigned long  int ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_pipeline_decrypt_init_fn)(void*,const unsigned char*,unsigned long  int ,unsigned long  int ,const unsigned char**,unsigned long  int ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_pipeline_update_fn)(void*,unsigned long  int ,unsigned char**,unsigned long  int* ,const unsigned long  int* ,const unsigned char**,const unsigned long  int* );

typedef int (*OSSL_FUNC_cipher_pipeline_final_fn)(void*,unsigned long  int ,unsigned char**,unsigned long  int* ,const unsigned long  int* );

typedef void (*OSSL_FUNC_cipher_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_cipher_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_cipher_get_params_fn)(struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_settable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_cipher_encrypt_skey_init_fn)(void*,void*,const unsigned char*,unsigned long  int ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_cipher_decrypt_skey_init_fn)(void*,void*,const unsigned char*,unsigned long  int ,const struct ossl_param_st );

typedef void* (*OSSL_FUNC_mac_newctx_fn)(void*);

typedef void* (*OSSL_FUNC_mac_dupctx_fn)(void*);

typedef void (*OSSL_FUNC_mac_freectx_fn)(void*);

typedef int (*OSSL_FUNC_mac_init_fn)(void*,const unsigned char*,unsigned long  int ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_mac_update_fn)(void*,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_mac_final_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int );

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_mac_get_params_fn)(struct ossl_param_st );

typedef int (*OSSL_FUNC_mac_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef int (*OSSL_FUNC_mac_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_mac_init_skey_fn)(void*,void*,const struct ossl_param_st );

typedef void (*OSSL_FUNC_skeymgmt_free_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_skeymgmt_imp_settable_params_fn)(void*);

typedef void* (*OSSL_FUNC_skeymgmt_import_fn)(void*,int,const struct ossl_param_st );

typedef int (*OSSL_FUNC_skeymgmt_export_fn)(void*,int,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_skeymgmt_gen_settable_params_fn)(void*);

typedef void* (*OSSL_FUNC_skeymgmt_generate_fn)(void*,const struct ossl_param_st );

typedef const char* (*OSSL_FUNC_skeymgmt_get_key_id_fn)(void*);

typedef void* (*OSSL_FUNC_kdf_newctx_fn)(void*);

typedef void* (*OSSL_FUNC_kdf_dupctx_fn)(void*);

typedef void (*OSSL_FUNC_kdf_freectx_fn)(void*);

typedef void (*OSSL_FUNC_kdf_reset_fn)(void*);

typedef int (*OSSL_FUNC_kdf_derive_fn)(void*,unsigned char*,unsigned long  int ,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_kdf_get_params_fn)(struct ossl_param_st );

typedef int (*OSSL_FUNC_kdf_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef int (*OSSL_FUNC_kdf_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_kdf_set_skey_fn)(void*,void*,const char*);

typedef void* (*OSSL_FUNC_kdf_derive_skey_fn)(void*,const char*,void*,void* (*(*))(void*,int,const struct ossl_param_st ) ,unsigned long  int ,const struct ossl_param_st );

typedef void* (*OSSL_FUNC_rand_newctx_fn)(void*,void*,const struct ossl_dispatch_st* );

typedef void (*OSSL_FUNC_rand_freectx_fn)(void*);

typedef int (*OSSL_FUNC_rand_instantiate_fn)(void*,unsigned int,int,const unsigned char*,unsigned long  int ,const struct ossl_param_st );

typedef int (*OSSL_FUNC_rand_uninstantiate_fn)(void*);

typedef int (*OSSL_FUNC_rand_generate_fn)(void*,unsigned char*,unsigned long  int ,unsigned int,int,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_rand_reseed_fn)(void*,int,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int );

typedef unsigned long  int  (*OSSL_FUNC_rand_nonce_fn)(void*,unsigned char*,unsigned int,unsigned long  int ,unsigned long  int );

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

typedef unsigned long  int  (*OSSL_FUNC_rand_get_seed_fn)(void*,unsigned char**,int,unsigned long  int ,unsigned long  int ,int,const unsigned char*,unsigned long  int );

typedef void (*OSSL_FUNC_rand_clear_seed_fn)(void*,unsigned char*,unsigned long  int );

typedef void* (*OSSL_FUNC_keymgmt_new_fn)(void*);

typedef void* (*OSSL_FUNC_keymgmt_gen_init_fn)(void*,int,const struct ossl_param_st );

typedef int (*OSSL_FUNC_keymgmt_gen_set_template_fn)(void*,void*);

typedef int (*OSSL_FUNC_keymgmt_gen_set_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gen_settable_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_keymgmt_gen_get_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gen_gettable_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_keymgmt_gen_fn)(void*,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef void (*OSSL_FUNC_keymgmt_gen_cleanup_fn)(void*);

typedef void* (*OSSL_FUNC_keymgmt_load_fn)(const void*,unsigned long  int );

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

typedef int (*OSSL_FUNC_keyexch_derive_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int );

typedef int (*OSSL_FUNC_keyexch_set_peer_fn)(void*,void*);

typedef void (*OSSL_FUNC_keyexch_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_keyexch_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_keyexch_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keyexch_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_keyexch_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_keyexch_gettable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_keyexch_derive_skey_fn)(void*,const char*,void*,void* (*(*))(void*,int,const struct ossl_param_st ) ,unsigned long  int ,const struct ossl_param_st );

typedef void* (*OSSL_FUNC_signature_newctx_fn)(void*,const char*);

typedef int (*OSSL_FUNC_signature_sign_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_sign_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_signature_sign_message_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_sign_message_update_fn)(void*,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_signature_sign_message_final_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int );

typedef int (*OSSL_FUNC_signature_verify_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_verify_fn)(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_signature_verify_message_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_verify_message_update_fn)(void*,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_signature_verify_message_final_fn)(void*);

typedef int (*OSSL_FUNC_signature_verify_recover_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_verify_recover_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_signature_digest_sign_init_fn)(void*,const char*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_digest_sign_update_fn)(void*,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_signature_digest_sign_final_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int );

typedef int (*OSSL_FUNC_signature_digest_sign_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_signature_digest_verify_init_fn)(void*,const char*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_signature_digest_verify_update_fn)(void*,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_signature_digest_verify_final_fn)(void*,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_signature_digest_verify_fn)(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int );

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

typedef void* (*OSSL_FUNC_asym_cipher_newctx_fn)(void*);

typedef int (*OSSL_FUNC_asym_cipher_encrypt_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_asym_cipher_encrypt_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int );

typedef int (*OSSL_FUNC_asym_cipher_decrypt_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_asym_cipher_decrypt_fn)(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int );

typedef void (*OSSL_FUNC_asym_cipher_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_asym_cipher_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_asym_cipher_get_ctx_params_fn)(void*,struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_asym_cipher_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_settable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_kem_newctx_fn)(void*);

typedef int (*OSSL_FUNC_kem_encapsulate_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_kem_auth_encapsulate_init_fn)(void*,void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_kem_encapsulate_fn)(void*,unsigned char*,unsigned long  int* ,unsigned char*,unsigned long  int* );

typedef int (*OSSL_FUNC_kem_decapsulate_init_fn)(void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_kem_auth_decapsulate_init_fn)(void*,void*,void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_kem_decapsulate_fn)(void*,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int );

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

typedef int (*OSSL_FUNC_encoder_encode_fn)(void*,struct ossl_core_bio_st* ,const void*,const struct ossl_param_st ,int,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*);

typedef void* (*OSSL_FUNC_encoder_import_object_fn)(void*,int,const struct ossl_param_st );

typedef void (*OSSL_FUNC_encoder_free_object_fn)(void*);

typedef void* (*OSSL_FUNC_decoder_newctx_fn)(void*);

typedef void (*OSSL_FUNC_decoder_freectx_fn)(void*);

typedef int (*OSSL_FUNC_decoder_get_params_fn)(struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_decoder_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_decoder_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef const struct ossl_param_st* (*OSSL_FUNC_decoder_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_decoder_does_selection_fn)(void*,int);

typedef int (*OSSL_FUNC_decoder_decode_fn)(void*,struct ossl_core_bio_st* ,int,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*);

typedef int (*OSSL_FUNC_decoder_export_object_fn)(void*,const void*,unsigned long  int ,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef void* (*OSSL_FUNC_store_open_fn)(void*,const char*);

typedef void* (*OSSL_FUNC_store_attach_fn)(void*,struct ossl_core_bio_st* );

typedef const struct ossl_param_st* (*OSSL_FUNC_store_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_store_set_ctx_params_fn)(void*,const struct ossl_param_st );

typedef int (*OSSL_FUNC_store_load_fn)(void*,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*);

typedef int (*OSSL_FUNC_store_eof_fn)(void*);

typedef int (*OSSL_FUNC_store_close_fn)(void*);

typedef int (*OSSL_FUNC_store_export_object_fn)(void*,const void*,unsigned long  int ,int (*(*))(const struct ossl_param_st ,void*) ,void*);

typedef int (*OSSL_FUNC_store_delete_fn)(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*);

typedef void* (*OSSL_FUNC_store_open_ex_fn)(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*);

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

typedef struct anonymous_typeX34 EVP_CTRL_TLS1_1_MULTIBLOCK_PARAM;

typedef struct evp_cipher_info_st  EVP_CIPHER_INFO  ;

typedef int (*EVP_PBE_KEYGEN)(struct evp_cipher_ctx_st* ,const char*,int,struct asn1_type_st* ,const struct evp_cipher_st* ,const struct evp_md_st* ,int);

typedef int (*EVP_PBE_KEYGEN_EX)(struct evp_cipher_ctx_st* ,const char*,int,struct asn1_type_st* ,const struct evp_cipher_st* ,const struct evp_md_st* ,int,struct ossl_lib_ctx_st* ,const char*);

typedef int (*EVP_PKEY_gen_cb)(struct evp_pkey_ctx_st* );

typedef enum anonymous_typeY34 point_conversion_form_t;

typedef struct ec_method_st EC_METHOD;

typedef struct ec_group_st EC_GROUP;

typedef struct ec_point_st EC_POINT;

typedef struct ecpk_parameters_st ECPKPARAMETERS;

typedef struct ec_parameters_st ECPARAMETERS;

typedef struct anonymous_typeX35 EC_builtin_curve;

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

typedef struct anonymous_typeX38 PBMAC1PARAM;

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

typedef int (*sk_OCSP_RESPONSE_compfunc)(const struct ocsp_response_st** const ,const struct ocsp_response_st** const );

typedef void (*sk_OCSP_RESPONSE_freefunc)(struct ocsp_response_st* );

typedef struct ocsp_response_st* (*sk_OCSP_RESPONSE_copyfunc)(const struct ocsp_response_st* );

typedef enum anonymous_typeY38 X509_LOOKUP_TYPE;

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

typedef int (*X509_LOOKUP_get_by_subject_fn)(struct x509_lookup_st* ,enum anonymous_typeY38 ,const struct X509_name_st* ,struct x509_object_st* );

typedef int (*X509_LOOKUP_get_by_subject_ex_fn)(struct x509_lookup_st* ,enum anonymous_typeY38 ,const struct X509_name_st* ,struct x509_object_st* ,struct ossl_lib_ctx_st* ,const char*);

typedef int (*X509_LOOKUP_get_by_issuer_serial_fn)(struct x509_lookup_st* ,enum anonymous_typeY38 ,const struct X509_name_st* ,const struct asn1_string_st* ,struct x509_object_st* );

typedef int (*X509_LOOKUP_get_by_fingerprint_fn)(struct x509_lookup_st* ,enum anonymous_typeY38 ,const unsigned char*,int,struct x509_object_st* );

typedef int (*X509_LOOKUP_get_by_alias_fn)(struct x509_lookup_st* ,enum anonymous_typeY38 ,const char*,int,struct x509_object_st* );

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

typedef struct anonymous_typeX41 CONF_VALUE;

typedef int (*sk_CONF_VALUE_compfunc)(const struct anonymous_typeX41** const ,const struct anonymous_typeX41** const );

typedef void (*sk_CONF_VALUE_freefunc)(struct anonymous_typeX41* );

typedef struct anonymous_typeX41* (*sk_CONF_VALUE_copyfunc)(const struct anonymous_typeX41* );

typedef int (*lh_CONF_VALUE_compfunc)(const struct anonymous_typeX41* ,const struct anonymous_typeX41* );

typedef unsigned long  int (*lh_CONF_VALUE_hashfunc)(const struct anonymous_typeX41* );

typedef void (*lh_CONF_VALUE_doallfunc)(struct anonymous_typeX41* );

typedef struct conf_method_st  CONF_METHOD  ;

typedef struct conf_imodule_st CONF_IMODULE;

typedef struct conf_module_st CONF_MODULE;

typedef int (*conf_init_func)(struct conf_imodule_st* ,const struct conf_st* );

typedef void (*conf_finish_func)(struct conf_imodule_st* );

typedef struct bio_st* (*OSSL_HTTP_bio_cb_t)(struct bio_st* ,void*,int,int);

typedef struct async_job_st ASYNC_JOB;

typedef struct async_wait_ctx_st ASYNC_WAIT_CTX;

typedef int (*ASYNC_callback_fn)(void*);

typedef void* (*ASYNC_stack_alloc_fn)(unsigned long  int* );

typedef void (*ASYNC_stack_free_fn)(void*);

typedef int (*sk_SCT_compfunc)(const struct sct_st** const ,const struct sct_st** const );

typedef void (*sk_SCT_freefunc)(struct sct_st* );

typedef struct sct_st* (*sk_SCT_copyfunc)(const struct sct_st* );

typedef int (*sk_CTLOG_compfunc)(const struct ctlog_st** const ,const struct ctlog_st** const );

typedef void (*sk_CTLOG_freefunc)(struct ctlog_st* );

typedef struct ctlog_st* (*sk_CTLOG_copyfunc)(const struct ctlog_st* );

typedef enum anonymous_typeY41 ct_log_entry_type_t;

typedef enum anonymous_typeY41 sct_version_t;

typedef enum anonymous_typeY41 sct_source_t;

typedef enum anonymous_typeY41 sct_validation_status_t;

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

typedef int (*custom_ext_add_cb)(struct ssl_st* ,unsigned int,const unsigned char**,unsigned long  int* ,int*,void*);

typedef void (*custom_ext_free_cb)(struct ssl_st* ,unsigned int,const unsigned char*,void*);

typedef int (*custom_ext_parse_cb)(struct ssl_st* ,unsigned int,const unsigned char*,unsigned long  int ,int*,void*);

typedef int (*SSL_custom_ext_add_cb_ex)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char**,unsigned long  int* ,struct x509_st* ,unsigned long  int ,int*,void*);

typedef void (*SSL_custom_ext_free_cb_ex)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char*,void*);

typedef int (*SSL_custom_ext_parse_cb_ex)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char*,unsigned long  int ,struct x509_st* ,unsigned long  int ,int*,void*);

typedef int (*SSL_verify_cb)(int,struct x509_store_ctx_st* );

typedef int (*SSL_async_callback_fn)(struct ssl_st* ,void*);

typedef int (*GEN_SESSION_CB)(struct ssl_st* ,unsigned char*,unsigned int*);

typedef int (*SSL_CTX_npn_advertised_cb_func)(struct ssl_st* ,const unsigned char**,unsigned int*,void*);

typedef int (*SSL_CTX_npn_select_cb_func)(struct ssl_st* ,unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*);

typedef int (*SSL_CTX_alpn_select_cb_func)(struct ssl_st* ,const unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*);

typedef unsigned int (*SSL_psk_client_cb_func)(struct ssl_st* ,const char*,char*,unsigned int,unsigned char*,unsigned int);

typedef unsigned int (*SSL_psk_server_cb_func)(struct ssl_st* ,const char*,unsigned char*,unsigned int);

typedef int (*SSL_psk_find_session_cb_func)(struct ssl_st* ,const unsigned char*,unsigned long  int ,struct ssl_session_st** );

typedef int (*SSL_psk_use_session_cb_func)(struct ssl_st* ,const struct evp_md_st* ,const unsigned char**,unsigned long  int* ,struct ssl_session_st** );

typedef void (*SSL_CTX_keylog_cb_func)(const struct ssl_st* ,const char*);

typedef int (*sk_SSL_CIPHER_compfunc)(const struct ssl_cipher_st** const ,const struct ssl_cipher_st** const );

typedef void (*sk_SSL_CIPHER_freefunc)(struct ssl_cipher_st* );

typedef struct ssl_cipher_st* (*sk_SSL_CIPHER_copyfunc)(const struct ssl_cipher_st* );

typedef enum anonymous_typeY41 OSSL_HANDSHAKE_STATE;

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

typedef int (*SSL_CTX_decrypt_session_ticket_fn)(struct ssl_st* ,struct ssl_session_st* ,const unsigned char*,unsigned long  int ,int ,void*);

typedef unsigned int (*DTLS_timer_cb)(struct ssl_st* ,unsigned int);

typedef int (*SSL_allow_early_data_cb_fn)(struct ssl_st* ,void*);

typedef struct ERR_string_data_st  ERR_STRING_DATA  ;

typedef int (*lh_ERR_STRING_DATA_compfunc)(const struct ERR_string_data_st* ,const struct ERR_string_data_st* );

typedef unsigned long  int (*lh_ERR_STRING_DATA_hashfunc)(const struct ERR_string_data_st* );

typedef void (*lh_ERR_STRING_DATA_doallfunc)(struct ERR_string_data_st* );

typedef unsigned int  au_id_t  ;

typedef int  au_asid_t  ;

typedef unsigned short int  au_event_t  ;

typedef unsigned short int  au_emod_t  ;

typedef unsigned int  au_class_t  ;

typedef unsigned long  long __attribute__ ((aligned(8))) au_asflgs_t __attribute__ ((aligned(8))) ;

typedef unsigned char au_ctlmode_t;

typedef struct au_tid  au_tid_t  ;

typedef struct au_tid_addr  au_tid_addr_t  ;

typedef struct au_mask  au_mask_t  ;

typedef struct auditinfo  auditinfo_t  ;

typedef struct auditinfo_addr  auditinfo_addr_t  ;

typedef struct auditpinfo  auditpinfo_t  ;

typedef struct auditpinfo_addr  auditpinfo_addr_t  ;

typedef struct au_session  au_session_t  ;

typedef struct au_expire_after  au_expire_after_t  ;

typedef struct au_token token_t;

typedef struct au_qctrl  au_qctrl_t  ;

typedef struct audit_stat  au_stat_t  ;

typedef struct audit_fstat  au_fstat_t  ;

typedef struct au_evclass_map  au_evclass_map_t  ;

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

typedef struct ucred*  kauth_cred_t  ;

typedef struct posix_cred*  posix_cred_t  ;

typedef unsigned int  text_encoding_t  ;

typedef unsigned int  fsobj_type_t  ;

typedef unsigned int  fsobj_tag_t  ;

typedef unsigned int  fsfile_type_t  ;

typedef unsigned int  fsvolid_t  ;

typedef struct fsobj_id  fsobj_id_t  ;

typedef unsigned int  attrgroup_t  ;

typedef struct attribute_set  attribute_set_t  ;

typedef struct attrreference  attrreference_t  ;

typedef struct vol_capabilities_attr  vol_capabilities_attr_t  ;

typedef struct vol_attributes_attr  vol_attributes_attr_t  ;

typedef void (*os_function_t)(void*);

typedef struct fsid  fsid_t  ;

typedef struct secure_boot_cryptex_args  secure_boot_cryptex_args_t  ;

typedef union graft_args graftdmg_args_un;

typedef struct mount*  mount_t  ;

typedef struct vnode*  vnode_t  ;

typedef struct fhandle  fhandle_t  ;

typedef unsigned int  graftdmg_type_t  ;

typedef unsigned int  cryptex_auth_type_t  ;

typedef enum anonymous_typeY43 nfstype;

typedef struct nfs_uquad  nfsuint64  ;

typedef union nfs_quadconvert  nfsquad_t  ;

typedef struct nfs_specdata  nfs_specdata  ;

typedef struct nfs_fsid  nfs_fsid  ;

typedef struct nfs_stateid  nfs_stateid  ;

typedef enum nfs_supported_kerberos_etypes nfs_supported_kerberos_etypes;

typedef struct nfserr_info  nfserr_info_t  ;

typedef union anonymous_typeZ50 guid_t;

/// previous struct definition ///
struct cmsghdr;

struct sockaddr;

struct __sFILEX;

struct ifnet_interface_advisory;

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

struct stack_st_OCSP_RESPONSE;

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

struct label;

struct ucred;

struct posix_cred;

struct mount;

struct vnode;

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

union anonymous_typeZ2
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};

union anonymous_typeZ3
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};

union anonymous_typeZ4
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};

union anonymous_typeZ5
{
unsigned long long int  _ull  ;
unsigned int  _ul[2]  ;
};

struct fd_set
{
    int  fds_bits[((((((1024)%(32))==0))?(((1024)/(32))):((((1024)/(32))+1))))]  ;
};

struct iovec
{
    void* iov_base;
    unsigned long  int  iov_len  ;
};

struct sa_endpoints
{
    unsigned int sae_srcif;
    const struct sockaddr* sae_srcaddr;
    unsigned int  sae_srcaddrlen  ;
    const struct sockaddr* sae_dstaddr;
    unsigned int  sae_dstaddrlen  ;
};

struct linger
{
    int l_onoff;
    int l_linger;
};

struct so_np_extensions
{
    unsigned int  npx_flags  ;
    unsigned int  npx_mask  ;
};

struct sockaddr
{
    unsigned char  sa_len  ;
    unsigned char  sa_family  ;
    char sa_data[14];
};

struct __sockaddr_header
{
    unsigned char  sa_len  ;
    unsigned char  sa_family  ;
};

struct sockproto
{
    unsigned short int  sp_family  ;
    unsigned short int  sp_protocol  ;
};

struct sockaddr_storage
{
    unsigned char  ss_len  ;
    unsigned char  ss_family  ;
    char __ss_pad1[((sizeof(long long int ))-sizeof(unsigned char )-sizeof(unsigned char ))];
    long long int  __ss_align  ;
    char __ss_pad2[(128-sizeof(unsigned char )-sizeof(unsigned char )-((sizeof(long long int ))-sizeof(unsigned char )-sizeof(unsigned char ))-(sizeof(long long int )))];
};

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

struct cmsghdr
{
    unsigned int  cmsg_len  ;
    int cmsg_level;
    int cmsg_type;
};

struct sf_hdtr
{
    struct iovec*  headers  ;
    int hdr_cnt;
    struct iovec*  trailers  ;
    int trl_cnt;
};

struct in_addr
{
    unsigned int  s_addr  ;
};

struct sockaddr_in
{
    unsigned char  sin_len  ;
    unsigned char  sin_family  ;
    unsigned short int  sin_port  ;
    struct in_addr  sin_addr  ;
    char sin_zero[8];
};

struct ip_opts
{
    struct in_addr  ip_dst  ;
    char ip_opts[40];
};

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
union anonymous_typeZ6
{
unsigned char  __u6_addr8[16]  ;
unsigned short int  __u6_addr16[8]  ;
unsigned int  __u6_addr32[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ7
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
#pragma pack(4)
struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state  __es  ;
    struct __darwin_arm_thread_state  __ss  ;
    struct __darwin_arm_vfp_state  __fs  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64  __es  ;
    struct __darwin_arm_thread_state64  __ss  ;
    struct __darwin_arm_neon_state64  __ns  ;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_sigaltstack
{
    void* ss_sp;
    unsigned long  int  ss_size  ;
    int ss_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int  uc_sigmask  ;
    struct __darwin_sigaltstack  uc_stack  ;
    struct __darwin_ucontext*  uc_link  ;
    unsigned long  int  uc_mcsize  ;
    struct __darwin_mcontext64*  uc_mcontext  ;
};
#pragma pack(pop)
#pragma pack(4)
union sigval
{
int sival_int;
void* sival_ptr;
};
#pragma pack(pop)
#pragma pack(4)
struct sigevent
{
    int sigev_notify;
    int sigev_signo;
    union sigval  sigev_value  ;
    void (*sigev_notify_function)(union sigval );
    struct _opaque_pthread_attr_t*  sigev_notify_attributes  ;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
union __sigaction_u
{
void (*__sa_handler)(int);
void (*__sa_sigaction)(int,struct __siginfo* ,void*);
};
#pragma pack(pop)
#pragma pack(4)
struct __sigaction
{
    union __sigaction_u  __sigaction_u  ;
    void (*sa_tramp)(void*,int,int,struct __siginfo* ,void*);
    unsigned int  sa_mask  ;
    int sa_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct sigaction
{
    union __sigaction_u  __sigaction_u  ;
    unsigned int  sa_mask  ;
    int sa_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct sigvec
{
    void (*sv_handler)(int);
    int sv_mask;
    int sv_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct sigstack
{
    char* ss_sp;
    int ss_onstack;
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

#pragma pack(4)
union anonymous_typeZ8
{
unsigned short int tu_block;
short tu_code;
char tu_stuff[1];
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ9
{
unsigned short int tu_block;
short tu_code;
char tu_stuff[1];
};
#pragma pack(pop)
#pragma pack(4)
struct tftphdr
{
    short th_opcode;
    union {
        unsigned short int tu_block;
        short tu_code;
        char tu_stuff[1];
    } th_u;
    char th_data[1];
};
#pragma pack(pop)
#pragma pack(4)
struct rt_metrics
{
    unsigned int  rmx_locks  ;
    unsigned int  rmx_mtu  ;
    unsigned int  rmx_hopcount  ;
    int  rmx_expire  ;
    unsigned int  rmx_recvpipe  ;
    unsigned int  rmx_sendpipe  ;
    unsigned int  rmx_ssthresh  ;
    unsigned int  rmx_rtt  ;
    unsigned int  rmx_rttvar  ;
    unsigned int  rmx_pksent  ;
    unsigned int  rmx_filler[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rtstat
{
    short rts_badredirect;
    short rts_dynamic;
    short rts_newgateway;
    short rts_unreach;
    short rts_wildcard;
    short rts_badrtgwroute;
};
#pragma pack(pop)
#pragma pack(4)
struct rt_msghdr
{
    unsigned short int  rtm_msglen  ;
    unsigned char  rtm_version  ;
    unsigned char  rtm_type  ;
    unsigned short int  rtm_index  ;
    int rtm_flags;
    int rtm_addrs;
    int  rtm_pid  ;
    int rtm_seq;
    int rtm_errno;
    int rtm_use;
    unsigned int  rtm_inits  ;
    struct rt_metrics  rtm_rmx  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rt_msghdr2
{
    unsigned short int  rtm_msglen  ;
    unsigned char  rtm_version  ;
    unsigned char  rtm_type  ;
    unsigned short int  rtm_index  ;
    int rtm_flags;
    int rtm_addrs;
    int  rtm_refcnt  ;
    int rtm_parentflags;
    int rtm_reserved;
    int rtm_use;
    unsigned int  rtm_inits  ;
    struct rt_metrics  rtm_rmx  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rt_msghdr_prelude
{
    unsigned short int  rtm_msglen  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rt_addrinfo
{
    int rti_addrs;
    struct sockaddr*  rti_info[8]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ether_header
{
    unsigned char  ether_dhost[6]  ;
    unsigned char  ether_shost[6]  ;
    unsigned short int  ether_type  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ether_addr
{
    unsigned char  octet[6]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct arphdr
{
    unsigned short int  ar_hrd  ;
    unsigned short int  ar_pro  ;
    unsigned char  ar_hln  ;
    unsigned char  ar_pln  ;
    unsigned short int  ar_op  ;
};
#pragma pack(pop)
#pragma pack(4)
struct arpreq
{
    struct sockaddr  arp_pa  ;
    struct sockaddr  arp_ha  ;
    int arp_flags;
};
#pragma pack(pop)
#pragma pack(4)
struct arpstat
{
    unsigned int  txrequests  ;
    unsigned int  txreplies  ;
    unsigned int  txannounces  ;
    unsigned int  rxrequests  ;
    unsigned int  rxreplies  ;
    unsigned int  received  ;
    unsigned int  txconflicts  ;
    unsigned int  invalidreqs  ;
    unsigned int  reqnobufs  ;
    unsigned int  dropped  ;
    unsigned int  purged  ;
    unsigned int  timeouts  ;
    unsigned int  dupips  ;
    unsigned int  inuse  ;
    unsigned int  txurequests  ;
    unsigned int  held  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ether_arp
{
    struct arphdr  ea_hdr  ;
    unsigned char  arp_sha[6]  ;
    unsigned char  arp_spa[4]  ;
    unsigned char  arp_tha[6]  ;
    unsigned char  arp_tpa[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct sockaddr_inarp
{
    unsigned char  sin_len  ;
    unsigned char  sin_family  ;
    unsigned short int  sin_port  ;
    struct in_addr  sin_addr  ;
    struct in_addr  sin_srcaddr  ;
    unsigned short int  sin_tos  ;
    unsigned short int  sin_other  ;
};
#pragma pack(pop)
#pragma pack(4)
struct netinfo
{
    struct sockaddr  rip_dst  ;
    int rip_metric;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ10
{
struct netinfo  ru_nets[1]  ;
char ru_tracefile[1];
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ11
{
struct netinfo  ru_nets[1]  ;
char ru_tracefile[1];
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
struct outmp
{
    char out_line[8];
    char out_name[8];
    int out_time;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
struct osockaddr
{
    unsigned short int  sa_family  ;
    char sa_data[14];
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX12
{
    unsigned char vers;
    unsigned char type;
    unsigned char answer;
    unsigned char pad;
    unsigned int id_num;
    struct osockaddr  addr  ;
    struct osockaddr  ctl_addr  ;
    int pid;
    char l_name[12];
    char r_name[12];
    char r_tty[16];
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX13
{
    unsigned char vers;
    unsigned char type;
    unsigned char answer;
    unsigned char pad;
    unsigned int id_num;
    struct osockaddr  addr  ;
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
union anonymous_typeZ14
{
struct timeval32  tspu_time  ;
char tspu_hopcnt;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ15
{
struct timeval32  tspu_time  ;
char tspu_hopcnt;
};
#pragma pack(pop)
#pragma pack(4)
struct tsp
{
    unsigned char tsp_type;
    unsigned char tsp_vers;
    unsigned short int tsp_seq;
    union {
        struct timeval32  tspu_time  ;
        char tspu_hopcnt;
    } tsp_u;
    char tsp_name[256];
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
struct anonymous_typeX16
{
    int length;
};
#pragma pack(pop)
#pragma pack(4)
struct _hist_entry
{
    const char* line;
    void*  data  ;
};
#pragma pack(pop)
#pragma pack(4)
struct _keymap_entry
{
    char type;
    int (*(*function))(const char*,int)  ;
};
#pragma pack(pop)
typedef struct _keymap_entry  KEYMAP_ENTRY_ARRAY[256]  ;

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
struct timespec
{
    long  tv_sec  ;
    long tv_nsec;
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
struct timeval64
{
    long long int  tv_sec  ;
    long long int  tv_usec  ;
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
struct net_event_data
{
    unsigned int  if_family  ;
    unsigned int  if_unit  ;
    char if_name[16];
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
union anonymous_typeZ17
{
void* ifk_ptr;
int ifk_value;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ18
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
union anonymous_typeZ19
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
union anonymous_typeZ20
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
union anonymous_typeZ21
{
char*  ifcu_buf  ;
struct ifreq*  ifcu_req  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ22
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
struct anonymous_typeX23
{
    long  int  quot  ;
    long  int  rem  ;
};
#pragma pack(pop)
enum  anonymous_typeY23 { P_ALL 
,P_PID 
,P_PGID 
};

#pragma pack(4)
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
#pragma pack(4)
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
#pragma pack(4)
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
#pragma pack(4)
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
#pragma pack(4)
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
#pragma pack(4)
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
#pragma pack(4)
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
#pragma pack(4)
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
#pragma pack(4)
struct rlimit
{
    unsigned long long int  rlim_cur  ;
    unsigned long long int  rlim_max  ;
};
#pragma pack(pop)
#pragma pack(4)
struct proc_rlimit_control_wakeupmon
{
    unsigned int  wm_flags  ;
    int  wm_rate  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX24
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX25
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(4)
struct anonymous_typeX26
{
    int quot;
    int rem;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX27
{
    long quot;
    long rem;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX28
{
    long long quot;
    long long rem;
};
#pragma pack(pop)
#pragma pack(4)
struct ossl_dispatch_st
{
    int function_id;
    void (*function)();
};
#pragma pack(pop)
#pragma pack(4)
struct ossl_item_st
{
    unsigned int id;
    void* ptr;
};
#pragma pack(pop)
#pragma pack(4)
struct ossl_algorithm_st
{
    const char* algorithm_names;
    const char* property_definition;
    const struct ossl_dispatch_st*  implementation  ;
    const char* algorithm_description;
};
#pragma pack(pop)
#pragma pack(4)
struct ossl_param_st
{
    const char* key;
    unsigned int data_type;
    void* data;
    unsigned long  int  data_size  ;
    unsigned long  int  return_size  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX29
{
    int dummy;
};
#pragma pack(pop)
#pragma pack(4)
struct crypto_ex_data_st
{
    struct ossl_lib_ctx_st*  ctx  ;
    struct stack_st_void* sk;
};
#pragma pack(pop)
#pragma pack(4)
struct crypto_threadid_st
{
    int dummy;
};
#pragma pack(pop)
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
struct bio_msg_st
{
    void* data;
    unsigned long  int  data_len  ;
    union bio_addr_st*  peer  ;
    union bio_addr_st*  local  ;
    unsigned long  long  flags  ;
};
#pragma pack(pop)
#pragma pack(4)
struct bio_mmsg_cb_args_st
{
    struct bio_msg_st*  msg  ;
    unsigned long  int  stride  ;
    unsigned long  int  num_msg  ;
    unsigned long  long  flags  ;
    unsigned long  int*  msgs_processed  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ30
{
int fd;
void* custom;
unsigned long  int  custom_ui  ;
struct ssl_st*  ssl  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ31
{
int fd;
void* custom;
unsigned long  int  custom_ui  ;
struct ssl_st*  ssl  ;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
enum  BIO_hostserv_priorities { BIO_PARSE_PRIO_HOST 
,BIO_PARSE_PRIO_SERV 
};

enum  BIO_lookup_type { BIO_LOOKUP_CLIENT 
,BIO_LOOKUP_SERVER 
};

#pragma pack(4)
union BIO_sock_info_u
{
union bio_addr_st*  addr  ;
};
#pragma pack(pop)
enum  BIO_sock_info_type { BIO_SOCK_INFO_ADDRESS 
};

#pragma pack(4)
struct buf_mem_st
{
    unsigned long  int  length  ;
    char* data;
    unsigned long  int  max  ;
    unsigned long  int flags;
};
#pragma pack(pop)
#pragma pack(4)
struct asn1_string_st
{
    int length;
    int type;
    unsigned char* data;
    long flags;
};
#pragma pack(pop)
#pragma pack(4)
struct ASN1_ENCODING_st
{
    unsigned char* enc;
    long len;
    int modified;
};
#pragma pack(pop)
#pragma pack(4)
struct asn1_string_table_st
{
    int nid;
    long minsize;
    long maxsize;
    unsigned long  int mask;
    unsigned long  int flags;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ32
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
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ33
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
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
struct BIT_STRING_BITNAME_st
{
    int bitnum;
    const char* lname;
    const char* sname;
};
#pragma pack(pop)
#pragma pack(4)
struct obj_name_st
{
    int type;
    int alias;
    const char* name;
    const char* data;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX34
{
    unsigned char* out;
    const unsigned char* inp;
    unsigned long  int  len  ;
    unsigned int interleave;
};
#pragma pack(pop)
#pragma pack(4)
struct evp_cipher_info_st
{
    const struct evp_cipher_st*  cipher  ;
    unsigned char iv[16];
};
#pragma pack(pop)
enum  anonymous_typeY34 { POINT_CONVERSION_COMPRESSED=(2),
POINT_CONVERSION_UNCOMPRESSED=(4),
POINT_CONVERSION_HYBRID=(6)
};

#pragma pack(4)
struct anonymous_typeX35
{
    int nid;
    const char* comment;
};
#pragma pack(pop)
#pragma pack(4)
struct rsa_pss_params_st
{
    struct X509_algor_st*  hashAlgorithm  ;
    struct X509_algor_st*  maskGenAlgorithm  ;
    struct asn1_string_st*  saltLength  ;
    struct asn1_string_st*  trailerField  ;
    struct X509_algor_st*  maskHash  ;
};
#pragma pack(pop)
#pragma pack(4)
struct rsa_oaep_params_st
{
    struct X509_algor_st*  hashFunc  ;
    struct X509_algor_st*  maskGenFunc  ;
    struct X509_algor_st*  pSourceFunc  ;
    struct X509_algor_st*  maskHash  ;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
struct SHA256state_st
{
    unsigned int h[8];
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    unsigned int num;
    unsigned int md_len;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ36
{
unsigned long  long d[16];
unsigned char p[(16*8)];
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ37
{
unsigned long  long d[16];
unsigned char p[(16*8)];
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
struct X509_algor_st
{
    struct asn1_object_st*  algorithm  ;
    struct asn1_type_st*  parameter  ;
};
#pragma pack(pop)
#pragma pack(4)
struct X509_val_st
{
    struct asn1_string_st*  notBefore  ;
    struct asn1_string_st*  notAfter  ;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
struct X509_info_st
{
    struct x509_st*  x509  ;
    struct X509_crl_st*  crl  ;
    struct private_key_st*  x_pkey  ;
    struct evp_cipher_info_st  enc_cipher  ;
    int enc_len;
    char* enc_data;
};
#pragma pack(pop)
#pragma pack(4)
struct Netscape_spkac_st
{
    struct X509_pubkey_st*  pubkey  ;
    struct asn1_string_st*  challenge  ;
};
#pragma pack(pop)
#pragma pack(4)
struct Netscape_spki_st
{
    struct Netscape_spkac_st*  spkac  ;
    struct X509_algor_st  sig_algor  ;
    struct asn1_string_st*  signature  ;
};
#pragma pack(pop)
#pragma pack(4)
struct Netscape_certificate_sequence
{
    struct asn1_object_st*  type  ;
    struct stack_st_X509*  certs  ;
};
#pragma pack(pop)
#pragma pack(4)
struct PBEPARAM_st
{
    struct asn1_string_st*  salt  ;
    struct asn1_string_st*  iter  ;
};
#pragma pack(pop)
#pragma pack(4)
struct PBE2PARAM_st
{
    struct X509_algor_st*  keyfunc  ;
    struct X509_algor_st*  encryption  ;
};
#pragma pack(pop)
#pragma pack(4)
struct PBKDF2PARAM_st
{
    struct asn1_type_st*  salt  ;
    struct asn1_string_st*  iter  ;
    struct asn1_string_st*  keylength  ;
    struct X509_algor_st*  prf  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX38
{
    struct X509_algor_st*  keyDerivationFunc  ;
    struct X509_algor_st*  messageAuthScheme  ;
};
#pragma pack(pop)
#pragma pack(4)
struct SCRYPT_PARAMS_st
{
    struct asn1_string_st*  salt  ;
    struct asn1_string_st*  costParameter  ;
    struct asn1_string_st*  blockSize  ;
    struct asn1_string_st*  parallelizationParameter  ;
    struct asn1_string_st*  keyLength  ;
};
#pragma pack(pop)
#pragma pack(4)
struct lhash_st_OPENSSL_STRING
{
    union lh_OPENSSL_STRING_dummy {
        void* d1;
        unsigned long  int d2;
        int d3;
    } dummy;
};
#pragma pack(pop)
#pragma pack(4)
struct lhash_st_OPENSSL_CSTRING
{
    union lh_OPENSSL_CSTRING_dummy {
        void* d1;
        unsigned long  int d2;
        int d3;
    } dummy;
};
#pragma pack(pop)
enum  anonymous_typeY38 { X509_LU_NONE=(0),
X509_LU_X509 
,X509_LU_CRL 
};

#pragma pack(4)
struct x509_trust_st
{
    int trust;
    int flags;
    int (*check_trust)(struct x509_trust_st* ,struct x509_st* ,int);
    char* name;
    int arg1;
    void* arg2;
};
#pragma pack(pop)
#pragma pack(4)
struct PKCS7_CTX_st
{
    struct ossl_lib_ctx_st*  libctx  ;
    char* propq;
};
#pragma pack(pop)
#pragma pack(4)
struct pkcs7_issuer_and_serial_st
{
    struct X509_name_st*  issuer  ;
    struct asn1_string_st*  serial  ;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
struct pkcs7_recip_info_st
{
    struct asn1_string_st*  version  ;
    struct pkcs7_issuer_and_serial_st*  issuer_and_serial  ;
    struct X509_algor_st*  key_enc_algor  ;
    struct asn1_string_st*  enc_key  ;
    struct x509_st*  cert  ;
    const struct PKCS7_CTX_st*  ctx  ;
};
#pragma pack(pop)
#pragma pack(4)
struct pkcs7_signed_st
{
    struct asn1_string_st*  version  ;
    struct stack_st_X509_ALGOR*  md_algs  ;
    struct stack_st_X509*  cert  ;
    struct stack_st_X509_CRL*  crl  ;
    struct stack_st_PKCS7_SIGNER_INFO*  signer_info  ;
    struct pkcs7_st* contents;
};
#pragma pack(pop)
#pragma pack(4)
struct pkcs7_enc_content_st
{
    struct asn1_object_st*  content_type  ;
    struct X509_algor_st*  algorithm  ;
    struct asn1_string_st*  enc_data  ;
    const struct evp_cipher_st*  cipher  ;
    const struct PKCS7_CTX_st*  ctx  ;
};
#pragma pack(pop)
#pragma pack(4)
struct pkcs7_enveloped_st
{
    struct asn1_string_st*  version  ;
    struct stack_st_PKCS7_RECIP_INFO*  recipientinfo  ;
    struct pkcs7_enc_content_st*  enc_data  ;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
struct pkcs7_digest_st
{
    struct asn1_string_st*  version  ;
    struct X509_algor_st*  md  ;
    struct pkcs7_st* contents;
    struct asn1_string_st*  digest  ;
};
#pragma pack(pop)
#pragma pack(4)
struct pkcs7_encrypted_st
{
    struct asn1_string_st*  version  ;
    struct pkcs7_enc_content_st*  enc_data  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ39
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
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ40
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
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX41
{
    char* section;
    char* name;
    char* value;
};
#pragma pack(pop)
#pragma pack(4)
struct lhash_st_CONF_VALUE
{
    union lh_CONF_VALUE_dummy {
        void* d1;
        unsigned long  int d2;
        int d3;
    } dummy;
};
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
#pragma pack(4)
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
#pragma pack(pop)
enum  anonymous_typeY41 { CT_LOG_ENTRY_TYPE_NOT_SET=(-1),
CT_LOG_ENTRY_TYPE_X509=(0),
CT_LOG_ENTRY_TYPE_PRECERT=(1)
};

#pragma pack(4)
struct srtp_protection_profile_st
{
    const char* name;
    unsigned long  int id;
};
#pragma pack(pop)
#pragma pack(4)
struct tls_session_ticket_ext_st
{
    unsigned short int length;
    void* data;
};
#pragma pack(pop)
#pragma pack(4)
struct ssl_shutdown_ex_args_st
{
    unsigned long  long  quic_error_code  ;
    const char* quic_reason;
};
#pragma pack(pop)
#pragma pack(4)
struct ssl_stream_reset_args_st
{
    unsigned long  long  quic_error_code  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ssl_conn_close_info_st
{
    unsigned long  long  error_code  ;
    unsigned long  long  frame_type  ;
    const char* reason;
    unsigned long  int  reason_len  ;
    unsigned int  flags  ;
};
#pragma pack(pop)
#pragma pack(4)
struct ssl_poll_item_st
{
    struct bio_poll_descriptor_st  desc  ;
    unsigned long  long  events  ;
    unsigned long  long  revents  ;
};
#pragma pack(pop)
enum { SSL_CT_VALIDATION_PERMISSIVE=(0),
SSL_CT_VALIDATION_STRICT 
};

#pragma pack(4)
struct err_state_st
{
    int err_flags[16];
    int err_marks[16];
    unsigned long  int err_buffer[16];
    char* err_data[16];
    unsigned long  int  err_data_size[16]  ;
    int err_data_flags[16];
    char* err_file[16];
    int err_line[16];
    char* err_func[16];
    int top;
    int bottom;
};
#pragma pack(pop)
#pragma pack(4)
struct ERR_string_data_st
{
    unsigned long  int error;
    const char* string;
};
#pragma pack(pop)
#pragma pack(4)
struct lhash_st_ERR_STRING_DATA
{
    union lh_ERR_STRING_DATA_dummy {
        void* d1;
        unsigned long  int d2;
        int d3;
    } dummy;
};
#pragma pack(pop)
#pragma pack(4)
struct rand_meth_st
{
    int (*seed)(const void*,int);
    int (*bytes)(unsigned char*,int);
    void (*cleanup)();
    int (*add)(const void*,int,double);
    int (*pseudorand)(unsigned char*,int);
    int (*status)();
};
#pragma pack(pop)
#pragma pack(4)
struct au_tid
{
    int  port  ;
    unsigned int  machine  ;
};
#pragma pack(pop)
#pragma pack(4)
struct au_tid_addr
{
    int  at_port  ;
    unsigned int  at_type  ;
    unsigned int  at_addr[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct au_mask
{
    unsigned int am_success;
    unsigned int am_failure;
};
#pragma pack(pop)
#pragma pack(4)
struct auditinfo
{
    unsigned int  ai_auid  ;
    struct au_mask  ai_mask  ;
    struct au_tid  ai_termid  ;
    int  ai_asid  ;
};
#pragma pack(pop)
#pragma pack(4)
struct auditinfo_addr
{
    unsigned int  ai_auid  ;
    struct au_mask  ai_mask  ;
    struct au_tid_addr  ai_termid  ;
    int  ai_asid  ;
    unsigned long  long  ai_flags  ;
};
#pragma pack(pop)
#pragma pack(4)
struct auditpinfo
{
    int  ap_pid  ;
    unsigned int  ap_auid  ;
    struct au_mask  ap_mask  ;
    struct au_tid  ap_termid  ;
    int  ap_asid  ;
};
#pragma pack(pop)
#pragma pack(4)
struct auditpinfo_addr
{
    int  ap_pid  ;
    unsigned int  ap_auid  ;
    struct au_mask  ap_mask  ;
    struct au_tid_addr  ap_termid  ;
    int  ap_asid  ;
    unsigned long  long  ap_flags  ;
};
#pragma pack(pop)
#pragma pack(4)
struct au_session
{
    struct auditinfo_addr*  as_aia_p  ;
    struct au_mask  as_mask  ;
};
#pragma pack(pop)
#pragma pack(4)
struct au_expire_after
{
    long  age  ;
    unsigned long  int  size  ;
    unsigned char op_type;
};
#pragma pack(pop)
#pragma pack(4)
struct au_qctrl
{
    int aq_hiwater;
    int aq_lowater;
    int aq_bufsz;
    int aq_delay;
    int aq_minfree;
};
#pragma pack(pop)
#pragma pack(4)
struct audit_stat
{
    unsigned int as_version;
    unsigned int as_numevent;
    int as_generated;
    int as_nonattrib;
    int as_kernel;
    int as_audit;
    int as_auditctl;
    int as_enqueue;
    int as_written;
    int as_wblocked;
    int as_rblocked;
    int as_dropped;
    int as_totalsize;
    unsigned int as_memused;
};
#pragma pack(pop)
#pragma pack(4)
struct audit_fstat
{
    unsigned long  long  af_filesz  ;
    unsigned long  long  af_currsz  ;
};
#pragma pack(pop)
#pragma pack(4)
struct au_evclass_map
{
    unsigned short int  ec_number  ;
    unsigned int  ec_class  ;
};
#pragma pack(pop)
enum  audit_session_flags { AU_SESSION_FLAG_IS_INITIAL=(0x0001),
AU_SESSION_FLAG_HAS_GRAPHIC_ACCESS=(0x0010),
AU_SESSION_FLAG_HAS_TTY=(0x0020),
AU_SESSION_FLAG_IS_REMOTE=(0x1000),
AU_SESSION_FLAG_HAS_CONSOLE_ACCESS=(0x2000),
AU_SESSION_FLAG_HAS_AUTHENTICATED=(0x4000)
};

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
union anonymous_typeZ42
{
unsigned long  long  reserved[2]  ;
unsigned int  work_interval_port  ;
struct mach_service_port_info*  service_port_info  ;
unsigned int  service_port_name  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ43
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
struct xucred
{
    unsigned int  cr_version  ;
    unsigned int  cr_uid  ;
    short cr_ngroups;
    unsigned int  cr_groups[16]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fsobj_id
{
    unsigned int  fid_objno  ;
    unsigned int  fid_generation  ;
};
#pragma pack(pop)
#pragma pack(4)
struct attrlist
{
    unsigned short int  bitmapcount  ;
    unsigned short int  reserved  ;
    unsigned int  commonattr  ;
    unsigned int  volattr  ;
    unsigned int  dirattr  ;
    unsigned int  fileattr  ;
    unsigned int  forkattr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct attribute_set
{
    unsigned int  commonattr  ;
    unsigned int  volattr  ;
    unsigned int  dirattr  ;
    unsigned int  fileattr  ;
    unsigned int  forkattr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct attrreference
{
    int  attr_dataoffset  ;
    unsigned int  attr_length  ;
};
#pragma pack(pop)
#pragma pack(4)
struct diskextent
{
    unsigned int  startblock  ;
    unsigned int  blockcount  ;
};
#pragma pack(pop)
typedef struct diskextent  extentrecord[8]  ;

typedef unsigned int  vol_capabilities_set_t[4]  ;

#pragma pack(4)
struct vol_capabilities_attr
{
    unsigned int  capabilities[4]  ;
    unsigned int  valid[4]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct vol_attributes_attr
{
    struct attribute_set  validattr  ;
    struct attribute_set  nativeattr  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fssearchblock
{
    struct attrlist*  returnattrs  ;
    void* returnbuffer;
    unsigned long  int  returnbuffersize  ;
    unsigned long  int  maxmatches  ;
    struct timeval  timelimit  ;
    void* searchparams1;
    unsigned long  int  sizeofsearchparams1  ;
    void* searchparams2;
    unsigned long  int  sizeofsearchparams2  ;
    struct attrlist  searchattrs  ;
};
#pragma pack(pop)
#pragma pack(4)
struct searchstate
{
    unsigned int  ss_union_flags  ;
    unsigned int  ss_union_layer  ;
    unsigned char  ss_fsstate[548]  ;
} __attribute__((packed));
#pragma pack(pop)
#pragma pack(4)
struct fsid
{
    int  val[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct secure_boot_cryptex_args
{
    unsigned int  sbc_version  ;
    unsigned int  sbc_4cc  ;
    int sbc_authentic_manifest_fd;
    int sbc_user_manifest_fd;
    int sbc_payload_fd;
    unsigned long  long  sbc_flags  ;
} __attribute__((aligned(4), packed))  ;
#pragma pack(pop)
#pragma pack(4)
union graft_args
{
unsigned char  max_size[512]  ;
struct secure_boot_cryptex_args  sbc_args  ;
};
#pragma pack(pop)
#pragma pack(4)
struct statfs
{
    unsigned int  f_bsize  ;
    int  f_iosize  ;
    unsigned long  long  f_blocks  ;
    unsigned long  long  f_bfree  ;
    unsigned long  long  f_bavail  ;
    unsigned long  long  f_files  ;
    unsigned long  long  f_ffree  ;
    struct fsid  f_fsid  ;
    unsigned int  f_owner  ;
    unsigned int  f_type  ;
    unsigned int  f_flags  ;
    unsigned int  f_fssubtype  ;
    char f_fstypename[16];
    char f_mntonname[1024];
    char f_mntfromname[1024];
    unsigned int  f_flags_ext  ;
    unsigned int  f_reserved[7]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct vfsstatfs
{
    unsigned int  f_bsize  ;
    unsigned long  int  f_iosize  ;
    unsigned long  long  f_blocks  ;
    unsigned long  long  f_bfree  ;
    unsigned long  long  f_bavail  ;
    unsigned long  long  f_bused  ;
    unsigned long  long  f_files  ;
    unsigned long  long  f_ffree  ;
    struct fsid  f_fsid  ;
    unsigned int  f_owner  ;
    unsigned long  long  f_flags  ;
    char f_fstypename[16];
    char f_mntonname[1024];
    char f_mntfromname[1024];
    unsigned int  f_fssubtype  ;
    void* f_reserved[2];
};
#pragma pack(pop)
#pragma pack(4)
struct vfsconf
{
    unsigned int  vfc_reserved1  ;
    char vfc_name[15];
    int vfc_typenum;
    int vfc_refcount;
    int vfc_flags;
    unsigned int  vfc_reserved2  ;
    unsigned int  vfc_reserved3  ;
};
#pragma pack(pop)
#pragma pack(4)
struct vfsidctl
{
    int vc_vers;
    struct fsid  vc_fsid  ;
    void* vc_ptr;
    unsigned long  int  vc_len  ;
    unsigned int  vc_spare[12]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct vfsquery
{
    unsigned int  vq_flags  ;
    unsigned int  vq_spare[31]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct vfs_server
{
    int  vs_minutes  ;
    unsigned char  vs_server_name[256*3]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct netfs_status
{
    unsigned int  ns_status  ;
    char ns_mountopts[512];
    unsigned int  ns_waittime  ;
    unsigned int  ns_threadcount  ;
    unsigned long  long  ns_threadids[0]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct fhandle
{
    unsigned int fh_len;
    unsigned char fh_data[128];
};
#pragma pack(pop)
enum { GRAFTDMG_CRYPTEX_BOOT=(1),
GRAFTDMG_CRYPTEX_PREBOOT=(2),
GRAFTDMG_CRYPTEX_DOWNLEVEL=(3),
GRAFTDMG_CRYPTEX_AUTH_ENV_GENERIC=(4),
GRAFTDMG_CRYPTEX_PDI_NONCE=(6),
GRAFTDMG_CRYPTEX_EFFECTIVE_AP=(7),
GRAFTDMG_CRYPTEX_MOBILE_ASSET=(8),
GRAFTDMG_CRYPTEX_MOBILE_ASSET_WITH_CODE=(9),
GRAFTDMG_CRYPTEX_MAX=(9)
};

enum { CRYPTEX1_AUTH_ENV_GENERIC=(4),
CRYPTEX1_AUTH_ENV_GENERIC_SUPPLEMENTAL=(5),
CRYPTEX_AUTH_PDI_NONCE=(6),
CRYPTEX_AUTH_MOBILE_ASSET=(8),
CRYPTEX_AUTH_MOBILE_ASSET_WITH_CODE=(9),
CRYPTEX_AUTH_MAX=(9)
};

enum  anonymous_typeY43 { NFNON=(0),
NFREG=(1),
NFDIR=(2),
NFBLK=(3),
NFCHR=(4),
NFLNK=(5),
NFSOCK=(6),
NFFIFO=(7),
NFATTRDIR=(8),
NFNAMEDATTR=(9)
};

#pragma pack(4)
struct nfs_uquad
{
    unsigned int  nfsuquad[2]  ;
};
#pragma pack(pop)
#pragma pack(4)
union nfs_quadconvert
{
unsigned int  lval[2]  ;
unsigned long  long  qval  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_specdata
{
    unsigned int  specdata1  ;
    unsigned int  specdata2  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_fsid
{
    unsigned long  long  major  ;
    unsigned long  long  minor  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_stateid
{
    unsigned int  seqid  ;
    unsigned int  other[3]  ;
};
#pragma pack(pop)
enum  nfs_supported_kerberos_etypes { NFS_DES3_CBC_SHA1_KD=(16),
NFS_AES128_CTS_HMAC_SHA1_96=(17),
NFS_AES256_CTS_HMAC_SHA1_96=(18)
};

#pragma pack(4)
struct nfs_etype
{
    unsigned int  count  ;
    unsigned int  selected  ;
    enum nfs_supported_kerberos_etypes  etypes[3]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_args
{
    int version;
    struct sockaddr*  addr  ;
    unsigned char  addrlen  ;
    int sotype;
    int proto;
    unsigned char*  fh  ;
    int fhsize;
    int flags;
    int wsize;
    int rsize;
    int readdirsize;
    int timeo;
    int retrans;
    int maxgrouplist;
    int readahead;
    int leaseterm;
    int deadthresh;
    char* hostname;
    int acregmin;
    int acregmax;
    int acdirmin;
    int acdirmax;
    unsigned int  auth  ;
    unsigned int  deadtimeout  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfsd_args
{
    int sock;
    char*  name  ;
    int namelen;
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_exphandle
{
    unsigned int  nxh_version  ;
    unsigned int  nxh_fsid  ;
    unsigned int  nxh_expid  ;
    unsigned short int  nxh_flags  ;
    unsigned char  nxh_reserved  ;
    unsigned int  nxh_fidlen  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_filehandle
{
    unsigned int  nfh_len  ;
    struct nfs_exphandle  nfh_xh  ;
    unsigned char nfh_fid[(128-sizeof(struct nfs_exphandle ))];
    unsigned char* nfh_fhp;
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_sec
{
    int count;
    unsigned int  flavors[5]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_export_net_args
{
    unsigned int  nxna_flags  ;
    struct xucred  nxna_cred  ;
    struct sockaddr_storage  nxna_addr  ;
    struct sockaddr_storage  nxna_mask  ;
    struct nfs_sec  nxna_sec  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_export_args
{
    unsigned int  nxa_fsid  ;
    unsigned int  nxa_expid  ;
    char* nxa_fspath;
    char* nxa_exppath;
    unsigned int  nxa_flags  ;
    unsigned int  nxa_netcount  ;
    struct nfs_export_net_args*  nxa_nets  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_export_stat_desc
{
    unsigned int  rec_vers  ;
    unsigned long  long  rec_count  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nfs_export_stat_rec
{
    char path[1024+1];
    unsigned long  long  ops  ;
    unsigned long  long  bytes_read  ;
    unsigned long  long  bytes_written  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nfs_user_stat_desc
{
    unsigned int  rec_vers  ;
    unsigned int  rec_count  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nfs_user_stat_user_rec
{
    unsigned char  rec_type  ;
    unsigned int  uid  ;
    struct sockaddr_storage  sock  ;
    unsigned long  long  ops  ;
    unsigned long  long  bytes_read  ;
    unsigned long  long  bytes_written  ;
    long  tm_start  ;
    long  tm_last  ;
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nfs_user_stat_path_rec
{
    unsigned char  rec_type  ;
    char path[1024+1];
} __attribute__((__packed__));
#pragma pack(pop)
#pragma pack(4)
struct nfserr_info
{
    const char* nei_name;
    const int nei_error;
    const int nei_index;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX44
{
    unsigned long  long  nlm_lock  ;
    unsigned long  long  nlm_test  ;
    unsigned long  long  nlm_unlock  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX45
{
    unsigned long  long  nlm_lock  ;
    unsigned long  long  nlm_test  ;
    unsigned long  long  nlm_unlock  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX46
{
    unsigned long  long  errs_common[30]  ;
    unsigned long  long  errs_v4[78]  ;
    unsigned long  long  errs_unknown  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX47
{
    unsigned long  long  errs_common[30]  ;
    unsigned long  long  errs_v4[78]  ;
    unsigned long  long  errs_unknown  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfsclntstats
{
    unsigned long  long  attrcache_hits  ;
    unsigned long  long  attrcache_misses  ;
    unsigned long  long  lookupcache_hits  ;
    unsigned long  long  lookupcache_misses  ;
    unsigned long  long  direofcache_hits  ;
    unsigned long  long  direofcache_misses  ;
    unsigned long  long  accesscache_hits  ;
    unsigned long  long  accesscache_misses  ;
    unsigned long  long  biocache_reads  ;
    unsigned long  long  read_bios  ;
    unsigned long  long  read_physios  ;
    unsigned long  long  biocache_writes  ;
    unsigned long  long  write_bios  ;
    unsigned long  long  write_physios  ;
    unsigned long  long  biocache_readlinks  ;
    unsigned long  long  readlink_bios  ;
    unsigned long  long  biocache_readdirs  ;
    unsigned long  long  readdir_bios  ;
    unsigned long  long  rpccntv3[23]  ;
    struct {
        unsigned long  long  nlm_lock  ;
        unsigned long  long  nlm_test  ;
        unsigned long  long  nlm_unlock  ;
    } nlmcnt;
    unsigned long  long  opcntv4[59]  ;
    unsigned long  long  cbopcntv4[15]  ;
    unsigned long  long  rpcretries  ;
    unsigned long  long  rpcrequests  ;
    unsigned long  long  rpctimeouts  ;
    unsigned long  long  rpcunexpected  ;
    unsigned long  long  rpcinvalid  ;
    unsigned long  long  pageins  ;
    unsigned long  long  pageouts  ;
    struct {
        unsigned long  long  errs_common[30]  ;
        unsigned long  long  errs_v4[78]  ;
        unsigned long  long  errs_unknown  ;
    } nfs_errs;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX48
{
    unsigned long  long  errs_common[30]  ;
    unsigned long  long  errs_unknown  ;
};
#pragma pack(pop)
#pragma pack(4)
struct anonymous_typeX49
{
    unsigned long  long  errs_common[30]  ;
    unsigned long  long  errs_unknown  ;
};
#pragma pack(pop)
#pragma pack(4)
struct nfsrvstats
{
    unsigned long  long  srvrpccntv3[23]  ;
    unsigned long  long  srvrpc_errs  ;
    unsigned long  long  srv_errs  ;
    unsigned long  long  srvcache_inproghits  ;
    unsigned long  long  srvcache_idemdonehits  ;
    unsigned long  long  srvcache_nonidemdonehits  ;
    unsigned long  long  srvcache_misses  ;
    unsigned long  long  srvvop_writes  ;
    struct {
        unsigned long  long  errs_common[30]  ;
        unsigned long  long  errs_unknown  ;
    } nfs_errs;
};
#pragma pack(pop)
#pragma pack(4)
struct lockd_ans
{
    int la_version;
    int la_errno;
    unsigned long  long  la_xid  ;
    int la_flags;
    int  la_pid  ;
    long long int  la_start  ;
    long long int  la_len  ;
    int la_fh_len;
    unsigned char  la_fh[64]  ;
};
#pragma pack(pop)
#pragma pack(4)
struct lockd_notify
{
    int ln_version;
    int ln_flags;
    int ln_pad;
    int ln_addrcount;
    struct sockaddr_storage*  ln_addr  ;
};
#pragma pack(pop)
#pragma pack(4)
union anonymous_typeZ50
{
unsigned char g_guid[16];
unsigned int g_guid_asint[16/sizeof(unsigned int)];
};
#pragma pack(pop)
#pragma pack(4)
struct nfs_testmapid
{
    unsigned int  ntm_lookup  ;
    unsigned int  ntm_grpflag  ;
    unsigned int  ntm_id  ;
    unsigned int  pad  ;
    union {
        unsigned char g_guid[16];
        unsigned int g_guid_asint[16/sizeof(unsigned int)];
    } ntm_guid;
    char ntm_name[1024];
};
#pragma pack(pop)
/// variable definition ///
extern const struct in6_addr  in6addr_any  ;
extern const struct in6_addr  in6addr_loopback  ;
extern const struct in6_addr  in6addr_nodelocal_allnodes  ;
extern const struct in6_addr  in6addr_linklocal_allnodes  ;
extern const struct in6_addr  in6addr_linklocal_allrouters  ;
extern const struct in6_addr  in6addr_linklocal_allv2routers  ;
extern struct _res_9_ns_flagdata  _res_9_ns_flagdata[]  ;
extern char* telcmds[];
extern char* slc_names[];
extern char* authtype_names[];
extern char* encrypt_names[];
extern char* enctype_names[];
extern struct __sFILE*  __stdinp  ;
extern struct __sFILE*  __stdoutp  ;
extern struct __sFILE*  __stderrp  ;
extern const int sys_nerr;
extern const char* const sys_errlist[];
extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
extern const char* rl_library_version;
extern int rl_readline_version;
extern char* rl_readline_name;
extern struct __sFILE*  rl_instream  ;
extern struct __sFILE*  rl_outstream  ;
extern char* rl_line_buffer;
extern int rl_point;
extern int rl_end;
extern int history_base;
extern int history_length;
extern int max_input_history;
extern char* rl_basic_word_break_characters;
extern char* rl_completer_word_break_characters;
extern char* rl_completer_quote_characters;
extern int (*(*rl_completion_entry_function))(const char*,int)  ;
extern char* (*rl_completion_word_break_hook)();
extern char** (*(*rl_attempted_completion_function))(const char*,int,int)  ;
extern int rl_attempted_completion_over;
extern int rl_completion_type;
extern int rl_completion_query_items;
extern char* rl_special_prefixes;
extern int rl_completion_append_character;
extern int rl_inhibit_completion;
extern int (*(*rl_pre_input_hook))(const char*,int)  ;
extern int (*(*rl_startup_hook))(const char*,int)  ;
extern char* rl_terminal_name;
extern int rl_already_prompted;
extern char* rl_prompt;
extern struct _keymap_entry  emacs_standard_keymap[256]  ;
extern struct _keymap_entry  emacs_meta_keymap[256]  ;
extern struct _keymap_entry  emacs_ctlx_keymap[256]  ;
extern int rl_filename_completion_desired;
extern int rl_ignore_completion_duplicates;
extern int (*rl_getc_function)(struct __sFILE* );
extern void (*(*rl_redisplay_function))()  ;
extern void (*(*rl_completion_display_matches_hook))()  ;
extern void (*(*rl_prep_term_function))()  ;
extern void (*(*rl_deprep_term_function))()  ;
extern int readline_echoing_p;
extern int _rl_print_completions_horizontally;
extern int __mb_cur_max;
extern char* suboptarg;
extern int (*OSSL_provider_init)(const struct ossl_core_handle_st* ,const struct ossl_dispatch_st* ,const struct ossl_dispatch_st** ,void**)  ;
extern int*  __error(void);
extern int nfs_ticks;
// source head

// header function
int __darwin_check_fd_set_overflow(int , const void* , int );
int accept(int , struct sockaddr* restrict    , unsigned int* restrict    ) __asm("_" "accept"  );
int bind(int , const struct sockaddr*    , unsigned int    ) __asm("_" "bind" );
int connect(int , const struct sockaddr*    , unsigned int    ) __asm("_" "connect"  );
int getpeername(int , struct sockaddr* restrict    , unsigned int* restrict    ) __asm("_" "getpeername" );
int getsockname(int , struct sockaddr* restrict    , unsigned int* restrict    ) __asm("_" "getsockname" );
int getsockopt(int , int , int , void* restrict , unsigned int* restrict    );
int listen(int , int ) __asm("_" "listen" );
long  recv(int , void* , unsigned long  int    , int ) __asm("_" "recv"  );
long  recvfrom(int , void* , unsigned long  int    , int , struct sockaddr* restrict    , unsigned int* restrict    ) __asm("_" "recvfrom"  );
long  recvmsg(int , struct msghdr*    , int ) __asm("_" "recvmsg"  );
long  send(int , const void* , unsigned long  int    , int ) __asm("_" "send"  );
long  sendmsg(int , const struct msghdr*    , int ) __asm("_" "sendmsg"  );
long  sendto(int , const void* , unsigned long  int    , int , const struct sockaddr*    , unsigned int    ) __asm("_" "sendto"  );
int setsockopt(int , int , int , const void* , unsigned int    );
int shutdown(int , int );
int sockatmark(int );
int socket(int , int , int );
int socketpair(int , int , int , int* ) __asm("_" "socketpair" );
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
unsigned int  inet_addr(const char* );
char* inet_ntoa(struct in_addr    );
const char* inet_ntop(int , const void* , char* , unsigned int  __size  );
int inet_pton(int , const char* , void* );
int ascii2addr(int , const char* , void* );
char* addr2ascii(int , const void* , int __size, char* );
int inet_aton(const char* , struct in_addr*    );
unsigned int  inet_lnaof(struct in_addr    );
struct in_addr  inet_makeaddr(unsigned int    , unsigned int    );
unsigned int  inet_netof(struct in_addr    );
unsigned int  inet_network(const char* );
char* inet_net_ntop(int , const void* , int , char* , unsigned long  int  __size  );
int inet_net_pton(int , const char* , void* , unsigned long  int  __size  );
char* inet_neta(unsigned int    , char* , unsigned long  int  __size  );
unsigned int inet_nsap_addr(const char* , unsigned char* , int __maxlen);
char* inet_nsap_ntoa(int __binlen, const unsigned char* , char* );
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
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
int ether_hostton(const char* , struct ether_addr*    );
int ether_line(const char* , struct ether_addr*    , char* );
char* ether_ntoa(const struct ether_addr*    );
struct ether_addr*  ether_aton(const char* );
int ether_ntohost(char* , const struct ether_addr*    );
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
struct __sFILE*  funopen(const void* , int (*anonymous_lambda_var_nameZ2)(void*,char*,int), int (*anonymous_lambda_var_nameZ3)(void*,const char*,int), long long int  (*anonymous_lambda_var_nameZ4)(void*,long long int ,int), int (*anonymous_lambda_var_nameZ5)(void*));
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
int clock_getres(enum anonymous_typeY16  __clock_id  , struct timespec*  __res  );
int clock_gettime(enum anonymous_typeY16  __clock_id  , struct timespec*  __tp  );
unsigned long long int  clock_gettime_nsec_np(enum anonymous_typeY16  __clock_id  );
int clock_settime(enum anonymous_typeY16  __clock_id  , const struct timespec*  __tp  );
int timespec_get(struct timespec*  ts  , int base);
int adjtime(const struct timeval*    , struct timeval*    );
int futimes(int , const struct timeval*    );
int lutimes(const char* , const struct timeval*    );
int settimeofday(const struct timeval*    , const struct timezone*    );
int getitimer(int , struct itimerval*    );
int gettimeofday(struct timeval* restrict    , void* restrict );
int select(int , struct fd_set* restrict    , struct fd_set* restrict    , struct fd_set* restrict    , struct timeval* restrict    ) __asm("_" "select" "$DARWIN_EXTSN" )
#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_select.h"
;
int setitimer(int , const struct itimerval* restrict    , struct itimerval* restrict    );
int utimes(const char* , const struct timeval*    );
unsigned int if_nametoindex(const char* );
char* if_indextoname(unsigned int , char* );
struct if_nameindex*  if_nameindex();
void if_freenameindex(struct if_nameindex*    );
int ioctl(int , unsigned long  int , ...);
char* readline(const char* );
int rl_initialize();
void using_history();
int add_history(const char* );
void clear_history();
void stifle_history(int );
int unstifle_history();
int history_is_stifled();
int where_history();
struct _hist_entry*  current_history();
struct _hist_entry*  history_get(int );
struct _hist_entry*  remove_history(int );
struct _hist_entry*  replace_history_entry(int , const char* , void*    );
int history_total_bytes();
int history_set_pos(int );
struct _hist_entry*  previous_history();
struct _hist_entry*  next_history();
int history_search(const char* , int );
int history_search_prefix(const char* , int );
int history_search_pos(const char* , int , int );
int read_history(const char* );
int write_history(const char* );
int history_truncate_file(const char* , int );
int history_expand(char* , char** );
char** history_tokenize(const char* );
const char* get_history_event(const char* , int* , int );
char* history_arg_extract(int , int , const char* );
char* tilde_expand(char* );
char* filename_completion_function(const char* , int );
char* username_completion_function(const char* , int );
int rl_complete(int , int );
int rl_read_key();
char** completion_matches(const char* , char* (*(*anonymous_var_nameY684))(const char*,int)  );
void rl_display_match_list(char** , int , int );
int rl_insert(int , int );
int rl_insert_text(const char* );
void rl_reset_terminal(const char* );
int rl_bind_key(int , int (*(*anonymous_var_nameY693))(int,int)  );
int rl_newline(int , int );
void rl_callback_read_char();
void rl_callback_handler_install(const char* , void (*(*anonymous_var_nameY697))(char*)  );
void rl_callback_handler_remove();
void rl_redisplay();
int rl_get_previous_history(int , int );
void rl_prep_terminal(int );
void rl_deprep_terminal();
int rl_read_init_file(const char* );
int rl_parse_and_bind(const char* );
int rl_variable_bind(const char* , const char* );
void rl_stuff_char(int );
int rl_add_defun(const char* , int (*(*anonymous_var_nameY707))(const char*,int)  , int );
struct anonymous_typeX16*  history_get_history_state();
void rl_get_screen_size(int* , int* );
void rl_set_screen_size(int , int );
char* rl_filename_completion_function(const char* , int );
int _rl_abort_internal();
int _rl_qsort_string_compare(char** , char** );
char** rl_completion_matches(const char* , char* (*(*anonymous_var_nameY718))(const char*,int)  );
void rl_forced_update_display();
int rl_set_prompt(const char* );
int rl_on_new_line();
int rl_kill_text(int , int );
struct _keymap_entry*  rl_get_keymap();
void rl_set_keymap(struct _keymap_entry*    );
struct _keymap_entry*  rl_make_bare_keymap();
int rl_generic_bind(int , const char* , const char* , struct _keymap_entry*    );
int rl_bind_key_in_map(int , int (*(*anonymous_var_nameY728))(int,int)  , struct _keymap_entry*    );
void rl_cleanup_after_signal();
void rl_free_line_state();
long  int  imaxabs(long  int  j  );
struct anonymous_typeX23  imaxdiv(long  int  __numer  , long  int  __denom  );
long  int  strtoimax(const char* restrict __nptr, char** restrict __endptr, int __base);
unsigned long  int  strtoumax(const char* restrict __nptr, char** restrict __endptr, int __base);
long  int  wcstoimax(const int* restrict  __nptr  , int** restrict  __endptr  , int __base);
unsigned long  int  wcstoumax(const int* restrict  __nptr  , int** restrict  __endptr  , int __base);
int getpriority(int , unsigned int    );
int getiopolicy_np(int , int );
int getrlimit(int , struct rlimit*    ) __asm("_" "getrlimit" );
int getrusage(int , struct rusage*    );
int setpriority(int , unsigned int    , int );
int setiopolicy_np(int , int , int );
int setrlimit(int , const struct rlimit*    ) __asm("_" "setrlimit" );
int  wait(int* ) __asm("_" "wait"  );
int  waitpid(int    , int* , int ) __asm("_" "waitpid"  );
int waitid(enum anonymous_typeY23    , unsigned int    , struct __siginfo*    , int ) __asm("_" "waitid"  );
int  wait3(int* , int , struct rusage*    );
int  wait4(int    , int* , int , struct rusage*    );
void* alloca(unsigned long  int  __size  );
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
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* );
int atoi(const char* );
long atol(const char* );
long long atoll(const char* );
void* bsearch(const void* __key, const void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
struct anonymous_typeX26  div(int , int ) __attribute__((__const__));
void exit(int ) __attribute__((__noreturn__));
char* getenv(const char* );
long labs(long ) __attribute__((__const__));
struct anonymous_typeX27  ldiv(long , long ) __attribute__((__const__));
long long llabs(long  long );
struct anonymous_typeX28  lldiv(long  long , long  long );
int mblen(const char* __s, unsigned long  int  __n  );
unsigned long  int  mbstowcs(int* restrict    , const char* restrict , unsigned long  int  __n  );
int mbtowc(int* restrict    , const char* restrict , unsigned long  int  __n  );
void qsort(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
void quick_exit(int ) __attribute__((__noreturn__));
int rand();
void srand(unsigned int );
double strtod(const char* , char** ) __asm("_" "strtod" );
float strtof(const char* , char** ) __asm("_" "strtof" );
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* , char** );
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* ) __asm("_" "system"  );
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
int putenv(char* ) __asm("_" "putenv" );
long random();
int rand_r(unsigned int* );
char* realpath(const char* restrict , char* restrict ) __asm("_" "realpath" "$DARWIN_EXTSN");
unsigned short int* seed48(unsigned short int [3]);
int setenv(const char* __name, const char* __value, int __overwrite) __asm("_" "setenv" );
void setkey(const char* ) __asm("_" "setkey" );
char* setstate(const char* );
void srand48(long );
void srandom(unsigned int );
int unlockpt(int );
int unsetenv(const char* ) __asm("_" "unsetenv" );
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
int daemon(int , int ) __asm("_" "daemon" )   ;
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
int OPENSSL_sk_num(const struct stack_st*    );
void* OPENSSL_sk_value(const struct stack_st*    , int );
void* OPENSSL_sk_set(struct stack_st*  st  , int i, const void* data);
struct stack_st*  OPENSSL_sk_new(int (*cmp)(const void*,const void*)  );
struct stack_st*  OPENSSL_sk_new_null();
struct stack_st*  OPENSSL_sk_new_reserve(int (*c)(const void*,const void*)  , int n);
struct stack_st*  OPENSSL_sk_set_thunks(struct stack_st*  st  , void (*f_thunk)(void (*)(void*) ,void*)  );
int OPENSSL_sk_reserve(struct stack_st*  st  , int n);
void OPENSSL_sk_free(struct stack_st*    );
void OPENSSL_sk_pop_free(struct stack_st*  st  , void (*func)(void*)  );
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
int ERR_load_ENGINE_strings();
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
int CRYPTO_atomic_add64(unsigned long  long*  val  , unsigned long  long  op  , unsigned long  long*  ret  , void*  lock  );
int CRYPTO_atomic_and(unsigned long  long*  val  , unsigned long  long  op  , unsigned long  long*  ret  , void*  lock  );
int CRYPTO_atomic_or(unsigned long  long*  val  , unsigned long  long  op  , unsigned long  long*  ret  , void*  lock  );
int CRYPTO_atomic_load(unsigned long  long*  val  , unsigned long  long*  ret  , void*  lock  );
int CRYPTO_atomic_load_int(int* val, int* ret, void*  lock  );
int CRYPTO_atomic_store(unsigned long  long*  dst  , unsigned long  long  val  , void*  lock  );
unsigned long  int  OPENSSL_strlcpy(char* dst, const char* src, unsigned long  int  siz  );
unsigned long  int  OPENSSL_strlcat(char* dst, const char* src, unsigned long  int  siz  );
unsigned long  int  OPENSSL_strnlen(const char* str, unsigned long  int  maxlen  );
int OPENSSL_strtoul(const char* str, char** endptr, int base, unsigned long  int* num);
int OPENSSL_buf2hexstr_ex(char* str, unsigned long  int  str_n  , unsigned long  int*  strlength  , const unsigned char* buf, unsigned long  int  buflen  , const char sep);
char* OPENSSL_buf2hexstr(const unsigned char* buf, long buflen);
int OPENSSL_hexstr2buf_ex(unsigned char* buf, unsigned long  int  buf_n  , unsigned long  int*  buflen  , const char* str, const char sep);
unsigned char* OPENSSL_hexstr2buf(const char* str, long* buflen);
int OPENSSL_hexchar2int(unsigned char c);
int OPENSSL_strcasecmp(const char* s1, const char* s2);
int OPENSSL_strncasecmp(const char* s1, const char* s2, unsigned long  int  n  );
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
int CRYPTO_set_mem_functions(void* (*malloc_fn)(unsigned long  int ,const char*,int)  , void* (*realloc_fn)(void*,unsigned long  int ,const char*,int)  , void (*free_fn)(void*,const char*,int)  );
void CRYPTO_get_mem_functions(void* (*(*malloc_fn))(unsigned long  int ,const char*,int)  , void* (*(*realloc_fn))(void*,unsigned long  int ,const char*,int)  , void (*(*free_fn))(void*,const char*,int)  );
__attribute__((__malloc__))  void* CRYPTO_malloc(unsigned long  int  num  , const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_zalloc(unsigned long  int  num  , const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_malloc_array(unsigned long  int  num  , unsigned long  int  size  , const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_calloc(unsigned long  int  num  , unsigned long  int  size  , const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_aligned_alloc(unsigned long  int  num  , unsigned long  int  align  , void** freeptr, const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_aligned_alloc_array(unsigned long  int  num  , unsigned long  int  size  , unsigned long  int  align  , void** freeptr, const char* file, int line);
void* CRYPTO_memdup(const void* str, unsigned long  int  siz  , const char* file, int line);
char* CRYPTO_strdup(const char* str, const char* file, int line);
char* CRYPTO_strndup(const char* str, unsigned long  int  s  , const char* file, int line);
void CRYPTO_free(void* ptr, const char* file, int line);
void CRYPTO_clear_free(void* ptr, unsigned long  int  num  , const char* file, int line);
void* CRYPTO_realloc(void* addr, unsigned long  int  num  , const char* file, int line);
void* CRYPTO_clear_realloc(void* addr, unsigned long  int  old_num  , unsigned long  int  num  , const char* file, int line);
void* CRYPTO_realloc_array(void* addr, unsigned long  int  num  , unsigned long  int  size  , const char* file, int line);
void* CRYPTO_clear_realloc_array(void* addr, unsigned long  int  old_num  , unsigned long  int  num  , unsigned long  int  size  , const char* file, int line);
int CRYPTO_secure_malloc_init(unsigned long  int  sz  , unsigned long  int  minsize  );
int CRYPTO_secure_malloc_done();
__attribute__((__malloc__))  void* CRYPTO_secure_malloc(unsigned long  int  num  , const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_secure_zalloc(unsigned long  int  num  , const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_secure_malloc_array(unsigned long  int  num  , unsigned long  int  size  , const char* file, int line);
__attribute__((__malloc__))  void* CRYPTO_secure_calloc(unsigned long  int  num  , unsigned long  int  size  , const char* file, int line);
void CRYPTO_secure_free(void* ptr, const char* file, int line);
void CRYPTO_secure_clear_free(void* ptr, unsigned long  int  num  , const char* file, int line);
int CRYPTO_secure_allocated(const void* ptr);
int CRYPTO_secure_malloc_initialized();
unsigned long  int  CRYPTO_secure_actual_size(void* ptr);
unsigned long  int  CRYPTO_secure_used();
void OPENSSL_cleanse(void* ptr, unsigned long  int  len  );
_Noreturn  void OPENSSL_die(const char* assertion, const char* file, int line);
int OPENSSL_isservice();
void OPENSSL_init();
void OPENSSL_fork_prepare();
void OPENSSL_fork_parent();
void OPENSSL_fork_child();
struct tm*  OPENSSL_gmtime(const long*  timer  , struct tm*  result  );
int OPENSSL_gmtime_adj(struct tm*  tm  , int offset_day, long offset_sec);
int OPENSSL_gmtime_diff(int* pday, int* psec, const struct tm*  from  , const struct tm*  to  );
int CRYPTO_memcmp(const void* in_a, const void* in_b, unsigned long  int  len  );
void OPENSSL_cleanup();
int OPENSSL_init_crypto(unsigned long  long  opts  , const struct ossl_init_settings_st*  settings  );
int OPENSSL_atexit(void (*handler)());
void OPENSSL_thread_stop();
void OPENSSL_thread_stop_ex(struct ossl_lib_ctx_st*  ctx  );
struct ossl_init_settings_st*  OPENSSL_INIT_new();
int OPENSSL_INIT_set_config_filename(struct ossl_init_settings_st*  settings  , const char* config_filename);
void OPENSSL_INIT_set_config_file_flags(struct ossl_init_settings_st*  settings  , unsigned long  int flags);
int OPENSSL_INIT_set_config_appname(struct ossl_init_settings_st*  settings  , const char* config_appname);
void OPENSSL_INIT_free(struct ossl_init_settings_st*  settings  );
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
int pthread_atfork(void (*anonymous_lambda_var_nameZ8)(), void (*anonymous_lambda_var_nameZ9)(), void (*anonymous_lambda_var_nameZ10)());
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
int pthread_cancel(struct _opaque_pthread_t*    ) __asm("_" "pthread_cancel" );
int pthread_cond_broadcast(struct _opaque_pthread_cond_t*    );
int pthread_cond_destroy(struct _opaque_pthread_cond_t*    );
int pthread_cond_init(struct _opaque_pthread_cond_t* restrict    , const struct _opaque_pthread_condattr_t* restrict    ) __asm("_" "pthread_cond_init" );
int pthread_cond_signal(struct _opaque_pthread_cond_t*    );
int pthread_cond_timedwait(struct _opaque_pthread_cond_t* restrict    , struct _opaque_pthread_mutex_t* restrict    , const struct timespec* restrict    ) __asm("_" "pthread_cond_timedwait"  );
int pthread_cond_wait(struct _opaque_pthread_cond_t* restrict    , struct _opaque_pthread_mutex_t* restrict    ) __asm("_" "pthread_cond_wait"  );
int pthread_condattr_destroy(struct _opaque_pthread_condattr_t*    );
int pthread_condattr_init(struct _opaque_pthread_condattr_t*    );
int pthread_condattr_getpshared(const struct _opaque_pthread_condattr_t* restrict    , int* restrict );
int pthread_condattr_setpshared(struct _opaque_pthread_condattr_t*    , int );
int pthread_create(struct _opaque_pthread_t** restrict    , const struct _opaque_pthread_attr_t* restrict    , void* (*anonymous_lambda_var_nameZ11)(void*), void* restrict );
int pthread_detach(struct _opaque_pthread_t*    );
int pthread_equal(struct _opaque_pthread_t*    , struct _opaque_pthread_t*    );
void pthread_exit(void* ) __attribute__((__noreturn__));
int pthread_getconcurrency();
int pthread_getschedparam(struct _opaque_pthread_t*    , int* restrict , struct sched_param* restrict    );
void* pthread_getspecific(unsigned long  int    );
int pthread_join(struct _opaque_pthread_t*    , void** ) __asm("_" "pthread_join"  );
int pthread_key_create(unsigned long  int*    , void (*anonymous_lambda_var_nameZ12)(void*));
int pthread_key_delete(unsigned long  int    );
int pthread_mutex_destroy(struct _opaque_pthread_mutex_t*    );
int pthread_mutex_getprioceiling(const struct _opaque_pthread_mutex_t* restrict    , int* restrict );
int pthread_mutex_init(struct _opaque_pthread_mutex_t* restrict    , const struct _opaque_pthread_mutexattr_t* restrict    );
int pthread_mutex_lock(struct _opaque_pthread_mutex_t*    );
int pthread_mutex_setprioceiling(struct _opaque_pthread_mutex_t* restrict    , int , int* restrict );
int pthread_mutex_trylock(struct _opaque_pthread_mutex_t*    );
int pthread_mutex_unlock(struct _opaque_pthread_mutex_t*    );
int pthread_mutexattr_destroy(struct _opaque_pthread_mutexattr_t*    ) __asm("_" "pthread_mutexattr_destroy" );
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
int pthread_once(struct _opaque_pthread_once_t*    , void (*anonymous_lambda_var_nameZ13)());
int pthread_rwlock_destroy(struct _opaque_pthread_rwlock_t*    ) __asm("_" "pthread_rwlock_destroy" );
int pthread_rwlock_init(struct _opaque_pthread_rwlock_t* restrict    , const struct _opaque_pthread_rwlockattr_t* restrict    ) __asm("_" "pthread_rwlock_init" );
int pthread_rwlock_rdlock(struct _opaque_pthread_rwlock_t*    ) __asm("_" "pthread_rwlock_rdlock" );
int pthread_rwlock_tryrdlock(struct _opaque_pthread_rwlock_t*    ) __asm("_" "pthread_rwlock_tryrdlock" );
int pthread_rwlock_trywrlock(struct _opaque_pthread_rwlock_t*    ) __asm("_" "pthread_rwlock_trywrlock" );
int pthread_rwlock_wrlock(struct _opaque_pthread_rwlock_t*    ) __asm("_" "pthread_rwlock_wrlock" );
int pthread_rwlock_unlock(struct _opaque_pthread_rwlock_t*    ) __asm("_" "pthread_rwlock_unlock" );
int pthread_rwlockattr_destroy(struct _opaque_pthread_rwlockattr_t*    );
int pthread_rwlockattr_getpshared(const struct _opaque_pthread_rwlockattr_t* restrict    , int* restrict );
int pthread_rwlockattr_init(struct _opaque_pthread_rwlockattr_t*    );
int pthread_rwlockattr_setpshared(struct _opaque_pthread_rwlockattr_t*    , int );
struct _opaque_pthread_t*  pthread_self();
int pthread_setcancelstate(int , int* ) __asm("_" "pthread_setcancelstate" );
int pthread_setcanceltype(int , int* ) __asm("_" "pthread_setcanceltype" );
int pthread_setconcurrency(int );
int pthread_setschedparam(struct _opaque_pthread_t*    , int , const struct sched_param*    );
int pthread_setspecific(unsigned long  int    , const void* );
void pthread_testcancel() __asm("_" "pthread_testcancel" );
int pthread_is_threaded_np();
int pthread_threadid_np(struct _opaque_pthread_t*    , unsigned long long int*    );
int pthread_getname_np(struct _opaque_pthread_t*    , char* , unsigned long  int    );
int pthread_setname_np(const char* );
int pthread_main_np();
unsigned int  pthread_mach_thread_np(struct _opaque_pthread_t*    );
unsigned long  int  pthread_get_stacksize_np(struct _opaque_pthread_t*    );
void* pthread_get_stackaddr_np(struct _opaque_pthread_t*    );
int pthread_cond_signal_thread_np(struct _opaque_pthread_cond_t*    , struct _opaque_pthread_t*    );
int pthread_cond_timedwait_relative_np(struct _opaque_pthread_cond_t*    , struct _opaque_pthread_mutex_t*    , const struct timespec*    );
int pthread_create_suspended_np(struct _opaque_pthread_t**    , const struct _opaque_pthread_attr_t*    , void* (*anonymous_lambda_var_nameZ14)(void*), void* );
int pthread_kill(struct _opaque_pthread_t*    , int );
struct _opaque_pthread_t*  pthread_from_mach_thread_np(unsigned int    );
int pthread_sigmask(int , const unsigned int*    , unsigned int*    ) __asm("_" "pthread_sigmask" );
void pthread_yield_np();
void pthread_jit_write_protect_np(int enabled);
int pthread_jit_write_protect_supported_np();
int pthread_jit_write_with_callback_np(int (*callback)(void*)  , void* ctx);
void pthread_jit_write_freeze_callbacks_np();
int pthread_cpu_number_np(unsigned long  int*  cpu_number_out  );
int CRYPTO_THREAD_run_once(struct _opaque_pthread_once_t*  once  , void (*init)());
int CRYPTO_THREAD_init_local(unsigned long  int*  key  , void (*cleanup)(void*));
void* CRYPTO_THREAD_get_local(unsigned long  int*  key  );
int CRYPTO_THREAD_set_local(unsigned long  int*  key  , void* val);
int CRYPTO_THREAD_cleanup_local(unsigned long  int*  key  );
struct _opaque_pthread_t*  CRYPTO_THREAD_get_current_id();
int CRYPTO_THREAD_compare_id(struct _opaque_pthread_t*  a  , struct _opaque_pthread_t*  b  );
struct ossl_lib_ctx_st*  OSSL_LIB_CTX_new();
struct ossl_lib_ctx_st*  OSSL_LIB_CTX_new_from_dispatch(const struct ossl_core_handle_st*  handle  , const struct ossl_dispatch_st*  in  );
struct ossl_lib_ctx_st*  OSSL_LIB_CTX_new_child(const struct ossl_core_handle_st*  handle  , const struct ossl_dispatch_st*  in  );
int OSSL_LIB_CTX_load_config(struct ossl_lib_ctx_st*  ctx  , const char* config_file);
void OSSL_LIB_CTX_free(struct ossl_lib_ctx_st*    );
struct ossl_lib_ctx_st*  OSSL_LIB_CTX_get0_global_default();
struct ossl_lib_ctx_st*  OSSL_LIB_CTX_set0_default(struct ossl_lib_ctx_st*  libctx  );
int OSSL_LIB_CTX_get_conf_diagnostics(struct ossl_lib_ctx_st*  ctx  );
void OSSL_LIB_CTX_set_conf_diagnostics(struct ossl_lib_ctx_st*  ctx  , int value);
void OSSL_sleep(unsigned long  long  millis  );
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
long (*BIO_get_callback_ex(const struct bio_st*  b  ))(struct bio_st* ,int,const char*,unsigned long  int ,int,long,int,unsigned long  int* ) ;
void BIO_set_callback_ex(struct bio_st*  b  , long (*callback)(struct bio_st* ,int,const char*,unsigned long  int ,int,long,int,unsigned long  int* )  );
long BIO_debug_callback_ex(struct bio_st*  bio  , int oper, const char* argp, unsigned long  int  len  , int argi, long argl, int ret, unsigned long  int*  processed  );
char* BIO_get_callback_arg(const struct bio_st*  b  );
void BIO_set_callback_arg(struct bio_st*  b  , char* arg);
const char* BIO_method_name(const struct bio_st*  b  );
int BIO_method_type(const struct bio_st*  b  );
unsigned long  int  BIO_ctrl_pending(struct bio_st*  b  );
unsigned long  int  BIO_ctrl_wpending(struct bio_st*  b  );
unsigned long  int  BIO_ctrl_get_write_guarantee(struct bio_st*  b  );
unsigned long  int  BIO_ctrl_get_read_request(struct bio_st*  b  );
int BIO_ctrl_reset_read_request(struct bio_st*  b  );
int BIO_set_ex_data(struct bio_st*  bio  , int idx, void* data);
void* BIO_get_ex_data(const struct bio_st*  bio  , int idx);
unsigned long  long  BIO_number_read(struct bio_st*  bio  );
unsigned long  long  BIO_number_written(struct bio_st*  bio  );
int BIO_asn1_set_prefix(struct bio_st*  b  , int (*(*prefix))(struct bio_st* ,unsigned char**,int*,void*)  , int (*(*prefix_free))(struct bio_st* ,unsigned char**,int*,void*)  );
int BIO_asn1_get_prefix(struct bio_st*  b  , int (*(*(*pprefix)))(struct bio_st* ,unsigned char**,int*,void*)  , int (*(*(*pprefix_free)))(struct bio_st* ,unsigned char**,int*,void*)  );
int BIO_asn1_set_suffix(struct bio_st*  b  , int (*(*suffix))(struct bio_st* ,unsigned char**,int*,void*)  , int (*(*suffix_free))(struct bio_st* ,unsigned char**,int*,void*)  );
int BIO_asn1_get_suffix(struct bio_st*  b  , int (*(*(*psuffix)))(struct bio_st* ,unsigned char**,int*,void*)  , int (*(*(*psuffix_free)))(struct bio_st* ,unsigned char**,int*,void*)  );
const struct bio_method_st*  BIO_s_file();
struct bio_st*  BIO_new_file(const char* filename, const char* mode);
struct bio_st*  BIO_new_from_core_bio(struct ossl_lib_ctx_st*  libctx  , struct ossl_core_bio_st*  corebio  );
struct bio_st*  BIO_new_fp(struct __sFILE*  stream  , int close_flag);
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
int BIO_read_ex(struct bio_st*  b  , void* data, unsigned long  int  dlen  , unsigned long  int*  readbytes  );
int BIO_recvmmsg(struct bio_st*  b  , struct bio_msg_st*  msg  , unsigned long  int  stride  , unsigned long  int  num_msg  , unsigned long  long  flags  , unsigned long  int*  msgs_processed  );
int BIO_gets(struct bio_st*  bp  , char* buf, int size);
int BIO_get_line(struct bio_st*  bio  , char* buf, int size);
int BIO_write(struct bio_st*  b  , const void* data, int dlen);
int BIO_write_ex(struct bio_st*  b  , const void* data, unsigned long  int  dlen  , unsigned long  int*  written  );
int BIO_sendmmsg(struct bio_st*  b  , struct bio_msg_st*  msg  , unsigned long  int  stride  , unsigned long  int  num_msg  , unsigned long  long  flags  , unsigned long  int*  msgs_processed  );
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
int BIO_sock_should_retry(int i);
int BIO_sock_non_fatal_error(int error);
int BIO_err_is_non_fatal(unsigned int errcode);
int BIO_socket_wait(int fd, int for_read, long  max_time  );
int BIO_wait(struct bio_st*  bio  , long  max_time  , unsigned int nap_milliseconds);
int BIO_do_connect_retry(struct bio_st*  bio  , int timeout, int nap_milliseconds);
int BIO_fd_should_retry(int i);
int BIO_fd_non_fatal_error(int error);
int BIO_dump_cb(int (*cb)(const void*,unsigned long  int ,void*), void* u, const void* s, int len);
int BIO_dump_indent_cb(int (*cb)(const void*,unsigned long  int ,void*), void* u, const void* s, int len, int indent);
int BIO_dump(struct bio_st*  b  , const void* bytes, int len);
int BIO_dump_indent(struct bio_st*  b  , const void* bytes, int len, int indent);
int BIO_dump_fp(struct __sFILE*  fp  , const void* s, int len);
int BIO_dump_indent_fp(struct __sFILE*  fp  , const void* s, int len, int indent);
int BIO_hex_string(struct bio_st*  out  , int indent, int width, const void* data, int datalen);
union bio_addr_st*  BIO_ADDR_new();
int BIO_ADDR_copy(union bio_addr_st*  dst  , const union bio_addr_st*  src  );
union bio_addr_st*  BIO_ADDR_dup(const union bio_addr_st*  ap  );
int BIO_ADDR_rawmake(union bio_addr_st*  ap  , int family, const void* where, unsigned long  int  wherelen  , unsigned short int port);
void BIO_ADDR_free(union bio_addr_st*    );
void BIO_ADDR_clear(union bio_addr_st*  ap  );
int BIO_ADDR_family(const union bio_addr_st*  ap  );
int BIO_ADDR_rawaddress(const union bio_addr_st*  ap  , void* p, unsigned long  int*  l  );
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
int BIO_new_bio_pair(struct bio_st**  bio1  , unsigned long  int  writebuf1  , struct bio_st**  bio2  , unsigned long  int  writebuf2  );
int BIO_new_bio_dgram_pair(struct bio_st**  bio1  , unsigned long  int  writebuf1  , struct bio_st**  bio2  , unsigned long  int  writebuf2  );
void BIO_copy_next_retry(struct bio_st*  b  );
int BIO_printf(struct bio_st*  bio  , const char* format, ...);
int BIO_vprintf(struct bio_st*  bio  , const char* format, __builtin_va_list  args  );
int BIO_snprintf(char* buf, unsigned long  int  n  , const char* format, ...);
int BIO_vsnprintf(char* buf, unsigned long  int  n  , const char* format, __builtin_va_list  args  );
struct bio_method_st*  BIO_meth_new(int type, const char* name);
void BIO_meth_free(struct bio_method_st*  biom  );
int BIO_meth_set_write(struct bio_method_st*  biom  , int (*write)(struct bio_st* ,const char*,int));
int BIO_meth_set_write_ex(struct bio_method_st*  biom  , int (*bwrite)(struct bio_st* ,const char*,unsigned long  int ,unsigned long  int* ));
int BIO_meth_set_sendmmsg(struct bio_method_st*  biom  , int (*f)(struct bio_st* ,struct bio_msg_st* ,unsigned long  int ,unsigned long  int ,unsigned long  long ,unsigned long  int* ));
int BIO_meth_set_read(struct bio_method_st*  biom  , int (*read)(struct bio_st* ,char*,int));
int BIO_meth_set_read_ex(struct bio_method_st*  biom  , int (*bread)(struct bio_st* ,char*,unsigned long  int ,unsigned long  int* ));
int BIO_meth_set_recvmmsg(struct bio_method_st*  biom  , int (*f)(struct bio_st* ,struct bio_msg_st* ,unsigned long  int ,unsigned long  int ,unsigned long  long ,unsigned long  int* ));
int BIO_meth_set_puts(struct bio_method_st*  biom  , int (*puts)(struct bio_st* ,const char*));
int BIO_meth_set_gets(struct bio_method_st*  biom  , int (*ossl_gets)(struct bio_st* ,char*,int));
int BIO_meth_set_ctrl(struct bio_method_st*  biom  , long (*ctrl)(struct bio_st* ,int,long,void*));
int BIO_meth_set_create(struct bio_method_st*  biom  , int (*create)(struct bio_st* ));
int BIO_meth_set_destroy(struct bio_method_st*  biom  , int (*destroy)(struct bio_st* ));
int BIO_meth_set_callback_ctrl(struct bio_method_st*  biom  , long (*callback_ctrl)(struct bio_st* ,int,int (*(*))(struct bio_st* ,int,int) ));
int (*BIO_meth_get_write(const struct bio_method_st*  _function_pointer_result_var_name_a3  ))(struct bio_st* ,const char*,int);
int (*BIO_meth_get_write_ex(const struct bio_method_st*  _function_pointer_result_var_name_a4  ))(struct bio_st* ,const char*,unsigned long  int ,unsigned long  int* );
int (*BIO_meth_get_sendmmsg(const struct bio_method_st*  _function_pointer_result_var_name_a5  ))(struct bio_st* ,struct bio_msg_st* ,unsigned long  int ,unsigned long  int ,unsigned long  long ,unsigned long  int* );
int (*BIO_meth_get_read(const struct bio_method_st*  _function_pointer_result_var_name_a6  ))(struct bio_st* ,char*,int);
int (*BIO_meth_get_read_ex(const struct bio_method_st*  _function_pointer_result_var_name_a7  ))(struct bio_st* ,char*,unsigned long  int ,unsigned long  int* );
int (*BIO_meth_get_recvmmsg(const struct bio_method_st*  _function_pointer_result_var_name_a8  ))(struct bio_st* ,struct bio_msg_st* ,unsigned long  int ,unsigned long  int ,unsigned long  long ,unsigned long  int* );
int (*BIO_meth_get_puts(const struct bio_method_st*  _function_pointer_result_var_name_a9  ))(struct bio_st* ,const char*);
int (*BIO_meth_get_gets(const struct bio_method_st*  _function_pointer_result_var_name_a10  ))(struct bio_st* ,char*,int);
long (*BIO_meth_get_ctrl(const struct bio_method_st*  _function_pointer_result_var_name_a11  ))(struct bio_st* ,int,long,void*);
int (*BIO_meth_get_create(const struct bio_method_st*  _function_pointer_result_var_name_a12  ))(struct bio_st* );
int (*BIO_meth_get_destroy(const struct bio_method_st*  _function_pointer_result_var_name_a13  ))(struct bio_st* );
long (*BIO_meth_get_callback_ctrl(const struct bio_method_st*  _function_pointer_result_var_name_a14  ))(struct bio_st* ,int,int (*(*))(struct bio_st* ,int,int) );
struct buf_mem_st*  BUF_MEM_new();
struct buf_mem_st*  BUF_MEM_new_ex(unsigned long  int flags);
void BUF_MEM_free(struct buf_mem_st*  a  );
unsigned long  int  BUF_MEM_grow(struct buf_mem_st*  str  , unsigned long  int  len  );
unsigned long  int  BUF_MEM_grow_clean(struct buf_mem_st*  str  , unsigned long  int  len  );
void BUF_reverse(unsigned char* out, const unsigned char* in, unsigned long  int  siz  );
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
int BN_print_fp(struct __sFILE*  fp  , const struct bignum_st*  a  );
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
int BN_GF2m_add(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  );
int BN_GF2m_mod(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  );
int BN_GF2m_mod_mul(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_GF2m_mod_sqr(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_GF2m_mod_inv(struct bignum_st*  r  , const struct bignum_st*  b  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_GF2m_mod_div(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_GF2m_mod_exp(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_GF2m_mod_sqrt(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_GF2m_mod_solve_quad(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  p  , struct bignum_ctx*  ctx  );
int BN_GF2m_mod_arr(struct bignum_st*  r  , const struct bignum_st*  a  , const int p[]);
int BN_GF2m_mod_mul_arr(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const int p[], struct bignum_ctx*  ctx  );
int BN_GF2m_mod_sqr_arr(struct bignum_st*  r  , const struct bignum_st*  a  , const int p[], struct bignum_ctx*  ctx  );
int BN_GF2m_mod_inv_arr(struct bignum_st*  r  , const struct bignum_st*  b  , const int p[], struct bignum_ctx*  ctx  );
int BN_GF2m_mod_div_arr(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const int p[], struct bignum_ctx*  ctx  );
int BN_GF2m_mod_exp_arr(struct bignum_st*  r  , const struct bignum_st*  a  , const struct bignum_st*  b  , const int p[], struct bignum_ctx*  ctx  );
int BN_GF2m_mod_sqrt_arr(struct bignum_st*  r  , const struct bignum_st*  a  , const int p[], struct bignum_ctx*  ctx  );
int BN_GF2m_mod_solve_quad_arr(struct bignum_st*  r  , const struct bignum_st*  a  , const int p[], struct bignum_ctx*  ctx  );
int BN_GF2m_poly2arr(const struct bignum_st*  a  , int p[], int max);
int BN_GF2m_arr2poly(const int p[], struct bignum_st*  a  );
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
int (*BN_nist_mod_func(const struct bignum_st*  _function_pointer_result_var_name_a15  ))(struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* );
int BN_generate_dsa_nonce(struct bignum_st*  out  , const struct bignum_st*  range  , const struct bignum_st*  priv  , const unsigned char* message, unsigned long  int  message_len  , struct bignum_ctx*  ctx  );
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
struct ossl_param_st  OSSL_PARAM_construct_int64(const char* key, long long*  buf  );
struct ossl_param_st  OSSL_PARAM_construct_uint64(const char* key, unsigned long  long*  buf  );
struct ossl_param_st  OSSL_PARAM_construct_size_t(const char* key, unsigned long  int*  buf  );
struct ossl_param_st  OSSL_PARAM_construct_time_t(const char* key, long*  buf  );
struct ossl_param_st  OSSL_PARAM_construct_BN(const char* key, unsigned char* buf, unsigned long  int  bsize  );
struct ossl_param_st  OSSL_PARAM_construct_double(const char* key, double* buf);
struct ossl_param_st  OSSL_PARAM_construct_utf8_string(const char* key, char* buf, unsigned long  int  bsize  );
struct ossl_param_st  OSSL_PARAM_construct_utf8_ptr(const char* key, char** buf, unsigned long  int  bsize  );
struct ossl_param_st  OSSL_PARAM_construct_octet_string(const char* key, void* buf, unsigned long  int  bsize  );
struct ossl_param_st  OSSL_PARAM_construct_octet_ptr(const char* key, void** buf, unsigned long  int  bsize  );
struct ossl_param_st  OSSL_PARAM_construct_end();
int OSSL_PARAM_allocate_from_text(struct ossl_param_st*  to  , const struct ossl_param_st*  paramdefs  , const char* key, const char* value, unsigned long  int  value_n  , int* found);
int OSSL_PARAM_print_to_bio(const struct ossl_param_st*  params  , struct bio_st*  bio  , int print_values);
int OSSL_PARAM_get_int(const struct ossl_param_st*  p  , int* val);
int OSSL_PARAM_get_uint(const struct ossl_param_st*  p  , unsigned int* val);
int OSSL_PARAM_get_long(const struct ossl_param_st*  p  , long  int* val);
int OSSL_PARAM_get_ulong(const struct ossl_param_st*  p  , unsigned long  int* val);
int OSSL_PARAM_get_int32(const struct ossl_param_st*  p  , int*  val  );
int OSSL_PARAM_get_uint32(const struct ossl_param_st*  p  , unsigned int*  val  );
int OSSL_PARAM_get_int64(const struct ossl_param_st*  p  , long long*  val  );
int OSSL_PARAM_get_uint64(const struct ossl_param_st*  p  , unsigned long  long*  val  );
int OSSL_PARAM_get_size_t(const struct ossl_param_st*  p  , unsigned long  int*  val  );
int OSSL_PARAM_get_time_t(const struct ossl_param_st*  p  , long*  val  );
int OSSL_PARAM_set_int(struct ossl_param_st*  p  , int val);
int OSSL_PARAM_set_uint(struct ossl_param_st*  p  , unsigned int val);
int OSSL_PARAM_set_long(struct ossl_param_st*  p  , long  int val);
int OSSL_PARAM_set_ulong(struct ossl_param_st*  p  , unsigned long  int val);
int OSSL_PARAM_set_int32(struct ossl_param_st*  p  , int  val  );
int OSSL_PARAM_set_uint32(struct ossl_param_st*  p  , unsigned int  val  );
int OSSL_PARAM_set_int64(struct ossl_param_st*  p  , long long  val  );
int OSSL_PARAM_set_uint64(struct ossl_param_st*  p  , unsigned long  long  val  );
int OSSL_PARAM_set_size_t(struct ossl_param_st*  p  , unsigned long  int  val  );
int OSSL_PARAM_set_time_t(struct ossl_param_st*  p  , long  val  );
int OSSL_PARAM_get_double(const struct ossl_param_st*  p  , double* val);
int OSSL_PARAM_set_double(struct ossl_param_st*  p  , double val);
int OSSL_PARAM_get_BN(const struct ossl_param_st*  p  , struct bignum_st**  val  );
int OSSL_PARAM_set_BN(struct ossl_param_st*  p  , const struct bignum_st*  val  );
int OSSL_PARAM_get_utf8_string(const struct ossl_param_st*  p  , char** val, unsigned long  int  max_len  );
int OSSL_PARAM_set_utf8_string(struct ossl_param_st*  p  , const char* val);
int OSSL_PARAM_get_octet_string(const struct ossl_param_st*  p  , void** val, unsigned long  int  max_len  , unsigned long  int*  used_len  );
int OSSL_PARAM_set_octet_string(struct ossl_param_st*  p  , const void* val, unsigned long  int  len  );
int OSSL_PARAM_get_utf8_ptr(const struct ossl_param_st*  p  , const char** val);
int OSSL_PARAM_set_utf8_ptr(struct ossl_param_st*  p  , const char* val);
int OSSL_PARAM_get_octet_ptr(const struct ossl_param_st*  p  , const void** val, unsigned long  int*  used_len  );
int OSSL_PARAM_set_octet_ptr(struct ossl_param_st*  p  , const void* val, unsigned long  int  used_len  );
int OSSL_PARAM_get_utf8_string_ptr(const struct ossl_param_st*  p  , const char** val);
int OSSL_PARAM_get_octet_string_ptr(const struct ossl_param_st*  p  , const void** val, unsigned long  int*  used_len  );
int OSSL_PARAM_modified(const struct ossl_param_st*  p  );
void OSSL_PARAM_set_all_unmodified(struct ossl_param_st*  p  );
struct ossl_param_st*  OSSL_PARAM_dup(const struct ossl_param_st*  p  );
struct ossl_param_st*  OSSL_PARAM_merge(const struct ossl_param_st*  p1  , const struct ossl_param_st*  p2  );
void OSSL_PARAM_free(struct ossl_param_st*  p  );
int OSSL_PARAM_set_octet_string_or_ptr(struct ossl_param_st*  p  , const void* val, unsigned long  int  len  );
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
struct asn1_string_st*  ASN1_UTCTIME_set(struct asn1_string_st*  s  , long  t  );
struct asn1_string_st*  ASN1_UTCTIME_adj(struct asn1_string_st*  s  , long  t  , int offset_day, long offset_sec);
int ASN1_UTCTIME_set_string(struct asn1_string_st*  s  , const char* str);
int ASN1_UTCTIME_cmp_time_t(const struct asn1_string_st*  s  , long  t  );
int ASN1_GENERALIZEDTIME_check(const struct asn1_string_st*  a  );
struct asn1_string_st*  ASN1_GENERALIZEDTIME_set(struct asn1_string_st*  s  , long  t  );
struct asn1_string_st*  ASN1_GENERALIZEDTIME_adj(struct asn1_string_st*  s  , long  t  , int offset_day, long offset_sec);
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
struct asn1_string_st*  ASN1_TIME_set(struct asn1_string_st*  s  , long  t  );
struct asn1_string_st*  ASN1_TIME_adj(struct asn1_string_st*  s  , long  t  , int offset_day, long offset_sec);
int ASN1_TIME_check(const struct asn1_string_st*  t  );
struct asn1_string_st*  ASN1_TIME_to_generalizedtime(const struct asn1_string_st*  t  , struct asn1_string_st**  out  );
int ASN1_TIME_set_string(struct asn1_string_st*  s  , const char* str);
int ASN1_TIME_set_string_X509(struct asn1_string_st*  s  , const char* str);
int ASN1_TIME_to_tm(const struct asn1_string_st*  s  , struct tm*  tm  );
int ASN1_TIME_normalize(struct asn1_string_st*  s  );
int ASN1_TIME_cmp_time_t(const struct asn1_string_st*  s  , long  t  );
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
int ASN1_INTEGER_get_int64(long long*  pr  , const struct asn1_string_st*  a  );
int ASN1_INTEGER_set_int64(struct asn1_string_st*  a  , long long  r  );
int ASN1_INTEGER_get_uint64(unsigned long  long*  pr  , const struct asn1_string_st*  a  );
int ASN1_INTEGER_set_uint64(struct asn1_string_st*  a  , unsigned long  long  r  );
int ASN1_INTEGER_set(struct asn1_string_st*  a  , long v);
long ASN1_INTEGER_get(const struct asn1_string_st*  a  );
struct asn1_string_st*  BN_to_ASN1_INTEGER(const struct bignum_st*  bn  , struct asn1_string_st*  ai  );
struct bignum_st*  ASN1_INTEGER_to_BN(const struct asn1_string_st*  ai  , struct bignum_st*  bn  );
int ASN1_ENUMERATED_get_int64(long long*  pr  , const struct asn1_string_st*  a  );
int ASN1_ENUMERATED_set_int64(struct asn1_string_st*  a  , long long  r  );
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
void* ASN1_d2i_fp(void* (*xnew)(), void* (*(*d2i))(void**,const unsigned char**,long)  , struct __sFILE*  in  , void** x);
void* ASN1_item_d2i_fp_ex(const struct ASN1_ITEM_st*  it  , struct __sFILE*  in  , void* x, struct ossl_lib_ctx_st*  libctx  , const char* propq);
void* ASN1_item_d2i_fp(const struct ASN1_ITEM_st*  it  , struct __sFILE*  in  , void* x);
int ASN1_i2d_fp(int (*(*i2d))(const void*,unsigned char**)  , struct __sFILE*  out  , const void* x);
int ASN1_item_i2d_fp(const struct ASN1_ITEM_st*  it  , struct __sFILE*  out  , const void* x);
int ASN1_STRING_print_ex_fp(struct __sFILE*  fp  , const struct asn1_string_st*  str  , unsigned long  int flags);
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
int ASN1_buf_print(struct bio_st*  bp  , const unsigned char* buf, unsigned long  int  buflen  , int off);
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
const struct ASN1_ITEM_st*  ASN1_ITEM_get(unsigned long  int  i  );
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
unsigned long  int  OBJ_length(const struct asn1_object_st*  obj  );
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
int EVP_MD_meth_set_update(struct evp_md_st*  md  , int (*update)(struct evp_md_ctx_st* ,const void*,unsigned long  int ));
int EVP_MD_meth_set_final(struct evp_md_st*  md  , int (*final)(struct evp_md_ctx_st* ,unsigned char*));
int EVP_MD_meth_set_copy(struct evp_md_st*  md  , int (*copy)(struct evp_md_ctx_st* ,const struct evp_md_ctx_st* ));
int EVP_MD_meth_set_cleanup(struct evp_md_st*  md  , int (*cleanup)(struct evp_md_ctx_st* ));
int EVP_MD_meth_set_ctrl(struct evp_md_st*  md  , int (*ctrl)(struct evp_md_ctx_st* ,int,int,void*));
int EVP_MD_meth_get_input_blocksize(const struct evp_md_st*  md  );
int EVP_MD_meth_get_result_size(const struct evp_md_st*  md  );
int EVP_MD_meth_get_app_datasize(const struct evp_md_st*  md  );
unsigned long  int EVP_MD_meth_get_flags(const struct evp_md_st*  md  );
int (*EVP_MD_meth_get_init(const struct evp_md_st*  _function_pointer_result_var_name_a16  ))(struct evp_md_ctx_st* );
int (*EVP_MD_meth_get_update(const struct evp_md_st*  _function_pointer_result_var_name_a17  ))(struct evp_md_ctx_st* ,const void*,unsigned long  int );
int (*EVP_MD_meth_get_final(const struct evp_md_st*  _function_pointer_result_var_name_a18  ))(struct evp_md_ctx_st* ,unsigned char*);
int (*EVP_MD_meth_get_copy(const struct evp_md_st*  _function_pointer_result_var_name_a19  ))(struct evp_md_ctx_st* ,const struct evp_md_ctx_st* );
int (*EVP_MD_meth_get_cleanup(const struct evp_md_st*  _function_pointer_result_var_name_a20  ))(struct evp_md_ctx_st* );
int (*EVP_MD_meth_get_ctrl(const struct evp_md_st*  _function_pointer_result_var_name_a21  ))(struct evp_md_ctx_st* ,int,int,void*);
struct evp_cipher_st*  EVP_CIPHER_meth_new(int cipher_type, int block_size, int key_len);
struct evp_cipher_st*  EVP_CIPHER_meth_dup(const struct evp_cipher_st*  cipher  );
void EVP_CIPHER_meth_free(struct evp_cipher_st*  cipher  );
int EVP_CIPHER_meth_set_iv_length(struct evp_cipher_st*  cipher  , int iv_len);
int EVP_CIPHER_meth_set_flags(struct evp_cipher_st*  cipher  , unsigned long  int flags);
int EVP_CIPHER_meth_set_impl_ctx_size(struct evp_cipher_st*  cipher  , int ctx_size);
int EVP_CIPHER_meth_set_init(struct evp_cipher_st*  cipher  , int (*init)(struct evp_cipher_ctx_st* ,const unsigned char*,const unsigned char*,int));
int EVP_CIPHER_meth_set_do_cipher(struct evp_cipher_st*  cipher  , int (*do_cipher)(struct evp_cipher_ctx_st* ,unsigned char*,const unsigned char*,unsigned long  int ));
int EVP_CIPHER_meth_set_cleanup(struct evp_cipher_st*  cipher  , int (*cleanup)(struct evp_cipher_ctx_st* ));
int EVP_CIPHER_meth_set_set_asn1_params(struct evp_cipher_st*  cipher  , int (*set_asn1_parameters)(struct evp_cipher_ctx_st* ,struct asn1_type_st* ));
int EVP_CIPHER_meth_set_get_asn1_params(struct evp_cipher_st*  cipher  , int (*get_asn1_parameters)(struct evp_cipher_ctx_st* ,struct asn1_type_st* ));
int EVP_CIPHER_meth_set_ctrl(struct evp_cipher_st*  cipher  , int (*ctrl)(struct evp_cipher_ctx_st* ,int,int,void*));
int (*EVP_CIPHER_meth_get_init(const struct evp_cipher_st*  _function_pointer_result_var_name_a22  ))(struct evp_cipher_ctx_st* ,const unsigned char*,const unsigned char*,int);
int (*EVP_CIPHER_meth_get_do_cipher(const struct evp_cipher_st*  _function_pointer_result_var_name_a23  ))(struct evp_cipher_ctx_st* ,unsigned char*,const unsigned char*,unsigned long  int );
int (*EVP_CIPHER_meth_get_cleanup(const struct evp_cipher_st*  _function_pointer_result_var_name_a24  ))(struct evp_cipher_ctx_st* );
int (*EVP_CIPHER_meth_get_set_asn1_params(const struct evp_cipher_st*  _function_pointer_result_var_name_a25  ))(struct evp_cipher_ctx_st* ,struct asn1_type_st* );
int (*EVP_CIPHER_meth_get_get_asn1_params(const struct evp_cipher_st*  _function_pointer_result_var_name_a26  ))(struct evp_cipher_ctx_st* ,struct asn1_type_st* );
int (*EVP_CIPHER_meth_get_ctrl(const struct evp_cipher_st*  _function_pointer_result_var_name_a27  ))(struct evp_cipher_ctx_st* ,int,int,void*);
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
int (*EVP_MD_CTX_update_fn(struct evp_md_ctx_st*  _function_pointer_result_var_name_a28  ))(struct evp_md_ctx_st* ,const void*,unsigned long  int );
void EVP_MD_CTX_set_update_fn(struct evp_md_ctx_st*  ctx  , int (*update)(struct evp_md_ctx_st* ,const void*,unsigned long  int ));
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
int EVP_CIPHER_CTX_get_updated_iv(struct evp_cipher_ctx_st*  ctx  , void* buf, unsigned long  int  len  );
int EVP_CIPHER_CTX_get_original_iv(struct evp_cipher_ctx_st*  ctx  , void* buf, unsigned long  int  len  );
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
int EVP_DigestUpdate(struct evp_md_ctx_st*  ctx  , const void* d, unsigned long  int  cnt  );
int EVP_DigestFinal_ex(struct evp_md_ctx_st*  ctx  , unsigned char* md, unsigned int* s);
int EVP_Digest(const void* data, unsigned long  int  count  , unsigned char* md, unsigned int* size, const struct evp_md_st*  type  , struct engine_st*  impl  );
int EVP_Q_digest(struct ossl_lib_ctx_st*  libctx  , const char* name, const char* propq, const void* data, unsigned long  int  datalen  , unsigned char* md, unsigned long  int*  mdlen  );
int EVP_MD_CTX_copy(struct evp_md_ctx_st*  out  , const struct evp_md_ctx_st*  in  );
int EVP_DigestInit(struct evp_md_ctx_st*  ctx  , const struct evp_md_st*  type  );
int EVP_DigestFinal(struct evp_md_ctx_st*  ctx  , unsigned char* md, unsigned int* s);
int EVP_DigestFinalXOF(struct evp_md_ctx_st*  ctx  , unsigned char* out, unsigned long  int  outlen  );
int EVP_DigestSqueeze(struct evp_md_ctx_st*  ctx  , unsigned char* out, unsigned long  int  outlen  );
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
int EVP_CipherInit_SKEY(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , struct evp_skey_st*  skey  , const unsigned char* iv, unsigned long  int  iv_len  , int enc, const struct ossl_param_st  params[]  );
int EVP_CipherInit_ex2(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, const unsigned char* iv, int enc, const struct ossl_param_st  params[]  );
int EVP_CipherUpdate(struct evp_cipher_ctx_st*  ctx  , unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_CipherFinal(struct evp_cipher_ctx_st*  ctx  , unsigned char* outm, int* outl);
int EVP_CipherPipelineEncryptInit(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, unsigned long  int  keylen  , unsigned long  int  numpipes  , const unsigned char** iv, unsigned long  int  ivlen  );
int EVP_CipherPipelineDecryptInit(struct evp_cipher_ctx_st*  ctx  , const struct evp_cipher_st*  cipher  , const unsigned char* key, unsigned long  int  keylen  , unsigned long  int  numpipes  , const unsigned char** iv, unsigned long  int  ivlen  );
int EVP_CipherPipelineUpdate(struct evp_cipher_ctx_st*  ctx  , unsigned char** out, unsigned long  int*  outl  , const unsigned long  int*  outsize  , const unsigned char** in, const unsigned long  int*  inl  );
int EVP_CipherPipelineFinal(struct evp_cipher_ctx_st*  ctx  , unsigned char** outm, unsigned long  int*  outl  , const unsigned long  int*  outsize  );
int EVP_CipherFinal_ex(struct evp_cipher_ctx_st*  ctx  , unsigned char* outm, int* outl);
int EVP_SignFinal(struct evp_md_ctx_st*  ctx  , unsigned char* md, unsigned int* s, struct evp_pkey_st*  pkey  );
int EVP_SignFinal_ex(struct evp_md_ctx_st*  ctx  , unsigned char* md, unsigned int* s, struct evp_pkey_st*  pkey  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int EVP_DigestSign(struct evp_md_ctx_st*  ctx  , unsigned char* sigret, unsigned long  int*  siglen  , const unsigned char* tbs, unsigned long  int  tbslen  );
int EVP_VerifyFinal(struct evp_md_ctx_st*  ctx  , const unsigned char* sigbuf, unsigned int siglen, struct evp_pkey_st*  pkey  );
int EVP_VerifyFinal_ex(struct evp_md_ctx_st*  ctx  , const unsigned char* sigbuf, unsigned int siglen, struct evp_pkey_st*  pkey  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int EVP_DigestVerify(struct evp_md_ctx_st*  ctx  , const unsigned char* sigret, unsigned long  int  siglen  , const unsigned char* tbs, unsigned long  int  tbslen  );
int EVP_DigestSignInit_ex(struct evp_md_ctx_st*  ctx  , struct evp_pkey_ctx_st**  pctx  , const char* mdname, struct ossl_lib_ctx_st*  libctx  , const char* props, struct evp_pkey_st*  pkey  , const struct ossl_param_st  params[]  );
int EVP_DigestSignInit(struct evp_md_ctx_st*  ctx  , struct evp_pkey_ctx_st**  pctx  , const struct evp_md_st*  type  , struct engine_st*  e  , struct evp_pkey_st*  pkey  );
int EVP_DigestSignUpdate(struct evp_md_ctx_st*  ctx  , const void* data, unsigned long  int  dsize  );
int EVP_DigestSignFinal(struct evp_md_ctx_st*  ctx  , unsigned char* sigret, unsigned long  int*  siglen  );
int EVP_DigestVerifyInit_ex(struct evp_md_ctx_st*  ctx  , struct evp_pkey_ctx_st**  pctx  , const char* mdname, struct ossl_lib_ctx_st*  libctx  , const char* props, struct evp_pkey_st*  pkey  , const struct ossl_param_st  params[]  );
int EVP_DigestVerifyInit(struct evp_md_ctx_st*  ctx  , struct evp_pkey_ctx_st**  pctx  , const struct evp_md_st*  type  , struct engine_st*  e  , struct evp_pkey_st*  pkey  );
int EVP_DigestVerifyUpdate(struct evp_md_ctx_st*  ctx  , const void* data, unsigned long  int  dsize  );
int EVP_DigestVerifyFinal(struct evp_md_ctx_st*  ctx  , const unsigned char* sig, unsigned long  int  siglen  );
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
const struct evp_md_st*  EVP_mdc2();
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
const struct evp_cipher_st*  EVP_sm4_ecb();
const struct evp_cipher_st*  EVP_sm4_cbc();
const struct evp_cipher_st*  EVP_sm4_cfb128();
const struct evp_cipher_st*  EVP_sm4_ofb();
const struct evp_cipher_st*  EVP_sm4_ctr();
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
unsigned long  int  EVP_MAC_CTX_get_mac_size(struct evp_mac_ctx_st*  ctx  );
unsigned long  int  EVP_MAC_CTX_get_block_size(struct evp_mac_ctx_st*  ctx  );
unsigned char* EVP_Q_mac(struct ossl_lib_ctx_st*  libctx  , const char* name, const char* propq, const char* subalg, const struct ossl_param_st*  params  , const void* key, unsigned long  int  keylen  , const unsigned char* data, unsigned long  int  datalen  , unsigned char* out, unsigned long  int  outsize  , unsigned long  int*  outlen  );
int EVP_MAC_init(struct evp_mac_ctx_st*  ctx  , const unsigned char* key, unsigned long  int  keylen  , const struct ossl_param_st  params[]  );
int EVP_MAC_init_SKEY(struct evp_mac_ctx_st*  ctx  , struct evp_skey_st*  skey  , const struct ossl_param_st  params[]  );
int EVP_MAC_update(struct evp_mac_ctx_st*  ctx  , const unsigned char* data, unsigned long  int  datalen  );
int EVP_MAC_final(struct evp_mac_ctx_st*  ctx  , unsigned char* out, unsigned long  int*  outl  , unsigned long  int  outsize  );
int EVP_MAC_finalXOF(struct evp_mac_ctx_st*  ctx  , unsigned char* out, unsigned long  int  outsize  );
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
int EVP_RAND_instantiate(struct evp_rand_ctx_st*  ctx  , unsigned int strength, int prediction_resistance, const unsigned char* pstr, unsigned long  int  pstr_len  , const struct ossl_param_st  params[]  );
int EVP_RAND_uninstantiate(struct evp_rand_ctx_st*  ctx  );
int EVP_RAND_generate(struct evp_rand_ctx_st*  ctx  , unsigned char* out, unsigned long  int  outlen  , unsigned int strength, int prediction_resistance, const unsigned char* addin, unsigned long  int  addin_len  );
int EVP_RAND_reseed(struct evp_rand_ctx_st*  ctx  , int prediction_resistance, const unsigned char* ent, unsigned long  int  ent_len  , const unsigned char* addin, unsigned long  int  addin_len  );
int EVP_RAND_nonce(struct evp_rand_ctx_st*  ctx  , unsigned char* out, unsigned long  int  outlen  );
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
int EVP_PKEY_get_security_category(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_get_size(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_can_sign(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_set_type(struct evp_pkey_st*  pkey  , int type);
int EVP_PKEY_set_type_str(struct evp_pkey_st*  pkey  , const char* str, int len);
int EVP_PKEY_set_type_by_keymgmt(struct evp_pkey_st*  pkey  , struct evp_keymgmt_st*  keymgmt  );
int EVP_PKEY_set1_engine(struct evp_pkey_st*  pkey  , struct engine_st*  e  );
struct engine_st*  EVP_PKEY_get0_engine(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_assign(struct evp_pkey_st*  pkey  , int type, void* key);
void* EVP_PKEY_get0(const struct evp_pkey_st*  pkey  );
const unsigned char* EVP_PKEY_get0_hmac(const struct evp_pkey_st*  pkey  , unsigned long  int*  len  );
const unsigned char* EVP_PKEY_get0_poly1305(const struct evp_pkey_st*  pkey  , unsigned long  int*  len  );
const unsigned char* EVP_PKEY_get0_siphash(const struct evp_pkey_st*  pkey  , unsigned long  int*  len  );
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
int i2d_PKCS8PrivateKey(const struct evp_pkey_st*  a  , unsigned char** pp);
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
int EVP_PKEY_print_public_fp(struct __sFILE*  fp  , const struct evp_pkey_st*  pkey  , int indent, struct asn1_pctx_st*  pctx  );
int EVP_PKEY_print_private_fp(struct __sFILE*  fp  , const struct evp_pkey_st*  pkey  , int indent, struct asn1_pctx_st*  pctx  );
int EVP_PKEY_print_params_fp(struct __sFILE*  fp  , const struct evp_pkey_st*  pkey  , int indent, struct asn1_pctx_st*  pctx  );
int EVP_PKEY_get_default_digest_nid(struct evp_pkey_st*  pkey  , int* pnid);
int EVP_PKEY_get_default_digest_name(struct evp_pkey_st*  pkey  , char* mdname, unsigned long  int  mdname_sz  );
int EVP_PKEY_digestsign_supports_digest(struct evp_pkey_st*  pkey  , struct ossl_lib_ctx_st*  libctx  , const char* name, const char* propq);
int EVP_PKEY_set1_encoded_public_key(struct evp_pkey_st*  pkey  , const unsigned char* pub, unsigned long  int  publen  );
unsigned long  int  EVP_PKEY_get1_encoded_public_key(struct evp_pkey_st*  pkey  , unsigned char** ppub);
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
int EVP_PBE_scrypt(const char* pass, unsigned long  int  passlen  , const unsigned char* salt, unsigned long  int  saltlen  , unsigned long  long  N  , unsigned long  long  r  , unsigned long  long  p  , unsigned long  long  maxmem  , unsigned char* key, unsigned long  int  keylen  );
int EVP_PBE_scrypt_ex(const char* pass, unsigned long  int  passlen  , const unsigned char* salt, unsigned long  int  saltlen  , unsigned long  long  N  , unsigned long  long  r  , unsigned long  long  p  , unsigned long  long  maxmem  , unsigned char* key, unsigned long  int  keylen  , struct ossl_lib_ctx_st*  ctx  , const char* propq);
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
int EVP_PBE_get(int* ptype, int* ppbe_nid, unsigned long  int  num  );
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
void EVP_PKEY_asn1_set_set_priv_key(struct evp_pkey_asn1_method_st*  ameth  , int (*set_priv_key)(struct evp_pkey_st* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_asn1_set_set_pub_key(struct evp_pkey_asn1_method_st*  ameth  , int (*set_pub_key)(struct evp_pkey_st* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_asn1_set_get_priv_key(struct evp_pkey_asn1_method_st*  ameth  , int (*get_priv_key)(const struct evp_pkey_st* ,unsigned char*,unsigned long  int* ));
void EVP_PKEY_asn1_set_get_pub_key(struct evp_pkey_asn1_method_st*  ameth  , int (*get_pub_key)(const struct evp_pkey_st* ,unsigned char*,unsigned long  int* ));
void EVP_PKEY_asn1_set_security_bits(struct evp_pkey_asn1_method_st*  ameth  , int (*pkey_security_bits)(const struct evp_pkey_st* ));
int EVP_PKEY_CTX_get_signature_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st**  md  );
int EVP_PKEY_CTX_set_signature_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_set1_id(struct evp_pkey_ctx_st*  ctx  , const void* id, int len);
int EVP_PKEY_CTX_get1_id(struct evp_pkey_ctx_st*  ctx  , void* id);
int EVP_PKEY_CTX_get1_id_len(struct evp_pkey_ctx_st*  ctx  , unsigned long  int*  id_len  );
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
unsigned long  int  EVP_PKEY_meth_get_count();
const struct evp_pkey_method_st*  EVP_PKEY_meth_get0(unsigned long  int  idx  );
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
int EVP_PKEY_CTX_ctrl_uint64(struct evp_pkey_ctx_st*  ctx  , int keytype, int optype, int cmd, unsigned long  long  value  );
int EVP_PKEY_CTX_str2ctrl(struct evp_pkey_ctx_st*  ctx  , int cmd, const char* str);
int EVP_PKEY_CTX_hex2ctrl(struct evp_pkey_ctx_st*  ctx  , int cmd, const char* hex);
int EVP_PKEY_CTX_md(struct evp_pkey_ctx_st*  ctx  , int optype, int cmd, const char* md);
int EVP_PKEY_CTX_get_operation(struct evp_pkey_ctx_st*  ctx  );
void EVP_PKEY_CTX_set0_keygen_info(struct evp_pkey_ctx_st*  ctx  , int* dat, int datlen);
struct evp_pkey_st*  EVP_PKEY_new_mac_key(int type, struct engine_st*  e  , const unsigned char* key, int keylen);
struct evp_pkey_st*  EVP_PKEY_new_raw_private_key_ex(struct ossl_lib_ctx_st*  libctx  , const char* keytype, const char* propq, const unsigned char* priv, unsigned long  int  len  );
struct evp_pkey_st*  EVP_PKEY_new_raw_private_key(int type, struct engine_st*  e  , const unsigned char* priv, unsigned long  int  len  );
struct evp_pkey_st*  EVP_PKEY_new_raw_public_key_ex(struct ossl_lib_ctx_st*  libctx  , const char* keytype, const char* propq, const unsigned char* pub, unsigned long  int  len  );
struct evp_pkey_st*  EVP_PKEY_new_raw_public_key(int type, struct engine_st*  e  , const unsigned char* pub, unsigned long  int  len  );
int EVP_PKEY_get_raw_private_key(const struct evp_pkey_st*  pkey  , unsigned char* priv, unsigned long  int*  len  );
int EVP_PKEY_get_raw_public_key(const struct evp_pkey_st*  pkey  , unsigned char* pub, unsigned long  int*  len  );
struct evp_pkey_st*  EVP_PKEY_new_CMAC_key(struct engine_st*  e  , const unsigned char* priv, unsigned long  int  len  , const struct evp_cipher_st*  cipher  );
void EVP_PKEY_CTX_set_data(struct evp_pkey_ctx_st*  ctx  , void* data);
void* EVP_PKEY_CTX_get_data(const struct evp_pkey_ctx_st*  ctx  );
struct evp_pkey_st*  EVP_PKEY_CTX_get0_pkey(struct evp_pkey_ctx_st*  ctx  );
struct evp_pkey_st*  EVP_PKEY_CTX_get0_peerkey(struct evp_pkey_ctx_st*  ctx  );
void EVP_PKEY_CTX_set_app_data(struct evp_pkey_ctx_st*  ctx  , void* data);
void* EVP_PKEY_CTX_get_app_data(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_CTX_set_signature(struct evp_pkey_ctx_st*  pctx  , const unsigned char* sig, unsigned long  int  siglen  );
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
int EVP_PKEY_sign(struct evp_pkey_ctx_st*  ctx  , unsigned char* sig, unsigned long  int*  siglen  , const unsigned char* tbs, unsigned long  int  tbslen  );
int EVP_PKEY_sign_message_init(struct evp_pkey_ctx_st*  ctx  , struct evp_signature_st*  algo  , const struct ossl_param_st  params[]  );
int EVP_PKEY_sign_message_update(struct evp_pkey_ctx_st*  ctx  , const unsigned char* in, unsigned long  int  inlen  );
int EVP_PKEY_sign_message_final(struct evp_pkey_ctx_st*  ctx  , unsigned char* sig, unsigned long  int*  siglen  );
int EVP_PKEY_verify_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_verify_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_verify_init_ex2(struct evp_pkey_ctx_st*  ctx  , struct evp_signature_st*  algo  , const struct ossl_param_st  params[]  );
int EVP_PKEY_verify(struct evp_pkey_ctx_st*  ctx  , const unsigned char* sig, unsigned long  int  siglen  , const unsigned char* tbs, unsigned long  int  tbslen  );
int EVP_PKEY_verify_message_init(struct evp_pkey_ctx_st*  ctx  , struct evp_signature_st*  algo  , const struct ossl_param_st  params[]  );
int EVP_PKEY_verify_message_update(struct evp_pkey_ctx_st*  ctx  , const unsigned char* in, unsigned long  int  inlen  );
int EVP_PKEY_verify_message_final(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_verify_recover_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_verify_recover_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_verify_recover_init_ex2(struct evp_pkey_ctx_st*  ctx  , struct evp_signature_st*  algo  , const struct ossl_param_st  params[]  );
int EVP_PKEY_verify_recover(struct evp_pkey_ctx_st*  ctx  , unsigned char* rout, unsigned long  int*  routlen  , const unsigned char* sig, unsigned long  int  siglen  );
int EVP_PKEY_encrypt_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_encrypt_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_encrypt(struct evp_pkey_ctx_st*  ctx  , unsigned char* out, unsigned long  int*  outlen  , const unsigned char* in, unsigned long  int  inlen  );
int EVP_PKEY_decrypt_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_decrypt_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_decrypt(struct evp_pkey_ctx_st*  ctx  , unsigned char* out, unsigned long  int*  outlen  , const unsigned char* in, unsigned long  int  inlen  );
int EVP_PKEY_derive_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_derive_init_ex(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_derive_set_peer_ex(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st*  peer  , int validate_peer);
int EVP_PKEY_derive_set_peer(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st*  peer  );
int EVP_PKEY_derive(struct evp_pkey_ctx_st*  ctx  , unsigned char* key, unsigned long  int*  keylen  );
struct evp_skey_st*  EVP_PKEY_derive_SKEY(struct evp_pkey_ctx_st*  ctx  , struct evp_skeymgmt_st*  mgmt  , const char* key_type, const char* propquery, unsigned long  int  keylen  , const struct ossl_param_st  params[]  );
int EVP_PKEY_encapsulate_init(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_auth_encapsulate_init(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st*  authpriv  , const struct ossl_param_st  params[]  );
int EVP_PKEY_encapsulate(struct evp_pkey_ctx_st*  ctx  , unsigned char* wrappedkey, unsigned long  int*  wrappedkeylen  , unsigned char* genkey, unsigned long  int*  genkeylen  );
int EVP_PKEY_decapsulate_init(struct evp_pkey_ctx_st*  ctx  , const struct ossl_param_st  params[]  );
int EVP_PKEY_auth_decapsulate_init(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st*  authpub  , const struct ossl_param_st  params[]  );
int EVP_PKEY_decapsulate(struct evp_pkey_ctx_st*  ctx  , unsigned char* unwrapped, unsigned long  int*  unwrappedlen  , const unsigned char* wrapped, unsigned long  int  wrappedlen  );
int EVP_PKEY_fromdata_init(struct evp_pkey_ctx_st*  ctx  );
int EVP_PKEY_fromdata(struct evp_pkey_ctx_st*  ctx  , struct evp_pkey_st**  ppkey  , int selection, struct ossl_param_st  param[]  );
const struct ossl_param_st*  EVP_PKEY_fromdata_settable(struct evp_pkey_ctx_st*  ctx  , int selection);
int EVP_PKEY_todata(const struct evp_pkey_st*  pkey  , int selection, struct ossl_param_st**  params  );
int EVP_PKEY_export(const struct evp_pkey_st*  pkey  , int selection, int (*(*export_cb))(const struct ossl_param_st ,void*)  , void* export_cbarg);
const struct ossl_param_st*  EVP_PKEY_gettable_params(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_get_params(const struct evp_pkey_st*  pkey  , struct ossl_param_st  params[]  );
int EVP_PKEY_get_int_param(const struct evp_pkey_st*  pkey  , const char* key_name, int* out);
int EVP_PKEY_get_size_t_param(const struct evp_pkey_st*  pkey  , const char* key_name, unsigned long  int*  out  );
int EVP_PKEY_get_bn_param(const struct evp_pkey_st*  pkey  , const char* key_name, struct bignum_st**  bn  );
int EVP_PKEY_get_utf8_string_param(const struct evp_pkey_st*  pkey  , const char* key_name, char* str, unsigned long  int  max_buf_sz  , unsigned long  int*  out_sz  );
int EVP_PKEY_get_octet_string_param(const struct evp_pkey_st*  pkey  , const char* key_name, unsigned char* buf, unsigned long  int  max_buf_sz  , unsigned long  int*  out_sz  );
const struct ossl_param_st*  EVP_PKEY_settable_params(const struct evp_pkey_st*  pkey  );
int EVP_PKEY_set_params(struct evp_pkey_st*  pkey  , struct ossl_param_st  params[]  );
int EVP_PKEY_set_int_param(struct evp_pkey_st*  pkey  , const char* key_name, int in);
int EVP_PKEY_set_size_t_param(struct evp_pkey_st*  pkey  , const char* key_name, unsigned long  int  in  );
int EVP_PKEY_set_bn_param(struct evp_pkey_st*  pkey  , const char* key_name, const struct bignum_st*  bn  );
int EVP_PKEY_set_utf8_string_param(struct evp_pkey_st*  pkey  , const char* key_name, const char* str);
int EVP_PKEY_set_octet_string_param(struct evp_pkey_st*  pkey  , const char* key_name, const unsigned char* buf, unsigned long  int  bsize  );
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
void EVP_PKEY_meth_set_sign(struct evp_pkey_method_st*  pmeth  , int (*sign_init)(struct evp_pkey_ctx_st* ), int (*sign)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_set_verify(struct evp_pkey_method_st*  pmeth  , int (*verify_init)(struct evp_pkey_ctx_st* ), int (*verify)(struct evp_pkey_ctx_st* ,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_set_verify_recover(struct evp_pkey_method_st*  pmeth  , int (*verify_recover_init)(struct evp_pkey_ctx_st* ), int (*verify_recover)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_set_signctx(struct evp_pkey_method_st*  pmeth  , int (*signctx_init)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ), int (*signctx)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ,struct evp_md_ctx_st* ));
void EVP_PKEY_meth_set_verifyctx(struct evp_pkey_method_st*  pmeth  , int (*verifyctx_init)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ), int (*verifyctx)(struct evp_pkey_ctx_st* ,const unsigned char*,int,struct evp_md_ctx_st* ));
void EVP_PKEY_meth_set_encrypt(struct evp_pkey_method_st*  pmeth  , int (*encrypt_init)(struct evp_pkey_ctx_st* ), int (*encryptfn)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_set_decrypt(struct evp_pkey_method_st*  pmeth  , int (*decrypt_init)(struct evp_pkey_ctx_st* ), int (*decrypt)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_set_derive(struct evp_pkey_method_st*  pmeth  , int (*derive_init)(struct evp_pkey_ctx_st* ), int (*derive)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ));
void EVP_PKEY_meth_set_ctrl(struct evp_pkey_method_st*  pmeth  , int (*ctrl)(struct evp_pkey_ctx_st* ,int,int,void*), int (*ctrl_str)(struct evp_pkey_ctx_st* ,const char*,const char*));
void EVP_PKEY_meth_set_digestsign(struct evp_pkey_method_st*  pmeth  , int (*digestsign)(struct evp_md_ctx_st* ,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_set_digestverify(struct evp_pkey_method_st*  pmeth  , int (*digestverify)(struct evp_md_ctx_st* ,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_set_check(struct evp_pkey_method_st*  pmeth  , int (*check)(struct evp_pkey_st* ));
void EVP_PKEY_meth_set_public_check(struct evp_pkey_method_st*  pmeth  , int (*check)(struct evp_pkey_st* ));
void EVP_PKEY_meth_set_param_check(struct evp_pkey_method_st*  pmeth  , int (*check)(struct evp_pkey_st* ));
void EVP_PKEY_meth_set_digest_custom(struct evp_pkey_method_st*  pmeth  , int (*digest_custom)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ));
void EVP_PKEY_meth_get_init(const struct evp_pkey_method_st*  pmeth  , int (**pinit)(struct evp_pkey_ctx_st* ));
void EVP_PKEY_meth_get_copy(const struct evp_pkey_method_st*  pmeth  , int (**pcopy)(struct evp_pkey_ctx_st* ,const struct evp_pkey_ctx_st* ));
void EVP_PKEY_meth_get_cleanup(const struct evp_pkey_method_st*  pmeth  , void (**pcleanup)(struct evp_pkey_ctx_st* ));
void EVP_PKEY_meth_get_paramgen(const struct evp_pkey_method_st*  pmeth  , int (**pparamgen_init)(struct evp_pkey_ctx_st* ), int (**pparamgen)(struct evp_pkey_ctx_st* ,struct evp_pkey_st* ));
void EVP_PKEY_meth_get_keygen(const struct evp_pkey_method_st*  pmeth  , int (**pkeygen_init)(struct evp_pkey_ctx_st* ), int (**pkeygen)(struct evp_pkey_ctx_st* ,struct evp_pkey_st* ));
void EVP_PKEY_meth_get_sign(const struct evp_pkey_method_st*  pmeth  , int (**psign_init)(struct evp_pkey_ctx_st* ), int (**psign)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_get_verify(const struct evp_pkey_method_st*  pmeth  , int (**pverify_init)(struct evp_pkey_ctx_st* ), int (**pverify)(struct evp_pkey_ctx_st* ,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_get_verify_recover(const struct evp_pkey_method_st*  pmeth  , int (**pverify_recover_init)(struct evp_pkey_ctx_st* ), int (**pverify_recover)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_get_signctx(const struct evp_pkey_method_st*  pmeth  , int (**psignctx_init)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ), int (**psignctx)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ,struct evp_md_ctx_st* ));
void EVP_PKEY_meth_get_verifyctx(const struct evp_pkey_method_st*  pmeth  , int (**pverifyctx_init)(struct evp_pkey_ctx_st* ,struct evp_md_ctx_st* ), int (**pverifyctx)(struct evp_pkey_ctx_st* ,const unsigned char*,int,struct evp_md_ctx_st* ));
void EVP_PKEY_meth_get_encrypt(const struct evp_pkey_method_st*  pmeth  , int (**pencrypt_init)(struct evp_pkey_ctx_st* ), int (**pencryptfn)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_get_decrypt(const struct evp_pkey_method_st*  pmeth  , int (**pdecrypt_init)(struct evp_pkey_ctx_st* ), int (**pdecrypt)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_get_derive(const struct evp_pkey_method_st*  pmeth  , int (**pderive_init)(struct evp_pkey_ctx_st* ), int (**pderive)(struct evp_pkey_ctx_st* ,unsigned char*,unsigned long  int* ));
void EVP_PKEY_meth_get_ctrl(const struct evp_pkey_method_st*  pmeth  , int (**pctrl)(struct evp_pkey_ctx_st* ,int,int,void*), int (**pctrl_str)(struct evp_pkey_ctx_st* ,const char*,const char*));
void EVP_PKEY_meth_get_digestsign(const struct evp_pkey_method_st*  pmeth  , int (**digestsign)(struct evp_md_ctx_st* ,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ));
void EVP_PKEY_meth_get_digestverify(const struct evp_pkey_method_st*  pmeth  , int (**digestverify)(struct evp_md_ctx_st* ,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ));
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
int EVP_PKEY_CTX_get_group_name(struct evp_pkey_ctx_st*  ctx  , char* name, unsigned long  int  namelen  );
int EVP_PKEY_get_group_name(const struct evp_pkey_st*  pkey  , char* name, unsigned long  int  name_sz  , unsigned long  int*  gname_len  );
struct ossl_lib_ctx_st*  EVP_PKEY_CTX_get0_libctx(struct evp_pkey_ctx_st*  ctx  );
const char* EVP_PKEY_CTX_get0_propq(const struct evp_pkey_ctx_st*  ctx  );
const struct ossl_provider_st*  EVP_PKEY_CTX_get0_provider(const struct evp_pkey_ctx_st*  ctx  );
int EVP_SKEY_is_a(const struct evp_skey_st*  skey  , const char* name);
struct evp_skey_st*  EVP_SKEY_import(struct ossl_lib_ctx_st*  libctx  , const char* skeymgmtname, const char* propquery, int selection, const struct ossl_param_st*  params  );
struct evp_skey_st*  EVP_SKEY_generate(struct ossl_lib_ctx_st*  libctx  , const char* skeymgmtname, const char* propquery, const struct ossl_param_st*  params  );
struct evp_skey_st*  EVP_SKEY_import_raw_key(struct ossl_lib_ctx_st*  libctx  , const char* skeymgmtname, unsigned char* key, unsigned long  int  keylen  , const char* propquery);
struct evp_skey_st*  EVP_SKEY_import_SKEYMGMT(struct ossl_lib_ctx_st*  libctx  , struct evp_skeymgmt_st*  skeymgmt  , int selection, const struct ossl_param_st*  params  );
int EVP_SKEY_get0_raw_key(const struct evp_skey_st*  skey  , const unsigned char** key, unsigned long  int*  len  );
const char* EVP_SKEY_get0_key_id(const struct evp_skey_st*  skey  );
int EVP_SKEY_export(const struct evp_skey_st*  skey  , int selection, int (*(*export_cb))(const struct ossl_param_st ,void*)  , void* export_cbarg);
int EVP_SKEY_up_ref(struct evp_skey_st*  skey  );
void EVP_SKEY_free(struct evp_skey_st*  skey  );
const char* EVP_SKEY_get0_skeymgmt_name(const struct evp_skey_st*  skey  );
const char* EVP_SKEY_get0_provider_name(const struct evp_skey_st*  skey  );
struct evp_skey_st*  EVP_SKEY_to_provider(struct evp_skey_st*  skey  , struct ossl_lib_ctx_st*  libctx  , struct ossl_provider_st*  prov  , const char* propquery);
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
char* strerror(int __errnum) __asm("_" "strerror" );
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
const struct ec_method_st*  EC_GF2m_simple_method();
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
void EC_GROUP_set_point_conversion_form(struct ec_group_st*  group  , enum anonymous_typeY34  form  );
enum anonymous_typeY34  EC_GROUP_get_point_conversion_form(const struct ec_group_st*    );
unsigned char* EC_GROUP_get0_seed(const struct ec_group_st*  x  );
unsigned long  int  EC_GROUP_get_seed_len(const struct ec_group_st*    );
unsigned long  int  EC_GROUP_set_seed(struct ec_group_st*    , const unsigned char* , unsigned long  int  len  );
int EC_GROUP_set_curve(struct ec_group_st*  group  , const struct bignum_st*  p  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int EC_GROUP_get_curve(const struct ec_group_st*  group  , struct bignum_st*  p  , struct bignum_st*  a  , struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int EC_GROUP_set_curve_GFp(struct ec_group_st*  group  , const struct bignum_st*  p  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int EC_GROUP_get_curve_GFp(const struct ec_group_st*  group  , struct bignum_st*  p  , struct bignum_st*  a  , struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int EC_GROUP_set_curve_GF2m(struct ec_group_st*  group  , const struct bignum_st*  p  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int EC_GROUP_get_curve_GF2m(const struct ec_group_st*  group  , struct bignum_st*  p  , struct bignum_st*  a  , struct bignum_st*  b  , struct bignum_ctx*  ctx  );
int EC_GROUP_get_degree(const struct ec_group_st*  group  );
int EC_GROUP_check(const struct ec_group_st*  group  , struct bignum_ctx*  ctx  );
int EC_GROUP_check_discriminant(const struct ec_group_st*  group  , struct bignum_ctx*  ctx  );
int EC_GROUP_cmp(const struct ec_group_st*  a  , const struct ec_group_st*  b  , struct bignum_ctx*  ctx  );
struct ec_group_st*  EC_GROUP_new_curve_GFp(const struct bignum_st*  p  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
struct ec_group_st*  EC_GROUP_new_curve_GF2m(const struct bignum_st*  p  , const struct bignum_st*  a  , const struct bignum_st*  b  , struct bignum_ctx*  ctx  );
struct ec_group_st*  EC_GROUP_new_from_params(const struct ossl_param_st  params[]  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct ossl_param_st*  EC_GROUP_to_params(const struct ec_group_st*  group  , struct ossl_lib_ctx_st*  libctx  , const char* propq, struct bignum_ctx*  bnctx  );
struct ec_group_st*  EC_GROUP_new_by_curve_name_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq, int nid);
struct ec_group_st*  EC_GROUP_new_by_curve_name(int nid);
struct ec_group_st*  EC_GROUP_new_from_ecparameters(const struct ec_parameters_st*  params  );
struct ec_parameters_st*  EC_GROUP_get_ecparameters(const struct ec_group_st*  group  , struct ec_parameters_st*  params  );
struct ec_group_st*  EC_GROUP_new_from_ecpkparameters(const struct ecpk_parameters_st*  params  );
struct ecpk_parameters_st*  EC_GROUP_get_ecpkparameters(const struct ec_group_st*  group  , struct ecpk_parameters_st*  params  );
unsigned long  int  EC_get_builtin_curves(struct anonymous_typeX35*  r  , unsigned long  int  nitems  );
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
int EC_POINT_set_affine_coordinates_GF2m(const struct ec_group_st*  group  , struct ec_point_st*  p  , const struct bignum_st*  x  , const struct bignum_st*  y  , struct bignum_ctx*  ctx  );
int EC_POINT_get_affine_coordinates_GF2m(const struct ec_group_st*  group  , const struct ec_point_st*  p  , struct bignum_st*  x  , struct bignum_st*  y  , struct bignum_ctx*  ctx  );
int EC_POINT_set_compressed_coordinates_GF2m(const struct ec_group_st*  group  , struct ec_point_st*  p  , const struct bignum_st*  x  , int y_bit, struct bignum_ctx*  ctx  );
unsigned long  int  EC_POINT_point2oct(const struct ec_group_st*  group  , const struct ec_point_st*  p  , enum anonymous_typeY34  form  , unsigned char* buf, unsigned long  int  len  , struct bignum_ctx*  ctx  );
int EC_POINT_oct2point(const struct ec_group_st*  group  , struct ec_point_st*  p  , const unsigned char* buf, unsigned long  int  len  , struct bignum_ctx*  ctx  );
unsigned long  int  EC_POINT_point2buf(const struct ec_group_st*  group  , const struct ec_point_st*  point  , enum anonymous_typeY34  form  , unsigned char** pbuf, struct bignum_ctx*  ctx  );
struct bignum_st*  EC_POINT_point2bn(const struct ec_group_st*    , const struct ec_point_st*    , enum anonymous_typeY34  form  , struct bignum_st*    , struct bignum_ctx*    );
struct ec_point_st*  EC_POINT_bn2point(const struct ec_group_st*    , const struct bignum_st*    , struct ec_point_st*    , struct bignum_ctx*    );
char* EC_POINT_point2hex(const struct ec_group_st*    , const struct ec_point_st*    , enum anonymous_typeY34  form  , struct bignum_ctx*    );
struct ec_point_st*  EC_POINT_hex2point(const struct ec_group_st*    , const char* , struct ec_point_st*    , struct bignum_ctx*    );
int EC_POINT_add(const struct ec_group_st*  group  , struct ec_point_st*  r  , const struct ec_point_st*  a  , const struct ec_point_st*  b  , struct bignum_ctx*  ctx  );
int EC_POINT_dbl(const struct ec_group_st*  group  , struct ec_point_st*  r  , const struct ec_point_st*  a  , struct bignum_ctx*  ctx  );
int EC_POINT_invert(const struct ec_group_st*  group  , struct ec_point_st*  a  , struct bignum_ctx*  ctx  );
int EC_POINT_is_at_infinity(const struct ec_group_st*  group  , const struct ec_point_st*  p  );
int EC_POINT_is_on_curve(const struct ec_group_st*  group  , const struct ec_point_st*  point  , struct bignum_ctx*  ctx  );
int EC_POINT_cmp(const struct ec_group_st*  group  , const struct ec_point_st*  a  , const struct ec_point_st*  b  , struct bignum_ctx*  ctx  );
int EC_POINT_make_affine(const struct ec_group_st*  group  , struct ec_point_st*  point  , struct bignum_ctx*  ctx  );
int EC_POINTs_make_affine(const struct ec_group_st*  group  , unsigned long  int  num  , struct ec_point_st*  points[]  , struct bignum_ctx*  ctx  );
int EC_POINTs_mul(const struct ec_group_st*  group  , struct ec_point_st*  r  , const struct bignum_st*  n  , unsigned long  int  num  , const struct ec_point_st*  p[]  , const struct bignum_st*  m[]  , struct bignum_ctx*  ctx  );
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
int EC_GROUP_get_trinomial_basis(const struct ec_group_st*    , unsigned int* k);
int EC_GROUP_get_pentanomial_basis(const struct ec_group_st*    , unsigned int* k1, unsigned int* k2, unsigned int* k3);
struct ec_group_st*  d2i_ECPKParameters(struct ec_group_st**    , const unsigned char** in, long len);
int i2d_ECPKParameters(const struct ec_group_st*    , unsigned char** out);
int ECPKParameters_print(struct bio_st*  bp  , const struct ec_group_st*  x  , int off);
int ECPKParameters_print_fp(struct __sFILE*  fp  , const struct ec_group_st*  x  , int off);
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
enum anonymous_typeY34  EC_KEY_get_conv_form(const struct ec_key_st*  key  );
void EC_KEY_set_conv_form(struct ec_key_st*  eckey  , enum anonymous_typeY34  cform  );
int EC_KEY_set_ex_data(struct ec_key_st*  key  , int idx, void* arg);
void* EC_KEY_get_ex_data(const struct ec_key_st*  key  , int idx);
void EC_KEY_set_asn1_flag(struct ec_key_st*  eckey  , int asn1_flag);
int EC_KEY_precompute_mult(struct ec_key_st*  key  , struct bignum_ctx*  ctx  );
int EC_KEY_generate_key(struct ec_key_st*  key  );
int EC_KEY_check_key(const struct ec_key_st*  key  );
int EC_KEY_can_sign(const struct ec_key_st*  eckey  );
int EC_KEY_set_public_key_affine_coordinates(struct ec_key_st*  key  , struct bignum_st*  x  , struct bignum_st*  y  );
unsigned long  int  EC_KEY_key2buf(const struct ec_key_st*  key  , enum anonymous_typeY34  form  , unsigned char** pbuf, struct bignum_ctx*  ctx  );
int EC_KEY_oct2key(struct ec_key_st*  key  , const unsigned char* buf, unsigned long  int  len  , struct bignum_ctx*  ctx  );
int EC_KEY_oct2priv(struct ec_key_st*  key  , const unsigned char* buf, unsigned long  int  len  );
unsigned long  int  EC_KEY_priv2oct(const struct ec_key_st*  key  , unsigned char* buf, unsigned long  int  len  );
unsigned long  int  EC_KEY_priv2buf(const struct ec_key_st*  eckey  , unsigned char** pbuf);
struct ec_key_st*  d2i_ECPrivateKey(struct ec_key_st**  key  , const unsigned char** in, long len);
int i2d_ECPrivateKey(const struct ec_key_st*  key  , unsigned char** out);
struct ec_key_st*  d2i_ECParameters(struct ec_key_st**  key  , const unsigned char** in, long len);
int i2d_ECParameters(const struct ec_key_st*  key  , unsigned char** out);
struct ec_key_st*  o2i_ECPublicKey(struct ec_key_st**  key  , const unsigned char** in, long len);
int i2o_ECPublicKey(const struct ec_key_st*  key  , unsigned char** out);
int ECParameters_print(struct bio_st*  bp  , const struct ec_key_st*  key  );
int EC_KEY_print(struct bio_st*  bp  , const struct ec_key_st*  key  , int off);
int ECParameters_print_fp(struct __sFILE*  fp  , const struct ec_key_st*  key  );
int EC_KEY_print_fp(struct __sFILE*  fp  , const struct ec_key_st*  key  , int off);
const struct ec_key_method_st*  EC_KEY_OpenSSL();
const struct ec_key_method_st*  EC_KEY_get_default_method();
void EC_KEY_set_default_method(const struct ec_key_method_st*  meth  );
const struct ec_key_method_st*  EC_KEY_get_method(const struct ec_key_st*  key  );
int EC_KEY_set_method(struct ec_key_st*  key  , const struct ec_key_method_st*  meth  );
struct ec_key_st*  EC_KEY_new_method(struct engine_st*  engine  );
int ECDH_KDF_X9_62(unsigned char* out, unsigned long  int  outlen  , const unsigned char* Z, unsigned long  int  Zlen  , const unsigned char* sinfo, unsigned long  int  sinfolen  , const struct evp_md_st*  md  );
int ECDH_compute_key(void* out, unsigned long  int  outlen  , const struct ec_point_st*  pub_key  , const struct ec_key_st*  ecdh  , void* (*KDF)(const void*,unsigned long  int ,void*,unsigned long  int* ));
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
void EC_KEY_METHOD_set_compute_key(struct ec_key_method_st*  meth  , int (*ckey)(unsigned char**,unsigned long  int* ,const struct ec_point_st* ,const struct ec_key_st* ));
void EC_KEY_METHOD_set_sign(struct ec_key_method_st*  meth  , int (*sign)(int,const unsigned char*,int,unsigned char*,unsigned int*,const struct bignum_st* ,const struct bignum_st* ,struct ec_key_st* ), int (*sign_setup)(struct ec_key_st* ,struct bignum_ctx* ,struct bignum_st** ,struct bignum_st** ), struct ECDSA_SIG_st* (*sign_sig)(const unsigned char*,int,const struct bignum_st* ,const struct bignum_st* ,struct ec_key_st* ));
void EC_KEY_METHOD_set_verify(struct ec_key_method_st*  meth  , int (*verify)(int,const unsigned char*,int,const unsigned char*,int,struct ec_key_st* ), int (*verify_sig)(const unsigned char*,int,const struct ECDSA_SIG_st* ,struct ec_key_st* ));
void EC_KEY_METHOD_get_init(const struct ec_key_method_st*  meth  , int (**pinit)(struct ec_key_st* ), void (**pfinish)(struct ec_key_st* ), int (**pcopy)(struct ec_key_st* ,const struct ec_key_st* ), int (**pset_group)(struct ec_key_st* ,const struct ec_group_st* ), int (**pset_private)(struct ec_key_st* ,const struct bignum_st* ), int (**pset_public)(struct ec_key_st* ,const struct ec_point_st* ));
void EC_KEY_METHOD_get_keygen(const struct ec_key_method_st*  meth  , int (**pkeygen)(struct ec_key_st* ));
void EC_KEY_METHOD_get_compute_key(const struct ec_key_method_st*  meth  , int (**pck)(unsigned char**,unsigned long  int* ,const struct ec_point_st* ,const struct ec_key_st* ));
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
int EVP_PKEY_CTX_get_rsa_mgf1_md_name(struct evp_pkey_ctx_st*  ctx  , char* name, unsigned long  int  namelen  );
int EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(struct evp_pkey_ctx_st*  ctx  , const char* mdname);
int EVP_PKEY_CTX_set_rsa_pss_keygen_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(struct evp_pkey_ctx_st*  ctx  , const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_set_rsa_oaep_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st*  md  );
int EVP_PKEY_CTX_set_rsa_oaep_md_name(struct evp_pkey_ctx_st*  ctx  , const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_get_rsa_oaep_md(struct evp_pkey_ctx_st*  ctx  , const struct evp_md_st**  md  );
int EVP_PKEY_CTX_get_rsa_oaep_md_name(struct evp_pkey_ctx_st*  ctx  , char* name, unsigned long  int  namelen  );
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
int RSA_print_fp(struct __sFILE*  fp  , const struct rsa_st*  r  , int offset);
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
int (*RSA_meth_get_pub_enc(const struct rsa_meth_st*  _function_pointer_result_var_name_a29  ))(int,const unsigned char*,unsigned char*,struct rsa_st* ,int);
int RSA_meth_set_pub_enc(struct rsa_meth_st*  rsa  , int (*pub_enc)(int,const unsigned char*,unsigned char*,struct rsa_st* ,int));
int (*RSA_meth_get_pub_dec(const struct rsa_meth_st*  _function_pointer_result_var_name_a30  ))(int,const unsigned char*,unsigned char*,struct rsa_st* ,int);
int RSA_meth_set_pub_dec(struct rsa_meth_st*  rsa  , int (*pub_dec)(int,const unsigned char*,unsigned char*,struct rsa_st* ,int));
int (*RSA_meth_get_priv_enc(const struct rsa_meth_st*  _function_pointer_result_var_name_a31  ))(int,const unsigned char*,unsigned char*,struct rsa_st* ,int);
int RSA_meth_set_priv_enc(struct rsa_meth_st*  rsa  , int (*priv_enc)(int,const unsigned char*,unsigned char*,struct rsa_st* ,int));
int (*RSA_meth_get_priv_dec(const struct rsa_meth_st*  _function_pointer_result_var_name_a32  ))(int,const unsigned char*,unsigned char*,struct rsa_st* ,int);
int RSA_meth_set_priv_dec(struct rsa_meth_st*  rsa  , int (*priv_dec)(int,const unsigned char*,unsigned char*,struct rsa_st* ,int));
int (*RSA_meth_get_mod_exp(const struct rsa_meth_st*  _function_pointer_result_var_name_a33  ))(struct bignum_st* ,const struct bignum_st* ,struct rsa_st* ,struct bignum_ctx* );
int RSA_meth_set_mod_exp(struct rsa_meth_st*  rsa  , int (*mod_exp)(struct bignum_st* ,const struct bignum_st* ,struct rsa_st* ,struct bignum_ctx* ));
int (*RSA_meth_get_bn_mod_exp(const struct rsa_meth_st*  _function_pointer_result_var_name_a34  ))(struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* );
int RSA_meth_set_bn_mod_exp(struct rsa_meth_st*  rsa  , int (*bn_mod_exp)(struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* ));
int (*RSA_meth_get_init(const struct rsa_meth_st*  _function_pointer_result_var_name_a35  ))(struct rsa_st* );
int RSA_meth_set_init(struct rsa_meth_st*  rsa  , int (*init)(struct rsa_st* ));
int (*RSA_meth_get_finish(const struct rsa_meth_st*  _function_pointer_result_var_name_a36  ))(struct rsa_st* );
int RSA_meth_set_finish(struct rsa_meth_st*  rsa  , int (*finish)(struct rsa_st* ));
int (*RSA_meth_get_sign(const struct rsa_meth_st*  _function_pointer_result_var_name_a37  ))(int,const unsigned char*,unsigned int,unsigned char*,unsigned int*,const struct rsa_st* );
int RSA_meth_set_sign(struct rsa_meth_st*  rsa  , int (*sign)(int,const unsigned char*,unsigned int,unsigned char*,unsigned int*,const struct rsa_st* ));
int (*RSA_meth_get_verify(const struct rsa_meth_st*  _function_pointer_result_var_name_a38  ))(int,const unsigned char*,unsigned int,const unsigned char*,unsigned int,const struct rsa_st* );
int RSA_meth_set_verify(struct rsa_meth_st*  rsa  , int (*verify)(int,const unsigned char*,unsigned int,const unsigned char*,unsigned int,const struct rsa_st* ));
int (*RSA_meth_get_keygen(const struct rsa_meth_st*  _function_pointer_result_var_name_a39  ))(struct rsa_st* ,int,struct bignum_st* ,struct bn_gencb_st* );
int RSA_meth_set_keygen(struct rsa_meth_st*  rsa  , int (*keygen)(struct rsa_st* ,int,struct bignum_st* ,struct bn_gencb_st* ));
int (*RSA_meth_get_multi_prime_keygen(const struct rsa_meth_st*  _function_pointer_result_var_name_a40  ))(struct rsa_st* ,int,int,struct bignum_st* ,struct bn_gencb_st* );
int RSA_meth_set_multi_prime_keygen(struct rsa_meth_st*  meth  , int (*keygen)(struct rsa_st* ,int,int,struct bignum_st* ,struct bn_gencb_st* ));
int EVP_PKEY_CTX_set_dh_paramgen_type(struct evp_pkey_ctx_st*  ctx  , int typ);
int EVP_PKEY_CTX_set_dh_paramgen_gindex(struct evp_pkey_ctx_st*  ctx  , int gindex);
int EVP_PKEY_CTX_set_dh_paramgen_seed(struct evp_pkey_ctx_st*  ctx  , const unsigned char* seed, unsigned long  int  seedlen  );
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
int DHparams_print_fp(struct __sFILE*  fp  , const struct dh_st*  x  );
int DHparams_print(struct bio_st*  bp  , const struct dh_st*  x  );
struct dh_st*  DH_get_1024_160();
struct dh_st*  DH_get_2048_224();
struct dh_st*  DH_get_2048_256();
struct dh_st*  DH_new_by_nid(int nid);
int DH_get_nid(const struct dh_st*  dh  );
int DH_KDF_X9_42(unsigned char* out, unsigned long  int  outlen  , const unsigned char* Z, unsigned long  int  Zlen  , struct asn1_object_st*  key_oid  , const unsigned char* ukm, unsigned long  int  ukmlen  , const struct evp_md_st*  md  );
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
int (*DH_meth_get_generate_key(const struct dh_method*  _function_pointer_result_var_name_a41  ))(struct dh_st* );
int DH_meth_set_generate_key(struct dh_method*  dhm  , int (*generate_key)(struct dh_st* ));
int (*DH_meth_get_compute_key(const struct dh_method*  _function_pointer_result_var_name_a42  ))(unsigned char*,const struct bignum_st* ,struct dh_st* );
int DH_meth_set_compute_key(struct dh_method*  dhm  , int (*compute_key)(unsigned char*,const struct bignum_st* ,struct dh_st* ));
int (*DH_meth_get_bn_mod_exp(const struct dh_method*  _function_pointer_result_var_name_a43  ))(const struct dh_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* );
int DH_meth_set_bn_mod_exp(struct dh_method*  dhm  , int (*bn_mod_exp)(const struct dh_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* ));
int (*DH_meth_get_init(const struct dh_method*  _function_pointer_result_var_name_a44  ))(struct dh_st* );
int DH_meth_set_init(struct dh_method*  dhm  , int (*init)(struct dh_st* ));
int (*DH_meth_get_finish(const struct dh_method*  _function_pointer_result_var_name_a45  ))(struct dh_st* );
int DH_meth_set_finish(struct dh_method*  dhm  , int (*finish)(struct dh_st* ));
int (*DH_meth_get_generate_params(const struct dh_method*  _function_pointer_result_var_name_a46  ))(struct dh_st* ,int,int,struct bn_gencb_st* );
int DH_meth_set_generate_params(struct dh_method*  dhm  , int (*generate_params)(struct dh_st* ,int,int,struct bn_gencb_st* ));
struct dh_st*  DH_generate_parameters(int prime_len, int generator, void (*callback)(int,int,void*), void* cb_arg);
int EVP_PKEY_CTX_set_dsa_paramgen_bits(struct evp_pkey_ctx_st*  ctx  , int nbits);
int EVP_PKEY_CTX_set_dsa_paramgen_q_bits(struct evp_pkey_ctx_st*  ctx  , int qbits);
int EVP_PKEY_CTX_set_dsa_paramgen_md_props(struct evp_pkey_ctx_st*  ctx  , const char* md_name, const char* md_properties);
int EVP_PKEY_CTX_set_dsa_paramgen_gindex(struct evp_pkey_ctx_st*  ctx  , int gindex);
int EVP_PKEY_CTX_set_dsa_paramgen_type(struct evp_pkey_ctx_st*  ctx  , const char* name);
int EVP_PKEY_CTX_set_dsa_paramgen_seed(struct evp_pkey_ctx_st*  ctx  , const unsigned char* seed, unsigned long  int  seedlen  );
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
int DSAparams_print_fp(struct __sFILE*  fp  , const struct dsa_st*  x  );
int DSA_print_fp(struct __sFILE*  bp  , const struct dsa_st*  x  , int off);
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
struct DSA_SIG_st* (*DSA_meth_get_sign(const struct dsa_method*  _function_pointer_result_var_name_a47  ))(const unsigned char*,int,struct dsa_st* );
int DSA_meth_set_sign(struct dsa_method*  dsam  , struct DSA_SIG_st* (*sign)(const unsigned char*,int,struct dsa_st* ));
int (*DSA_meth_get_sign_setup(const struct dsa_method*  _function_pointer_result_var_name_a48  ))(struct dsa_st* ,struct bignum_ctx* ,struct bignum_st** ,struct bignum_st** );
int DSA_meth_set_sign_setup(struct dsa_method*  dsam  , int (*sign_setup)(struct dsa_st* ,struct bignum_ctx* ,struct bignum_st** ,struct bignum_st** ));
int (*DSA_meth_get_verify(const struct dsa_method*  _function_pointer_result_var_name_a49  ))(const unsigned char*,int,struct DSA_SIG_st* ,struct dsa_st* );
int DSA_meth_set_verify(struct dsa_method*  dsam  , int (*verify)(const unsigned char*,int,struct DSA_SIG_st* ,struct dsa_st* ));
int (*DSA_meth_get_mod_exp(const struct dsa_method*  _function_pointer_result_var_name_a50  ))(struct dsa_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* );
int DSA_meth_set_mod_exp(struct dsa_method*  dsam  , int (*mod_exp)(struct dsa_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* ));
int (*DSA_meth_get_bn_mod_exp(const struct dsa_method*  _function_pointer_result_var_name_a51  ))(struct dsa_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* );
int DSA_meth_set_bn_mod_exp(struct dsa_method*  dsam  , int (*bn_mod_exp)(struct dsa_st* ,struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,const struct bignum_st* ,struct bignum_ctx* ,struct bn_mont_ctx_st* ));
int (*DSA_meth_get_init(const struct dsa_method*  _function_pointer_result_var_name_a52  ))(struct dsa_st* );
int DSA_meth_set_init(struct dsa_method*  dsam  , int (*init)(struct dsa_st* ));
int (*DSA_meth_get_finish(const struct dsa_method*  _function_pointer_result_var_name_a53  ))(struct dsa_st* );
int DSA_meth_set_finish(struct dsa_method*  dsam  , int (*finish)(struct dsa_st* ));
int (*DSA_meth_get_paramgen(const struct dsa_method*  _function_pointer_result_var_name_a54  ))(struct dsa_st* ,int,const unsigned char*,int,int*,unsigned long  int*,struct bn_gencb_st* );
int DSA_meth_set_paramgen(struct dsa_method*  dsam  , int (*paramgen)(struct dsa_st* ,int,const unsigned char*,int,int*,unsigned long  int*,struct bn_gencb_st* ));
int (*DSA_meth_get_keygen(const struct dsa_method*  _function_pointer_result_var_name_a55  ))(struct dsa_st* );
int DSA_meth_set_keygen(struct dsa_method*  dsam  , int (*keygen)(struct dsa_st* ));
int SHA1_Init(struct SHAstate_st*  c  );
int SHA1_Update(struct SHAstate_st*  c  , const void* data, unsigned long  int  len  );
int SHA1_Final(unsigned char* md, struct SHAstate_st*  c  );
void SHA1_Transform(struct SHAstate_st*  c  , const unsigned char* data);
unsigned char* SHA1(const unsigned char* d, unsigned long  int  n  , unsigned char* md);
int SHA224_Init(struct SHA256state_st*  c  );
int SHA224_Update(struct SHA256state_st*  c  , const void* data, unsigned long  int  len  );
int SHA224_Final(unsigned char* md, struct SHA256state_st*  c  );
int SHA256_Init(struct SHA256state_st*  c  );
int SHA256_Update(struct SHA256state_st*  c  , const void* data, unsigned long  int  len  );
int SHA256_Final(unsigned char* md, struct SHA256state_st*  c  );
void SHA256_Transform(struct SHA256state_st*  c  , const unsigned char* data);
unsigned char* SHA224(const unsigned char* d, unsigned long  int  n  , unsigned char* md);
unsigned char* SHA256(const unsigned char* d, unsigned long  int  n  , unsigned char* md);
int SHA384_Init(struct SHA512state_st*  c  );
int SHA384_Update(struct SHA512state_st*  c  , const void* data, unsigned long  int  len  );
int SHA384_Final(unsigned char* md, struct SHA512state_st*  c  );
int SHA512_Init(struct SHA512state_st*  c  );
int SHA512_Update(struct SHA512state_st*  c  , const void* data, unsigned long  int  len  );
int SHA512_Final(unsigned char* md, struct SHA512state_st*  c  );
void SHA512_Transform(struct SHA512state_st*  c  , const unsigned char* data);
unsigned char* SHA384(const unsigned char* d, unsigned long  int  n  , unsigned char* md);
unsigned char* SHA512(const unsigned char* d, unsigned long  int  n  , unsigned char* md);
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
void OPENSSL_LH_stats(const struct lhash_st*  lh  , struct __sFILE*  fp  );
void OPENSSL_LH_node_stats(const struct lhash_st*  lh  , struct __sFILE*  fp  );
void OPENSSL_LH_node_usage_stats(const struct lhash_st*  lh  , struct __sFILE*  fp  );
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
int (*X509_TRUST_set_default(int (*_function_pointer_result_var_name_a56)(int,struct x509_st* ,int)))(int,struct x509_st* ,int);
int X509_check_trust(struct x509_st*  x  , int id, int flags);
int X509_verify_cert(struct x509_store_ctx_st*  ctx  );
int X509_STORE_CTX_verify(struct x509_store_ctx_st*  ctx  );
struct stack_st_X509*  X509_build_chain(struct x509_st*  target  , struct stack_st_X509*  certs  , struct x509_store_st*  store  , int with_self_signed, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_STORE_set_depth(struct x509_store_st*  store  , int depth);
int X509_STORE_CTX_print_verify_cb(int ok, struct x509_store_ctx_st*  ctx  );
void X509_STORE_CTX_set_depth(struct x509_store_ctx_st*  ctx  , int depth);
int X509_OBJECT_idx_by_subject(struct stack_st_X509_OBJECT*  h  , enum anonymous_typeY38  type  , const struct X509_name_st*  name  );
struct x509_object_st*  X509_OBJECT_retrieve_by_subject(struct stack_st_X509_OBJECT*  h  , enum anonymous_typeY38  type  , const struct X509_name_st*  name  );
struct x509_object_st*  X509_OBJECT_retrieve_match(struct stack_st_X509_OBJECT*  h  , struct x509_object_st*  x  );
int X509_OBJECT_up_ref_count(struct x509_object_st*  a  );
struct x509_object_st*  X509_OBJECT_new();
void X509_OBJECT_free(struct x509_object_st*  a  );
enum anonymous_typeY38  X509_OBJECT_get_type(const struct x509_object_st*  a  );
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
int (*X509_LOOKUP_meth_get_new_item(const struct x509_lookup_method_st*  _function_pointer_result_var_name_a57  ))(struct x509_lookup_st* );
int X509_LOOKUP_meth_set_free(struct x509_lookup_method_st*  method  , void (*free_fn)(struct x509_lookup_st* ));
void (*X509_LOOKUP_meth_get_free(const struct x509_lookup_method_st*  _function_pointer_result_var_name_a58  ))(struct x509_lookup_st* );
int X509_LOOKUP_meth_set_init(struct x509_lookup_method_st*  method  , int (*init)(struct x509_lookup_st* ));
int (*X509_LOOKUP_meth_get_init(const struct x509_lookup_method_st*  _function_pointer_result_var_name_a59  ))(struct x509_lookup_st* );
int X509_LOOKUP_meth_set_shutdown(struct x509_lookup_method_st*  method  , int (*shutdown)(struct x509_lookup_st* ));
int (*X509_LOOKUP_meth_get_shutdown(const struct x509_lookup_method_st*  _function_pointer_result_var_name_a60  ))(struct x509_lookup_st* );
int X509_LOOKUP_meth_set_ctrl(struct x509_lookup_method_st*  method  , int (*ctrl_fn)(struct x509_lookup_st* ,int,const char*,long,char**)  );
int (*X509_LOOKUP_meth_get_ctrl(const struct x509_lookup_method_st*  method  ))(struct x509_lookup_st* ,int,const char*,long,char**) ;
int X509_LOOKUP_meth_set_get_by_subject(struct x509_lookup_method_st*  method  , int (*fn)(struct x509_lookup_st* ,enum anonymous_typeY38 ,const struct X509_name_st* ,struct x509_object_st* )  );
int (*X509_LOOKUP_meth_get_get_by_subject(const struct x509_lookup_method_st*  method  ))(struct x509_lookup_st* ,enum anonymous_typeY38 ,const struct X509_name_st* ,struct x509_object_st* ) ;
int X509_LOOKUP_meth_set_get_by_issuer_serial(struct x509_lookup_method_st*  method  , int (*fn)(struct x509_lookup_st* ,enum anonymous_typeY38 ,const struct X509_name_st* ,const struct asn1_string_st* ,struct x509_object_st* )  );
int (*X509_LOOKUP_meth_get_get_by_issuer_serial(const struct x509_lookup_method_st*  method  ))(struct x509_lookup_st* ,enum anonymous_typeY38 ,const struct X509_name_st* ,const struct asn1_string_st* ,struct x509_object_st* ) ;
int X509_LOOKUP_meth_set_get_by_fingerprint(struct x509_lookup_method_st*  method  , int (*fn)(struct x509_lookup_st* ,enum anonymous_typeY38 ,const unsigned char*,int,struct x509_object_st* )  );
int (*X509_LOOKUP_meth_get_get_by_fingerprint(const struct x509_lookup_method_st*  method  ))(struct x509_lookup_st* ,enum anonymous_typeY38 ,const unsigned char*,int,struct x509_object_st* ) ;
int X509_LOOKUP_meth_set_get_by_alias(struct x509_lookup_method_st*  method  , int (*fn)(struct x509_lookup_st* ,enum anonymous_typeY38 ,const char*,int,struct x509_object_st* )  );
int (*X509_LOOKUP_meth_get_get_by_alias(const struct x509_lookup_method_st*  method  ))(struct x509_lookup_st* ,enum anonymous_typeY38 ,const char*,int,struct x509_object_st* ) ;
int X509_STORE_add_cert(struct x509_store_st*  xs  , struct x509_st*  x  );
int X509_STORE_add_crl(struct x509_store_st*  xs  , struct X509_crl_st*  x  );
int X509_STORE_CTX_get_by_subject(const struct x509_store_ctx_st*  vs  , enum anonymous_typeY38  type  , const struct X509_name_st*  name  , struct x509_object_st*  ret  );
struct x509_object_st*  X509_STORE_CTX_get_obj_by_subject(struct x509_store_ctx_st*  vs  , enum anonymous_typeY38  type  , const struct X509_name_st*  name  );
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
int X509_LOOKUP_by_subject(struct x509_lookup_st*  ctx  , enum anonymous_typeY38  type  , const struct X509_name_st*  name  , struct x509_object_st*  ret  );
int X509_LOOKUP_by_subject_ex(struct x509_lookup_st*  ctx  , enum anonymous_typeY38  type  , const struct X509_name_st*  name  , struct x509_object_st*  ret  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int X509_LOOKUP_by_issuer_serial(struct x509_lookup_st*  ctx  , enum anonymous_typeY38  type  , const struct X509_name_st*  name  , const struct asn1_string_st*  serial  , struct x509_object_st*  ret  );
int X509_LOOKUP_by_fingerprint(struct x509_lookup_st*  ctx  , enum anonymous_typeY38  type  , const unsigned char* bytes, int len, struct x509_object_st*  ret  );
int X509_LOOKUP_by_alias(struct x509_lookup_st*  ctx  , enum anonymous_typeY38  type  , const char* str, int len, struct x509_object_st*  ret  );
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
void X509_STORE_CTX_set_ocsp_resp(struct x509_store_ctx_st*  ctx  , struct stack_st_OCSP_RESPONSE*  sk  );
int X509_STORE_CTX_set_purpose(struct x509_store_ctx_st*  ctx  , int purpose);
int X509_STORE_CTX_set_trust(struct x509_store_ctx_st*  ctx  , int trust);
int X509_STORE_CTX_purpose_inherit(struct x509_store_ctx_st*  ctx  , int def_purpose, int purpose, int trust);
void X509_STORE_CTX_set_flags(struct x509_store_ctx_st*  ctx  , unsigned long  int flags);
void X509_STORE_CTX_set_time(struct x509_store_ctx_st*  ctx  , unsigned long  int flags, long  t  );
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
long  X509_VERIFY_PARAM_get_time(const struct X509_VERIFY_PARAM_st*  param  );
void X509_VERIFY_PARAM_set_time(struct X509_VERIFY_PARAM_st*  param  , long  t  );
int X509_VERIFY_PARAM_add0_policy(struct X509_VERIFY_PARAM_st*  param  , struct asn1_object_st*  policy  );
int X509_VERIFY_PARAM_set1_policies(struct X509_VERIFY_PARAM_st*  param  , struct stack_st_ASN1_OBJECT*  policies  );
int X509_VERIFY_PARAM_set_inh_flags(struct X509_VERIFY_PARAM_st*  param  , unsigned int  flags  );
unsigned int  X509_VERIFY_PARAM_get_inh_flags(const struct X509_VERIFY_PARAM_st*  param  );
char* X509_VERIFY_PARAM_get0_host(struct X509_VERIFY_PARAM_st*  param  , int idx);
int X509_VERIFY_PARAM_set1_host(struct X509_VERIFY_PARAM_st*  param  , const char* name, unsigned long  int  namelen  );
int X509_VERIFY_PARAM_add1_host(struct X509_VERIFY_PARAM_st*  param  , const char* name, unsigned long  int  namelen  );
void X509_VERIFY_PARAM_set_hostflags(struct X509_VERIFY_PARAM_st*  param  , unsigned int flags);
unsigned int X509_VERIFY_PARAM_get_hostflags(const struct X509_VERIFY_PARAM_st*  param  );
char* X509_VERIFY_PARAM_get0_peername(const struct X509_VERIFY_PARAM_st*  param  );
void X509_VERIFY_PARAM_move_peername(struct X509_VERIFY_PARAM_st*    , struct X509_VERIFY_PARAM_st*    );
char* X509_VERIFY_PARAM_get0_email(struct X509_VERIFY_PARAM_st*  param  );
int X509_VERIFY_PARAM_set1_email(struct X509_VERIFY_PARAM_st*  param  , const char* email, unsigned long  int  emaillen  );
char* X509_VERIFY_PARAM_get1_ip_asc(struct X509_VERIFY_PARAM_st*  param  );
int X509_VERIFY_PARAM_set1_ip(struct X509_VERIFY_PARAM_st*  param  , const unsigned char* ip, unsigned long  int  iplen  );
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
struct pkcs7_st*  d2i_PKCS7_fp(struct __sFILE*  fp  , struct pkcs7_st**  p7  );
int i2d_PKCS7_fp(struct __sFILE*  fp  , const struct pkcs7_st*  p7  );
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
struct lhash_st_CONF_VALUE*  CONF_load_fp(struct lhash_st_CONF_VALUE*  conf  , struct __sFILE*  fp  , long* eline);
struct lhash_st_CONF_VALUE*  CONF_load_bio(struct lhash_st_CONF_VALUE*  conf  , struct bio_st*  bp  , long* eline);
struct stack_st_CONF_VALUE*  CONF_get_section(struct lhash_st_CONF_VALUE*  conf  , const char* section);
char* CONF_get_string(struct lhash_st_CONF_VALUE*  conf  , const char* group, const char* name);
long CONF_get_number(struct lhash_st_CONF_VALUE*  conf  , const char* group, const char* name);
void CONF_free(struct lhash_st_CONF_VALUE*  conf  );
int CONF_dump_fp(struct lhash_st_CONF_VALUE*  conf  , struct __sFILE*  out  );
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
int NCONF_load_fp(struct conf_st*  conf  , struct __sFILE*  fp  , long* eline);
int NCONF_load_bio(struct conf_st*  conf  , struct bio_st*  bp  , long* eline);
struct stack_st_OPENSSL_CSTRING*  NCONF_get_section_names(const struct conf_st*  conf  );
struct stack_st_CONF_VALUE*  NCONF_get_section(const struct conf_st*  conf  , const char* section);
char* NCONF_get_string(const struct conf_st*  conf  , const char* group, const char* name);
int NCONF_get_number_e(const struct conf_st*  conf  , const char* group, const char* name, long* result);
int NCONF_dump_fp(const struct conf_st*  conf  , struct __sFILE*  out  );
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
unsigned long  int  OSSL_HTTP_REQ_CTX_get_resp_len(const struct ossl_http_req_ctx_st*  rctx  );
void OSSL_HTTP_REQ_CTX_set_max_response_length(struct ossl_http_req_ctx_st*  rctx  , unsigned long  int len);
void OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(struct ossl_http_req_ctx_st*  rctx  , unsigned long  int  count  );
int OSSL_HTTP_is_alive(const struct ossl_http_req_ctx_st*  rctx  );
struct ossl_http_req_ctx_st*  OSSL_HTTP_open(const char* server, const char* port, const char* proxy, const char* no_proxy, int use_ssl, struct bio_st*  bio  , struct bio_st*  rbio  , struct bio_st* (*bio_update_fn)(struct bio_st* ,void*,int,int)  , void* arg, int buf_size, int overall_timeout);
int OSSL_HTTP_proxy_connect(struct bio_st*  bio  , const char* server, const char* port, const char* proxyuser, const char* proxypass, int timeout, struct bio_st*  bio_err  , const char* prog);
int OSSL_HTTP_set1_request(struct ossl_http_req_ctx_st*  rctx  , const char* path, const struct stack_st_CONF_VALUE*  headers  , const char* content_type, struct bio_st*  req  , const char* expected_content_type, int expect_asn1, unsigned long  int  max_resp_len  , int timeout, int keep_alive);
struct bio_st*  OSSL_HTTP_exchange(struct ossl_http_req_ctx_st*  rctx  , char** redirection_url);
struct bio_st*  OSSL_HTTP_get(const char* url, const char* proxy, const char* no_proxy, struct bio_st*  bio  , struct bio_st*  rbio  , struct bio_st* (*bio_update_fn)(struct bio_st* ,void*,int,int)  , void* arg, int buf_size, const struct stack_st_CONF_VALUE*  headers  , const char* expected_content_type, int expect_asn1, unsigned long  int  max_resp_len  , int timeout);
struct bio_st*  OSSL_HTTP_transfer(struct ossl_http_req_ctx_st**  prctx  , const char* server, const char* port, const char* path, int use_ssl, const char* proxy, const char* no_proxy, struct bio_st*  bio  , struct bio_st*  rbio  , struct bio_st* (*bio_update_fn)(struct bio_st* ,void*,int,int)  , void* arg, int buf_size, const struct stack_st_CONF_VALUE*  headers  , const char* content_type, struct bio_st*  req  , const char* expected_content_type, int expect_asn1, unsigned long  int  max_resp_len  , int timeout, int keep_alive);
int OSSL_HTTP_close(struct ossl_http_req_ctx_st*  rctx  , int ok);
int OSSL_HTTP_parse_url(const char* url, int* pssl, char** puser, char** phost, char** pport, int* pport_num, char** ppath, char** pquery, char** pfrag);
const char* OSSL_HTTP_adapt_proxy(const char* proxy, const char* no_proxy, const char* server, int use_ssl);
struct x509_st*  d2i_X509_fp(struct __sFILE*  fp  , struct x509_st**  x509  );
int i2d_X509_fp(struct __sFILE*  fp  , const struct x509_st*  x509  );
struct X509_crl_st*  d2i_X509_CRL_fp(struct __sFILE*  fp  , struct X509_crl_st**  crl  );
int i2d_X509_CRL_fp(struct __sFILE*  fp  , const struct X509_crl_st*  crl  );
struct X509_req_st*  d2i_X509_REQ_fp(struct __sFILE*  fp  , struct X509_req_st**  req  );
int i2d_X509_REQ_fp(struct __sFILE*  fp  , const struct X509_req_st*  req  );
struct rsa_st*  d2i_RSAPrivateKey_fp(struct __sFILE*  fp  , struct rsa_st**  rsa  );
int i2d_RSAPrivateKey_fp(struct __sFILE*  fp  , const struct rsa_st*  rsa  );
struct rsa_st*  d2i_RSAPublicKey_fp(struct __sFILE*  fp  , struct rsa_st**  rsa  );
int i2d_RSAPublicKey_fp(struct __sFILE*  fp  , const struct rsa_st*  rsa  );
struct rsa_st*  d2i_RSA_PUBKEY_fp(struct __sFILE*  fp  , struct rsa_st**  rsa  );
int i2d_RSA_PUBKEY_fp(struct __sFILE*  fp  , const struct rsa_st*  rsa  );
struct dsa_st*  d2i_DSA_PUBKEY_fp(struct __sFILE*  fp  , struct dsa_st**  dsa  );
int i2d_DSA_PUBKEY_fp(struct __sFILE*  fp  , const struct dsa_st*  dsa  );
struct dsa_st*  d2i_DSAPrivateKey_fp(struct __sFILE*  fp  , struct dsa_st**  dsa  );
int i2d_DSAPrivateKey_fp(struct __sFILE*  fp  , const struct dsa_st*  dsa  );
struct ec_key_st*  d2i_EC_PUBKEY_fp(struct __sFILE*  fp  , struct ec_key_st**  eckey  );
int i2d_EC_PUBKEY_fp(struct __sFILE*  fp  , const struct ec_key_st*  eckey  );
struct ec_key_st*  d2i_ECPrivateKey_fp(struct __sFILE*  fp  , struct ec_key_st**  eckey  );
int i2d_ECPrivateKey_fp(struct __sFILE*  fp  , const struct ec_key_st*  eckey  );
struct X509_sig_st*  d2i_PKCS8_fp(struct __sFILE*  fp  , struct X509_sig_st**  p8  );
int i2d_PKCS8_fp(struct __sFILE*  fp  , const struct X509_sig_st*  p8  );
struct X509_pubkey_st*  d2i_X509_PUBKEY_fp(struct __sFILE*  fp  , struct X509_pubkey_st**  xpk  );
int i2d_X509_PUBKEY_fp(struct __sFILE*  fp  , const struct X509_pubkey_st*  xpk  );
struct pkcs8_priv_key_info_st*  d2i_PKCS8_PRIV_KEY_INFO_fp(struct __sFILE*  fp  , struct pkcs8_priv_key_info_st**  p8inf  );
int i2d_PKCS8_PRIV_KEY_INFO_fp(struct __sFILE*  fp  , const struct pkcs8_priv_key_info_st*  p8inf  );
int i2d_PKCS8PrivateKeyInfo_fp(struct __sFILE*  fp  , const struct evp_pkey_st*  key  );
int i2d_PrivateKey_fp(struct __sFILE*  fp  , const struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  d2i_PrivateKey_ex_fp(struct __sFILE*  fp  , struct evp_pkey_st**  a  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  d2i_PrivateKey_fp(struct __sFILE*  fp  , struct evp_pkey_st**  a  );
int i2d_PUBKEY_fp(struct __sFILE*  fp  , const struct evp_pkey_st*  pkey  );
struct evp_pkey_st*  d2i_PUBKEY_ex_fp(struct __sFILE*  fp  , struct evp_pkey_st**  a  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  d2i_PUBKEY_fp(struct __sFILE*  fp  , struct evp_pkey_st**  a  );
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
int X509_cmp_time(const struct asn1_string_st*  s  , long*  t  );
int X509_cmp_current_time(const struct asn1_string_st*  s  );
int X509_cmp_timeframe(const struct X509_VERIFY_PARAM_st*  vpm  , const struct asn1_string_st*  start  , const struct asn1_string_st*  end  );
struct asn1_string_st*  X509_time_adj(struct asn1_string_st*  s  , long adj, long*  t  );
struct asn1_string_st*  X509_time_adj_ex(struct asn1_string_st*  s  , int offset_day, long offset_sec, long*  t  );
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
const struct X509_algor_st*  X509_CRL_get0_tbs_sigalg(const struct X509_crl_st*  crl  );
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
int X509_print_ex_fp(struct __sFILE*  bp  , struct x509_st*  x  , unsigned long  int nmflag, unsigned long  int cflag);
int X509_print_fp(struct __sFILE*  bp  , struct x509_st*  x  );
int X509_CRL_print_fp(struct __sFILE*  bp  , struct X509_crl_st*  x  );
int X509_REQ_print_fp(struct __sFILE*  bp  , struct X509_req_st*  req  );
int X509_NAME_print_ex_fp(struct __sFILE*  fp  , const struct X509_name_st*  nm  , int indent, unsigned long  int flags);
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
int X509_NAME_get0_der(const struct X509_name_st*  nm  , const unsigned char** pder, unsigned long  int*  pderlen  );
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
struct anonymous_typeX38*  PBMAC1PARAM_new();
void PBMAC1PARAM_free(struct anonymous_typeX38*  a  );
struct anonymous_typeX38*  d2i_PBMAC1PARAM(struct anonymous_typeX38**  a  , const unsigned char** in, long len);
int i2d_PBMAC1PARAM(const struct anonymous_typeX38*  a  , unsigned char** out);
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
struct X509_algor_st*  PKCS5_pbe2_set_scrypt(const struct evp_cipher_st*  cipher  , const unsigned char* salt, int saltlen, unsigned char* aiv, unsigned long  long  N  , unsigned long  long  r  , unsigned long  long  p  );
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
int PEM_read(struct __sFILE*  fp  , char** name, char** header, unsigned char** data, long* len);
int PEM_write(struct __sFILE*  fp  , const char* name, const char* hdr, const unsigned char* data, long len);
void* PEM_ASN1_read(void* (*(*d2i))(void**,const unsigned char**,long)  , const char* name, struct __sFILE*  fp  , void** x, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_ASN1_write(int (*(*i2d))(const void*,unsigned char**)  , const char* name, struct __sFILE*  fp  , const void* x, const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*callback))(char*,int,int,void*)  , void* u);
struct stack_st_X509_INFO*  PEM_X509_INFO_read(struct __sFILE*  fp  , struct stack_st_X509_INFO*  sk  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct stack_st_X509_INFO*  PEM_X509_INFO_read_ex(struct __sFILE*  fp  , struct stack_st_X509_INFO*  sk  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_SignInit(struct evp_md_ctx_st*  ctx  , struct evp_md_st*  type  );
int PEM_SignUpdate(struct evp_md_ctx_st*  ctx  , const unsigned char* d, unsigned int cnt);
int PEM_SignFinal(struct evp_md_ctx_st*  ctx  , unsigned char* sigret, unsigned int* siglen, struct evp_pkey_st*  pkey  );
int PEM_def_callback(char* buf, int num, int rwflag, void* userdata);
void PEM_proc_type(char* buf, int type);
void PEM_dek_info(char* buf, const char* type, int len, const char* str);
struct x509_st*  PEM_read_bio_X509(struct bio_st*  out  , struct x509_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct x509_st*  PEM_read_X509(struct __sFILE*  out  , struct x509_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_X509(struct bio_st*  out  , const struct x509_st*  x  );
int PEM_write_X509(struct __sFILE*  out  , const struct x509_st*  x  );
struct x509_st*  PEM_read_bio_X509_AUX(struct bio_st*  out  , struct x509_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct x509_st*  PEM_read_X509_AUX(struct __sFILE*  out  , struct x509_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_X509_AUX(struct bio_st*  out  , const struct x509_st*  x  );
int PEM_write_X509_AUX(struct __sFILE*  out  , const struct x509_st*  x  );
struct X509_req_st*  PEM_read_bio_X509_REQ(struct bio_st*  out  , struct X509_req_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct X509_req_st*  PEM_read_X509_REQ(struct __sFILE*  out  , struct X509_req_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_X509_REQ(struct bio_st*  out  , const struct X509_req_st*  x  );
int PEM_write_X509_REQ(struct __sFILE*  out  , const struct X509_req_st*  x  );
int PEM_write_bio_X509_REQ_NEW(struct bio_st*  out  , const struct X509_req_st*  x  );
int PEM_write_X509_REQ_NEW(struct __sFILE*  out  , const struct X509_req_st*  x  );
struct X509_crl_st*  PEM_read_bio_X509_CRL(struct bio_st*  out  , struct X509_crl_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct X509_crl_st*  PEM_read_X509_CRL(struct __sFILE*  out  , struct X509_crl_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_X509_CRL(struct bio_st*  out  , const struct X509_crl_st*  x  );
int PEM_write_X509_CRL(struct __sFILE*  out  , const struct X509_crl_st*  x  );
struct X509_pubkey_st*  PEM_read_bio_X509_PUBKEY(struct bio_st*  out  , struct X509_pubkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct X509_pubkey_st*  PEM_read_X509_PUBKEY(struct __sFILE*  out  , struct X509_pubkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_X509_PUBKEY(struct bio_st*  out  , const struct X509_pubkey_st*  x  );
int PEM_write_X509_PUBKEY(struct __sFILE*  out  , const struct X509_pubkey_st*  x  );
struct pkcs7_st*  PEM_read_bio_PKCS7(struct bio_st*  out  , struct pkcs7_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct pkcs7_st*  PEM_read_PKCS7(struct __sFILE*  out  , struct pkcs7_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PKCS7(struct bio_st*  out  , const struct pkcs7_st*  x  );
int PEM_write_PKCS7(struct __sFILE*  out  , const struct pkcs7_st*  x  );
struct Netscape_certificate_sequence*  PEM_read_bio_NETSCAPE_CERT_SEQUENCE(struct bio_st*  out  , struct Netscape_certificate_sequence**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct Netscape_certificate_sequence*  PEM_read_NETSCAPE_CERT_SEQUENCE(struct __sFILE*  out  , struct Netscape_certificate_sequence**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(struct bio_st*  out  , const struct Netscape_certificate_sequence*  x  );
int PEM_write_NETSCAPE_CERT_SEQUENCE(struct __sFILE*  out  , const struct Netscape_certificate_sequence*  x  );
struct X509_sig_st*  PEM_read_bio_PKCS8(struct bio_st*  out  , struct X509_sig_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct X509_sig_st*  PEM_read_PKCS8(struct __sFILE*  out  , struct X509_sig_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PKCS8(struct bio_st*  out  , const struct X509_sig_st*  x  );
int PEM_write_PKCS8(struct __sFILE*  out  , const struct X509_sig_st*  x  );
struct pkcs8_priv_key_info_st*  PEM_read_bio_PKCS8_PRIV_KEY_INFO(struct bio_st*  out  , struct pkcs8_priv_key_info_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct pkcs8_priv_key_info_st*  PEM_read_PKCS8_PRIV_KEY_INFO(struct __sFILE*  out  , struct pkcs8_priv_key_info_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PKCS8_PRIV_KEY_INFO(struct bio_st*  out  , const struct pkcs8_priv_key_info_st*  x  );
int PEM_write_PKCS8_PRIV_KEY_INFO(struct __sFILE*  out  , const struct pkcs8_priv_key_info_st*  x  );
struct rsa_st*  PEM_read_bio_RSAPrivateKey(struct bio_st*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct rsa_st*  PEM_read_RSAPrivateKey(struct __sFILE*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_RSAPrivateKey(struct bio_st*  out  , const struct rsa_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_RSAPrivateKey(struct __sFILE*  out  , const struct rsa_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct rsa_st*  PEM_read_bio_RSAPublicKey(struct bio_st*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct rsa_st*  PEM_read_RSAPublicKey(struct __sFILE*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_RSAPublicKey(struct bio_st*  out  , const struct rsa_st*  x  );
int PEM_write_RSAPublicKey(struct __sFILE*  out  , const struct rsa_st*  x  );
struct rsa_st*  PEM_read_bio_RSA_PUBKEY(struct bio_st*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct rsa_st*  PEM_read_RSA_PUBKEY(struct __sFILE*  out  , struct rsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_RSA_PUBKEY(struct bio_st*  out  , const struct rsa_st*  x  );
int PEM_write_RSA_PUBKEY(struct __sFILE*  out  , const struct rsa_st*  x  );
struct dsa_st*  PEM_read_bio_DSAPrivateKey(struct bio_st*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct dsa_st*  PEM_read_DSAPrivateKey(struct __sFILE*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_DSAPrivateKey(struct bio_st*  out  , const struct dsa_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_DSAPrivateKey(struct __sFILE*  out  , const struct dsa_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct dsa_st*  PEM_read_bio_DSA_PUBKEY(struct bio_st*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct dsa_st*  PEM_read_DSA_PUBKEY(struct __sFILE*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_DSA_PUBKEY(struct bio_st*  out  , const struct dsa_st*  x  );
int PEM_write_DSA_PUBKEY(struct __sFILE*  out  , const struct dsa_st*  x  );
struct dsa_st*  PEM_read_bio_DSAparams(struct bio_st*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct dsa_st*  PEM_read_DSAparams(struct __sFILE*  out  , struct dsa_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_DSAparams(struct bio_st*  out  , const struct dsa_st*  x  );
int PEM_write_DSAparams(struct __sFILE*  out  , const struct dsa_st*  x  );
struct ec_group_st*  PEM_read_bio_ECPKParameters(struct bio_st*  out  , struct ec_group_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct ec_group_st*  PEM_read_ECPKParameters(struct __sFILE*  out  , struct ec_group_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_ECPKParameters(struct bio_st*  out  , const struct ec_group_st*  x  );
int PEM_write_ECPKParameters(struct __sFILE*  out  , const struct ec_group_st*  x  );
struct ec_key_st*  PEM_read_bio_ECPrivateKey(struct bio_st*  out  , struct ec_key_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct ec_key_st*  PEM_read_ECPrivateKey(struct __sFILE*  out  , struct ec_key_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_ECPrivateKey(struct bio_st*  out  , const struct ec_key_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_ECPrivateKey(struct __sFILE*  out  , const struct ec_key_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct ec_key_st*  PEM_read_bio_EC_PUBKEY(struct bio_st*  out  , struct ec_key_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct ec_key_st*  PEM_read_EC_PUBKEY(struct __sFILE*  out  , struct ec_key_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_EC_PUBKEY(struct bio_st*  out  , const struct ec_key_st*  x  );
int PEM_write_EC_PUBKEY(struct __sFILE*  out  , const struct ec_key_st*  x  );
struct dh_st*  PEM_read_bio_DHparams(struct bio_st*  out  , struct dh_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct dh_st*  PEM_read_DHparams(struct __sFILE*  out  , struct dh_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_DHparams(struct bio_st*  out  , const struct dh_st*  x  );
int PEM_write_DHparams(struct __sFILE*  out  , const struct dh_st*  x  );
int PEM_write_bio_DHxparams(struct bio_st*  out  , const struct dh_st*  x  );
int PEM_write_DHxparams(struct __sFILE*  out  , const struct dh_st*  x  );
struct evp_pkey_st*  PEM_read_bio_PrivateKey(struct bio_st*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  PEM_read_bio_PrivateKey_ex(struct bio_st*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  PEM_read_PrivateKey(struct __sFILE*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  PEM_read_PrivateKey_ex(struct __sFILE*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_write_bio_PrivateKey(struct bio_st*  out  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PrivateKey_ex(struct bio_st*  out  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_write_PrivateKey(struct __sFILE*  out  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_PrivateKey_ex(struct __sFILE*  out  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  PEM_read_bio_PUBKEY(struct bio_st*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  PEM_read_bio_PUBKEY_ex(struct bio_st*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct evp_pkey_st*  PEM_read_PUBKEY(struct __sFILE*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  PEM_read_PUBKEY_ex(struct __sFILE*  out  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_write_bio_PUBKEY(struct bio_st*  out  , const struct evp_pkey_st*  x  );
int PEM_write_bio_PUBKEY_ex(struct bio_st*  out  , const struct evp_pkey_st*  x  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_write_PUBKEY(struct __sFILE*  out  , const struct evp_pkey_st*  x  );
int PEM_write_PUBKEY_ex(struct __sFILE*  out  , const struct evp_pkey_st*  x  , struct ossl_lib_ctx_st*  libctx  , const char* propq);
int PEM_write_bio_PrivateKey_traditional(struct bio_st*  bp  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const unsigned char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PKCS8PrivateKey_nid(struct bio_st*  bp  , const struct evp_pkey_st*  x  , int nid, const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_PKCS8PrivateKey(struct bio_st*    , const struct evp_pkey_st*    , const struct evp_cipher_st*    , const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int i2d_PKCS8PrivateKey_bio(struct bio_st*  bp  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int i2d_PKCS8PrivateKey_nid_bio(struct bio_st*  bp  , const struct evp_pkey_st*  x  , int nid, const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  d2i_PKCS8PrivateKey_bio(struct bio_st*  bp  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int i2d_PKCS8PrivateKey_fp(struct __sFILE*  fp  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int i2d_PKCS8PrivateKey_nid_fp(struct __sFILE*  fp  , const struct evp_pkey_st*  x  , int nid, const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_PKCS8PrivateKey_nid(struct __sFILE*  fp  , const struct evp_pkey_st*  x  , int nid, const char* kstr, int klen, int (*(*cb))(char*,int,int,void*)  , void* u);
struct evp_pkey_st*  d2i_PKCS8PrivateKey_fp(struct __sFILE*  fp  , struct evp_pkey_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_PKCS8PrivateKey(struct __sFILE*  fp  , const struct evp_pkey_st*  x  , const struct evp_cipher_st*  enc  , const char* kstr, int klen, int (*(*cd))(char*,int,int,void*)  , void* u);
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
unsigned long  int  HMAC_size(const struct hmac_ctx_st*  e  );
struct hmac_ctx_st*  HMAC_CTX_new();
int HMAC_CTX_reset(struct hmac_ctx_st*  ctx  );
void HMAC_CTX_free(struct hmac_ctx_st*  ctx  );
int HMAC_Init(struct hmac_ctx_st*  ctx  , const void* key, int len, const struct evp_md_st*  md  );
int HMAC_Init_ex(struct hmac_ctx_st*  ctx  , const void* key, int len, const struct evp_md_st*  md  , struct engine_st*  impl  );
int HMAC_Update(struct hmac_ctx_st*  ctx  , const unsigned char* data, unsigned long  int  len  );
int HMAC_Final(struct hmac_ctx_st*  ctx  , unsigned char* md, unsigned int* len);
int HMAC_CTX_copy(struct hmac_ctx_st*  dctx  , struct hmac_ctx_st*  sctx  );
void HMAC_CTX_set_flags(struct hmac_ctx_st*  ctx  , unsigned long  int flags);
const struct evp_md_st*  HMAC_CTX_get_md(const struct hmac_ctx_st*  ctx  );
unsigned char* HMAC(const struct evp_md_st*  evp_md  , const void* key, int key_len, const unsigned char* data, unsigned long  int  data_len  , unsigned char* md, unsigned int* md_len);
int ASYNC_init_thread(unsigned long  int  max_size  , unsigned long  int  init_size  );
void ASYNC_cleanup_thread();
struct async_wait_ctx_st*  ASYNC_WAIT_CTX_new();
void ASYNC_WAIT_CTX_free(struct async_wait_ctx_st*  ctx  );
int ASYNC_WAIT_CTX_set_wait_fd(struct async_wait_ctx_st*  ctx  , const void* key, int fd, void* custom_data, void (*cleanup)(struct async_wait_ctx_st* ,const void*,int,void*));
int ASYNC_WAIT_CTX_get_fd(struct async_wait_ctx_st*  ctx  , const void* key, int* fd, void** custom_data);
int ASYNC_WAIT_CTX_get_all_fds(struct async_wait_ctx_st*  ctx  , int* fd, unsigned long  int*  numfds  );
int ASYNC_WAIT_CTX_get_callback(struct async_wait_ctx_st*  ctx  , int (*(*callback))(void*)  , void** callback_arg);
int ASYNC_WAIT_CTX_set_callback(struct async_wait_ctx_st*  ctx  , int (*callback)(void*)  , void* callback_arg);
int ASYNC_WAIT_CTX_set_status(struct async_wait_ctx_st*  ctx  , int status);
int ASYNC_WAIT_CTX_get_status(struct async_wait_ctx_st*  ctx  );
int ASYNC_WAIT_CTX_get_changed_fds(struct async_wait_ctx_st*  ctx  , int* addfd, unsigned long  int*  numaddfds  , int* delfd, unsigned long  int*  numdelfds  );
int ASYNC_WAIT_CTX_clear_fd(struct async_wait_ctx_st*  ctx  , const void* key);
int ASYNC_is_capable();
int ASYNC_set_mem_functions(void* (*alloc_fn)(unsigned long  int* )  , void (*free_fn)(void*)  );
void ASYNC_get_mem_functions(void* (*(*alloc_fn))(unsigned long  int* )  , void (*(*free_fn))(void*)  );
int ASYNC_start_job(struct async_job_st**  job  , struct async_wait_ctx_st*  ctx  , int* ret, int (*func)(void*), void* args, unsigned long  int  size  );
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
unsigned long  long  CT_POLICY_EVAL_CTX_get_time(const struct ct_policy_eval_ctx_st*  ctx  );
void CT_POLICY_EVAL_CTX_set_time(struct ct_policy_eval_ctx_st*  ctx  , unsigned long  long  time_in_ms  );
struct sct_st*  SCT_new();
struct sct_st*  SCT_new_from_base64(unsigned char version, const char* logid_base64, enum anonymous_typeY41  entry_type  , unsigned long  long  timestamp  , const char* extensions_base64, const char* signature_base64);
void SCT_free(struct sct_st*  sct  );
void SCT_LIST_free(struct stack_st_SCT*  a  );
enum anonymous_typeY41  SCT_get_version(const struct sct_st*  sct  );
int SCT_set_version(struct sct_st*  sct  , enum anonymous_typeY41  version  );
enum anonymous_typeY41  SCT_get_log_entry_type(const struct sct_st*  sct  );
int SCT_set_log_entry_type(struct sct_st*  sct  , enum anonymous_typeY41  entry_type  );
unsigned long  int  SCT_get0_log_id(const struct sct_st*  sct  , unsigned char** log_id);
int SCT_set0_log_id(struct sct_st*  sct  , unsigned char* log_id, unsigned long  int  log_id_len  );
int SCT_set1_log_id(struct sct_st*  sct  , const unsigned char* log_id, unsigned long  int  log_id_len  );
unsigned long  long  SCT_get_timestamp(const struct sct_st*  sct  );
void SCT_set_timestamp(struct sct_st*  sct  , unsigned long  long  timestamp  );
int SCT_get_signature_nid(const struct sct_st*  sct  );
int SCT_set_signature_nid(struct sct_st*  sct  , int nid);
unsigned long  int  SCT_get0_extensions(const struct sct_st*  sct  , unsigned char** ext);
void SCT_set0_extensions(struct sct_st*  sct  , unsigned char* ext, unsigned long  int  ext_len  );
int SCT_set1_extensions(struct sct_st*  sct  , const unsigned char* ext, unsigned long  int  ext_len  );
unsigned long  int  SCT_get0_signature(const struct sct_st*  sct  , unsigned char** sig);
void SCT_set0_signature(struct sct_st*  sct  , unsigned char* sig, unsigned long  int  sig_len  );
int SCT_set1_signature(struct sct_st*  sct  , const unsigned char* sig, unsigned long  int  sig_len  );
enum anonymous_typeY41  SCT_get_source(const struct sct_st*  sct  );
int SCT_set_source(struct sct_st*  sct  , enum anonymous_typeY41  source  );
const char* SCT_validation_status_string(const struct sct_st*  sct  );
void SCT_print(const struct sct_st*  sct  , struct bio_st*  out  , int indent, const struct ctlog_store_st*  logs  );
void SCT_LIST_print(const struct stack_st_SCT*  sct_list  , struct bio_st*  out  , int indent, const char* separator, const struct ctlog_store_st*  logs  );
enum anonymous_typeY41  SCT_get_validation_status(const struct sct_st*  sct  );
int SCT_validate(struct sct_st*  sct  , const struct ct_policy_eval_ctx_st*  ctx  );
int SCT_LIST_validate(const struct stack_st_SCT*  scts  , struct ct_policy_eval_ctx_st*  ctx  );
int i2o_SCT_LIST(const struct stack_st_SCT*  a  , unsigned char** pp);
struct stack_st_SCT*  o2i_SCT_LIST(struct stack_st_SCT**  a  , const unsigned char** pp, unsigned long  int  len  );
int i2d_SCT_LIST(const struct stack_st_SCT*  a  , unsigned char** pp);
struct stack_st_SCT*  d2i_SCT_LIST(struct stack_st_SCT**  a  , const unsigned char** pp, long len);
int i2o_SCT(const struct sct_st*  sct  , unsigned char** out);
struct sct_st*  o2i_SCT(struct sct_st**  psct  , const unsigned char** in, unsigned long  int  len  );
struct ctlog_st*  CTLOG_new_ex(struct evp_pkey_st*  public_key  , const char* name, struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct ctlog_st*  CTLOG_new(struct evp_pkey_st*  public_key  , const char* name);
int CTLOG_new_from_base64_ex(struct ctlog_st**  ct_log  , const char* pkey_base64, const char* name, struct ossl_lib_ctx_st*  libctx  , const char* propq);
int CTLOG_new_from_base64(struct ctlog_st**  ct_log  , const char* pkey_base64, const char* name);
void CTLOG_free(struct ctlog_st*  log  );
const char* CTLOG_get0_name(const struct ctlog_st*  log  );
void CTLOG_get0_log_id(const struct ctlog_st*  log  , const unsigned char**  log_id  , unsigned long  int*  log_id_len  );
struct evp_pkey_st*  CTLOG_get0_public_key(const struct ctlog_st*  log  );
struct ctlog_store_st*  CTLOG_STORE_new_ex(struct ossl_lib_ctx_st*  libctx  , const char* propq);
struct ctlog_store_st*  CTLOG_STORE_new();
void CTLOG_STORE_free(struct ctlog_store_st*  store  );
const struct ctlog_st*  CTLOG_STORE_get0_log_by_id(const struct ctlog_store_st*  store  , const unsigned char*  log_id  , unsigned long  int  log_id_len  );
int CTLOG_STORE_load_file(struct ctlog_store_st*  store  , const char* file);
int CTLOG_STORE_load_default_file(struct ctlog_store_st*  store  );
int ERR_load_SSL_strings();
unsigned long  long  SSL_CTX_get_options(const struct ssl_ctx_st*  ctx  );
unsigned long  long  SSL_get_options(const struct ssl_st*  s  );
unsigned long  long  SSL_CTX_clear_options(struct ssl_ctx_st*  ctx  , unsigned long  long  op  );
unsigned long  long  SSL_clear_options(struct ssl_st*  s  , unsigned long  long  op  );
unsigned long  long  SSL_CTX_set_options(struct ssl_ctx_st*  ctx  , unsigned long  long  op  );
unsigned long  long  SSL_set_options(struct ssl_st*  s  , unsigned long  long  op  );
void SSL_CTX_set_msg_callback(struct ssl_ctx_st*  ctx  , void (*cb)(int,int,int,const void*,unsigned long  int ,struct ssl_st* ,void*));
void SSL_set_msg_callback(struct ssl_st*  ssl  , void (*cb)(int,int,int,const void*,unsigned long  int ,struct ssl_st* ,void*));
int SSL_SRP_CTX_init(struct ssl_st*  s  );
int SSL_CTX_SRP_CTX_init(struct ssl_ctx_st*  ctx  );
int SSL_SRP_CTX_free(struct ssl_st*  ctx  );
int SSL_CTX_SRP_CTX_free(struct ssl_ctx_st*  ctx  );
int SSL_srp_server_param_with_username(struct ssl_st*  s  , int* ad);
int SRP_Calc_A_param(struct ssl_st*  s  );
struct lhash_st_SSL_SESSION* SSL_CTX_sessions(struct ssl_ctx_st*  ctx  );
void SSL_CTX_sess_set_new_cb(struct ssl_ctx_st*  ctx  , int (*new_session_cb)(struct ssl_st*,struct ssl_session_st* ));
int (*SSL_CTX_sess_get_new_cb(struct ssl_ctx_st*  _function_pointer_result_var_name_a61  ))(struct ssl_st*,struct ssl_session_st* );
void SSL_CTX_sess_set_remove_cb(struct ssl_ctx_st*  ctx  , void (*remove_session_cb)(struct ssl_ctx_st*,struct ssl_session_st* ));
void (*SSL_CTX_sess_get_remove_cb(struct ssl_ctx_st*  _function_pointer_result_var_name_a62  ))(struct ssl_ctx_st*,struct ssl_session_st* );
void SSL_CTX_sess_set_get_cb(struct ssl_ctx_st*  ctx  , struct ssl_session_st* (*get_session_cb)(struct ssl_st*,const unsigned char*,int,int*));
struct ssl_session_st* (*SSL_CTX_sess_get_get_cb(struct ssl_ctx_st*  _function_pointer_result_var_name_a63  ))(struct ssl_st*,const unsigned char*,int,int*);
void SSL_CTX_set_info_callback(struct ssl_ctx_st*  ctx  , void (*cb)(const struct ssl_st* ,int,int));
void (*SSL_CTX_get_info_callback(struct ssl_ctx_st*  _function_pointer_result_var_name_a64  ))(const struct ssl_st* ,int,int);
void SSL_CTX_set_client_cert_cb(struct ssl_ctx_st*  ctx  , int (*client_cert_cb)(struct ssl_st* ,struct x509_st** ,struct evp_pkey_st** ));
int (*SSL_CTX_get_client_cert_cb(struct ssl_ctx_st*  _function_pointer_result_var_name_a65  ))(struct ssl_st* ,struct x509_st** ,struct evp_pkey_st** );
int SSL_CTX_set_client_cert_engine(struct ssl_ctx_st*  ctx  , struct engine_st*  e  );
void SSL_CTX_set_cookie_generate_cb(struct ssl_ctx_st*  ctx  , int (*app_gen_cookie_cb)(struct ssl_st* ,unsigned char*,unsigned int*));
void SSL_CTX_set_cookie_verify_cb(struct ssl_ctx_st*  ctx  , int (*app_verify_cookie_cb)(struct ssl_st* ,const unsigned char*,unsigned int));
void SSL_CTX_set_stateless_cookie_generate_cb(struct ssl_ctx_st*  ctx  , int (*gen_stateless_cookie_cb)(struct ssl_st* ,unsigned char*,unsigned long  int* ));
void SSL_CTX_set_stateless_cookie_verify_cb(struct ssl_ctx_st*  ctx  , int (*verify_stateless_cookie_cb)(struct ssl_st* ,const unsigned char*,unsigned long  int ));
void SSL_CTX_set_next_protos_advertised_cb(struct ssl_ctx_st*  s  , int (*cb)(struct ssl_st* ,const unsigned char**,unsigned int*,void*)  , void* arg);
void SSL_CTX_set_next_proto_select_cb(struct ssl_ctx_st*  s  , int (*cb)(struct ssl_st* ,unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*)  , void* arg);
void SSL_get0_next_proto_negotiated(const struct ssl_st*  s  , const unsigned char** data, unsigned int* len);
int SSL_select_next_proto(unsigned char** out, unsigned char* outlen, const unsigned char* server, unsigned int server_len, const unsigned char* client, unsigned int client_len);
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
void SSL_set_psk_find_session_callback(struct ssl_st*  s  , int (*cb)(struct ssl_st* ,const unsigned char*,unsigned long  int ,struct ssl_session_st** )  );
void SSL_CTX_set_psk_find_session_callback(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,const unsigned char*,unsigned long  int ,struct ssl_session_st** )  );
void SSL_set_psk_use_session_callback(struct ssl_st*  s  , int (*cb)(struct ssl_st* ,const struct evp_md_st* ,const unsigned char**,unsigned long  int* ,struct ssl_session_st** )  );
void SSL_CTX_set_psk_use_session_callback(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,const struct evp_md_st* ,const unsigned char**,unsigned long  int* ,struct ssl_session_st** )  );
int SSL_CTX_has_client_custom_ext(const struct ssl_ctx_st*  ctx  , unsigned int ext_type);
int SSL_CTX_add_client_custom_ext(struct ssl_ctx_st*  ctx  , unsigned int ext_type, int (*add_cb)(struct ssl_st* ,unsigned int,const unsigned char**,unsigned long  int* ,int*,void*)  , void (*free_cb)(struct ssl_st* ,unsigned int,const unsigned char*,void*)  , void* add_arg, int (*parse_cb)(struct ssl_st* ,unsigned int,const unsigned char*,unsigned long  int ,int*,void*)  , void* parse_arg);
int SSL_CTX_add_server_custom_ext(struct ssl_ctx_st*  ctx  , unsigned int ext_type, int (*add_cb)(struct ssl_st* ,unsigned int,const unsigned char**,unsigned long  int* ,int*,void*)  , void (*free_cb)(struct ssl_st* ,unsigned int,const unsigned char*,void*)  , void* add_arg, int (*parse_cb)(struct ssl_st* ,unsigned int,const unsigned char*,unsigned long  int ,int*,void*)  , void* parse_arg);
int SSL_CTX_add_custom_ext(struct ssl_ctx_st*  ctx  , unsigned int ext_type, unsigned int context, int (*add_cb)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char**,unsigned long  int* ,struct x509_st* ,unsigned long  int ,int*,void*)  , void (*free_cb)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char*,void*)  , void* add_arg, int (*parse_cb)(struct ssl_st* ,unsigned int,unsigned int,const unsigned char*,unsigned long  int ,struct x509_st* ,unsigned long  int ,int*,void*)  , void* parse_arg);
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
int SSL_export_keying_material(struct ssl_st*  s  , unsigned char* out, unsigned long  int  olen  , const char* label, unsigned long  int  llen  , const unsigned char* context, unsigned long  int  contextlen  , int use_context);
int SSL_export_keying_material_early(struct ssl_st*  s  , unsigned char* out, unsigned long  int  olen  , const char* label, unsigned long  int  llen  , const unsigned char* context, unsigned long  int  contextlen  );
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
unsigned long  int  SSL_get_finished(const struct ssl_st*  s  , void* buf, unsigned long  int  count  );
unsigned long  int  SSL_get_peer_finished(const struct ssl_st*  s  , void* buf, unsigned long  int  count  );
struct ssl_session_st*  PEM_read_bio_SSL_SESSION(struct bio_st*  out  , struct ssl_session_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
struct ssl_session_st*  PEM_read_SSL_SESSION(struct __sFILE*  out  , struct ssl_session_st**  x  , int (*(*cb))(char*,int,int,void*)  , void* u);
int PEM_write_bio_SSL_SESSION(struct bio_st*  out  , const struct ssl_session_st*  x  );
int PEM_write_SSL_SESSION(struct __sFILE*  out  , const struct ssl_session_st*  x  );
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
void SSL_CTX_flush_sessions_ex(struct ssl_ctx_st*  ctx  , long  tm  );
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
int SSL_CTX_use_serverinfo(struct ssl_ctx_st*  ctx  , const unsigned char* serverinfo, unsigned long  int  serverinfo_length  );
int SSL_CTX_use_serverinfo_ex(struct ssl_ctx_st*  ctx  , unsigned int version, const unsigned char* serverinfo, unsigned long  int  serverinfo_length  );
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
long  SSL_SESSION_get_time_ex(const struct ssl_session_st*  s  );
long  SSL_SESSION_set_time_ex(struct ssl_session_st*  s  , long  t  );
const char* SSL_SESSION_get0_hostname(const struct ssl_session_st*  s  );
int SSL_SESSION_set1_hostname(struct ssl_session_st*  s  , const char* hostname);
void SSL_SESSION_get0_alpn_selected(const struct ssl_session_st*  s  , const unsigned char** alpn, unsigned long  int*  len  );
int SSL_SESSION_set1_alpn_selected(struct ssl_session_st*  s  , const unsigned char* alpn, unsigned long  int  len  );
const struct ssl_cipher_st*  SSL_SESSION_get0_cipher(const struct ssl_session_st*  s  );
int SSL_SESSION_set_cipher(struct ssl_session_st*  s  , const struct ssl_cipher_st*  cipher  );
int SSL_SESSION_has_ticket(const struct ssl_session_st*  s  );
unsigned long  int SSL_SESSION_get_ticket_lifetime_hint(const struct ssl_session_st*  s  );
void SSL_SESSION_get0_ticket(const struct ssl_session_st*  s  , const unsigned char** tick, unsigned long  int*  len  );
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
int SSL_SESSION_print_fp(struct __sFILE*  fp  , const struct ssl_session_st*  ses  );
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
int SSL_dane_tlsa_add(struct ssl_st*  s  , unsigned char  usage  , unsigned char  selector  , unsigned char  mtype  , const unsigned char* data, unsigned long  int  dlen  );
int SSL_get0_dane_authority(struct ssl_st*  s  , struct x509_st**  mcert  , struct evp_pkey_st**  mspki  );
int SSL_get0_dane_tlsa(struct ssl_st*  s  , unsigned char*  usage  , unsigned char*  selector  , unsigned char*  mtype  , const unsigned char** data, unsigned long  int*  dlen  );
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
unsigned long  int  SSL_client_hello_get0_random(struct ssl_st*  s  , const unsigned char** out);
unsigned long  int  SSL_client_hello_get0_session_id(struct ssl_st*  s  , const unsigned char** out);
unsigned long  int  SSL_client_hello_get0_ciphers(struct ssl_st*  s  , const unsigned char** out);
unsigned long  int  SSL_client_hello_get0_compression_methods(struct ssl_st*  s  , const unsigned char** out);
int SSL_client_hello_get1_extensions_present(struct ssl_st*  s  , int** out, unsigned long  int*  outlen  );
int SSL_client_hello_get_extension_order(struct ssl_st*  s  , unsigned short int*  exts  , unsigned long  int*  num_exts  );
int SSL_client_hello_get0_ext(struct ssl_st*  s  , unsigned int type, const unsigned char** out, unsigned long  int*  outlen  );
void SSL_certs_clear(struct ssl_st*  s  );
void SSL_free(struct ssl_st*  ssl  );
int SSL_waiting_for_async(struct ssl_st*  s  );
int SSL_get_all_async_fds(struct ssl_st*  s  , int* fds, unsigned long  int*  numfds  );
int SSL_get_changed_async_fds(struct ssl_st*  s  , int* addfd, unsigned long  int*  numaddfds  , int* delfd, unsigned long  int*  numdelfds  );
int SSL_CTX_set_async_callback(struct ssl_ctx_st*  ctx  , int (*callback)(struct ssl_st* ,void*)  );
int SSL_CTX_set_async_callback_arg(struct ssl_ctx_st*  ctx  , void* arg);
int SSL_set_async_callback(struct ssl_st*  s  , int (*callback)(struct ssl_st* ,void*)  );
int SSL_set_async_callback_arg(struct ssl_st*  s  , void* arg);
int SSL_get_async_status(struct ssl_st*  s  , int* status);
int SSL_accept(struct ssl_st*  ssl  );
int SSL_stateless(struct ssl_st*  s  );
int SSL_connect(struct ssl_st*  ssl  );
int SSL_read(struct ssl_st*  ssl  , void* buf, int num);
int SSL_read_ex(struct ssl_st*  ssl  , void* buf, unsigned long  int  num  , unsigned long  int*  readbytes  );
int SSL_read_early_data(struct ssl_st*  s  , void* buf, unsigned long  int  num  , unsigned long  int*  readbytes  );
int SSL_peek(struct ssl_st*  ssl  , void* buf, int num);
int SSL_peek_ex(struct ssl_st*  ssl  , void* buf, unsigned long  int  num  , unsigned long  int*  readbytes  );
long  SSL_sendfile(struct ssl_st*  s  , int fd, long long int  offset  , unsigned long  int  size  , int flags);
int SSL_write(struct ssl_st*  ssl  , const void* buf, int num);
int SSL_write_ex(struct ssl_st*  s  , const void* buf, unsigned long  int  num  , unsigned long  int*  written  );
int SSL_write_early_data(struct ssl_st*  s  , const void* buf, unsigned long  int  num  , unsigned long  int*  written  );
long SSL_ctrl(struct ssl_st*  ssl  , int cmd, long larg, void* parg);
long SSL_callback_ctrl(struct ssl_st*    , int , void (*anonymous_lambda_var_nameZ63)());
long SSL_CTX_ctrl(struct ssl_ctx_st*  ctx  , int cmd, long larg, void* parg);
long SSL_CTX_callback_ctrl(struct ssl_ctx_st*    , int , void (*anonymous_lambda_var_nameZ64)());
int SSL_write_ex2(struct ssl_st*  s  , const void* buf, unsigned long  int  num  , unsigned long  long  flags  , unsigned long  int*  written  );
int SSL_get_early_data_status(const struct ssl_st*  s  );
int SSL_get_error(const struct ssl_st*  s  , int ret_code);
const char* SSL_get_version(const struct ssl_st*  s  );
int SSL_get_handshake_rtt(const struct ssl_st*  s  , unsigned long  long*  rtt  );
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
unsigned long  int  DTLS_get_data_mtu(const struct ssl_st*  s  );
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
void (*SSL_get_info_callback(const struct ssl_st*  _function_pointer_result_var_name_a66  ))(const struct ssl_st* ,int,int);
enum anonymous_typeY41  SSL_get_state(const struct ssl_st*  ssl  );
void SSL_set_verify_result(struct ssl_st*  ssl  , long v);
long SSL_get_verify_result(const struct ssl_st*  ssl  );
struct stack_st_X509*  SSL_get0_verified_chain(const struct ssl_st*  s  );
unsigned long  int  SSL_get_client_random(const struct ssl_st*  ssl  , unsigned char* out, unsigned long  int  outlen  );
unsigned long  int  SSL_get_server_random(const struct ssl_st*  ssl  , unsigned char* out, unsigned long  int  outlen  );
unsigned long  int  SSL_SESSION_get_master_key(const struct ssl_session_st*  sess  , unsigned char* out, unsigned long  int  outlen  );
int SSL_SESSION_set1_master_key(struct ssl_session_st*  sess  , const unsigned char* in, unsigned long  int  len  );
unsigned char  SSL_SESSION_get_max_fragment_length(const struct ssl_session_st*  sess  );
int SSL_set_ex_data(struct ssl_st*  ssl  , int idx, void* data);
void* SSL_get_ex_data(const struct ssl_st*  ssl  , int idx);
int SSL_SESSION_set_ex_data(struct ssl_session_st*  ss  , int idx, void* data);
void* SSL_SESSION_get_ex_data(const struct ssl_session_st*  ss  , int idx);
int SSL_CTX_set_ex_data(struct ssl_ctx_st*  ssl  , int idx, void* data);
void* SSL_CTX_get_ex_data(const struct ssl_ctx_st*  ssl  , int idx);
int SSL_get_ex_data_X509_STORE_CTX_idx();
void SSL_CTX_set_default_read_buffer_len(struct ssl_ctx_st*  ctx  , unsigned long  int  len  );
void SSL_set_default_read_buffer_len(struct ssl_st*  s  , unsigned long  int  len  );
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
int SSL_bytes_to_cipher_list(struct ssl_st*  s  , const unsigned char* bytes, unsigned long  int  len  , int isv2format, struct stack_st_SSL_CIPHER**  sk  , struct stack_st_SSL_CIPHER**  scsvs  );
int SSL_set_session_ticket_ext(struct ssl_st*  s  , void* ext_data, int ext_len);
int SSL_set_session_ticket_ext_cb(struct ssl_st*  s  , int (*cb)(struct ssl_st* ,const unsigned char*,int,void*)  , void* arg);
int SSL_set_session_secret_cb(struct ssl_st*  s  , int (*session_secret_cb)(struct ssl_st* ,void*,int*,struct stack_st_SSL_CIPHER* ,const struct ssl_cipher_st** ,void*)  , void* arg);
void SSL_CTX_set_not_resumable_session_callback(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,int));
void SSL_set_not_resumable_session_callback(struct ssl_st*  ssl  , int (*cb)(struct ssl_st* ,int));
void SSL_CTX_set_record_padding_callback(struct ssl_ctx_st*  ctx  , unsigned long  int  (*cb)(struct ssl_st* ,int,unsigned long  int ,void*));
void SSL_CTX_set_record_padding_callback_arg(struct ssl_ctx_st*  ctx  , void* arg);
void* SSL_CTX_get_record_padding_callback_arg(const struct ssl_ctx_st*  ctx  );
int SSL_CTX_set_block_padding(struct ssl_ctx_st*  ctx  , unsigned long  int  block_size  );
int SSL_CTX_set_block_padding_ex(struct ssl_ctx_st*  ctx  , unsigned long  int  app_block_size  , unsigned long  int  hs_block_size  );
int SSL_set_record_padding_callback(struct ssl_st*  ssl  , unsigned long  int  (*cb)(struct ssl_st* ,int,unsigned long  int ,void*));
void SSL_set_record_padding_callback_arg(struct ssl_st*  ssl  , void* arg);
void* SSL_get_record_padding_callback_arg(const struct ssl_st*  ssl  );
int SSL_set_block_padding(struct ssl_st*  ssl  , unsigned long  int  block_size  );
int SSL_set_block_padding_ex(struct ssl_st*  ssl  , unsigned long  int  app_block_size  , unsigned long  int  hs_block_size  );
int SSL_set_num_tickets(struct ssl_st*  s  , unsigned long  int  num_tickets  );
unsigned long  int  SSL_get_num_tickets(const struct ssl_st*  s  );
int SSL_CTX_set_num_tickets(struct ssl_ctx_st*  ctx  , unsigned long  int  num_tickets  );
unsigned long  int  SSL_CTX_get_num_tickets(const struct ssl_ctx_st*  ctx  );
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
struct ssl_st*  SSL_new_listener(struct ssl_ctx_st*  ctx  , unsigned long  long  flags  );
struct ssl_st*  SSL_new_listener_from(struct ssl_st*  ssl  , unsigned long  long  flags  );
struct ssl_st*  SSL_new_from_listener(struct ssl_st*  ssl  , unsigned long  long  flags  );
struct ssl_st*  SSL_accept_connection(struct ssl_st*  ssl  , unsigned long  long  flags  );
unsigned long  int  SSL_get_accept_connection_queue_len(struct ssl_st*  ssl  );
int SSL_listen(struct ssl_st*  ssl  );
int SSL_is_domain(struct ssl_st*  s  );
struct ssl_st*  SSL_get0_domain(struct ssl_st*  s  );
struct ssl_st*  SSL_new_domain(struct ssl_ctx_st*  ctx  , unsigned long  long  flags  );
int SSL_CTX_set_domain_flags(struct ssl_ctx_st*  ctx  , unsigned long  long  domain_flags  );
int SSL_CTX_get_domain_flags(const struct ssl_ctx_st*  ctx  , unsigned long  long*  domain_flags  );
int SSL_get_domain_flags(const struct ssl_st*  ssl  , unsigned long  long*  domain_flags  );
int SSL_get_stream_type(struct ssl_st*  s  );
unsigned long  long  SSL_get_stream_id(struct ssl_st*  s  );
int SSL_is_stream_local(struct ssl_st*  s  );
int SSL_set_default_stream_mode(struct ssl_st*  s  , unsigned int  mode  );
struct ssl_st*  SSL_new_stream(struct ssl_st*  s  , unsigned long  long  flags  );
int SSL_set_incoming_stream_policy(struct ssl_st*  s  , int policy, unsigned long  long  aec  );
struct ssl_st*  SSL_accept_stream(struct ssl_st*  s  , unsigned long  long  flags  );
unsigned long  int  SSL_get_accept_stream_queue_len(struct ssl_st*  s  );
int SSL_inject_net_dgram(struct ssl_st*  s  , const unsigned char* buf, unsigned long  int  buf_len  , const union bio_addr_st*  peer  , const union bio_addr_st*  local  );
int SSL_shutdown_ex(struct ssl_st*  ssl  , unsigned long  long  flags  , const struct ssl_shutdown_ex_args_st*  args  , unsigned long  int  args_len  );
int SSL_stream_conclude(struct ssl_st*  ssl  , unsigned long  long  flags  );
int SSL_stream_reset(struct ssl_st*  ssl  , const struct ssl_stream_reset_args_st*  args  , unsigned long  int  args_len  );
int SSL_get_stream_read_state(struct ssl_st*  ssl  );
int SSL_get_stream_write_state(struct ssl_st*  ssl  );
int SSL_get_stream_read_error_code(struct ssl_st*  ssl  , unsigned long  long*  app_error_code  );
int SSL_get_stream_write_error_code(struct ssl_st*  ssl  , unsigned long  long*  app_error_code  );
int SSL_get_conn_close_info(struct ssl_st*  ssl  , struct ssl_conn_close_info_st*  info  , unsigned long  int  info_len  );
int SSL_get_value_uint(struct ssl_st*  s  , unsigned int  class_  , unsigned int  id  , unsigned long  long*  v  );
int SSL_set_value_uint(struct ssl_st*  s  , unsigned int  class_  , unsigned int  id  , unsigned long  long  v  );
int SSL_poll(struct ssl_poll_item_st*  items  , unsigned long  int  num_items  , unsigned long  int  stride  , const struct timeval*  timeout  , unsigned long  long  flags  , unsigned long  int*  result_count  );
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
void SSL_trace(int write_p, int version, int content_type, const void* buf, unsigned long  int  len  , struct ssl_st*  ssl  , void* arg);
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
int (*SSL_get_security_callback(const struct ssl_st*  _function_pointer_result_var_name_a67  ))(const struct ssl_st* ,const struct ssl_ctx_st* ,int,int,int,void*,void*);
void SSL_set0_security_ex_data(struct ssl_st*  s  , void* ex);
void* SSL_get0_security_ex_data(const struct ssl_st*  s  );
void SSL_CTX_set_security_level(struct ssl_ctx_st*  ctx  , int level);
int SSL_CTX_get_security_level(const struct ssl_ctx_st*  ctx  );
void SSL_CTX_set_security_callback(struct ssl_ctx_st*  ctx  , int (*cb)(const struct ssl_st* ,const struct ssl_ctx_st* ,int,int,int,void*,void*));
int (*SSL_CTX_get_security_callback(const struct ssl_ctx_st*  _function_pointer_result_var_name_a68  ))(const struct ssl_st* ,const struct ssl_ctx_st* ,int,int,int,void*,void*);
void SSL_CTX_set0_security_ex_data(struct ssl_ctx_st*  ctx  , void* ex);
void* SSL_CTX_get0_security_ex_data(const struct ssl_ctx_st*  ctx  );
int OPENSSL_init_ssl(unsigned long  long  opts  , const struct ossl_init_settings_st*  settings  );
int SSL_free_buffers(struct ssl_st*  ssl  );
int SSL_alloc_buffers(struct ssl_st*  ssl  );
int SSL_CTX_set_session_ticket_cb(struct ssl_ctx_st*  ctx  , int (*gen_cb)(struct ssl_st* ,void*)  , int (*dec_cb)(struct ssl_st* ,struct ssl_session_st* ,const unsigned char*,unsigned long  int ,int ,void*)  , void* arg);
int SSL_SESSION_set1_ticket_appdata(struct ssl_session_st*  ss  , const void* data, unsigned long  int  len  );
int SSL_SESSION_get0_ticket_appdata(struct ssl_session_st*  ss  , void** data, unsigned long  int*  len  );
void DTLS_set_timer_cb(struct ssl_st*  s  , unsigned int (*cb)(struct ssl_st* ,unsigned int)  );
void SSL_CTX_set_allow_early_data_cb(struct ssl_ctx_st*  ctx  , int (*cb)(struct ssl_st* ,void*)  , void* arg);
void SSL_set_allow_early_data_cb(struct ssl_st*  s  , int (*cb)(struct ssl_st* ,void*)  , void* arg);
const char* OSSL_default_cipher_list();
const char* OSSL_default_ciphersuites();
int SSL_CTX_compress_certs(struct ssl_ctx_st*  ctx  , int alg);
int SSL_compress_certs(struct ssl_st*  ssl  , int alg);
int SSL_CTX_set1_cert_comp_preference(struct ssl_ctx_st*  ctx  , int* algs, unsigned long  int  len  );
int SSL_set1_cert_comp_preference(struct ssl_st*  ssl  , int* algs, unsigned long  int  len  );
int SSL_CTX_set1_compressed_cert(struct ssl_ctx_st*  ctx  , int algorithm, unsigned char* comp_data, unsigned long  int  comp_length  , unsigned long  int  orig_length  );
int SSL_set1_compressed_cert(struct ssl_st*  ssl  , int algorithm, unsigned char* comp_data, unsigned long  int  comp_length  , unsigned long  int  orig_length  );
unsigned long  int  SSL_CTX_get1_compressed_cert(struct ssl_ctx_st*  ctx  , int alg, unsigned char** data, unsigned long  int*  orig_len  );
unsigned long  int  SSL_get1_compressed_cert(struct ssl_st*  ssl  , int alg, unsigned char** data, unsigned long  int*  orig_len  );
int SSL_add_expected_rpk(struct ssl_st*  s  , struct evp_pkey_st*  rpk  );
struct evp_pkey_st*  SSL_get0_peer_rpk(const struct ssl_st*  s  );
struct evp_pkey_st*  SSL_SESSION_get0_peer_rpk(struct ssl_session_st*  s  );
int SSL_get_negotiated_client_cert_type(const struct ssl_st*  s  );
int SSL_get_negotiated_server_cert_type(const struct ssl_st*  s  );
int SSL_set1_client_cert_type(struct ssl_st*  s  , const unsigned char* val, unsigned long  int  len  );
int SSL_set1_server_cert_type(struct ssl_st*  s  , const unsigned char* val, unsigned long  int  len  );
int SSL_CTX_set1_client_cert_type(struct ssl_ctx_st*  ctx  , const unsigned char* val, unsigned long  int  len  );
int SSL_CTX_set1_server_cert_type(struct ssl_ctx_st*  ctx  , const unsigned char* val, unsigned long  int  len  );
int SSL_get0_client_cert_type(const struct ssl_st*  s  , unsigned char** t, unsigned long  int*  len  );
int SSL_get0_server_cert_type(const struct ssl_st*  s  , unsigned char** t, unsigned long  int*  len  );
int SSL_CTX_get0_client_cert_type(const struct ssl_ctx_st*  ctx  , unsigned char** t, unsigned long  int*  len  );
int SSL_CTX_get0_server_cert_type(const struct ssl_ctx_st*  s  , unsigned char** t, unsigned long  int*  len  );
int SSL_set_quic_tls_cbs(struct ssl_st*  s  , const struct ossl_dispatch_st*  qtdis  , void* arg);
int SSL_set_quic_tls_transport_params(struct ssl_st*  s  , const unsigned char* params, unsigned long  int  params_len  );
int SSL_set_quic_tls_early_data_enabled(struct ssl_st*  s  , int enabled);
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
void ERR_error_string_n(unsigned long  int e, char* buf, unsigned long  int  len  );
const char* ERR_lib_error_string(unsigned long  int e);
const char* ERR_func_error_string(unsigned long  int e);
const char* ERR_reason_error_string(unsigned long  int e);
void ERR_print_errors_cb(int (*cb)(const char*,unsigned long  int ,void*), void* u);
void ERR_print_errors_fp(struct __sFILE*  fp  );
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
int RAND_set_rand_engine(struct engine_st*  engine  );
struct rand_meth_st*  RAND_OpenSSL();
int RAND_bytes(unsigned char* buf, int num);
int RAND_priv_bytes(unsigned char* buf, int num);
int RAND_priv_bytes_ex(struct ossl_lib_ctx_st*  ctx  , unsigned char* buf, unsigned long  int  num  , unsigned int strength);
int RAND_bytes_ex(struct ossl_lib_ctx_st*  ctx  , unsigned char* buf, unsigned long  int  num  , unsigned int strength);
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
const char* RAND_file_name(char* file, unsigned long  int  num  );
int RAND_status();
int RAND_poll();
int RAND_set1_random_provider(struct ossl_lib_ctx_st*  ctx  , struct ossl_provider_st*  p  );
int audit(const void* , int );
int auditon(int , void* , int );
int auditctl(const char* );
int getauid(unsigned int*    );
int setauid(const unsigned int*    );
int getaudit_addr(struct auditinfo_addr*    , int );
int setaudit_addr(const struct auditinfo_addr*    , int );
int getaudit(struct auditinfo*    );
int setaudit(const struct auditinfo*    );
unsigned int  audit_session_self();
int  audit_session_join(unsigned int  port  );
int audit_session_port(int  asid  , unsigned int*  portname  );
int fhopen(const struct fhandle*    , int );
int fstatfs(int , struct statfs*    ) __asm("_" "fstatfs" );
int getfh(const char* , struct fhandle*    );
int getfsstat(struct statfs*    , int , int ) __asm("_" "getfsstat" );
int getmntinfo(struct statfs**    , int ) __asm("_" "getmntinfo" );
int getmntinfo_r_np(struct statfs**    , int ) __asm("_" "getmntinfo_r_np" )
 
 ;
int mount(const char* , const char* , int , void* );
int fmount(const char* , int , int , void* );
int statfs(const char* , struct statfs*    ) __asm("_" "statfs" );
int unmount(const char* , int );
int funmount(int , int );
int getvfsbyname(const char* , struct vfsconf*    );
int nfsclnt(unsigned long  int request, void* argstructp);
int test_headers_subdir();
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
    union anonymous_typeZ5 _u;
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
static inline void sk_OPENSSL_STRING_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(char*)  ;
    freefunc=(void (*)(char*) )freefunc_arg;
    freefunc((char*)ptr);
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
static inline void sk_OPENSSL_CSTRING_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(char*)  ;
    freefunc=(void (*)(char*) )freefunc_arg;
    freefunc((char*)ptr);
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
static inline void sk_OPENSSL_BLOCK_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(void*)  ;
    freefunc=(void (*)(void*) )freefunc_arg;
    freefunc((void*)ptr);
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
static inline void sk_void_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(void*)  ;
    freefunc=(void (*)(void*) )freefunc_arg;
    freefunc((void*)ptr);
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
static inline void sk_SSL_COMP_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct ssl_comp_st* )  ;
    freefunc=(void (*)(struct ssl_comp_st* ) )freefunc_arg;
    freefunc((struct ssl_comp_st* )ptr);
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
static inline void sk_BIO_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct bio_st* )  ;
    freefunc=(void (*)(struct bio_st* ) )freefunc_arg;
    freefunc((struct bio_st* )ptr);
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
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_malloc(const struct ossl_dispatch_st*  opf  )))(unsigned long  int ,const char*,int) 
{
        return (void* (*(*))(unsigned long  int ,const char*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_zalloc(const struct ossl_dispatch_st*  opf  )))(unsigned long  int ,const char*,int) 
{
        return (void* (*(*))(unsigned long  int ,const char*,int) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_free(const struct ossl_dispatch_st*  opf  )))(void*,const char*,int) 
{
        return (void (*(*))(void*,const char*,int) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_clear_free(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long  int ,const char*,int) 
{
        return (void (*(*))(void*,unsigned long  int ,const char*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_realloc(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long  int ,const char*,int) 
{
        return (void* (*(*))(void*,unsigned long  int ,const char*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_clear_realloc(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long  int ,unsigned long  int ,const char*,int) 
{
        return (void* (*(*))(void*,unsigned long  int ,unsigned long  int ,const char*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_secure_malloc(const struct ossl_dispatch_st*  opf  )))(unsigned long  int ,const char*,int) 
{
        return (void* (*(*))(unsigned long  int ,const char*,int) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_secure_zalloc(const struct ossl_dispatch_st*  opf  )))(unsigned long  int ,const char*,int) 
{
        return (void* (*(*))(unsigned long  int ,const char*,int) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_secure_free(const struct ossl_dispatch_st*  opf  )))(void*,const char*,int) 
{
        return (void (*(*))(void*,const char*,int) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_secure_clear_free(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long  int ,const char*,int) 
{
        return (void (*(*))(void*,unsigned long  int ,const char*,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_CRYPTO_secure_allocated(const struct ossl_dispatch_st*  opf  )))(const void*) 
{
        return (int (*(*))(const void*) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_OPENSSL_cleanse(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long  int ) 
{
        return (void (*(*))(void*,unsigned long  int ) )opf->function;
}
static inline struct ossl_core_bio_st* __attribute__((unused))  (*(*OSSL_FUNC_BIO_new_file(const struct ossl_dispatch_st*  opf  )))(const char*,const char*) 
{
        return (struct ossl_core_bio_st* (*(*))(const char*,const char*) )opf->function;
}
static inline struct ossl_core_bio_st* __attribute__((unused))  (*(*OSSL_FUNC_BIO_new_membuf(const struct ossl_dispatch_st*  opf  )))(const void*,int) 
{
        return (struct ossl_core_bio_st* (*(*))(const void*,int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_read_ex(const struct ossl_dispatch_st*  opf  )))(struct ossl_core_bio_st* ,void*,unsigned long  int ,unsigned long  int* ) 
{
        return (int (*(*))(struct ossl_core_bio_st* ,void*,unsigned long  int ,unsigned long  int* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_write_ex(const struct ossl_dispatch_st*  opf  )))(struct ossl_core_bio_st* ,const void*,unsigned long  int ,unsigned long  int* ) 
{
        return (int (*(*))(struct ossl_core_bio_st* ,const void*,unsigned long  int ,unsigned long  int* ) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_BIO_vsnprintf(const struct ossl_dispatch_st*  opf  )))(char*,unsigned long  int ,const char*,__builtin_va_list ) 
{
        return (int (*(*))(char*,unsigned long  int ,const char*,__builtin_va_list ) )opf->function;
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
static inline unsigned long  int  __attribute__((unused))  (*(*OSSL_FUNC_get_entropy(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long  int ,unsigned long  int ) 
{
        return (unsigned long  int  (*(*))(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long  int ,unsigned long  int ) )opf->function;
}
static inline unsigned long  int  __attribute__((unused))  (*(*OSSL_FUNC_get_user_entropy(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long  int ,unsigned long  int ) 
{
        return (unsigned long  int  (*(*))(const struct ossl_core_handle_st* ,unsigned char**,int,unsigned long  int ,unsigned long  int ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_cleanup_entropy(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_cleanup_user_entropy(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int ) )opf->function;
}
static inline unsigned long  int  __attribute__((unused))  (*(*OSSL_FUNC_get_nonce(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char**,unsigned long  int ,unsigned long  int ,const void*,unsigned long  int ) 
{
        return (unsigned long  int  (*(*))(const struct ossl_core_handle_st* ,unsigned char**,unsigned long  int ,unsigned long  int ,const void*,unsigned long  int ) )opf->function;
}
static inline unsigned long  int  __attribute__((unused))  (*(*OSSL_FUNC_get_user_nonce(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char**,unsigned long  int ,unsigned long  int ,const void*,unsigned long  int ) 
{
        return (unsigned long  int  (*(*))(const struct ossl_core_handle_st* ,unsigned char**,unsigned long  int ,unsigned long  int ,const void*,unsigned long  int ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_cleanup_nonce(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_cleanup_user_nonce(const struct ossl_dispatch_st*  opf  )))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int ) 
{
        return (void (*(*))(const struct ossl_core_handle_st* ,unsigned char*,unsigned long  int ) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_provider_random_bytes(const struct ossl_dispatch_st*  opf  )))(void*,int,void*,unsigned long  int ,unsigned int) 
{
        return (int (*(*))(void*,int,void*,unsigned long  int ,unsigned int) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_crypto_send(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,const unsigned char*,unsigned long  int ,unsigned long  int* ,void*) 
{
        return (int (*(*))(struct ssl_st* ,const unsigned char*,unsigned long  int ,unsigned long  int* ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_crypto_recv_rcd(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,const unsigned char**,unsigned long  int* ,void*) 
{
        return (int (*(*))(struct ssl_st* ,const unsigned char**,unsigned long  int* ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_crypto_release_rcd(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,unsigned long  int ,void*) 
{
        return (int (*(*))(struct ssl_st* ,unsigned long  int ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_yield_secret(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,unsigned int ,int,const unsigned char*,unsigned long  int ,void*) 
{
        return (int (*(*))(struct ssl_st* ,unsigned int ,int,const unsigned char*,unsigned long  int ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_SSL_QUIC_TLS_got_transport_params(const struct ossl_dispatch_st*  opf  )))(struct ssl_st* ,const unsigned char*,unsigned long  int ,void*) 
{
        return (int (*(*))(struct ssl_st* ,const unsigned char*,unsigned long  int ,void*) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_squeeze(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_digest_digest(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ,unsigned char*,unsigned long  int* ,unsigned long  int ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ,unsigned char*,unsigned long  int* ,unsigned long  int ) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_encrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_decrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_update(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_cipher(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_pipeline_encrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ,unsigned long  int ,const unsigned char**,unsigned long  int ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ,unsigned long  int ,const unsigned char**,unsigned long  int ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_pipeline_decrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ,unsigned long  int ,const unsigned char**,unsigned long  int ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ,unsigned long  int ,const unsigned char**,unsigned long  int ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_pipeline_update(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long  int ,unsigned char**,unsigned long  int* ,const unsigned long  int* ,const unsigned char**,const unsigned long  int* ) 
{
        return (int (*(*))(void*,unsigned long  int ,unsigned char**,unsigned long  int* ,const unsigned long  int* ,const unsigned char**,const unsigned long  int* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_pipeline_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned long  int ,unsigned char**,unsigned long  int* ,const unsigned long  int* ) 
{
        return (int (*(*))(void*,unsigned long  int ,unsigned char**,unsigned long  int* ,const unsigned long  int* ) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_encrypt_skey_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_cipher_decrypt_skey_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_mac_init(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_mac_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_mac_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kdf_derive(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int ,const struct ossl_param_st ) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kdf_set_skey(const struct ossl_dispatch_st*  opf  )))(void*,void*,const char*) 
{
        return (int (*(*))(void*,void*,const char*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_kdf_derive_skey(const struct ossl_dispatch_st*  opf  )))(void*,const char*,void*,void* (*(*))(void*,int,const struct ossl_param_st ) ,unsigned long  int ,const struct ossl_param_st ) 
{
        return (void* (*(*))(void*,const char*,void*,void* (*(*))(void*,int,const struct ossl_param_st ) ,unsigned long  int ,const struct ossl_param_st ) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_rand_newctx(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_dispatch_st* ) 
{
        return (void* (*(*))(void*,void*,const struct ossl_dispatch_st* ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_rand_freectx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_instantiate(const struct ossl_dispatch_st*  opf  )))(void*,unsigned int,int,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,unsigned int,int,const unsigned char*,unsigned long  int ,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_uninstantiate(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_generate(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int ,unsigned int,int,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int ,unsigned int,int,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_rand_reseed(const struct ossl_dispatch_st*  opf  )))(void*,int,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,int,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline unsigned long  int  __attribute__((unused))  (*(*OSSL_FUNC_rand_nonce(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned int,unsigned long  int ,unsigned long  int ) 
{
        return (unsigned long  int  (*(*))(void*,unsigned char*,unsigned int,unsigned long  int ,unsigned long  int ) )opf->function;
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
static inline unsigned long  int  __attribute__((unused))  (*(*OSSL_FUNC_rand_get_seed(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char**,int,unsigned long  int ,unsigned long  int ,int,const unsigned char*,unsigned long  int ) 
{
        return (unsigned long  int  (*(*))(void*,unsigned char**,int,unsigned long  int ,unsigned long  int ,int,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline void __attribute__((unused))  (*(*OSSL_FUNC_rand_clear_seed(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int ) 
{
        return (void (*(*))(void*,unsigned char*,unsigned long  int ) )opf->function;
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
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_keymgmt_load(const struct ossl_dispatch_st*  opf  )))(const void*,unsigned long  int ) 
{
        return (void* (*(*))(const void*,unsigned long  int ) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_keyexch_derive(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) )opf->function;
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
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_keyexch_derive_skey(const struct ossl_dispatch_st*  opf  )))(void*,const char*,void*,void* (*(*))(void*,int,const struct ossl_param_st ) ,unsigned long  int ,const struct ossl_param_st ) 
{
        return (void* (*(*))(void*,const char*,void*,void* (*(*))(void*,int,const struct ossl_param_st ) ,unsigned long  int ,const struct ossl_param_st ) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_signature_newctx(const struct ossl_dispatch_st*  opf  )))(void*,const char*) 
{
        return (void* (*(*))(void*,const char*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_sign_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_sign(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_sign_message_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_sign_message_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_sign_message_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_message_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_message_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_message_final(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_recover_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_verify_recover(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_sign_init(const struct ossl_dispatch_st*  opf  )))(void*,const char*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const char*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_sign_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_sign_final(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_sign(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_verify_init(const struct ossl_dispatch_st*  opf  )))(void*,const char*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,const char*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_verify_update(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_verify_final(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_signature_digest_verify(const struct ossl_dispatch_st*  opf  )))(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,const unsigned char*,unsigned long  int ,const unsigned char*,unsigned long  int ) )opf->function;
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
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_newctx(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (void* (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_encrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_encrypt(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_decrypt_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_asym_cipher_decrypt(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned long  int ,const unsigned char*,unsigned long  int ) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_encapsulate(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,unsigned char*,unsigned long  int* ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,unsigned char*,unsigned long  int* ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_decapsulate_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_auth_decapsulate_init(const struct ossl_dispatch_st*  opf  )))(void*,void*,void*,const struct ossl_param_st ) 
{
        return (int (*(*))(void*,void*,void*,const struct ossl_param_st ) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_kem_decapsulate(const struct ossl_dispatch_st*  opf  )))(void*,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ) 
{
        return (int (*(*))(void*,unsigned char*,unsigned long  int* ,const unsigned char*,unsigned long  int ) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_encoder_encode(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_core_bio_st* ,const void*,const struct ossl_param_st ,int,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,struct ossl_core_bio_st* ,const void*,const struct ossl_param_st ,int,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_decoder_decode(const struct ossl_dispatch_st*  opf  )))(void*,struct ossl_core_bio_st* ,int,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,struct ossl_core_bio_st* ,int,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_decoder_export_object(const struct ossl_dispatch_st*  opf  )))(void*,const void*,unsigned long  int ,int (*(*))(const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,const void*,unsigned long  int ,int (*(*))(const struct ossl_param_st ,void*) ,void*) )opf->function;
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
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_load(const struct ossl_dispatch_st*  opf  )))(void*,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,int (*(*))(const struct ossl_param_st ,void*) ,void*,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_eof(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_close(const struct ossl_dispatch_st*  opf  )))(void*) 
{
        return (int (*(*))(void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_export_object(const struct ossl_dispatch_st*  opf  )))(void*,const void*,unsigned long  int ,int (*(*))(const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,const void*,unsigned long  int ,int (*(*))(const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline int __attribute__((unused))  (*(*OSSL_FUNC_store_delete(const struct ossl_dispatch_st*  opf  )))(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*) 
{
        return (int (*(*))(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline void* __attribute__((unused))  (*(*OSSL_FUNC_store_open_ex(const struct ossl_dispatch_st*  opf  )))(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*) 
{
        return (void* (*(*))(void*,const char*,const struct ossl_param_st ,int (*(*))(char*,unsigned long  int ,unsigned long  int* ,const struct ossl_param_st ,void*) ,void*) )opf->function;
}
static inline void sk_X509_ALGOR_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct X509_algor_st* )  ;
    freefunc=(void (*)(struct X509_algor_st* ) )freefunc_arg;
    freefunc((struct X509_algor_st* )ptr);
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
static inline void sk_ASN1_STRING_TABLE_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct asn1_string_table_st* )  ;
    freefunc=(void (*)(struct asn1_string_table_st* ) )freefunc_arg;
    freefunc((struct asn1_string_table_st* )ptr);
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
static inline void sk_ASN1_TYPE_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct asn1_type_st* )  ;
    freefunc=(void (*)(struct asn1_type_st* ) )freefunc_arg;
    freefunc((struct asn1_type_st* )ptr);
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
static inline void sk_ASN1_OBJECT_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct asn1_object_st* )  ;
    freefunc=(void (*)(struct asn1_object_st* ) )freefunc_arg;
    freefunc((struct asn1_object_st* )ptr);
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
static inline void sk_ASN1_INTEGER_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct asn1_string_st* )  ;
    freefunc=(void (*)(struct asn1_string_st* ) )freefunc_arg;
    freefunc((struct asn1_string_st* )ptr);
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
static inline void sk_ASN1_UTF8STRING_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct asn1_string_st* )  ;
    freefunc=(void (*)(struct asn1_string_st* ) )freefunc_arg;
    freefunc((struct asn1_string_st* )ptr);
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
static inline void sk_ASN1_GENERALSTRING_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct asn1_string_st* )  ;
    freefunc=(void (*)(struct asn1_string_st* ) )freefunc_arg;
    freefunc((struct asn1_string_st* )ptr);
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
static inline void sk_X509_NAME_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct X509_name_st* )  ;
    freefunc=(void (*)(struct X509_name_st* ) )freefunc_arg;
    freefunc((struct X509_name_st* )ptr);
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
static inline void sk_X509_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct x509_st* )  ;
    freefunc=(void (*)(struct x509_st* ) )freefunc_arg;
    freefunc((struct x509_st* )ptr);
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
static inline void sk_X509_REVOKED_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct x509_revoked_st* )  ;
    freefunc=(void (*)(struct x509_revoked_st* ) )freefunc_arg;
    freefunc((struct x509_revoked_st* )ptr);
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
static inline void sk_X509_CRL_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct X509_crl_st* )  ;
    freefunc=(void (*)(struct X509_crl_st* ) )freefunc_arg;
    freefunc((struct X509_crl_st* )ptr);
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
static inline void sk_X509_NAME_ENTRY_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct X509_name_entry_st* )  ;
    freefunc=(void (*)(struct X509_name_entry_st* ) )freefunc_arg;
    freefunc((struct X509_name_entry_st* )ptr);
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
static inline void sk_X509_EXTENSION_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct X509_extension_st* )  ;
    freefunc=(void (*)(struct X509_extension_st* ) )freefunc_arg;
    freefunc((struct X509_extension_st* )ptr);
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
static inline void sk_X509_ATTRIBUTE_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct x509_attributes_st* )  ;
    freefunc=(void (*)(struct x509_attributes_st* ) )freefunc_arg;
    freefunc((struct x509_attributes_st* )ptr);
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
static inline void sk_X509_INFO_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct X509_info_st* )  ;
    freefunc=(void (*)(struct X509_info_st* ) )freefunc_arg;
    freefunc((struct X509_info_st* )ptr);
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
static inline void sk_OCSP_RESPONSE_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct ocsp_response_st* )  ;
    freefunc=(void (*)(struct ocsp_response_st* ) )freefunc_arg;
    freefunc((struct ocsp_response_st* )ptr);
}
static inline int  __attribute__((unused))  sk_OCSP_RESPONSE_num(const struct stack_st_OCSP_RESPONSE*  sk  )
{
        return OPENSSL_sk_num((const struct stack_st* )sk);
}
static inline struct ocsp_response_st*  __attribute__((unused))  sk_OCSP_RESPONSE_value(const struct stack_st_OCSP_RESPONSE*  sk  , int idx)
{
        return (struct ocsp_response_st* )OPENSSL_sk_value((const struct stack_st* )sk,idx);
}
static inline struct stack_st_OCSP_RESPONSE*  __attribute__((unused))  sk_OCSP_RESPONSE_new(int (*compare)(const struct ocsp_response_st** const ,const struct ocsp_response_st** const )  )
{
    struct stack_st*  ret  ;
    void (*f_thunk)(void (*)(void*) ,void*)  ;
    memset(&f_thunk, 0, sizeof(f_thunk));
    ret=OPENSSL_sk_new((int (*)(const void*,const void*) )compare);
    f_thunk=(void (*)(void (*)(void*) ,void*) )sk_OCSP_RESPONSE_freefunc_thunk;
        return (struct stack_st_OCSP_RESPONSE* )OPENSSL_sk_set_thunks(ret,f_thunk);
}
static inline struct stack_st_OCSP_RESPONSE*  __attribute__((unused))  sk_OCSP_RESPONSE_new_null()
{
        return (struct stack_st_OCSP_RESPONSE* )OPENSSL_sk_new_null();
}
static inline struct stack_st_OCSP_RESPONSE*  __attribute__((unused))  sk_OCSP_RESPONSE_new_reserve(int (*compare)(const struct ocsp_response_st** const ,const struct ocsp_response_st** const )  , int n)
{
    struct stack_st*  ret  ;
    void (*f_thunk)(void (*)(void*) ,void*)  ;
    memset(&f_thunk, 0, sizeof(f_thunk));
    ret=OPENSSL_sk_new_reserve((int (*)(const void*,const void*) )compare,n);
    f_thunk=(void (*)(void (*)(void*) ,void*) )sk_OCSP_RESPONSE_freefunc_thunk;
        return (struct stack_st_OCSP_RESPONSE* )OPENSSL_sk_set_thunks(ret,f_thunk);
}
static inline int  __attribute__((unused))  sk_OCSP_RESPONSE_reserve(struct stack_st_OCSP_RESPONSE*  sk  , int n)
{
        return OPENSSL_sk_reserve((struct stack_st* )sk,n);
}
static inline void  __attribute__((unused))  sk_OCSP_RESPONSE_free(struct stack_st_OCSP_RESPONSE*  sk  )
{
    OPENSSL_sk_free((struct stack_st* )sk);
}
static inline void  __attribute__((unused))  sk_OCSP_RESPONSE_zero(struct stack_st_OCSP_RESPONSE*  sk  )
{
    OPENSSL_sk_zero((struct stack_st* )sk);
}
static inline struct ocsp_response_st*  __attribute__((unused))  sk_OCSP_RESPONSE_delete(struct stack_st_OCSP_RESPONSE*  sk  , int i)
{
        return (struct ocsp_response_st* )OPENSSL_sk_delete((struct stack_st* )sk,i);
}
static inline struct ocsp_response_st*  __attribute__((unused))  sk_OCSP_RESPONSE_delete_ptr(struct stack_st_OCSP_RESPONSE*  sk  , struct ocsp_response_st*  ptr  )
{
        return (struct ocsp_response_st* )OPENSSL_sk_delete_ptr((struct stack_st* )sk,(const void*)ptr);
}
static inline int  __attribute__((unused))  sk_OCSP_RESPONSE_push(struct stack_st_OCSP_RESPONSE*  sk  , struct ocsp_response_st*  ptr  )
{
        return OPENSSL_sk_push((struct stack_st* )sk,(const void*)ptr);
}
static inline int  __attribute__((unused))  sk_OCSP_RESPONSE_unshift(struct stack_st_OCSP_RESPONSE*  sk  , struct ocsp_response_st*  ptr  )
{
        return OPENSSL_sk_unshift((struct stack_st* )sk,(const void*)ptr);
}
static inline struct ocsp_response_st*  __attribute__((unused))  sk_OCSP_RESPONSE_pop(struct stack_st_OCSP_RESPONSE*  sk  )
{
        return (struct ocsp_response_st* )OPENSSL_sk_pop((struct stack_st* )sk);
}
static inline struct ocsp_response_st*  __attribute__((unused))  sk_OCSP_RESPONSE_shift(struct stack_st_OCSP_RESPONSE*  sk  )
{
        return (struct ocsp_response_st* )OPENSSL_sk_shift((struct stack_st* )sk);
}
static inline void  __attribute__((unused))  sk_OCSP_RESPONSE_pop_free(struct stack_st_OCSP_RESPONSE*  sk  , void (*freefunc)(struct ocsp_response_st* )  )
{
    void (*f_thunk)(void (*)(void*) ,void*)  ;
    memset(&f_thunk, 0, sizeof(f_thunk));
    f_thunk=(void (*)(void (*)(void*) ,void*) )sk_OCSP_RESPONSE_freefunc_thunk;
    sk=(struct stack_st_OCSP_RESPONSE* )OPENSSL_sk_set_thunks((struct stack_st* )sk,f_thunk);
    OPENSSL_sk_pop_free((struct stack_st* )sk,(void (*)(void*) )freefunc);
}
static inline int  __attribute__((unused))  sk_OCSP_RESPONSE_insert(struct stack_st_OCSP_RESPONSE*  sk  , struct ocsp_response_st*  ptr  , int idx)
{
        return OPENSSL_sk_insert((struct stack_st* )sk,(const void*)ptr,idx);
}
static inline struct ocsp_response_st*  __attribute__((unused))  sk_OCSP_RESPONSE_set(struct stack_st_OCSP_RESPONSE*  sk  , int idx, struct ocsp_response_st*  ptr  )
{
        return (struct ocsp_response_st* )OPENSSL_sk_set((struct stack_st* )sk,idx,(const void*)ptr);
}
static inline int  __attribute__((unused))  sk_OCSP_RESPONSE_find(struct stack_st_OCSP_RESPONSE*  sk  , struct ocsp_response_st*  ptr  )
{
        return OPENSSL_sk_find((struct stack_st* )sk,(const void*)ptr);
}
static inline int  __attribute__((unused))  sk_OCSP_RESPONSE_find_ex(struct stack_st_OCSP_RESPONSE*  sk  , struct ocsp_response_st*  ptr  )
{
        return OPENSSL_sk_find_ex((struct stack_st* )sk,(const void*)ptr);
}
static inline int  __attribute__((unused))  sk_OCSP_RESPONSE_find_all(struct stack_st_OCSP_RESPONSE*  sk  , struct ocsp_response_st*  ptr  , int* pnum)
{
        return OPENSSL_sk_find_all((struct stack_st* )sk,(const void*)ptr,pnum);
}
static inline void  __attribute__((unused))  sk_OCSP_RESPONSE_sort(struct stack_st_OCSP_RESPONSE*  sk  )
{
    OPENSSL_sk_sort((struct stack_st* )sk);
}
static inline int  __attribute__((unused))  sk_OCSP_RESPONSE_is_sorted(const struct stack_st_OCSP_RESPONSE*  sk  )
{
        return OPENSSL_sk_is_sorted((const struct stack_st* )sk);
}
static inline struct stack_st_OCSP_RESPONSE*  __attribute__((unused))  sk_OCSP_RESPONSE_dup(const struct stack_st_OCSP_RESPONSE*  sk  )
{
        return (struct stack_st_OCSP_RESPONSE* )OPENSSL_sk_dup((const struct stack_st* )sk);
}
static inline struct stack_st_OCSP_RESPONSE*  __attribute__((unused))  sk_OCSP_RESPONSE_deep_copy(const struct stack_st_OCSP_RESPONSE*  sk  , struct ocsp_response_st* (*copyfunc)(const struct ocsp_response_st* )  , void (*freefunc)(struct ocsp_response_st* )  )
{
        return (struct stack_st_OCSP_RESPONSE* )OPENSSL_sk_deep_copy((const struct stack_st* )sk,(void* (*)(const void*) )copyfunc,(void (*)(void*) )freefunc);
}
static inline int __attribute__((unused))  (*sk_OCSP_RESPONSE_set_cmp_func(struct stack_st_OCSP_RESPONSE*  sk  , int (*compare)(const struct ocsp_response_st** const ,const struct ocsp_response_st** const )  ))(const struct ocsp_response_st** const ,const struct ocsp_response_st** const ) 
{
        return (int (*)(const struct ocsp_response_st** const ,const struct ocsp_response_st** const ) )OPENSSL_sk_set_cmp_func((struct stack_st* )sk,(int (*)(const void*,const void*) )compare);
}
static inline void sk_X509_LOOKUP_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct x509_lookup_st* )  ;
    freefunc=(void (*)(struct x509_lookup_st* ) )freefunc_arg;
    freefunc((struct x509_lookup_st* )ptr);
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
static inline void sk_X509_OBJECT_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct x509_object_st* )  ;
    freefunc=(void (*)(struct x509_object_st* ) )freefunc_arg;
    freefunc((struct x509_object_st* )ptr);
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
static inline void sk_X509_VERIFY_PARAM_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct X509_VERIFY_PARAM_st* )  ;
    freefunc=(void (*)(struct X509_VERIFY_PARAM_st* ) )freefunc_arg;
    freefunc((struct X509_VERIFY_PARAM_st* )ptr);
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
static inline void sk_X509_TRUST_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct x509_trust_st* )  ;
    freefunc=(void (*)(struct x509_trust_st* ) )freefunc_arg;
    freefunc((struct x509_trust_st* )ptr);
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
static inline void sk_PKCS7_SIGNER_INFO_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct pkcs7_signer_info_st* )  ;
    freefunc=(void (*)(struct pkcs7_signer_info_st* ) )freefunc_arg;
    freefunc((struct pkcs7_signer_info_st* )ptr);
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
static inline void sk_PKCS7_RECIP_INFO_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct pkcs7_recip_info_st* )  ;
    freefunc=(void (*)(struct pkcs7_recip_info_st* ) )freefunc_arg;
    freefunc((struct pkcs7_recip_info_st* )ptr);
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
static inline void sk_PKCS7_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct pkcs7_st* )  ;
    freefunc=(void (*)(struct pkcs7_st* ) )freefunc_arg;
    freefunc((struct pkcs7_st* )ptr);
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
static inline void sk_CONF_VALUE_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct anonymous_typeX41* )  ;
    freefunc=(void (*)(struct anonymous_typeX41* ) )freefunc_arg;
    freefunc((struct anonymous_typeX41* )ptr);
}
static inline struct anonymous_typeX41*  __attribute__((unused))  ossl_check_CONF_VALUE_type(struct anonymous_typeX41*  ptr  )
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
static inline int __attribute__((unused))  (*ossl_check_CONF_VALUE_compfunc_type(int (*cmp)(const struct anonymous_typeX41** const ,const struct anonymous_typeX41** const )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline void* __attribute__((unused))  (*ossl_check_CONF_VALUE_copyfunc_type(struct anonymous_typeX41* (*cpy)(const struct anonymous_typeX41* )  ))(const void*) 
{
        return (void* (*)(const void*) )cpy;
}
static inline void __attribute__((unused))  (*ossl_check_CONF_VALUE_freefunc_type(void (*fr)(struct anonymous_typeX41* )  ))(void*) 
{
        return (void (*)(void*) )fr;
}
static inline unsigned long  int lh_CONF_VALUE_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)  )
{
    unsigned long  int (*hfn_conv)(const struct anonymous_typeX41* );
    hfn_conv=(unsigned long  int (*)(const struct anonymous_typeX41* ))hfn;
        return hfn_conv((const struct anonymous_typeX41* )data);
}
static inline int lh_CONF_VALUE_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)  )
{
    int (*cfn_conv)(const struct anonymous_typeX41* ,const struct anonymous_typeX41* );
    cfn_conv=(int (*)(const struct anonymous_typeX41* ,const struct anonymous_typeX41* ))cfn;
        return cfn_conv((const struct anonymous_typeX41* )da,(const struct anonymous_typeX41* )db);
}
static inline void lh_CONF_VALUE_doall_thunk(void* node, void (*doall)(void*)  )
{
    void (*doall_conv)(struct anonymous_typeX41* );
    doall_conv=(void (*)(struct anonymous_typeX41* ))doall;
    doall_conv((struct anonymous_typeX41* )node);
}
static inline void lh_CONF_VALUE_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)  )
{
    void (*doall_conv)(struct anonymous_typeX41* ,void*);
    doall_conv=(void (*)(struct anonymous_typeX41* ,void*))doall;
    doall_conv((struct anonymous_typeX41* )node,arg);
}
static inline struct anonymous_typeX41*  __attribute__((unused))  ossl_check_CONF_VALUE_lh_plain_type(struct anonymous_typeX41*  ptr  )
{
        return ptr;
}
static inline const struct anonymous_typeX41*  __attribute__((unused))  ossl_check_const_CONF_VALUE_lh_plain_type(const struct anonymous_typeX41*  ptr  )
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
static inline int __attribute__((unused))  (*ossl_check_CONF_VALUE_lh_compfunc_type(int (*cmp)(const struct anonymous_typeX41* ,const struct anonymous_typeX41* )  ))(const void*,const void*) 
{
        return (int (*)(const void*,const void*) )cmp;
}
static inline unsigned long  int __attribute__((unused))  (*ossl_check_CONF_VALUE_lh_hashfunc_type(unsigned long  int (*hfn)(const struct anonymous_typeX41* )  ))(const void*) 
{
        return (unsigned long  int (*)(const void*) )hfn;
}
static inline void __attribute__((unused))  (*ossl_check_CONF_VALUE_lh_doallfunc_type(void (*dfn)(struct anonymous_typeX41* )  ))(void*) 
{
        return (void (*)(void*) )dfn;
}
static inline void sk_SCT_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct sct_st* )  ;
    freefunc=(void (*)(struct sct_st* ) )freefunc_arg;
    freefunc((struct sct_st* )ptr);
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
static inline void sk_CTLOG_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct ctlog_st* )  ;
    freefunc=(void (*)(struct ctlog_st* ) )freefunc_arg;
    freefunc((struct ctlog_st* )ptr);
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
static inline void sk_SRTP_PROTECTION_PROFILE_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct srtp_protection_profile_st* )  ;
    freefunc=(void (*)(struct srtp_protection_profile_st* ) )freefunc_arg;
    freefunc((struct srtp_protection_profile_st* )ptr);
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
static inline void sk_SSL_CIPHER_freefunc_thunk(void (*freefunc_arg)(void*)  , void* ptr)
{
    void (*freefunc)(struct ssl_cipher_st* )  ;
    freefunc=(void (*)(struct ssl_cipher_st* ) )freefunc_arg;
    freefunc((struct ssl_cipher_st* )ptr);
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

// body function
int test_headers_subdir()
{
        return 0;
}


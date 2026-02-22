/// c_include definition ///
/// typedef definition ///
typedef __builtin_va_list __gnuc_va_list;

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

typedef long long int __int64_t;

typedef unsigned long long int __uint64_t;

typedef long long int __quad_t;

typedef unsigned long long int __u_quad_t;

typedef unsigned long  int __ino_t;

typedef unsigned long long int  __ino64_t  ;

typedef long long int  __off64_t  ;

typedef long long int  __loff_t  ;

typedef struct __fsid_t  __fsid_t  ;

/// previous struct definition ///
/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

/// variable definition ///
// source head

// header function
char* strdup(const char* );
int vsnprintf(char* , unsigned long  int , const char* , __builtin_va_list    );
int snprintf(char* , unsigned long  int , const char* , ...);
int test_headers_linux();
// uniq global variable
// inline function

// body function
int test_headers_linux()
{
        return 0;
}


#include "common.h"

FILE __stdin  = { .fd = 0, .flags = 1, .pos = 0 };
FILE __stdout = { .fd = 1, .flags = 2, .pos = 0 };
FILE __stderr = { .fd = 2, .flags = 2, .pos = 0 };
FILE* stdin  = &__stdin;
FILE* stdout = &__stdout;
FILE* stderr = &__stderr;

static int __append_char(char **p, unsigned long *rem, char c) {
    if (*rem > 1) { **p = c; (*p)++; (*rem)--; return 1; }
    return 0;
}

static void __append_str(char **p, unsigned long *rem, const char *s) {
    while (*s && *rem > 1) { **p = *s++; (*p)++; (*rem)--; }
}


typedef struct mem_block {
    size_t size;
    struct mem_block *next;
} mem_block_t;

mem_block_t *free_list = NULL;

void *malloc(size_t size) {
    if (size == 0) {
        return NULL;
    }

    if (size % 8 != 0) {
        size += 8 - (size % 8);
    }
    size += sizeof(mem_block_t); 

    mem_block_t *current = free_list;
    mem_block_t *prev = NULL;

    while (current != NULL) {
        if (current->size >= size) {
            if (current->size >= size + sizeof(mem_block_t) + 8) {
                mem_block_t *remain = (mem_block_t *)((char *)current + size);
                remain->size = current->size - size;
                remain->next = current->next;

                if (prev == NULL) {
                    free_list = remain;
                } else {
                    prev->next = remain;
                }
                current->size = size;
            } else {
                if (prev == NULL) {
                    free_list = current->next;
                } else {
                    prev->next = current->next;
                }
            }
            return (void *)(current + 1); 
        }
        prev = current;
        current = current->next;
    }

    mem_block_t *new_mem = (mem_block_t *)sbrk(size);
    if (new_mem == (void *)-1) {
        return NULL; 
    }

    new_mem->size = size;
    new_mem->next = NULL;
    return (void *)(new_mem + 1); 
}

void free(void *ptr) {
    if (ptr == NULL) {
        return;
    }

    mem_block_t *block = (mem_block_t *)ptr - 1;
    mem_block_t *current;

    if (free_list == NULL || block < free_list) {
        block->next = free_list;
        free_list = block;
    } else {
        current = free_list;
        while (current->next != NULL && current->next < block) {
            current = current->next;
        }
        block->next = current->next;
        current->next = block;
    }

    current = free_list;
    while (current != NULL && current->next != NULL) {
        if ((char *)current + current->size == (char *)current->next) {
            current->size += current->next->size;
            current->next = current->next->next;
        } else {
            current = current->next;
        }
    }
}


void* memset(void *dst, int c, unsigned int n);

void *calloc(size_t nmemb, size_t size) {
    size_t total_size = nmemb * size;
    if (total_size == 0) {
        return NULL;
    }

    void *ptr = malloc(total_size);
    if (ptr != NULL) {
        memset(ptr, 0, total_size);
    }
    return ptr;
}

int strlen(const char *s);
void* memcpy(void *dst, const void *src, unsigned int n);

char* strdup(const char* s) {
    char* s2 = s;
    size_t len = strlen(s2) + 1;
    char* p = malloc(len);
    if (p)
        memcpy(p, s2, len);
    return p;
}


int strcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}
                            
char* strstr(const char* haystack, const char* needle) {
    if (!*needle)
        return (char*)haystack;

    for (; *haystack; haystack++) {
        const char* h = haystack;
        const char* n = needle;

        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }

        if (!*n)  // needle 
            return (char*)haystack;
    }

    return NULL;  
}

void* memset(void *dst, int c, unsigned int n) {
    unsigned char *p = (unsigned char*)dst;
    unsigned int len = n;
    unsigned char byte = (unsigned char)c;

    if (len == 0) {
        return dst;
    }

    // Align to 8-byte boundary
    while (len && ((uintptr_t)p & 7)) {
        *p++ = byte;
        len--;
    }

    if (len >= 8) {
        uint64_t pattern = byte;
        pattern |= pattern << 8;
        pattern |= pattern << 16;
        pattern |= pattern << 32;

        uint64_t *pw = (uint64_t*)p;
        unsigned int words = len / 8;
        while (words--) {
            *pw++ = pattern;
        }
        p = (unsigned char*)pw;
        len &= 7;
    }

    while (len--) {
        *p++ = byte;
    }

    return dst;
}

int memcmp(const void *v1, const void *v2, unsigned int n) {
    const unsigned char *s1, *s2;

    s1 = v1;
    s2 = v2;
    while(n-- > 0){
        if(*s1 != *s2)
            return *s1 - *s2;
        s1++, s2++;
    }

    return 0;
}

void* memmove(void *dst, const void *src, unsigned int n) {
  const char *s;
  char *d;

  if(n == 0)
    return dst;
  
  s = src;
  d = dst;
  if(s < d && s + n > d){
    s += n;
    d += n;
    while(n-- > 0)
      *--d = *--s;
  } else
    while(n-- > 0) {
      *d++ = *s++;
    }

  return dst;
}

void* memcpy(void *dst, const void *src, unsigned int n) {
  return memmove(dst, src, n);
}

int strncmp(const char *p, const char *q, unsigned int n) {
  while(n > 0 && *p && *p == *q)
    n--, p++, q++;
  if(n == 0)
    return 0;
  return (unsigned char)*p - (unsigned char)*q;
}

char* strncpy(char *s, const char *t, int n) {
  char *os;

  os = s;
  while(n-- > 0 && (*s++ = *t++) != 0)
    ;
  while(n-- > 0)
    *s++ = 0;
  return os;
}

int strlen(const char *s) {
  int n;

  for(n = 0; s[n]; n++)
    ;
  return n;
}

int ferror(FILE* fp) {
    if(!fp) {
        return 1;
    }
    return fp->err;
}

// putchar is environment-dependent and defined externally
extern void putchar(char c);
extern void putc(char c);

void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, size_t n) {
    char* d = dest;

    // dest 
    while (*d) d++;

    //  n  src null 
    while (n-- && *src) {
        *d++ = *src++;
    }

    *d = '\0';

    return dest;
}

// minimal strchr implementation for kernel use
char* strchr(const char* s, int c) {
    while (*s) {
        if (*s == (char)c) return (char*)s;
        s++;
    }
    return (c == 0) ? (char*)s : 0;
}


// Custom strtok implementation
// If s is non-NULL, start scanning from the beginning of s.
// If s is NULL, continue from the position saved during the previous call.
// Split the string at any character contained in delim and return the next token.
// Return NULL when no tokens remain.
char *strtok(char *s, const char *delim) {
    static char *next;    // Saved start position for the next token search
    char *start;
    char *p;

    // If s is non-NULL at call time, start a new string search
    if (s != NULL) {
        next = s;
    }

    // If the previous call reached the end, return NULL
    if (next == NULL) {
        return NULL;
    }

    // 1) Skip leading delimiters
    start = next;
    while (*start != '\0') {
        // Check whether it is contained in delim
        const char *d = delim;
        int is_delim = 0;
        while (*d != '\0') {
            if (*start == *d) {
                is_delim = 1;
                break;
            }
            d++;
        }
        if (!is_delim) {
            break;
        }
        start++;
    }

    // Only delimiters until the end → no token remains
    if (*start == '\0') {
        next = NULL;
        return NULL;
    }

    // 2) Find the end of the token
    p = start;
    while (*p != '\0') {
        const char *d = delim;
        int is_delim = 0;
        while (*d != '\0') {
            if (*p == *d) {
                is_delim = 1;
                break;
            }
            d++;
        }
        if (is_delim) {
            break;
        }
        p++;
    }

    // 3) Replace the token terminator with '\0' and set next for the next call
    if (*p == '\0') {
        // Reached end of string; future calls with s=NULL will return NULL again
        next = NULL;
    } else {
        // Replace the delimiter with '\0' and set the next start position to p+1
        *p = '\0';
        next = p + 1;
    }

    // Return the start of the token
    return start;
}

void exit(int n) {
    while(1);
}

static int __utoa_ull(char* dst, unsigned long long v, int base, int lower){
  static const char L[]="0123456789abcdef";
  static const char U[]="0123456789ABCDEF";
  const char* D = lower ? L : U;
  char tmp[32]; int i=0;
  if (base<2 || base>16){ dst[0]='0'; dst[1]=0; return 1; }
  if (v==0){ dst[0]='0'; dst[1]=0; return 1; }
  while (v){ tmp[i++] = D[v % (unsigned)base]; v /= (unsigned)base; }
  int n=i, j=0; while (i--) dst[j++]=tmp[i]; dst[j]=0; return n;
}

static void __fmt_num(char **p, unsigned long *rem,
                      unsigned long long v, int base,
                      int is_signed, int neg, int width, char pad, int lower) {
    char num[64]; int n = __utoa_ull(num, v, base, lower);
    int total = n + (neg?1:0);
    while (total < width) { __append_char(p, rem, pad); total++; }
    if (neg) __append_char(p, rem, '-');
    __append_str(p, rem, num);
}

char* itoa(char* buf, unsigned long val_, int base, int is_signed) {
    char* p = buf;
    char tmp[32];
    int i = 0;
    int negative = 0;

    if (base < 2 || base > 16) {
        *p = '\0';
        return p;
    }

    if (is_signed && (long)val_ < 0) {
        negative = 1;
        val_ = (unsigned long)(-(long)val_);
    }

    do {
        int digit = val_ % base;
        tmp[i++] = (digit < 10) ? '0' + digit : 'a' + digit - 10;
        val_ /= base;
    } while (val_);

    if (negative)
        *p++ = '-';

    while (i--)
        *p++ = tmp[i];
    *p = '\0';
    return buf;
}

int vasprintf(char** out, const char* fmt, va_list ap) {
    char out2[512];
    char* p = out2;
    const char* s;
    char buf[32];
    unsigned long remaining = sizeof(out2);

    for (; *fmt && remaining > 1; fmt++) {
        if (*fmt != '%') {
            *p++ = *fmt;
            remaining--;
            continue;
        }

        fmt++;  // skip '%'
        switch (*fmt) {
        case 'd':
            itoa(buf, va_arg(ap, int), 10, 1);
            s = buf;
            break;
        case 'u':
            itoa(buf, va_arg(ap, unsigned int), 10, 0);
            s = buf;
            break;
        case 'x':
            itoa(buf, va_arg(ap, unsigned int), 16, 0);
            s = buf;
            break;
        case 's':
            s = va_arg(ap, const char*);
            if (!s) s = "(null)";
            break;
        case 'c':
            buf[0] = (char)va_arg(ap, int);  
            buf[1] = '\0';
            s = buf;
            break;
        case 'p':
            strncpy(buf, "0x", 32);
            itoa(buf + 2, (unsigned long)(uintptr_t)va_arg(ap, void*), 16, 0);
            s = buf;
            break;
        case '%':
            buf[0] = '%';
            buf[1] = '\0';
            s = buf;
            break;
        default:
            buf[0] = '%';
            buf[1] = *fmt;
            buf[2] = '\0';
            s = buf;
            break;
        }

        while (*s && remaining > 1) {
            *p++ = *s++;
            remaining--;
        }
    }

    *p = '\0';
    *out = strdup(out2);
    return p - out2;
}

// ========= Common formatter =========
typedef struct {
  // Generic putc usable for either FILE* output or buffer output
  void (*putc_fn)(void* ctx, char c);
  void* ctx;
  int count;
} __fmt_out_t;

static void __fmt_putc(__fmt_out_t* o, char c) {
  o->putc_fn(o->ctx, c);
  o->count++;
}

static int __is_digit(char c){ return c>='0' && c<='9'; }


static void __emit_pad(__fmt_out_t* o, char pad, int n){
  while (n-- > 0) __fmt_putc(o, pad);
}

// Add/replace: include left in the numeric output helper
static void __emit_num(__fmt_out_t* o, unsigned long long v,
                       int base, int is_signed, int neg,
                       int width, char pad, int lower, int left) {
  char buf[64];
  int n = __utoa_ull(buf, v, base, lower);
  int total = n + (neg ? 1 : 0);

  if (!left) {
    __emit_pad(o, pad, (width>total)?(width-total):0);
  }
  if (neg) __fmt_putc(o, '-');
  for (int i=0;i<n;i++) __fmt_putc(o, buf[i]);
  if (left) {
    __emit_pad(o, ' ', (width>total)?(width-total):0); // Left alignment pads with spaces after
  }
}

// Core formatter inside __vformat
static void __vformat(__fmt_out_t* o, const char* fmt, va_list ap) {
  while (*fmt) {
    if (*fmt != '%'){ __fmt_putc(o, *fmt++); continue; }
    fmt++; // skip '%'

    // ---- flags ----
    char pad = ' ';
    int left = 0;
    int parsing_flags = 1;
    while (parsing_flags) {
      if (*fmt == '0') { pad = '0'; fmt++; }
      else if (*fmt == '-') { left = 1; pad = ' '; fmt++; } // '-' takes precedence, disable zero padding
      else parsing_flags = 0;
    }

    // ---- width ----
    int width = 0;
    while (*fmt >= '0' && *fmt <= '9') { width = width*10 + (*fmt - '0'); fmt++; }

    // ---- length: l / ll ----
    int lcount = 0;
    while (*fmt == 'l'){ lcount++; fmt++; }

    // ---- conversion ----
    char c = *fmt ? *fmt++ : '\0';
    switch (c){
      case 'd': {
        long long sv;
        if (lcount >= 2)      sv = va_arg(ap, long long);
        else if (lcount == 1) sv = va_arg(ap, long);
        else                  sv = va_arg(ap, int);
        int neg = (sv < 0);
        unsigned long long uv = neg ? (unsigned long long)(-sv) : (unsigned long long)sv;
        __emit_num(o, uv, 10, 1, neg, width, pad, 1, left);
        break;
      }
      case 'u': case 'x': {
        int base = (c=='x')?16:10;
        unsigned long long uv;
        if (lcount >= 2)      uv = va_arg(ap, unsigned long long);
        else if (lcount == 1) uv = va_arg(ap, unsigned long);
        else                  uv = (unsigned int)va_arg(ap, unsigned int);
        __emit_num(o, uv, base, 0, 0, width, pad, 1, left);
        break;
      }
      case 'p': {
        unsigned long long uv = (unsigned long long)(uintptr_t)va_arg(ap, void*);
        // 0x is always at the front; width applies to the portion excluding "0x". Handle left alignment.
        if (!left) {
          int hexlen = 0; { char tmp[64]; hexlen = __utoa_ull(tmp, uv, 16, 1); }
          int total = 2 + hexlen; // "0x" + hex
          __emit_pad(o, pad, (width>total)?(width-total):0);
        }
        __fmt_putc(o,'0'); __fmt_putc(o,'x');
        __emit_num(o, uv, 16, 0, 0, 0, ' ', 1, 0); // Emit contents with width 0
        if (left) {
          int hexlen = 0; { char tmp[64]; hexlen = __utoa_ull(tmp, uv, 16, 1); }
          int total = 2 + hexlen;
          __emit_pad(o, ' ', (width>total)?(width-total):0);
        }
        break;
      }
      case 'c': {
        char ch = (char)va_arg(ap, int);
        if (!left) __emit_pad(o, pad, (width>1)?(width-1):0);
        __fmt_putc(o, ch);
        if (left) __emit_pad(o, ' ', (width>1)?(width-1):0);
        break;
      }
      case 's': {
        const char* s = va_arg(ap, const char*);
        if (!s) s="(null)";
        int len=0; for(const char* t=s; *t; ++t) len++;
        if (!left) __emit_pad(o, pad, (width>len)?(width-len):0);
        while (*s) __fmt_putc(o, *s++);
        if (left) __emit_pad(o, ' ', (width>len)?(width-len):0);
        break;
      }
      case '%': __fmt_putc(o,'%'); break;
      default:
        // Pass unknown specifiers through
        __fmt_putc(o,'%');
        if (c) __fmt_putc(o,c);
        break;
    }
  }
}



// ========= FILE* variants =========
/*
static void __file_putc(void* ctx, char ch){
  FILE* fp = (FILE*)ctx;
  fputc((unsigned char)ch, fp);
}

int vfprintf(FILE* fp, const char* fmt, va_list ap){
  __fmt_out_t out = { __file_putc, fp, 0 };
  va_list aq; va_copy(aq, ap);
  __vformat(&out, fmt, aq);
  va_end(aq);
  return out.count;
}

int fprintf(FILE* fp, const char* fmt, ...){
  va_list ap; va_start(ap, fmt);
  int r = vfprintf(fp, fmt, ap);
  va_end(ap);
  return r;
}
*/

static void __file_putc(void* ctx, char ch){
  FILE* fp = (FILE*)ctx;
  putc((unsigned char)ch);
}

int printf(const char* fmt, ...){
  va_list ap; va_start(ap, fmt);
  __fmt_out_t out = { __file_putc, stdout, 0 };
  __vformat(&out, fmt, ap);
  va_end(ap);
  return out.count;
}

// ========= Buffer variants (snprintf, vsnprintf) =========
typedef struct {
  char* p; unsigned long rem;
} __buf_ctx_t;

static void __buf_putc(void* ctx, char ch){
  __buf_ctx_t* b = (__buf_ctx_t*)ctx;
  if (b->rem > 1){ *(b->p)++ = ch; b->rem--; }
}

int vsnprintf(char* out, unsigned long out_size, const char* fmt, va_list ap){
  if (!out || out_size==0) return 0;
  __buf_ctx_t b = { out, out_size };
  __fmt_out_t o = { __buf_putc, &b, 0 };
  va_list aq; va_copy(aq, ap);
  __vformat(&o, fmt, aq);
  va_end(aq);
  // NUL termination
  if (b.rem > 0) *(b.p) = '\0';
  else out[out_size-1] = '\0';
  return o.count;
}

int snprintf(char* out, unsigned long out_size, const char* fmt, ...){
  va_list ap; va_start(ap, fmt);
  int r = vsnprintf(out, out_size, fmt, ap);
  va_end(ap);
  return r;
}

#include <neo-c.h>

static int gNumMemAlloc;

/// others ///
void xassert(char* msg, bool exp) 
{
    printf(msg + "...");
    if(!exp) {
        puts("assertion failed");
        exit(2);
    }
    puts("OK");
}

void p(char* str)
{
    puts(str);
}

string xbasename(char* path)
{
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '/') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
}

string xrealpath(char* path)
{
    char* result = realpath(path, null);

    string result2 = string(result);

    free(result);

    return result2;
}

string xsprintf(char* msg, ...)
{
    gNumMemAlloc++;

    va_list args;
    va_start(args, msg);
    char* tmp;
    int len = vasprintf(&tmp, msg, args);
    va_end(args);

    if(len < 0) {
        fprintf(stderr, "can't get heap memory. Heap memory number is %d. xsprintf len %d\n", gNumMemAlloc, len);

        exit(2);
    }

    return dummy_heap tmp;
}

char* xstrncpy(char* des, char* src, int size)
{
    char* result;

    result = strncpy(des, src, size-1);
    des[size-1] = 0;

    return result;
}

char* xstrncat(char* des, char* str, int size)
{
    char* result;

    result = strncat(des, str, size-1);
    des[size-1] = 0;

    return result;
}

/// buffer ///
impl buffer 
{
    initialize() {
        self.size = 128;
        self.buf = malloc(self.size);
        self.buf[0] = '\0'
        self.len = 0;
    }

    finalize() {
        free(self.buf);
    }

    int length(buffer* self) {
        return self.len;
    }

    void append(buffer* self, char* mem, size_t size)
    {
        if(self.len + size + 1 + 1 >= self.size) {
            int new_size = (self.size + size + 1) * 2;
            self.buf = realloc(self.buf, new_size);
            self.size = new_size;
        }

        ncmemcpy(self.buf + self.len, mem, size);
        self.len += size;

        self.buf[self.len] = '\0';
    }

    void append_char(buffer* self, char c)
    {
        if(self.len + 1 + 1 + 1 >= self.size) {
            int new_size = (self.size + 10 + 1) * 2;
            self.buf = realloc(self.buf, new_size);
            self.size = new_size;
        }

        self.buf[self.len] = c;
        self.len++;

        self.buf[self.len] = '\0';
    }

    void append_str(buffer* self, char* str)
    {
        self.append(str, strlen(str));
    }

    void append_nullterminated_str(buffer* self, char* str)
    {
        self.append(str, strlen(str));
        self.append_char('\0');
    }

    string to_string(buffer* self)
    {
        return (string(self.buf));
    }
    void append_int(buffer* self, int value) {
        self.append((char*)&value, sizeof(int));
    }
    void append_long(buffer* self, long value) {
        self.append((char*)&value, sizeof(long));
    }
    void append_short(buffer* self, short value) {
        self.append((char*)&value, sizeof(short));
    }
    void alignment(buffer* self) {
        int len = self.len;
        len = (len + 3) & ~3;

        for(int i=self.len; i<len; i++) {
            self.append_char('\0');
        }
    }

    int compare(buffer* left, buffer* right) {
        return strcmp(left.buf, right.buf);
    }
}

impl char*
{
    bool equals(char* left, char* right)
    {
        return strcmp(left, right) == 0;
    }

    int length(char* str)
    {
        return strlen(str);
    }

    int get_hash_key(char* value)
    {
        int result = 0;
        char* p = value;
        while(*p) {
            result += (*p);
            p++;
        }
        return result;
    }

    string to_string(char* value) {
        return string(value);
    }

    int compare(char* left, char* right) {
        return strcmp(left, right);
    }
    
    wstring to_wstring(char* value) {
        return wstring(value);
    }
}

impl int
{
    bool equals(int left, int right) 
    {
        return left == right;
    }

    int get_hash_key(int value)
    {
        return value;
    }

    string to_string(int value) {
        return xsprintf("%c", value);
    }

    int compare(int left, int right) {
        if(left < right) {
            return -1;
        }
        else if(left > right) {
            return 1;
        }
        else {
            return 0;
        }
    }
}


impl char
{
    bool equals(char left, char right)
    {
        return left == right;
    }

    inline int get_hash_key(char value)
    {
        return value;
    }

    inline string to_string(char value) {
        return xsprintf("%c", value);
    }

    inline int compare(char left, char right) {
        if(left < right) {
            return -1;
        }
        else if(left > right) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

void*% nccalloc(long num, long nsize)
{
    void* result = calloc(num, nsize);

    if(result == NULL) {
        fprintf(stderr, "can't get heap memory. Heap memory number is %d. nccalloc num %d nsize %d\n", gNumMemAlloc, num, nsize);

        exit(2);
    }

    memset(result, 0, num*nsize);

    gNumMemAlloc++;

    return result;
}

void*% ncmalloc(long size)
{
    void* result = malloc(size);

    if(result == NULL) {
        fprintf(stderr, "can't get heap memory. Heap memory number is %d size %d. ncmalloc\n", gNumMemAlloc, size);
        exit(2);
    }

    gNumMemAlloc++;

    return result;
}

void*% ncmemdup(void*% block)
{
    managed block;

#ifdef __DARWIN__
    long size = malloc_size(block);
#else
    long size = malloc_usable_size(block);
#endif

    if(!block) {
        return null;
    }

    void*% ret = nccalloc(1, size);

    if (ret) {
        char* p = ret;
        char* p2 = block;
        while(p - ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }

    return ret;
}

void*% ncrealloc(void *block, long size)
{
#ifdef __DARWIN__
    void* result = calloc(1, size);
    memcpy(result, block, size);
    free(block);

    if(result == NULL) {
        fprintf(stderr, "can't get heap memory. Heap memory number is %d.realloc size %d. realloc memory %p\n", gNumMemAlloc, size, block);
        exit(2);
    }

    return result;
#else
    void* result = realloc(block, size);

    if(result == NULL) {
        fprintf(stderr, "can't get heap memory. Heap memory number is %d.realloc size %d. realloc memory %p\n", gNumMemAlloc, size, block);
        exit(2);
    }

    return result;
#endif
}

long ncmalloc_usable_size(void* block)
{
#ifdef __DARWIN__
    return malloc_size(block);
#else
    return malloc_usable_size(block);
#endif
}

void ncfree(void *block)
{
    if(block) {
        gNumMemAlloc--;
    }
    if(block) {
        free(block);
    }
}

void* ncmemcpy(void* mem, void* mem2, long size)
{
    return memcpy(mem, mem2, size);
}

void initialize_main()
{
    gNumMemAlloc = 0;
}

void finalize_main()
{
    if(gNumMemAlloc > 0) {
        fprintf(stderr, "memory leak is detected\n");
    }
}

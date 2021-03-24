#undef snprintf
#undef strcpy

#define _GNU_SOURCE
#define _XOPEN_SOURCE
#define __USE_XOPEN
#define _USE_MISC
#define __USE_BSD

#undef __GNUC__
#undef __clang__

#include <limits.h>

#ifndef __DARWIN__
#include <wchar.h>
#endif

#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pcre.h>
#include <stdarg.h>
#include <stdint.h>
#include <malloc.h>

#define __STDC_LIMIT_MACROS 1
#define __STDC_CONSTANT_MACROS 1

/// heap system ///
void*% nccalloc(long num, long nsize);
void*% ncmalloc(long size);
void*% ncmemdup(void*% block);

void*% ncrealloc(void *block, long size);
long ncmalloc_usable_size(void* block);
void ncfree(void *block);
void* ncmemcpy(void* mem, void* mem2, long size);
void initialize_main();
void finalize_main();

/// string ///
typedef char*% string;
typedef wchar_t*% wstring;

string string(char* str);

string xsprintf(char* msg, ...);

char* xstrncpy(char* des, char* src, int size);
char* xstrncat(char* des, char* str, int size);

string xbasename(char* path);
string xrealpath(char* path);

string string_from_wchar_t(wchar_t* wstr, char* default_value);

wstring wstring(char* str);

wstring wstring_from_wchar_t(wchar_t* str);
wstring operator+(wchar_t* left, wchar_t* right);
wstring operator*(wchar_t* left, int num);
wstring operator+(wstring& left, wstring& right);
wstring operator*(wstring& left, int num);

void p(char* str);

/// int ///
impl int
{
    bool equals(int left, int right);
    int get_hash_key(int value);
    string to_string(int value);
    int compare(int left, int right);

    int expect(int self, void (*block_)());
}

/// char* ///
string operator+(char* left, char* right);
string operator*(char* left, int num);

impl char
{
    bool equals(char left, char right);
    int get_hash_key(char value);
    string to_string(char value);
    int compare(char left, char right);
}

impl char*
{
    bool equals(char* left, char* right);
    int length(char* str);
    int get_hash_key(char* value);
    string to_string(char* value);
    int compare(char* left, char* right);
    wstring to_wstring(char* value);
}

/// wchar_t ///
impl wchar_t
{
    bool equals(wchar_t left, wchar_t right);
    int get_hash_key(wchar_t value);
    string to_string(wchar_t value);
    int compare(wchar_t left, wchar_t right);
}

impl wchar_t*
{
    bool equals(wchar_t* left, wchar_t* right);
    int length(wchar_t* str);
    int get_hash_key(wchar_t* value);

    string to_string(wchar_t* str, char* default_value);
    wstring to_wstring(wchar_t* str);
    int compare(wstring& left, wstring& right);
}

/// buffer ///
struct buffer {
    char* buf;
    int len;
    int size;
};

impl buffer 
{
    initialize();

    finalize();
    int length(buffer* self);
    void append(buffer* self, char* mem, size_t size);

    void append_char(buffer* self, char c);

    void append_str(buffer* self, char* str);
    void append_nullterminated_str(buffer* self, char* str);
    string to_string(buffer* self);
    void append_int(buffer* self, int value);
    void append_long(buffer* self, long value);
    void append_short(buffer* self, short value);
    void alignment(buffer* self);
    int compare(buffer* left, buffer* right);
}

/// regex ///
struct regex_struct {
    string str;
    pcre* regex;

    bool ignore_case;
    bool multiline;
    bool global;
    bool extended;
    bool dotall;
    bool anchored;
    bool dollar_endonly;
    bool ungreedy;

    int options;
};

typedef regex_struct*% nregex;

nregex regex(char* str, bool ignore_case, bool multiline, bool global, bool extended, bool dotall, bool anchored, bool dollar_endonly, bool ungreedy);

ruby_macro regex {
    param_line = ENV['PARAMS'];

    n = 0;

    
    if param_line[n] == "/"
      n = n + 1
    elsif param_line[n] == "\""
      n = n + 1
    end

    str = ""

    ignore_case = false;
    multiline = false;
    global = false;
    extended = false;
    dotall = false;
    anchored = false;
    dollar_endonly = false;
    ungreedy = false;

    while(n < param_line.length()) do
      c = param_line[n];
      c2 = param_line[n+1]

      if c == "\\" && c2 == "/"
          str = str + c + c2

          n = n + 2
      elsif c == "\\" && c2 == "\""
          str = str + c + c2

          n = n + 2
      elsif c == "/" || c == "\""
          n = n + 1;

          while(n < param_line.length()) do
              c = param_line[n];

              if c == "i"
                  ignore_case = true;
              elsif c == "m"
                  multiline = true;
              elsif c == "g"
                  global = true;
              elsif c == "s"
                  dotall = true;
              elsif c == "A"
                  anchoared = true;
              elsif c == "D"
                  dollar_endonly = true;
              elsif c == "U"
                  ungreedy = true;
              elsif c == "x"
                  extended = true;
              end

              n = n + 1;
          end
      else
          str = str + c
      end

      n = n + 1;
    end

    puts("regex(\"#{str}\", #{ignore_case}, #{multiline}, #{global}, #{extended}, #{dotall}, #{anchored}, #{dollar_endonly}, #{ungreedy})");
}

/// list ///
struct list_item<T>
{
    T& item;
    struct list_item<T>*? prev;
    struct list_item<T>*? next;
}

struct list<T>
{
    list_item<T>*? head;
    list_item<T>*? tail;
    int len;
}

/// string ///
string operator+(string& left, string& right);
string operator*(string& left, int num);

impl string
{
    int compare(string& left, string& right);
    bool equals(string& left, string& right);
    int length(string& str);
    int get_hash_key(string& value);

    string reverse(string& str);
    string substring(string& str, int head, int tail);
    int index(string& str, char* search_str, int default_value);
    int rindex(string& str, char* search_str, int default_value);
    int index_regex(string& self, nregex reg, int default_value);
    int rindex_regex(string& self, nregex reg, int default_value);
}

/// vector ///
struct vector<T> 
{
    T&* items;
    int len;
    int size;
};

impl vector<T> 
{
    initialize() 
    {
        self.size = 16;
        self.len = 0;
        self.items = borrow new T[self.size];
    }
    vector<T>%* initialize_with_values(vector<T>%* self, int len, T& value) 
    {
        self.size = len;
        self.len = len;
        self.items = borrow new T[self.size];

        for(int i=0; i<len; i++) {
            if(isheap(T)) {
                self.items[i] = borrow clone value;
            }
            else {
                self.items[i] = value;
            }
        }

        return self;
    }

    vector<T>%* clone(vector<T>* self) {
        var result = new vector<T>.initialize();

        for(int i=0; i<self.len; i++) {
            T& it = self.items[i];
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap it);
            }
        }

        return result;
    }

    finalize()
    {
        if(isheap(T)) {
            for(int i=0; i<self.len; i++) 
            {
                delete self.items[i];

            }
        }
        delete self.items;
    }
    
    void push_back(vector<T>* self, T item) {
        managed item;

        if(self.len == self.size) {
            var new_size = self.size * 2;
            var items = self.items;

            self.items = borrow new T[new_size];

            int i;
            for(i=0; i<self.size; i++) {
                self.items[i] = items[i];
            }

            self.size = new_size;

            delete items;
        }

        self.items[self.len] = item;
        self.len++;
    }

    T pop_back(vector<T>* self, T& default_value)
    {
        if(self.len == 0) {
            return dummy_heap default_value;
        }

        T result = (T)self.items[self.len-1];

        self.len--;

        return result;
    }

    T& item(vector<T>* self, int index, T& default_value) 
    {
        if(index < 0) {
            index += self.len;
        }

        if(index >= 0 && index < self.len)
        {
            return self.items[index];
        }

        return default_value;
    }
    T clone_item(vector<T>* self, int index, T& default_value) 
    {
        if(index < 0) {
            index += self.len;
        }

        if(index >= 0 && index < self.len)
        {
            if(isheap(T)) {
                return clone self.items[index];
            }
            else {
                return dummy_heap self.items[index];
            }
        }

        return dummy_heap default_value;
    }
    void each(vector<T>* self, void (*block_)(T&,int,bool*)) {
        for(int i_=0; i_<self.len; i_++) {
            bool end_flag_ = false;
            block_(self.items[i_], i_, &end_flag_);
            if(end_flag_ == true) {
                break;
            }
        };
    }

    int find(vector<T>* self, T& item, int default_value) {
        int result = default_value;
        self.each {
            if(it.equals(item)) {
                result = it2;
                *it3 = true;
                return;
            }
        }

        return result;
    }

    template <R> vector<R>*% map(vector<T>* self, R (*block_)(T&))
    {
        var result_ = new vector<R>.initialize();

        for(int i_=0; i_<self.len; i_++) {
            result_.push_back(block_(self.items[i_]));
        }

        result_
    }

    bool equals(vector<T>* left, vector<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        for(int i=0; i<left.len; i++) {
            if(!(left.items[i].equals(right.items[i])))
            {
                return false;
            }
        }

        return true;
    }

    bool replace(vector<T>* self, int index, T value) 
    {
        if(index < 0) {
            index += self.len;
        }

        if(index >= 0 && index < self.len)
        {
            if(isheap(T)) {
                delete self.items[index];
            }

            self.items[index] = value;

            return true;
        }

        return false;
    }

    int length(vector<T>* self)
    {
        return self.len;
    }

    void reset(vector<T>* self) {
        self.len = 0;
    }
    
    list<T>*% to_list(vector<T>* self) {
        var result = new vector<T>.initialize();
        
        self.each {
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap it);
            }
        }
        
        return result;
    }
}

ruby_macro vec {
    params = [];
    param = "";
    dquort = false;
    squort = false;
    param_line = ENV['PARAMS'];
    n = 0;
    while(n < param_line.length()) do
        c = param_line[n];
        n = n + 1;

        if (dquort || squort) && c == "\\"
            param.concat(c);
            
            c = param_line[n];
            n = n + 1;

            param.concat(c);
        elsif c == "\""
            param.concat(c);
            dquort = !dquort
        elsif c == "'"
            param.concat(c);
            squort = !squort
        elsif dquort || squort
            param.concat(c);
        elsif c == ","
            if param.length() > 0
                params.push(param); param = ""
            end
        else
            param.concat(c);
        end
    end

    if param.length() != 0
        params.push(param);
    end

    if params.length() > 0
        puts("{");
        puts("var result = new vector<typeof(#{params[0]})>.initialize();");

        params.each do |param|
            puts("result.push_back(#{param});");
        end

        puts("result");
        puts("}");
    end
}

/// list ///
impl list <T>
{
    initialize() {
        self.head = null;
        self.tail = null;
        self.len = 0;
    }

    finalize() {
        list_item<T>* it = self.head;
        while(it != null) {
            if(isheap(T)) {
                delete it.item;
            }
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }
    }

    list<T>*% clone(list<T>* self) {
        var result = new list<T>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            if(isheap(T)) {
                result.push_back(clone it.item);
            }
            else {
                result.push_back(dummy_heap it.item);
            }

            it = it.next;
        }

        return result;
    }

    void reset(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            if(isheap(T)) {
                delete it.item;
            }
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;
    }

    void push_back(list<T>* self, T item) 
    {
        managed item;

        if(self.len == 0) {
            list_item<T>* litem = borrow new list_item<T>;
            litem.prev = null;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;
            
            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
    }

    T pop_back(list<T>* self, T& default_value)
    {
        if(self.len == 0) {
            return dummy_heap default_value;
        }
        else if(self.len == 1) {
            T result = (T)self.head.item;

            delete self.head;

            self.head = null;
            self.tail = null;

            self.len--;

            if(isheap(T)) {
                return clone result;
            }
            else {
                return dummy_heap result;
            }
        }
        else if(self.len == 2) {
            T result = (T)self.tail.item;

            delete self.tail;

            self.tail = self.head;
            self.head.next = null;
            self.head.prev = null;

            self.len--;

            if(isheap(T)) {
                return clone result;
            }
            else {
                return dummy_heap result;
            }
        }
        else {
            T result = (T)self.tail.item;

            list_item<T>* it = self.tail;

            self.tail = self.tail.prev;
            self.tail.next = null;

            delete it;

            self.len--;

            if(isheap(T)) {
                return clone result;
            }
            else {
                return dummy_heap result;
            }
        }
    }
    
    T pop_front(list<T>* self, T& default_value)
    {
        if(self.len == 0) {
            return dummy_heap default_value;
        }
        else if(self.len == 1) {
            T result = (T)self.head.item;

            delete self.head;

            self.head = null;
            self.tail = null;

            self.len = 0;

            if(isheap(T)) {
                return clone result;
            }
            else {
                return dummy_heap result;
            }
        }
        else if(self.len == 2) {
            T result = (T)self.head.item;

            var head_before = self.head;

            self.head = self.head.next;
            self.head.prev = null;
            self.head.next = null;
            
            delete head_before;

            self.len--;

            if(isheap(T)) {
                return clone result;
            }
            else {
                return dummy_heap result;
            }
        }
        else {
            T result = (T)self.head.item;

            var head_before = self.head;

            self.head = self.head.next;
            self.head.prev = null;
            
            delete head_before;

            self.len--;

            if(isheap(T)) {
                return clone result;
            }
            else {
                return dummy_heap result;
            }
        }
    }

    void insert(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len) 
        {
            self.push_back(item);
            return;
        }

        managed item;

        if(position == 0) {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = null;
            litem.next = self.head;
            litem.item = item;
            
            self.head.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            var litem = borrow new list_item<T>;

            litem.prev = self.head;
            litem.next = self.tail;
            litem.item = item;
            
            self.tail.prev = litem;
            self.head.next = litem;

            self.len++;
        }
        else {
            list_item<T>?* it = self.head;
            var i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>* litem = borrow new list_item<T>;

                    litem.prev = it.prev;
                    litem.next = it;
                    litem.item = item;

                    it.prev.next = litem;
                    it.prev = litem;

                    self.len++;
                }

                it = it.next;
                i++;
            }
        }
    }

    void delete(list<T>* self, int position)
    {
        if(position < 0) {
            position += self.len + 1;
        }

        if(position >= 0 && position < self.len)
        {
            if(self.len == 1) {
                if(isheap(T)) {
                    delete self.head.item;
                }
                delete self.head;

                self.head = null;
                self.tail = null;

                self.len = 0;
            }
            else if(self.len == 2) {
                if(position == 0) {
                    list_item<T>?* it = self.head;

                    self.head = it.next;

                    self.head.prev = null;
                    self.head.next = null;

                    self.tail = self.head;

                    if(isheap(T)) {
                        delete it.item;
                    }
                    delete it;

                    self.len--;
                }
                else {
                    list_item<T>?* it = self.tail;

                    self.head.next = null;
                    self.head.prev = null;

                    self.tail = self.head;

                    if(isheap(T)) {
                        delete it.item;
                    }
                    delete it;

                    self.len--;
                }
            }
            else {
                list_item<T>?* it = self.head;
                var i = 0;
                while(it != null) {
                    if(position == i) {
                        if(i == 0) {
                            self.head = it.next;
                            self.head.prev = null;

                            if(isheap(T)) {
                                delete it.item;
                            }
                            delete it;

                            self.len--;
                        }
                        else if(i == self.len-1)
                        {
                           self.tail = it.prev;
                           self.tail.next = null;
                           if(isheap(T)) 
                           {
                                delete it.item;
                            }
                            delete it;

                            self.len--;
                        }
                        else {
                            it.prev.next = it.next;
                            it.next.prev = it.prev;
                            if(isheap(T)) {
                                delete it.item;
                            }
                            delete it;

                            self.len--;
                        }
                        break;
                    }

                    it = it.next;
                    i++;
                }
            }
        }
    }

    void delete_range(list<T>* self, int head, int tail)
    {
        if(head < 0) {
            head += self.len;
        }
        if(tail < 0) {
            tail += self.len + 1;
        }

        if(head > tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail > self.len) {
            tail = self.len;
        }

        if(head == tail) {
            return;
        }

        if(head == 0 && tail == self.len) 
        {
            self.reset();
        }
        else if(head == 0) {
            list_item<T>?* it = self.head;
            var i = 0;
            while(it != null) {
                if(i < tail) {
                    if(isheap(T)) {
                        delete it.item;
                    }
                    list_item<T>?* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head.prev = null;
                    break;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>?* it = self.head;
            var i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it.prev;
                    self.tail.next = null;
                }

                if(i >= head) {
                    if(isheap(T)) {
                        delete it.item;
                    }
                    list_item<T>?* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>?* it = self.head;

            list_item<T>?* head_prev_it = null;
            list_item<T>?* tail_it = null;


            var i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail) 
                {
                    if(isheap(T)) {
                        delete it.item;
                    }
                    list_item<T>?* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it.next = tail_it;
            }
            if(tail_it != null) {
                tail_it.prev = head_prev_it;
            }
        }
    }

    void replace(list<T>* self, int position, T item)
    {
        managed item;

        if(position < 0) {
            position += self.len;
        }

        list_item<T>?* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                if(isheap(T)) {
                    delete it.item;
                }

                it.item = item;
                break;
            }
            it = it.next;
            i++;
        };
    }
    
    T& item(list<T>* self, int position, T& default_value) 
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>?* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        return default_value;
    }

    T clone_item(list<T>* self, int position, T& default_value) 
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>?* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                if(isheap(T)) {
                    return clone it.item;
                }
                else {
                    return dummy_heap it.item;
                }
            }
            it = it.next;
            i++;
        };

        return dummy_heap default_value;
    }
    
    void each(list<T>* self, void (*block_)(T&,int,bool*)) {
        list_item<T>?* it_ = self.head;
        var i_ = 0;
        while(it_ != null) {
            bool end_flag_ = false;
            block_(it_.item, i_, &end_flag_);

            if(end_flag_ == true) {
                break;
            }
            it_ = it_.next;
            i_++;
        }
    }

    list<T>*% sublist(list<T>* self, int begin, int tail) {
        list<T>%* result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }


        list_item<T>?* it = self.head;
        var i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                if(isheap(T)) {
                    result.push_back(clone it.item);
                }
                else {
                    result.push_back(dummy_heap it.item);
                }
            }
            it = it.next;
            i++;
        };

        return result;
    }

    list<T>*% reverse(list<T>* self) {
        list<T>%* result = new list<T>.initialize();

        list_item<T>?* it = self.tail;
        while(it != null) {
            if(isheap(T)) {
                result.push_back(clone it.item);
            }
            else {
                result.push_back(dummy_heap it.item);
            }
            it = it.prev;
        };

        return result;
    }
    string join(list<string>* self, char* separator) {
        buffer%* buf = new buffer.initialize();

        list_item<T>?* it = self.head;
        var i = 0;
        while(it != null) {
            if(i == self.length() - 1) {
                buf.append_str(it.item);
            }
            else {
                buf.append_str(it.item);
                buf.append_str(separator);
            }

            it = it.next;
            i++;
        }

        return string(buf.buf);
    }
    list<T>*% merge_list(list<T>* left, list<T>* right) {
        var result = new list<T>.initialize();

        list_item<T>*? it = left.head;
        list_item<T>*? it2= right.head;

        while(true) {
            if(it && it2) {
                if(it.item == null) {
                    it = it.next;
                }
                else if(it2.item == null) {
                    it2 = it2.next;
                }
                else if(it.item.compare(it2.item) <= 0) 
                {
                    if(isheap(T)) {
                        result.push_back(clone it.item);
                    }
                    else {
                        result.push_back(dummy_heap it.item);
                    }

                    it = it.next;
                }
                else {
                    if(isheap(T)) {
                        result.push_back(clone it2.item);
                    }
                    else {
                        result.push_back(dummy_heap it2.item);
                    }


                    it2 = it2.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        if(isheap(T)) {
                            result.push_back(clone it2.item);
                        }
                        else {
                            result.push_back(dummy_heap it2.item);
                        }

                        it2 = it2.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        if(isheap(T)) {
                            result.push_back(clone it.item);
                        }
                        else {
                            result.push_back(dummy_heap it.item);
                        }

                        it = it.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort(list<T>* self) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head.next == null) {
            return clone self;
        }

        var list1 = new list<T>.initialize();
        var list2 = new list<T>.initialize();

        list_item<T>* it = self.head;

        while(true) {
            if(isheap(T)) {
                list1.push_back(clone it.item);
            }
            else {
                list1.push_back(dummy_heap it.item);
            }

            if(isheap(T)) {
                list2.push_back(clone it.next.item);
            }
            else {
                list2.push_back(dummy_heap it.next.item);
            }

            if(it.next.next == null) {
                break;
            }

            it = it.next.next;

            if(it.next == null) {
                if(isheap(T)) {
                    list1.push_back(clone it.item);
                }
                else {
                    list1.push_back(dummy_heap it.item);
                }
                break;
            }
        }

        return list1.merge_sort().merge_list( list2.merge_sort());
    }
    list<T>*% sort(list<T>* self) {
        return self.merge_sort();
    }
    list<T>*% merge_list2(list<T>* left, list<T>* right, int (*compare)(T&,T&)) {
        var result = new list<T>.initialize();

        list_item<T>*? it = left.head;
        list_item<T>*? it2= right.head;

        while(true) {
            if(it && it2) {
                if(it.item == null) {
                    it = it.next;
                }
                else if(it2.item == null) {
                    it2 = it2.next;
                }
                else if(compare(it.item, it2.item) <= 0) 
                {
                    if(isheap(T)) {
                        result.push_back(clone it.item);
                    }
                    else {
                        result.push_back(dummy_heap it.item);
                    }

                    it = it.next;
                }
                else {
                    if(isheap(T)) {
                        result.push_back(clone it2.item);
                    }
                    else {
                        result.push_back(dummy_heap it2.item);
                    }


                    it2 = it2.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        if(isheap(T)) {
                            result.push_back(clone it2.item);
                        }
                        else {
                            result.push_back(dummy_heap it2.item);
                        }

                        it2 = it2.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        if(isheap(T)) {
                            result.push_back(clone it.item);
                        }
                        else {
                            result.push_back(dummy_heap it.item);
                        }

                        it = it.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort2(list<T>* self, int (*compare)(T&,T&)) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head.next == null) {
            return clone self;
        }

        var list1 = new list<T>.initialize();
        var list2 = new list<T>.initialize();

        list_item<T>* it = self.head;

        while(true) {
            if(isheap(T)) {
                list1.push_back(clone it.item);
            }
            else {
                list1.push_back(dummy_heap it.item);
            }

            if(isheap(T)) {
                list2.push_back(clone it.next.item);
            }
            else {
                list2.push_back(dummy_heap it.next.item);
            }

            if(it.next.next == null) {
                break;
            }

            it = it.next.next;

            if(it.next == null) {
                if(isheap(T)) {
                    list1.push_back(clone it.item);
                }
                else {
                    list1.push_back(dummy_heap it.item);
                }
                break;
            }
        }

        return list1.merge_sort2(compare).merge_list2( list2.merge_sort2(compare), compare);
    }
    list<T>*% sort_block(list<T>* self, int (*compare)(T&,T&)) {
        return self.merge_sort2(compare);
    }

    list<T>*% uniq(list<T>* self) {
        list<T>*% result = new list<T>.initialize();

        if(self.length() > 0) {
            T& item_before = self.item(0, null);

            if(isheap(T)) {
                result.push_back(clone item_before);
            }
            else {
                result.push_back(dummy_heap item_before);
            }

            self.sublist(1,-1).each {
                if(!it.equals(item_before)) {
                    if(isheap(T)) {
                        result.push_back(clone it);
                    }
                    else {
                        result.push_back(dummy_heap it);
                    }
                }

                item_before = it;
            }
        }

        return result;
    }

    int find(list<T>* self, T& item, int default_value) {
        int result = default_value;
        self.each {
            if(it.equals(item)) {
                result = it2;
                *it3 = true;
                return;
            }
        }

        return result;
    }

    bool equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>?* it = left.head;
        list_item<T>?* it2 = right.head;

        while(it != null) {
            if(!it.item.equals(it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }

    int length(list<T>* self)
    {
        return self.len;
    }
    template <R> list<R>*% map(list<T>* self, R (*block_)(T&))
    {
        var result_ = new list<R>.initialize();

        list_item<T>?* it_ = self.head;
        while(it_ != null) {
            result_.push_back(block_(it_.item));

            it_ = it_.next;
        }

        result_
    }
    list<T>*% filter(list<T>* self, bool (*block_)(T&))
    {
        var result_ = new list<T>.initialize();

        list_item<T>?* it_ = self.head;
        while(it_ != null) {
            if(block_(it_.item)) {
                if(isheap(T)) {
                    result_.push_back(clone it_.item);
                }
                else {
                    result_.push_back(dummy_heap it_.item);
                }
            }

            it_ = it_.next;
        }

        result_
    } 
    
    vector<T> to_vector(list<T>* self) {
        var result = new list<T>.initialize();
        
        self.each {
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap it);
            }
        }
        
        return result;
    }
}

ruby_macro list {
    params = [];
    param = "";
    dquort = false;
    squort = false;
    param_line = ENV['PARAMS'];
    n = 0;
    while(n < param_line.length()) do
        c = param_line[n];
        n = n + 1;

        if (dquort || squort) && c == "\\"
            param.concat(c);
            
            c = param_line[n];
            n = n + 1;

            param.concat(c);
        elsif c == "\""
            param.concat(c);
            dquort = !dquort
        elsif c == "'"
            param.concat(c);
            squort = !squort
        elsif dquort || squort
            param.concat(c);
        elsif c == ","
            if param.length() > 0
                params.push(param); param = ""
            end
        else
            param.concat(c);
        end
    end

    if param.length() != 0
        params.push(param);
    end

    if params.length() > 0
        puts("{");
        puts("var result = new list<typeof(#{params[0]})>.initialize();");

        params.each do |param|
            puts("result.push_back(#{param});");
        end

        puts("result");
        puts("}");
    end
}


struct tuple1<T>
{
    T v1;
}

impl tuple1 <T>
{
    initialize() {
    }

    bool equals(tuple1<T>* left, tuple1<T>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }

        return true;
    }
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
}

impl tuple2 <T, T2>
{
    initialize() {
    }

    bool equals(tuple2<T, T2>* left, tuple2<T, T2>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }
        if(!left.v2.equals(right.v2)) {
            return false;
        }

        return true;
    }
}

struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
}

impl tuple3 <T, T2, T3>
{
    initialize() {
    }

    bool equals(tuple3<T, T2, T3>* left, tuple3<T, T2, T3>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }
        if(!left.v2.equals(right.v2)) {
            return false;
        }
        if(!left.v3.equals(right.v3)) {
            return false;
        }

        return true;
    }
}

struct tuple4<T, T2, T3, T4>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v3;
}

impl tuple4 <T, T2, T3, T4>
{
    initialize() {
    }

    bool equals(tuple4<T, T2, T3, T4>* left, tuple4<T, T2, T3, T4>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }
        if(!left.v2.equals(right.v2)) {
            return false;
        }
        if(!left.v3.equals(right.v3)) {
            return false;
        }
        if(!left.v4.equals(right.v4)) {
            return false;
        }

        return true;
    }
}

ruby_macro tuple {
    params = [];
    param = "";
    dquort = false;
    squort = false;
    param_line = ENV['PARAMS'];
    n = 0;
    while(n < param_line.length()) do
        c = param_line[n];
        n = n + 1;

        if (dquort || squort) && c == "\\"
            param.concat(c);
            
            c = param_line[n];
            n = n + 1;

            param.concat(c);
        elsif c == "\""
            param.concat(c);
            dquort = !dquort
        elsif c == "'"
            param.concat(c);
            squort = !squort
        elsif dquort || squort
            param.concat(c);
        elsif c == ","
            if param.length() > 0
                params.push(param); param = ""
            end
        else
            param.concat(c);
        end
    end

    if param.length() != 0
        params.push(param);
    end

    if params.length() == 1
    then
        puts("{");
        puts("var result = new tuple1<typeof(#{params[0]})>;");

        puts("result.v1 = #{params[0]};");

        puts("result");
        puts("}");
    end

    if params.length() == 2 
    then
        puts("{");
        puts("var result = new tuple2<typeof(#{params[0]}),typeof(#{params[1]})>;");

        puts("result.v1 = #{params[0]};");
        puts("result.v2 = #{params[1]};");

        puts("result");
        puts("}");
    end

    if params.length() == 3
    then
        puts("{");
        puts("var result = new tuple3<typeof(#{params[0]}),typeof(#{params[1]}),typeof(#{params[2]})>;");

        puts("result.v1 = #{params[0]};");
        puts("result.v2 = #{params[1]};");
        puts("result.v3 = #{params[2]};");

        puts("result");
        puts("}");
    end

    if params.length() == 4
    then
        puts("{");
        puts("var result = new tuple4<typeof(#{params[0]}),typeof(#{params[1]}),typeof(#{params[2]}),typeof(#{params[3]})>;");

        puts("result.v1 = #{params[0]};");
        puts("result.v2 = #{params[1]};");
        puts("result.v3 = #{params[2]};");
        puts("result.v4 = #{params[3]};");

        puts("result");
        puts("}");
    end
}

struct map<T, T2>
{
    T&* keys;
    bool* item_existance;
    T2&* items;
    int size;
    int len;
}

#define MAP_TABLE_DEFAULT_SIZE 128

impl map <T, T2>
{
    initialize() {
        self.keys = borrow new T[MAP_TABLE_DEFAULT_SIZE];
        self.items = borrow new T2[MAP_TABLE_DEFAULT_SIZE];
        self.item_existance = borrow new bool[MAP_TABLE_DEFAULT_SIZE];

        for(int i=0; i<MAP_TABLE_DEFAULT_SIZE; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = MAP_TABLE_DEFAULT_SIZE;
        self.len = 0;
    }

    finalize() {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    delete self.items[i];
                }
            }
        }
        delete self.items;

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    delete self.keys[i];
                }
            }
        }
        delete self.keys;

        delete self.item_existance;
    }

    map<T, T2>*% clone(map<T, T2>* self)
    {
        var result = new map<T,T2>.initialize();

        self.each {
            if(isheap(T)) {
                if(isheap(T2)) {
                    result.insert(clone it, clone it2);
                }
                else {
                    result.insert(clone it, dummy_heap it2);
                }
            }
            else {
                if(isheap(T2)) {
                    result.insert(dummy_heap it, clone it2);
                }
                else {
                    result.insert(dummy_heap it, dummy_heap it2);
                }
            }
        }

        return result;
    }

    void each(map<T, T2>* self, void (*block_)(T&,T2&,bool*)) 
    {
        for(int i_=0; i_<self.size; i_++) {
            if(self.item_existance[i_]) {
                bool end_flag_ = false;
                block_(self.keys[i_], self.items[i_], &end_flag_);
                if(end_flag_ == true) {
                    break;
                }
            }
        }
    }

    void rehash(map<T,T2>* self) {
        int size = self.size * 3;
        T&* keys = borrow new T[size];
        T2&* items = borrow new T2[size];
        bool* item_existance = borrow new bool[size];

        int len = 0;

        self.each {
            int hash = ((T)it).get_hash_key() % size;
            int n = hash;

            while(true) {
                if(item_existance[n])
                {
                    n++;

                    if(n >= size) {
                        n = 0;
                    }
                    else if(n == hash) {
                        fprintf(stderr, "unexpected error in map.rehash(1)\n");
                        exit(2);
                    }
                }
                else {
                    item_existance[n] = true;
                    keys[n] = it;
                    items[n] = it2;

                    len++;
                    break;
                }
            }
        }

        delete self.items;
        delete self.item_existance;
        delete self.keys;

        self.keys = keys;
        self.items = items;
        self.item_existance = item_existance;

        self.size = size;
        self.len = len;
    }

    bool find(map<T, T2>* self, T& key) {
        int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key))
                {
                    return true;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return false;
    }

    T2& at(map<T, T2>* self, T& key, T2& default_value) 
    {
        int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key))
                {
                    return self.items[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }

    T2 at_clone(map<T, T2>* self, T& key, T2& default_value) 
    {
        int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key))
                {
                    if(isheap(T)) {
                        return clone self.items[it];
                    }
                    else {
                        return dummy_heap self.items[it];
                    }
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return dummy_heap default_value;
                }
            }
            else {
                return dummy_heap default_value;
            }
        }

        return dummy_heap default_value;
    }

    void insert(map<T,T2>* self, T key, T2 item) 
    {
        managed key;
        managed item;

        if(self.len*2 >= self.size) {
            self.rehash();
        }

        int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key)) 
                {
                    if(isheap(T)) {
                        delete dummy_heap self.keys[it];
                    }
                    if(isheap(T2)) {
                        delete dummy_heap self.items[it];
                    }
                    self.keys[it] = key;
                    self.items[it] = item;

                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    fprintf(stderr, "unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                self.keys[it] = key;
                self.items[it] = item;

                self.len++;

                break;
            }
        }
    }

    bool equals(map<T, T2>* left, map<T, T2>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        bool result = true;
        left.each {
            if(right.find(it)) {
                T2& default_value;
                T2 item = right.at(it, default_value);
                if(!it2.equals(item)) {
                    result = false;
                }
            }
            else {
                result = false;
            }
        }

        return result;
    }

    int length(map<T, T2>* self) {
        return self.len;
    }
}

ruby_macro map {
    params = [];
    param = "";
    dquort = false;
    squort = false;
    param_line = ENV['PARAMS'];
    n = 0;
    while(n < param_line.length()) do
        c = param_line[n];
        n = n + 1;

        if (dquort || squort) && c == "\\"
            param.concat(c);
            
            c = param_line[n];
            n = n + 1;

            param.concat(c);
        elsif c == "\""
            param.concat(c);
            dquort = !dquort
        elsif c == "'"
            param.concat(c);
            squort = !squort
        elsif dquort || squort
            param.concat(c);
        elsif c == ","
            if param.length() > 0
                params.push(param); param = ""
            end
        elsif c == ":"
            if param.length() > 0
                params.push(param); param = ""
            end
        else
            param.concat(c);
        end
    end

    if param.length() != 0
        params.push(param);
    end

    if params.length() >= 2
    then
        puts("{");
        puts("var result = new map<typeof(#{params[0]}), typeof(#{params[1]})>.initialize();");

        key = nil;
        for it in params do
            if key == nil
            then
                key = it;
            else
                puts("result.insert(#{key}, #{it});");
                key = nil;
            end
        end

        puts("result");
        puts("}");
    end
}

/// others ///
void xassert(char* msg, bool exp);

impl string
{
    string& delete(string& str, int position);
    string& delete_range(string& str, int head, int tail);
    string printable(string& str);
    string sub(string& self, nregex reg, char* replace, list<string>?* group_strings);
    bool match(string& self, nregex reg, list<string>?* group_strings);
    list<string>*% scan(string& self, nregex reg);
    list<string>*% split(string& self, nregex reg);
    list<string>*% split_char(string& self, char c);
    wstring to_wstring(string& self);
    void replace(string& self, int index, char c);
    char item(string& self, int index, char default_value);
    nregex to_regex(string& self);
    buffer*% to_buffer(string& self);
}

/// wstring ///

impl wchar_t
{
    wstring substring(wchar_t* str, int head, int tail);
}

impl wstring
{
    int compare(wstring& left, wstring& right);
    bool equals(wstring& left, wstring& right);
    int length(wstring& str);
    int get_hash_key(wstring& value);
    string to_string(wstring& self, char* default_value);

    wstring reverse(wstring& str);
    wstring substring(wstring& str, int head, int tail);
    int index(wstring& str, wchar_t* search_str, int default_value);
    int rindex(wstring& str, wchar_t* search_str, int default_value);
    wstring& delete(wstring& str, int position);
    wstring& delete_range(wstring& str, int head, int tail);
    wstring printable(wstring& str);
    void replace(wstring& self, int index, wchar_t c);
    wchar_t item(wstring& self, int index, wchar_t default_value);
}


#include "config.h"
#ifdef __DARWIN__
#include "neo-c.h.osx"
#else
#include "neo-c.h"
#endif


#include <limits.h>
#include <pcre.h>

/// string ///
string string(char* str)
{
    int len = strlen(str);

    string result = new char[len + 1];

    strcpy(result, str);

    result
}

string string_from_wchar_t(wchar_t* wstr, char* default_value)
{
    int len = MB_LEN_MAX*(wcslen(wstr)+1);

    string result = new char[len];

    if(wcstombs(result, wstr, len) < 0) 
    {
        xstrncpy(result, default_value, len);
    }

    result
}

string operator+(char* left, char* right)
{
    int len1 = strlen(left);
    int len2 = strlen(right);

    string result = new char[len1 + len2 + 1];

    strcpy(result, left);
    strcat(result, right);

    result
}

string operator*(char* left, int num)
{
    int len = strlen(left);

    string result = new char[len * num + 1];

    result[0] = '\0';

    for(int i=0; i<num; i++) {
        strcat(result, left);
    }

    result
}

string operator+(string& left, string& right)
{
    int len1 = strlen(left);
    int len2 = strlen(right);

    string result = new char[len1 + len2 + 1];

    strcpy(result, left);
    strcat(result, right);

    result
}

string operator*(string& left, int num)
{
    int len = strlen(left);

    string result = new char[len * num + 1];

    result[0] = '\0';

    for(int i=0; i<num; i++) {
        strcat(result, left);
    }

    result
}

impl string
{
    int compare(string& left, string& right) {
        return strcmp(left, right);
    }

    bool equals(string& left, string& right)
    {
        return strcmp(left, right) == 0;
    }

    int length(string& str)
    {
        return strlen(str);
    }

    int get_hash_key(string& value)
    {
        int result = 0;
        char* p = value;
        while(*p) {
            result += (*p);
            p++;
        }
        return result;
    }

    string reverse(string& str) {
        int len = strlen(str);
        string result = new char[len + 1];

        for(int i=0; i<len; i++) {
            result[i] = str[len-i-1];
        }

        result[len] = '\0';

        return result;
    }

    string substring(string& str, int head, int tail)
    {
        if(str == null) {
            return string("");
        }

        int len = strlen(str);

        if(head < 0) {
            head += len;
        }
        if(tail < 0) {
            tail += len + 1;
        }

        if(head > tail) {
            return str.substring(tail, head).reverse();
        }

        if(head < 0) {
            head = 0;
        }

        if(tail >= len) {
            tail = len;
        }

        if(head == tail) {
            return string("");
        }

        if(tail-head+1 < 1) {
            return string("");
        }

        string result = new char[tail-head+1];

        ncmemcpy(result, str + head, tail-head);
        result[tail-head] = '\0';

        return result;
    }
    int index(string& str, char* search_str, int default_value)
    {
        char* head = strstr(str, search_str);

        if(head == null) {
            return default_value;
        }

        return head - str;
    }
    int rindex(string& str, char* search_str, int default_value)
    {
        int len = strlen(search_str);
        char* p = str + strlen(str) - len;

        while(p >= str) {
            if(strncmp(p, search_str, len) == 0) {
                return p - str;
            }

            p--;
        }

        return default_value;
    }
    int index_regex(string& self, nregex reg, int default_value)
    {
        int ovec_max = 16;
        int start[ovec_max];
        int end[ovec_max];
        int ovec_value[ovec_max * 3];

        int result = default_value;
        
        int offset = 0;

        const char* err;
        int erro_ofs;

        int options = reg.options;
        char* str = reg.str;

        pcre* re = pcre_compile(str, options, &err, &erro_ofs, null);

        while(true) {
            int options = PCRE_NEWLINE_LF;
            int len = strlen(self);
            int regex_result = pcre_exec(re, 0, self, len, offset, options, ovec_value, ovec_max*3);

            for(int i=0; i<ovec_max; i++) {
                start[i] = ovec_value[i*2];
            }
            for(int i=0; i<ovec_max; i++) {
                end[i] = ovec_value[i*2+1];
            }

            /// match and no group strings ///
            if(regex_result == 1 || regex_result > 0) 
            {
                result = start[0];
                break;
            }
            /// no match ///
            {
                break;
            }
        }

        return result;
    }
    int rindex_regex(string& self, nregex reg, int default_value)
    {
        const char* err;
        int erro_ofs;

        int options = reg.options;
        char* str = reg.str;

        pcre* re = pcre_compile(str, options, &err, &erro_ofs, null);

        string self2 = self.reverse();
        
        int ovec_max = 16;
        int start[ovec_max];
        int end[ovec_max];
        int ovec_value[ovec_max * 3];

        int result = default_value;
        
        int offset = 0;

        while(true) {
            int options = PCRE_NEWLINE_LF;
            int len = strlen(self2);
            int regex_result = pcre_exec(re, 0, self2, len, offset, options, ovec_value, ovec_max*3);

            for(int i=0; i<ovec_max; i++) {
                start[i] = ovec_value[i*2];
            }
            for(int i=0; i<ovec_max; i++) {
                end[i] = ovec_value[i*2+1];
            }

            /// match and no group strings ///
            if(regex_result == 1 || regex_result > 0) 
            {
                result = strlen(self) -1 - start[0];
                break;
            }
            /// no match ///
            {
                break;
            }
        }

        return result;
    }
}

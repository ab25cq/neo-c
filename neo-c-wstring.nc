#include <neo-c.h>
#include <limits.h>
#include <pcre.h>

/// wstring ///
wstring wstring(char* str)
{
    int len = strlen(str);

wstring a = new wchar_t[1];
// I can't understand. this requires for s309x apline linux,... hmm is it my mistake?

    wstring wstr = new wchar_t[len+1];

    int ret = mbstowcs(wstr, str, len+1);
    wstr[ret] = '\0';

    if(ret < 0) {
        wstr[0] = 0;
    }

    return wstr;
}

wstring wstring_from_wchar_t(wchar_t* str)
{
    int len = wcslen(str);

    wstring wstr = new wchar_t[len + 1];

    wcscpy(wstr, str);

    return wstr;
}

wstring operator+(wchar_t* left, wchar_t* right)
{
    int len1 = wcslen(left);
    int len2 = wcslen(right);

    wstring result = new wchar_t[len1 + len2 + 1];

    wcscpy(result, left);
    wcscat(result, right);

    result
}

wstring operator*(wchar_t* left, int num)
{
    int len = wcslen(left);

    wstring result = new wchar_t[len * num + 1];

    result[0] = '\0';

    for(int i=0; i<num; i++) {
        wcscat(result, left);
    }

    result
}

wstring operator+(wstring& left, wstring& right)
{
    int len1 = wcslen(left);
    int len2 = wcslen(right);

    wstring result = new wchar_t[len1 + len2 + 1];

    wcscpy(result, left);
    wcscat(result, right);

    result
}

wstring operator*(wstring& left, int num)
{
    int len = wcslen(left);

    wstring result = new wchar_t[len * num + 1];

    result[0] = '\0';

    for(int i=0; i<num; i++) {
        wcscat(result, left);
    }

    result
}

impl wchar_t
{
    bool equals(wchar_t left, wchar_t right)
    {
        return left == right;
    }
    int get_hash_key(wchar_t value)
    {
        return value;
    }
    string to_string(wchar_t value) {
        return xsprintf("%lc", value);
    }
    int compare(wchar_t left, wchar_t right) {
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

impl wchar_t*
{
    bool equals(wchar_t* left, wchar_t* right)
    {
        return wcscmp(left, right) == 0;
    }
    int length(wchar_t* str)
    {
        return wcslen(str);
    }
    int get_hash_key(wchar_t* value)
    {
        int result = 0;
        wchar_t* p = value;
        while(*p) {
            result += (*p);
            p++;
        }
        return result;
    }
    string to_string(wchar_t* str, char* default_value) {
        return string_from_wchar_t(str, default_value);
    }
    wstring to_wstring(wchar_t* str) {
        return wstring_from_wchar_t(str);
    }
    int compare(wstring& left, wstring& right) {
        return wcscmp(left, right);
    }

    wstring substring(wchar_t* str, int head, int tail)
    {
        if(str == null) {
            return wstring("");
        }

        int len = wcslen(str);

        if(head < 0) {
            head += len;
        }
        if(tail < 0) {
            tail += len + 1;
        }

        if(head > tail) {
            return wstring("");
        }

        if(head < 0) {
            head = 0;
        }

        if(tail >= len) {
            tail = len;
        }

        if(head == tail) {
            return wstring("");
        }

        if(tail-head+1 < 1) {
            return wstring("");
        }

        wstring result = new wchar_t[tail-head+1];

        ncmemcpy(result, str + head, sizeof(wchar_t)*(tail-head));
        result[tail-head] = '\0';

        return result;
    }
}


impl wstring
{
    int compare(wstring& left, wstring& right) {
        return wcscmp(left, right);
    }
    bool equals(wstring& left, wstring& right)
    {
        return wcscmp(left, right) == 0;
    }

    int length(wstring& str)
    {
        return wcslen(str);
    }

    int get_hash_key(wstring& value)
    {
        int result = 0;
        wchar_t* p = value;
        while(*p) {
            result += (*p);
            p++;
        }
        return result;
    }

    string to_string(wstring& self, char* default_value) 
    {
        int len = MB_LEN_MAX*(wcslen(self)+1);

        string result = new char[len];

        if(wcstombs(result, self, len) < 0) 
        {
            result = string(default_value);
        }

        result
    }

    wstring reverse(wstring& str) {
        int len = wcslen(str);
        wstring result = new wchar_t[len + 1];

        for(int i=0; i<len; i++) {
            result[i] = str[len-i-1];
        }

        result[len] = '\0';

        return result;
    }

    wstring substring(wstring& str, int head, int tail)
    {
        if(str == null) {
            return wstring("");
        }

        int len = wcslen(str);

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
            return wstring("");
        }

        if(tail-head+1 < 1) {
            return wstring("");
        }

        wstring result = new wchar_t[tail-head+1];

        ncmemcpy(result, str + head, sizeof(wchar_t)*(tail-head));
        result[tail-head] = '\0';

        return result;
    }

    int index(wstring& str, wchar_t* search_str, int default_value)
    {
        wchar_t* head = wcsstr(str, search_str);

        if(head == null) {
            return default_value;
        }

        return ((head - str) / sizeof(wchar_t));
    }
    int rindex(wstring& str, wchar_t* search_str, int default_value)
    {
        int len = wcslen(search_str);

        wchar_t* p = str + wcslen(str) - len;

        while(p >= str) {
            if(wcsncmp(p, search_str, len) == 0) {
                return ((p - str) / sizeof(wchar_t));
            }

            p--;
        }

        return default_value;
    }
    wstring& delete(wstring& str, int position) {
        int len = wcslen(str);
        
        if(position < 0) {
            position += len;
        }

        if(position < 0) {
            position = 0;
        }

        if(position >= len) {
            position = len -1;

            if(position < 0) {
                return str;
            }
        }

        wstring sub_str = str.substring(position+1, -1);

        ncmemcpy(str + position, sub_str, sizeof(wchar_t)*(sub_str.length()+1));
        
        return str;
    }
    wstring& delete_range(wstring& str, int head, int tail) {
        int len = wcslen(str);

        if(len == 0) {
            return str;
        }
        
        if(head < 0) {
           head += len;
        }
        
        if(tail < 0) {
           tail += len + 1;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail < 0) {
            return str;
        }

        if(tail >= len) {
            tail = len;
        }
        
        wstring sub_str = str.substring(tail, -1);

        ncmemcpy(str + head, sub_str, sizeof(wchar_t)*(sub_str.length()+1));

        return str;
    }
    wstring printable(wstring& str)
    {
        int len = str.length();
        wstring result = new wchar_t[len*2+1];

        int n = 0;
        for(int i=0; i<len; i++) {
            wchar_t c = str[i];

            if((c >= 0 && c < ' ') 
                || c == 127)
            {
                result[n++] = '^';
                result[n++] = c + 'A' - 1;
            }
            else {
                result[n++] = c;
            }
        }

        result[n] = '\0'

        return result;
    }
    
    void replace(wstring& self, int index, wchar_t c) {
        int len = wcslen(self);

        if(wcscmp(self, wstring("")) == 0) {
            return;
        }
        
        if(index < 0) {
           index += len;
        }

        if(index >= len) {
            index = len-1;
        }

        if(index < 0) {
            index = 0;
        }
        
        self[index] = c;
    }
    
    wchar_t item(wstring& self, int index, wchar_t default_value)
    {
        int len = wcslen(self);

        if(wcscmp(self, wstring("")) == 0) {
            return default_value;
        }
        
        if(index < 0) {
           index += len;
        }

        if(index < 0 || index >= len) {
            return default_value;
        }
        
        
        return self[index];
    }
}

nregex regex(char* str, bool ignore_case, bool multiline, bool global, bool extended, bool dotall, bool anchored, bool dollar_endonly, bool ungreedy)
{
    var result = new regex_struct;

    const char* err;
    int erro_ofs;

    int options = PCRE_UTF8 | (ungreedy ? PCRE_UNGREEDY:0);
    //int options = PCRE_UTF8 | (ignore_case ? PCRE_CASELESS:0) | (multiline ? PCRE_MULTILINE : 0) | (extended ? PCRE_EXTENDED :0) | (dotall ? PCRE_DOTALL :0) | (dollar_endonly ? PCRE_DOLLAR_ENDONLY:0) | (ungreedy ? PCRE_UNGREEDY:0);

    //result.regex = pcre_compile(str, options, &err, &erro_ofs, NULL);

    result.str = string(str);
    result.ignore_case = ignore_case;
    result.multiline = multiline;
    result.global = global;
    result.extended = extended;
    result.dotall = dotall;
    result.anchored = anchored;
    result.dollar_endonly = dollar_endonly;
    result.ungreedy;
    result.options = options;

    return result;
}

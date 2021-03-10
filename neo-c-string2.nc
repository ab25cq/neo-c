#include <neo-c.h>
#include <pcre.h>

impl string
{
    string& delete(string& str, int position) {
        int len = strlen(str);
        
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
        
        string sub_str = str.substring(position+1, -1);

        ncmemcpy(str + position, sub_str, sub_str.length()+1);

        return str;
    }
    string& delete_range(string& str, int head, int tail) {
        int len = strlen(str);

        if(strcmp(str, "") == 0) {
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
        
        string sub_str = str.substring(tail, -1);

        ncmemcpy(str + head, sub_str, sub_str.length()+1);

        return str;
    }
    string printable(string& str)
    {
        int len = str.length();
        string result = new char[len*2+1];

        int n = 0;
        for(int i=0; i<len; i++) {
            char c = str[i];

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

    string sub(string& self, nregex reg, char* replace, list<string>?* group_strings)
    {
        int offset = 0;

        int ovec_max = 16;
        int start[ovec_max];
        int end[ovec_max];
        int ovec_value[ovec_max * 3];

        const char* err;
        int erro_ofs;

        int options = reg.options;
        char* str = reg.str;

        pcre* re = pcre_compile(str, options, &err, &erro_ofs, NULL);

        var result = new buffer.initialize();

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
            if(regex_result == 1 || (group_strings == null && regex_result > 0)) 
            {
                string str = self.substring(offset, start[0]);

                result.append_str(str);
                result.append_str(replace);

                if(offset == end[0]) {
                    offset++;
                }
                else {
                    offset = end[0];
                }

                if(!reg.global) {
                    string str = self.substring(offset, -1);
                    result.append_str(str);
                    break;
                }
            }
            /// group strings ///
            else if(regex_result > 1) {
                string str = self.substring(offset, start[0]);
                result.append_str(str);
                result.append_str(replace);

                if(offset == end[0]) {
                    offset++;
                }
                else {
                    offset = end[0];
                }

                if(!reg.global) {
                    group_strings.reset();
                }

                for(int i = 1; i<regex_result; i++) {
                    string match_string = self.substring(start[i], end[i]);
                    group_strings.push_back(match_string);
                }

                if(!reg.global) {
                    string str = self.substring(offset, -1);
                    result.append_str(str);
                    break;
                }
            }
            else
            /// no match ///
            {
                string str = self.substring(offset, -1);
                result.append_str(str);
                break;
            }
        }

        return result.to_string();
    }
    bool match(string& self, nregex reg, list<string>?* group_strings)
    {
        int offset = 0;

        int ovec_max = 16;
        int start[ovec_max];
        int end[ovec_max];
        int ovec_value[ovec_max * 3];

        const char* err;
        int erro_ofs;

        int options = reg.options;
        char* str = reg.str;

        pcre* re = pcre_compile(str, options, &err, &erro_ofs, NULL);

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
            if(regex_result == 1 || (group_strings == null && regex_result > 0)) 
            {
                return true;
            }
            /// group strings ///
            else if(regex_result > 1) {
                group_strings.reset();
                for(int i = 1; i<regex_result; i++) {
                    string match_string = self.substring(start[i], end[i]);
                    group_strings.push_back(match_string);
                }

                return true;
            }
            else
            /// no match ///
            {
                return false;
            }
        }

        return false;
    }


    list<string>*% scan(string& self, nregex reg)
    {
        var result = new list<string>.initialize();

        int offset = 0;

        int ovec_max = 16;
        int start[ovec_max];
        int end[ovec_max];
        int ovec_value[ovec_max * 3];

        const char* err;
        int erro_ofs;

        int options = reg.options;
        char* str = reg.str;

        pcre* re = pcre_compile(str, options, &err, &erro_ofs, NULL);

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
            if(regex_result == 1)
            {
                string str = self.substring(start[0], end[0]);
                result.push_back(str);

                if(offset == end[0]) {
                    offset++;
                }
                else {
                    offset = end[0];
                }
            }
            /// group strings ///
            else if(regex_result > 1) {
                string str = self.substring(start[0], end[0]);
                result.push_back(str);

                if(offset == end[0]) {
                    offset++;
                }
                else {
                    offset = end[0];
                }

                for(int i= 1; i<regex_result; i++) {
                    string match_string = self.substring(start[i], end[i]);
                    result.push_back(match_string);
                }
            }
            else
            /// no match ///
            {
                break;
            }
        }

        return result;
    }
    list<string>*% split(string& self, nregex reg)
    {
        const char* err;
        int erro_ofs;

        int options = reg.options;
        char* str = reg.str;

        pcre* re = pcre_compile(str, options, &err, &erro_ofs, NULL);

        var result = new list<string>.initialize();

        int offset = 0;

        int ovec_max = 16;
        int start[ovec_max];
        int end[ovec_max];
        int ovec_value[ovec_max * 3];

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
            if(regex_result == 1)
            {
                string str = self.substring(offset, start[0]);
                result.push_back(str);

                if(offset == end[0]) {
                    offset++;
                }
                else {
                    offset = end[0];
                }
            }
            /// group strings ///
            else if(regex_result > 1) {
                string str = self.substring(offset, start[0]);
                result.push_back(str);

                if(offset == end[0]) {
                    offset++;
                }
                else {
                    offset = end[0];
                }

                for(int i=1; i<regex_result; i++) {
                    string match_str = self.substring(start[i], end[i]);
                    result.push_back(match_str);
                }
            }
            else
            /// no match ///
            {
                break;
            }
        }

        if(offset < self.length()) {
            string str = self.substring(offset, -1);
            result.push_back(str);
        }

        return result;
    }

    list<string>*% split_char(string& self, char c) {
        var result = new list<string>.initialize();

        var str = new buffer.initialize();

        for(int i=0; i<self.length(); i++) {
            if(self[i] == c) {
                result.push_back(string(str.buf));
                str = new buffer.initialize();
            }
            else {
                str.append_char(self[i]);
            }
        }
        if(str.length() != 0) {
            result.push_back(string(str.buf));
        }

        return result;
    }

    wstring to_wstring(string& self) {
        return wstring(self);
    }
    
    void replace(string& self, int index, char c) {
        int len = strlen(self);

        if(strcmp(self, "") == 0) {
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
    
    char item(string& self, int index, char default_value)
    {
        int len = strlen(self);

        if(strcmp(self, "") == 0) {
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
    
    nregex to_regex(string& self) {
        return regex(self, false, false, false, false, false, false, false, false);
    }
    buffer*% to_buffer(string& self) {
        var result = new buffer.initialize();

        result.append_str(self);

        return result;
    }
}

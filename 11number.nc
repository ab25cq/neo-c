#include "common.h"

class sIntNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sIntNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sUIntNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sUIntNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sLongNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sLongNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"long");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sULongNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sULongNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = self.value; //  + "UL";
        come_value.type = new sType(s"long");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sFloatNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sFloatNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"float");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sComplexNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sComplexNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"double");
        come_value.type->mComplex = true;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sDoubleNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sDoubleNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"double");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sDigitNode extends sNodeBase
{
    new(char* value, sInfo* info)
    {
        self.super();
        
        string self.value = string(value);
    }
    
    string kind()
    {
        return string("sDigitNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

sNode*% create_int_node(string value, sInfo* info)
{
    return new sIntNode(value, info) implements sNode;
}

static bool is_imaginary_suffix(char c)
{
    return c == 'i' || c == 'I' || c == 'j' || c == 'J';
}

sNode*% get_suffix(char* buf, char* p2, sInfo* info=info)
{
    if(*info->p == 'u' || *info->p == 'U')
    {
        *p2++ = *info->p;
        *p2 = 0;
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            *p2++ = *info->p;
            *p2 = 0;
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                *p2++ = *info->p;
                *p2 = 0;
                info->p++;
                skip_spaces_and_lf();
                
                return new sULongNode(buf.to_string(), info) implements sNode;
            }
            else {
                return new sULongNode(buf.to_string(), info) implements sNode;
            }
        }
        else {
            return new sUIntNode(buf.to_string(), info) implements sNode;
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        *p2++ = *info->p;
        *p2 = 0;
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            *p2++ = *info->p;
            *p2 = 0;
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == 'u' || *info->p == 'U') {
                *p2++ = *info->p;
                *p2 = 0;
                info->p++;
                skip_spaces_and_lf();
                
                return new sLongNode(buf.to_string(), info) implements sNode;
            }
            else {
                return new sLongNode(buf.to_string(), info) implements sNode;
            }
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            *p2++ = *info->p;
            *p2 = 0;
            info->p++;
            skip_spaces_and_lf();
            
            return new sULongNode(buf.to_string(), info) implements sNode;
        }
        else {
            return new sLongNode(buf.to_string(), info) implements sNode;
        }
    }
    else {
        return new sIntNode(buf.to_string(), info) implements sNode;
    }
}

sNode*% get_number(bool minus, sInfo* info)
{
    const int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    if(minus) {
        *p = '-';
        p++;
    }

    if(!xisdigit(*info->p)) {
        err_msg(info, "require digits after + or -");
        exit(2);
    }
    
    while(xisdigit(*info->p) || *info->p == '\'') {
        if(*info->p == '\'') {
            info->p++;
        }
        else {
            *p++ = *info->p;
            info->p++;
        }

        if(p - buf >= buf_size) {
            printf("%s %d: overflow node of number\n", info->sname, info->sline);
            exit(5);
        }
    };
    
    bool is_float = false;
    
    if(*info->p == '.' && (xisdigit(*(info->p+1)) || *(info->p+1) == 'F' || *(info->p+1) == 'L')) {
        is_float = true;
        *p++ = *info->p;
        
        if(p - buf >= buf_size) {
            printf("%s %d: overflow node of number", info->sname, info->sline);
            exit(11);
        }
        
        info->p++;
        
        while(xisdigit(*info->p) || *info->p == '\'') {
            if(*info->p == '\'') {
                info->p++;
            }
            else {
                *p++ = *info->p;
                info->p++;
            }

            if(p - buf >= buf_size) {
                err_msg(info, "overflow node of number");
                exit(2);
            }
        }
    }
    
    if(*info->p == 'e' || *info->p == 'E') {
        is_float = true;
        *p++ = *info->p;
        info->p++;

        if(p - buf >= buf_size) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
        
        if(*info->p == '+' || *info->p == '-') {
            *p++ = *info->p;
            info->p++;

            if(p - buf >= buf_size) {
                err_msg(info, "overflow node of number");
                exit(2);
            }
        }
        
        if(!xisdigit(*info->p)) {
            err_msg(info, "require digits after exponent");
            exit(2);
        }
        
        while(xisdigit(*info->p) || *info->p == '\'') {
            if(*info->p == '\'') {
                info->p++;
            }
            else {
                *p++ = *info->p;
                info->p++;
            }

            if(p - buf >= buf_size) {
                err_msg(info, "overflow node of number");
                exit(2);
            }
        };
    }
    
    *p = 0;
    skip_spaces_and_lf();
    
    if(is_float) {
        if(*info->p == 'f' || *info->p == 'F') {
            *p++ = *info->p;
            *p = 0;
            
            info->p++;
            if(is_imaginary_suffix(*info->p)) {
                *p++ = *info->p;
                *p = 0;
                
                info->p++;
                skip_spaces_and_lf();
                
                return new sComplexNode(string(buf), info) implements sNode;
            }
            else {
                skip_spaces_and_lf();
                
                return new sFloatNode(string(buf), info) implements sNode;
            }
        }
        else if(*info->p == 'l' || *info->p == 'L') {
            *p++ = *info->p;
            *p = 0;
            
            info->p++;
            if(is_imaginary_suffix(*info->p)) {
                *p++ = *info->p;
                *p = 0;
                
                info->p++;
                skip_spaces_and_lf();
                
                return new sComplexNode(string(buf), info) implements sNode;
            }
            else {
                skip_spaces_and_lf();
                
                return new sDoubleNode(string(buf), info) implements sNode;
            }
        }
        else if(is_imaginary_suffix(*info->p)) {
            *p++ = *info->p;
            *p = 0;
            
            info->p++;
            if(*info->p == 'f' || *info->p == 'F' || *info->p == 'l' || *info->p == 'L') {
                *p++ = *info->p;
                *p = 0;
                
                info->p++;
            }
            skip_spaces_and_lf();
            
            return new sComplexNode(string(buf), info) implements sNode;
        }
        else {
            return new sDoubleNode(string(buf), info) implements sNode;
        }
    }
    else {
        return get_suffix(buf, p);
    }
}

sNode*% get_hex_number(bool minus, sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;
    
    if(minus) {
        *p = '-';
        p++;
    }

    *p++ = '0';
    *p++ = 'x';

    bool has_digit = false;
    while((*info->p >= '0' && *info->p <= '9') || (*info->p >= 'a' && *info->p <= 'f') || (*info->p >= 'A' && *info->p <= 'F') || *info->p == '\'') 
    {
        if(*info->p == '\'') {
            info->p++;
        }
        else {
            *p++ = *info->p;
            info->p++;
            has_digit = true;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    };
    if(!has_digit) {
        err_msg(info, "require digits after 0x");
        exit(2);
    }
    *p = 0;
    skip_spaces_and_lf();
    
    return get_suffix(buf, p);
}

sNode*% get_digits(sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';
    *p++ = 'b';

    bool has_digit = false;
    while(*info->p == '0' || *info->p == '1' || *info->p == '\'') {
        if(*info->p == '\'') {
            info->p++;
        }
        else {
            *p++ = *info->p;
            info->p++;
            has_digit = true;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    }
    if(!has_digit) {
        err_msg(info, "require digits after 0b");
        exit(2);
    }
    if(xisdigit(*info->p)) {
        err_msg(info, "invalid binary digit");
        exit(2);
    }
    *p = 0;
    skip_spaces_and_lf();

    return get_suffix(buf, p);
}

sNode*% get_oct_number(bool minus, sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    if(minus) {
        *p++ = '-';
    }
    *p++ = '0';

    bool has_digit = false;
    while((*info->p >= '0' && *info->p <= '7') || *info->p == '\'') {
        if(*info->p == '\'') {
            info->p++;
        }
        else {
            *p = *info->p;
            p++;
            info->p++;
            has_digit = true;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    };
    if(!has_digit) {
        err_msg(info, "invalid octal digit");
        exit(2);
    }
    if(*info->p >= '8' && *info->p <= '9') {
        err_msg(info, "invalid octal digit");
        exit(2);
    }

    *p = 0;
    skip_spaces_and_lf();

    return get_suffix(buf, p);
}

sNode*% expression_node(sInfo* info=info) version 99
{
    skip_spaces_and_lf();
    
    
    if(*info->p == '0' && (*(info->p+1) == 'x' || *(info->p+1) == 'X')) {
        info->p += 2;

        sNode*% node = get_hex_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(*info->p == '0' && (*(info->p+1) == 'b' || *(info->p+1) == 'B')) {
        info->p += 2;

        sNode*% node = get_digits(info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(*info->p == '0' && xisdigit(*(info->p+1))) {
        info->p++;

        sNode*% node = get_oct_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(xisdigit(*info->p)) {
        sNode*% node = get_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(*info->p == '-' && (xisdigit(*(info->p+1)) || (*info->p == '0' && *(info->p+1) == 'x' || *(info->p+1) == 'X') || (*info->p == '0' && xisdigit(*(info->p+1))))) {
        info->p++;
        
        sNode*% node;
        if(*info->p == '0' && (*(info->p+1) == 'x' || *(info->p+1) == 'X')) {
            info->p += 2;
    
            node = get_hex_number(true@minus, info);
            
            node = post_position_operator(node, info);
            
            return node;
        }
        else if(*info->p == '0' && xisdigit(*(info->p+1))) {
            info->p++;
    
            node = get_oct_number(true@minus, info);
            
            node = post_position_operator(node, info);
            
            return node;
        }
        else {
            node = get_number(true@minus, info);
            
            node = post_position_operator(node, info);
        }
        
        return node;
    }
    else {
        sNode*% node = inherit(info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
}

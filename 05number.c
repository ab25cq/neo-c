#include "common.h"

class sIntNode extends sNodeBase
{
    int value;
    
    new(int value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sIntNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%d", self.value);
        come_value.type = new sType("int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        return true;
    }
    
    bool terminated()
    {
        return false;
    }
};

class sUIntNode extends sNodeBase
{
    unsigned int value;
    
    new(unsigned int value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sUIntNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%u", self.value);
        come_value.type = new sType("int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        return true;
    }
};

class sLongNode extends sNodeBase
{
    long value;
    
    new(unsigned long value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sLongNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%ld", self.value);
        come_value.type = new sType("long");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        return true;
    }
    
    bool terminated()
    {
        return false;
    }
};

class sULongNode extends sNodeBase
{
    unsigned long value;
    
    new(unsigned long value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sULongNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%lu", self.value);
        come_value.type = new sType("long");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        return true;
    }
    
    bool terminated()
    {
        return false;
    }
};

class sFloatNode extends sNodeBase
{
    float value;
    
    new(float value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sFloatNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%f", self.value);
        come_value.type = new sType("float");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        return true;
    }
    
    bool terminated()
    {
        return false;
    }
};

class sDoubleNode extends sNodeBase
{
    double value;
    
    new(double value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sDoubleNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%lf", self.value);
        come_value.type = new sType("double");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        return true;
    }
    
    bool terminated()
    {
        return false;
    }
};

sNode*% create_int_node(int value, sInfo* info)
{
    return new sIntNode(value, info) implements sNode;
}

sNode*% get_number(bool minus, sInfo* info)
{
    const int buf_size = 128;
    char buf[128+1];
    char* p2 = buf;

    if(minus) {
        *p2 = '-';
        p2++;
    }

    if(xisdigit(*info->p)) {
        while(xisdigit(*info->p) || *info->p == '_') {
            if(*info->p ==  '_') {
                info->p++;
            }
            else {
                *p2++ = *info->p;
                info->p++;
            }

            if(p2 - buf >= buf_size) {
                printf("%s %d: overflow node of number\n", info->sname, info->sline);
                exit(5);
            }
        };
        *p2 = 0;
        skip_spaces_and_lf();
        
        char c = *(info->p+1);

        if(*info->p == '.' && xisdigit(c)) {
            *p2++ = *info->p;
            
            if(p2 - buf >= buf_size) {
                printf("%s %d: overflow node of number", info->sname, info->sline);
                exit(11);
            }
            
            info->p++;
            skip_spaces_and_lf();
            
            while(xisdigit(*info->p) || *info->p == '_') {
                if(*info->p ==  '_') {
                    info->p++;
                }
                else {
                    *p2++ = *info->p;
                    info->p++;
                }
    
                if(p2 - buf >= buf_size) {
                    err_msg(info, "overflow node of number");
                    exit(2);
                }
            }
            
            if(*info->p == 'e') {
                *p2++ = *info->p;
                info->p++;
    
                if(p2 - buf >= buf_size) {
                    err_msg(info, "overflow node of number");
                    exit(2);
                }
                
                if(*info->p == '+') {
                    *p2++ = *info->p;
                    info->p++;
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                }
                else if(*info->p == '-') {
                    *p2++ = *info->p;
                    info->p++;
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                }
                else {
                    err_msg(info, "invalid float value");
                    exit(2);
                }
            
                while(xisdigit(*info->p) || *info->p == '_') {
                    if(*info->p ==  '_') {
                        info->p++;
                    }
                    else {
                        *p2++ = *info->p;
                        info->p++;
                    }
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                };
            }
            *p2 = 0;
            skip_spaces_and_lf();
            
            if(*info->p == 'f' || *info->p == 'F') {
                info->p++;
                skip_spaces_and_lf();
                
                return new sFloatNode(strtof(buf, NULL), info) implements sNode;
            }
            else if(*info->p == 'l' || *info->p == 'L') {
                info->p++;
                skip_spaces_and_lf();
                
                return new sDoubleNode(strtod(buf, NULL), info) implements sNode;
            }
            else {
                return new sDoubleNode(strtod(buf, NULL), info) implements sNode;
            }
        }
        else if(*info->p == 'u' || *info->p == 'U')
        {
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf();

                if(*info->p == 'L' || *info->p == 'l')
                {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    unsigned long lont int value2 = strtoull(buf, NULL, 0);

                    return new sULongNode(value2, info) implements sNode;
                }
                else {
                    unsigned long lont int value = strtoull(buf, NULL, 0);
                    return new sULongNode(value, info) implements sNode;
                }
            }
            else {
                unsigned int value = strtoul(buf, NULL, 0);
                return new sUIntNode(value, info) implements sNode;
            }
        }
        else if(*info->p == 'L' || *info->p == 'l') {
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf();
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                return new sLongNode(value, info) implements sNode;
            }
            else if(*info->p == 'U' || *info->p == 'u')
            {
                info->p++;
                skip_spaces_and_lf();
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                return new sULongNode(value, info) implements sNode;
            }
            else {
                unsigned long long int value = strtoull(buf, NULL, 0);
                return new sLongNode(value, info) implements sNode;
            }
        }
        else {
            long lont int value = strtoll(buf, NULL, 0);
            return new sIntNode(value, info) implements sNode;
        }
    }
    else {
        err_msg(info, "require digits after + or -");
        exit(2);
    }
    
    return (sNode*%)null;
}

sNode*% get_hex_number(bool minus, sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';
    *p++ = 'x';

    while((*info->p >= '0' && *info->p <= '9') || (*info->p >= 'a' && *info->p <= 'f') || (*info->p >= 'A' && *info->p <= 'F') || *info->p == '_') 
    {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p++ = *info->p;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    };
    *p = 0;
    skip_spaces_and_lf();

    if(*info->p == 'u' || *info->p == 'U')
    {
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf();
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                if(minus) {
                    return new sULongNode(-value, info) implements sNode;
                }
                else {
                    return new sULongNode(value, info) implements sNode;
                }
            }
            else {
                unsigned long long int value = strtoull(buf, NULL, 0);

                if(minus) {
                    return new sULongNode(-value, info) implements sNode;
                }
                else {
                    return new sULongNode(value, info) implements sNode;
                }
            }
        }
        else {
            unsigned long long int value = strtoull(buf, NULL, 0);

            if(minus) {
                return new sUIntNode(-value, info) implements sNode;
            }
            else {
                return new sUIntNode(value, info) implements sNode;
            }
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf();

            unsigned long long int value = strtoull(buf, NULL, 0);
            if(minus) {
                return new sLongNode(-value, info) implements sNode;
            }
            else {
                return new sLongNode(value, info) implements sNode;
            }
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            info->p++;
            skip_spaces_and_lf();

            unsigned long long int value = strtoull(buf, NULL, 0);
            if(minus) {
                return new sULongNode(-value, info) implements sNode;
            }
            else {
                return new sULongNode(value, info) implements sNode;
            }
        }
        else {
            unsigned long long int value = strtoull(buf, NULL, 0);
            if(minus) {
                return new sLongNode(-value, info) implements sNode;
            }
            else {
                return new sLongNode(value, info) implements sNode;
            }
        }
    }
    else {
        long long int value = strtoll(buf, NULL, 0);
        if(minus) {
            return new sIntNode(-value, info) implements sNode;
        }
        else {
            return new sIntNode(value, info) implements sNode;
        }
    }
    
    return (sNode*%)null;
}

sNode*% get_oct_number(sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';

    while((*info->p >= '0' && *info->p <= '7') || *info->p == '_') {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p = *info->p;
            p++;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    };

    *p = 0;
    skip_spaces_and_lf();

    if(*info->p == 'u' || *info->p == 'U')
    {
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf();
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                return new sULongNode(value, info) implements sNode;
            }
            else {
                unsigned long long int value = strtoull(buf, NULL, 0);
                return new sULongNode(value, info) implements sNode;
            }
        }
        else {
            unsigned int value = strtoul(buf, NULL, 0);
            return new sUIntNode(value, info) implements sNode;
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf();

            unsigned long long int value = strtoull(buf, NULL, 0);
            return new sLongNode(value, info) implements sNode;
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            info->p++;
            skip_spaces_and_lf();

            unsigned long long int value = strtoull(buf, NULL, 0);
            return new sULongNode(value, info) implements sNode;
        }
        else {
            unsigned long long int value = strtoull(buf, NULL, 0);
            return new sLongNode(value, info) implements sNode;
        }
    }
    else {
        unsigned long long int value = strtoull(buf, NULL, 0);
        return new sIntNode(value, info) implements sNode;
    }
    
    return (sNode*%)null;
}

record sNode*% expression_node(sInfo* info=info) version 99
{
    skip_spaces_and_lf();
    
    parse_sharp();
    
    if(*info->p == '0' && (*(info->p+1) == 'x' || *(info->p+1) == 'X')) {
        info->p += 2;

        sNode*% node = get_hex_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(*info->p == '0' && xisdigit(*(info->p+1))) {
        info->p++;

        sNode*% node = get_oct_number(info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(xisdigit(*info->p)) {
        sNode*% node = get_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(*info->p == '-' && xisdigit(*(info->p+1))) {
        info->p++;
        
        sNode*% node = get_number(true@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else {
        sNode*% node = inherit(info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
}


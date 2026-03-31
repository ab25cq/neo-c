#include <neo-c.h>
#include <neo-c-net.h>
#include <stdint.h>

class sType
{
    string class_name;
    int array_num;
    
    bool auto_increment;
    bool primary_key;
    bool not_null;
    bool has_default_value;
    string default_value;
    
    new(string class_name, int array_num, bool auto_increment=false, bool primary_key=false, bool not_null=false, bool has_default_value=false, string default_value=null) {
        self.class_name = class_name;
        self.array_num = array_num;
        self.auto_increment = auto_increment;
        self.primary_key = primary_key;
        self.not_null = not_null;
        self.has_default_value = has_default_value;
        self.default_value = default_value;
    }
    
    string to_string() {
        var buf = new buffer();
        
        buf.append_str(self.class_name);
        if(self.array_num > 0) {
            buf.append_str("(");
            buf.append_str(self.array_num.to_string());
            buf.append_str(")");
        }
        
        if(self.auto_increment) {
            buf.append_str(" AUTO INCREMENT");
        }
        
        if(self.primary_key) {
            buf.append_str(" PRIMARY KEY");
        }
        if(self.not_null) {
            buf.append_str(" NOT NULL");
        }
        if(self.has_default_value) {
            buf.append_str(" DEFAULT ");
            if(self.default_value == null) {
                buf.append_str("NULL");
            }
            else if(self.default_value === "") {
                buf.append_str("''");
            }
            else {
                buf.append_str(self.default_value);
            }
        }
        
        return buf.to_string();
    }
};

class Table
{
    string name;
    list<map<string,string>*%>*% rows;
    list<tuple2<string, sType*%>*%>*% types;
    
    new(string name, list<tuple2<string, sType*%>*%>*% types) {
        self.name = name;
        self.rows = new list<map<string,string>*%>();
        self.types = types;
    }
    
    string to_string() {
        var buf = new buffer();
        
        foreach(it, self.types) {
            var name, type = it;
            
            buf.append_str(name);
            buf.append_str(":");
            buf.append_str(type.to_string());
            buf.append_str("\n");
        }
        
        return buf.to_string();
    }
}

class Database
{
    string name
    map<string, Table*%>*% tables;
    
    new(string name) {
        self.name = name;
        self.tables = new map<string, Table*%>();
        
        //self.tables.insert(s"users", new Table(s"users", [(s"name", new sType(s"CHAR", array_num:100)), (s"password", new sType(s"CHAR", array_num:100))]));
    }
}

map<string, Database*%>*% gDatabases;

struct WhereNode;

struct sInfo
{
    char* p;
    int socket;
    string current_db_name;
};

WhereNode*% parse_where(sInfo* info=info);
bool where_select(map<string,string>* row, WhereNode* where_node);
char* resolve_row_value(map<string,string>* row, char* field_name);
string parse_value(sInfo* info=info);

void write_log_message(const char* message)
{
    FILE* f = fopen("database.log", "a");
    if(f != null) {
        fprintf(f, "%s", message);
        fclose(f);
    }
}

void write_response(int socket, const char* message)
{
    write(socket, message, strlen(message));
    write_log_message(message);
}

void write_response_string(int socket, string message)
{
    write(socket, message, strlen(message));
    write_log_message(message);
}

void skip_spaces(sInfo* info=info) 
{
    while(*info.p == ' ' || *info.p == '\t') {
        info->p++;
    }
}

string parse_word(sInfo* info=info)
{
    var buf = new buffer();
    
    while(*info.p) {
        if(*info.p == ' ' || *info.p == '\t' || *info.p == '\n' || *info.p == '\r') {
            break;
        }
        else if(!xisalnum(*info.p) && *info.p != '_' && *info.p != '-' && *info.p != '.') {
            break;
        }
        else {
            buf.append_char(*info.p);
            info->p++;
        }
    }
    skip_spaces();
    
    return buf.to_string();
}

bool expected_next_charactor(char c, sInfo* info=info)
{
    if(*info.p == c) {
        info->p++;
        skip_spaces();
    }
    else {
        printf("expected character(%c), but it is %c.\n", c, *info.p);
        return false;
    }
    
    return true;
}


string, sType*%, bool parse_type(sInfo* info=info)
{
    string field_name = parse_word();
    
    string class_name = parse_word();
    
    int array_num = 0;
    bool auto_increment = false;
    bool primary_key = false;
    bool not_null = false;
    bool has_default_value = false;
    string default_value = null;
    
    while(1) {
        if(*info.p == '(') {
            info->p++;
            skip_spaces();
            int n = 0;
            while(xisdigit(*info.p)) {
                n = n * 10 + *info.p - '0';
                info->p++;
                skip_spaces();
            }
            skip_spaces();
            
            array_num = n;
            
            expected_next_charactor(')')
        }
        else if(strncmp(info->p, "AUTO_INCREMENT", strlen("AUTO_INCREMENT")) == 0) {
            info->p += strlen("AUTO_INCREMENT");
            skip_spaces();
            
            auto_increment = true;
        }
        else if(strncmp(info->p, "PRIMARY KEY", strlen("PRIMARY KEY")) == 0) {
            info->p += strlen("PRIMARY KEY");
            skip_spaces();
            
            primary_key = true;
        }
        else if(strncmp(info->p, "NOT NULL", strlen("NOT NULL")) == 0) {
            info->p += strlen("NOT NULL");
            skip_spaces();
            
            not_null = true;
        }
        else if(strncmp(info->p, "DEFAULT", strlen("DEFAULT")) == 0) {
            info->p += strlen("DEFAULT");
            skip_spaces();

            has_default_value = true;
            default_value = parse_value();
        }
        else {
            break;
        }
    }
    
    sType*% type_ = new sType(class_name, array_num, auto_increment, primary_key, not_null, has_default_value, default_value);
    
    return t(field_name, type_, false);
}

bool eval_create_table(sInfo* info)
{
    info->p += strlen("CREATE TABLE");
    
    skip_spaces();
    
    bool if_not_exists = false;
    if(strncmp(info->p, "IF NOT EXISTS", strlen("IF NOT EXISTS")) == 0) {
        info->p += strlen("IF NOT EXISTS");
        skip_spaces();
        if_not_exists = true;
    }
    
    string table_name = parse_word();
    
    expected_next_charactor('(')
    
    list<tuple2<string, sType*%>*%>*% types = new list<tuple2<string, sType*%>*%>();
    while(1) {
        var field_name, type, err = parse_type();
        
        err
        
        types.add(t(field_name, type));
        
        if(*info.p == ')') {
            break;
        }
        
        expected_next_charactor(',')
    }
    
    expected_next_charactor(')')
    
    Database*% current_db = gDatabases[info.current_db_name];
    if(current_db == null) {
        return false;
    }
    
    if(current_db.tables[table_name] == null) {
        current_db.tables.insert(table_name, new Table(table_name, types));
        
        return true;
    }
    else if(if_not_exists) {
        return true;
    }
    else {
        return false;
    }
}

bool eval_create_database(sInfo* info)
{
    info->p += strlen("CREATE DATABASE");
    skip_spaces();

    bool if_not_exists = false;
    if(strncmp(info->p, "IF NOT EXISTS", strlen("IF NOT EXISTS")) == 0) {
        info->p += strlen("IF NOT EXISTS");
        skip_spaces();
        if_not_exists = true;
    }

    string db_name = parse_word();
    if(db_name === "") {
        return false;
    }

    if(gDatabases[db_name] == null) {
        gDatabases[db_name] = new Database(db_name);
        return true;
    }

    return if_not_exists;
}

string resolve_insert_value(string raw_value, sType* type)
{
    if(raw_value === "DEFAULT") {
        if(type->has_default_value) {
            return clone type->default_value;
        }
        else {
            return null;
        }
    }

    return clone raw_value;
}

string parse_value(sInfo* info=info)
{
    if(*info.p == '\'') {
        info->p++;
        skip_spaces();
        
        buffer*% buf = new buffer();
        
        while(1) {
            if(*info.p == '\\') {
                info->p++;
                if(*info.p != '\0') {
                    buf.append_char(*info.p);
                    info->p++;
                }
            }
            else if(*info.p == '\0') {
                break;
            }
            else if(*info.p == '\'') {
                info->p++;
                break;
            }
            else {
                buf.append_char(*info.p);
                info->p++;
            }
        }
        
        return buf.to_string();
    }
    else {
        string value = parse_word();
        if(value === "NULL") {
            return null;
        }

        return value;
    }
}

bool eval_insert_into(sInfo* info)
{
    info->p += strlen("INSERT INTO");
    
    skip_spaces();
    
    string table_name = parse_word();
    
    skip_spaces();

    Database*% current_db = gDatabases[info.current_db_name];
    if(current_db == null) {
        return false;
    }
    
    Table*% table = current_db.tables[table_name];
    
    if(table) {
        list<string>*% field_names = new list<string>();
        if(*info.p == '(') {
            expected_next_charactor('(')
            
            while(1) {
                string field = parse_word();
                
                field_names.add(field);
                
                if(*info.p == ')') {
                    break;
                }
                
                expected_next_charactor(',')
            }
            
            expected_next_charactor(')')
        }
        else {
            foreach(it, table.types) {
                var name, type = it;
                field_names.add(clone name);
            }
        }

        if(strncmp(info->p, "VALUES", strlen("VALUES")) != 0) {
            return false;
        }
        info->p += strlen("VALUES");
        
        skip_spaces();
        
        expected_next_charactor('(')
        
        list<string>*% values = new list<string>();
        while(1) {
            string value = parse_value();
            
            values.add(value);
            
            if(*info.p == ')') {
                break;
            }
            
            expected_next_charactor(',')
        }
        
        expected_next_charactor(')')

        if(field_names.length() != values.length()) {
            return false;
        }

        map<string, string>*% row = new map<string, string>();

        foreach(it, table.types) {
            var name, type = it;

            if(type->has_default_value) {
                row[name] = clone type->default_value;
            }
            else {
                row[name] = null;
            }
        }

        int n = 0;
        foreach(it, field_names) {
            string name = string(it);
            string raw_value = string(values[n]);
            bool found_field = false;

            foreach(it2, table.types) {
                var field_name, type = it2;
                if(field_name === name) {
                    row[name] = resolve_insert_value(raw_value, type);
                    found_field = true;
                    break;
                }
            }

            if(!found_field) {
                return false;
            }

            n++;
        }
        
        int last_index = table.rows.length();
        
        map<string, string>* last_row = null;
        if(last_index > 0) {
            last_row = borrow table.rows[last_index-1];
        }
        
        if(last_row) {
            foreach(it, table.types) {
                var name, type = it;
                
                if(type->auto_increment) {
                    char* last_value = borrow last_row[name];
                    row[name] = xsprintf("%d", atoi(last_value) + 1);
                }
            }
        }
        else {
            foreach(it, table.types) {
                var name, type = it;
                
                if(type->auto_increment) {
                    row[name] = xsprintf("%d", 1);
                }
            }
        }

        foreach(it, table.types) {
            var name, type = it;
            if(type->not_null) {
                char* value = borrow row[name];
                if(value == null || *value == '\0') {
                    return false;
                }
            }
        }
        
        table.rows.add(row);
    }
    else {
        return false;
    }
    
    return true;
}

bool eval_drop_database(sInfo* info)
{
    info->p += strlen("DROP DATABASE");
    skip_spaces();

    bool if_exists = false;
    if(strncmp(info->p, "IF EXISTS", strlen("IF EXISTS")) == 0) {
        info->p += strlen("IF EXISTS");
        skip_spaces();
        if_exists = true;
    }

    string db_name = parse_word();
    if(db_name === "") {
        return false;
    }

    if(gDatabases[db_name]) {
        gDatabases.remove(db_name);

        if(info.current_db_name && info.current_db_name === db_name) {
            info.current_db_name = null;
        }

        return true;
    }

    return if_exists;
}

bool eval_drop_table(sInfo* info)
{
    info->p += strlen("DROP TABLE");
    skip_spaces();

    bool if_exists = false;
    if(strncmp(info->p, "IF EXISTS", strlen("IF EXISTS")) == 0) {
        info->p += strlen("IF EXISTS");
        skip_spaces();
        if_exists = true;
    }

    Database*% current_db = gDatabases[info.current_db_name];
    if(current_db == null) {
        return false;
    }

    string table_name = parse_word();
    if(table_name === "") {
        return false;
    }

    if(current_db.tables[table_name]) {
        current_db.tables.remove(table_name);
        return true;
    }

    return if_exists;
}

bool has_table_field(Table* table, string field_name)
{
    foreach(it, table.types) {
        var name, type = it;
        if(name === field_name) {
            return true;
        }
    }

    return false;
}

bool eval_alter_table(sInfo* info)
{
    info->p += strlen("ALTER TABLE");
    skip_spaces();

    Database*% current_db = gDatabases[info.current_db_name];
    if(current_db == null) {
        return false;
    }

    string table_name = parse_word();
    if(table_name === "") {
        return false;
    }

    Table*% table = current_db.tables[table_name];
    if(table == null) {
        return false;
    }

    if(strncmp(info->p, "ADD COLUMN", strlen("ADD COLUMN")) == 0) {
        info->p += strlen("ADD COLUMN");
        skip_spaces();

        var field_name, type, err = parse_type();
        err

        if(field_name === "" || has_table_field(table, field_name)) {
            return false;
        }

        table.types.add(t(field_name, type));

        int auto_increment_value = 1;
        foreach(it, table.rows) {
            map<string,string>* row = it;
            if(type->auto_increment) {
                row[field_name] = xsprintf("%d", auto_increment_value++);
            }
            else if(type->has_default_value) {
                row[field_name] = clone type->default_value;
            }
            else {
                row[field_name] = null;
            }
        }

        return true;
    }
    else if(strncmp(info->p, "ADD", strlen("ADD")) == 0) {
        info->p += strlen("ADD");
        skip_spaces();

        var field_name, type, err = parse_type();
        err

        if(field_name === "" || has_table_field(table, field_name)) {
            return false;
        }

        table.types.add(t(field_name, type));

        int auto_increment_value = 1;
        foreach(it, table.rows) {
            map<string,string>* row = it;
            if(type->auto_increment) {
                row[field_name] = xsprintf("%d", auto_increment_value++);
            }
            else if(type->has_default_value) {
                row[field_name] = clone type->default_value;
            }
            else {
                row[field_name] = null;
            }
        }

        return true;
    }
    else if(strncmp(info->p, "DROP COLUMN", strlen("DROP COLUMN")) == 0) {
        info->p += strlen("DROP COLUMN");
        skip_spaces();

        string field_name = parse_word();
        if(field_name === "" || !has_table_field(table, field_name)) {
            return false;
        }

        list<tuple2<string, sType*%>*%>*% new_types = new list<tuple2<string, sType*%>*%>();
        foreach(it, table.types) {
            var name, type = it;
            if(name !== field_name) {
                new_types.add(t(name, clone type));
            }
        }
        table.types = new_types;

        foreach(it, table.rows) {
            map<string,string>* row = it;
            row.remove(field_name);
        }

        return true;
    }
    else if(strncmp(info->p, "DROP", strlen("DROP")) == 0) {
        info->p += strlen("DROP");
        skip_spaces();

        string field_name = parse_word();
        if(field_name === "" || !has_table_field(table, field_name)) {
            return false;
        }

        list<tuple2<string, sType*%>*%>*% new_types = new list<tuple2<string, sType*%>*%>();
        foreach(it, table.types) {
            var name, type = it;
            if(name !== field_name) {
                new_types.add(t(name, clone type));
            }
        }
        table.types = new_types;

        foreach(it, table.rows) {
            map<string,string>* row = it;
            row.remove(field_name);
        }

        return true;
    }
    else if(strncmp(info->p, "RENAME COLUMN", strlen("RENAME COLUMN")) == 0) {
        info->p += strlen("RENAME COLUMN");
        skip_spaces();

        string old_name = parse_word();
        if(old_name === "" || !has_table_field(table, old_name)) {
            return false;
        }
        if(strncmp(info->p, "TO", strlen("TO")) != 0) {
            return false;
        }
        info->p += strlen("TO");
        skip_spaces();

        string new_name = parse_word();
        if(new_name === "" || has_table_field(table, new_name)) {
            return false;
        }

        list<tuple2<string, sType*%>*%>*% new_types = new list<tuple2<string, sType*%>*%>();
        foreach(it, table.types) {
            var name, type = it;
            if(name === old_name) {
                new_types.add(t(new_name, clone type));
            }
            else {
                new_types.add(t(name, clone type));
            }
        }
        table.types = new_types;

        foreach(it, table.rows) {
            map<string,string>* row = it;
            char* value = borrow row[old_name];
            row[new_name] = value ? xsprintf("%s", value) : null;
            row.remove(old_name);
        }

        return true;
    }
    else if(strncmp(info->p, "RENAME TO", strlen("RENAME TO")) == 0) {
        info->p += strlen("RENAME TO");
        skip_spaces();

        string new_table_name = parse_word();
        if(new_table_name === "" || current_db.tables[new_table_name]) {
            return false;
        }

        current_db.tables.remove(table_name);
        table.name = new_table_name;
        current_db.tables[new_table_name] = table;

        return true;
    }

    return false;
}

bool eval_delete_from(sInfo* info)
{
    info->p += strlen("DELETE FROM");
    skip_spaces();

    Database*% current_db = gDatabases[info.current_db_name];
    if(current_db == null) {
        return false;
    }

    string table_name = parse_word();
    Table*% table = current_db.tables[table_name];
    if(table == null) {
        return false;
    }

    skip_spaces();

    WhereNode*% where_node = null;
    if(strncmp(info->p, "WHERE", strlen("WHERE")) == 0) {
        info->p += strlen("WHERE");
        skip_spaces();
        where_node = parse_where();
    }

    list<map<string,string>*%>*% new_rows = new list<map<string,string>*%>();

    foreach(it, table.rows) {
        map<string,string>* row = borrow it;

        if(where_node == null || !where_select(row, where_node)) {
            new_rows.add(clone row);
        }
    }

    table.rows = new_rows;

    return true;
}

bool eval_update(sInfo* info)
{
    info->p += strlen("UPDATE");
    skip_spaces();

    Database*% current_db = gDatabases[info.current_db_name];
    if(current_db == null) {
        return false;
    }

    string table_name = parse_word();
    Table*% table = current_db.tables[table_name];
    if(table == null) {
        return false;
    }

    if(strncmp(info->p, "SET", strlen("SET")) != 0) {
        return false;
    }
    info->p += strlen("SET");
    skip_spaces();

    map<string,string>*% update_values = new map<string,string>();
    while(true) {
        string field_name = parse_word();
        if(field_name === "") {
            return false;
        }

        if(!expected_next_charactor('=', info)) {
            return false;
        }

        string value = parse_value();
        update_values[field_name] = value;

        if(*info.p != ',') {
            break;
        }

        info->p++;
        skip_spaces();
    }

    skip_spaces();

    WhereNode*% where_node = null;
    if(strncmp(info->p, "WHERE", strlen("WHERE")) == 0) {
        info->p += strlen("WHERE");
        skip_spaces();
        where_node = parse_where();
    }

    foreach(it, table.rows) {
        map<string,string>* row = it;

        if(where_node == null || where_select(row, where_node)) {
            foreach(it2, update_values) {
                string key = string(it2);
                row[key] = update_values[key];
            }
        }
    }

    return true;
}

struct WhereNode
{
    enum { kWOEq, kWONotEq, kWOLt, kWOLtEq, kWOGt, kWOGtEq, kWOIsNull, kWOIsNotNull, kWOAnd, kWOOr, kWOData } op;
    tuple1<WhereNode*%>*% left;
    tuple1<WhereNode*%>*% right;
    
    string data;
};

WhereNode*% WhereNode*::initialize(WhereNode*% self, WhereNode*% left, WhereNode*% right, int op, string data) 
{
    self.op = op;
    self.left = new tuple1<WhereNode*%>(left);
    self.right = new tuple1<WhereNode*%>(right);
    self.data = data;
    
    return self;
}

void WhereNode*::finalize(WhereNode* self)
{
    delete self.left;
    delete self.right;
    delete self.data;
}

WhereNode*% parse_where(sInfo* info=info)
{
    string str = parse_word();
    
    WhereNode*% left = new WhereNode(null, null, kWOData, str);
    
    WhereNode*% result = null;
    if(*info.p == '=') {
        info->p++;
        skip_spaces();
        
        string str2;
        if(*info.p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWOEq, null);
    }
    else if(strncmp(info->p, "!=", 2) == 0) {
        info->p+=2;
        skip_spaces();
        
        string str2;
        if(*info.p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWONotEq, null);
    }
    else if(strncmp(info->p, ">=", 2) == 0) {
        info->p+=2;
        skip_spaces();
        
        string str2;
        if(*info.p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWOGtEq, null);
    }
    else if(strncmp(info->p, "<=", 2) == 0) {
        info->p+=2;
        skip_spaces();
        
        string str2;
        if(*info.p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWOLtEq, null);
    }
    else if(*info.p == '>') {
        info->p++;
        skip_spaces();
        
        string str2;
        if(*info.p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWOGt, null);
    }
    else if(*info.p == '<') {
        info->p++;
        skip_spaces();
        
        string str2;
        if(*info.p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWOLt, null);
    }
    else if(strncmp(info->p, "IS NOT NULL", strlen("IS NOT NULL")) == 0) {
        info->p += strlen("IS NOT NULL");
        skip_spaces();

        result = new WhereNode(left, new WhereNode(null, null, kWOData, xsprintf("NULL")), kWOIsNotNull, null);
    }
    else if(strncmp(info->p, "IS NULL", strlen("IS NULL")) == 0) {
        info->p += strlen("IS NULL");
        skip_spaces();

        result = new WhereNode(left, new WhereNode(null, null, kWOData, xsprintf("NULL")), kWOIsNull, null);
    }
    
    skip_spaces();
    
    if(strncmp(info->p, "AND", strlen("AND")) == 0) {
        info->p += strlen("AND");
        skip_spaces();
        
        WhereNode*% right = parse_where();
        
        result = new WhereNode(result, right, kWOAnd, null);
    }
    else if(strncmp(info->p, "OR", strlen("OR")) == 0) {
        info->p += strlen("OR");
        skip_spaces();
        
        WhereNode*% right = parse_where();
        
        result = new WhereNode(result, right, kWOOr, null);
    }
    
    return result;
}

bool where_select(map<string,string>* row, WhereNode* where_node)
{
    switch(where_node.op) {
        case kWOEq: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = resolve_row_value(row, borrow where_node.left.v1.data);
                char* right = borrow where_node.right.v1.data;
                if(left == null) {
                    return false;
                }
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return left === right;
                }
                else {
                    return atoi(left) == right_int_value;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWONotEq: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = resolve_row_value(row, borrow where_node.left.v1.data);
                char* right = borrow where_node.right.v1.data;
                if(left == null) {
                    return false;
                }
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return left !== right;
                }
                else {
                    return atoi(left) != right_int_value;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWOLt: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = resolve_row_value(row, borrow where_node.left.v1.data);
                char* right = borrow where_node.right.v1.data;
                if(left == null) {
                    return false;
                }
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return false;
                }
                else {
                    return atoi(left) < right_int_value;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWOLtEq: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = resolve_row_value(row, borrow where_node.left.v1.data);
                char* right = borrow where_node.right.v1.data;
                if(left == null) {
                    return false;
                }
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return false;
                }
                else {
                    return atoi(left) <= right_int_value;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWOGt: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = resolve_row_value(row, borrow where_node.left.v1.data);
                char* right = borrow where_node.right.v1.data;
                if(left == null) {
                    return false;
                }
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return false;
                }
                else {
                    return atoi(left) > right_int_value;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWOGtEq: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = resolve_row_value(row, borrow where_node.left.v1.data);
                char* right = borrow where_node.right.v1.data;
                if(left == null) {
                    return false;
                }
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return false;
                }
                else {
                    return atoi(left) >= right_int_value;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWOAnd: {
            bool left = where_select(row, where_node.left.v1);
            bool right = where_select(row, where_node.right.v1);
            
            return left && right;
            }
            break;
            
        case kWOOr: {
            bool left = where_select(row, where_node.left.v1);
            bool right = where_select(row, where_node.right.v1);
            
            return left || right;
            }
            break;

        case kWOIsNull: {
            if(where_node.left.v1.op == kWOData) {
                char* value = resolve_row_value(row, borrow where_node.left.v1.data);
                return value == null;
            }

            return false;
            }
            break;

        case kWOIsNotNull: {
            if(where_node.left.v1.op == kWOData) {
                char* value = resolve_row_value(row, borrow where_node.left.v1.data);
                return value != null;
            }

            return false;
            }
            break;
            
        case kWOData:
            return false;
    }
    
    return false;
}

bool like(char *str, char *pattern) 
{
    if (*pattern == '\0') return *str == '\0';

    if (*pattern == '%') {
        return like(str, pattern + 1) || (*str && like(str + 1, pattern));
    }

    if (*pattern == '_') {
        return *str && like(str + 1, pattern + 1);
    }

    return *str == *pattern && like(str + 1, pattern + 1);
}

bool is_number_string(char* value)
{
    if(value == null || *value == '\0') {
        return false;
    }

    if(*value == '-') {
        value++;
    }

    if(*value == '\0') {
        return false;
    }

    while(*value) {
        if(!xisdigit(*value)) {
            return false;
        }
        value++;
    }

    return true;
}

int compare_db_values(char* left, char* right)
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }

    if(is_number_string(left) && is_number_string(right)) {
        long left_value = atol(left);
        long right_value = atol(right);

        if(left_value < right_value) {
            return -1;
        }
        else if(left_value > right_value) {
            return 1;
        }

        return 0;
    }

    return strcmp(left, right);
}

string build_row_output(map<string,string>* row, bool all_, list<string>* field_names, const char* deliminater="\n")
{
    var buf = new buffer();

    if(all_) {
        foreach(it, row) {
            char* value = resolve_row_value(row, string(it));
            if(value) {
                buf.append_str(value);
            }
            buf.append_str(deliminater);
        }
    }
    else {
        foreach(it, field_names) {
            char* value = resolve_row_value(row, borrow it);
            if(value) {
                buf.append_str(value);
            }
            buf.append_str(deliminater);
        }
    }

    return buf.to_string();
}

string format_average_value(long total, long count)
{
    if(count == 0) {
        return xsprintf("0");
    }

    if(total % count == 0) {
        return xsprintf("%ld", total / count);
    }

    return xsprintf("%g", (double)total / (double)count);
}

string parse_select_target_expr(sInfo* info=info)
{
    if(strncmp(info->p, "MAX(", strlen("MAX(")) == 0) {
        info->p += strlen("MAX(");
        string field = parse_word();
        expected_next_charactor(')');
        return field;
    }
    else if(strncmp(info->p, "MIN(", strlen("MIN(")) == 0) {
        info->p += strlen("MIN(");
        string field = parse_word();
        expected_next_charactor(')');
        return field;
    }
    else if(strncmp(info->p, "SUM(", strlen("SUM(")) == 0) {
        info->p += strlen("SUM(");
        string field = parse_word();
        expected_next_charactor(')');
        return field;
    }
    else if(strncmp(info->p, "AVG(", strlen("AVG(")) == 0) {
        info->p += strlen("AVG(");
        string field = parse_word();
        expected_next_charactor(')');
        return field;
    }
    else if(strncmp(info->p, "COUNT(", strlen("COUNT(")) == 0) {
        info->p += strlen("COUNT(");
        string field = null;
        if(*info.p == '*') {
            info->p++;
            skip_spaces();
            field = xsprintf("*");
        }
        else {
            field = parse_word();
        }
        expected_next_charactor(')');
        return field;
    }

    return parse_word();
}

char* resolve_row_value(map<string,string>* row, char* field_name)
{
    char* value = borrow row[field_name];
    if(value) {
        return value;
    }

    char* p = strrchr(field_name, '.');
    if(p) {
        return borrow row[p+1];
    }

    return null;
}

list<string>*% build_output_field_names(Table* table, string table_name, Table* join_table=null, string join_table_name=null)
{
    list<string>*% result = new list<string>();

    foreach(it, table.types) {
        var name, type = it;
        if(join_table) {
            result.add(xsprintf("%s.%s", table_name, name));
        }
        else {
            result.add(clone name);
        }
    }

    if(join_table) {
        foreach(it, join_table.types) {
            var name, type = it;
            result.add(xsprintf("%s.%s", join_table_name, name));
        }
    }

    return result;
}

map<string,string>*% build_join_row(map<string,string>* left_row, string left_table_name, Table* right_table, string right_table_name, map<string,string>* right_row=null)
{
    map<string,string>*% result = new map<string,string>();

    foreach(it, left_row) {
        string key = string(it);
        char* value = borrow left_row[key];

        if(result[key] == null) {
            result[clone key] = value ? xsprintf("%s", value) : null;
        }
        result[xsprintf("%s.%s", left_table_name, key)] = value ? xsprintf("%s", value) : null;
    }

    if(right_row) {
        foreach(it, right_row) {
            string key = string(it);
            char* value = borrow right_row[key];

            if(result[key] == null) {
                result[clone key] = value ? xsprintf("%s", value) : null;
            }
            result[xsprintf("%s.%s", right_table_name, key)] = value ? xsprintf("%s", value) : null;
        }
    }
    else if(right_table) {
        foreach(it, right_table.types) {
            var key, type = it;

            if(result[key] == null) {
                result[clone key] = null;
            }
            result[xsprintf("%s.%s", right_table_name, key)] = null;
        }
    }

    return result;
}

bool row_matches_select_condition
(
    map<string,string>* row,
    string compare_target,
    string compare_value,
    int compare_op,
    string is_null_target,
    string is_not_null_target,
    string in_target,
    list<string>* in_values,
    bool not_in,
    string between_target,
    tuple2<string, string>* between_values,
    string like_target,
    string like_value,
    string not_like_target,
    string not_like_value,
    WhereNode* where_node
)
{
    bool selected = false;

    if(compare_target) {
        char* value = resolve_row_value(row, borrow compare_target);
        int cmp = compare_db_values(value, compare_value);

        switch(compare_op) {
            case kWOEq:
                selected = cmp == 0;
                break;

            case kWONotEq:
                selected = cmp != 0;
                break;

            case kWOLt:
                selected = cmp < 0;
                break;

            case kWOLtEq:
                selected = cmp <= 0;
                break;

            case kWOGt:
                selected = cmp > 0;
                break;

            case kWOGtEq:
                selected = cmp >= 0;
                break;
        }
    }
    else if(is_null_target) {
        char* value = resolve_row_value(row, borrow is_null_target);
        selected = value == null;
    }
    else if(is_not_null_target) {
        char* value = resolve_row_value(row, borrow is_not_null_target);
        selected = value != null;
    }
    else if(in_target && not_in) {
        selected = true;
        foreach(it2, in_values) {
            char* value = resolve_row_value(row, borrow in_target);
            if(value && value === it2) {
                selected = false;
            }
        }
    }
    else if(in_target) {
        foreach(it2, in_values) {
            char* value = resolve_row_value(row, borrow in_target);
            if(value && value === it2) {
                selected = true;
            }
        }
    }
    else if(between_target) {
        char* value = resolve_row_value(row, borrow between_target);
        char* start = borrow between_values.v1;
        char* end = borrow between_values.v2;

        if(value) {
            selected = atoi(value) >= atoi(start) && atoi(value) <= atoi(end);
        }
    }
    else if(like_target) {
        char* value = resolve_row_value(row, borrow like_target);
        char* pattern = borrow like_value;

        selected = value && like(value, pattern);
    }
    else if(not_like_target) {
        char* value = resolve_row_value(row, borrow not_like_target);
        char* pattern = borrow not_like_value;

        selected = value && !like(value, pattern);
    }
    else if(where_node) {
        selected = where_select(row, where_node);
    }
    else {
        selected = true;
    }

    return selected;
}

map<string,string>* find_min_max_row(list<map<string,string>*%>* rows, string target_field, bool max_)
{
    map<string,string>* result = null;

    foreach(it, rows) {
        map<string,string>* row = it;

        if(result == null) {
            result = row;
        }
        else {
            char* left_value = resolve_row_value(row, borrow target_field);
            char* right_value = resolve_row_value(result, borrow target_field);
            int cmp = compare_db_values(left_value, right_value);
            if((max_ && cmp > 0) || (!max_ && cmp < 0)) {
                result = row;
            }
        }
    }

    return result;
}

map<string,string>*% build_result_row
(
    list<map<string,string>*%>* rows,
    list<string>* field_names,
    map<string,bool>* max_field,
    map<string,bool>* min_field,
    map<string,bool>* sum_field,
    map<string,bool>* count_field,
    map<string,bool>* avg_field,
    string group_by_target=null,
    string group_value=null
)
{
    map<string,string>*% result = new map<string,string>();
    map<string,string>* first_row = null;
    if(rows.length() > 0) {
        first_row = borrow rows[0];
    }

    string min_max_target = null;
    bool max_mode = false;
    foreach(it, field_names) {
        if(max_field[it]) {
            min_max_target = string(it);
            max_mode = true;
            break;
        }
        else if(min_field[it]) {
            min_max_target = string(it);
            max_mode = false;
            break;
        }
    }

    map<string,string>* target_row = null;
    if(min_max_target) {
        target_row = find_min_max_row(rows, min_max_target, max_mode);
    }

    foreach(it, field_names) {
        string output_value = null;

        if(max_field[it] || min_field[it]) {
            char* value = target_row ? resolve_row_value(target_row, borrow it) : null;
            output_value = value ? xsprintf("%s", value) : xsprintf("");
        }
        else if(sum_field[it]) {
            long total = 0;
            foreach(it2, rows) {
                map<string,string>* row = it2;
                char* value = resolve_row_value(row, borrow it);
                if(value) {
                    total += atol(value);
                }
            }
            output_value = xsprintf("%ld", total);
        }
        else if(count_field[it]) {
            long count_value = 0;
            if(it === "*") {
                count_value = rows.length();
            }
            else {
                foreach(it2, rows) {
                    map<string,string>* row = it2;
                    char* value = resolve_row_value(row, borrow it);
                    if(value) {
                        count_value++;
                    }
                }
            }
            output_value = xsprintf("%ld", count_value);
        }
        else if(avg_field[it]) {
            long total = 0;
            long count_value = 0;
            foreach(it2, rows) {
                map<string,string>* row = it2;
                char* value = resolve_row_value(row, borrow it);
                if(value) {
                    total += atol(value);
                    count_value++;
                }
            }
            output_value = format_average_value(total, count_value);
        }
        else if(group_by_target && it === group_by_target) {
            output_value = group_value ? clone group_value : xsprintf("");
        }
        else {
            char* value = first_row ? resolve_row_value(first_row, borrow it) : null;
            output_value = value ? xsprintf("%s", value) : xsprintf("");
        }

        result[clone it] = output_value;
    }

    return result;
}

bool eval_select_from(const char* deliminater="\n", sInfo* info)
{
    info->p += strlen("SELECT");
    
    skip_spaces();
    
    bool all_ = false;
    bool max_ = false;
    bool min_ = false;
    bool sum_ = false;
    bool count_ = false;
    bool avg_ = false;
    list<string>*% field_names = new list<string>();
    map<string,bool>*% max_field = new map<string,bool>();
    map<string,bool>*% min_field = new map<string,bool>();
    map<string,bool>*% sum_field = new map<string,bool>();
    map<string,bool>*% count_field = new map<string,bool>();
    map<string,bool>*% avg_field = new map<string,bool>();
    if(*info.p =='*') {
        info->p++;
        skip_spaces();
        all_ = true;
        
        if(strncmp(info->p, "FROM", strlen("FROM")) == 0) {
            info->p += strlen("FROM");
            skip_spaces();
        }
    }
    else {
        while(1) {
            string field = null;
            bool max_flag = false;
            bool min_flag = false;
            bool sum_flag = false;
            bool count_flag = false;
            bool avg_flag = false;
            if(strncmp(info->p, "MAX(", strlen("MAX(")) == 0) {
                info->p += strlen("MAX(");
                field = parse_word();
                expected_next_charactor(')');
                max_flag = max_ = true;
            }
            else if(strncmp(info->p, "MIN(", strlen("MIN(")) == 0) {
                info->p += strlen("MIN(");
                field = parse_word();
                expected_next_charactor(')');
                min_flag = min_ = true;
            }
            else if(strncmp(info->p, "SUM(", strlen("SUM(")) == 0) {
                info->p += strlen("SUM(");
                field = parse_word();
                expected_next_charactor(')');
                sum_flag = sum_ = true;
            }
            else if(strncmp(info->p, "AVG(", strlen("AVG(")) == 0) {
                info->p += strlen("AVG(");
                field = parse_word();
                expected_next_charactor(')');
                avg_flag = avg_ = true;
            }
            else if(strncmp(info->p, "COUNT(", strlen("COUNT(")) == 0) {
                info->p += strlen("COUNT(");
                if(*info.p == '*') {
                    info->p++;
                    skip_spaces();
                    field = xsprintf("*");
                }
                else {
                    field = parse_word();
                }
                expected_next_charactor(')');
                count_flag = count_ = true;
            }
            else {
                field = parse_word();
            }
            
            field_names.add(field);
            max_field.insert(field, max_flag);
            min_field.insert(field, min_flag);
            sum_field.insert(field, sum_flag);
            count_field.insert(field, count_flag);
            avg_field.insert(field, avg_flag);
            
            if(strncmp(info->p, "FROM", strlen("FROM")) == 0) {
                info->p += strlen("FROM");
                skip_spaces();
                break;
            }
            
            expected_next_charactor(',')
        }
    }

    int aggregate_num = 0;
    if(max_) aggregate_num++;
    if(min_) aggregate_num++;
    if(sum_) aggregate_num++;
    if(count_) aggregate_num++;
    if(avg_) aggregate_num++;
    if(aggregate_num > 1) {
        return false;
    }
    
    string table_name = parse_word();
    
    skip_spaces();

    string join_table_name = null;
    string join_left_field = null;
    string join_right_field = null;
    bool left_join = false;
    if(strncmp(info->p, "LEFT OUTER JOIN", strlen("LEFT OUTER JOIN")) == 0) {
        info->p += strlen("LEFT OUTER JOIN");
        skip_spaces();

        join_table_name = parse_word();
        left_join = true;
        if(join_table_name === "") {
            return false;
        }
        if(strncmp(info->p, "ON", strlen("ON")) != 0) {
            return false;
        }
        info->p += strlen("ON");
        skip_spaces();

        join_left_field = parse_word();
        if(join_left_field === "") {
            return false;
        }
        if(!expected_next_charactor('=')) {
            return false;
        }
        join_right_field = parse_word();
        if(join_right_field === "") {
            return false;
        }
    }
    else if(strncmp(info->p, "LEFT JOIN", strlen("LEFT JOIN")) == 0) {
        info->p += strlen("LEFT JOIN");
        skip_spaces();

        join_table_name = parse_word();
        left_join = true;
        if(join_table_name === "") {
            return false;
        }
        if(strncmp(info->p, "ON", strlen("ON")) != 0) {
            return false;
        }
        info->p += strlen("ON");
        skip_spaces();

        join_left_field = parse_word();
        if(join_left_field === "") {
            return false;
        }
        if(!expected_next_charactor('=')) {
            return false;
        }
        join_right_field = parse_word();
        if(join_right_field === "") {
            return false;
        }
    }
    else if(strncmp(info->p, "INNER JOIN", strlen("INNER JOIN")) == 0) {
        info->p += strlen("INNER JOIN");
        skip_spaces();

        join_table_name = parse_word();
        if(join_table_name === "") {
            return false;
        }
        if(strncmp(info->p, "ON", strlen("ON")) != 0) {
            return false;
        }
        info->p += strlen("ON");
        skip_spaces();

        join_left_field = parse_word();
        if(join_left_field === "") {
            return false;
        }
        if(!expected_next_charactor('=')) {
            return false;
        }
        join_right_field = parse_word();
        if(join_right_field === "") {
            return false;
        }
    }
    else if(strncmp(info->p, "JOIN", strlen("JOIN")) == 0) {
        info->p += strlen("JOIN");
        skip_spaces();

        join_table_name = parse_word();
        if(join_table_name === "") {
            return false;
        }
        if(strncmp(info->p, "ON", strlen("ON")) != 0) {
            return false;
        }
        info->p += strlen("ON");
        skip_spaces();

        join_left_field = parse_word();
        if(join_left_field === "") {
            return false;
        }
        if(!expected_next_charactor('=')) {
            return false;
        }
        join_right_field = parse_word();
        if(join_right_field === "") {
            return false;
        }
    }
    
    WhereNode*% where_node = null;
    string compare_target = null;
    string compare_value = null;
    int compare_op = 0;
    string is_null_target = null;
    string is_not_null_target = null;
    string in_target = null;
    list<string>*% in_values = new list<string>();
    bool not_in = false;
    string between_target = null;
    string like_target = null;
    string not_like_target = null;
    tuple2<string, string>*% between_values = null;
    string like_value = null;
    string not_like_value = null;
    if(strncmp(info->p, "WHERE", strlen("WHERE")) == 0) {
        info->p += strlen("WHERE");
        skip_spaces();
        
        char* p = info->p;
        
        string tmp = parse_word();
        
        if(strncmp(info->p, "IN", strlen("IN")) == 0 || strncmp(info->p, "NOT IN", strlen("NOT IN")) == 0) {
            if(strncmp(info->p, "IN", strlen("IN")) == 0) {
                info->p += strlen("IN");
                skip_spaces();
            }
            else {
                info->p += strlen("NOT IN");
                skip_spaces();
                not_in = true;
            }
            
            in_target = tmp;
            
            expected_next_charactor('(');
            while(1) {
                string value = parse_value();
                
                in_values.add(value);
                
                if(*info.p == '\0') {
                    return false;
                }
                else if(*info.p == ')') {
                    info->p++;
                    skip_spaces();
                    break;
                }
                
                expected_next_charactor(',');
            }
        }
        else if(strncmp(info->p, "BETWEEN", strlen("BETWEEN")) == 0) {
            info->p += strlen("BETWEEN");
            skip_spaces();
            
            between_target = tmp;
            
            string value = parse_value();
            
            skip_spaces();
            
            if(strncmp(info->p, "AND", strlen("AND")) == 0) {
                info->p += strlen("AND");
                skip_spaces();
            }
            
            string value2 = parse_value();
            skip_spaces();
            
            between_values = t(value, value2);
        }
        else if(strncmp(info->p, "LIKE", strlen("LIKE")) == 0) {
            info->p += strlen("LIKE");
            skip_spaces();
            
            like_target = tmp;
            
            string value = parse_value();
            
            like_value = value;
        }
        else if(strncmp(info->p, "NOT LIKE", strlen("NOT LIKE")) == 0) {
            info->p += strlen("NOT LIKE");
            skip_spaces();
            
            not_like_target = tmp;
            
            string value = parse_value();
            
            not_like_value = value;
        }
        else if(strncmp(info->p, "IS NOT NULL", strlen("IS NOT NULL")) == 0) {
            info->p += strlen("IS NOT NULL");
            skip_spaces();

            is_not_null_target = tmp;
        }
        else if(strncmp(info->p, "IS NULL", strlen("IS NULL")) == 0) {
            info->p += strlen("IS NULL");
            skip_spaces();

            is_null_target = tmp;
        }
        else {
            if(strncmp(info->p, "!=", 2) == 0) {
                info->p += 2;
                skip_spaces();
                compare_target = tmp;
                compare_value = parse_value();
                compare_op = kWONotEq;
            }
            else if(strncmp(info->p, ">=", 2) == 0) {
                info->p += 2;
                skip_spaces();
                compare_target = tmp;
                compare_value = parse_value();
                compare_op = kWOGtEq;
            }
            else if(strncmp(info->p, "<=", 2) == 0) {
                info->p += 2;
                skip_spaces();
                compare_target = tmp;
                compare_value = parse_value();
                compare_op = kWOLtEq;
            }
            else if(*info.p == '=') {
                info->p++;
                skip_spaces();
                compare_target = tmp;
                compare_value = parse_value();
                compare_op = kWOEq;
            }
            else if(*info.p == '>') {
                info->p++;
                skip_spaces();
                compare_target = tmp;
                compare_value = parse_value();
                compare_op = kWOGt;
            }
            else if(*info.p == '<') {
                info->p++;
                skip_spaces();
                compare_target = tmp;
                compare_value = parse_value();
                compare_op = kWOLt;
            }
            else {
                info->p = p;
                
                where_node = parse_where();
            }
        }
    }

    string group_by_target = null;
    if(strncmp(info->p, "GROUP BY", strlen("GROUP BY")) == 0) {
        info->p += strlen("GROUP BY");
        skip_spaces();

        group_by_target = parse_word();
        if(group_by_target === "") {
            return false;
        }
    }

    string having_target = null;
    string having_value = null;
    int having_op = 0;
    if(strncmp(info->p, "HAVING", strlen("HAVING")) == 0) {
        info->p += strlen("HAVING");
        skip_spaces();

        having_target = parse_select_target_expr();
        if(having_target === "") {
            return false;
        }

        if(strncmp(info->p, "!=", 2) == 0) {
            info->p += 2;
            skip_spaces();
            having_op = kWONotEq;
        }
        else if(strncmp(info->p, ">=", 2) == 0) {
            info->p += 2;
            skip_spaces();
            having_op = kWOGtEq;
        }
        else if(strncmp(info->p, "<=", 2) == 0) {
            info->p += 2;
            skip_spaces();
            having_op = kWOLtEq;
        }
        else if(*info.p == '=') {
            info->p++;
            skip_spaces();
            having_op = kWOEq;
        }
        else if(*info.p == '>') {
            info->p++;
            skip_spaces();
            having_op = kWOGt;
        }
        else if(*info.p == '<') {
            info->p++;
            skip_spaces();
            having_op = kWOLt;
        }
        else {
            return false;
        }

        having_value = parse_value();
    }

    string order_by_target = null;
    bool order_by_desc = false;
    if(strncmp(info->p, "ORDER BY", strlen("ORDER BY")) == 0) {
        info->p += strlen("ORDER BY");
        skip_spaces();

        order_by_target = parse_word();

        if(strncmp(info->p, "DESC", strlen("DESC")) == 0) {
            info->p += strlen("DESC");
            skip_spaces();
            order_by_desc = true;
        }
        else if(strncmp(info->p, "ASC", strlen("ASC")) == 0) {
            info->p += strlen("ASC");
            skip_spaces();
        }
    }

    int limit_num = -1;
    if(strncmp(info->p, "LIMIT", strlen("LIMIT")) == 0) {
        info->p += strlen("LIMIT");
        skip_spaces();

        string limit_word = parse_word();
        if(limit_word === "") {
            return false;
        }

        limit_num = atoi(limit_word);
    }
    
    if(field_names.length() == 0 && !all_) {
        return false;
    }
    if(all_ && group_by_target) {
        return false;
    }
    
    Database*% current_db = gDatabases[info.current_db_name];
    if(current_db == null) {
        return false;
    }
    
    Table*% table = current_db.tables[table_name];
    Table*% join_table = null;
    if(join_table_name) {
        join_table = current_db.tables[join_table_name];
        if(join_table == null) {
            return false;
        }
    }
    list<string>*% output_field_names = null;
    if(all_) {
        output_field_names = build_output_field_names(table, table_name, join_table, join_table_name);
    }
    else {
        output_field_names = new list<string>();
        foreach(it, field_names) {
            output_field_names.add(clone it);
        }
    }
    
    buffer*% buf = new buffer();
    
	    if(table) {
	        list<map<string,string>*%>*% selected_rows = new list<map<string,string>*%>();

        if(join_table) {
            foreach(it, table.rows) {
                map<string,string>* left_row = it;
                bool has_join_match = false;

                foreach(it2, join_table.rows) {
                    map<string,string>* right_row = it2;
                    map<string,string>*% joined_row = build_join_row(left_row, table_name, join_table, join_table_name, right_row);

                    char* left_join_value = resolve_row_value(joined_row, borrow join_left_field);
                    char* right_join_value = resolve_row_value(joined_row, borrow join_right_field);
                    if(compare_db_values(left_join_value, right_join_value) == 0) {
                        has_join_match = true;
                        if(row_matches_select_condition(joined_row, compare_target, compare_value, compare_op, is_null_target, is_not_null_target, in_target, in_values, not_in, between_target, between_values, like_target, like_value, not_like_target, not_like_value, where_node))
                        {
                            selected_rows.add(joined_row);
                        }
                    }
                }

                if(left_join && !has_join_match) {
                    map<string,string>*% joined_row = build_join_row(left_row, table_name, join_table, join_table_name);
                    if(row_matches_select_condition(joined_row, compare_target, compare_value, compare_op, is_null_target, is_not_null_target, in_target, in_values, not_in, between_target, between_values, like_target, like_value, not_like_target, not_like_value, where_node))
                    {
                        selected_rows.add(joined_row);
                    }
                }
            }
        }
        else {
            foreach(it, table.rows) {
                map<string,string>* row = it;

                if(row_matches_select_condition(row, compare_target, compare_value, compare_op, is_null_target, is_not_null_target, in_target, in_values, not_in, between_target, between_values, like_target, like_value, not_like_target, not_like_value, where_node))
                {
                    selected_rows.add(clone row);
                }
            }
        }

            list<map<string,string>*%>*% result_rows = new list<map<string,string>*%>();
            bool aggregate_mode = max_ || min_ || sum_ || count_ || avg_;

            if(group_by_target) {
                map<string,list<map<string,string>*%>*%>*% grouped_rows = new map<string,list<map<string,string>*%>*%>();
                list<string>*% group_keys = new list<string>();

                foreach(it, selected_rows) {
                    map<string,string>* row = it;
                    char* key_value = resolve_row_value(row, borrow group_by_target);
                    string group_key = key_value ? xsprintf("%s", key_value) : xsprintf("NULL");
                    list<map<string,string>*%>* group_rows = borrow grouped_rows[group_key];

                    if(group_rows == null) {
                        list<map<string,string>*%>*% new_group_rows = new list<map<string,string>*%>();
                        grouped_rows[group_key] = new_group_rows;
                        group_keys.add(clone group_key);
                        group_rows = borrow grouped_rows[group_key];
                    }

                    group_rows.add(clone row);
                }

                foreach(it, group_keys) {
                    list<map<string,string>*%>* group_rows = borrow grouped_rows[it];
                    result_rows.add(build_result_row(group_rows, field_names, max_field, min_field, sum_field, count_field, avg_field, group_by_target, clone it));
                }
            }
            else if(aggregate_mode) {
                result_rows.add(build_result_row(selected_rows, field_names, max_field, min_field, sum_field, count_field, avg_field));
            }
            else {
                foreach(it, selected_rows) {
                    result_rows.add(clone it);
                }
            }

            if(having_target) {
                list<map<string,string>*%>*% filtered_rows = new list<map<string,string>*%>();

                foreach(it, result_rows) {
                    map<string,string>* row = it;
                    char* value = resolve_row_value(row, borrow having_target);
                    int cmp = compare_db_values(value, having_value);
                    bool matched = false;

                    switch(having_op) {
                        case kWOEq:
                            matched = cmp == 0;
                            break;

                        case kWONotEq:
                            matched = cmp != 0;
                            break;

                        case kWOLt:
                            matched = cmp < 0;
                            break;

                        case kWOLtEq:
                            matched = cmp <= 0;
                            break;

                        case kWOGt:
                            matched = cmp > 0;
                            break;

                        case kWOGtEq:
                            matched = cmp >= 0;
                            break;
                    }

                    if(matched) {
                        filtered_rows.add(clone row);
                    }
                }

                result_rows = filtered_rows;
            }

	        if(order_by_target) {
                int len = result_rows.length();
                for(int i=0; i<len; i++) {
                    for(int j=i+1; j<len; j++) {
                        map<string,string>* row1 = borrow result_rows[i];
                        map<string,string>* row2 = borrow result_rows[j];

                        char* left_value = resolve_row_value(row1, borrow order_by_target);
                        char* right_value = resolve_row_value(row2, borrow order_by_target);
                        int cmp = compare_db_values(left_value, right_value);
                        if((!order_by_desc && cmp > 0) || (order_by_desc && cmp < 0)) {
                            map<string,string>*% tmp = clone result_rows[i];
                            result_rows[i] = clone result_rows[j];
                            result_rows[j] = tmp;
                        }
                    }
                }
            }

            int output_len = result_rows.length();
            if(limit_num >= 0 && limit_num < output_len) {
                output_len = limit_num;
            }

            for(int i=0; i<output_len; i++) {
                map<string,string>* row = borrow result_rows[i];
                buf.append_str(build_row_output(row, false, output_field_names, deliminater));
            }
	        
	        string str = buf.to_string();
        
        if(str === "") {
            const char *not_found = "NOT FOUND\n";
            write_response(info->socket, not_found);
        }
        else {
            write_response_string(info->socket, str);
        }
    }
    else {
        return false;
    }
    
    return true;
}

string show_tables(sInfo* info=info)
{
    var buf = new buffer();
    Database*% current_db = gDatabases[info.current_db_name];
    if(current_db == null) {
        return xsprintf("");
    }
    
    foreach(it, current_db.tables) {
        Table*% table = current_db.tables[it];
        
        buf.append_str(table.name);
        buf.append_str("\n");
        buf.append_str(table.to_string());
        buf.append_str("\n");
    }
    
    return buf.to_string();
}

string show_databases()
{
    var buf = new buffer();

    foreach(it, gDatabases) {
        buf.append_str(it);
        buf.append_str("\n");
    }

    return buf.to_string();
}

string describe_table(sInfo* info=info)
{
    Database*% current_db = gDatabases[info.current_db_name];
    if(current_db == null) {
        return xsprintf("");
    }

    string table_name = parse_word();
    Table*% table = current_db.tables[table_name];
    if(table == null) {
        return xsprintf("");
    }

    return table.to_string();
}

int main() {
    setlocale(LC_ALL, "");
    gDatabases = new map<string, Database*%>();
    
    sInfo info;
    info.current_db_name = null;
    
    var server = server_socket(port:3366, reuse:true);
    server.`iter().`for_each {
        char data[1024] = {0};
        int size = read(it, data, 1023);
        if(size <= 0) {
            server.reconnect();
            continue;
        }
        data[size] = '\0';
        
        string recv_log = xsprintf("Recived: %s\n", data);
        write_log_message(recv_log);
        
        char* p = data;
        
        info.p = p;
        info.socket = it;
        
        if(strncmp(info.p, "use", strlen("use")) == 0) {
            info.p += strlen("use");
            skip_spaces(&info);
            
            string word = parse_word(&info);
            
            if(gDatabases[word]) {
                info.current_db_name = word;
                
                const char *ok_message = "OK\n";
                write_response(it, ok_message);
            }
            else {
                const char *not_found = "NOT FOUND\n";
                write_response(it, not_found);
            }
        }
        else if(strncmp(info.p, "show databases", strlen("show databases")) == 0) {
            info.p += strlen("show databases");
            skip_spaces(&info);

            string str = show_databases();

            if(str === "") {
                const char *not_found = "NOT FOUND\n";
                write_response(it, not_found);
            }
            else {
                write_response_string(it, str);
            }
        }
        else if(strncmp(info.p, "show tables", strlen("show tables")) == 0) {
            info.p += strlen("show tables");
            skip_spaces(&info);
            
            if(info.current_db_name) {
                string str = show_tables(&info);
                
                write_response_string(it, str);
            }
            else {
                const char *not_found = "NOT FOUND\n";
                write_response(it, not_found);
            }
        }
        else if(strncmp(info.p, "CREATE DATABASE", strlen("CREATE DATABASE")) == 0) {
            if(!eval_create_database(&info)) {
                const char *failed_message = "FAILED\n";
                write_response(it, failed_message);
                continue;
            }

            const char *ok_message = "OK\n";
            write_response(it, ok_message);
        }
        else if(strncmp(info.p, "CREATE TABLE", strlen("CREATE TABLE")) == 0) {
            if(!eval_create_table(&info)) {
                const char *failed_message = "FAILED\n";
                write_response(it, failed_message);
                continue;
            }
            
            const char *ok_message = "OK\n";
            write_response(it, ok_message);
        }
        else if(strncmp(info.p, "INSERT INTO", strlen("INSERT INTO")) == 0) {
            if(!eval_insert_into(&info)) {
                const char *failed_message = "FAILED\n";
                write_response(it, failed_message);
                continue;
            }
            
            const char *ok_message = "OK\n";
            write_response(it, ok_message);
        }
        else if(strncmp(info.p, "DELETE FROM", strlen("DELETE FROM")) == 0) {
            if(!eval_delete_from(&info)) {
                const char *failed_message = "FAILED\n";
                write_response(it, failed_message);
                continue;
            }

            const char *ok_message = "OK\n";
            write_response(it, ok_message);
        }
        else if(strncmp(info.p, "UPDATE", strlen("UPDATE")) == 0) {
            if(!eval_update(&info)) {
                const char *failed_message = "FAILED\n";
                write_response(it, failed_message);
                continue;
            }

            const char *ok_message = "OK\n";
            write_response(it, ok_message);
        }
        else if(strncmp(info.p, "ALTER TABLE", strlen("ALTER TABLE")) == 0) {
            if(!eval_alter_table(&info)) {
                const char *failed_message = "FAILED\n";
                write_response(it, failed_message);
                continue;
            }

            const char *ok_message = "OK\n";
            write_response(it, ok_message);
        }
        else if(strncmp(info.p, "SELECT", strlen("SELECT")) == 0) {
            if(!eval_select_from("\n", &info)) {
                const char *failed_message = "FAILED\n";
                write_response(it, failed_message);
                continue;
            }
        }
        else if(strncmp(info.p, "DROP DATABASE", strlen("DROP DATABASE")) == 0) {
            if(!eval_drop_database(&info)) {
                const char *failed_message = "FAILED\n";
                write_response(it, failed_message);
                continue;
            }

            const char *ok_message = "OK\n";
            write_response(it, ok_message);
        }
        else if(strncmp(info.p, "DROP TABLE", strlen("DROP TABLE")) == 0) {
            if(!eval_drop_table(&info)) {
                const char *failed_message = "FAILED\n";
                write_response(it, failed_message);
                continue;
            }

            const char *ok_message = "OK\n";
            write_response(it, ok_message);
        }
        else if(strncmp(info.p, "DESCRIBE", strlen("DESCRIBE")) == 0) {
            info.p += strlen("DESCRIBE");
            skip_spaces(&info);

            string str = describe_table(&info);

            if(str === "") {
                const char *not_found = "NOT FOUND\n";
                write_response(it, not_found);
            }
            else {
                write_response_string(it, str);
            }
        }
        else if(strncmp(info.p, "DESC", strlen("DESC")) == 0) {
            info.p += strlen("DESC");
            skip_spaces(&info);

            string str = describe_table(&info);

            if(str === "") {
                const char *not_found = "NOT FOUND\n";
                write_response(it, not_found);
            }
            else {
                write_response_string(it, str);
            }
        }
        else if(strncmp(info.p, "exit", strlen("exit")) == 0) {
            break;
        }
        else {
            const char *failed_message = "FAILED\n";
            write_response(it, failed_message);
        }
    };
    return 0;
}

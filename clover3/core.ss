
class int {
    def set_value(value:int):int;
    def plus(right:int):int {
        self \+ right
    }
    def minus(right:int):int {
        self \- right
    }
    def mult(right:int):int {
        self \* right
    }
    def div(right:int):int {
        self \/ right
    }
    def lesser(right:int):bool {
        self \< right
    }
    def lesser_equal(right:int):bool {
        self \<= right
    }
    def greater(right:int):bool {
        self \> right
    }
    def greater_equal(right:int):bool {
        self \>= right
    }
    def equal(right:int?):bool {
        self \== right
    }
    def not_equal(right:int?):bool {
        self \!= right
    }
    def to_string():string;
    def to_command():command;
    def compare(right:int):int {
        if(self < right) {
            return -1;
        }
        elif(self > right) {
            return 1;
        }

        0
    }
};

class void {
    def to_string():string {
        "null"
    }
}

class system
{
    def exit(exit_code:int):void;
}

class bool {
    def set_value(value:bool):bool;
    def to_int():int;
    def to_string():string;
    def to_command():command;

    def compare(right:bool):int {
        if(!self && right) {
            return -1;
        }
        elif(self && !right) {
            return 1;
        }

        0
    }

    def xassert(str:string):void {
        echo("-n", str);

        if(self) {
            echo("...true");
        }
        else {
            echo("...false");
            exit(1);
        };
    }
};

class string {
    def set_value(value:string):string;
    def equal(right:string?):bool;
    def not_equal(right:string?):bool;
    def to_command():command;
    def compare(right:string):int;
    def item(position:int, default_value:string?) : string;
    def length():int;
    def to_string():string {
        self
    }
    def plus(right:string):string;
    def print():void {
        echo(self);
    }
    def write(file_name:string):void;
    def append(file_name:string):void;
    def substring(head:int, tail:int):string;
};

class object {
    def type_name():string;
    def num_fields():int;
    def field(n:int, default_value:any):any;
    def equal(right:object?):bool {
        self \== right
    }
    def not_equal(right:object?):bool {
        self \!= right
    }
}

class buffer
{
    def initialize():buffer;

    def append(mem:string, size:int):void;
    def append_char(c:int):void;
    def append_str(str:string):void;
    def append_nullterminated_str(str:string):void;
    def append_int(value:int):void;
    def alignment():int;

    def to_string():string;

    def length():int;

    def compare(right:buffer):int;
    def equal(right:buffer):bool {
        self.compare(right) == 0
    }
}

class object {
    def to_string():string {
        var buf = new buffer();

        var i = 0;
        while(i < self.num_fields()) {
            buf.append_str(self.field(i, null).to_string());
            buf.append_str("\n");
            i++;
        }

        buf.to_string()
    }
}

class list<T>
{
    def initialize():list<T>;

    def length(): int;
    def item(position:int, default_value:T?) : T;
    def equal(right:list<T>?):bool {
        if(self.length() != right.length()) {
            return false;
        }

        var i = 0;
        while(i < self.length()) {
            if(!self.item(i, null).equal(right.item(i, null))) {
                return false;
            }
            i++;
        }

        true
    }
    def not_equal(right:list<T>?):bool {
        !self.equal(right)
    }
    def set_value(right:list<T>):list<T>;
    def clone():list<T> {
        var result = new list<T>();

        result.set_value(self);

        result
    }
    def to_string():string {
        var buf = new buffer();

        var i = 0;
        while(i < self.length()) {
            buf.append_str(self.item(i, null).to_string());
            i++;
            if(i != self.length()) {
                buf.append_str("\n")
            }
        }

        buf.to_string()
    }

    def push_back(item:T):list<T>;
    def reset():list<T>;
    def insert(position:int, item:T):list<T>;
    def delete(position:int): list<T>;
    def replace(position:int, item:T):list<T>;
    def delete_range(head:int, tail:int):list<T>;
    def sublist(begin:int, tail:int):list<T>;

    def reverse(): list<T>;
    def join(separator:string):string {
        var result = new buffer();

        var i = 0;
        while(i < self.length()) {
            var item = self.item(i, null);
        
            result.append_str(item.to_string());

            i++;

            if(i != self.length()) {
                result.append_str(separator);
            }
        }

        result.to_string()
    }

    def map(block:lambda(it:T):any):list<any>
    {
        var result = new list<any>();

        var i = 0;
        while(i <self.length()) {
            result.push_back(block(self.item(i, null)));

            i++;
        }

        result
    }

    def filter(block:lambda(it:T):bool):list<T>
    {
        var result = new list<T>();

        var i = 0;
        while(i < self.length()) {
            var item = self.item(i, null);

            if(block(item)) {
                result.push_back(item);
            }

            i++;
        }

        result
    } 
    def each(block:lambda(it:T,it2:int,it3:bool):void):list<T> {
        var i = 0;
        while(i < self.length()) {
            var item = self.item(i, null);

            var end_flag = false;
            block(item, i, end_flag);

            if(end_flag == true) {
                break;
            }
            i++;
        }

        self
    }

    def sort(compare:lambda(it:T,it2:T):int):list<T>;
}

class string 
{
    def to_list():list<string> {
        var result = new list<string>();

        var line = new buffer();
        var n = 0;
        while(n < self.length()) {
            var c = self.item(n, "")

            if(c == "\n") {
                result.push_back(line.to_string());
                line = new buffer();
            }
            else {
                line.append_str(c);
            }

            n++;
        }

        if(line.length() > 0) {
            result.push_back(line.to_string());
        }

        result
    }
}

class map<T>
{
    def initialize():map<T>;
    def insert(key:string, item:T):map<T>;
    def at(key:string, default_value:T?):T?;
    def find(key:string):bool;
    def length():int;
    def keys():list<string>;
    def to_string():string;
    def equal(right:map<T>?):bool {
        $_TMP_SELF = self;
        $_TMP_RIGHT = right;
        
        $_TMP_RESULT = true;
        
        if(self.length() != right.length()) {
            return false;
        }

        self.keys().each() {
            $_TMP_KEY = it;
            $_TMP_ITEM = $_TMP_SELF.at(it, null);

            var right:map<T> = $_TMP_RIGHT;
            
            right.keys().each() {
                var item = $_TMP_ITEM;
                var item2 = $_TMP_RIGHT.at($_TMP_KEY, null);

                if(item2 == null) {
                    $_TMP_RESULT = false;
                }

                if(item != item2) {
                    $_TMP_RESULT = false;
                };
            };
        };

        $_TMP_RESULT
    }
    def not_equal(right:map<T>?):bool {
        !self.equal(right)
    }
}

class tuple1<T>
{
    var value1:T?;
    
    def initialize():tuple1<T> {
        self.value1 = null;
        
        self
    }
    
    def equal(right:tuple1<T>?):bool {
        if(self.type_name() == "void" || right.type_name() == "void") {
            return self.type_name() == right.type_name();
        }

        self.value1 == right.value1
    }
    
    def not_equal(right:tuple1<T>?):bool {
        !self.equal(right)
    }

    def to_string() : string {
        self.value1.to_string()
    }
}

class tuple2<T, T2>
{
    var value1:T?;
    var value2:T2?;
    
    def initialize():tuple2<T,T2> {
        self.value1 = null;
        self.value2 = null;
        
        self
    }
    
    def equal(right:tuple2<T,T2>?):bool {
        if(self.type_name() == "void" || right.type_name() == "void") {
            return self.type_name() == right.type_name();
        };

        (self.value1 == right.value1) && (self.value2 == right.value2)
    }
    
    def not_equal(right:tuple2<T,T2>?):bool {
        !self.equal(right)
    }

    def to_string() : string {
        self.value1.to_string() + "\n" + self.value2.to_string()
    }
}

class tuple3<T, T2, T3>
{
    var value1:T?;
    var value2:T2?;
    var value3:T3?;
    
    def initialize():tuple3<T,T2,T3> {
        self.value1 = null;
        self.value2 = null;
        self.value3 = null;
        
        self
    }
    
    def equal(right:tuple3<T,T2,T3>?):bool {
        if(self.type_name() == "void" || right.type_name() == "void") {
            return self.type_name() == right.type_name();
        };

        (self.value1 == right.value1) 
            && (self.value2 == right.value2)
            && (self.value3 == right.value3)
    }
    def not_equal(right:tuple3<T,T2,T3>?):bool {
        !self.equal(right)
    }
    def to_string() : string {
        self.value1.to_string() + "\n" + self.value2.to_string() + "\n" + self.value3.to_string()
    }
}

class tuple4<T, T2, T3, T4>
{
    var value1:T?;
    var value2:T2?;
    var value3:T3?;
    var value4:T4?;
    
    def initialize():tuple4<T,T2,T3,T4> {
        self.value1 = null;
        self.value2 = null;
        self.value3 = null;
        self.value4 = null;
        
        self
    }
    
    def equal(right:tuple4<T,T2,T3,T4>?):bool {
        if(self.type_name() == "void" || right.type_name() == "void") {
            return self.type_name() == right.type_name();
        };

        (self.value1 == right.value1) 
            && (self.value2 == right.value2)
            && (self.value3 == right.value3)
            && (self.value4 == right.value4)
    }
    def not_equal(right:tuple4<T,T2,T3,T4>?):bool {
        !self.equal(right)
    }
    def to_string() : string {
        self.value1.to_string() + "\n" + self.value2.to_string() + "\n" + self.value3.to_string() + "\n" + self.value4.to_string()
    }
}

class command
{
    def to_string():string;
    def to_list():list<string> {
        self.to_string().to_list()
    }
}

class type
{
    def initialize(name:string):type;

    def name():string;
    def class():class;
    def equal(right:type?): bool;
    def not_equal(right:type?): bool;
}

class class
{
    def initialize(name:string):class;

    def name():string;
    def parent(default_value:class?):class;
    def method(name:string, default_value:method?):method;
    def field(name:string, default_value:method?):field;
    def all_methods():list<method>;
    def all_fields():list<field>;
    def equal(right:class?): bool;
    def not_equal(right:class?): bool;
}

class method
{
    def name():string;
    def param_name(n:int, default_value:string?):string;
    def param_type(n:int, default_value:type?):type;
    def num_params():int;
    def result_type():type;
    def equal(right:method?): bool;
    def not_equal(right:method?): bool;
}

class field
{
    def name():string;
    def result_type():type;
    def equal(right:field?): bool;
    def not_equal(right:field?): bool;
}

class string 
{
    def index(search_str:string, default_value:int):int;
    def rindex(search_str:string, default_value:int):int;
    def index_regex(search_str:regex, default_value:int):int;
    def rindex_regex(search_str:regex, default_value:int):int;
    def sub(reg:regex, replace:string):string;
    def match(reg:regex):bool;

    def reverse():string;
    def replace(index:int, c:string):string;

    def scan(reg:regex):list<string>;
    def split(reg:regex):list<string>;
}

class list<T>
{
    def scan(reg:regex):string {
        var buf = new buffer();
        var i=0;
        while(i < self.length()) {
            var it = self.item(i, null);

            var str = it.scan(reg).join("\n");

            buf.append_str(str);
            buf.append_str("\n");

            i++;
        }

        buf.to_string()
    }
    def sub(reg:regex, replace:string):string {
        var buf = new buffer();
        var i=0;
        while(i < self.length()) {
            var it = self.item(i, null);

            buf.append_str(it.sub(reg, replace));
            buf.append_str("\n");

            i++;
        }

        buf.to_string()
    }
}

class regex 
{
    def set_value(value:regex):regex;
    def to_string(): string;
    def to_command():command {
        self.to_string().to_command()
    }

    def compare(right:regex):int {
        self.to_string().compare(right.to_string())
    }
}

class system
{
    def getenv(name:string):string;
    def setenv(name:string, value:string):void;
    def cd(path:string):void;
    def eval(cmd:string):any;
    def jobs():void;
    def fg(job_num:string):void;
}

save_class void;
save_class object;
save_class int;
save_class bool;
save_class string;
save_class list_item;
save_class list;
save_class buffer;
save_class map;
save_class command;
save_class tuple1;
save_class tuple2;
save_class tuple3;
save_class tuple4;
save_class class;
save_class method;
save_class field;
save_class type;
save_class regex;
save_class system;

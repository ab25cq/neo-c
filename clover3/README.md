# Clover3 script language

interpreter implemented by neo-c

version 1.0.2

* 特徴

1. メソッド名とファイル名の補完を持つシェルとして使えます。

1. It can be used as a shell with method name and file name completion.

```
clover3 > ls().le[TAB]
clover3 > ls().less(

clover3 > 1.to_s[TAB]
clover3 > 1.to_string(
```

2. 外部コマンドを簡単に実行できます。

2. You can easily execute external commands.

```
clover3 > map!("AAA", 1, "BBB", 2).to_string().to_command().less()
```

3. 静的型と動的型の両方を持ちます。内部的には仮想マシーンが動いており、コンパイルを行っております。

3. It has both static and dynamic types. Internally, a virtual machine is running, We are doing compiles. $

4. オブジェクト指向言語でもあります。クラス、継承、ジェネリクス、コレクションなどを含みます。

4. It is also an object-oriented language. Includes classes, inheritance, generics, collections, etc.

```
clover3 > [1,2,3,4,5].filter() { it > 3 }
=>list(4,5)

clover3 > [1,2,3,4,5].map() { it * 2 }
=>list(2,4,6,8,10)
```

5. クラスの生成プログラム

リフレクションとevalとsave_classを使えば動的にクラスファイルを作成することができます。(プログラムを生成するプログラム)

5. Class generator

You can create a class file dynamically using reflection, eval and save_class. (Program that creates the program)

```
load_class ClassA;

var klass_a = new class("ClassA");

var source2 = new buffer();

if(klass_a.field("field1", null).result_type() == new type("string")) {
    soruce2.append_str("class ClassA { var field2:string }");
}
else {
    soruce2.append_str("class ClassA { var field2:int; }");
}

eval(source2.to_string());

save_class ClassA;
```

6. コマンドラインで標準入力が簡単に得られます。

6. You can easily get standard input on command line.

```
$ ls -al | clover3 -c '.wc("-l")'
$ ls -al | clover3 -c '.to_string().scan(/./).join("+").print()'
```

* マニュアル(manual)

* int class

数値を表すクラスです。1などと表現します。

メソッドには以下があります。

Class that represents a number. Expressed as 1. The methods include:

```
class int {
    def set_value(value:int):void;
    def plus(right:int):int {
        self \+ right
    }
    def minus(right:int):int {
        self \- right
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
```

* bool class

真偽を表すクラスです。true, falseなどと表現します。

メソッドは以下です。

This class represents truth. Expressed as true, false, etc. The method is:

```
class bool {
    def set_value(value:bool):void;
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
```

* string class

文字列を表すクラスです。"HELLO"などと表現します。

Class that represents a character string. It is expressed as "HELLO".

```
class string {
    def set_value(value:string):void;
    def equal(right:string?):bool;
    def not_equal(right:string?):bool;
    def to_command():command;
    def compare(right:string):int;
    def item(position:int, default_value:string) : string;
    def length():int;
    def to_string():string {
        self
    }
    def plus(right:string):string;
    def print():void {
        echo(self);
    }
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
    def write(file_name:string):void;
    def append(file_name:string):void;
    def substring(head:int, tail:int):string;

    def index(search_str:string, default_value:int):int;
    def rindex(search_str:string, default_value:int):int;
    def index_regex(search_str:regex, default_value:int):int;
    def rindex_regex(search_str:regex, default_value:int):int;
    def sub(reg:regex, replace:string):string;
    def match(reg:regex):bool;

    def reverse():string;
    def replace(index:int, c:string):void;

    def scan(reg:regex):list<string>;
    def split(reg:regex):list<string>;
    def print():void;
};
```

* object class

全てのオブジェクトの基盤となるクラスです。以下のメソッドがあります。

Fundamental class of all classes. Methods are below:

```
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
```

* buffer buffer

可変長の文字列を表します。

Represents a variable length character string.

```
var a = new buffer();
a.append_str("AAA");
a.append_str("BBB");
echo(a.to_string());
```

はAAABBBを出力します。

```
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
}
```

* list class

[1,2,3]などと表現します。

以下のように定義されています。

It is expressed as [1,2,3]. It is defined as follows.

```
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
    def set_value(right:list<T>):void;
    def clone():list<T> {
        var result = new list<T>();

        result.set_value(self);

        result
    }
    def to_string():string {
        var buf = new buffer();

        buf.append_str("list(");

        var i = 0;
        while(i < self.length()) {
            buf.append_str(self.item(i, null).to_string());
            i++;
            if(i != self.length()) {
                buf.append_str(",");
            }
        }

        buf.append_str(")");

        buf.to_string()
    }

    def push_back(item:T):void;
    def reset():T;
    def insert(position:int, item:T):void;
    def delete(position:int): void;
    def replace(position:int, item:T):void;
    def delete_range(head:int, tail:int):void;
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
```

* map class

map!("AAA", 1, "BBB", 2)などと表現します。

keyには文字列しか使えません。

Express it as map!("AAA", 1, "BBB", 2). Only character strings can be used for key.

```
class map<T>
{
    def initialize():map<T>;
    def insert(key:string, item:T):void;
    def at(key:string, default_value:T?):T?;
    def find(key:string):bool;
    def length():int;
    def equal(right:map<T>):bool;
    def to_string():string;
    def keys():list<string>;
}
```

* regex

```
class regex 
{
    def set_value(value:regex):void;
    def to_string(): string;
    def to_command():command {
        self.to_string().to_command()
    }

    def compare(right:regex):int {
        self.to_string().compare(right.to_string())
    }
}
```

Excamples of regex are, /a/, /a/g, /a/i, etc.

* tuple

以下のように定義されます。tuple!(1,2,"AAA")などと表現されます。

It is defined as follows. It is expressed as tuple!(1,2,"AAA").

```
class tuple1<T>
{
    var value1:T?;
    
    def initialize():tuple1<T> {
        self.value1 = null;
        
        self
    }
    
    def equal(right:tuple1<T>):bool {
        self.value1 == right.value1
    }

    def to_string() : string {
        "tuple(" + self.value1.to_string() + ")"
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
    
    def equal(right:tuple2<T,T2>):bool {
        (self.value1 == right.value1) && (self.value2 == right.value2)
    }

    def to_string() : string {
        "tuple(" + self.value1.to_string() + "," + self.value2.to_string() + ")"
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
    
    def equal(right:tuple3<T,T2,T3>):bool {
        (self.value1 == right.value1) 
            && (self.value2 == right.value2)
            && (self.value3 == right.value3)
    }
    def to_string() : string {
        "tuple(" + self.value1.to_string() + "," + self.value2.to_string() + "," + self.value3.to_string() + ")"
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
    
    def equal(right:tuple4<T,T2,T3,T4>):bool {
        (self.value1 == right.value1) 
            && (self.value2 == right.value2)
            && (self.value3 == right.value3)
            && (self.value4 == right.value4)
    }
    def to_string() : string {
        "tuple(" + self.value1.to_string() + "," + self.value2.to_string() + "," + self.value3.to_string() + "," + self.value4.to_string() + ")"
    }
}
```

* command class

コマンドの出力の値を表現します。commandクラスのメソッドは外部プログラム名です。C-zした場合はjobオブジェクトが保存されます。jobsで一覧を見ることができます。fgでフォアグランドジョブにできます。

Represents the value of the command output. The method of command class is the external program name. If you do C-z, the job object will be saved. You can see the list by jobs. You can make it a foreground job with fg.

```
class command
{
    def to_string():string;
    def to_list():list<string> {
        self.to_string().to_list()
    }
}
```

* Reflection

リフレクションは以下です。

Reflection is below.

```
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
    def equal(right:class?): bool;
    def not_equal(right:class?): bool;
    def all_methods():list<method>;
    def all_fields():list<field>;
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
```

* method block and lambda

メソッドブロックやラムダは親の変数にアクセスすることができません。

Method blocks and lambdas cannot access parent variables.

* loading class and saving class

load_class クラス名で行います。
save_class クラス名で行います。

load_class Class name is used. save_class Class name is used.

* class inheritance

class クラス名 extends 親クラス

class Class name extends the parent class.

で行います。

* initialization of an object

```
class EQTest {
    var a:int;
    var b:int;

    def initialize(a:int, b:int):EQTest {
        self.a = a;
        self.b = b;

        self
    }
}
```

などと行います。ブロックの最後の値が返されます。呼び出し側はvar a = new EQTest(1,2);などです。var a = new EQTest;とするとinitializeは呼び出されません。
finalizerはありません。

And so on. The last value in the block is returned. The caller is var a = new EQTest(1,2); and so on. var a = new EQTest; does not call initialize. There is no finalizer.

* loop, conditional expression, definition of a variable

```
var i = 0;
while(i < 10) {
    echo(i.to_string());
    i++;
}

var value = 111;
if(value == 222) {
    echo("222");
}
elif(value == 111) {
    echo("111");
}
else {
    echo("else");
}
```

* system

```
class system
{
    def getenv(name:string):string;
    def setenv(name:string, value:string):void;
    def cd(path:string):void;
    def eval(cmd:string):any;
    def jobs():void;
    def fg(job_num:string):void;
    def exit(exit_code:string):void;
}
```

systemクラスはメソッド名だけで呼び出せます。一行の場合シェルと同じ構文で呼び出せます。cd src/など。

evalで文字列を実行時に実行できます。これとリフレクションを使えばクラスファイルを生成するプログラムを作ることができます。(コンパイル時リフレクション)

The system class can be called only by the method name. If it is one line, it can be called with the same syntax as the shell. cd src/ etc.

You can run a string at runtime with eval. You can use this and reflection to create a program that creates a class file. (Compile-time reflection)

* shell mode

You can write script like shell script

```
echo aaa
ls -al src/main.c
```
This is for one line shell script. 


* global variable

グローバル変数は$変数名=式で定義します。読み込みは$変数名です。

Global variables are defined by $variable name = expression. Read is $variable name.

```
clover3 > $AAA=123
123
clover3 > $AAA
123
```

* クラスファイル

クラスはsave_class クラス名とするとファイルに保存できます。保存したクラスはload_class クラス名で読み込めます。保存したファイルは拡張子sscファイルです。ホームディレクトリの~/.clover3にファイルを置くとカレントディレクトリの位置にかかわらずクラスファイルを読み込めます。

* class file

The class can be saved to a file with the save_class class name. The saved class can be loaded with the load_class class name. The saved file has the extension ssc. If you put the file in ~/.clover3 in your home directory, you can read the class file regardless of the location of the current directory.

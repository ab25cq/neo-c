
var xassert = lambda(str:string, exp:bool):void
{
    exp.xassert(str);
}

xassert("int test", 2 == 2);

xassert("normal block", { var xxx = 333; xxx+222+111 } == 666 && { var xxx = 555; xxx + 222 } == 777);

var afun = lambda(x:int, y:int):int {
    var a = x + y;
    a + 1
};

xassert("block test", afun(1,2) == 4);

xassert("block test2", 1+1 == 1+1);
xassert("block test3", { var a = 1+1; a } == { var b = 1+1; b });

class EQTest {
    var a:int;
    var b:int;

    def initialize(a:int, b:int):EQTest {
        self.a = a;
        self.b = b;

        self
    }

    def method():int {
        self.a
    }
    def method2():int {
        self.b
    }
}

class EQTest2 extends EQTest {

}

var ax:EQTest? = new EQTest(1, 1);
var bx = ax;

xassert("eq", ax == bx);

xassert("eq", !(ax == null));

xassert("eq", ax != null);

xassert("object.num_fields", ax.num_fields() == 2);

ax = null;

class VarTestData {
    var a:int;
    var b:int;
}

class VarTest {
    var a:VarTestData?;
    var b:int

    def initialize():VarTest {
        self.a = null;
        self.b = 0;
        self
    }

    def push():void {
        var v = new VarTestData;

        self.a = v;
        self.a.a = 123;
        self.a.b = 234;

        self.b++;
    }
}

var data = new VarTest();

data.push();

xassert("TEST", data.a.a == 123);

xassert("test1", (3 <= 2).to_int() == 0);

var m = 0;
while(m < 2) {
    var n = 0;

    while(n < 5) {
        n = n + 1;

       if(n >= 3) {
           break;
        }
    };

    m = m + 1;
};

xassert("test1.5", (1+3) == 4);

class HellClass3 {
    def method(a:int, b:string): int {
        123
    }
}

var obj3 = new HellClass3;

xassert("test2", obj3.method(1, "ABC") == 123);



class HelloClass2 {
    var a:int;
    var b:int;

    def method(a:int, block:lambda(b:int):int) : int {
        a + block(2)
    }
}

var obj2 = new HelloClass2;

xassert("lambda test", lambda(b:int):int { 1 + b }(1) == 2);

xassert("lambda test", obj2.method(2) { b + 2 } == 6);

obj2.a = 3;
xassert("test4", obj2.a == 3);

var a = 1;

if(true) {
    a = 2;
    var b = 222;
}

if(true) {
    a = 3;
    var c = 333;
}

xassert("test5", a == 3);

class HelloClass {
    var a:int;
    var b:int;

    def method(a:int, b:int) : int {
        var c = 3;
        a + b + c
    }
}

var obj = new HelloClass;

xassert("test5.5", obj.method(2, 2) == 7);

var aaa = lambda(a:int):int {
    2 + a
}

xassert("test6", aaa(3) == 5);

var fun = lambda(a:int, b:int): int {
    if(true) {
        return a + b;
    }

    1 + 1
}

xassert("return test", fun(1, 2) == 3);

class GenericsTest <T>
{
    var a:T;
    var b:T;

    def method(c:T): T {
        self.a + self.b + c
    }
}

var gg = new GenericsTest<int>;

gg.a = 1;

xassert("generics test", gg.a == 1);

gg.b = 2;

xassert("generics test2", gg.b == 2);
xassert("generics test3", gg.method(4) == 7);

class GenericsTest2<T>
{
    var a:T;
    var b:T;

    def initialize(a:T, b:T):GenericsTest2<T> {
        self.a = a;
        self.b = b;

        self
    }
}

var gg2 = new GenericsTest2<int>(1, 2);

xassert("generics test b", gg2.a == 1);
xassert("generics test b2", gg2.b == 2);

xassert("string test", "abc" == "abc");
xassert("string test2", "abc" != "ABC");

var str2 = "ABC";

str2.set_value("DEF");

xassert("string test3", str2 == "DEF");

xassert("string test", "aaa" == "aaa");

var br = { 123 };

xassert("normal block test", br == 123);

var li3 = list!(1,2,3);

var li4 = list!(1,2,3);

xassert("list macro", li3 == li4);

var li = new list<int>();

li.push_back(1);
li.push_back(2);
li.push_back(3);
li.insert(2, 111);

xassert("list test", li.item(0, -1) == 1);
xassert("list test2", li.item(1, -1) == 2);
xassert("list test3", li.item(2, -1) == 111);
xassert("list test4", li.item(-1, -1) == 3);

li.delete(2);

xassert("list test5", li.item(2, -1) == 3);

li.delete_range(1, -1);

xassert("list test6", li.length() == 1);

li.replace(0, 999);

xassert("list test7", li.item(0,-1) == 999);

var li1 = new list<int>();
li1.push_back(1);
li1.push_back(2);
li1.push_back(3);

var li2 = new list<int>();
li2.push_back(1);
li2.push_back(2);
li2.push_back(3);

xassert("list equal", li1 == li2);

xassert("XYZ", { 123 } == 123);

xassert("block test", 
        lambda():any { var result = new list<int>(); result }() 
            == lambda():any { new list<int>() }() );

xassert("list sublist", li1.sublist(0,2) == list!(1,2));





var lia = 111;
var lib = 222;
var lic = 333;

xassert("list macro test", list!(lia, lib, lic) == list!(111, 222, 333));

var buf = new buffer();

buf.append_str("aaa");
buf.append_str("bbb");

xassert("buffer test", buf.to_string() == "aaabbb");

var li5 = list!(1, 2, 3);

xassert("list join test", li5.join(",") == "1,2,3");

var li6 = list!(1, 2, 3);

xassert("list map test", li6.map() { it.to_string() } == ["1", "2","3"]);

var li7 = [1,2,3];

xassert("list filter test", li7.filter() { it > 1 } == [ 2, 3 ]);

var li8 = [6, 2, 4, 9, 7, 1];

xassert("list sort", li8.sort() { it.compare(it2) } == [ 1,2,4,6,7,9 ]);

var ma1 = new map<int?>();

ma1.insert("AAA", 1);
ma1.insert("BBB", 2);
ma1.insert("CCC", 3);

xassert("map test", ma1.at("AAA", null) == 1 && ma1.at("BBB", null) == 2 && ma1.at("CCC", null) == 3 && ma1.at("DDD", null) == null);

var ma2 = map!("AAA", 1, "BBB", 2, "CCC", 3);

xassert("map test2", ma2.at("AAA", null) == 1 && ma2.at("BBB", null) == 2 && ma2.at("CCC", null) == 3 && ma2.at("DDD", null) == null);

xassert("map test3", ma2.find("AAA") && !ma2.find("DDD"));

xassert("map test4", ma2.length() == 3);

var ma3 = map!("AAA", 1, "BBB", 2, "CCC", 3);

xassert("map test5", ma2 == ma3);

var tu1 = tuple!("AAA", "BBB", "CCC");

((tu1.value1 == "AAA") && (tu1.value2 == "BBB") && (tu1.value3 == "CCC")).xassert("tuple test1");

try {
    throw "Exception";
    false.xassert("try test");
}
catch {
    (it == "Exception").xassert("try test");
    true.xassert("try test2");
}

try {
    lx();
}
catch {
    echo(it);
}

#var li9 = "aaa,bbb,ccc,ddd".to_command().sed("-e", "s/,/\\n/g").to_list().map() { it.to_command().perl("-pe", "$_ = uc($_)").to_string() }
#
#li9.each() {
#    echo(it);
#}
#
#xassert("command to_list", li9.item(0, null) == "AAA" && li9.item(1, null) == "BBB" && li9.item(2,null) == "CCC" && li9.item(3, null) == "DDD");


class TestObject {
    var value1:int;
    var value2:string;

    def initialize():TestObject {
        self.value1 = 123;
        self.value2 = "ABC"; 

        self
    }
}

var test_object = new TestObject();

xassert("object.field test", test_object.field(0, null) == 123 && test_object.field(1, null) == "ABC");

xassert("string plus", "AAA" + "BBB" == "AAABBB");

var klass = new class("string");

xassert("class test", klass.name() == "string");
xassert("class test2", klass.parent(null).name() == "object");

var method = klass.method("equal", null);

xassert("method test", method.name() == "equal");
xassert("method num_params", method.num_params() == 2);
xassert("method param names", method.param_name(0, null) == "self");
xassert("method param type", method.param_type(0, null) == new type("string"));
xassert("method result type", method.result_type() == new type("bool"));

var type = new type("int");
var type2 = new type("int");

xassert("type test", type.name() == "int" && type2.name() == "int");
xassert("type test2", type == new type("int"));


class ObjectData {
    var field1:int;
    var field2:string;

    def initialize():ObjectData {
        self.field1 = 111;
        self.field2 = "AAA";

        self
    }
}

var klass2 = new class("ObjectData");

xassert("field test", klass2.field("field1", null).result_type() == new type("int"));
xassert("class test", klass2.parent(null) == new class("object"));

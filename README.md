
# neo-c

This has Rerfference Count GC, and includes the generics collection libraries.

リファレンスカウントGCがありコレクションライブラリを備えてます。

version 1.0.2.3

``` C
#include <neo-c.h>

class sData
{
    int a;
    int b;
    
    void show()
    {
        printf("a %d b %d\n", self.a, self.b);
    }
};

class sData2 extends sData
{
    int c;
    
    void show()
    {
        printf("a %d b %d c %d\n", self.a, self.b, self.c);
    }
};

int main() 
{
    var data = new sData2 { a:123, b:234, c:345 };
    
    data.show();  // a 123 b 234 c 345
    
    puts("HO!" * 3);             // HO!HO!HO!\n

    return 0;
}
```


```
#include <neo-c.h>

int main(int argc,char** argv)
{
    "ABC".scan("."); // [A,B,C]
    "ABC".index_regex("b", -1, ignore_case:true); // 1
    "fooBAR".match("bar", ignore_case:true); // true
    "a1b2c3".split("\\d+"); // [a,b,c]
    "Hello".sub("l+", "L"); // HeLo
    "ABCABC".sub_block("ABC") { string("X") }; // XX
    "123 456 789".scan_block("[0-9][0-9][0-9]") { it.substring(0, 1) }; // [1,4,7]

    return 0;
}
```

neo-c outputs c source with standard C libraries only. So you can use this for micro computer or other system working c language.

# インストール

sh clean-self-host.sh will automatically install the necessary packages.

Supports Linux, MacOS (Darwin), raspberry pi, and baremetal.

sh clean-self-host.shとすると自動的に必要なパッケージがインストールされます。

LinuxとMacOS(Darwin), raspberry pi, ベアメタルをサポートしています。

sudoとgitは事前にインストールしてください。

Please install sudo and git before the build.

``` 
git clone https://github.com/ab25cq/neo-c
cd neo-c
sh clean-self-host.sh
```

`clean-self-host.sh`, `self-host.sh`, and `fast_build.sh` use parallel build by default.

If you don't have enough memory, you can use below to install neo-c.

```
git clone https://github.com/ab25cq/neo-c
cd neo-c
sh fast_build.sh -lowmem
```

If you pass `-lowmem`, the build scripts enable low-memory mode and disable parallel build.

`clean-self-host.sh` と `self-host.sh` と `fast_build.sh` はデフォルトで並列ビルドします。

`-lowmem` を付けると low-memory mode を有効にし、並列ビルドを無効にします。

If generated C gets too large to compile on a low-memory system, use `-lowmem` when transpiling your `.nc` file. In this mode, neo-c stops auto-generating helper methods such as `equals`, `operator_equals`, `operator_not_equals`, `to_string`, `compare`, and `get_hash_key`, so you may need to define them explicitly.

```
ncc -lowmem -c your_source.nc
```

You can also enable it for project builds:

```
LOWMEM=1 make -j1 self-host
sh self-host.sh -lowmem
sh fast_build.sh -lowmem
sh clean-self-host.sh -lowmem
```

To install a vi clone called vin, a string processing interpreter called zed, a console filer called mf, and an original shell called shsh, do the following:

vinというviクローン、zedという文字列処理インタプリタ、mfというコンソールファイラ、shshというオリジナルのシェルをインストールするには以下のようにします。

```
sh all_build.sh
```

to build fastest binary

```
sh build-fastest.sh
```

`webweb` is a good reference if you want a general web server in neo-c.
It serves static files, runs CGI, supports HTTP and HTTPS, and has a small database server example with `dbdb`.

neo-cで一般的なWebサーバーを書きたいなら`webweb`が良いサンプルです。
静的ファイル配信、CGI実行、HTTP/HTTPS対応、`dbdb`を使った小さなDBサーバー例まで入っています。

See [/home/ab25cq/neo-c/webweb/README.md](/home/ab25cq/neo-c/webweb/README.md) for quick start and usage examples.

# Histories

```
1.0.2.3 template bug was fixed.
1.0.2.2 template bug was fixed.
1.0.2.1 vector bug was fixed.
1.0.2.0 normalize effective pointer depth in auto-generated equals/clone/finalize, fixing multi-level pointer and typedef alias cases used by remove().
1.0.1.9 document `??` propagation for `Result<T>` / `RESULT(T)`.
1.0.1.8 fix anonymous enum regressions around payload enum parsing and self-hosted comelang compilation.
1.0.1.7 add Rust-like payload enum syntax with generated variant constructors and predicate/getter methods.
1.0.1.5 support both RESULT(T) and Result<T>, and allow ! unwrap on both.
1.0.1.4 rewrite neo-c-net.h manual to use begin/end/next loop style like webweb.
1.0.1.3 add quick start for webweb.
1.0.1.2 recommend webweb as a general web server.
1.0.1.1 document neo-c-str.h.
1.0.1.0 document neo-c-net.h zero cost iterator API.
1.0.0.9 optimize more faster.
1.0.0.8 optimize more faster.
1.0.0.7 optimize more faster.
1.0.0.6 optimize more faster.
1.0.0.5 can build in 512M memory system. may be build in radpberry pi zero.
1.0.0.3 more improvement.
1.0.0.2 optimize enabled.
1.0.0.1 checked alpine on arm and amd64. all ok
1.0.0.0 I can't continue to deep docus on this system. I sometimes to use this to check the functions and to be more better than to be perfect.
0.9.2.9 checked arm and x86_64 on linux and mac. If you don't have enough memory, you can use sh fast_build.sh to install neo-c. I can't support on alpine linux on arm and x86_64, I don't know why it can't be worked.
0.9.2.8 heap checker is allways enabled. It's guaranteed the heap memories are alive.
0.9.2.7 heap checker is allways enabled. It's guaranteed the heap memories are alive.
0.9.2.6 opt is ownd and heap only. DSL pipe filter with zero cost like rust.
0.9.2.5 I'm adding to zero cost iterator like rust.
0.9.2.4 refference count cycle checker is refined.
0.9.2.3 refference count cycle checker is refined.
0.9.2.2 parametor label checker.
0.9.2.1 ref, apan, opt are ok.
0.9.2.0 A bug exits in right value object automatically removed. Fixed it.
0.9.1.9 heap alive checker. stupied algorithm was removed. I learn about the knowledge of the algrorithm from gemini. span, opt, ref are maybe ok.
0.9.1.8 heap checker. changing ref, span, opt. Maybe OK.
0.9.1.7 changing ref, span, opt. Maybe OK.
0.9.1.6 changing ref, span, opt. Maybe OK.
0.9.1.5 changing ref, span, opt.
0.9.1.4 My main server is in Mac.
0.9.1.3 Mac nad linux portabilities in C source level.
0.9.1.2 Mac nad linux portabilities in C source level.
0.9.1.1 INTEL OK
0.9.1.0 INTEL OK
0.9.0.9 Mac OS test and all OK.
0.9.0.8 ISO C11 compatibilities 90%. Cycle owned heap output warning. If you remove the waring you use _weak attribute.
0.9.0.7 more compatibilities C11. opt, ref, span is implemented and test.
0.9.0.6 testing opt, ref, span. Some content it's working.
0.9.0.5 testing opt, ref. Some content it's working.
0.9.0.4 & operand bug fixed.
0.9.0.3 span bug fixed. vector bug fixed.
0.9.0.2 rawptr implemented. vector implemeted.
0.9.0.1 defer implemeted.
0.9.0.0 smart pointer removed. slice removed. ref nad optional and span is maybe stable. null checker is enable when -cg option, by the default it's disable.
0.8.9.9 ref and optional autounwrap. force to unwrap with !
0.8.9.8 span more powerfull.
0.8.9.7 span, ref, optional bug fixed. maybe bug has remained.
0.8.9.6 null checker returns.
0.8.9.5 span, ref, optional coming.
0.8.9.4 array and pointer bug fixed by codex. no warning occur in tests
0.8.9.3 char*::read() method return buffer*% 
0.8.9.2 optional and ref may be working. heap bug fixed.
0.8.9.1 span and ref bug fixed.
0.8.9.0 span implemeted at some content.
0.8.8.8 ref and optional bug fixed
0.8.8.7 ref and optional implemented. removed rawptr, removed storing field, array, loading field, array checker integrate.
0.8.8.6 storing field, array, loading field, array checker integrate.
0.8.8.5 tuple2<T,bool> can be used like Result<T>. and catch method implemented. case method bug is fixed.
0.8.8.4 slice, rawptr implemented.
0.8.8.3 smart_pointer implemented.
0.8.8.2 require borrow to asign heap object to none heap variable.
0.8.8.1 __attribute__ supported comonly.
0.8.8.0 tuple expression is now t(1,2,3). More compatibilities C lang.
0.8.7.9 Fixed bug.
0.8.7.8 maybe c++ is supported.  -cpp option. No type checking and generate code.
0.8.7.7 cpp treats module. In parser module is deleted. here documet is working.
0.8.7.6 channel variable attribute character changed from @ to |
0.8.7.5 compare method automatically defined. You can use sort method easilly.
0.8.7.4 Type checking.
0.8.7.3 Array with heap object is freed from this version. 
0.8.7.2 Remove here document. ccpp.c can't treat here document properly. In C level it's not required function, I think.
0.8.7.1 You can get if result value.
0.8.7.0 stackframe recording is allways enable. and optimize recording stackframe sysytem.
0.8.6.2 mf has serious bug of deleting file. it occurs deleting all user files. Refine neo-c and get rid of the bug.
0.8.6.1 Refine neo-c
0.8.6.0 Fine working generics and method generics. Test and fix some bugs.
0.8.5.9 Change here document spec and it's usefull.
0.8.5.8 Refine the source.
0.8.5.7 inline asm bug is fiexed.
0.8.5.6 Tested arm, x86_64 many linux distribution.
0.8.5.5 More refine Makefile to parallel compile.
0.8.5.4 Refine Makefile to parallel compile.
0.8.5.3 no trim the last line of Here Document.
0.8.5.2 tested on PICO
0.8.5.1 Fixed the bug when class not found.
0.8.5.0 The extension of neo-c is changed from .c to .nc. And compiler drivers uses shell script. and you can write # at head of line in here document.
0.8.3.0 tested on PICO
0.8.2.5 CPP has been wrritten by codex. And more compatibilities C lang. Almost C header can be work.
0.8.2.1 Refactoring
0.8.2.0 remove GC heap area. This system use calloc and free only. So you can debug with valgrind.
0.8.1.6 GC algorithm bug has been fixed. Some code can't be work maybe, but more properly heap algorith has come.
0.8.1.5 Compiletime Reflection
0.8.1.4 Compiletime Reflection
0.8.1.3 More readable output c source. And encount a bug fixed.
0.8.1.2 no type check field, variable, and function. More optimized the output C source
0.8.1.1 clang like option implemented.
0.8.1 Object initializer and number object initializer
0.8.0 Tested on x86 Fedora. There are some bugs. Fixed it.
0.7.5 Tested on some linux distributeion. all worked.
0.7.2 Linux(amd64, x86_64) tested.
0.7.1 Linux tested. Atomic supported. -std=c11 supported
0.7.0 more c compatiblities, array, pointer.
0.6.0 more c compatiblities, array, pointer.
0.5.5 more c compatiblities
0.5.2 more c compatiblities
0.5.1 more c compatiblities
0.5.0 Reborn
```

# Sample

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    int a[5] = { 3, 2, 1, 2, 5 };
    
    var li = new list<int>.initialize_with_values(5, a);
    
    var li2 = li.sort_with_lambda(int lambda(int left, int right) {
        if(left == right) {
            return 0;
        }
        else if(left < right) {
            return -1;
        }
        else {
            return 1;
        }
    });
    
    var li3 = li.filter { it < 3 }.sort().map { it.to_string() + "0" }.join("+").split("\\\+");
    
    li3.to_string().puts();
    
    "A,B,C".split(",").join("\n").puts();
    
    "A,B,C,D,E".split(",").add(s"F").join("+").to_string().puts();
    
    [1,2,3,4,5].add(6).add(3).add(2).add(10).add(9).sort().map { it.to_string() }.join("\n").to_string().puts();
    
    "ABCDEFGJHI".scan(".").map { it * 5 }.join("\n").puts();
    
    return 0;
}
```

# Language specifications

The syntax is almost the same as C language. If you do not #include <neo-c.h>, you can use it as a normal C compiler.The generated C source depends only on the standard C library, so it should work on any system that can run C.

文法はC言語とほとんど一緒です。#include <neo-c.h>をしないと普通のCコンパイラとして使えます。出力するCソースは標準Cライブラリにしか依存していないため、Cが動く環境でしたら、動くはずです。

# HELLO WORLD

```
> vim a.nc
#include <stdio.h>

int main()
{
    puts("HELLO WORLD");
    return 0;
}
> neo-c a.nc
> ./a
HELLO WORLD
```

# grammar

It is compatible with the C language. I think most C header files can be included as is.

C言語と互換性があります。大抵のCヘッダーファイルはそのままincludeできると思います。

# Libraries

The grammar library includes list, map, tuple, buffer, and string. 

ライブラリにはlist, map, tuple, buffer, stringがあります。

# list

```
#incldue <neo-c.h>

int main(int argc, char** argv)
{
    list<char*>*% li = ["AAA", "BBB", "CCC", "DDD", "EEE"];
    
    foreach(it, li.sublist(0,3)) {   // "AAA"\n"BBB"\n"CCC"
        puts(it);
    }
    
    li.add("FFF").add("GGG");
    
    foreach(it, li) {   // "AAA"\n"BBB"\n"CCC"\n"DDD"\n"EEE"\n"FFF"\n"GGG"\n
        puts(it);
    }
    
    return 0;
}
```

li.each { puts(it); } can also access all list elements, but break, continue, and return cannot be used. It is more efficient to use foreach. foreach takes the first argument as the name of the variable containing the element, and the second argument as the list.

foreach is implemented as a macro.

li.each { puts(it); }としても全てのリストの要素にアクセスできますが、break, continu, returnが使えません。foreachを使った方が効率的にもいいです。foreachは第一引数が要素が入った変数の名前、第二引数がリストとなります。

Below is an explanation of all methods.

以下は全メソッドの解説です。

```C
list<T>*% initialize(list<T>*% self);
```

A constructor. It will be called by typing new list<int>();. Internally this is new list<int>.initialize();
It is an abbreviation of

The constructor must add a % to the first argument and add 1 to the reference count. If you do not add %, it will be determined that the heap can be freed and will be automatically freed. The return value must also be marked with a % to prevent it from being released.

Write return self; at the end of the constructor. It cannot be omitted.

You can easily write constructors by using the class function described later.

コンストラクタです。new list<int>();とすれば呼び出されます。これは内部的にはnew list<int>.initialize();
の略です。

コンストラクタは第一引数に%をつけてリファレンスカウントを＋１しなければなりません。%をつけてないと解放していいヒープだと判断されて自動的にfreeされます。戻り値も%をつけて解放されないようにしないといけません。

コンストラクタの最後にはreturn self;と書いてください。略することはできません。

後述するclass機能を使えば、簡単にコンストラクタなどが記述できます。

```C
var li = new list<int>.initialize();
li.add(1).add(2).add(3);

var li2 = new list<int>();
li2.add(1).add(2).add(3);
```

```C
list<T>*% initialize_with_values(list<T>*% self, int num_value, T^* values) 
```

Creates a list initialized with an array.

配列で初期化されたリストを作成します。

```C
int values[3] = { 1, 2, 3 };

var li = new list<int>.initialize_with_values(3, values);
```

```C
void finalize(list<T>* self) 
```

It's a destructor. Called when automatically deleted or manually deleted.

デストラクターです。自動的に消去される場合、手動でdeleteする場合に呼ばれます。

```C
list<int>* li = borrow new list<int>();
li.add(1).add(2).add(3);
delete li;  // finalize is called. finalizeが呼ばれる
```

borrow removes the heap from being automatically released and allows it to be assigned to a variable without a %. In this case the heap is managed manually and memory leaks will occur if you don't delete it. If a memory leak occurs When you run the program, the number of memory leaks will be displayed.  the stack frame at the location of the source file where the heap was generated will be displayed. I think it's easy to debug.

borrowはヒープの自動解放対象から外し、%をつけない変数に代入できるようにします。この場合ヒープは手動で管理されて、deleteしないとメモリリークが発生します。 メモリリークが発生した場合プログラムを実行するとメモリリークの回数が表示されます。もしメモリリークがあるとソースファイルの位置のスタックフレームが表示されます。デバッグも容易だと思います。

```C
list<T>*% clone(list<T>* self)
```

```C
var li = [1,2,3,4,5];
var li2 = clone li;   // cloneがよばれる
```

clone is a deep copy. Elements are also recursively cloned to duplicate memory. Since li and li2 have a reference count of 1, they will be automatically deleted when they exit the scope.

If you don't want to deep copy, follow the steps below.

cloneはディープコピーです。要素も再起的にcloneされて、メモリが複製されます。liとli2はリファレンスカウントが1のためスコープを抜けると自動的に消去されます。

ディープコピーしたくない場合は以下です。

```C
var li = [1,2,3,4,5];
var li2 = li;
```

li2 refers to the same thing as li. The heap of [1,2,3,4,5] has a reference count of 2, so when li and li2 exit the scope, the reference count is -2 and becomes 0, and [1,2,3,4,5 ] will be released.

li2はliと同じものを指しています。[1,2,3,4,5]のヒープはリファレンスカウントが２のためliとli2がスコープを抜けるとその時リファレンスカウントが-2されて0になり、[1,2,3,4,5]は解放されます。

```C
var li = [1,2,3,4,5];
list<int>* li2 = borrow li;
```

In this case, li and li2 refer to the same thing, but if li2 is accessed after li is released, a segmentation fault will occur.

In most cases, you can just add a % to the pointer. Reference count GC handles this well.

From 0.8.8.2 require borrow to asign heap object to none heap variable.

この場合もliとli2は同じものをさしていますが、liが解放された後にli2にアクセスするとセグメンテーションフォルトを起します。

たいていの場合はポインタに%をつけておけば大丈夫です。リファレンスカウントGCがうまく対処してくれます。

version 0.8.8.2からnone heapのものをheapの変数に代入するにはborrowが必要になりました。

```C
list<T>* add(list<T>* self, T item)
```

```C
var li = [s"ABC", s"DEF", s"GHQ"]:
li.add(s"OPQ");
```

s"ABC" is a string type character string and is allocated on the heap. The same is true for string("ABC"). string is defined as typedef char*% string; and can also be treated as a simple char type array. So, putting(s"ABC"); will output ABC\n. In this case, the generated string will be automatically freed.

li is list<string>*%. The reference count of s"OPQ" in li.add(s"OPQ"); is incremented by 1 and it is correctly stored in li. The stored s"ABC", s"DEF", s"GHQ", and s"OPQ" are correctly freed when li is freed.

s"ABC"はstring型の文字列でヒープに確保されます。string("ABC")としても同じです。stringはtypedef char*% string;と定義されていて、単なるchar型の配列としても扱えます。なのでputs(s"ABC");とするとABC\nが出力されます。この場合生成された文字列は自動的にfreeされます。

li is list<string>*%. The reference count of s"OPQ" in li.add(s"OPQ"); is incremented by 1 and it is correctly stored in li. The stored s"ABC", s"DEF", s"GHQ", and s"OPQ" are correctly freed when li is freed.

liはlist<string>*%です。li.add(s"OPQ");のs"OPQ"はリファレンスカウントが+1されて、正しくliに格納されます。liが解放されるとき格納された、s"ABC", s"DEF", s"GHQ", s"OPQ"は正しくfreeされます。

```C
T pop_front(list<T>* self) 
```

Delete the beginning of the list. If the heap is stored, the element will be freed. If it is a non-heap pointer such as "ABC", it will not be freed.

リストの先頭を削除します。ヒープが格納されていた場合要素がfreeされます。ヒープでなく"ABC"などヒープでないポインタの場合はfreeされません。

```C
list<T>* push_back(list<T>* self, T item)
```

Same as add.

addと同じです。

```C
string to_string(list<T>* self)
```

```C
    var li = ["ABC", "DEF", "GHQ"];
    puts(li.to_string());
```

[ABC,DEF,GHQ] will be output. to_string is executed on all elements. 

li is list<char*>*%, which stores string pointers. The stored element will not be freed because it is not char*%.

[ABC,DEF,GHQ]が出力されます。要素の全てにto_stringが実行されます。

liはlist<char*>*%で文字列のポインタが格納されています。char*%ではないため格納された要素はfreeされません。

```C
T^ begin(list<T>* self) 
T^ next(list<T>* self) 
bool end(list<T>* self) 
```

Defined for foreach. Use this if you want to access all elements.

foreachのため定義されてます。すべての要素にアクセスしたい場合使います。

```C
list<T>* each(list<T>* self, void* parent, void (*block)(void*, T^,int,bool*)) 
```

```C
    var li = ["ABC", "DEF", "GHI"];
    
    li.each {
        puts(it);
    }
```

ABC\nDEF\nGHI\n will be output. Method block arguments are stored in it, it2, and it3. In this case, it contains each element. Unlike foreach, break, continue, and return cannot be executed. Returning just escapes from the method block.

ABC\nDEF\nGHI\nが出力されます。メソッドブロックはit,it2,it3にメソッドブロックの引数が格納されます。この場合itは各要素が入っています。foreachと違い、break, continue, returnは実行できません。returnするとメソッドブロックから脱出するだけです。

```C
T item(list<T>* self, int position, T default_value) 
```

```C
    var li = ["ABC", "DEF", "GHI"];
    puts(li.item(0, null)); // ABC
    puts(li.item(-1, null)); // GHI
    puts(li.item(-9999, "")); // ""
```

default_value is the value returned in case of out-of-range access. If <0, the elements counted from the back are returned.

default_valueは範囲外アクセスの場合その値が返されます。<0の場合は後方から数えた要素が返されます。

```C
int length(list<T>* self)
```

```C
    var li = [1,2,3];
    puts(li.length().to_string()); // 3
```

Returns the number of elements.

要素の数が返されます。

```C
list<T>* insert(list<T>* self, int position, T item)
```

```C
    var li = [1,2,3];
    
    li.insert(1@position, 5@item); // [1,5,2,3]
```

Add element to position. @postion is an annotation and is treated as a comment.

li should be [1,5,2,3].

要素をpositionに追加します。@postionはアノテーションでコメントとして扱われます。

liは[1,5,2,3]となるはずです。

```C
list<T>* reset(list<T>* self) 
```

```C
    var li = [1,2,3];
    
    li.reset();
    
    li.length().to_string().puts(); // 0
```

Clears the element. 0 will be output.

要素をクリアします。0が出力されます。

```C
list<T>* remove(list<T>* self, T^ item, bool by_pointer=false);
```

```C
    var li = [1,2,3];
    
    li.remove(3); // [1,2]
    
    li.to_string().puts();
```

Delete items that match item and equals.
li is [1,2].

itemとequalsがマッチするものを削除します。
liは[1,2]です。

If you add by_pointer:true to the prametor, remove the address matching object.

by_pointer:trueとするとポインタのアドレスが同じものをremoveします。



```C
list<T>* delete(list<T>* self, int head, int tail)
```

```C
    var li = [1,2,3,4,5];
    
    li.delete(3,-1); // [1,2,3]
    li.delete(0,1); // [2,3];
```

Delete what is in the range. -1 is the tail.
li is [1,2,3].

範囲に入っているものを削除します。-1は末尾です。
liは[2,3]です。

```C
list<T>* replace(list<T>* self, int position, T item)
```

```C
    var li = [1,2,3,4,5];
    
    li.replace(1, 7); // [1,7,3,4,5]
```

Replace the item.
li is [1,7,3,4,5]. If the element is a heap, the reference count of the replaced element will be -1, and if the reference count is 0, it will be deleted.

アイテムを置き換えます。
liは[1,7,3,4,5]です。要素がヒープの場合置き換える要素はリファレンスカウントが-1されて、リファレンスカウントが0なら削除されます。

```C
int find(list<T>* self, T^ item, int default_value, bool by_pointer=false)
```

```C
    var li = [1,2,3,4,5];
    
    li.find(3, -1@default_value); // 2
```

Returns the position from the beginning of the element matched by equals. In this case it is 2. default_value is the value if not found.

equalsがマッチする要素の先頭からの位置を返します。この場合2です。default_valueは見つからなかった場合の値です。

```C
vector<T>*% to_vector(list<T>* self)
```

```C
    var li = [1,2,3];
    var v = li.to_vector();
    v.to_string().puts(); // v[1,2,3]
```

Convert list to vector.

listをvectorに変換します。

```C
bool equals(list<T>* left, list<T>* right)
```

```C
    [1,2,3].equals([1,2,3]).to_string().puts(); // true
```

Checks whether the object has the same argument and content. Equals is executed for each element and returns true if it is true for all elements.

オブジェクトが引数と内容が一緒か確認します。要素ごとにequalsが実行されすべての要素で真ならtrueを返します。

```C
list<T>*% sublist(list<T>* self, int begin, int tail) 
```

```C
    [1,2,3,4,5].sublist(0,2); // [1,2]
    [1,2,3,4,5].sublist(3,-1); // [4,5]
    [1,2,3,4,5].sublist(3,-2); // [4]
```


```C
T operator_load_element(list<T>* self, int position) 
```

```C
    var li = [1,2,3,4,5];
    
    printf("%d\n", li[3]); // 4
    printf("%d\n", li[-1]); // 5
    printf("%d\n", li[-9999]); // 0
```

If the index is not found, 0 clear value returned.

もしインデックスが見つからないなら0clearされた値が返されます。

```C
void operator_store_element(list<T>* self, int position, T item) 
```

```C
    var li = [1,2,3,4,5];
    
    li[0] = 123; // [123,2,3,4,5]
```

```C
list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) 
```

```C
    var li = [1,2,3,4,5];
    
    li[0..2].to_string().puts(); // [1,2]
    li[3..-1].to_string().puts(); // [4,5]
```

```C
bool operator_equals(list<T>* self, list<T>* right) 
```

```C
    [1,2,3] === [1,2,3]; // true
    [1,2,2] === [1,2,3]; // false
```

equals is called for each element.

各要素にequalsが呼ばれます。

```C
bool operator_not_equals(list<T>* left, list<T>* right) 
```

```C
    [1,2,3] !== [1,2,3]; // false
    [1,2,2] !== [1,2,3]; // true
```

```C
bool contained(list<T>* self, T^ item, bool by_pointer=false);
```

```C
    [1,2,3].contained(3); // true
    [1,2,3].contained(4); // false
```

```C
list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T^,T^)) 
list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T^,T^)) 
list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T^,T^)) 
```

```C
    [3,7,2,5].sort_with_lambda(int lambda(int left, int right) {
        if(left < right) {
            return -1;
        }
        else if(left > right) {
            return 1;
        }
        else {
            return 0;
        }
        
        return 0;
    }); // [2,3,5,7]
```

Sort by lambda expression.

lambda式でソートします。

```C
list<T>*% merge_list(list<T>* left, list<T>* right) 
list<T>*% merge_sort(list<T>* self) 
list<T>*% sort(list<T>* self) 
```

```C
    [3,7,2,5].sort(); // [2,3,5,7]
```

ソートにはcompareメソッドが必要です。もし、ない場合は自動的に生成されます。第一フィールドのcompareが呼ばれます。

Sorting requires a compare method. If one is not present, it is generated automatically. The compare of the first
  field is used.

```C
template<R> list<R>*% map(list<T>* self, void* parent, R (*block)(void*, T^))
```

```C
    ["1","2","3"].map { atoi(it) }  // [1,2,3]
```

Executes an expression on each element and returns a list of results. 

各要素に式を実行して、その結果のリストを返します。

```C
list<T>*% reverse(list<T>* self) 
```

```C
    [1,2,3].reverse(); // [3,2,1]
```

```C
list<T>*% uniq(list<T>* self, bool by_pointer=false);
```

```C
    [8,8,2,2,3,3].uniq(); // [8,2,3]
```

Delete adjacent identical elements. It may not work unless you use sort().

隣あった同じ要素を削除します。sort()しないとダメかもしれません。

```C
list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T^))
```

```C
    [1,2,3,4,5].filter { it > 2 };  // [3,4,5]
```

Rust-like terminal helpers are also available as normal collection methods.

Rust風の終端ヘルパーも通常のコレクションメソッドとして使えます。

```C
    var li = [1,2,3,4,5].filter { it % 2 == 1 };

    li.count();                          // 3
    li.len();                            // 3
    li.is_empty();                       // false
    li.any { it == 3 };                 // true
    li.all { it < 6 };                  // true
    li.position(-1) { it == 3 };        // 1
    li.find_value(-1) { it > 3 };       // 5
    li.nth(-1, -1);                     // 5
    li.last(-1);                        // 5
    li.sum();                           // 9
    li.product();                       // 15
    li.min(-1);                         // 1
    li.max(-1);                         // 5
```

Available methods are `count`, `len`, `is_empty`, `any`, `all`, `position`, `find_value`, `nth`, `last`, `sum`, `product`, `min`, and `max`.

使えるメソッドは `count`, `len`, `is_empty`, `any`, `all`, `position`, `find_value`, `nth`, `last`, `sum`, `product`, `min`, `max` です。

For empty collections, `count()` is `0`, `any()` is `false`, `all()` is `true`, `sum()` is zero-initialized, `product()` is `1`, and the others return `default_value` when they have one.

空コレクションでは `count()` は `0`、`any()` は `false`、`all()` は `true`、`sum()` はゼロ初期化値、`product()` は `1` で、それ以外は `default_value` を受け取るものはそれを返します。

```C
list<T>*% operator_add(list<T>*% left, list<T>*% right) 
```

```C
    [1,2,3] + [4,5]; // [1,2,3,4,5]
```

```C
list<T>*% operator_mult(list<T>* left, int right) 
```

```C
    [1,2,3] * 2; // [1,2,3,1,2,3]
```

```C
string join(list<T>* self, char* sep=" ") 
```

```C
    [1,2,3].join("+");    // 1+2+3
```

# vector

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    int values[5] = { 1, 2, 3, 4, 5 };
    
    vector<int>*% v = new vector<int>.initialize_with_values(5, values);
    
    foreach(it, v[1..4]) {   // 2\n3\n4\n
        printf("%d\n", it);
    }
    
    v.add(6).add(7);
    
    foreach(it, v) {   // 1\n2\n3\n4\n5\n6\n7\n
        printf("%d\n", it);
    }
    
    return 0;
}
```

vector can also be iterated with foreach. Internally it uses begin, next, and end.

vectorもforeachで反復できます。内部的にはbegin, next, endが使われます。

vector can be written with `v[]`. `[]` is a list, and `v[]` is a vector.

vectorは`v[]`で書けます。`[]`はlistで、`v[]`はvectorです。

```C
var v = v[1,2,3];
v.to_string().puts();   // v[1,2,3]
```

Below is an explanation of all methods.

以下は全メソッドの解説です。

```C
vector<T>*% initialize(vector<T>*% self);
```

A constructor. It will be called by typing new vector<int>();. Internally this is new vector<int>.initialize();

コンストラクタです。new vector<int>();とすれば呼び出されます。これは内部的にはnew vector<int>.initialize();の略です。

```C
var v = new vector<int>.initialize();
v.add(1).add(2).add(3);

var v2 = new vector<int>();
v2.add(1).add(2).add(3);
```

```C
vector<T>*% initialize_with_values(vector<T>*% self, int num_value, T^* values)
```

Creates a vector initialized with an array.

配列で初期化されたvectorを作成します。

```C
int values[3] = { 1, 2, 3 };

var v = new vector<int>.initialize_with_values(3, values);
var v2 = v[1,2,3];
```

```C
void finalize(vector<T>* self)
```

It's a destructor. Called when automatically deleted or manually deleted.

デストラクターです。自動的に消去される場合、手動でdeleteする場合に呼ばれます。

```C
vector<int>* v = borrow new vector<int>();
v.add(1).add(2).add(3);
delete v;  // finalize is called. finalizeが呼ばれる
```

```C
vector<T>*% clone(vector<T>* self)
```

```C
var v = new vector<int>.initialize();
v.add(1).add(2).add(3);

var v2 = clone v;
```

clone is a deep copy. If T is a heap type, each element is cloned.

cloneはディープコピーです。Tがヒープ型の場合、各要素もcloneされます。

```C
vector<T>* add(vector<T>* self, T item)
```

Appends an element to the end. If the internal buffer is full, it is expanded automatically.

末尾に要素を追加します。内部バッファが足りない場合は自動的に拡張されます。

```C
var v = new vector<int>();
v.add(1).add(2).add(3);
```

```C
T item(vector<T>* self, int index, T default_value)
```

```C
int values[3] = { 10, 20, 30 };
var v = new vector<int>.initialize_with_values(3, values);

printf("%d\n", v.item(0, 0));   // 10
printf("%d\n", v.item(-1, 0));  // 30
printf("%d\n", v.item(99, -1)); // -1
```

default_value is returned for out-of-range access. Negative indexes count from the end.

default_valueは範囲外アクセスの場合に返されます。負のインデックスは末尾から数えます。

```C
bool equals(vector<T>* left, vector<T>* right)
```

```C
var v = new vector<int>();
v.add(1).add(2).add(3);

var v2 = new vector<int>();
v2.add(1).add(2).add(3);

v.equals(v2).to_string().puts();   // true
```

Checks whether the size and contents are equal. equals is executed for each element.

サイズと内容が等しいか確認します。各要素にequalsが実行されます。

```C
void replace(vector<T>* self, int index, T value)
```

```C
int values[3] = { 1, 2, 3 };
var v = new vector<int>.initialize_with_values(3, values);

v.replace(1, 7);   // v[1,7,3]
v.replace(-1, 9);  // v[1,7,9]
```

Replaces the element at index. Negative indexes are supported.

indexの要素を置き換えます。負のインデックスも使えます。

```C
int find(vector<T>* self, T^ item, int default_value)
```

```C
int values[5] = { 1, 2, 3, 4, 5 };
var v = new vector<int>.initialize_with_values(5, values);

printf("%d\n", v.find(3, -1));   // 2
printf("%d\n", v.find(99, -1));  // -1
```

Returns the first matching index. default_value is returned if not found.

最初に一致した位置を返します。見つからない場合はdefault_valueが返ります。

vector also supports the same terminal helpers as list: `count`, `len`, `is_empty`, `any`, `all`, `position`, `find_value`, `nth`, `last`, `sum`, `product`, `min`, `max`.

vector でも list と同じ終端ヘルパー `count`, `len`, `is_empty`, `any`, `all`, `position`, `find_value`, `nth`, `last`, `sum`, `product`, `min`, `max` が使えます。

```C
int values[4] = { 1, 2, 3, 4 };
var v = new vector<int>.initialize_with_values(4, values);

printf("%d\n", v.count());                    // 4
printf("%d\n", v.len());                      // 4
printf("%d\n", v.is_empty());                 // 0
printf("%d\n", v.position(-1) { it == 3 });  // 2
printf("%d\n", v.last(-1));                  // 4
printf("%d\n", v.sum());                     // 10
```

```C
int length(vector<T>* self)
```

```C
int values[3] = { 1, 2, 3 };
var v = new vector<int>.initialize_with_values(3, values);

printf("%d\n", v.length());   // 3
```

Returns the number of elements.

要素数を返します。

```C
int alloc_size(vector<T>* self)
```

```C
int values[3] = { 1, 2, 3 };
var v = new vector<int>.initialize_with_values(3, values);

printf("%d\n", v.alloc_size());
```

Returns the number of bytes currently used for stored elements. This is sizeof(T) * length().

現在格納されている要素に使われているバイト数を返します。sizeof(T) * length()です。

```C
void reset(vector<T>* self)
```

```C
int values[3] = { 1, 2, 3 };
var v = new vector<int>.initialize_with_values(3, values);

v.reset();
printf("%d\n", v.length());   // 0
```

Clears all elements and reinitializes the internal storage.

全要素をクリアし、内部ストレージを初期化し直します。

```C
T^ begin(vector<T>* self)
T^ next(vector<T>* self)
bool end(vector<T>* self)
```

Defined for foreach. Use this if you want to access all elements manually.

foreachのため定義されています。手動で全要素にアクセスしたい場合に使います。

```C
T operator_load_element(vector<T>* self, int position)
```

```C
int values[5] = { 1, 2, 3, 4, 5 };
var v = new vector<int>.initialize_with_values(5, values);

printf("%d\n", v[0]);      // 1
printf("%d\n", v[-1]);     // 5
printf("%d\n", v[9999]);   // 0
```

If the index is not found, a zero-cleared value is returned.

インデックスが見つからない場合は0クリアされた値が返されます。

```C
void operator_store_element(vector<T>* self, int index, T item)
```

```C
int values[3] = { 1, 2, 3 };
var v = new vector<int>.initialize_with_values(3, values);

v[0] = 123;   // v[123,2,3]
```

```C
vector<T>*% operator_load_range_element(vector<T>* self, int begin, int tail)
```

```C
int values[5] = { 1, 2, 3, 4, 5 };
var v = new vector<int>.initialize_with_values(5, values);

v[0..2].to_string().puts();   // v[1,2]
v[3..-1].to_string().puts();  // v[4,5]
```

Creates a new vector from the specified range. tail is exclusive. Negative indexes are supported.

指定範囲から新しいvectorを作成します。tailは含まれません。負のインデックスも使えます。

```C
bool operator_equals(vector<T>* left, vector<T>* right)
```

```C
int a[3] = { 1, 2, 3 };
int b[3] = { 1, 2, 3 };
int c[3] = { 1, 2, 4 };

var v1 = new vector<int>.initialize_with_values(3, a);
var v2 = new vector<int>.initialize_with_values(3, b);
var v3 = new vector<int>.initialize_with_values(3, c);

printf("%s\n", (v1 === v2).to_string());   // true
printf("%s\n", (v1 === v3).to_string());   // false
```

```C
bool operator_not_equals(vector<T>* left, vector<T>* right)
```

```C
int a[3] = { 1, 2, 3 };
int b[3] = { 1, 2, 4 };

var v1 = new vector<int>.initialize_with_values(3, a);
var v2 = new vector<int>.initialize_with_values(3, b);

printf("%s\n", (v1 !== v2).to_string());   // true
```

```C
vector<T>*% operator_add(vector<T>* left, vector<T>* right)
```

```C
int a[2] = { 1, 2 };
int b[2] = { 3, 4 };

var v1 = new vector<int>.initialize_with_values(2, a);
var v2 = new vector<int>.initialize_with_values(2, b);

(v1 + v2).to_string().puts();   // v[1,2,3,4]
```

Concatenates two vectors and returns a new vector.

2つのvectorを連結した新しいvectorを返します。

```C
vector<T>*% operator_mult(vector<T>* left, int n)
```

```C
int a[2] = { 1, 2 };
var v = new vector<int>.initialize_with_values(2, a);

(v * 3).to_string().puts();   // v[1,2,1,2,1,2]
```

Repeats the vector n times and returns a new vector.

vectorをn回繰り返した新しいvectorを返します。

```C
vector<T>* sort_with_lambda(vector<T>* self, int (*compare)(T^, T^))
```

```C
int values[4] = { 3, 7, 2, 5 };
var v = new vector<int>.initialize_with_values(4, values);

v.sort_with_lambda(int lambda(int left, int right) {
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
});
```

Sorts the vector in place using the given compare function.

指定したcompare関数でその場ソートします。

```C
vector<T>* sort(vector<T>* self)
```

```C
int values[4] = { 3, 7, 2, 5 };
var v = new vector<int>.initialize_with_values(4, values);

v.sort().to_string().puts();   // v[2,3,5,7]
```

Sorts the vector in place using compare.

compareを使ってその場ソートします。

```C
string to_string(vector<T>* self)
```

```C
int values[3] = { 1, 2, 3 };
var v = new vector<int>.initialize_with_values(3, values);

v.to_string().puts();   // v[1,2,3]
```

Returns a string representation. vector is displayed with the prefix v.

文字列表現を返します。vectorはvを付けて表示されます。

```C
span<T*>*% to_span(vector<T>* self)
```

```C
int values[3] = { 1, 2, 3 };
var v = new vector<int>.initialize_with_values(3, values);
var s = v.to_span();
printf("%d\n", s[1]);   // 2
```

Creates a span that references the internal buffer of the vector.

vectorの内部バッファを参照するspanを作成します。

# map

map is a dictionary.

mapは辞書です。

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    map<char*, int>*% ma = new map<char*, int>();
    
    ma.insert("AAA", 1);
    ma.insert("BBB", 2);
    ma.insert("CCC", 3);
    
    foreach(it, ma) {
        int item = ma[it];
        
        printf("element %s %d\n", it, item);
    }
    
    return 0;
}
```

```C
map<T,T2>*% initialize(map<T,T2>*% self)
```

```C
var ma = new map<char*,int>();
ma.insert("AAA", 1);
ma.insert("BBB", 2);
ma.insert("CCC", 3).insert("DDD", 4);
```

```C
map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T^* keys, T2^* values) 
```

```
    char* keys[] = { "AAA", "BBB", "CCC", "DDD" };
    int values[] = { 1, 2, 3, 4 };
    
    var ma = new map<char*,int>.initialize_with_values(4, keys, values);
```

```C
void finalize(map<T,T2>* self)
```

```C
map<T, T2>*% clone(map<T, T2>* self)
```

```
    var ma = ["AAA":1, "BBB":2, "CCC":3];
    var ma2 = clone ma;
```


```C
string to_string(map<T,T2>* self)
```

```
    ["AAA":1, "BBB":2, "CCC":3].to_string().puts();   // [AAA:1,BBB:2,CCC:3]
```

All elements and keys must implement to_string(). All basic types of neo-c have to_string() implemented. Struct will automatically define to_string method.

すべての要素とキーにto_string()が実装されている必要があります。neo-cの基本的な型はすべてto_string()が実装されてます。to_stringは構造体の場合自動的に定義されます。

```C
T2 at(map<T, T2>* self, T^ key, T2 default_value, bool by_pointer=false);
```

```
    ["AAA":1, "BBB":2, "CCC":3].at("AAA", -1).to_string().puts();  // 1
```

Takes value by key. This is the value if default_value is not found.

キーで値をとります。default_valueが見つからない場合の値です。

```C
map<T,T2>* remove(map<T, T2>* self, T key, bool by_pointer=false);
```

```
    var ma = ["AAA":1, "BBB":2, "CCC":3].remove("AAA");
    ma.to_string().puts();   // [BBB:2, CCC:3]
```

Delete value by key.

キーで値を削除します。

```C
T^ begin(map<T, T2>* self)
T^ next(map<T, T2>* self) 
bool end(map<T, T2>* self) 
```

It is for foreach. To access all keys:

foreachのためにあります。すべてのキーにアクセスするには以下のようにします。

```
    var ma = ["AAA":1, "BBB":2, "CCC":3];
    
    foreach(key, ma) {
        var item = ma[key];
        
        printf("%s %d\n", key, item);
    }
```

The output is AAA 1\nBBB 2\n CCC 3\n.

map also supports the same terminal helpers, but they operate on keys.

map でも同じ終端ヘルパーが使えますが、対象は値ではなくキーです。

```C
var ma = [3:30, 1:10, 4:40];

printf("%d\n", ma.count());                    // 3
printf("%d\n", ma.len());                      // 3
printf("%d\n", ma.is_empty());                 // 0
printf("%d\n", ma.position(-1) { it == 1 });  // 1
printf("%d\n", ma.last(-1));                  // 4
printf("%d\n", ma.sum());                     // 8
```

出力はAAA 1\nBBB 2\n CCC 3\nです。

```C
void rehash(map<T,T2>* self) 
```

For internal use.

内部的に使用します。

```C
map<T,T2>* insert(map<T,T2>* self, T key, T2 item, bool by_pointer=false);
map<T,T2>* put(map<T,T2>* self, T key, T2 item, bool by_pointer=false);
```

```
    var ma = ["AAA":1].insert("BBB",2).insert("CCC",3);
    ma.to_string().puts(); // [AAA:1,BBB:2,CCC:3]
```

```C
T2 operator_load_element(map<T, T2>* self, T^ key) 
```

```
    var ma = ["AAA":1,"BBB":2,"CCC":3];
    var item = ma["AAA"];
    item.to_string().puts(); // 1
```

If the key is not found, zero clear value is returned.

キーが見つからない場合0クリアされた値が返されます。

```C
void operator_store_element(map<T, T2>* self, T key, T2 item) 
```

```
    var ma = ["AAA":1, "BBB":2];
    ma["CCC"] = 3;
    ma.to_string().puts(); // [AAA:1,BBB:2,CCC:3]
```

```C
bool equals(map<T, T2>* left, map<T, T2>* right)
```

```
    ["AAA":1,"BBB":2,"CCC":3].equals(["AAA":1,"BBB":2,"CCC":3]); // true
    ["AAA":1].equals(["BBB":2]); // false
```

```C
bool operator_equals(map<T, T2>* left, map<T,T2>* right) 
```

```
    ["AAA":1,"BBB":2,"CCC":3] === ["AAA":1,"BBB":2,"CCC":3]; // true
    ["AAA":1] === ["BBB":2]; // false
```

```C
bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) 
```

```
    ["AAA":1,"BBB":2,"CCC":3] !== ["AAA":1,"BBB":2,"CCC":3]; // false
    ["AAA":1] !== ["BBB":2]; // true
```

```C
bool find(map<T, T2>* self, T^ key, bool by_pointer=false);
```

```
    ["AAA":1, "BBB":2].find("AAA"); // true;
    ["AAA":1, "BBB":2].find("CCC"); // false;
```

Returns true if the key is included.

キーが含まれればtrueを返します。

```C
map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right) 
```

```
    (["AAA":1] + ["BBB":2]).to_string().puts(); // [AAA:1,BBB:2]
```

```C
map<T,T2>*% operator_mult(map<T,T2>* left, int right) 
```

```
    (["AAA":1] * 2).to_string().puts(); // [AAA:1,AAA:1]
```

```C
list<T>*% keys(map<T, T2>* self)
```

```
    ["AAA":1, "BBB":2, "CCC":3].keys().to_string().puts();  // [AAA,BBB,CCC]
```

```C
list<T2>*% values(map<T, T2>* self) 
```

```
    ["AAA":1, "BBB":2, "CCC":3].values().to_string().puts();  // [1,2,3]
```

```C
vector<T>*% to_vector(map<T, T>* self)
```

```C
    var ma = [1:10, 2:20, 3:30];
    ma.to_vector().to_string().puts(); // v[1,10,2,20,3,30]
```

Flatten map entries into vector as `key, item, key, item, ...`.

mapの要素を`key, item, key, item, ...`の順でvectorに展開します。
keyとitemの型は同じである必要があります。

# tuple

A tuple is a collection of elements of different types. It may be called a simple structure.

タプルは型の違う要素を持つコレクションです。簡易的な構造体と呼べるかもしれません。

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    tuple3<int, int, char*>*% tu = new tuple3<int, int, char*>(1, 2, "ABC");
    
    printf("%d %d %s\n", tu.v1, tu.v2, tu.v3);
    
    return 0;
}
```

Up to 5 tuples are defined.

tupleは5つまで定義されてます。

```
    tuple5<int,int,int,string,char*>*% tu = t(1,2,3,s"ABC","DEF");
    
    tu.to_string().puts(); // (1,2,3,ABC,DEF)
```

int, bool have the same meaning as tuple2<int, bool>*%. Used to return multiple values. When you want to store multiple values in each variable, you can use var a,b = div(1,1); Int is placed in a and bool is placed in b.

To access the element, use v1 etc.

int, boolは`tuple2<int, bool>*%`と同じ意味です。複数の値を返すために使います。複数の値を各変数に格納したい時、個の場合はvar a,b = div(1,1);とすればいいです。aにint, bにboolが入ります。

要素にアクセスするにはv1などとします。

```
    var tu = t(1,2,"ABC");
    
    tu.v1 === 1; // true
    tu.v2 === 2; // true
    tu.v3 === "ABC"; // true
```

`tup: int, string`は`tuple2<int,string>*%`と同じです。`list<tuple2<int,string>*%>*%`の代わりに`list<int, string>*%`は使えませんが、`list<tup:int,string>*%`は使えます。

`tup: int, string` is the same as `tuple2<int,string>*%`. You cannot use `list<int, string>*%` instead of `list<tuple2<int,string>*%>*%`, ​​but you can use `list<tup:int,string>*%`.

Tuples also have fixed-size helpers.

tuple にも固定長ヘルパーがあります。

```
    t(1, 2, 3).len();     // 3
    t(1, 2, 3).count();   // 3
```

# buffer

Buffer is memory that can be appended. Expression of buffer is b"".

bufferは追記できるメモリーです。

bufferの値の表現はb""です。

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    buffer*% buf = new buffer();
    
    buf.append_str("ABC");
    buf.append_str("DEF");
    
    puts(buf.to_string()));
    
    buffer*% buf2 = new buffer();
    
    buf2.append_int(1);
    buf2.append_int(2);
    buf2.append_int(3);
    
    int* p = buf2.head_pointer();
    
    printf("%d\n", *p);  // 1
    p++;
    printf("%d\n", *p);  // 2
    p++;
    printf("%d\n", *p);  // 3
    
    return 0;
}
```

```C
buffer*% buffer*::initialize(buffer*% self);
```

```
    var buf = new buffer();
```

```C
void buffer*::finalize(buffer* self);

buffer*% buffer*::clone(buffer* self);
```

```
    var buf = new buffer();
    buf.append_int(1);
    buf.append_int(2);
    buf.append_int(3);
    
    var buf2 = clone buf;
```

```C
int buffer*::length(buffer* self);
```

```
    var buf = new buffer();
    buf.append_char('a');
    buf.append_char('b');
    buf.append_char('c');
    
    buf.length().to_string().puts(); // 3
```

Returns the number of bytes of memory.

メモリーのバイト数を返します。

```C
void buffer*::reset(buffer* self);
```

```
    var buf = new buffer();
    
    buf.append_char('a');
    buf.append_char('b');
    buf.append_char('c');
    
    buf.reset();
    
    buf.length().to_string().puts(); // 0
```

Clear memory.

メモリーをクリアします。

```C
void buffer*::trim(buffer* self, int len);
```

Delete trailing memory by len.

lenだけ末尾のメモリを削除します。

```
    var buf = new buffer();
    
    buf.append_str("ABCDEFG");
    buf.trim(3);
    buf.to_string().puts(); // ABCD
```

```C
buffer* buffer*::append(buffer* self, char* mem, size_t size);
```

Add memory by mem size.

memのsizeだけメモリを追加します。

```
    var buf = new buffer();
    buf.append("ABCDEFG", 2);
    
    buf.to_string().puts(); // AB
```

```C
buffer* buffer*::append_char(buffer* self, char c);
buffer* buffer*::append_str(buffer* self, char* str);
buffer* buffer*::append_nullterminated_str(buffer* self, char* str);
buffer* buffer*::append_int(buffer* self, int value);
buffer* buffer*::append_long(buffer* self, long value);
buffer* buffer*::append_short(buffer* self, short value);
```

Add memory.

メモリーを追加します。

```C
buffer* buffer*::alignment(buffer* self);
```

Align memory.

メモリーのアライメントを取ります。

```C
int buffer*::compare(buffer* left, buffer* right);
```

Compare the buffer sizes. <0 means smaller on the left, >0 means smaller on the right. == 0 and have the same size.
Used in sort.

bufferの大きさを比べます。<0で左が小さい、>0で右が小さい。== 0で同じ大きさです。
sortで使います。

```C
buffer*% string::to_buffer(char* self);
buffer*% char*::to_buffer(char* self);
```

Convert string to buffer.

文字列をbufferに変換します。

```
    var buf = "ABCDEFG".to_buffer();
    buf.append_str("HIJ");
    
    buf.to_string().puts(); // ABCDEFGHIJ
```

```C
string buffer*::to_string(buffer* self);
```

Convert buffer to string.

bufferを文字列に変換します。

```C
static inline buffer*% char[]::to_buffer(char* self, size_t len) ;
static inline buffer*% short[]::to_buffer(short* self, size_t len) ;
static inline buffer*% int[]::to_buffer(int* self, size_t len) ;
static inline buffer*% long[]::to_buffer(long* self, size_t len) ;
static inline buffer*% float[]::to_buffer(float* self, size_t len) ;
static inline buffer*% double[]::to_buffer(double* self, size_t len) ;
```

```C
    char a[4] = { 'A', 'B', 'C', '\0' };
    
    var buf = a.to_buffer(4);
    
    puts(buf.to_string()); // ABC
```

```C
static inline list<char>*% char[]::to_list(char* self, size_t len) ;
static inline list<short>*% short[]::to_list(short* self, size_t len) ;
static inline list<int>*% int[]::to_list(int* self, size_t len) ;
static inline list<long>*% long[]::to_list(long* self, size_t len) ;
static inline list<float>*% float[]::to_list(float* self, size_t len) ;
static inline list<double>*% double[]::to_list(double* self, size_t len) ;
```

```C
    int a[3] = { 3, 2, 1 };
    
    a.to_list(3).sort().each {
        printf("%d\n", it);
    }
```

# string 

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    puts(xsprintf("%d", 1 + 1));     // ==> 2
    puts(string("ABC").substring(0, 1));  // ==> "A"
    
    return 0;
}
```

```C
int string::length(char* str);
```

```
    s"ABC".length(); // 3
```

```C
int char*::length(char* str);
```

```
    "ABC".length(); // 3
```

```C
string char*::substring(char* str, int head, int tail);
string string::substring(char* str, int head, int tail);
```

```
    "ABC".substring(0,2); // AB
```

```C
string string::operator_load_range_element(char* str, int head, int tail);
string char*::operator_load_range_element(char* str, int head, int tail);
```

```
    "ABC"[0..2]; // AB
```

```C
string char*::reverse(char* str) ;
string string::reverse(char* str) ;
```

```
    "ABC".reverse();   // CBA
```

```C
string xsprintf(char* msg, ...);
```

```
    var str = xsprintf("%d+%d+%d", 1,2,3); // 1+2+3
```

```C
static inline string string::xsprintf(char* self, char* msg, ...)
static inline string char*::xsprintf(char* self, char* msg, ...)
```

```
    s"ABC".xsprintf("[%s]").puts(); // [ABC]
```

```C
static inline string int::xsprintf(int self, char* msg, ...)
```

```
    [1,2,3,4,5].item(0, -1).xsprintf("[%d]\n").puts();  // [1]
```

```C
string char*::delete(char* str, int head, int tail) ;
string string::delete(char* str, int head, int tail);
```

```
    var str = s"ABCDEFG".delete(0,1); // CDEFG
```
```C
list<string>*% string::split_char(char* self, char c) ;
list<string>*% char*::split_char(char* self, char c);
```

```C
    s"A,B,C".split_char(','); // [A,B,C]
```

path related wrapper

pathの関連のラッパー

```C
string xrealpath(char* path);
```

string version of realpath(3)

realpath(3)のstring版

```C
xrealpath("/aaa/../bbb"); // /bbb
```

Maybe.

多分。

```C
string xbasename(char* path);
```

string version of basename(3)

basename(3)のstring版

```C
string xextname(char* path);
```

return extension

拡張子を返す

```C
string xdirname(char* path);
```

return directory

ディレクトリを返す

```C
string xnoextname(char* path);
```

Returns the file name without the extension.

拡張子をとったファイル名を返す。

```C
int FILE*::write(FILE* f, char* str);
```

```
    FILE* f = fopen("AAA", "a");
    
    f.write("ABC");
    
    f.fclose();
```

I just made it object oriented.

オブジェクト指向っぽくしただけ。

```C
string FILE*::read(FILE* f);
```

similar

同様

```C
int FILE*::fclose(FILE* f) ;
```

similar

同様。

```C
int* FILE*::fprintf(FILE* f, const char* msg, ...);
```

```
    FILE* f = fopen("AAA", "a");
    
    f.fprintf("%d\n", 1+1);
    
    f.close();
```

similar
同様

```C
list<string>*% FILE*::readlines(FILE* f);
```

```
    "AAA\nBBB\nCCC\n".write("FILE", append:true);
    
    FILE* f = fopen("FILE", "r");
    
    var li = f.readlines();
    
    li[0].puts(); // AAA
    li[1].puts(); // BBB
    li[2].puts(); // CCC
```

```C
int string::write(char* self, char* file_name, bool append=false);
int char*::write(char* self, char* file_name, bool append=false) ;

string char*::read(char* file_name) ;
string string::read(char* file_name) ;
```

```C
    "ABC".write("FILE-NAME", append:true);
    "ABC".write("FILE-NAME", append:true);
    "ABC".write("FILE-NAME", append:true);
    
    "FILE-NAME".read().puts(); // ABC\nABC\nABC
```

If append:false, no appending will be done. append:false is the parameter label. Easy to view source files.
It is also good to use true@append and annotations.

append:falseだと追記なし。append:falseはパラメーターラベル。ソースファイルが見やすい。
true@appendとアノテーションを使うのもいい。

# Default parameters, parameter labels

``` C
#include<stdio.h>

int fun(int x = 123, int y = 345, int z = 456) 
{
    printf("x %d y %d z %d\n", x, y, z);
}

struct sData 
{
    int x;
    int y;
    int z;
};

int sData*::fun(sData* self, int x = 123, int y = 345, int z = 456)
{
    self.x = x;
    self.y = y;
    self.z = z;
}

void sData*::show(sData* self)
{
    printf("x %d y %d z %d\n", self.x, self.y, self.z);
}

int main(int argc, char** argv) 
{
    fun();           // x 123 y 345 z 456 are outputed
    fun(y:2);        // x 123 y 2 z 456
    
    fun(y:1, x:3);   // x 3 y 1 z 456
    
    fun(1);          // x 1 y 345 z 456
    fun(1,2);        // x 1 y 2 z 456
    
    sData data;
    (&data).fun(1,2,3);
    (&data).show();   // x 123 y 345 z 456
    
    (&data).fun(y:2); // x 123 y 2 z 456
    (&data).show();   // x 123 y 2 z 456
    
    (&data).fun(1);
    (&data).show();   // x 1 y 345 z 456
    
    return 0;
}
```

# operator overloads

``` C
string char*::operator_mult(char* str, int n);
string string::operator_mult(char* str, int n);
bool char*::operator_equals(char* left, char* right);
bool string::operator_equals(char* left, char* right);

    "ABC" * 3  // => "ABCABCABC"
    [1,2] * 3  // => [1,2,1,2,1,2]
    "ABC" === "ABC" // => true
    "ABC !== "DEF" // => true
    [1,2] + [3] // => [1,2,3]
    
    auto ma1 = ["AAA":1, "BBB":2]
    
    xassert("map test", ma1["AAA"] == 1)
    ma1["CCC"] = 3
```

``` C
+ operator_add
- operator_sub
* operator_mult
/ operator_div
% operator_mod
=== operator_equals
!== operator_not_equals
> operator_gt
>= operator_gteq
< operator_le
<= operator_leeq
[x] = y operator_store_element
[x]  operator_load_element
! operator_logical_denial
<< operator_left_shift
>> operator_right_shift
& operator_and
^ operator_xor
| operator_or
~ operator_commplement
```

# mixin-layers system

``` C
#include <stdio.h>

int fun(char* str) version 1
{
    puts(str);
    return 1;
}

int fun(char* str) version 2
{
    int n = inherit(str);

    return n + 1;
}

int fun(char* str) version 3
{
    int n = inherit(str);

    return n + 1;
}

int main()
{
    if(fun("HELLO MIXIN-LAYERS") == 3) {
        puts("OK");
    }

    return 0;
}
```

# Annotation

``` C
int fun(bool flag) 
{
    if(flag) {
        puts("TRUE");
    }
    else {
        puts("FALSE");
    }
}

int main()
{
    fun(false@flag);

    return 0;
}
```

@[a-zA-Z][a-zA-Z_0-9]* is a comment of expression.

# multiple assign

``` C
#include <neo-c.h>

int, string fun(int n, string m) 
{
    return t(n, m);
}

int main(int argc, char** argv)
{
    var n, m = fun(1, string("AAA"));
    
    printf("n %d m %s\n", n, m);
    
    return 0;
}
```

# Interface

``` C
#include <neo-c.h>

interface sBase
{
    void show();
};

struct sChildA
{
    int x;
    int y;
    int z;
    string str;
}

sChildA*% sChildA*::initialiize(sChildA*% self)
{
    self.x = 1;
    self.y = 2;
    self.z = 3;
    self.str = string("ABC");
    
    return self;
}

void sChildA*::show(sChildA* self)
{
    printf("x %d y %d z %d str %s\n", self.x, self.y, self.z, self.str);
}

struct sChildB
{
    int X;
    int Y;
    int Z;
};

sChildB*% sChildB*::initialize(sChildB*% self)
{
    self.X = 111;
    self.Y = 222;
    self.Z = 333;
    
    return self;
}

void sChildB*::show(sChildB* self)
{
    printf("X %d Y %d Z %d\n", self.X, self.Y, self.Z);
}

int main(int argc, char** argv)
{
    list<sBase*%>*% li = new list<sBase*%>();
    
    li.add(new sChildA() implements sBase);
    li.add(new sChildB() implements sBase);
    
    foreach(it, v) {
        it.show();
    }
    
    return 0;
}

```

```
#include <neo-c.h>

class sData
{
    int a;
    int b;
    
    void show() {
        puts(s"a \{self.a} b \{self.b}");
    }
}

class sData2 extends sData
{
    int c;
    
    void show() {
        puts(s"a \{self.a} b \{self.b} c \{self.c}");
    }
}

interface IShow
{
    void show();
}

int main(int argc, char** argv) 
{
    var data2 = new sData2 { a:111, b:222, c:333 };
    
    sData*% data = data2;
    
    puts(s"\{data2}");
    
    puts("interface");
    
    IShow*% idata[2];
    idata[0] = data implements IShow;
    idata[1] = data2 implements IShow;
    
    for(int i=0; i<2; i++) {
        idata[i].show();
    }
                                    
    return 0;
}
```


# Using C


# Emmbeded expression string

```
int main(int argc, char* argv)
{
    string a = s"abc";
    
    puts(a);          // abc
    
    string b = S"def";
    
    puts(b);          // def
    
    int c = 123;
    
    puts(s"c == \{c}");   // c == 123;
    
    puts(s"1 + 1 == \{1+1}");   // 1+1 == 2;
    
    return 0;
}
```

# System call errro handling like perl

```C
#include <neo-c.h>

int main(int argc, char** argv)
{
    FILE* f = fopen("NOTHING", "r") or die("file not found");
    
    return 0;
}
```
    
and or or is like perl

# method block

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    3.times {
        printf("%d\n", it);
    }
    
    return 0;
}
```

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    ["1", "2", "3"].map { atoi(it) }.filter { it > 1 }.each { it. printf("%d\n"); }
    
    return 0;
}
```

# String libraries

SEE neo-c.h. The regex engine is implemented using the standard C libraries. 

If you only want string, buffer, list, and regex helpers, you can include `neo-c-str.h`.

文字列、buffer、list、regex helperだけ使いたいなら`neo-c-str.h`だけincludeできます。

```C
#include <neo-c-str.h>
```

`neo-c-str.h` can be used without `neo-c.h`.
It provides `string`, `buffer`, `list<T>`, `xsprintf()`, substring/delete/reverse helpers, and regex-based string methods.

`neo-c-str.h`は`neo-c.h`なしでも使えます。
`string`, `buffer`, `list<T>`, `xsprintf()`, substring/delete/reverse系, regexベースの文字列メソッドを持っています。

sample

``` C
#include <neo-c.h>

int main()
{
    xassert("char_match test", "ABC".match("A"));
    xassert("char_index test", "ABC".index("B", -1) == 1);
    xassert("char_rindex test", "ABCABC".rindex("B", -1) == 4);
    xassert("char_index_regex", "ABC".index_regex("B", -1) == 1);
    xassert("char_rindex_regex", "ABCABC".rindex_regex("B", -1) == 4);

    string str = string("ABC");

    str.replace(1, 'C');

    xassert("char_replace", str === "ACC"))
    xassert("char_multiply", "ABC".multiply(2) === "ABCABC");

    xassert("char_sub", "ABC".sub("B", "C" === "ACC");

    auto li = "ABC".scan(".");

    xassert("char_scan", li[0] === "A" && li[1] === "B" && li[2] === "C");

    auto li2 = "A,B,C".split(",");

    xassert("char_split", li2[0] === "A" && li2[1] === "B" && li2[2] == "C");

    auto li3 = "A,B,C".split_char(',');

    xassert("char_split_char", li3[0] === "A" && li3[1] === "B" && li3[2] === "C");
    
    auto li4 = "A,,B,,C".split_str(",,");

    xassert("char_split_str", li4[0] === "A" && li4[1] === "B" && li4[2] === "C");
    
    xassert("char_delete", "ABC".delete(0,1) === "BC);

    xassert("wchar_substring", wstring("ABC").substring(0,1) === wstring("A"));
    
    auto li6 = "A,B,C".split_str(",");
    
    xassert("join", li6.join(" ") === "A B C");
    
    auto li7 = "A,B,C".split(",");
    
    xassert("split test", li7[0] === "A" && li6[1] === "B" && li7[2] === "C");
    xassert("rindex_regex test", "ABCABC".rindex_regex("CBA", -1) == 5);
    xassert("sub_block test", "ABCABCABC".sub_block("ABC") { string("X"); } === "XXX");
    xassert("scan_block test", "123 456 789".scan_block("[0-9][0-9][0-9]") { it.substring(0, 1); }.join("") === "147");
    
    auto li8 = "ABC".scan(".");
    
    xassert("scan test", li8[0] === "A" && li8[1] === "B" && li8[2] === "C");
    
    var bufX = "ABC".to_buffer();
    bufX.append_str("DEF");
    
    xassert("to_buffer test", bufX.to_string() === "ABCDEF");
    xassert("split block test", "ABC,DEF,GHI".split_block(",") { it.substring(0,1); }.join("") === "ADG");
    xassert("regex test", "ABC".scan(".").join("") === "ABC");
    
    xassert("regex equals test", "aaa" === "aaa");
    
    return 0;
}
```

## neo-c-str.h manual

`string`

`string` is `typedef char*% string;`.
It is a heap-managed string type.

`string`は`typedef char*% string;`です。
ヒープ管理される文字列型です。

```C
#include <neo-c-str.h>

int main()
{
    string a = xsprintf("%s %d", "value", 10);
    puts(a);
    
    return 0;
}
```

Core string helpers

```C
int char*::length(const char* str);
string char*::substring(const char* str, int head, int tail);
string char*::delete(char* str, int head, int tail);
string char*::reverse(const char* str);
string char*::printable(char* str);
string char*::sub_plain(char* self, char* str, char* replace);
```

`substring(head, tail)` supports negative indexes.
`delete(head, tail)` removes a range.
`printable()` escapes control characters for debugging.
`sub_plain()` is plain string replacement without regex.

`substring(head, tail)`は負のindexを使えます。
`delete(head, tail)`は範囲削除です。
`printable()`はデバッグ用に制御文字を見える形にします。
`sub_plain()`はregexを使わない通常の置換です。

```C
#include <neo-c-str.h>

int main()
{
    puts("ABCDE".substring(1, 4));   // BCD
    puts("ABCDE".substring(-3, -1)); // CD
    puts("ABCDE".delete(1, 3));      // ADE
    puts("ABC".reverse());           // CBA
    puts("A\tB\n".printable());      // A\tB\n
    puts("abcabc".sub_plain("ab", "XY")); // XYcXYc
    
    return 0;
}
```

Regex string helpers

```C
bool char*::match(char* self, const char* reg, bool ignore_case=false);
int char*::index_regex(const char* self, const char* reg, int default_value=-1, bool ignore_case=false);
int char*::rindex_regex(const char* self, const char* reg, int default_value=-1, bool ignore_case=false);
list<string>*% char*::scan(const char* self, const char* reg, bool ignore_case=false);
list<string>*% char*::split(const char* self, const char* reg, bool ignore_case=false);
list<string>*% char*::split_str(const char* self, const char* str);
list<string>*% char*::split_char(char* self, char c);
string char*::sub(char* self, const char* reg, const char* replace, bool global=true, bool ignore_case=false);
string char*::sub_block(char* self, const char* reg, bool global=true, bool ignore_case=false, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
list<string>*% char*::scan_block(const char* self, const char* reg, bool ignore_case=false, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
```

`scan()` returns all matches.
`split()` uses regex separators.
`split_str()` and `split_char()` use plain separators.
`sub()` uses regex replacement.
`sub_block()` and `scan_block()` let you transform each match.

`scan()`は全matchを返します。
`split()`はregex区切りです。
`split_str()`と`split_char()`は通常の区切りです。
`sub()`はregex置換です。
`sub_block()`と`scan_block()`は各matchごとに変換できます。

```C
#include <neo-c-str.h>

int main()
{
    xassert("match", "Hello123".match("[0-9]+"));
    xassert("index_regex", "abc123xyz".index_regex("[0-9]+", -1) == 3);
    xassert("rindex_regex", "ab12cd34".rindex_regex("[0-9]+", -1) == 6);
    
    var a = "A,B,C".split_str(",");
    var b = "A B\tC".split("[ \t]+");
    var c = "ABCABC".scan("ABC");
    
    xassert("split_str", a.length() == 3 && a[0] === "A" && a[2] === "C");
    xassert("split regex", b.length() == 3 && b[1] === "B");
    xassert("scan", c.length() == 2 && c[0] === "ABC");
    
    puts("abc123".sub("[0-9]+", "X")); // abcX
    puts("123 456 789".scan_block("[0-9]+") { it.substring(0, 1) }.join("")); // 147
    puts("abc123def".sub_block("[0-9]+") { s"[" + it + s"]" }); // abc[123]def
    
    return 0;
}
```

`buffer`

```C
buffer*% buffer*::initialize(buffer*% self);
buffer* buffer*::append(buffer* self, const char* mem, size_t size);
buffer* buffer*::append_str(buffer* self, const char* mem);
buffer* buffer*::append_char(buffer* self, char c);
buffer* buffer*::append_format(buffer* self, const char* msg, ...);
void buffer*::reset(buffer* self);
int buffer*::length(buffer* self);
string buffer*::to_string(buffer* self);
```

Use `buffer` when you want efficient incremental string building.

文字列を段階的に組み立てたいときは`buffer`を使います。

```C
#include <neo-c-str.h>

int main()
{
    var buf = new buffer();
    
    buf.append_str("neo");
    buf.append_char('-');
    buf.append_format("%s %d", "c", 11);
    
    xassert("buffer", buf.to_string() === "neo-c 11");
    
    buf.reset();
    buf.append_str("reset ok");
    puts(buf.to_string());
    
    return 0;
}
```

`list<T>`

`neo-c-str.h` also contains `list<T>`.
So you can use regex/string APIs without `neo-c.h` and still get `list<string>*%` results directly.

`neo-c-str.h`には`list<T>`も入っています。
そのため`neo-c.h`なしでもregex/string APIの戻り値である`list<string>*%`をそのまま使えます。

```C
#include <neo-c-str.h>

int main()
{
    var li = "A,B,C".split_str(",");
    
    foreach(it, li) {
        puts(it);
    }
    
    return 0;
}
```

`wstring`

Wide string helpers are also available.

```C
wstring wchar_t*::substring(const wchar_t* str, int head, int tail);
wstring wchar_t*::delete(wchar_t* str, int head, int tail);
wstring wchar_t*::reverse(const wchar_t* str);
wstring wchar_t*::printable(const wchar_t* str);
string wchar_t*::to_string(const wchar_t* wstr);
```

Use this when you want wide-character string slicing and conversion.

ワイド文字列の切り出しや変換に使えます。

```C
#include <neo-c-str.h>

int main()
{
    wstring ws = wstring("ABC");
    xassert("wstring", ws.substring(0, 2) === wstring("AB"));
    puts(ws.to_string());
    
    return 0;
}
```

# stackfame

```C
> vin a.nc
#include <neo-c.h>

int fun()
{
    stackframe();
    return 0;
}

int fun2()
{
    return fun();
}

int main(int argc, char** argv)
{
    fun2();
    
    return 0;
}
> neo-c a.nc
> ./a
stackframe
fun
fun2
main
```

stackframe always enabled from version 0.8.7.0.

# Template

```C
template<R> R fun(R x, R y)
{
    return x + y;
}

int main(int argc, char** argv)
{
    fun(1,2).printf("%d\n");
    
    return 0;
}
```

type inference is works.

```C
#include <neo-c.h>

int main(int argc, char** argv)
{
    [1,2,3].map { it.to_string() }.each { puts(it); }
    
    return 0;
}
```

```
#include <neo-c.h>

struct proc_alias_target {
    char*% name;
};

template<T> T first_item(list<T>* xs, T^ default_value)
{
    return xs.nth(0, default_value);
}

int main()
{
    proc_alias_target*% p = new struct proc_alias_target;
    p.name = string("x");

    var xs = new list<proc_alias_target*%>.initialize();
    xs.add(p);

    proc_alias_target*% q = first_item(xs, null);

    return q.name === "x";
}
```

# Memory leak detector

``` 
#include <neo-c.h>

void fun()
{
    int* a = borrow new int;
    *a = 123;

    printf("%d\n", *a);
}
                            
int main(int argc, char** argv) 
{
    fun();
                                    
    return 0;
}
~/neo-c # neo-c a.nc
~/neo-c # ./a
123
#1 0x3a73b3b0 (int*) a.nc 5: come_alloc_mem_from_heap_pool, come_calloc, fun, main, 
1 memory leaks. 1 alloc, 0 free.
```

# Class

```C
#include <neo-c.h>

class sData
{
    int x;
    int y;
    
    new(int x, int y)
    {
        self.x = x;
        self.y = y;
    }
    
    void show()
    {
        printf("x %d y %d\n", self.x, self.y);
    }
};

int main(int argc, char** argv)
{
    sData*% data = new sData(111, 222);
    
    data.show();
    
    return 0;
}
```

```C
#include <neo-c.h>

class sData
{
    int x;
    int y;
    
    new(int x, int y)
    {
        self.x = x;
        self.y = y;
    }
    
    void show()
    {
        printf("x %d y %d\n", self.x, self.y);
    }
};

class sData2 extends sData
{
    int z;
   
    new(int x, int y, int z)
    {
        self.x = x;
        self.y = y;
        self.z = z;
    }
};

interface sDataRun
{
    void show();
};

int main(int argc, char** argv)
{
    sData*% data = new sData(111, 222);
    
    data.show();
    
    sData2*% data2 = new sData2(1, 2, 3);
    
    data2.show();
    
    sDataRun*% inf = new sData2(1,2,3) implements sDataRun;
    
    inf.show();
    
    return 0;
}

```

```C
#include <neo-c.h>

class sData
{
    int x;
    int y;
    
    new(int x, int y)
    {
        self.x = x;
        self.y = y;
    }
    
    void show()
    {
        printf("x %d y %d\n", self.x, self.y);
    }
};

class sData2 extends sData
{
    int z;
    
    new(int x, int y, int z)
    {
        self.super(x,y);
        self.z = z;
    }
    
    void show()
    {
        self.super();
        
        printf("z %d\n", self.z);
    }
};
```

```C
#include <neo-c.h>

class sData
{
    new(int x, int y)
    {
        int self.x = x;
        int self.y = y;
    }
    
    void show()
    {
        printf("x %d y %d\n", self.x, self.y);
    }
};

int main(int argc, char** argv)
{
    sData*% data = new sData(111, 222);
    
    data.show();
    
    return 0;
}
```

# Module

```
#include <neo-c.h>

#module MModule(T)
{
    T a;
    T b;
}

class sData
{
    MModule(int);
    
    new(int a, int b) {
        self.a = a;
        self.b = b;
    }
    
    void show() {
        printf("%d %d\n", self.a, self.b);
    }
}

int main(int argc, char** argv)
{
    var data = new sData(111, 222);
    
    data.show();
    
    return 0;
}
```

# uniq

```
> vin a.h
using c
{
#include <stdio.h>
}

extern int gGlobalVar;

uniq int gGlobalVar = 777;

uniq void fun()
{
    printf("%d\n", gGlobalVar);
}
> vin a.nc
#include "a.h"

int main(int argc, char** argv)
{
    fun();
    
    return 0;
}
> vin b.nc
#include "a.h"

void fun2()
{
    fun();
}
> neo-c -c b.nc
> neo-c a.nc b.o
> ./a
777
```

uniq function and global variable added to main module.
In other module, not defined contents.

transpile with -uniq option force to write function and global variable body to the source.

# Output of standard c targeted C Source

Don't include neo-c-net.h and neo-c-pthread.h. Inlucde neo-c.h only. It depends the standard c library only. 

# Extra libraries

Please use the C language extension library. The strength of neo-c is that the C library can be used as is.

拡張ライブラリはC言語のものを使ってください。neo-cの強みはCライブラリがそのまま使える点です。

# Net libraries

See neo-c-net.h

It's very slow the transpile.

For `neo-c-net.h`, use normal loops with `begin()`, `next()`, and `end()` like `webweb`.
The old backtick zero cost iterator style is no longer the recommended API here.

ネットワークAPIは`neo-c-net.h`をincludeして使います。
`webweb` と同じように `begin()`, `next()`, `end()` を使う普通のループで扱ってください。
backtick の zero cost iterator スタイルは、この用途では前提にしません。

```C
#include <neo-c-net.h>
```

Available APIs

利用できるAPI

```C
server_socket_iterator*% server_socket(int port=8080, int socket_family=AF_INET, int socket_type=SOCK_STREAM, int protocol=0, bool reuse=false);
client_socket_iterator*% client_socket(int port=8080, char* address="127.0.0.1");
string client_socket2(int port, const char* data, const char* address="127.0.0.1");
httpd_socket_iterator*% httpd_socket(int port=8080, int socket_family=AF_INET, int socket_type=SOCK_STREAM, int protocol=0, bool reuse=false);
httpsd_socket_iterator*% httpsd_socket(int port=443, bool reuse=false);
```

Use these APIs with explicit loops.

明示的なループで使います。

```C
var server = httpd_socket(port:8080, reuse:true);

for(var it = server.begin(); !server.end(); it = server.next()) {
    char buf[1024] = { 0 };
    int size = read(it, buf, 1023);
    
    if(size <= 0) {
        continue;
    }
    
    const char* response =
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/plain\r\n"
        "\r\n"
        "hello\n";
    
    write(it, response, strlen(response));
}
```

`webweb/main.nc` uses this same style for both HTTP and HTTPS servers.

`webweb/main.nc` でも HTTP/HTTPS の両方でこの形を使っています。

## neo-c-net.h manual

`socket_fd`

`socket_fd` is `typedef int socket_fd;`.
`socket_fd::write(string)` is a shortcut of `write(fd, str, str.length())`.

`socket_fd`は`typedef int socket_fd;`です。
`socket_fd::write(string)`は`write(fd, str, str.length())`の短縮です。

`server_socket()`

This is for stateful TCP servers.
The first iteration accepts one connection.
After that, `next()` returns the same socket again unless you call `server.reconnect()`.
Use this when you want to keep one client session and explicitly accept the next client only after disconnect or protocol end.

状態を持つTCPサーバです。
最初の反復で1接続acceptします。
その後は`server.reconnect()`を呼ばない限り、`next()`でも同じsocketが返ります。
1クライアントを継続的に処理し、切断時だけ次のacceptに進みたいときに使います。

```C
#include <neo-c-net.h>

int main()
{
    var server = server_socket(port:3366, reuse:true);
    
    for(var it = server.begin(); !server.end(); it = server.next()) {
        char buf[1024] = { 0 };
        int size = read(it, buf, 1023);
        
        if(size <= 0) {
            server.reconnect();
            continue;
        }
        
        buf[size] = '\0';
        
        if(strcmp(buf, "exit") == 0) {
            break;
        }
        
        it.write(xsprintf("echo: %s\n", buf));
    }
    
    return 0;
}
```

`client_socket()`

This opens one TCP client connection.
`begin()` connects once and returns the socket.
`next()` returns the same socket, so `break` is usually useful.

1回TCP接続を開くクライアントです。
`begin()`で1回connectしてsocketを返します。
`next()`でも同じsocketが返るので、通常は`break`を使います。

```C
#include <neo-c-net.h>

int main()
{
    var client = client_socket(port:3366);

    for(var it = client.begin(); !client.end(); it = client.next()) {
        it.write(s"ping");
        
        char buf[1024] = { 0 };
        int size = read(it, buf, 1023);
        
        if(size > 0) {
            buf[size] = '\0';
            puts(buf);
        }

        break;
    }
    
    return 0;
}
```

`client_socket2()`

This is a simple helper.
It connects, writes all `data`, reads one response, closes the socket, and returns the response string.

簡易ヘルパです。
connectして、`data`を全部writeして、1回readして、socketを閉じて、その応答文字列を返します。

```C
string result = client_socket2(3366, "ping");
puts(result);
```

`httpd_socket()`

This is for simple HTTP servers.
Each iteration accepts a new client socket.
`next()` closes the current client and accepts the next one.

単純なHTTPサーバ向けです。
各反復ごとに新しいclient socketをacceptします。
`next()`では現在のclientを閉じて次をacceptします。

```C
#include <neo-c-net.h>

int main()
{
    var server = httpd_socket(port:8080, reuse:true);

    for(var it = server.begin(); !server.end(); it = server.next()) {
        char data[2048] = { 0 };
        int size = read(it, data, 2047);
        
        if(size <= 0) {
            continue;
        }
        
        const char* response =
            "HTTP/1.1 200 OK\r\n"
            "Content-Type: text/plain\r\n"
            "\r\n"
            "OK\n";
        
        write(it, response, strlen(response));
    }
    
    return 0;
}
```

`httpsd_socket()`

This is the SSL version.
Each iteration accepts one SSL connection.
You need `cert.pem` and `key.pem` in the current directory.
Use `SSL_read()` and `SSL_write()` on `it`.

SSL版です。
各反復で1つのSSL接続をacceptします。
カレントディレクトリに`cert.pem`と`key.pem`が必要です。
`it`には`SSL_read()`と`SSL_write()`を使います。

```C
#include <neo-c-net.h>

int main()
{
    var server = httpsd_socket(port:443, reuse:true);

    for(var it = server.begin(); !server.end(); it = server.next()) {
        char data[2048] = { 0 };
        int size = SSL_read(it, data, 2047);
        
        if(size <= 0) {
            continue;
        }
        
        const char* response =
            "HTTP/1.1 200 OK\r\n"
            "Content-Type: text/plain\r\n"
            "\r\n"
            "HTTPS OK\n";
        
        SSL_write(it, response, strlen(response));
    }
    
    return 0;
}
```

Use `break` when you want one-shot connect/accept behavior in these loops.

このループでは、1回だけconnect/acceptしたいなら`break`を使ってください。

# Omit return statment

```C
[1,2,3].map { return it.to_string(); }.each { puts(it); } 
    <=> [1,2,3].map { it.to_string() }.each { puts(it); ]
```

Omitting semicolon at the function block end means return statment.

# Pattern Matching

```C
#include <neo-c.h>

int main(int argc, char** argv)
{
    strcmp("A", "B").case {
        (Value < 0) { puts("Lesser");  }
        (Value == 0) { puts("Equal"); }
        (Value > 0) { puts("Greater"); }
    }
    strcmp("A", "A").case {
        (Value == 0) puts("Equal"); }
        else puts("Not Equal");
    }
    
    return 0;
}
```

```C
#include <neo-c.h>

char*% fun(int a)
{
    if(a == 0) {
        return null;
    }
    else {
        return xsprintf("%d", a);
    }
}

int main(int argc, char** argv)
{
    fun(0).elif {
        puts("null");
    }
    
    return 0;
}
```

```C
#include <neo-c.h>

char*% fun(int a)
{
    if(a == 0) {
        return null;
    }
    else {
        return xsprintf("%d", a);
    }
}

int main(int argc, char** argv)
{
    fun(1).if {
        puts(Value);
    }
    
    return 0;
}
```

```C
#include <neo-c.h>

int fun()
{
    return 0;
}

int fun2()
{
    return -1;
}

int main(int argc, char** argv)
{
    fun().less {
        puts("ERR");
        return 1;
    }
    fun2().less {
        puts("ERR");
        return 1;
    }
    
    return 0;
}
```

Pattern matching can have the result when the last line without semicolon

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    char buf[16];
    
    FILE* f = fopen("NOTHING", "r").elif {
        fopen("01main.c", "r")
    }
    
    int n = fread(buf, 1, 16, f);
    
    buf[n] = '\0';
    
    puts(buf);
    
    f.fclose();
    
    return 0;
}
```

if statment is also can have the result when the last line without semicolon

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    int n = if(1) { 777 };
    
    puts(s"\{n}");
    
    return 0;
}
```

# Reflection

```
defined(ID)
is_static(ID)
is_heap(ID)
is_const(ID)
is_uniq(ID)
is_type(ID)
type(ID)
param_types(ID, NUM)
num_param_types(ID)
num_fields(ID)
field_types(ID, NUM)
type(ID)
puts(STR)
is_inline(ID)
is_struct(ID)
is_union(ID)
is_enum(ID)
is_interface(ID)
is_generics(ID)
is_module(ID)
undef(ID)
```

```
#include <stdio.h>
#include <stdlib.h>

int fun()
{
    puts("aaa");
}

void fun2()
{
    puts("bbb");
}

static int fun4(int a, char* b)
{
    return 1;
}

static const int gUHO;

struct sData
{
    int a;
    char* b;
};

if(num_param_types(fun4) == 2) {
    if(param_types(fun4, 0) == int) {
        int a = 888;
    }
}
elif (num_fields(sData) == 2) {
    if(field_types(sData, 0) == int) {
        int a = 7;
    }
    else {
        int a = 999;
    }
}
elif (defined(fun2) && defined(fun)) {
    int a = 3;
}
else {
    int a = 2;
}

int main(void) {
    printf("a %d\n", a);
    return 0;
}
```

```
#include <stdio.h>

var a = "int a;"
var b = "int b;"
var c = "1"

if($c * 5 == 5){
    int c;
}
if($c . 1 == 11){
    int d;
}

eval "long \{$a . $b}"

int main(int argc, char** argv)
{
    printf("a %d b %d c %d d %d\n", a, b, c, d);
    
    return 0;
}
```

```
#include <stdio.h>

var a = "int a;"
var b = "int b;"
var c = "1"

struct sData
{
    int a;
    int b;
    int c;
};

if($c * 4 == 4){
    int c;
}
if($c . 1 == 11){
    int d;
}

static int** aaaa[128];

puts(is_static(type(aaaa)));

puts("HELLO REFLECTION");
puts(sizeof(sData));

int funX() { }
puts(result_type(funX));

eval "long \{$a . $b}"

int main(int argc, char** argv)
{
    printf("a %d b %d c %d d %d\n", a, b, c, d);
    printf("size %ld\n", sizeof(struct sData));
    
    return 0;
}
```

# Object initializer

```C
#include <neo-c.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    var data = new sData { a:123, b:234 };
    
    data.to_string().puts(); // new sData {a:123,b:234}
    
    return 0;
}
```

# Thread, Channel

```C
#include <neo-c.h>
#include <neo-c-pthread.h>

int fun(int a, int b)
{
    printf("%d %d\n", a, b);
    
    return 3;
}

int main(int argc, char** argv)
{
    int| a = __channel__;
    int| b = __channel__;
    
    var thread = come {
        fun(1, 2);
        a <- 111;
        a <- 222;
    }
    
    b <- 222;
    
    come_join(thread);
    
    come_poll {
        a {
            printf("a %d\n", <-a);
        }
        
        b {
            printf("b %d\n", <-b);
        }
    }
    
    return 0;
}
```

```
#include <neo-c.h>
#include <neo-c-pthread.h>

int main(int argc, char** argv)
{
    int| a = __channel__;
    int| b = __channel__;
    
    var thread = come {
        a <- 111;
        a <- 222;
    }
    var thread2 = come {
        b <- 333;
        b <- 444;
    }
    
    while(1) {
        come_poll {
            a {
                printf("a %d\n", <-a);
            }
            b {
                printf("b %d\n", <-b);
            }
            else {
                break;
            }
        }
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
```

スレッド間のデータのやり取りはグローバル変数やローカル変数で行わず全てチャネル経由で行ってください。
グローバル変数やローカル変数でやり取りするとデータの競合が起こります。

When exchanging data between threads, do not use global or local variables, but rather use channels.
Exchanging data using global or local variables will result in data conflicts.

use mutex to prevent from conflicts.

```
#include <neo-c.h>
#include <neo-c-pthread.h>

int main(int argc,char** argv)
{
    var li = new come_mutex<list<int>*%>([1,2,3]);
    
    var thread2 = come {
        li.sync() {
            it.to_string().puts();
        }
        sleep(1);
        li.sync() {
            it.to_string().puts();
        }
    }
    
    var thread = come {
        li.sync() {
            it.add(4);
        }
        li.sync() {
            it.add(5);
        }
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
```

```
#include <neo-c.h>
#include <neo-c-pthread.h>

int main(int argc,char** argv)
{
    var li = new come_mutex<list<int>*%>([1,2,3]);
    
    var thread2 = come {
        sleep(3);
        var it = li.lock();
        
        it.to_string().puts();
        
        li.unlock();
    }
    
    var thread = come {
        li.sync() {
            it.add(4);
        }
        li.sync() {
            it.add(5);
        }
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
```

```
#include <neo-c.h>
#include <neo-c-pthread.h>

int main(int argc,char** argv)
{
    var li = new come_mutex<list<int>*%>([1,2,3]);
    
    var thread2 = come {
        li.lock().to_string().puts();
        
        sleep(3);
        
        li.lock().to_string().puts();  // on_drop call unlock()
    }
    
    var thread = come {
        li.lock().add(4); // on_drop call unlock()
        li.lock().add(5); // on_drop call unlock()
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
```

```
#include <neo-c.h>
#include <neo-c-pthread.h>

int main(int argc,char** argv)
{
    var li = new come_mutex<list<int>*%>([1,2,3]);
    
    var thread2 = come {
        for(int i=0; i<10; i++) {
            li.lock().to_string().puts();
            sleep(1);
        }
    }
    
    var thread = come {
        for(int i=0; i<3; i++) {
            li.lock().add(4);
            sleep(1);
            li.lock().add(5);
            sleep(1);
            li.lock().add(6);
            sleep(1);
            li.lock().add(7);
            sleep(1);
        }
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
```

# Here document

```C
#include <neo-c.h>

int main(int argc, char** argv)
{
    int a = 123;
    printf("""
AAA
\{a}
BBB
CCC
""");
    
    return 0;
}
```

# C++

If API is C++ evironment, you can call C++ code like this.

```
c_include {# include <iostream>}
c_include {# include <list>}

int main(){
    int a = 7;
    __type__(std::list<int>) lst;

    lst.push_back(a);
    lst.push_back(2);
    lst.push_back(3);

    __c__ {
        for (int v : lst) {
            std::cout << v << std::endl;
        }
    }

    return 0;
}
```

```
c_include {# include <iostream>}
c_include {# include <list>}

int main(){
    int a = 7;
    __c__ {
    std::list<int>) lst;

    lst.push_back(a);
    lst.push_back(2);
    lst.push_back(3);

    for (int v : lst) {
        std::cout << v << std::endl;
    }
    }

    return 0;
}
```

Well, I know it's nonsense.


# Payload enum

Rust like payload enum syntax is available.

Rust風のpayload付きenumが使えます。

```C
enum Option<T> {
    Some(T),
    None,
};

var some = new Option<int>.Some(123);
var none = new Option<int>.None();

xassert("some", some.is_Some());
xassert("none", none.is_None());
xassert("payload", some.get_Some() == 123);
```

`new Type.Variant(...)` creates a value of that variant.
`is_Variant()` is generated for every variant.
`get_Variant()` is generated when the variant has one payload value.

`new Type.Variant(...)` でそのvariantの値を作れます。
`is_Variant()` は全variantに自動生成されます。
`get_Variant()` はpayloadが1つのvariantに対して自動生成されます。

# Result<T>

```
#include <neo-c.h>

FILE*, bool xfopen(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);

    if(f == NULL) {
        return t(f, true);
    }

    return t(f, false);
}

int main(int argc, char** argv)
{
    xfopen("01main.nc", mode:"r").unwrap().fclose();
    xfopen("1main.nc", mode:"r").catch {
        puts("ERR");
        return 1;
    }.fclose();

    return 0;
}
```

tuple2<T,bool> can be used like Reult<T>

Both `RESULT(T)` and `Result<T>` are available, and they mean the same thing.

`RESULT(T)` と `Result<T>` は両方使えて、意味は同じです。

`Result<T>` style helpers `is_ok()`, `is_err()`, `unwrap_or(default)`, `unwrap_or_default()`, and `expect(message)` are also available.

`Result<T>` 風の補助メソッドとして `is_ok()`, `is_err()`, `unwrap_or(default)`, `unwrap_or_default()`, `expect(message)` も使えます。

`result??` is also available for propagation. It unwraps the `Ok` value and returns an error result from the current function when `v2 == true`.
It uses `??` instead of `?` to avoid ambiguity with the conditional operator.

`result??` による伝播も使えます。`v2 == true` なら現在の関数からエラー結果を返し、そうでなければ `Ok` 側の値を取り出します。
条件演算子との曖昧さを避けるため、`?` ではなく `??` にしています。

`??` is a postfix operator.
You can use it only inside a function that returns `Result<T>` or `RESULT(T)`.
When the source result is success, `expr??` becomes the unwrapped value.
When the source result is error, the current function returns an error result immediately.

`??` は後置演算子です。
`Result<T>` または `RESULT(T)` を返す関数の中で使えます。
成功時は `expr??` が中身の値になります。
失敗時は現在の関数から直ちにエラー結果を返します。

Typical form:

典型的な書き方:

```C
Result<int> fun()
{
    int value = may_fail()??;
    return t(value + 1, false);
}
```

```C
#include <neo-c.h>

Result<FILE*> xfopen2(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);

    if(f == NULL) {
        return t(f, true);
    }

    return t(f, false);
}

Result<int> read_first_byte(const char* file_name)
{
    FILE* f = xfopen2(file_name, "r")??;
    int ch = fgetc(f);
    
    f.fclose();
    
    if(ch == EOF) {
        return t(0, true);
    }
    
    return t(ch, false);
}
```

You can also chain multiple `??` calls.

`??` は複数回つなげて使うこともできます。

```C
#include <neo-c.h>

Result<FILE*> xfopen2(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);
    
    if(f == NULL) {
        return t(NULL, true);
    }
    
    return t(f, false);
}

Result<char*> read_line2(FILE* f)
{
    char* buf = calloc(1, 128);
    
    if(fgets(buf, 128, f) == NULL) {
        free(buf);
        return t(NULL, true);
    }
    
    return t(buf, false);
}

Result<int> read_line_len(const char* file_name)
{
    FILE* f = xfopen2(file_name, "r")??;
    char* line = read_line2(f)??;
    
    int len = strlen(line);
    
    free(line);
    fclose(f);
    
    return t(len, false);
}
```

You can write it either way.

どちらの書き方でも使えます。

```
#include <neo-c.h>

RESULT(FILE*) xfopen(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);
    
    if(f == NULL) {
        return NONE(f);
    }
    
    return SOME(f);
}

int main(int argc, char** argv)
{
    xfopen("01main.nc", mode:"r")!.fclose();
    xfopen("1main.nc", mode:"r").catch {
        puts("ERR");
        return 1;
    }.fclose();
    
    return 0;
}
```

```
#include <neo-c.h>

Result<FILE*> xfopen2(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);
    
    if(f == NULL) {
        return NONE(f);
    }
    
    return SOME(f);
}

int main(int argc, char** argv)
{
    xfopen2("01main.nc", mode:"r")!.fclose();
    return 0;
}
```

# span, ref , opt

```
#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};

sData? fun()
{
    sData? p = opt new sData { a:111, b:222, c:333 };
    
    return p;
}

int main(int argc, char** argv)
{
    sData? p = fun();
    
    printf("p.a %d\n", p.a);
    
    return 0;
}
```
p.a 111

optional is owned.

```
#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};

int main(int argc, char** argv)
{
    sData? p = null;
    
    printf("p.a %d\n", p.a);
    
    return 0;
}
```
null pointer exception. self is null
stackframe
main

```
#include <neo-c.h>

int main(int argc, char** argv) 
{
    int? p = opt new int(5);
    
    printf("%d\n", *p);
                                   
    return 0;
}
```
5.



```
#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};

sData& fun()
{
    var x = new sData { a:111, b:222, c:333 };

    sData& p = ref borrow x;

    return p;
}

int main(int argc, char** argv)
{
    sData& p = fun();

    printf("p.a %d\n", p.a);

    return 0;
}
```
refferenced heap object is vanished
allocated at a.nc 14
stackframe2
main

```
#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};

int main(int argc, char** argv)
{
    var x = v[1,2,3];
    
    sData{} p = span borrow x;
    
    printf("p.a %d\n", p.a);
    
    return 0;
}
```
p.a 1
```
#include <neo-c.h>

int main(int argc, char** argv) 
{
    char*% s = string("abc");
    char{} p = span borrow s;
    
    *p = 'X';
    
    puts(p!);
                                   
    return 0;
}
```
Xbc
```
#include <neo-c.h>

int main(int argc, char** argv) 
{
    buffer*% buf = b"ABC";
    char{} p = span borrow buf;
    
    *p = 'X';
    
    puts(p!);
                                   
    return 0;
}
```
XBC

```
#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};

sData gData = { 1, 2, 3 };

sData{} fun()
{
    sData{} p = span &gData;
    
    return p;
}    

int main(int argc, char** argv) 
{
    var p = fun();
    
    printf("%d %d %d\n", p!.a, p!.b, p!.c);
                                   
    return 0;
}
```

# ZERO COST ITERATOR

neo-c has a Rust-like iterator DSL for `list<T>`, `vector<T>`, and `map<K,V>`.

Use backticks for iterator methods:

```
var li2 = [1,2,3,4,5].`iter().`filter { it % 2 == 1 }.`map { it * 10 }.`collect();
```

Basic rules:

- `iter()` starts the iterator pipeline.
- `it` is the current item inside each block.
- The source expression is evaluated only once.
- `list<T>` and `vector<T>` iterate values.
- `map<K,V>` iterates keys, not values.
- `collect()` materializes the pipeline result.
- Iterator DSL methods use backticks. Normal collection methods such as `count()` do not.

Example:

```
#include <neo-c.h>

int main(int argc, char** argv)
{
    var li = [1,2,3,4,5,6,7];
    
    var li2 = li.`iter().`filter { it > 3 }.`map { it.to_string() + "B" }.`collect();
    
    puts(li2.to_string());   // [4B, 5B, 6B, 7B]
    
    return 0;
}
```

Iterator DSL methods:

`iter()`

- Starts the pipeline.
- Available on `list<T>`, `vector<T>`, and `map<K,V>`.
- Evaluates the source once before iteration begins.

```
var li = [1,2,3].`iter().`collect();
```

`filter { ... }`

- Keeps items where the block returns `true`.

```
var li = [1,2,3,4].`iter().`filter { it % 2 == 0 }.`collect();   // [2,4]
```

`map { ... }`

- Replaces `it` with the block result.
- Use this to transform item type or value.

```
var li = [1,2,3].`iter().`map { it.to_string() + "!" }.`collect();   // [1!,2!,3!]
```

`take(n)`

- Yields only the first `n` items.

```
var li = [1,2,3,4,5].`iter().`take(3).`collect();   // [1,2,3]
```

`skip(n)`

- Skips the first `n` items, then yields the rest.

```
var li = [1,2,3,4,5].`iter().`skip(2).`collect();   // [3,4,5]
```

`take_while { ... }`

- Yields items while the block returns `true`.
- Stops at the first `false`.

```
var li = [1,2,3,4,1].`iter().`take_while { it < 4 }.`collect();   // [1,2,3]
```

`skip_while { ... }`

- Skips items while the block returns `true`.
- Once the block returns `false`, yields that item and all remaining items.

```
var li = [1,2,3,2].`iter().`skip_while { it < 3 }.`collect();   // [3,2]
```

`step_by(n)`

- Yields every `n`th item starting from index `0`.

```
var li = [1,2,3,4,5,6].`iter().`step_by(2).`collect();   // [1,3,5]
```

`cloned()`

- Clones each item before passing it to the next stage.
- Useful when you want an owned value in later stages.

```
var li = [1,2,3].`iter().`cloned().`map { it + 10 }.`collect();   // [11,12,13]
```

`copied()`

- Produces a copied item for the next stage.
- Current behavior is the same style as `cloned()` in the shipped implementation.

```
var li = [1,2,3].`iter().`copied().`map { it + 20 }.`collect();   // [21,22,23]
```

`enumerate()`

- Rebinds `it` to a tuple of `(index, value)`.
- Access fields with `it.v1`, `it.v2`, and so on.

```
var li = [10,20,30].`iter().`enumerate().`map { s"\{it.v1}:\{it.v2}" }.`collect();
// [0:10,1:20,2:30]
```

`inspect { ... }`

- Runs the block for side effects and keeps the original item flowing.

```
int sum = 0;
var li = [1,2,3].`iter().`inspect { sum += it; }.`collect();   // [1,2,3]
```

`find { ... }`

- Keeps the first item where the block returns `true`.
- Stops the pipeline after that item.
- If nothing matches, `collect()` returns an empty container.

```
var li = [1,2,3,4,5].`iter().`find { it > 3 }.`collect();   // [4]
```

`each { ... }`

- Terminal operation for side effects.
- Runs the block for each yielded item.
- Alias-style terminal similar to `for_each()`.

```
[1,2,3].`iter().`each {
    printf("%d\n", it);
};
```

`for_each { ... }`

- Terminal operation for side effects.
- Runs the block for each yielded item.

```
[1,2,3].`iter().`for_each {
    printf("%d\n", it);
};
```

`collect()`

- Terminal operation that materializes the result.
- `list<T>.`iter()...`collect()` returns `list<T2>`.
- `vector<T>.`iter()...`collect()` returns `vector<T2>`.
- `map<K,V>.`iter()...`collect()` returns `list<K2>` because map iteration flows keys.

```
var li = [1,2,3].`iter().`map { it * 2 }.`collect();   // [2,4,6]
```

`end()`

- Terminal operation that finishes the pipeline without collecting values.
- Use this when only side effects matter and you do not want a result container.

```
[1,2,3].`iter().`inspect { printf("%d\n", it); }.`end();
```

Normal collection terminal methods:

These are not backtick iterator operators. They are normal methods on `list<T>`, `vector<T>`, and `map<K,V>`, so you call them after a collection-producing step such as `filter { ... }` or `map { ... }`.

`count()`

- Returns the number of items.

```
[1,2,3,4].filter { it % 2 == 0 }.count();   // 2
```

`any { ... }`

- Returns `true` if any item matches.
- Returns `false` on an empty collection.

```
[1,2,3].any { it == 2 };   // true
```

`all { ... }`

- Returns `true` if all items match.
- Returns `true` on an empty collection.

```
[1,2,3].all { it < 4 };   // true
```

`position(default_value) { ... }`

- Returns the zero-based index of the first matching item.
- Returns `default_value` if no item matches.

```
[3,1,4].position(-1) { it == 1 };   // 1
```

`find_value(default_value) { ... }`

- Returns the first matching item itself.
- Returns `default_value` if no item matches.

```
[3,1,4].find_value(-1) { it > 3 };   // 4
```

`nth(index, default_value)`

- Returns the item at `index`.
- Negative indices count from the end.
- Returns `default_value` if out of range.

```
[10,20,30].nth(1, -1);    // 20
[10,20,30].nth(-1, -1);   // 30
```

`last(default_value)`

- Returns the last item.
- Returns `default_value` for an empty collection.

```
[10,20,30].last(-1);   // 30
```

`sum()`

- Returns the sum of all items.
- Returns `0` for an empty collection.

```
[1,2,3,4].sum();   // 10
```

`product()`

- Returns the product of all items.
- Returns `1` for an empty collection.

```
[1,2,3,4].product();   // 24
```

`min(default_value)`

- Returns the minimum item.
- Returns `default_value` for an empty collection.

```
[3,1,4,2].min(-1);   // 1
```

`max(default_value)`

- Returns the maximum item.
- Returns `default_value` for an empty collection.

```
[3,1,4,2].max(-1);   // 4
```

Notes:

- Use `it.to_string() + "B"` for string output.
- `it + "B"` is invalid because `int + string` is not allowed.
- `map<K,V>` iterator pipelines and terminal methods operate on keys.

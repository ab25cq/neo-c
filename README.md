# neo-c compiler language

version 2.0.0

```
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf(string("HO!\n") * 3);

    exit(0);
}
```

1. Compatibility for header file of C language. also using C preprocessor. Some compatibility for C Language.

2. Automatically free for heap system like Rust. GCless. Including vector, list, map, string, regex libraries.

3. Generics. method Generics, inline function, method block with type infference.

4. Mixin-layers system. You can create apllication with overlaying layers. See wi or tiny application sample included in this source code. 

5. Can be self-hosted. Try ulimit -s 132656; bash; cd self-host; bash all_build.sh. Home directory> ulimit -s 132656; bash; cd self-host; bash home_all_build.sh to install in the directory.

```
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf(string("HO!\n") * 3);

    exit(0);
}
```

1. C言語とある程度互換性があります。特にヘッダーファイルをincludeするのには問題ないでしょう。Cプリプロセッサーも動きます。

2. Rustと同じくGCを使わないヒープシステムがあります。オブジェクトは自動的にfreeされます。vector, list, map, string, regexのライブラリがあります。

3. ジェネリクス、メソッドジェネリクス、inline関数、型推論を行うメソッドブロックがあります。

4. Mixin-layersシステムを備えます。アプリケーションを実装する場合レイヤーを重ねるように簡単なアプリケーションから実装し始めて、レイヤーを重ねてアプリケーションを拡張していけます。wiとtinyというアプリケーションがソースコードに含まれているので、見てみてください。

5. セルフホストできます。ulimit -s 132656; bash; cd self-host; bash all_build.shしてみてください。ホームディレクトリにインストールする場合はulimit -s 132656; bash; cd self-host; bash home_all_build.shです。

# INSTALL

```
sudo apt-get install clang gcc make autoconf llvm-dev git libpcre3-dev gdb valgrind xctags ruby

git clone https://github.com/ab25cq/neo-c

cd neo-c

./configure --with-optimize
make
sudo make install
```

This program is tested in LLVM-3.8, LLVM-7 and LLVM-10, and x86_64, aarch64 on Debian, Raspberry PI 3B+(ARM64), iPhone(iSH, Apline Linux), Android(termux), ppc64le(Debian), s390x(Alpline Linux). 

From version 1.4.0 I success to self-host compile.$ ulimit -s 132656; bash; cd self-host; bash all_build.sh;

# CHANGELOG

2.0.0 correspond to stdarg.h. More compatibility for C language. require to include <neo-c.h>. delete xasprintf

1.4.1 fixed the bug of loading element.

1.4.0 Success to compile with self-host.

1.3.9 Corresponed s390 alpline linux.

1.3.8 Multiple dimention array has been corresponded.

1.3.7 iPhone(iSH) has been corresponeded. More gets compatiblity for C-language.

1.3.6 Unsigned value comparison has been corresponded.

1.3.5 Mac OS has been corresponded. More gets compatibility for C-Language.

1.3.2 Raspberry PI 3 1G has been corresponded(32 bit armhf is OK). 

1.3.0 Raspberry PI 4 2G has been corresponded(32 bit armhf is OK). Generics bug has been fixed. 

1.2.9 Now, a static function is internal linckage.

1.2.8 appended string.to_buffer().

1.2.7 map.rehash bug was fixed.

1.2.6 throw -D option to cpp which neo-c gets

1.2.5 more compatibility for C language

1.2.4 map collection heap bug was fixed

1.2.3 typedef bug was fixed. rename xfunction_name to ncfunction_name like xcalloc to nccalloc because readline uses xmalloc and conflicts the names.

1.2.1 rename apend_bytes --> append_nullteminated_str
1.2.0 some changes to buffer.append_str. Append buffer.append_bytes.

1.1.7 cast bug was fixed

1.1.6 some changes to buffer.append_str. Pointer increment bug was fixed.

1.1.5 map.at, list.item, vector.itemなどの戻り値がT&ではなくTを返すmap.at_clone, list.clone_item, vector.item_cloneができました。このような場合問題になってました。

```
    var item = string("sp a.txt").scan(regex!("sp (.+)")).item(1, null);
```

この場合scanの戻り値のlist<string>は右辺値なのでfreeされますが、その場合itemの戻り値もfreeされてしまいます。そのため変数itemの値は不定です。回避するためには以下のようにしてください。

```
    var item = string("sp a.txt").scan(regex!("sp (.+)")).clone_item(1, null);
```

1.1.5 I have created map.at_clone, list.clone_item, vector.item_clone where the return value of map.at, list.item, vector.item etc. returns T instead of T&. In such a case, it became a problem.

```
    var item = string("sp a.txt").scan(regex! ("sp (. +)")).item(1, null);
```

In this case, the scan return value list<string> is free because it is an rvalue, but in that case the item return value will also be freed. Therefore, the value of the variable item is undefined. To avoid it, do the following.

```
    var item = string("sp a.txt").scan(regex! ("sp (. +)")).clone_item(1, nul l);
```

1.1.3 Fixed a bug that the error line number is wrong when there is an error in the switch statement.

1.1.2 We have made important bug fixes. Fixed a bug that the struct destructor is called after releasing the field object. The fields are present when the struct destructor is called from this version.

1.1.2 重要なバグフィックスを行っています。構造体のデストラクターがフィールドのオブジェクトの解放後呼ばれてしまうバグを修正。このバージョンから構造体のデストラクターが呼ばれる時にはフィールドはちゃんと存在します。



# INTRODUCTION

* string

```
typedef char*% string;
```

Is declared. % Is the heap that is automatically freed. Generate the value as string ("aaa"). It can be passed as is to a function that takes a char * type as an argument.

```
    var str = string("ABC");

    if(strcmp(str, "ABC") == 0) {
        puts("equals");
    }
    else {
        puts("not equals");
    }
```

Because it is not a variable-length character string, the heap itself cannot be expanded. In that case, please connect with +.

```
    var str2 = string("AAA") + string("BBB");
```

If you want to use a format string, use:

```
string xsprintf(char* str, ...);
```

An example

```
    var str = string("ABC");
    var str2 = string("DEF");
    var n = 1;
    var str3 = xsprintf("%s+%s+%d", str, str2, n);
```

The methods are as follows:

```
extern string operator+(string& left, string& right);
extern string operator*(string& left, int num);

impl string
{
    extern bool equals(string& left, string& right);
    extern int length(string& str);
    extern int get_hash_key(string& value);
    extern string substring(string& str, int head, int tail);
    extern int index(string& str, char* search_str, int default_value);
    extern int rindex(string& str, char* search_str, int default_value);
    extern int index_regex(string& str, nregex reg, int default_value);
    extern int rindex_regex(string& str, nregex reg, int default_value);
    extern string&delete(string& str, int position);
    extern string& delete_range(string& str, int head, int tail);
    extern string printable(string& str);
    extern string sub(string& self, nregex reg, char* replace, list<string>?* group_strings);
    extern bool match(string& self, nregex reg, list<string>?* group_strings);
    list<string>*% scan(string& self, nregex reg);
    extern wstring to_wstring(string& self);
    string reverse(string& str);
    list<string>*% split_char(string& self, char c);
    list<string>*% split(string& self, nregex reg);

    inline int compare(string& left, string& right) {
        return strcmp(left, right);
    }
    
    extern void replace(string& self, int index, char c);
    extern char item(string& self, int index, char default_value);
    
    extern nregex to_regex(string& self);
    buffer*% to_buffer(string& self);
}
```

regex is generated as regex!(".+"). Specify options such as regex!(".+" g).

* string

```
typedef char*% string;
```

と宣言されています。%は自動的にfreeされるヒープのことです。値の生成はstring("aaa")などとします。そのままchar*型を引数にとる関数に渡せます。


```
    var str = string("ABC");

    if(strcmp(str, "ABC") == 0) {
        puts("equals");
    }
    else {
        puts("not equals");
    }
```

可変長の文字列でないため、そのヒープ自体の伸長などはできません。その場合は+で連結してください。

```
    var str2 = string("AAA") + string("BBB");
```

フォーマット文字列を使いたい場合は以下を使います。

```
string xsprintf(char* str, ...);
```

例

```
    var str = string("ABC");
    var str2 = string("DEF");
    var n = 1;
    var str3 = xsprintf("%s+%s+%d", str, str2, n);
```

メソッドには以下があります。

```
extern string operator+(string& left, string& right);
extern string operator*(string& left, int num);

impl string
{
    extern bool equals(string& left, string& right);
    extern int length(string& str);
    extern int get_hash_key(string& value);
    extern string substring(string& str, int head, int tail);
    extern int index(string& str, char* search_str, int default_value);
    extern int rindex(string& str, char* search_str, int default_value);
    extern int index_regex(string& str, nregex reg, int default_value);
    extern int rindex_regex(string& str, nregex reg, int default_value);
    extern string&delete(string& str, int position);
    extern string& delete_range(string& str, int head, int tail);
    extern string printable(string& str);
    extern string sub(string& self, nregex reg, char* replace, list<string>?* group_strings);
    extern bool match(string& self, nregex reg, list<string>?* group_strings);
    list<string>*% scan(string& self, nregex reg);
    extern wstring to_wstring(string& self);
    string reverse(string& str);
    list<string>*% split_char(string& self, char c);
    list<string>*% split(string& self, nregex reg);

    inline int compare(string& left, string& right) {
        return strcmp(left, right);
    }
    
    extern void replace(string& self, int index, char c);
    extern char item(string& self, int index, char default_value);
    
    extern nregex to_regex(string& self);
    buffer*% to_buffer(string& self);
}
```

regexはregex!(".+")などと生成します。regex!(".+"g)などとオプションを指定します。

* list

list is a bidirectional list. This is the main class of the collection. Unlike vector, random access (element retrieval by index) is slow, but insertion and concatenation are fast. Vector has the fastest random access, but in other cases you should use a list.Use it as follows.

```
    var li = new list<string>.initialize();

    li.push_back(string("AAA"));
    li.push_back(string("BBB"));
    li.push_back(string("CCC"));

    li.each {
        puts(it);
    }
```

The generated string is automatically freed when li is freed. each it is the first argument of each method block. Contains "AAA", "BBB" and "CCC".

```
impl list <T>
{
    initialize();
    finalize();
    list<T>*% clone(list<T>* self);
    void reset(list<T>* self);
    void push_back(list<T>* self, T item);
    T pop_back(list<T>* self, T default_value);
    T pop_front(list<T>* self, T default_value);
    void insert(list<T>* self, int position, T item);
    void delete(list<T>* self, int position);
    void delete_range(list<T>* self, int head, int tail);
    void replace(list<T>* self, int position, T item);
    T& item(list<T>* self, int position, T& default_value);
    T clone_item(list<T>* self, int position, T& default_value);
    void each(list<T>* self, void (*block_)(T&,int,bool*));
    list<T>*% sublist(list<T>* self, int begin, int tail);
    list<T>*% reverse(list<T>* self);
    string join(list<string>* self, char* separator);
    list<T>*% sort(list<T>* self);
    list<T>*% sort_block(list<T>* self, int (*compare)(T&,T&));
    list<T>*% uniq(list<T>* self);
    int find(list<T>* self, T& item, int default_value);
    bool equals(list<T>* left, list<T>* right);
    int length(list<T>* self);
    template <R> list<R>*% map(list<T>* self, R (*block_)(T&));
    list<T>*% filter(list<T>* self, bool (*block_)(T&))
}
```

If T & is T, and if there is% and it is subject to automatic free, add & to remove%. In other words, even if T is a heap, the move in C ++ does not occur and ownership is not passed. Is it a reference in Rust? I don't know well In the case of push_back, since the argument of T and item is T, ownership is transferred and it is the target of automatic free.The generation of list values uses macros.

```
    var li = list!("AAA", "BBB", "CCC");

    if(li.equals(list!("AAA", "BBB", "CCC")) {
        puts("true");
    }
    else {
        puts("false");
    }
```

Because li is a list <char *>, "AAA", "BBB", "CCC", etc. are not freed.Use item to access elements. For postions such as item, -1 indicates the end.

```
    var li = list!("AAA", "BBB", "CCC");

    if(strcmp(li.item(-1, null), "CCC") == 0) {
        puts("true");
    }
    else {
        puts("false");
    }
```

The null part of item is the default value, and returns null if position is out of range.It will be easy to understand with find.

```
    var li = list!("AAA", "BBB", "CCC");

    if(li.find("DDD", null) != null) {
        puts("found");
    }
    else {
        puts("not found");
    }

    var li2 = list!(1, 2, 3);

    if(li2.find(5, -1) != -1) {
        puts("found");
    }
    else {
        puts("not found");
    }
```

The sublist range does not include the index of the second argument.

```
    var li = list!("AAA", "BBB", "CCC", "DDD");

    li.sublist(0,2).each {
        puts(it);
    }
```

Output only "AAA" and "BBB".If the sublist index is <0, it indicates the index counted from the end.

```
    var li = list!("AAA", "BBB", "CCC", "DDD");

    li.sublist(2,-1).each {
        puts(it);
    }
```

Will output only "CCC" and "DDD".map is the same as Ruby etc. The type is inferred and a list of the appropriate type is returned.

```
    var li6 = list!("1", "2", "3");

    var li7 = li6.map {
        atoi(it)
    }

    xassert("list test", li7.equals(list!(1, 2, 3)));
```

neo-c is considered to be the return value if there is no; in the last executed expression. In this case, atoi (it) is returned. Since the return value of atoi (it) is int, li7 is type inferred and becomes list. xassert passes the test if the second argument is true.

* list

listは双方向リストです。コレクションの主力となるクラスです。vectorと違いランダムアクセス（indexによる要素の取り出し）遅いですが、挿入や連結などが速いです。vectorはランダムアクセスは最速ですが他の場合はlistを使っておけばいいでしょう。

以下のように使います。

```
    var li = new list<string>.initialize();

    li.push_back(string("AAA"));
    li.push_back(string("BBB"));
    li.push_back(string("CCC"));

    li.each {
        puts(it);
    }
```

生成されたstringはliがfreeされる場合に自動的にfreeされます。eachのitはeachのメソッドブロックの第一引数です。"AAA"や"BBB"や"CCC"が入ってます。

```
impl list <T>
{
    initialize();
    finalize();
    list<T>*% clone(list<T>* self);
    void reset(list<T>* self);
    void push_back(list<T>* self, T item);
    T pop_back(list<T>* self, T default_value);
    T pop_front(list<T>* self, T default_value);
    void insert(list<T>* self, int position, T item);
    void delete(list<T>* self, int position);
    void delete_range(list<T>* self, int head, int tail);
    void replace(list<T>* self, int position, T item);
    T& item(list<T>* self, int position, T& default_value);
    void each(list<T>* self, void (*block_)(T&,int,bool*));
    list<T>*% sublist(list<T>* self, int begin, int tail);
    list<T>*% reverse(list<T>* self);
    string join(list<string>* self, char* separator);
    list<T>*% sort(list<T>* self);
    list<T>*% sort_block(list<T>* self, int (*compare)(T&,T&));
    list<T>*% uniq(list<T>* self);
    int find(list<T>* self, T& item, int default_value);
    bool equals(list<T>* left, list<T>* right);
    int length(list<T>* self);
    template <R> list<R>*% map(list<T>* self, R (*block_)(T&));
    list<T>*% filter(list<T>* self, bool (*block_)(T&))
}
```

T&はTにもし、%があり自動freeの対象になる場合は&をつけることによって、%を外します。つまりTがヒープの場合もC++でいうmoveが起こらず所有権は渡されません。Rustでいうリファレンスですかね。よく知りませんが。push_backの場合Tとitemの引数がTとなっているため、所有権の移動が起こり自動freeの対象となります。

listの値の生成はマクロを使います。

```
    var li = list!("AAA", "BBB", "CCC");

    if(li.equals(list!("AAA", "BBB", "CCC")) {
        puts("true");
    }
    else {
        puts("false");
    }
```

liはlist<char*>なので"AAA", "BBB", "CCC"などはfreeされません。

要素のアクセスにはitemを使います。itemなどのpostionは-1が末尾を示します。

```
    var li = list!("AAA", "BBB", "CCC");

    if(strcmp(li.item(-1, null), "CCC") == 0) {
        puts("true");
    }
    else {
        puts("false");
    }
```

itemのnullの部分はデフォルト値で、positionが範囲外なら、nullを返します。

findで分かりやすいでしょう。

```
    var li = list!("AAA", "BBB", "CCC");

    if(li.find("DDD", null) != null) {
        puts("found");
    }
    else {
        puts("not found");
    }

    var li2 = list!(1, 2, 3);

    if(li2.find(5, -1) != -1) {
        puts("found");
    }
    else {
        puts("not found");
    }
```

sublistの範囲は第二引数のインデックスは含みません。

```
    var li = list!("AAA", "BBB", "CCC", "DDD");

    li.sublist(0,2).each {
        puts(it);
    }
```
は"AAA"と"BBB"のみ出力されます。

sublistのインデックスが<0なら末尾から数えたインデックスを示します。

```
    var li = list!("AAA", "BBB", "CCC", "DDD");

    li.sublist(2,-1).each {
        puts(it);
    }
```

は"CCC"と"DDD"のみ出力されます。

mapはRubyなどと同じです。型推論されて、適切な型のlistが返されます。

```
    var li6 = list!("1", "2", "3");

    var li7 = li6.map {
        atoi(it)
    }

    xassert("list test", li7.equals(list!(1, 2, 3)));
```

neo-cは最後に実行された式に;がないと戻り値だと判断されます。この場合atoi(it)が返されてます。atoi(it)の戻り値はintなのでli7は型推論されてlist<int>となってます。xassertは第2引数が真ならテストを成功させます。


* vector

```
impl vector<T> 
{
    initialize();
    vector<T>%* initialize_with_values(vector<T>%* self, int len, T& value);
    vector<T>%* clone(vector<T>* self);
    finalize();
    void push_back(vector<T>* self, T item);
    T pop_back(vector<T>* self, T default_value);
    T& item(vector<T>* self, int index, T& default_value);
    T clone_item(vector<T>* self, int index, T& default_value);
    void each(vector<T>* self, void (*block_)(T&,int,bool*));
    int find(vector<T>* self, T& item, int default_value);
    template <R> vector<R>*% map(vector<T>* self, R (*block_)(T&));
    bool equals(vector<T>* left, vector<T>* right);
    bool replace(vector<T>* self, int index, T value);
    int length(vector<T>* self);
    void reset(vector<T>* self);
}
```

An example

```
    var v = vector<int>.initialize();

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    var v2 = vector<int>.initialize();

    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    xassert("vector test", v.equals(v2));

    v.each {
        printf("index %d item %d\n", it2, it);
    }

    xassert("vector test2", v.item(0, -1) == 1);
```

Each of it2 has an index.The macro for generating vector values is vec!

```
    var v3 = vec!("AAA", "BBB", "CCC");
```

Etc. Vector items are faster than lists and can be accessed with O (1).

* vector

```
impl vector<T> 
{
    initialize();
    vector<T>%* initialize_with_values(vector<T>%* self, int len, T& value);
    vector<T>%* clone(vector<T>* self);
    finalize();
    void push_back(vector<T>* self, T item);
    T pop_back(vector<T>* self, T default_value);
    T& item(vector<T>* self, int index, T& default_value);
    void each(vector<T>* self, void (*block_)(T&,int,bool*));
    int find(vector<T>* self, T& item, int default_value);
    template <R> vector<R>*% map(vector<T>* self, R (*block_)(T&));
    bool equals(vector<T>* left, vector<T>* right);
    bool replace(vector<T>* self, int index, T value);
    int length(vector<T>* self);
    void reset(vector<T>* self);
}
```

サンプル。

```
    var v = vector<int>.initialize();

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    var v2 = vector<int>.initialize();

    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    xassert("vector test", v.equals(v2));

    v.each {
        printf("index %d item %d\n", it2, it);
    }

    xassert("vector test2", v.item(0, -1) == 1);
```

eachのit2にはインデックスが入っています。

vectorの値の生成のマクロはvec!です。

```
    var v3 = vec!("AAA", "BBB", "CCC");
```

などです。vectorのitemはlistより高速でO(1)でアクセスできます。


* map

```
impl map <T, T2>
{
    initialize();
    finalize();
    map<T, T2>*% clone(map<T, T2>* self);
    void each(map<T, T2>* self, void (*block_)(T&,T2&,bool*));
    void rehash(map<T,T2>* self);
    bool find(map<T, T2>* self, T& key);
    T2& at(map<T, T2>* self, T& key, T2& default_value);
    T2 at_clone(map<T, T2>* self, T& key, T2& default_value);
    void insert(map<T,T2>* self, T key, T2 item);
    bool equals(map<T, T2>* left, map<T, T2>* right);
    int length(map<T, T2>* self);
}
```

map is simple. You can store values with insert and access with at.

```
    var m1 = new map<char*, int>.initialize();

    m1.insert("AAA", 1);
    m2.insert("BBB", 2);
    m3.insert("CCC", 3);

    if(m1.at("AAA", -1) == 1) {
        puts("found");
    }

    if(m1.at("DDD", -1) == -1) {
        puts("not found");
    }
```

For insert, if the type argument is string, etc., insert will cause ownership transfer. It is automatically freed.Generating a map value is map!

```
    var m1 = map!(string("AAA"):"AAA", string("BBB"):"BBB", string("CCC"):"CCC");

    if(m1.at(string("ABC"), null) == null) {
        puts("not found");
    }
```

* map

```
impl map <T, T2>
{
    initialize();
    finalize();
    map<T, T2>*% clone(map<T, T2>* self);
    void each(map<T, T2>* self, void (*block_)(T&,T2&,bool*));
    void rehash(map<T,T2>* self);
    bool find(map<T, T2>* self, T& key);
    T2& at(map<T, T2>* self, T& key, T2& default_value);
    void insert(map<T,T2>* self, T key, T2 item);
    bool equals(map<T, T2>* left, map<T, T2>* right);
}
```

mapはシンプルです。insertで値を格納して、atでアクセスできます。

```
    var m1 = new map<char*, int>.initialize();

    m1.insert("AAA", 1);
    m2.insert("BBB", 2);
    m3.insert("CCC", 3);

    if(m1.at("AAA", -1) == 1) {
        puts("found");
    }

    if(m1.at("DDD", -1) == -1) {
        puts("not found");
    }
```

insertは型引数がstringなどであった場合insertは所有権の移動が起こります。自動的にfreeされます。

mapの値の生成はmap!です。

```
    var m1 = map!(string("AAA"):"AAA", string("BBB"):"BBB", string("CCC"):"CCC");

    if(m1.at(string("ABC"), null) == null) {
        puts("not found");
    }
```

* tuple

```
struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
}

impl tuple3 <T, T2, T3>
{
    initialize() {
    }

    bool equals(tuple3<T, T2, T3>* left, tuple3<T, T2, T3>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }
        if(!left.v2.equals(right.v2)) {
            return false;
        }
        if(!left.v3.equals(right.v3)) {
            return false;
        }

        return true;
    }
}
```

Definition of tuple. The tuple accesses the fields directly. There are only 4 tuples, so you can only make 4 tuples. You can define up to about 10 if you care.How to use

```
    var t1 = new tuple3<int, string, char*>.initialize();

    t1.v1 = 123;
    t1.v2 = string("ABC");
    t1.v3 = "DEF";
```

Etc.tuple! is the generation of tuple values. In this case, the value after tuple can be omitted.

```
    var t1 = tuple!(123, string("ABC"), "DEF");

    if(t1.equals(tuple!(123, string("ABC"), "DEF"))) {
        puts("true");
    }
```

* tuple

```
struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
}

impl tuple3 <T, T2, T3>
{
    initialize() {
    }

    bool equals(tuple3<T, T2, T3>* left, tuple3<T, T2, T3>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }
        if(!left.v2.equals(right.v2)) {
            return false;
        }
        if(!left.v3.equals(right.v3)) {
            return false;
        }

        return true;
    }
}
```

tupleの定義です。tupleはフィールドに直接アクセスします。tupleはtuple4までしかないので、４つまでしか作れません。また気が向けば、10くらいまでは定義してもいいですよ。

使い方は

```
    var t1 = new tuple3<int, string, char*>.initialize();

    t1.v1 = 123;
    t1.v2 = string("ABC");
    t1.v3 = "DEF";
```

などです。

tuple!がtupleの値の生成です。この場合tupleの後の数値は省略できます。

```
    var t1 = tuple!(123, string("ABC"), "DEF");

    if(t1.equals(tuple!(123, string("ABC"), "DEF"))) {
        puts("true");
    }
```

* buffer

Variable length string.

```
struct buffer {
    char* buf;
    int len;
    int size;
};

impl buffer 
{
    initialize();
    finalize();

    void append(buffer* self, char* mem, size_t size);
    void append_char(buffer* self, char c);
    void append_str(buffer* self, char* str);
    void append_bytes(buffer* self, char* str);

    string to_string(buffer* self);

    int length(buffer* self);

    inline int compare(buffer* left, buffer* right) {
        return strcmp(left.buf, right.buf);
    }
}

```

The definition is this. It is a variable-length character string or memory. Although it is null-terminated, it should be able to store binaries.

```
    var buf = new buffer.initialize();
    
    buf.append_str("AAA,");
    buf.append_str("BBB,");
    buf.append_str("CCC");

    buf.to_string().split(regex!(",")).each {
        puts(it);
    }
```

AAA \ nBBB \ nCCC \ n is output.

* buffer

可変長の文字列です。

```
struct buffer {
    char* buf;
    int len;
    int size;
};

impl buffer 
{
    initialize();
    finalize();

    void append(buffer* self, char* mem, size_t size);
    void append_char(buffer* self, char c);
    void append_str(buffer* self, char* str);

    string to_string(buffer* self);

    int length(buffer* self);

    inline int compare(buffer* left, buffer* right) {
        return strcmp(left.buf, right.buf);
    }
}

```

定義はこれです。可変長の文字列っていうか、メモリーです。一応null-terminatedさていますが、バイナリも格納できるはずです。

```
    var buf = new buffer.initialize();
    
    buf.append_str("AAA,");
    buf.append_str("BBB,");
    buf.append_str("CCC");

    buf.to_string().split(regex!(",")).each {
        puts(it);
    }
```

AAA\nBBB\nCCC\nが出力されます。

* Heap system

Different from Rust. It may be a bit more powerful and easier to handle, but it is a rather dangerous system. Basically the first time there will be a segmentation fault. As a debugging method, there are printf debugging, comment out debugging, or a method of adding heap generation log to memleak_debug.txt with the -gm option. printf debugging is quite useful. At this time, as a debugging method, even if it is in the middle of the function, debug it as printf (... etc. at the beginning of the line, and when debugging is completed, detect the position of the debug code as egrep ^p * .nc and erase it Good, it's a good way to use it in C and other free-indented languages, or if you have a segmentation fault, gdb, oh yeah, valgrind is also a good way to debug dynamic memory. All illegal memory accesses can be detected.I feel a little nervous, but I'm writing about the heap.The object is created by new.

```
    var a = new char[128];
```

In this case, if it is C language, it must be free (a), but in neo-c, a is freed when the life of the variable expires. When assigned to a variable, ownership is transferred.

```
    var a = new char[128];

    var b = a;

    /// can't access variable "a"
```

If you do not want to transfer ownership:

```
    char*% a = new char[128];

    strncpy(a, "ABC", 128);

    char* b = a;

    puts(a);
    puts(b);
```

If you do not add%, ownership will not be transferred. This means that ownership is not transferred unless both the lvalue and the rvalue type have%.Heaps created with rvalues are automatically freed.

```
    void fun(char* str) 
    {
        puts(str);
    }

    int main() {
        fun(string("AAA"));
    }
```

string ("AAA") generates char *%, but fun does not have char * and%, so the memory generated by string ("AAA") is automatically freed. In other words, all objects created temporarily are freed. You can do the following:

```
    var li = new list<char*>.initialize();

    li.push_back("AAA");
    li.push_back("BBB");
    li.push_back("CCC");

    li.sublist(0,1).each {
        puts(it);
    }
```

In li.sublist (0,1), list *% is generated internally, but since the first argument of each does not have%, it is free after each is executed.If you add% to a field in a structure, it will be recursively free.

```
    struct MyStruct {
        string field1;
        list<string>*% field2;
    };

    int main() {
        var a = new MyStruct;

        a.field1 = string("AAA");
        a.field2 = new list<string>.initialize();

        a.field2.push_back(string("AAA"));
        a.field2.push_back(string("BBB"));

        return 0;
    }
```

All objects are freed in this case as well. When initialize is added after new, it is a case to call the constructor. Define the constructor as follows.

```
    struct MyStruct {
        string field1;
        list<string>*% field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = string("AAA");
            self.field2 = new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        return 0;
    }
```

Objects can be deep copied by clone.

```
    struct MyStruct {
        string field1;
        list<string>*% field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = string("AAA");
            self.field2 = new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        var b = clone a;

        return 0;
    }
```

In this case, the values of field1 and field2 of a and b are the same. It is not a shallow copy, so the address is not just a copy of the address, but the content is the same.Define the method as follows:

```
    struct MyStruct {
        string field1;
        list<string>*% field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = string("AAA");
            self.field2 = new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }

        void show(MyStruct* self) {
            puts(self.field1);

            self.field2.each {
                puts(it);
            }
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        a.show();

        return 0;
    }
```

The first argument self cannot be omitted. I will also explain the definition of finalizer.

```
    struct MyStruct {
        string field1;
        list<string>*% field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = string("AAA");
            self.field2 = new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }

        finalize() {
            puts("MyStruct was freed");
        }

        void show(MyStruct* self) {
            puts(self.field1);

            self.field2.each {
                puts(it);
            }
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        a.show();

        return 0;
    }
```

A message is displayed when a is out of range. Why is there a finalizer when the structure fields are automatically freed, but for when you want the class to manage the heap of objects. It is as follows.

```
    struct MyStruct {
        char* field1;
        list<string>* field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = borrow string("AAA");
            self.field2 = borrow new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }

        finalize() {
            delete self.field1;
            delete self.field2;
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        return 0;
    }
```

This allows the class to manage the heap of objects. borrow is used to unmark the heap. Without borrow, string ("AAA") is judged to be an unnecessary object because the left side value does not have% at the time of string ("AAA"), and it is freed at that time. When managing the heap on the class side, it is useless unless clone is also defined. It is as follows.

```
    struct MyStruct {
        char* field1;
        list<string>* field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = borrow string("AAA");
            self.field2 = borrow new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }

        finalize() {
            delete self.field1;
            delete self.field2;
        }

        MyStruct%* clone(MyStruct* self) {
            var result = new MyStruct;

            result.field1 = borrow clone self.field1;
            result.field2 = borrow clone self.field2;

            return result;
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        var b = clone a;

        return 0;
    }
```

Did you feel a little sick? Well, in most cases finalize and clone should not need to be defined. Let's put a% mark on the field.By the way, if you write down the common problems with the neo-c heap system, the following are the cases.

```
    vector<string>*% fun(string str, bool flag) {
        var result = new vector<string>.initialize();

        if(flag) {
            result.push_back(str);
        }
        else {
            puts(str);
        }

        return result;
    }
```

In this case, since the ownership of str is transferred in reesult.push_back, the str of else puts (str); is invalid. The worst segmentation fault will be. This can be avoided.

```
    vector<string>*% fun(string str, bool flag) {
        var result = new vector<string>.initialize();

        if(flag) {
            result.push_back(clone str);
        }
        else {
            puts(str);
        }

        return result;
    }
```

Clone is quite convenient, and when inserting push_back or map into vector or list, it may be safer to attach clone without thinking too much.Use dummy_heap to mark a heap as a pointer with a% pointing to an existing heap, as opposed to borrow.

```
    vector<string>*% fun(string str, bool flag) {
        var result = borrow new vector<string>.initialize();

        if(flag) {
            result.push_back(clone str);
        }
        else {
            puts(str);
        }

        return dummy_heap result;
    }
```

This may be necessary when using types with and without% in Generics. Generics and heap system, but if you do not want to transfer ownership of heap in Generics, use T & etc.

```
    struct MyStruct<T> {
        char*% field1;
        list<T>%* field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = borrow string("AAA");
            self.field2 = borrow new list<T>.initialize();
        }

        T& getField2Element(MyStruct* self) {
            return self.field2.item(1, null);
        }
    }

    int main() {
        var a = new MyStruct<string>.initialize();

        a.field2.push_back(string("AAA"));
        a.field2.push_back(string("BBB"));
        a.field2.push_back(string("CCC"));

        puts(a.getField2Element());

        return 0;
    }
```

In this case, the return value of getField2Eelement is not string (char *%) but char *, so ownership transfer does not occur. If you want to determine if T is a heap type or not in Generics, use isheap (T). For example, initialize to create an element with the initial value of vecotr n is defined as follows.

```
    vector<T>%* initialize_with_values(vector<T>%* self, int len, T& value) 
    {
        self.size = len;
        self.len = len;
        self.items = borrow new T[self.size];

        for(int i=0; i<len; i++) {
            if(isheap(T)) {
                self.items[i] = borrow clone value;
            }
            else {
                self.items[i] = value;
            }
        }

        return self;
    }
```

If you set new vector.initialize_with_values (5, 128), a vector with 5 elements of 128 will be created. i] (self.items is an object managed by the class side), otherwise it is normally assigned.

* ヒープシステム

Rustとは違います。もう少し楽に扱えて強力かもしれませんが、かなり危険なシステムとなっております。基本的に最初のころはsegmentation faultが起こるでしょう。デバッグ方法としてはprintfデバッグや、コメントアウトデバッグ、または-gmオプションをつけてmemleak_debug.txtにヒープの生成のログをとらせる方法があります。printfデバッグがかなり有効です。この時デバッグ方法としては関数の途中であっても行頭にprintf(...などとしてデバッグしてデバッグが終わったらegrep ^p *.ncなどとしてデバッグコードの位置を検出して消してしまう方法がいいと思います。Cやその他フリーインデントの言語でもよく使う方法です。もしくはsegmentation faultが起こったらgdbを使うのもいいでしょう。ああ、そうそう。動的メモリーのデバッグ方法としてはvalgrindも有効です。不正なメモリアクセスすべてを検出できます。

と、ちょっと気分が萎えたと思いますが、ヒープについて書いています。

オブジェクトの生成はnewによって行います。

```
    var a = new char[128];
```

この場合C言語だとfree(a)としないといけませんが、neo-cはaは変数の寿命が消える時点でfreeされます。変数に代入された場合は所有権の移動がされます。

```
    var a = new char[128];

    var b = a;

    /// aはアクセスできない変数
```

所有権を移動させたくない場合は以下のようにします。

```
    char*% a = new char[128];

    strncpy(a, "ABC", 128);

    char* b = a;

    puts(a);
    puts(b);
```

%をつけない場合所有権は移動されません。つまり左辺値と右辺値の型両方に%がついていないと所有権は移動されないということです。

右辺値で生成されたヒープは自動的にfreeされます。

```
    void fun(char* str) 
    {
        puts(str);
    }

    int main() {
        fun(string("AAA"));
    }
```

string("AAA")でchar*%が生成されますが、funにはchar*と%がついていないため、string("AAA")で生成されたメモリーは自動的にfreeされます。つまり一時的に生成されたオブジェクトはすべてfreeされます。以下のようなことが可能です。

```
    var li = new list<char*>.initialize();

    li.push_back("AAA");
    li.push_back("BBB");
    li.push_back("CCC");

    li.sublist(0,1).each {
        puts(it);
    }
```

li.sublist(0,1)では内部でlist<char>*%が生成されていますがeachの第一引数は%がないため、eachが実行された後にfreeされます。

構造体にもフィールドに%をつければ、再帰的にfreeされます。

```
    struct MyStruct {
        string field1;
        list<string>*% field2;
    };

    int main() {
        var a = new MyStruct;

        a.field1 = string("AAA");
        a.field2 = new list<string>.initialize();

        a.field2.push_back(string("AAA"));
        a.field2.push_back(string("BBB"));

        return 0;
    }
```

この場合もすべてのオブジェクトがfreeされます。newの後にinitializeがつけた場合はコンストラクタを呼び出す場合です。以下のようにコンストラクタを定義します。

```
    struct MyStruct {
        string field1;
        list<string>*% field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = string("AAA");
            self.field2 = new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        return 0;
    }
```

オブジェクトはcloneによってディープコピーできます。

```
    struct MyStruct {
        string field1;
        list<string>*% field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = string("AAA");
            self.field2 = new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        var b = clone a;

        return 0;
    }
```

この場合aとbのfield1, field2の値は同じです。浅いコピーではないため単にアドレスのコピーではなくアドレスが違いますが内容が同じです。

メソッドの定義は以下のようにします。

```
    struct MyStruct {
        string field1;
        list<string>*% field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = string("AAA");
            self.field2 = new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }

        void show(MyStruct* self) {
            puts(self.field1);

            self.field2.each {
                puts(it);
            }
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        a.show();

        return 0;
    }
```

第一引数のselfは省略できません。ついでにファイナライザの定義も説明しておきましょう。

```
    struct MyStruct {
        string field1;
        list<string>*% field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = string("AAA");
            self.field2 = new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }

        finalize() {
            puts("MyStruct was freed");
        }

        void show(MyStruct* self) {
            puts(self.field1);

            self.field2.each {
                puts(it);
            }
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        a.show();

        return 0;
    }
```

aが範囲外になるときメッセージが表示されます。構造体のフィールドのfreeが自動的にされるのにファイナライザがあるのはなぜかですが、オブジェクトのヒープをクラス側で管理したいときのためにあります。以下のようにです。

```
    struct MyStruct {
        char* field1;
        list<string>* field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = borrow string("AAA");
            self.field2 = borrow new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }

        finalize() {
            delete self.field1;
            delete self.field2;
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        return 0;
    }
```

こうするとオブジェクトのヒープの管理がクラス側でできます。borrowはヒープのマークを消すために使用します。borrowをつけないとstring("AAA")の時点で左辺値に%がついていないためstring("AAA")が不要なオブジェクトと判断されて、その時点でfreeされてしまうためです。クラス側でヒープの管理を行う場合cloneも定義しないとダメとなります。以下のようにです。

```
    struct MyStruct {
        char* field1;
        list<string>* field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = borrow string("AAA");
            self.field2 = borrow new list<string>.initialize();

            self.field2.push_back(string("AAA"));
            self.field2.push_back(string("BBB"));
        }

        finalize() {
            delete self.field1;
            delete self.field2;
        }

        MyStruct%* clone(MyStruct* self) {
            var result = new MyStruct;

            result.field1 = borrow clone self.field1;
            result.field2 = borrow clone self.field2;

            return result;
        }
    }

    int main() {
        var a = new MyStruct.initialize();

        var b = clone a;

        return 0;
    }
```

ちょっと気分が落ちましたか？まあ、たいていの場合はfinalizeやcloneは定義せずに済むはずです。%のマークをフィールドにつけておきましょう。

ついでにneo-cのヒープシステムでよくある問題点を書いておくと以下のような場合です。

```
    vector<string>*% fun(string str, bool flag) {
        var result = new vector<string>.initialize();

        if(flag) {
            result.push_back(str);
        }
        else {
            puts(str);
        }

        return result;
    }
```

この場合strの所有権はreesult.push_backで移っているため、elseのputs(str);のstrは無効となっています。最悪segmentation faultするでしょう。こうすれば回避できます。

```
    vector<string>*% fun(string str, bool flag) {
        var result = new vector<string>.initialize();

        if(flag) {
            result.push_back(clone str);
        }
        else {
            puts(str);
        }

        return result;
    }
```

cloneはかなり便利でvectorやlistにpush_backやmapのinsertする場合はあまり何も考えずcloneをつけておくほうが無難かもしれません。

あとborrowとは逆に存在しているヒープを指し示す%がついたポインタにヒープのマークをつけるにはdummy_heapを使います。

```
    vector<string>*% fun(string str, bool flag) {
        var result = borrow new vector<string>.initialize();

        if(flag) {
            result.push_back(clone str);
        }
        else {
            puts(str);
        }

        return dummy_heap result;
    }
```

Genericsで%がついた型とそうでない型を使う場合に必要となるかもしれません。GenericsとヒープシステムですがGenericsでヒープの所有権を移動させたくない場合はT&などとします。

```
    struct MyStruct<T> {
        char*% field1;
        list<T>%* field2;
    };

    impl MyStruct {
        initialize() {
            self.field1 = borrow string("AAA");
            self.field2 = borrow new list<T>.initialize();
        }

        T& getField2Element(MyStruct* self) {
            return self.field2.item(1, null);
        }
    }

    int main() {
        var a = new MyStruct<string>.initialize();

        a.field2.push_back(string("AAA"));
        a.field2.push_back(string("BBB"));
        a.field2.push_back(string("CCC"));

        puts(a.getField2Element());

        return 0;
    }
```

この場合getField2Eelementの戻り値はstring(char*%)ではなくchar*のため所有権の移動は起こりません。GenericsでTがヒープの型か、そうでないかを判定したい場合isheap(T)を使います。例えばvecotrの初期値を持った要素をnを作るinitializeは以下のように定義されてます。
```
    vector<T>%* initialize_with_values(vector<T>%* self, int len, T& value) 
    {
        self.size = len;
        self.len = len;
        self.items = borrow new T[self.size];

        for(int i=0; i<len; i++) {
            if(isheap(T)) {
                self.items[i] = borrow clone value;
            }
            else {
                self.items[i] = value;
            }
        }

        return self;
    }
```

new vector<int>.initialize_with_values(5, 128)とすれば128の要素を5個持つvectorが作られますが、isheap(T)でTがヒープのオブジェクトの場合は、borrowしてcloneしてself.items[i]に代入して(self.itemsはクラス側で管理されるオブジェクト)そうでない場合は普通に代入してます。

* mixin-layers system

Mixin-layers is basically a system that allows you to add fields to a structure and overwrite methods. When used well, you can add functionality by layering on a small finished application. This is useful for debugging, for example, and when you rewind a layer, the app is complete, so you can rewind and debug the layer where the bug occurred.Here is an example.If the header is common.h

```
    struct MyStruct {
        string field1;
    };

    impl MyStruct {
        void show(MyStruct* self);
    }

    struct MyStruct version 2 {
        string field2;
    }

    impl MyStruct version 2 {
        void show(MyStruct* self);
    }
```

The source side of layer 1 is 01base.nc

```
    #include "common.h"

    impl MyStruct {
        void show(MyStruct* self) {
            puts(self.field1);
        }
    }
```

The source sid of layer 2 is 02extend.nc

```
    #include "common.h"

    impl MyStruct version2 {
        void show(MyStruct* self) {
            inherit(self);

            puts(self.field2);
        }
    }
```

It becomes. inherit calls the function to be overridden.Main.nc including the main function should be defined as follows.

```
    #include "common.h"

    int main()
    {
        var data = new MyStruct;

        data.show();

        return 0;
    }
```

Well, I don't think you'll be grateful in this example, but if you comment out version2 of common.h and leave 02extend.o unlinked, you can rewind the layers. In other words, the application is completed at each layer, and the first version can be made only by commenting out and modifying the Makefile. It is also useful for debugging and keeps the source simple. Works well with agile development. For example, in the case of VM development, create a layer that moves 1 + 1 for the time being, and add layers for assigning variables, defining functions, and calling functions to it while maintaining the simplicity of the source and ease of debugging I can go. The difference from the module division is that the application is completed in each layer. No matter how complex the application, the first layers will remain simple. Take a look as the application includes a console editor called wi and a VM called tiny as examples.

* mixin-layersシステム

mixin-layersは要するに構造体へのフィールドの追加や、メソッドの上書きを認めるシステムです。上手に使うと小さな完成したアプリケーションにレイヤーを重ねるようにして、機能追加していけます。例えばデバッグするときなどに有効で、レイヤーを巻き戻してもアプリは完成形であるため、どのレイヤーでバグが起こったか、レイヤーを巻き戻してデバッグしたりすることができます。

以下が例です。

ヘッダーがcommon.hとすると

```
    struct MyStruct {
        string field1;
    };

    impl MyStruct {
        void show(MyStruct* self);
    }

    struct MyStruct version 2 {
        string field2;
    }

    impl MyStruct version 2 {
        void show(MyStruct* self);
    }
```

となりレイヤー1のソース側が01base.ncは

```
    #include "common.h"

    impl MyStruct {
        void show(MyStruct* self) {
            puts(self.field1);
        }
    }
```

二つ目のレイヤーが02extend.nc

```
    #include "common.h"

    impl MyStruct version2 {
        void show(MyStruct* self) {
            inherit(self);

            puts(self.field2);
        }
    }
```

となります。inheritは上書きされる対象の関数を呼び出します。

main関数を含むmain.ncは以下のように定義すればいいでしょう。

```
    #include "common.h"

    int main()
    {
        var data = new MyStruct;

        data.show();

        return 0;
    }
```

まあ、この例ではありがたさがわからないと思いますが、common.hのversion2をコメントアウトして02extend.oをリンクしないでおくとレイヤーを巻き戻せます。つまり各レイヤーでアプリケーションは完成していて、コメントアウトとMakefileの修正だけで最初のバージョンとなるということです。デバッグでも有効ですし、ソースのシンプルさも保てます。アジャイル開発とも相性がいいです。例えばVM開発の場合、とりあえず1+1が動くレイヤーを作り、そこに変数への代入や関数定義、関数呼び出しのレイヤーを追加していけばソースのシンプルさやデバッグのしやすさを保ちながら作っていくことができます。モジュール分けと違う点は各レイヤーでアプリケーションは完成しているという点です。どれだけ複雑なアプリケーションであろうとも最初のころのレイヤーはシンプルさを保っているでしょう。サンプルとしてwiというコンソールエディッタとtinyというVMがアプリケーションに含まれているため、見てみてください。

* 含まれるアプリケーションと使ってみた感想

このアプリケーションにはサンプルとしてsevenstarsというインタプリタとwiというエディッタとayatakaというコンソールファイラが含まれます。tinyというVMも含みますが、これは完成していません。sevenstarsは本格的なアプリケーションなので参考にしてみてください。アプリケーションを作ってみた感想としては、ヒープシステムはGCよりは便利ではないです。あくまで右辺値が自動的に開放されるところが便利でしょう。string str = xsprintf("%d...", i) + string("aaa")などのコードでヒープの寿命を考えなくて良い点が便利です。その他の場合はヒープの管理を自分でしないといけないと思います。メモリを自己管理したい場合はnewしたメモリをborrowしてポインタに代入すればいいです。開放はdelete dummy_heap ポインタとすれば開放できます。もしくは%をつけたポインタのメモリを保持するリストを作っておくとそのリストのメモリが開放される場合に保持したメモリも開放されるので便利でしょう。あと落とし穴としては、if() {} *v = aaa;などの式でif() {}の乗算としてパースされる点です。if(){}; *v = aaa;としなければなりません。あとは結構頻繁にセグメンテーションフォルトします。あくまで、Cに精通したユーザーでないと使いこなせないでしょう。あとLLVMのバージョンがアップして仕様が変わったため-gオプションが使えない点も不便でしょう。また気が向けば対応するかもしれません。そのためデバッグ方法としてはコメントアウトデバッグやprintfデバッグなど泥臭い方法でデバッグしていくしかないと思います。かなりCに詳しい人しかつかえないと思います。一応弁護しておくと右辺値が自動的に開放される点やコレクションライブラリがある点は素晴らしいと思います。かなりアプリケーションを作る手間が省けます。まあ、C++よりはシンプルに仕上がっているため使う価値はあると思います。

* Impressions of using,  and included application 

This application contains a sample interpreter called sevenstars, an editor named wi and a console filer named ayataka. It also includes a VM called tiny, but this is not complete. Sevenstars is a full-fledged application, so please refer to it. The heap system is less convenient than the GC, as I thought I made the application. It is convenient that the right hand side value is automatically released. The nice thing is that you don't have to worry about the life of the heap with code like string str = xsprintf("%d...", i) + string("aaa"). In other cases, you'll have to manage the heap yourself. If you want to self-manage the memory, you can borrow the new memory and assign it to the pointer. It can be released with the delete dummy_heap pointer. Or, it is convenient to make a list that holds the memory of the pointer with% attached, because the memory that is held will be released when the memory of the list is released.

Another catch is that it will be parsed as a multiplication of if() {} in expressions such as if() {} *v = aaa;. Must be if(){}; *v = aaa;. After that, segmentation faults occur quite often. Only users who are familiar with C will be able to use it. It is also inconvenient that the -g option cannot be used because the specifications have changed due to the LLVM version being upgraded. It may also be dealt with if you like. Therefore, I think that the only way to debug is to debug with comment-out debugging or printf debugging. I think that only people who are quite familiar with C can use it. For the time being, I think it's wonderful that the rvalue is automatically released and there is a collection library. It can save you a lot of time to make an application. Well, I think it's worth using because it's simpler than C++.


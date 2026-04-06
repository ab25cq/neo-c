#include <neo-c.h>

void test_collection_len_aliases()
{
    var li = [1,2,3];
    var vec = [1,2,3].to_vector();
    var ma = [1:10, 2:20, 3:30];
    var empty_li = new list<int>();
    var empty_vec = new vector<int>.initialize();
    var empty_ma = new map<int,int>.initialize();
    
    xassert("list len alias", li.len() == 3);
    xassert("vector len alias", vec.len() == 3);
    xassert("map len alias", ma.len() == 3);
    xassert("list is_empty", li.is_empty() == false && empty_li.is_empty() == true);
    xassert("vector is_empty", vec.is_empty() == false && empty_vec.is_empty() == true);
    xassert("map is_empty", ma.is_empty() == false && empty_ma.is_empty() == true);
}

void test_tuple_len_count()
{
    xassert("tuple1 len", t(1).len() == 1 && t(1).count() == 1);
    xassert("tuple2 len", t(1, 2).len() == 2 && t(1, 2).count() == 2);
    xassert("tuple3 len", t(1, 2, 3).len() == 3 && t(1, 2, 3).count() == 3);
    xassert("tuple4 len", t(1, 2, 3, 4).len() == 4 && t(1, 2, 3, 4).count() == 4);
    xassert("tuple5 len", t(1, 2, 3, 4, 5).len() == 5 && t(1, 2, 3, 4, 5).count() == 5);
}

void test_result_methods()
{
    RESULT(int) ok = SOME(42);
    RESULT(int) err = NONE(0);
    
    xassert("result is_ok", ok.is_ok() == true && ok.is_err() == false);
    xassert("result is_err", err.is_ok() == false && err.is_err() == true);
    xassert("result unwrap_or ok", ok.unwrap_or(7) == 42);
    xassert("result unwrap_or err", err.unwrap_or(7) == 7);
    xassert("result unwrap_or_default ok", ok.unwrap_or_default() == 42);
    xassert("result unwrap_or_default err", err.unwrap_or_default() == 0);
    xassert("result expect ok", ok.expect("should not fail") == 42);
}

int main(int argc, char** argv)
{
    test_collection_len_aliases();
    test_tuple_len_count();
    test_result_methods();
    
    return 0;
}

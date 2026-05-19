#include <neo-c.h>

Result<FILE*>*% xfopen2(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);

    if(f == NULL) {
        return new Result<FILE*>.None();
    }

    return new Result<FILE*>.Some(f);
}

Result<int>*% read_first_byte(const char* file_name)
{
    FILE* f = xfopen2(file_name, "r")??;
    int ch = fgetc(f);

    f.fclose()!;

    if(ch == EOF) {
        return new Result<int>.None();
    }

    return new Result<int>.Some(ch);
}

int main()
{
    FILE* out = xfopen("test_try_file_tmp.txt", "w")!;
    out.fwrite("AAA\nBBB\n")!;
    xassert("fclose ok", out.fclose()! == 0);

    FILE* in = xfopen("test_try_file_tmp.txt", "r")!;
    buffer*% read_buf = in.fread()!;
    string data = read_buf.to_string();
    xassert("fread result", data === "AAA\nBBB\n");
    in.fclose()!;

    FILE* lines_file = xfopen("test_try_file_tmp.txt", "r")!;
    list<string>*% lines = lines_file.readlines()!;
    xassert("readlines result", lines.length() == 2 && lines[0] === "AAA\n" && lines[1] === "BBB\n");
    lines_file.fclose()!;

    FILE* null_file = null;
    xassert("fclose none", null_file.fclose().is_err());
    remove("test_try_file_tmp.txt");

    var ok = read_first_byte("README.md");
    var err = read_first_byte("no-such-file.txt");
    
    if(ok.is_ok()) {
        printf("%d\n", ok.unwrap());
    }
    if(err.is_err()) {
        puts("ERR");
    }
    
    return 0;
}

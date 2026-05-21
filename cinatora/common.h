#include <neo-c.h>
#include <sys/stat.h>
#include <unistd.h>
#include <signal.h>
#include <locale.h>

struct Cinatora
{
    string path;
    string header;
    string contents;
    
    string output;
};

uniq string Cinatora::get(Cinatora* self)
{
    return self.path;
}

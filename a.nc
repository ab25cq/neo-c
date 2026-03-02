#include <neo-c.h>

struct sInfo
{
    char* commandString;
};

int main(int argc, char** argv) 
{
    sInfo self;
    self.commandString = "sp vin/01main.nc";
    
    if(string(self.commandString).index("sp", -1) == 0) {
    }
    else if(string(self.commandString).index("paste", -1) == 0) {
    }
    else {
        if(string(self.commandString).index("%", -1) != -1) {
        }
        if(string(self.commandString).index("w", -1) != -1) {
        }
        if(string(self.commandString).index("q", -1) != -1) {
        }
        if(string(self.commandString).index("shell", -1) != -1) {
        }
    }
        string file_name = string(self.commandString).scan(s"sp (.+)").item(0, null).to_string();

    if(string(self.commandString).index("paste", -1) == 0) {
    }
    else {
    }
                                   
    return 0;
}


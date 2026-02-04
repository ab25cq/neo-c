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


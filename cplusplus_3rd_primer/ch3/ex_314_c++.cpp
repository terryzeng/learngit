#include <iostream>
#include <string>

int main(){
    int errors = 0;
    std::string str("a very long literal string");

    for (int ix = 0; ix < 1000000; ++ix){
        int len = str.size();
        std::string str2 = str;
        if (str != str2)
            ++errors;
    }

    std::cout << "string class: " << errors << " errors occurred.\n";
    return 0;
}

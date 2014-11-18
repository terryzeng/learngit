#include <iostream>
#include <cstring>

int main(){
    
    int errors = 0;
    const char *pc = "a very long literal string";
    for (int ix = 0; ix < 1000000; ++ix){
        int len = strlen(pc);
        char *pc2 = new char(len+1);
        strcpy(pc2, pc);
        if (strcmp(pc2,pc))
            ++errors;
        delete [] pc2;
    }
    std::cout << "C-style character strings:" << errors << " errors occurred. \n";
    return 0;
}

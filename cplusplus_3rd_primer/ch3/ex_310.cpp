#include <iostream>

int main(){
    int init = 1024;
    int *pi = &init;
    *pi = *pi + 1024;
    std::cout << "*pi=" << *pi << std::endl;
    std::cout << "pi=" << pi << std::endl;
    
    int **qi = &pi;
    
    std::cout << "qi=" << qi << std::endl;
    std::cout << "*qi=" << *qi << std::endl;
    std::cout << "**qi=" << **qi << std::endl;

    return *pi;
}

/*
int main(){
    int *pi2 = 0;
    int ival = foobar(pi2);
    std::cout << ival << std::endl;
    return 0;
}
*/

#include <iostream>

int main(){
    int ival = 1024;
    int &refval = ival;
    int *pi = &ival;
    
    int ival2 = 2048;
    int *pi2 = &ival2;
    
    std::cout << "Before assign data on pointer test:" << std::endl;

    std::cout << "pi=" << pi << std::endl << "pi2=" << pi2 << std::endl;
    std::cout << "*pi=" << *pi << " *pi2=" << *pi2 << std::endl; 
    

    pi = pi2;

    std::cout << "After assign data on pointer test:" << std::endl;
    std::cout << "pi=" << pi << std::endl << "pi2=" << pi2 << std::endl;
    std::cout << "*pi=" << *pi << " *pi2=" << *pi2 << std::endl; 

    int *&ptrVal2 = pi;

    std::cout << "refval=" << refval << " &refval=" << &refval << " pi=" << pi << std::endl;
    std::cout << "ptrVal2=" << ptrVal2 << " &ptrVal2=" << &ptrVal2 <<  " *&ptrVal2=" << *&ptrVal2 << std::endl;
    
    int &ri = ival, &ri2 = ival2;
    
    std::cout << std::endl << "Before assign data on reference test:" << std::endl;
    std::cout << "&ri=" << &ri << std::endl << "&ri2=" << &ri2 << std::endl;
    std::cout << "ri=" << ri << " ri2=" << ri2 << std::endl;


    ri = ri2;
    std::cout << "After assign data on reference test:" << std::endl;
    std::cout << "&ri=" << &ri << std::endl << "&ri2=" << &ri2 << std::endl;
    std::cout << "ri=" << ri << " ri2=" << ri2 << std::endl;

    return 0;


}

#include <iostream>
#include "String.h"

int main(){
    String empty;
    String str1("The cow");
    String str2("jumped over the moon.");
    String str3 = str1 + str2;
    std::cout << "String 1: " << str1 << std::endl;
    std::cout << "String 2: " << str2 << std::endl;
    std::cout << "String 3: " << str3 << std::endl;


    str3 = str3 + empty;
    str3 = empty + str3;

    std::cout << "String1 + String2 = " << str3 << std::endl;
    return 0;
}


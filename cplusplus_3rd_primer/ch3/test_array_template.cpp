#include <iostream>
#include <string>

template <class elemType>
void print(elemType *pbegin, elemType *pend){
   
    while(pbegin != pend){
        std::cout << *pbegin << ' ';
        ++pbegin;
    } 
}
int main(){
    int ia[9] = {0,1,1,2,3,5,8,13,21};
    double da[4] = {3.14, 6.28, 12.56, 25.12};
    std::string sa[3] = {"piglet","eeyore","pooh"};
    print(ia, ia+9);   
    std::cout << std::endl;
    print(da, da+4);   
    std::cout << std::endl;
    print(sa, sa+3);   
    std::cout << std::endl;

    return 0;
}



#include <iostream>

void ia_print(int *pbegin, int *pend){
   
    while(pbegin != pend){
        std::cout << *pbegin << ' ';
        ++pbegin;
    } 
}
int main(){
    int ia[9] = {0,1,1,2,3,5,8,13,21};

    ia_print(ia, ia+9);   
    std::cout << std::endl;
    return 0;
}



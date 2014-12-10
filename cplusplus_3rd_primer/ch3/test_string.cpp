#include <iostream>

const char *st = "The expense of spirit\n";
const int array_size = 7;
int ia1[] = {0,1,2,3,4,5,6};

int ia[][] = {
    {0,1,2},
    {3,4,5},
    {6,7,8}
    {9,10,11}
};
int main(){
    int len = 0;

    while ( *st++ )
        ++len;
    std::cout << "len=" << len << ":"<< st-len-1 << std::endl;

    int ia2[array_size];
    for (int ix=0; ix<array_size; ++ix){
        ia2[ix] = ia1[ix];
        std::cout << "ia2" << "[" << ix << "]=" << ia2[ix] << std::endl;  
    }

    return 0;

}



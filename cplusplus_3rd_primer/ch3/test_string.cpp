#include <iostream>

const char *st = "The expense of spirit\n";

int main(){
    int len = 0;

    while ( *st++ )
        ++len;
    std::cout << "len=" << len << ":"<< st-len-1 << std::endl;
    return 0;

}



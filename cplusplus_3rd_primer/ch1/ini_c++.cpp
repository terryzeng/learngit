/*
 *
 */
#include <iostream>

//using namespace std::cout;
//using namespace std::endl;

int read(){

    std::cout << "read()" << std::endl;
}

void sort(){
    std::cout << "sort()" << std::endl;
}

void compact(){
    std::cout << "compact()" << std::endl;
}

void write(){
    std::cout << "write()" << std::endl;
}

int main(){
    int count = read();
    
    if ( count >1 ){
        sort();
        compact();
    }
    
    if (count == 0)
        std::cout << "no sales for this month" << std::endl;
    else 
        write();
    
    return 0;
}


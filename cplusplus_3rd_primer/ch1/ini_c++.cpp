/*
 *
 */
#include <iostream>

using namespace std;

int read(){

    cout << "read()" << endl;
}

void sort(){
    cout << "sort()" << endl;
}

void compact(){
    cout << "compact()" << endl;
}

void write(){
    cout << "write()" << endl;
}

int main(){
    int count = read();
    
    if ( count >1 ){
        sort();
        compact();
    }
    
    if (count == 0)
        cout << "no sales for this month" << endl;
    else 
        write();
    
    return 0;
}


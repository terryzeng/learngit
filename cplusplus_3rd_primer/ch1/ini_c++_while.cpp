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
    int iterations = 0;
    bool continue_loop = true;
    while ( continue_loop != false)
    {
        iterations++;
        cout << "the while loop has executed " << iterations << " times" << endl; 
        
        if (iterations == 5)
            continue_loop = false;
    }
    return 0;
}


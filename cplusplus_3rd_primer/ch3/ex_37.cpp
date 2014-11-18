/*
 * Exercise 3.7 in C++ Primer 3rd edition book 
 */

#include <iostream>
#include <string>

std::string global_class;
int global_int;

int main(){

    int local_int;
    std::string local_class;

    std::cout << "global_class: " << global_class << std::endl;
    std::cout << "global_int: " << global_int << std::endl;

    std::cout << "local_class: " << local_class << std::endl;
    std::cout << "local_int: " << local_int << std::endl;

    return 0;
}


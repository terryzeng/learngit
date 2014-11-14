/*
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>

int ia[] = {41,23,54,67,89,12,5,40,104,11};

void PrintIt(int& IntToPrint){
    
    std::cout << IntToPrint << " ";
}

int main(){
    
    std::vector<int> vec(ia, ia+10);
    
    //print the original array list data
    std::cout << "The original array list data:" << std::endl;
    for_each(vec.begin(), vec.end(), PrintIt);


    //sort array list
    sort(vec.begin(), vec.end());

    std::cout << std::endl << "The sorted array list: " << std::endl;
    for_each(vec.begin(), vec.end(), PrintIt);

    //input the search data
    int search_value;
    std::cout << std::endl <<  "Please enter the search data: " << std::endl;
    std::cin >> search_value;

    //search element
    std::vector<int>::iterator found;
    found = find(vec.begin(), vec.end(), search_value);
    if ( found != vec.end())
        std::cout << "search_value found" << std::endl;
    else
        std::cout << "search_value not found" << std::endl;

    //reverse array list
    reverse(vec.begin(), vec.end());
    std::cout << std::endl << "The reversed array list:"<< std::endl;
    for_each(vec.begin(), vec.end(), PrintIt);
    std::cout << std::endl;
    
    return 0;
}

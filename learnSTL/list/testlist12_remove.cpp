/*
 * Erasing objects from a list.
 */
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void PrintIt(int& IntegerToPrint){
    cout << IntegerToPrint << endl;
}

int main(void){
    list<int> list1;

    //Put integers 0 to 9 in the list
    for (int i=0; i<10; i++)
        list1.push_back(i);
    
    cout << "The current list is: " << endl;
    for_each(list1.begin(), list1.end(), PrintIt);


    //erase the first element 0
    list1.pop_front();
    cout << "After delete the first element,the current list is: " << endl;
    for_each(list1.begin(), list1.end(), PrintIt);


    //erase the last element 9
    list1.pop_back();
    cout << "After delete the last element,the current list is: " << endl;
    for_each(list1.begin(), list1.end(), PrintIt);


    //erase the first element(1) using an iterator
    list1.erase(list1.begin());
    cout << "Using iterator to delete the first element,the current list is: " << endl;
    for_each(list1.begin(), list1.end(), PrintIt);

   
    //list1.erase(list1.end());
    //cout << "The current list is: " << endl;
    //for_each(list1.begin(), list1.end(), PrintIt);


    list1.erase(list1.begin(), list1.end());
    cout << "The list contains " << list1.size() << " elements" << endl;
    
    return 0;
}

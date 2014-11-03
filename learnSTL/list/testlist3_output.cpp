#include <iostream>
#include <string>
#include <list>

using namespace std;

int main (void)
{
    list<string> Milkshakes;
    list<string>::iterator MilkshakesIterator;

    Milkshakes.push_back("Chocolate");
    Milkshakes.push_back("Strawberry");
    Milkshakes.push_front("Lime");
    Milkshakes.push_front("Vanilla");

    //print the Milkshakes
    Milkshakes.push_front("The Milkshakes Menu");
    Milkshakes.push_back("***Thats the end***");
    
#if 0  
    for (MilkshakesIterator=Milkshakes.begin(); 
        MilkshakesIterator!=Milkshakes.end();
        ++MilkshakesIterator){
        //dereference the iterator to get the element
        cout << *MilkshakesIterator << endl;
    }
#else
    while (!Milkshakes.empty()){
       if (MilkshakesIterator!=Milkshakes.end()){
            MilkshakesIterator=Milkshakes.begin(); 
            //dereference the iterator to get the element
            cout << *MilkshakesIterator << endl;
            ++MilkshakesIterator;
            Milkshakes.pop_front();
       }
    }
#endif
    return 0;

}

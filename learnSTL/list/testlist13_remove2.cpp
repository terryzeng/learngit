/*
 * How to sort an STL list
 */
#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

void PrintIt(string& StringToPrint){
    cout << StringToPrint <<endl;
}

int main(void){
    list<string> Birds;
    list<string>::iterator NewEnd;

    Birds.push_back("cockatoo");
    Birds.push_back("galah");
    Birds.push_back("cockatoo");
    Birds.push_back("rosella");
    Birds.push_back("corella");
    Birds.push_back("king parrot");


    cout << "The original list:" << endl;
    for_each(Birds.begin(), Birds.end(), PrintIt);
    
    NewEnd = remove(Birds.begin(), Birds.end(), "cockatoo");

    cout << endl << "List according to new past the end iterator" << endl;
    for_each(Birds.begin(), NewEnd, PrintIt);


    cout << endl << "Original list now. Care required!" << endl;
    for_each(Birds.begin(), Birds.end(), PrintIt);

    return 0;

}

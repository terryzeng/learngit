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

    Birds.push_back("cockatoo");
    Birds.push_back("galah");
    Birds.push_back("cockatoo");
    Birds.push_back("rosella");
    Birds.push_back("corella");

    cout << "The original list with cockatoo" << endl;
    for_each(Birds.begin(), Birds.end(), PrintIt);

    Birds.remove("cockatoo");

    cout << "The modified list without cockatoo" << endl;
    for_each(Birds.begin(), Birds.end(), PrintIt);

    return 0;

}

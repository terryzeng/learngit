/*
 * How to use the search algorithm in an STL list
 */
#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(void){
    list<char> TargetCharacters;
    list<char> ListOfCharacters;

    TargetCharacters.push_back('\0');
    TargetCharacters.push_back('\0');

    ListOfCharacters.push_back('1');
    ListOfCharacters.push_back('2');
    ListOfCharacters.push_back('\0');
    ListOfCharacters.push_back('\0');

    list<char>::iterator PositionOfNulls = search(ListOfCharacters.begin(), ListOfCharacters.end(), TargetCharacters.begin(), TargetCharacters.end());

    if (PositionOfNulls != ListOfCharacters.end())
        cout << "We found the nulls" << endl;
    
    return 0;
}

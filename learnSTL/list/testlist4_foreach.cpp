/*
 * How to print a simple STL list MkII
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
    list<string> FruitAndVegetables;

    FruitAndVegetables.push_back("carrot");
    FruitAndVegetables.push_back("pumpkin");
    FruitAndVegetables.push_back("potato");
    FruitAndVegetables.push_front("apple");
    FruitAndVegetables.push_front("pineapple");
    FruitAndVegetables.push_front("pear");

    for_each(FruitAndVegetables.begin(), FruitAndVegetables.end(), PrintIt);

    return 0;

}

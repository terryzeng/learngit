/*
 * How to find things in an STL list MkII
 */
#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(void){
    list<string> Fruit;
    list<string>::iterator FruitIterator;

    Fruit.push_back("Apple");
    Fruit.push_back("Pineapple");
    Fruit.push_back("Star Apple");

    FruitIterator = find(Fruit.begin(), Fruit.end(), "Pineapple");

    if (FruitIterator == Fruit.end()){
        cout << "Fruit not found in list" << endl;
    }
    else {
        cout << *FruitIterator << endl;
    }
    return 0;

}

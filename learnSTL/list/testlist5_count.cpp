/*
 *How to count objects in an STL list
 */
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(void)
{
    list<int> Scores;

    Scores.push_back(100);
    Scores.push_back(80);
    Scores.push_back(60);
    Scores.push_back(45);
    Scores.push_back(75);
    Scores.push_back(100);
    Scores.push_back(90);

    int NumberOf100Scores = count(Scores.begin(), Scores.end(), 100);

    cout << "There were " << NumberOf100Scores << " scores of 100" << endl;
    return 0;
}

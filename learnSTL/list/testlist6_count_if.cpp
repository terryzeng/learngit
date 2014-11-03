/*
 * Using a function object to help count things
 */
#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

const string ToothbrushCode("0003");

class IsAToothbrush
{
public:
    bool operator()(string& SalesRecord)
    {
        return SalesRecord.substr(0,4)==ToothbrushCode;
    }
};

int main(void)
{
    list<string> SalesRecord;

    SalesRecord.push_back("0001 Soap");
    SalesRecord.push_back("0002 Shampoo");
    SalesRecord.push_back("0003 Toothbrush");
    SalesRecord.push_back("0004 Toothpaste");
    SalesRecord.push_back("0003 Toothbrush");

    int NumberOfToothbrushes = count_if(SalesRecord.begin(), SalesRecord.end(), IsAToothbrush());

    cout << "There were " << NumberOfToothbrushes << " toothbrushes sold" << endl;
    return 0;
}

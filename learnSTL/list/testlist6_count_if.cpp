/*
 * Using a function object to help count things
 */
#include <iostream>
#include <string>
#include <list>
#include <algorithm>

#if 0
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
#else
using namespace std;

class IsAToothbrush
{
public:
    IsAToothbrush(string& InToothbrushCode):ToothbrushCode(InToothbrushCode){}

    bool operator()(string& SalesRecord)
    {
        return SalesRecord.substr(0,4)==ToothbrushCode;
    }
private:
    string ToothbrushCode;
};

int main(void)
{
    list<string> SalesRecords;

    SalesRecords.push_back("0001 Soap");
    SalesRecords.push_back("0002 Shampoo");
    SalesRecords.push_back("0003 Toothbrush");
    SalesRecords.push_back("0004 Toothpaste");
    SalesRecords.push_back("0003 Toothbrush");

    string VariableToothbrushCode("0003");

    int NumberOfToothbrushes = count_if(SalesRecords.begin(), SalesRecords.end(), IsAToothbrush(VariableToothbrushCode));

    cout << "There were " << NumberOfToothbrushes << " toothbrushes matching code " << VariableToothbrushCode << " sold" << endl;
    return 0;
}
#endif

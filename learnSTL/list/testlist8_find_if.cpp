/*
 * How to find things in an STL list MkII
 */
#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

class EventIsIn1997{
    public:
        bool operator ()(string& EventRecord){
            //year field is at position 12 for 4 characters in EventRecord
            return EventRecord.substr(11,4)=="1997";
        }
};

int main(void){
    list<string> Events;

    //string positions
    Events.push_back("07 January 1995 Draft plan of house prepared");
    Events.push_back("07 February 1996 Detailed plan of house prepared");
    Events.push_back("10 January 1997 Client agrees to job");
    Events.push_back("15 January 1997 Builder starts work on bedroom");
    Events.push_back("30 April 1997 Builder finishes work");
  
    list<string>::iterator EventIterator = find_if(Events.begin(), Events.end(), EventIsIn1997());


    if (EventIterator == Events.end()){
        cout << "Event not found in list" << endl;
    }
    else {
        cout << *EventIterator << endl;
    }
    return 0;

}

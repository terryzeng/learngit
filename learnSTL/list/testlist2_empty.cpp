
#include <iostream>
#include <string>
#include <list>

using namespace std;

int main (void) 
{
      #define OK 0 
      #define INFO 1
      #define WARNING 2
      int return_code;
      list<string> InfoMessages;
      list<string> WarningMessages;

      // during a program these messages are loaded at various points
      InfoMessages.push_back("Info: Program started");
      // do work...
      WarningMessages.push_back("Warning: No Customer records have been found");
      // do work...
                
      return_code = OK; 
                   
      if (!InfoMessages.empty()) {          // there were info messages
        InfoMessages.push_front("Informational Messages:");
        // ... print the info messages list, we'll see how later
        return_code = INFO;
      }
      if (!WarningMessages.empty()) {       // there were warning messages
        WarningMessages.push_front("Warning Messages:");
        // ... print the warning messages list, we'll see how later
        return_code = WARNING;              
      }
      // If there were no messages say so.
      if (InfoMessages.empty() && WarningMessages.empty()) {
        cout << "There were no messages " << endl;
      }
      return return_code;
}

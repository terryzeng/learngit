#include <iostream>
#include <iomanip>
class String;

class String{
    public:
        //String str1; //String();
        //String str2("literal"); //String(const char*);
        //String str3(str2); //String(const String&);
        String();
        String(const char*);
        String(const String&);

        //Deconstructor
        virtual ~String();

        //str1 = str2
        //str3 = "a string literal"
        String& operator=(const String&);
        String& operator=(const char*);

        //str1 == str2
        //str3 == "a string literal"
        bool operator==(const String&);
        bool operator==(const char*);

        //str1[0] = str2[0]
        char& operator[](int);
        
        //member visit function
        int size() {return _size;}
        char* c_str() {return _string;}
        
        friend std::istream& operator>>(std::istream& io, String& s);
        friend std::ostream& operator<<(std::ostream& os, String& s);

    private:
        int _size;
        char *_string;

};



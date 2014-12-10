#include "String.h"
#include <cstring>
#include <cassert>

String::String(){
    init(0); 
}

String::String(const char *str){
    init(str);
}

String::String(const String &rhs){
    init(rhs);
}

String::~String(){
    delete [] _string;
}

String& String::operator=(const char *s){
    delete [] _string;
    init(s);
    return *this;
}

String& String::operator=(const String &rhs){
    if (this != &rhs){
        delete [] _string;
        init(rhs);
    }
    return *this;
}

bool String::operator==(const String &rhs){
    if (_size != rhs._size)
        return false;
    return strcmp(_string, rhs._string)? false:true;
}

bool String::operator==(const char *s){
    return strcmp(_string, s)? false:true;
}

char& String::operator[](int elem){
    assert(elem >= 0 && elem < _size);
    return _string[ elem ];
}

String String::operator+(const String &rhs) const{
    String newstring;

    if (!rhs._string)
        newstring = *this;
    else if (!_string)
        newstring = rhs;
    else {
        newstring._size = _size + rhs._size;
        newstring._string = new char[newstring._size + 1];
        strcpy(newstring._string, _string);
        strcat(newstring._string, rhs._string);
    }
    return newstring;
}

std::istream& operator>>(std::istream &io, String &s){
    const int limit_string_size = 4096;
    char inBuf[limit_string_size];

    io >> std::setw(limit_string_size) >> inBuf;
    s = inBuf;

    return io;
}

std::ostream& operator<<(std::ostream& os, String &s){
    return os << s.c_str();
}

int String::count(char ch) const {
    int chCnt = 0;

    for (int ix = 0; ix < _size; ++ix){
        if (_string[ix] == ch)
            ++chCnt;
    }
    return chCnt;
}
void String::init(const char *str){
    if (!str){
       _size = 0;
       _string = 0;
    }
    else {
        _size = strlen(str);
        _string = new char[_size+1];
        strcpy(_string, str);
    }
}

void String::init(const String &rhs){
    _size = rhs._size;
    if (!rhs._string)
        _string = 0;
    else {
        _string = new char[_size+1];
        strcpy(_string, rhs._string);
    }
}

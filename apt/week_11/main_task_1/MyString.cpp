#include <iostream>

#include "MyString.h"

MyString::MyString(const char* string, int length){
    this->length = length;

    for(int i = 0; i < length; i++){
        this->string[i] = string[i];
    }
    this->string[length] = '\0';
}

MyString::MyString(MyString& other){
    for(int i = 0; i < other.length; i++){
        this->string[i] = other.string[i];
    }
}

// move constructor
MyString::MyString(MyString&& other){
    this->length = other.length;
    for(int i = 0; i < other.length; i++){
        this->string[i] = other.string[i];
    }

    other.length = 0;
    other.string[0] = '\0';

}

// Compare two strings for equality
bool MyString::operator==(const MyString& other) const {
    bool check = true;
    for(int i = 0; i < length; i++){
        if(this->string[i] != other.string[i]){
            check = false;
        }
    }
    return check;
}

// Compare two strings for lexographical ordering
bool MyString::operator<( const MyString& other) const {
    bool check = true;
    for(int i = 0; i < length; i++){
        if(this->string[i] < other.string[i]){
            std::cout << "String A is first" << std::endl;
            check = true;
            i = length;
        }else if(this->string[i] > other.string[i]){
            std::cout << "String B is first" << std::endl;
            check = false;
            i = length;
        }
    }
    return check;
}

// Get the character of the string at the index
char& MyString::operator[](const int index) {
    return this->string[index];
}

// Assign another string into this string
MyString& MyString::operator=(const MyString& other){
    for(int i = 0; i < length; i++){
        this->string[i] = other.string[i];
    }

    this->string[length] = '\0';

    return *this;
}


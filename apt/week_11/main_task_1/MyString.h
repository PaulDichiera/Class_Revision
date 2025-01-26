#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

#define MAX_LENGTH  100

class MyString {
    public:

        MyString(const char* string, int length);
        MyString(MyString& other);
        MyString(MyString&& other);
        ~MyString();

        // Compare two strings for equality
        bool operator==(const MyString& other) const;

        // Compare two strings for lexographical ordering
        bool operator<(const MyString& other) const;

        // Get the character of the string at the index
        char& operator[](const int index);

        // Assign another string into this string
        MyString& operator=(const MyString& other);

    private:
        char string[MAX_LENGTH];
        int length;
};

// Write the string to standard output
std::ostream& operator<<(std::ostream& os, MyString& point);

#endif // MYSTRING_H



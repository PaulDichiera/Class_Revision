#include <iostream>

#include "MyString.h"

int main(void){

    MyString* string = new MyString("Hello", 5);
    MyString* string2 = new MyString("Paul", 4);
    

    for(int i = 0; i < 5; i++){
        std::cout << (*string)[i];
    }
    std::cout << std::endl;

    std::cout << (string == string2) << std::endl;

    for(int i = 0; i < 5; i++){
        std::cout << (*string2)[i];
    }
    std::cout << std::endl;

    string = string2;

    std::cout << (string == string2) << std::endl;


    for(int i = 0; i < 5; i++){
        std::cout << (*string)[i];
    }

    return EXIT_SUCCESS;
}
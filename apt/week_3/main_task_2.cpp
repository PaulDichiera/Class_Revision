#include <iostream>

//typedef is used for defining a shorthand for a 'type'

#define LENGTH   10

typedef int integer;
typedef char character;
typedef std::string string;
typedef double decimals;
typedef float* floats;


int main(void) {

    integer number = 2;
    character letter = 'c';
    string name = "Paul";
    decimals list[LENGTH] = {1.1, 2.2, 3.3 , 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
    floats floatList[LENGTH];


    // i need to dynamically assign memory to each pointer.
    for(int i = 0; i < LENGTH; i++){
        floatList[i] = new float(i + .5);
    }

    std::cout << "Integer Value: " << number << std::endl;
    std::cout << "Character Value: " << letter << std::endl;
    std::cout << "String Value: " << name  << std::endl;

    for(int i = 0; i < LENGTH; i++){
        std::cout << "Double Values: " << list[i] << std::endl;
    }
    
    for(int i = 0; i < LENGTH; i++){
        std::cout << "Float Values: " << *floatList[i] << std::endl;
    }


    return EXIT_SUCCESS;
}
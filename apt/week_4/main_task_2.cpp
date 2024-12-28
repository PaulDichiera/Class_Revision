#include <iostream>

int stringLength(char* string);

int main(void) {

    char name[] = "Paul";

    std::cout  << name << std::endl;

    std::cout << "The String: " << name << std::endl;
    std::cout << "String Length: " << stringLength(name) << std::endl;

    return EXIT_SUCCESS;
}

int stringLength(char* string){

    int count = 0;

    for(int i = 0; string[i] != '\0'; i++){
        count++;
    }

    return count;
}
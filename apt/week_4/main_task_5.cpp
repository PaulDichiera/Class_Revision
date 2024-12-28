#include <iostream>

int stringLength(char* string);
void copyString(char* src, char* dest);

int main(void) {

    std::cout << "Testing stingLength" << std::endl;
    char* nullStr = nullptr;
    char empty[] = "";
    char hello[] = "Hello World";
    std::cout << "Should be 0 but is: " << stringLength(nullStr) << std::endl;
    std::cout << "Should be 0 but is: " << stringLength(empty) << std::endl;
    std::cout << "Should be 11 but is: " << stringLength(hello) << std::endl;

    char from[] = "this should be copied";
    int length = stringLength(from);
    char to[length];
    std::cout << "Before: from: " << from << ", to: " << to << std::endl;
    copyString(from, to);
    std::cout << "After: from: " << from << ", to: " << to << std::endl; 


    return EXIT_SUCCESS;
}

int stringLength(char* string){

    int count = 0;

    if(string == nullptr){
        return count;
    } else {
        for(int i = 0; string[i] != '\0'; i++){
            count++;
        }
    }
    return count;
}

void copyString(char* src, char* dest){
    int count = 0;
    for(int i = 0; src[i] != '\0'; i++){
        dest[i] = src[i]; // main issue incorrect assignment i had these the wrong way around
        count++;
    }

    dest[count] = '\0';

}
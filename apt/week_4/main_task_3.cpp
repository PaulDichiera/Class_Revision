#include <iostream>

void copyString(char* src, char* dest);
int countString(char* string);

int main(void){

char name[] = "Paul";
int length = countString(name);
char copy[length];

std::cout << "Source: " << name << std::endl;

copyString(name, copy);

std::cout << "Copy: " << copy << std::endl;


    return EXIT_SUCCESS;
}

void copyString(char* src, char* dest){
    int count = 0;

    for(int i = 0; src[i] != '\0'; i++){
        dest[i] = src[i]; // main issue incorrect assignment i had these the wrong way around
        count++;
    }

    dest[count] = '\0';

}

int countString(char* string){
    int count = 0;

    for(int i = 0; string[i] != '\0'; i++){
        count++;
    }

    return count;
}
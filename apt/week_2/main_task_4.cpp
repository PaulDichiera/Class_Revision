#include <iostream>

void print(char* c);
bool getCharacter(char* c);

int main(void) {

    char c;

    getCharacter(&c);
    print(&c);


    return EXIT_SUCCESS;
}

void print(char* c){

    std::cout << "input: " << *c << std::endl;

}

bool getCharacter(char* c){

    if(std::cin >> *c) {
        return 1;
    } else {
        return 0;
    }

}
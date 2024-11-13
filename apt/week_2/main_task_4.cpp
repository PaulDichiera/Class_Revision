#include <iostream>

void print(char* c);
bool getCharacter(char* c, int length);

int main(void) {

    int length = 20;
    char c[length];

    getCharacter(c, length);
    print(c);


    return EXIT_SUCCESS;
}

void print(char* c){

    std::cout << "input: " << c << std::endl;

}

bool getCharacter(char* c, int length){

    int i = 0;

    while(i != length){
        std::cin >> c[i];
        i++;
    }

    c[i] = '\n';
    
    return 1;

}
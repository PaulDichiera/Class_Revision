#include <iostream>

#define LENGTH  10

void doubleArray(int** values, int length);

int main(void) {

    int* values[LENGTH];

    for(int i = 0; i < LENGTH; i++){
        values[i] = new int((i + 1) * 10);
    }

    for(int i = 0; i < LENGTH; i++){
        std::cout << "Value at element " << i << ": " << *values[i] << std::endl;
    }

    doubleArray(values , LENGTH);

    for(int i = 0; i < LENGTH; i++){
        std::cout << "Value at element " << i << ": " << *values[i] << std::endl;
    }

    return EXIT_SUCCESS;
}

void doubleArray(int** values, int length){

    for(int i = 0; i < LENGTH; i++) {
        *values[i] += 2;
    }

}
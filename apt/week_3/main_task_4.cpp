#include <iostream>

#define LENGTH  10

void doubleArray(int values[], int length);

int main(void) {

    int values[LENGTH] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for(int i = 0; i < LENGTH; i++){
        std::cout << " Value of values: " << values[i] << std::endl;
    }

    doubleArray(values, LENGTH);

    for(int i = 0; i < LENGTH; i++){
        std::cout << " Value of values: " << values[i] << std::endl;
    }

    return EXIT_SUCCESS;
}

void doubleArray(int values[], int length){
    for(int i = 0; i < length; i++){
        values[i] += 2;
    }
}
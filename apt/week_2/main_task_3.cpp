#include <iostream>

void printInt(int* print);
void printDouble(double* print);
void add(double* add);
void subtract(double& subtract);

int main (void) {

    int number = 3;
    int* ptr = &number;
    double decimal = 2.2;
    
    printInt(ptr);

    number = 5;

    printInt(ptr);

    add(&decimal);

    printDouble(&decimal);

    subtract(decimal);

    printDouble(&decimal);



    return EXIT_SUCCESS;
}

void printInt(int* print){

    std::cout << "value: " << *print << std::endl;

}

void printDouble(double* print){

    std::cout << "value: " << *print << std::endl;

}

void add(double* add){

    *add += 2.2;

} 

void subtract(double& subtract){

    subtract -= 2.2;

}
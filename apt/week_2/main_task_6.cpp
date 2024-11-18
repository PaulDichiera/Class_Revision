#include <iostream>

void swap(int* a, int* b);

int main(void){

    int a = 5;
    int b = 10;

    std::cout << "Value a: " << a << std::endl;
    std::cout << "Value b: " << b << std::endl;

    swap(&a, &b);
    
    std::cout << "Valie a: " << a << std::endl;
    std::cout << "Value b: " << b << std::endl;
    
    return EXIT_SUCCESS;
}

void swap(int* a, int* b){

    int tmp = *a;
    *a = *b;
    *b = tmp;

}

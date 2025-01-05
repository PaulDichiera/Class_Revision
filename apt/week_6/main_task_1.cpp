#include <iostream>
#include <vector>

int main(void){
    std::vector<int> numbers;
    int range = 100;
    for(int i = 0; i < range; i++){
        numbers.push_back(i);
    }

    for(int i = 0; i < range; i++){
        std::cout << numbers[i] << ", " ;
    }

    return EXIT_SUCCESS;
}
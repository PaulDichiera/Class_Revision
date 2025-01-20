#include <iostream>

#include "Matrix.h"

void printMat(Matrix& matrix);

int main(void){

    Matrix* mat = new Matrix();

    mat->set(0, 0, 22);
    mat->set(3, 3, 44);

    printMat(*mat);

    Matrix* matCopy = new Matrix(*mat);

    printMat(*matCopy);

    if(*mat == *matCopy){
        std::cout << "The Matrix identical: TRUE" << std::endl;
    }else{
        std::cout << "The Matrix identical: FALSE" << std::endl;
    }

    matCopy->set(2, 5, 78);

    printMat(*mat);
    printMat(*matCopy);

    if(*mat == *matCopy){
        std::cout << "The Matrix identical: TRUE" << std::endl;
    }else{
        std::cout << "The Matrix identical: FALSE" << std::endl;
    }

    mat->add(*matCopy);

    printMat(*mat);
    printMat(*matCopy);

    return EXIT_SUCCESS;
}

void printMat(Matrix& matrix){
    int size = 10;
    
    std::cout << "** MATRIX Print Out **" << std::endl;
    std::cout << std::endl;
    for(int row = 0; row < size; row++){
        for(int column = 0; column < size; column++){

            std::cout << matrix.get(row, column) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
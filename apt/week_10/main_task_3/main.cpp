#include <iostream>

#include "ImmutableMatrix.h"

void print(Matrix& mat);

int main(void){

    Matrix* mat = new Matrix();
    print(*mat);

    ImmutableMatrix* imMat = new ImmutableMatrix();
    print(*imMat);

    std::cout << "Checking Equivalence: " << (*mat == *imMat) << std::endl; 

    mat->set(1, 1, 45);
    mat->set(4, 4, 22);
    mat->set(2, 6, 7);

    imMat->set(3, 3, 9);
    imMat->set(7, 6, 13);

    print(*mat);
    print(*imMat);

    std::cout << "Checking Equivalence: " << (*mat == *imMat) << std::endl; 

    imMat->add(*mat);

    print(*imMat);

    imMat->makeImmutable();
    imMat->set(6, 6, 66);

    ImmutableMatrix* imMat2 = new ImmutableMatrix(*imMat);

    imMat2->set(6, 6, 66);


    return EXIT_SUCCESS;
}

void print(Matrix& mat){

    std::cout << "** Printing Matrix **" << std::endl;
    std::cout << std::endl;
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            std::cout << mat.get(row, column) << " ";
        }
        std::cout << std::endl;
    }
        std::cout << std::endl;
}
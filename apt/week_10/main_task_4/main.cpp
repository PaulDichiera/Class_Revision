#include <iostream>
#include "MatrixGeneric.h"

template<typename T>
void print(Matrix<T>& mat);
template<typename T>
void check(Matrix<T>& mat, Matrix<T>& mat2);

int main(void){

    Matrix<int>* mat = new Matrix<int>();
    print(*mat);

    Matrix<int>* mat2 = new Matrix<int>();
    print(*mat2);

    check(*mat, *mat2);

    mat->set(2, 2, 209);
    mat2->set( 4, 4, 509);

    print(*mat);
    print(*mat2);

    check(*mat, *mat2);

    mat->add(*mat2);

    print(*mat);


    return EXIT_SUCCESS;
}

template<typename T>
void print(Matrix<T>& mat){
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

template<typename T>
void check(Matrix<T>& mat, Matrix<T>& mat2){
    if(mat == mat2){
        std::cout << "** Matrix check SUCCESS **" << std::endl;
    }else{
        std::cout << "** Matrix check FAILURE **" << std::endl;
    }
}

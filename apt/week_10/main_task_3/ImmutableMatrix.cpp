#include <iostream>

#include "ImmutableMatrix.h"

ImmutableMatrix::ImmutableMatrix(){
    Matrix();
}

ImmutableMatrix::ImmutableMatrix(const ImmutableMatrix& other) : Matrix(other), immutable(other.immutable){
}

ImmutableMatrix::~ImmutableMatrix(){

}

void ImmutableMatrix::makeImmutable(){
    this->immutable = true;
}

void ImmutableMatrix::set(int row, int column, double value){
    if(immutable){
        std::cout << "** Changes cannot be made, Matrix is IMMUTABLE **" << std::endl;
    }else{
        mat[row][column] = value;
    }
}

void ImmutableMatrix::add(const Matrix& other){
    if(immutable == false){
        Matrix::add(other);
    }else{
        std::cout << "** Changes cannot be made, Matrix is IMMUTABLE **" << std::endl;
    }
}

bool ImmutableMatrix::operator==(const Matrix& other) const {
    bool check = true;
    if(immutable == false){
        for(int row = 0; row < SIZE; row++){
            for(int column = 0; column < SIZE; column++){
                if(this->mat[row][column] != other.get(row, column)){
                    check = false;
                }
            }
        }
    }
    return check;
}
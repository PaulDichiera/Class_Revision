#include <iostream>

#include "Matrix.h"

Matrix::Matrix(){
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            this->mat[row][column] = 0.0;
        }
    }
}

Matrix::Matrix(const Matrix& other){
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            this->mat[row][column] = other.mat[row][column];
        }
    }
}

Matrix::~Matrix(){

}

double Matrix::get(int row, int column) const{

    return this->mat[row][column];
}

void Matrix::set(int row, int column, double value){
    this->mat[row][column] = value;
}

void Matrix::add(const Matrix& other){
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            this->mat[row][column] += other.mat[row][column];
        }
    }
}

bool Matrix::operator==(const Matrix& other) const {
    bool check = true;
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            if(this->mat[row][column] != other.mat[row][column]){
                check = false;
            }
        }
    }
    return check;
}


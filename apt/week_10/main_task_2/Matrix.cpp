#include <iostream>

#include "Matrix.h"

Matrix::Matrix(){
    // constructor, creates a matrix of 0's
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            this->mat[i][j] = 0.0;
        }
    }
}

Matrix::Matrix(Matrix& other){
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            this->mat[row][column] = other.mat[row][column];
        }
    }
}

Matrix::~Matrix(){
    // deconstructor
}

double Matrix::get(int row, int column) const{
    return this->mat[row][column];
}

void Matrix::set(int row, int column, double value){
    this->mat[row][column] = value;
}

void Matrix::add(const Matrix& other){
    // add another matrix object or increase the values of by the one added?
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            mat[row][column] += other.mat[row][column];
        }
    }
}

bool Matrix::operator==(const Matrix& other) const{
    // create compoarison operator to check for matrix equality
    bool check = true;
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            if(mat[row][column] != other.mat[row][column]){
                 check = false;
            }
        }
    }
    return check;
}
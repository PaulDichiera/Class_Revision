#include <iostream>
#include "MatrixGeneric.h"

template <typename T>
Matrix<T>::Matrix() {
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            this->mat[row][column] = T();
        }
    }
}

template <typename T>
Matrix<T>::Matrix(const Matrix<T>& other){
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            this->mat[row][column] = other.mat[row][other];
        }
    }
}

template <typename T>
Matrix<T>::~Matrix(){

}

template <typename T>
T Matrix<T>::get(int row, int column) const{
    return mat[row][column];
}

template <typename T>
void Matrix<T>::set(int row, int column, T value){
    this->mat[row][column] = value;
}

template <typename T>
void Matrix<T>::add(const Matrix<T>& other){
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            this->mat[row][column] += other.mat[row][column];
        }
    }
}

template <typename T>
bool Matrix<T>::operator==(const Matrix<T>& other) const{
    bool check = true;
    for(int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            if(this->mat[row][column] != other.mat[row][column])
                check = false;
        }
    }
    return check;
}
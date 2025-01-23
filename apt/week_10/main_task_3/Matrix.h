#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#define SIZE    10

class Matrix {
    protected:
        double mat[SIZE][SIZE];
    public:
        Matrix();
        Matrix(const Matrix& other);
        ~Matrix();

        double get(int row, int column) const;
        virtual void set(int row, int column, double value);
        virtual void add(const Matrix& other);
        virtual bool operator==(const Matrix& other) const;
};

#endif // MATRIX_H


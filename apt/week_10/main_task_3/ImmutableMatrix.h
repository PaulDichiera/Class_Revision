#ifndef IMMUTABLEMATRIX_H
#define IMMUTABLEMATRIX_H

#include "Matrix.h"
#define SIZE    10

class ImmutableMatrix : public Matrix {
    public:
        ImmutableMatrix();
        ImmutableMatrix(const ImmutableMatrix& other);
        virtual ~ImmutableMatrix();

        virtual void makeImmutable();

        virtual void set(int row, int column, double value) override;
        virtual void add(const Matrix& other) override;
        virtual bool operator==(const Matrix& other)const override;
    private:
        bool immutable = false;
        
};


#endif //IMMUTABLEMATRIX
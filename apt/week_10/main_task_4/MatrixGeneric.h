#ifndef MATRIXGENERIC_H
#define MATRIXGENERIC_H

template<typename T>

#define SIZE    10
class Matrix {
    public:
        Matrix();
        Matrix(const Matrix<T>& other);
        virtual ~Matrix();

        // getter
        virtual T get(int row, int column) const;

        // setter
        virtual void set(int row, int column, T value);

        // add another matrix to this one - modifying this matrix
        virtual void add (const Matrix<T>& other);

        // compare this matrix against another for equality
        virtual bool operator==(const Matrix<T>& other) const;

    private:
        T mat[SIZE][SIZE];
};

#endif //MATRIXGENERIC_H
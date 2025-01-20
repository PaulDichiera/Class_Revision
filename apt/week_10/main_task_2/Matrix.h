#ifndef MATRIX_H
#define MATRIX_H

#define SIZE    10

class Matrix {
    public:
        Matrix();
        Matrix(Matrix& other);
        virtual ~Matrix();

        // Getter
        virtual double get(int row, int col) const;

        // Setter
        virtual void set(int row, int col, double value);

        // Add another matrix - modifying the matrix
        virtual void add(const Matrix& other);

        // Compare this matrix to another for equality
        virtual bool operator==(const Matrix& other) const;

    private:
        double mat[10][10];
};

#endif // MATRIX_H
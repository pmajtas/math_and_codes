#ifndef MATRIX_HPP_
#define MATRIX_HPP_

#include <vector>
#include <iostream>


template <typename T=int>
class Matrix{
    public:
    Matrix()=delete;
    Matrix(int row, int column, T init=0);

    void print();
    static void MatrixMult(Matrix<T> &A, Matrix<T> &B, Matrix<T> &Y);
    static float MatrixMean(Matrix<T> A);
    int rows;
    int columns;

    std::vector<std::vector<T>> mat; //mat[rows][columns] = {{a11, a12, a13},{a21, a22, a23}}    | a11 a12 a13 |
                                                                                            //   | a21 a22 a23 |

    Matrix<T> operator*(Matrix<T> B)
    {
        Matrix<T> Y(0,0);
        if(this->columns!=B.rows)
        {
            std::cout << "Error: wrong matrices' sizes" << std::endl;
            return Y;
        }
        std::vector<std::vector<T>> tmp (this->rows, std::vector<T>(B.columns,0));

        for(int r=0; r<this->rows; ++r)
        {
            for(int c=0; c<B.columns; ++c)
            {
                for(int i=0; i<this->columns; ++i)
                {
                    tmp[r][c] += this->mat[r][i] * B.mat[i][c];
                }
            }
        }
        Y.mat = tmp;
        Y.rows = this->rows;
        Y.columns = B.columns;
        return Y;
    }

};

template <typename T>
Matrix<T>::Matrix(int a, int b, T init): rows(a), columns(b)
{   
    std::vector<std::vector<T>> tmp (a, std::vector<T>(b,init));
    mat = tmp;
}

template <typename T>
void Matrix<T>::print(){

    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
        {
            std::cout << "\t" << +mat[i][j];
        }
        std::cout<<std::endl;
    }
}

template <typename T>
float Matrix<T>::MatrixMean(Matrix<T>  A)
{
    float sum=0;
    int rows = A.rows;
    int cols = A.columns;
    for(int i=0; i<rows; ++i)
        for(int j=0; j<cols; ++j)
            sum += A.mat[i][j];
    
    return  (sum/(rows * cols));
}

#endif
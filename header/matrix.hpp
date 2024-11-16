#include <vector>
#include <iostream>


template <typename T=int>
class Matrix{
    public:
    Matrix()=delete;
    Matrix(int row, int column, T init=0);

    void print();
    static void MatrixMult(Matrix<T> &A, Matrix<T> &B, Matrix<T> &Y);
    int rows;
    int columns;

    std::vector<std::vector<T>> mat;
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
void Matrix<T>::MatrixMult(Matrix<T>  &A, Matrix<T> &B, Matrix<T> &Y)
{
    if(A.columns!=B.rows)
    {
        std::cout << "Error: wrong matrices' sizes" << std::endl;
        return;
    }
    std::vector<std::vector<T>> tmp (A.rows, std::vector<T>(B.columns,0));

    for(int r=0; r<A.rows; ++r)
    {
        for(int c=0; c<B.columns; ++c)
        {
            for(int i=0; i<A.columns; ++i)
            {
                tmp[r][c] += A.mat[r][i] * B.mat[i][c];
            }
        }
    }
    Y.mat = tmp;
    Y.rows = A.rows;
    Y.columns = B.columns;
}

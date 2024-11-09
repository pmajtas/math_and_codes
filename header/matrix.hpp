#include <vector>
#include <iostream>


template <typename T>
class Matrix{
    public:
    Matrix()=delete;
    Matrix(int row, int column, T init=0);

    void print();

    int rows;
    int columns;

    std::vector<std::vector<T>> mat;
};

template <typename T>
Matrix<T>::Matrix(int a, int b, T init): rows(a), columns(b)
{
       std::vector<T> column(columns,init);

       for(int i=0;i<rows;++i){
            mat.push_back(column);
       }
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

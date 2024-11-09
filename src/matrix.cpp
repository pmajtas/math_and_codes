#include "matrix.hpp"

Matrix::Matrix(int a, int b, int init): rows(a), columns(b)
{
       std::vector<int> column(columns,init);

       for(int i=0;i<rows;++i){
            mat.push_back(column);
       }
}

void Matrix::print(){

    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
        {
            std::cout << "\t" << mat[i][j];
        }
        std::cout<<std::endl;
    }
}
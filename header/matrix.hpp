#include <vector>
#include <iostream>

class Matrix{
    public:
    Matrix()=delete;
    Matrix(int row, int column, int init=-1);

    void print();

    int rows;
    int columns;

    std::vector<std::vector<int>> mat;
};

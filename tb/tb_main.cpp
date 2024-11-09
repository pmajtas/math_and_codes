#include <iostream>
#include <vector>

#include "complex.hpp"
#include "matrix.hpp"


int main(){

    unsigned char a=2,b=3;
    Matrix m(2,4,9);
    m.print();
    Matrix m2(3,2);
    m2.print();
    Complex<unsigned char> c1(a,b);
    std::cout << "Hello World "<< sizeof(c1.re) << std::endl;
    return 0;
}
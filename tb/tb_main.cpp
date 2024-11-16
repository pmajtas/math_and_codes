#include <iostream>
#include <vector>

#include "complex.hpp"
#include "matrix.hpp"


int main(){

    unsigned char a=2,b=3;
    
    Matrix<int> m(2,4,9);
    m.print();

    Matrix<unsigned char> m2(3,2,4);
    m2.print();

    Matrix<unsigned char> aa(2,3,1);
    Matrix<unsigned char> bb(4,4,2);
    Matrix<unsigned char> cc(3,3);
    
    aa.mat = {{1,2,3},{4,5,6}};
    bb.mat = {{8,6,4,2},{7,5,3,1},{1,2,3,4}};
    aa.print();
    bb.print();
    cc.print();


    Matrix<unsigned char>::MatrixMult(aa, bb, cc);
    cc.print();

    Complex<unsigned char> c1(a,b);
    std::cout << "Hello World "<< sizeof(c1.re) << std::endl;
    return 0;
}

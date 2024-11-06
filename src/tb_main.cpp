#include <iostream>
#include <vector>

#include "complex.hpp"


int main(){

    unsigned char a=2,b=3;
    Complex<unsigned char> c1(a,b);
    std::cout << "Hello World "<< sizeof(c1.re) << std::endl;
    return 0;
}
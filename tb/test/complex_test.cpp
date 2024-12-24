#include <iostream>

#include <complex.hpp>

int complex_test(){

    std::cout << "Hello complex test" << std::endl;

    Complex<> c1(1,2);
    Complex<> c2(3,4);
    Complex<> c3 = c1*c2;
    Complex<> c4 = c2-c1;
    Complex<> c5 = c1-c2;
    Complex<> c6 = c1+c2;
    Complex<> c7 = c2/c1;

    std::cout << "Complex c3 re: " << c3.re << " im: " << c3.im << std::endl;
    std::cout << __FUNCTION__ << " passed." << std::endl;
    return 0;
}
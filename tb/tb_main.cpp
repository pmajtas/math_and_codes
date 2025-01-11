#include <iostream>
#include <vector>

#include "complex.hpp"
#include "matrix.hpp"
#include "defs.hpp"
#include "rng.hpp"

void dummy();
int complex_test();
int math_test();

int main(){

    RUN_TEST(dummy);
    RUN_TEST(complex_test);
    RUN_TEST(math_test);

    return 0;
}

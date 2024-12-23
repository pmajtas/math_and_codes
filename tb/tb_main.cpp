#include <iostream>
#include <vector>

#include "complex.hpp"
#include "matrix.hpp"
#include "defs.hpp"
#include "rng.hpp"

void dummy();
int complex_test();

int main(){

    RUN_TEST(dummy);
    RUN_TEST(complex_test);

    return 0;
}

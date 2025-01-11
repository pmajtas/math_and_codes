
#include "math.hpp"
#include <iostream>

int math_test(){

    for(int i=0;i<10;++i)
    {
        std::cout<<"i: "<<i<<" sqrt i: "<<math::sqrt(i)<<std::endl;
    }

    for(int i=180;i<220;i=i+7)
    {
        std::cout<<"i: "<<i<<" floor i: "<<math::floor(-i,1)<<" ceil i: "<<math::ceil(-i,1)<<std::endl;
    }
    return 0;
}
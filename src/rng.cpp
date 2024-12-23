#include "rng.hpp"


int m_random(int seed){

    int m = 89;
    int a = 71;
    int c = seed%39;
    int arr[10];
    arr[0]=seed%m;
    for(int i=0; i< 9; ++i){
        arr[i+1] = (a * arr[i] + c) % m;
    }
    return arr[9];
}

void dummy(){
    std::cout << "Hello Hello" << std::endl;
}
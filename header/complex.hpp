#pragma once
#include "math.hpp"

template <typename T = float> 
struct Complex { 
  T re; 
  T im;
  Complex(T a, T b): re(a), im(b) {};
  Complex(): re(0), im(0) {};

  Complex operator+(Complex num){
    Complex ret;
    ret.re = this->re + num.re;
    ret.im = this->im + num.im;
    return ret;
  }

  Complex operator-(Complex num){
    Complex ret;
    ret.re = this->re - num.re;
    ret.im = this->im - num.im;
    return ret;
  }

  Complex operator*(Complex num){
    Complex ret;
    ret.re = this->re * num.re - this->im * num.im;
    ret.im = this->im *  num.re + this->re * num.im;
    return ret;
  }

  Complex operator/(Complex num){
    Complex<float> ret;
    int D = (num.re*num.re + num.im*num.im);
    ret.re = (this->re * num.re + this->im * num.im)/(num.re*num.re + num.im*num.im);
    ret.im = (this->im * num.re - this->re * num.im)/(num.re*num.re + num.im*num.im);
    return ret;
  }

  Complex conj(){
    Complex ret(this->re, -1*this->im);
    return ret;
  }

  float abs(){
    return math::sqrt(this->re*this->re + this->im*this->im);
  }

};

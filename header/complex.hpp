
template <typename T = int> 
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


};

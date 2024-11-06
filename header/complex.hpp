
template <typename T = int> 
struct Complex { 
  T re; 
  T im;
  Complex(T a, T b): re(a), im(b) {};
  Complex(): re(0), im(0) {};
};
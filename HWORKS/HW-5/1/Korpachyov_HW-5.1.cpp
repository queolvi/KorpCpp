#include <iostream>

int rp_pow(int a, int b, int mod) {
  int result = 1;
  int c = a % mod; 
  while (b > 0) {
    if (b & 1) { 
      result = (result * c) % mod; // умножаем рез на основание
    }
    c = (c * c) % mod; // квадрат основания
    b >>= 1;  
  }
  return result;
}

int main() {
  std::cout << rp_pow(2, 6, 100) << std::endl;
  return 0;
}
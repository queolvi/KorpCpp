#include <iostream>

// Функция вычисления n-ого числа Фибоначчи по модулю m
unsigned long long fib_mod(unsigned n, unsigned m) {
    if (n <= 1) return n;

    unsigned long long a = 0, b = 1, c;
    for (unsigned i = 2; i <= n; ++i) {
        c = (a + b) % m;
        a = b;
        b = c;
    }
    return b;
}

int main() {
  unsigned n, m;

  std::cout << "Enter n (Fibonacci number index): ";
  std::cin >> n;

  std::cout << "Enter m (modulus): ";
  std::cin >> m;

  std::cout << "n-th Fibonacci number modulo m: " << fib_mod(n, m) << std::endl;

  return 0;
}

#include <iostream>

int gcd (int a, int b);
bool isPrime (int num);
int findNextPrimeGCD (int a, int b);
int eq_mod (int x, int y);

// Функция для проверки, является ли число простым
bool isPrime (int num) {
  if (num <= 1) return false; // 0 и 1 не являются простыми
  for (int i = 2; i * i <= num; ++i) {
    if (num % i == 0) return false; // Если делится нацело, не простое
  }
  return true; // Если дошли до сюда, значит простое
}

// Функция для нахождения следующего НОД, являющегося простым числом
int findNextPrimeGCD (int a, int b) {
  int gcdResult = gcd (a, b); // Найдем НОД
  int originalGCD = gcdResult; // Сохраним исходный НОД

  // Если НОД уже простой, идем дальше
  if (isPrime (gcdResult)) {
    gcdResult--; // Уменьшаем НОД на 1 
  }

  // Ищем следующий простой НОД, перебирая числа меньше gcdResult
  for (int i = gcdResult; i > 1; i--) {
    // Сначала проверяем делимость на a и b
    if ((a % i == 0) && (b % i == 0)) {
      // А потом - является ли i простым
      if (isPrime (i)) {
        return i;
      }
    }
  }

  // Если не нашли, перебираем числа от 1 до originalGCD - 1
  for (int i = 1; i < originalGCD - 1; i++) {
    if ((a % i == 0) && (b % i == 0)) { // Сначала проверяем делимость
      if (isPrime (i)) {                // Затем - простоту
        return i;
      }
    }
  }

  return 1; // Если не нашли, возвращаем 1 (как наименьший простой делитель)
}

// Функция для нахождения НОД (не рекурсивная реализация)
int eq_mod (int x, int y) {
    int q = x % y;
    if (q < 0) q += abs (y);
    return q;
}

int gcd (int x, int y) {
    int q;
    if (y == 0) {
        return x;
    }
    q = eq_mod (x, y);
    if (q == 0) return y;
    return gcd (y, q);
}

int main () {
  
  int num_1 = 0, num_2 = 0;
  std::cout << "Enter two nums for functions: gcd() && findNextPrimeGCD() " << std::endl;
  std::cin >> num_1 >> num_2;

  std::cout << "Result with foo gcd() : " << gcd(num_1, num_2) << std::endl;
  std::cout << "Result with foo findNextPrimeGCD() : " << findNextPrimeGCD(num_1, num_2) << std::endl;
  std::cout << "If foo findNextPrimeGCD returns 1, it means foo does not find the next prime gcd, and foo returns 1 as the smallest prime gcd" << std::endl;

  return 0;;
}

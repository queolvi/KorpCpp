#include <iostream>

double cockroach_speed(double c_speed) {
  double result = c_speed * 100000 / 3600; // вычисляем переход из км/ч в см/ч
  int integerPart = static_cast<int>(result); // преобразуем result - число с плав. точкой в целое
  double fractionalPart = result - integerPart; // получаем дробную часть

  if (fractionalPart >= 0.5) {
    return integerPart + 1; // округляем в +, если дробная часть >= 0.5
  } else {
    return integerPart; // округляем в -, если дробная часть < 0.5
  }
}

int main() {
  double cockroach_speed_in_kmh = 0;
  std::cin >> cockroach_speed_in_kmh;
  std::cout << "Cockroach speed in sm/s = " << cockroach_speed(cockroach_speed_in_kmh) << std::endl; // выводим текст и результат функции - скорость таракана в см/ч
  return 0;
}

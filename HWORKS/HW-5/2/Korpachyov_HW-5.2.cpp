#include <iostream>
#include <algorithm>

int max_min_diff(int n) {
  int val[10] = {0}; // Массив для хранения 
  int count = 0; // Счетчик 
  while (n > 0) {
    val[count++] = n % 10;
    n /= 10;
  }

  std::sort(val, val + count); // Сортировка 

  int max_num = 0, min_num = 0;
  for (int i = count - 1; i >= 0; i--) {
    max_num = max_num * 10 + val[i];
  }
  for (int i = 0; i < count; i++) {
    min_num = min_num * 10 + val[i];
  }
  return max_num - min_num;
}

int main() {
  int n = 20;
  std::cout << max_min_diff(n);
  return 0;
}

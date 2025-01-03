#include <iostream>

int gcd_f_arr_nums(int* arr, int size);
int gcd (int x, int y);
int eq_mod (int x, int y);

int main() {
  int size = 0;
  std::cin >> size;

  int* arr = new int[size];

  for (int i = 0; i < size; ++i) {
    std::cin >> arr[i];
  }
  std::cout << gcd_f_arr_nums(arr, size);

  delete[] arr; // Не забудьте освободить память!
  return 0;
}

int gcd_f_arr_nums(int* arr, int size) {
    if (size <= 0) {
    return 1; // Возвращаем 1, если размер массива меньше 2
  }
    if(size == 1){
        return arr[0];
    }

  // Находим НОД первых двух элементов
  int res = gcd(arr[0], arr[1]);

  // Проходим по остальным элементам массива
  for (int i = 2; i < size; ++i) {
    res = gcd(res, arr[i]);
  }

  return res;
}

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
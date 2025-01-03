#include <iostream>

int find_unique_number(int* arr, int size) {
  if (size == 0) {
    return 0; // Возвращаем 0, если массив пустой
  }

  int unique_number = arr[0]; // Начальное значение - первый элемент массива

  for (int i = 1; i < size; ++i) {
    unique_number ^= arr[i]; // Исключающее ИЛИ для всех элементов
  }

  return unique_number;
}

int main() {
  int size = 0;
  std::cout << "Enter the size of the array: \n"; std::cin >> size;

  int* arr = new int[size];
  std::cout << "Enter the elements of the array: \n";
  for (int i = 0; i < size; ++i) {
    std::cin >> arr[i];
  }

  int unique = find_unique_number(arr, size);
  std::cout << "The unique number is: " << unique << std::endl;

  delete[] arr;
  return 0;
}

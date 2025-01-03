#include <iostream>

int difference_between_elements(int arr[], int size);

int main() {
  int size = 0;
  std::cout << "Enter the size of the array: " << std::endl;
  std::cin >> size;

  int* arr = new int[size]; 

  std::cout << "Enter the elements of the array: " << std::endl;
  for (int i = 0; i < size; ++i) {
    std::cin >> arr[i];
  }

  std::cout << "Difference between the maximum and minimum elements: "   << difference_between_elements(arr, size) << std::endl;

  delete[] arr; 

  return 0;
}

int difference_between_elements(int arr[], int size) {
  int min = arr[0], max = arr[0];

  for (int i = 0; i < size; ++i) {
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
  }

  return max - min;
}
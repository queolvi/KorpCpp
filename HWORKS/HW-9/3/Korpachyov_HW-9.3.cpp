#include <iostream>
#include <cmath>

int find_min(int arr[], int size); 

int main() {
  int size; 
  std::cout << "Enter size of array: \n";
  std::cin >> size;

  int* arr = new int[size];  

  std::cout << "Enter array values: ";
  for (int i = 0; i < size; ++i) {
    std::cin >> arr[i]; 
  }

  std::cout << "Min value in array: " << find_min(arr, size) << std::endl;

  delete[] arr; 

  return 0;
}

int find_min(int arr[], int size) {
  int temp = arr[0];
  for (int i = 1; i < size; ++i) { 
    if (arr[i] > temp) {
      temp = arr[i];
    }
  }
  return temp;
}
#include <iostream>
 
int main() {
  int size = 0;
  std::cin >> size; 
  int* n = new int[size];
  for (int i = 0; i < size; ++i) {
    std::cin >> n[i]; 
  }
  for (int i = 0; i < size; ++i) {
    if (n[i] % 2 != 0) {
        int el = n[i];
      std::cout << el << " "; 
    }
  }
  delete[] n;
  return 0;
}




#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

int sum_three_largest(int* arr, int size) {
    if (size < 3) {
        return 0; 
    }
    
    // Инициализация максимальных значений
    int max_1 = arr[0];
    int max_2 = std::max(arr[1], arr[2]); // находим max_2 среди arr[1] и arr[2]

    // Находим максимальное значение для max_1
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= max_1) {
            max_1 = arr[i];
        }
    }

    // Находим максимальное значение для max_2, исключая max_1
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= max_2 && arr[i] != max_1) { 
            max_2 = arr[i];
        }
    }

    // Если max_2 == max_1, то ищем новое max_2
    if (max_2 == max_1) {
        max_2 = arr[0];
        for (int i = 0; i < size; ++i) {
            if (arr[i] >= max_2 && arr[i] != max_1) {
                max_2 = arr[i];
            }
        }
    }

    // Находим максимальное значение для max_3, исключая max_1 и max_2 
    int max_3 = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= max_3 && arr[i] != max_1 && arr[i] != max_2) { 
            max_3 = arr[i];
        }
    }

    return max_1 + max_2 + max_3;
}

int main() {
    int size = 0;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* n = new int[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> n[i];
    }

    int sum = sum_three_largest(n, size);
    std::cout << "Sum of the three largest numbers: " << sum << std::endl;

    delete[] n;
    return 0;
}

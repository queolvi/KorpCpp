#include<iostream>
#include<cmath>
#include<string>

int most_frequent_number(int* arr, int size);

int main() {
    int size = 0;
    std::cout << "Enter size of the array: \n";  std::cin >> size;
    int* arr = new int[size];

    std::cout << "Enter numbers from the array: \n";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    
    std::cout << "A number that occurs frequently among others: " << most_frequent_number(arr, size);
    delete [] arr;
    return 0;
}

int most_frequent_number(int* arr, int size) {
    if (size == 0) {
        return 0; // Возвращаем 0, если массив пустой
    }

    int max_count = 1; // Начальное значение - 1
    int frequent_number = arr[0]; // Начальное значение - первый элемент массива

    for (int i = 0; i < size; ++i) {
        int current_count = 1; // Счетчик для текущего числа
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                current_count++;
            }
        }
        if (current_count > max_count) { // Если текущее число встречается чаще
            max_count = current_count;
            frequent_number = arr[i];
        }
    }

    return frequent_number;
}

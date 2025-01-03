#include <iostream>
#include <cmath> // Для функции abs()

int sum_of_near_average(int* arr, int size, int num) {
    double sum = 0;
    double ar_m = 0;

    // Вычисляем среднее значение всех элементов
    for(int i = 0; i < size; ++i) {
        ar_m += arr[i];
    }
    ar_m /= size;

    // Суммируем элементы, близкие к среднему
    for(int i = 0; i < size; ++i) {
        // Проверяем, отличается ли текущий элемент от среднего не более, чем на num
        if (std::abs(arr[i] - ar_m) <= num) { 
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int size = 0;
    int* arr = nullptr; // Инициализируем указатель nullptr
    int num = 0;

    std::cout << "Enter size of the array: \n"; 
    std::cin >> size;

    arr = new int[size]; // Выделяем память после ввода размера

    std::cout << "Enter nums of the array: \n"; 
    for(int i = 0; i < size; ++ i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter num: \n"; 
    std::cin >> num;

    std::cout << "Numbers close to the arithmetic mean of all elements: " 
              << sum_of_near_average(arr, size, num) << std::endl; 

    delete[] arr; // Освобождаем память после использования
    return 0;
}

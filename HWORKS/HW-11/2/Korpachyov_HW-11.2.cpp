#include<iostream>
#include<cmath>
#include<string>
#include <limits> // Для std::numeric_limits<int>::max()

int bigger_than_a(int* arr, int size, int num) {

    int smallest_bigger = std::numeric_limits<int>::max(); // Начальное значение - максимально возможное число

    for (int i = 0; i < size; ++i) {
        if (arr[i] > num && arr[i] < smallest_bigger) {
            smallest_bigger = arr[i];
        }
    }

    // Если не найдено число больше num
    if (smallest_bigger == std::numeric_limits<int>::max()) {
        return -1; // Возвращаем -1, чтобы указать, что такого числа нет
    } else {
        return smallest_bigger;
    }
}

int main() {
    int size = 0;
    std::cout << "Enter size of the array: \n"; 
    std::cin >> size;
    int* arr = new int[size];
    int num = 0;
    std::cout << "Enter numbers of the array: \n"; 
    std::cin >> num;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int result = bigger_than_a(arr, size, num);
    if (result == -1) {
        std::cout << "There is no number in the array greater than " << num << std::endl;
    } else {
        std::cout << "The smallest number in the array that is greater than " << num << ": " << result << std::endl;
    }
    delete [] arr;
    return 0;
}

#include <iostream>

int arithmetic_mean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size; 
}

int main() {
    int size = 0;
    std::cout << "Enter array size: \n";
    std::cin >> size;

    int* arr = new int[size]; 

    std::cout << "Enter values: \n" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Arithmetic mean: " << arithmetic_mean(arr, size) << std::endl;

    delete[] arr; 

    return 0;
}
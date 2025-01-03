#include<iostream>
#include<algorithm>
int max_in_aray(int* arr, int size);

int main() {
    int size = 0;
    std::cout << "Enter size of the array: \n";
    std::cin >> size;

    int* arr = new int[size]; 

    std::cout << "Enter nums of the array: \n";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Max_el from array: " << max_in_aray(arr, size) << "\n";

    return 0;
    delete[] arr;
}

int max_in_aray(int* arr, int size) {
    if(size <= 0){
        return 0;
    }

    int max_el = arr[0];

    for(int i = 1; i < size; ++i) {
        max_el = std::max(max_el, arr[i]);
    }

    return max_el;
}
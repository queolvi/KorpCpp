#include <iostream>
#include <algorithm> // for abs()

unsigned moveright(int *arr, int key, unsigned last);
void insertion_sort_abs(int *arr, unsigned sz);

int main() {
    unsigned size = 0; std::cout << "Enter size of the array: "; std::cin >> size;
    int* arr = new int[size];
    std::cout << "Enter elements from the array: \n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    insertion_sort_abs(arr, size);
    std::cout << "Array with abs values: \n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr; 
    return 0;
}

unsigned moveright(int *arr, int key, unsigned last) {
    unsigned pos = last;
    while (pos > 0 && std::abs(arr[pos - 1]) > std::abs(key)) { // Сравнение абсолютных значений
        arr[pos] = arr[pos - 1];
        pos--;
    }
    return pos;
}

void insertion_sort_abs(int *arr, unsigned sz) {
    for (unsigned i = 1; i < sz; ++i) {
        int key = arr[i];
        unsigned pos = moveright(arr, key, i);
        arr[pos] = key;
    }
}
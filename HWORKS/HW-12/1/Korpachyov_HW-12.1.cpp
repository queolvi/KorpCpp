#include <iostream>

unsigned moveright(int *arr, int key, unsigned last);
void insertion_sort(int *arr, unsigned sz);

int main() {
    unsigned size = 0; std::cout << "Enter size of the array: "; std::cin >> size;
    int* arr = new int[size];
    std::cout << "Enter elements from the array: \n";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    insertion_sort(arr, size);
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    return 0;
}

unsigned moveright(int *arr, int key, unsigned last) {
    unsigned pos = last;
    while (pos > 0 && arr[pos - 1] > key) {
        arr[pos] = arr[pos - 1];
        pos--;
    }
    return pos;
}

void insertion_sort(int *arr, unsigned sz) {
    for (unsigned i = 1; i < sz; ++i) { //Начинаем с 1, т.к. первый элемент уже отсортирован
        int key = arr[i];
        unsigned pos = moveright(arr, key, i);
        arr[pos] = key;
    }
}

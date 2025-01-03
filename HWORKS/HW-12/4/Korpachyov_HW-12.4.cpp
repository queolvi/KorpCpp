#include<iostream>

int find_missing_number(int* arr, unsigned size);
void insertion_sort(int *arr, unsigned sz);
unsigned moveright(int *arr, int key, unsigned last);
int main() {

unsigned size = 0; std::cout << "Enter size of the array: "; std::cin >> size;
int* arr = new int[size];
std::cout << "Enter elements from the array: \n";
for(int i = 0; i < size; ++i) {
    std::cin >> arr[i];
}
std::cout << find_missing_number(arr, size);

std::cout << std::endl;
    delete[] arr;
    return 0;
}

int find_missing_number(int* arr, unsigned size) {

    insertion_sort(arr, size);
    int curr_positive = 1;
    for(unsigned i = 0; i < size; ++i) {
        if(arr[i] > 0) {
            if(arr[i] == curr_positive) {
                curr_positive++;
            } else if(arr[i] > curr_positive) {
                return curr_positive;
            }
        }
    }
return curr_positive;

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

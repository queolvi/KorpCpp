#include <iostream>
#include <numeric>


int find_lost_number(int* arr, int n);


int main() {
    int size = 0; std::cout << "Enter size of the array: "; std::cin >> size;
    if (size <= 0) {
        std::cout << 1 << std::endl; // Обработка пустого или некорректного размера массива
        return 0;
    }
    
    int* arr = new int[size];
    std::cout << "Enter elements from the array: \n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int lost_number = find_lost_number(arr, size + 1);
    std::cout << lost_number << std::endl;

    delete[] arr;
    return 0;
}

int find_lost_number(int* arr, int n) {
    bool has_negative = false;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] < 0) {
            has_negative = true;
        }
    }

    if (has_negative) {
        int min_val = arr[0];
        for(int i = 0; i < n - 1; ++i) {
            if(arr[i] < min_val) {
                min_val = arr[i];
            }
        }
        long long expected_sum = 0;
        for (int i = 0; i < n; ++i) {
            expected_sum += (min_val + i);
        }

        long long actual_sum = 0;
        for (int i = 0; i < n - 1; ++i) {
            actual_sum += arr[i];
        }

        return (int)(expected_sum - actual_sum);
    } else {
        long long expected_sum = (long long)n * (n + 1) / 2;
        long long actual_sum = 0;
        for(int i = 0; i < n - 1; ++i) {
            actual_sum += arr[i];
        }
        return (int)(expected_sum - actual_sum);
    }
}

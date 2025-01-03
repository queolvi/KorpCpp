#include <iostream>

int count_negative_values(int* arr, int size);
int count_positive_values(int* arr, int size);

int main() {
    int size = 0; std::cout << "Enter size of the array: "; std::cin >> size;
    int* arr = new int[size];
    std::cout << "Enter elenents from the array: \n";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    int negative_count = count_negative_values(arr, size);
    int positive_count = count_positive_values(arr, size);

    std::cout << "Negative values: " << negative_count << std::endl;
    std::cout << "Positive values: " << positive_count << std::endl;

    delete[] arr;
    return 0;
}

int count_negative_values(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int count_positive_values(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}
// ниже приведён код, написанный мною ранее, с сложность. по времени O(n^2) и по памяти O(1)
// что бы привести код выше в форму O(n) я убрал вложенные циклы у счётчика(count_has_negative && count_has_positive) положительных и отрицательных значений вложенные циклы
// и в целом, я понял, что можно обойтись лишь двумя функциями в этом решении
#ifdef AA
#include<iostream>
bool has_negative(int* arr, int size);
int count_negative_values(int* arr, int size);
bool has_positive(int* arr, int size);
int count_positive_values(int* arr, int size);

int main() {
    int size = 0; std::cin >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    
    bool result_f_neg = has_negative;
    bool result_f_pos = has_positive;
    
    std::cout << (result_f_neg ? "Has negative" : "Haven't negative") << std::endl;

    std::cout << "If the array have negative values, ok, but how ? \n";
    std::cout << count_negative_values(arr, size) << " Values  \n";
    
    std::cout << "Ok, now check, is there any positive values.. \n";
    std::cout << (result_f_pos ? "Has positive" : "Haven't positive") << std::endl;
    
    std::cout << "So, get check, how many positive values! \n";
    std::cout << count_positive_values(arr, size) << " Values \n" ;
    delete[] arr;
    return 0;
}

bool has_negative(int* arr, int size) {
    for(int i = 0; i < size; ++i) {
        if(arr[i] < 0) {
            return true;
        } 
    }
return false;
}
int count_negative_values(int* arr, int size){
    int sum = 0;
    for(int i = 0; i < size; ++i) {
        if(arr[i] < 0) {
            sum += has_negative(arr,size);
        }
    }
    return sum;
}
//
bool has_positive(int* arr, int size) {
    for(int i = 0; i < size; ++i) {
        if(arr[i] > 0) {
            return true;
        } 
    }
return false;
}
int count_positive_values(int* arr, int size){
    int sum = 0;
    for(int i = 0; i < size; ++i) {
        if(arr[i] > 0) {
            sum += has_positive(arr,size);
        }
    }
    return sum;
}
#endif
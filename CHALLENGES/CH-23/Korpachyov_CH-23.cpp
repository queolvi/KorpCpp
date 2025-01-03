#include<iostream>

int new_avg(int arr[], int size, int new_don);

int main(){

    int size = 0, new_don = 0;
    std::cout << "Enter size of the array: " << std::endl;
    std::cin >> size;

    std::cout << "Enter value of the new donation: " << std::endl;
    std::cin >> new_don;
    std::cout << "Enter donations: " << std::endl;

    int* arr = new int[size];

for(int i = 0; i < size; ++i){
    std::cin >> arr[i];
}

    int next_don = new_avg(arr, size, new_don);

if(next_don > 0){
    std::cout << "Min donation is: " << next_don;
} else {
    std::cout << "Unable to achieve the required average value." << std::endl;
    }

    delete[] arr;
    return 0;
}


int new_avg(int arr[], int size, int new_don){
    int sum = 0;
for(int i = 0; i < size; ++i){
    sum += arr[i];
}

    int req_sum = (size + 1) * new_don;
    int next_don = req_sum - sum;

if(next_don > 0){
    return next_don;
} else {
    return -1;
}

    return 1;
}
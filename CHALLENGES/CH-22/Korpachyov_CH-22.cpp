#include<iostream>

int* eviction(int arr[], int size, int& new_size);

int main(){

int size = 0;
std::cout << "Enter size of array: " << std::endl;
std::cin >> size; 

int* arr = new int[size];

for(int i = 0; i < size; ++i){
    std::cin >> arr[i];
}

int new_size = size;
int* remaining_Families = eviction(arr, size, new_size);

std::cout <<  "Remaining Families: " << std::endl;

for(int i = 0; i < new_size; ++i){

    std::cout << remaining_Families[i] <<" ";
}
std::cout << std::endl;

delete[] arr;
delete[] remaining_Families;

    return 0;
}


int* eviction(int arr[], int size, int& new_size){

int* counts = new int[size];

for(int i = 0; i < size; ++i){
    counts[i] = 0;
}

for(int i = 0; i < size; ++i){
    counts[arr[i]]++;
}
int* result = new int[size];
int result_index = 0;

for(int i = 0; i < size; ++i){
    if(counts[arr[i]] % 2 == 0){
        result[result_index++] = arr[i];
    }
}

new_size = result_index;
delete[] counts;

return result;

}

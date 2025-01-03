#include<iostream>
#include<algorithm>
#include<cmath>
#include<cassert> 

int lcm(int x, int y);
int eq_mod(int x, int y);
int gcd(int x, int y);
int using_lcm_for_arr(int* arr, int size);

int main(){
    
    int size = 0;
    int* nums = new int[size];

    std::cout << "Enter size of the array: \n";
    std::cin >> size;
   
    std::cout << "Enter number for calculate lcm: \n";
    
    for(int i = 0; i < size; ++i){
        std::cin >> nums[i];
    }

    std::cout << "Result with foo lcm: " << using_lcm_for_arr(nums,size);

    delete[] nums;
    return 0;
}

int using_lcm_for_arr(int* arr, int size){
   if (size <= 0) {
    return 1; // Возвращаем 1, если размер массива меньше 2
  }
    if(size == 1){
        return arr[0];
    }

  // Находим НОК первых двух элементов
  int res = lcm(arr[0], arr[1]);

  // Проходим по остальным элементам массива
  for (int i = 2; i < size; ++i) {
    res = lcm(res, arr[i]);
  }

  return res;
}

int lcm(int x, int y){
    
    return (x * y) / gcd( x,  y);
   
}

int eq_mod(int x, int y) {
    int q = x % y;
    if (q < 0) q += abs(y);
    return q;
}

int gcd(int x, int y) {
    int q;
    assert(y != 0); 
    q = eq_mod(x, y);
    if (q == 0) return y;
    return gcd(y, q);
}
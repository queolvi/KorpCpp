#include<iostream>

void to_fib_base(int n, int* fib_digits, int & digits_count);

int main(){

int num = 0;
int fib_digits[30] = {0}, dig_count = 0;

std::cout << "Enter a natural number:" << std::endl;
std::cin >> num;

to_fib_base(num, fib_digits, dig_count);

std::cout << "Number on a Fibonacci base: " << std::endl;
for(int i = 0; i < dig_count; ++i){
    std::cout << fib_digits[i];
}

std::cout << std::endl;

    return 0;
}



void to_fib_base(int n, int* fib_digits, int & digits_count){

int f_nums[30] = {0}, i = 2;
f_nums[0] = 0;
f_nums[1] = 1;

while(f_nums[i - 1] <= n){
    f_nums[i] = f_nums[i - 1] + f_nums[i - 2];
    i++;
}
digits_count = 0; 
while(n > 0){
    if(f_nums[i] <= n) {
        fib_digits[digits_count] = 1;
        n -= f_nums[i];
        digits_count++;
    } else{
        fib_digits[digits_count] = 0;
        digits_count++;
    }
    i--;
 }
}

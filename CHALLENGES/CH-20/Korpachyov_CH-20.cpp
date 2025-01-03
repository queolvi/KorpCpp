#include<iostream>

bool proof(double num);

int main(){

double num = 0.0;
std::cout << "Enter num: ";
std::cin >> num;
std::cout << proof(num) << std::endl;


    return 0;
}

bool proof(double num){
    return (static_cast<int>(num) % 2 == 0); // Преобразуем num в целое число
}


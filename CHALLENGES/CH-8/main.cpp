#include<iostream>
#include<string>
std::string even_or_odd(int num);

int main() {

    int num = 0;
    std::cout << "Enter your num: " << std::endl;
    std::cin >> num;
    std::string res = even_or_odd(num);
    std::cout << "This number: " << res;


    return 0;
}

std::string even_or_odd(int num){

if(num % 2 == 0){
    return  "Even";
} else{
    return "Odd";
}

}
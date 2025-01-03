#include<iostream>

int pow_n(int n, int pow);


int main() {

    int n = 0; int pow = 0;
    std::cout << "Enter number: " ; std::cin >> n;
    std::cout << "Enter power for this number: " ; std::cin >> pow;
    std::cout << "Result: " << pow_n(n, pow);
    return 0;
}

int pow_n(int n, int pow) {
    if(pow < 0) return pow_n(1/n, -n);
    if(pow == 0) return 1;
    if(pow % 2 == 0) return pow_n(n * n, pow /2);
    else {
        return n * pow_n(n * n, (pow -1) /2 );
    } 
}
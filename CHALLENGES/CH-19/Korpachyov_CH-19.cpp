#include <iostream>

char swap_to_ASCII(int num); 

int main() {
    int num = 0;
    std::cout << "Enter num:\t";
    std::cin >> num;
    std::cout << "Result:\t" << swap_to_ASCII(num);

    return 0;
}

char swap_to_ASCII(int num) {
    return static_cast<char>(num); 
}

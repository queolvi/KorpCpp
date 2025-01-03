#include <iostream>

int ret_max_val(int num_1, int num_2, int num_3);

int main() {
    int num_1 = 0, num_2 = 0, num_3 = 0;
    std::cout << "Enter 3 numbers (from 1 to 10):" << std::endl;
    std::cin >> num_1 >> num_2 >> num_3;
    std::cout << "Values before calculating: " << num_1 << " " << num_2 << " " << num_3 << std::endl; 
    std::cout << "Maximum value: " << ret_max_val(num_1, num_2, num_3) << std::endl;

    return 0;
}

int ret_max_val(int num_1, int num_2, int num_3) {
    
    int result1 = num_1 * (num_2 + num_3); // (num_2 + num_3) * num_1
    int result2 = (num_1 + num_2) * num_3; // (num_1 + num_2) * num_3
    int result3 = num_1 + num_2 + num_3;   // num_1 + num_2 + num_3
    int result4 = num_1 * num_2 * num_3;   // num_1 * num_2 * num_3

    
    int max_result = std::max(result1, std::max(result2, std::max(result3, result4)));

    return max_result;
}

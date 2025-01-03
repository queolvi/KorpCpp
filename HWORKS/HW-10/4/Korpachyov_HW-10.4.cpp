#include<iostream>
#include<vector>

std::vector<int> prime_factorization (int n);

int main () {

int n = 0;
std::cout << "Enter number N: "; std::cin >> n;
    
std::vector<int> num_factors = prime_factorization(n);

if(num_factors.empty()) {
    std::cout << "Number " << n << " -- is prime" << std::endl; 
} else {
    std::cout << "Prime factorizes of the number " << n << std::endl;
    int sum = 0;
    for (int num_factor : num_factors) {
        std::cout << num_factor << " ";
        sum += num_factor;
    } 
    std::cout << std::endl;
    std::cout << "Sum of the prime factors: " << sum << std::endl;
}
    return 0;
}

std::vector<int> prime_factorization (int n) {
std::vector<int> num_factors;

if (n <= 1) {
    return num_factors;
    }

for (int i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
        num_factors.push_back(i);
        n /= i;
        }
}
if (n > 1) {
    num_factors.push_back(n);
    }

    return num_factors;
}
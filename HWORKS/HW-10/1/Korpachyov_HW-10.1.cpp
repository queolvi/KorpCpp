#include <iostream>
#include<vector>

std::vector<bool> sieve_of_eratosthenes(int n);
int* find_nulls_And_1(int n); // Изменяем тип возвращаемого значения на int*

int main() {
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;
    std::cout << "Result: ";

    int* result = find_nulls_And_1(n);
    for (int i = 0; i < n - 1; ++i) { // Исправлено!
        std::cout << result[i]; 
    }
    std::cout << std::endl;
    delete[] result;
    return 0;
}

int* find_nulls_And_1(int n) {
    std::vector<bool> is_prime = sieve_of_eratosthenes(n);
    int* result = new int[n - 1]; // Выделяем динамическую память

    // Формируем массив с результатом
    for (int i = 2, j = 0; i < n; ++i, ++j) {
        result[j] = (is_prime[i] ? 0 : 1); 
    }

    return result;
}

std::vector<bool> sieve_of_eratosthenes(int n) {
    std::vector<bool> is_prime(n + 1, true);

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i])
            for (int j = i * i; j <= n; ++j)
                is_prime[j] = false;
    }
    return is_prime;
}
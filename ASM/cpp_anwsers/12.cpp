#include <iostream>

struct rational {
    long long numerator;   // Числитель
    long long denominator; // Знаменатель
};

rational adding_fractions(const rational& a, const rational& b);

int main() {
    rational a, b;

    std::cout << "Enter numerator a and b: \n";
    std::cin >> a.numerator >> b.numerator;
    std::cout << "Enter denominator a and b: \n";
    std::cin >> a.denominator >> b.denominator;

    // Проверка на 0 для знаменателей
    if (a.denominator == 0 || b.denominator == 0) {
        std::cerr << "Error: Denominator cannot be zero." << std::endl;
        return 1;
    }

    rational result = adding_fractions(a, b);
    std::cout << "Result: " << result.numerator << "/" << result.denominator << std::endl;

    return 0;
}

rational adding_fractions(const rational& a, const rational& b) {
    // a.numerator * b.denominator
    long long term1 = a.numerator * b.denominator;

    // b.numerator * a.denominator
    long long term2 = b.numerator * a.denominator;

    // Суммируем
    long long result_numerator = term1 + term2;

    // a.denominator * b.denominator
    long long result_denominator = a.denominator * b.denominator;

    rational result;
    result.numerator = result_numerator;
    result.denominator = result_denominator;

    return result;  // Возвращаем result напрямую
}

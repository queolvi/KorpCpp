#include <random>
#include <set>
#include <iostream>

static std::random_device rd;
static std::mt19937 rng{ rd() };

int roll_dice(int min, int max);
double roll_normal_dice(double mean, double stddev);
double roll_poisson_dice(double lambda);
std::set<int> generate_variant(unsigned tasks_in_variant, unsigned overall_tasks);
unsigned long long fib(unsigned n, unsigned m);

int main() {
    unsigned m[9] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Для каждого модуля
    for (int j = 0; j < 9; ++j) {
        // Выводим 30 элементов
        for (int i = 0; i < 30; ++i) {
            unsigned long long result = fib(i, m[j]);
            std::cout << "Index: " << i 
                      << ", Modulus: " << m[j] 
                      << ", Res: " << (result % 10) << std::endl;
        }
        std::cout << std::endl; // Разделитель между модулями
    }

    return 0;
}

unsigned long long fib(unsigned n, unsigned m) {
    if (n <= 1) return n;

    unsigned long long a = 0, b = 1, c;
    for (unsigned i = 2; i <= n; ++i) {
        c = (a + b) % m;
        a = b;
        b = c;
    }
    return b;
}

std::set<int> generate_variant(unsigned tasks_in_variant, unsigned overall_tasks) {
    std::set<int> variant{};
    while (variant.size() < tasks_in_variant) {
        variant.insert(roll_dice(1, overall_tasks));
    }
    return variant;
}

double roll_poisson_dice(double lambda) {
    std::poisson_distribution<int> pd(lambda);
    return pd(rng);
}

double roll_normal_dice(double mean, double stddev) {
    std::normal_distribution<double> nd(mean, stddev);
    return nd(rng);
}

int roll_dice(int min, int max) {
    std::uniform_int_distribution<int> uid(min, max);
    return uid(rng);
}
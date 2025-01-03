#include <iostream>

long long pisanoPeriod(long long m) {
    if (m <= 1) {
        return m;
    }

    long long a = 0, b = 1, c;
    long long period = 0;

    for (int i = 0; i <= m * m; ++i) { 
        c = (a + b) % m;
        a = b;
        b = c;
        
        period++; // Увеличиваем счетчик периода на 1
        if (a == 0 && b == 1) { 
            return period; // Возвращаем текущее значение периода
        }
    }
    return period;
}

int main() {
    long long m;
    std::cout << "Enter mod: ";
    std::cin >> m;
    std::cout << "Pisano period length for mod " << m << ": " << pisanoPeriod(m) << std::endl;
    return 0;
}
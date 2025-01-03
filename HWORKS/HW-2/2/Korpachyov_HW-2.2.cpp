#include<iostream>

int main()
{
    // Представим, что у нас есть уравнение kx + b = a, решим его, вычислив корень
    double k = 0, x = 0, a = 0, b = 0; // Создание переменных для уравнения

    std::cout << "Enter the values k, a, b: " << std::endl; 
    std::cin >> k >> b >> a; // ввод значений уравнения

    x = (a - b) / k; // вычисление корня
    std::cout << x; // вывод результата вычисления корня

    return 0;
}

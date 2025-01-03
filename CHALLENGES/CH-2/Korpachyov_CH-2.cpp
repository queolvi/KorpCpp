#include <iostream>

int main() {

    setlocale(LC_ALL,"RU"); 
    std::system("chcp 1251"); 

    const double cm_to_m = 0.01; // Коэфф преобразования сантиметров в метры

    int height_cm;

    std::wcout << L"Введите рост в сантиметрах: _";
    std::cin >> height_cm;

    // рост в метры и сохраняем результат в переменной типа double
    double meters = height_cm * cm_to_m;

    // остаток от деления роста на 100, чтобы получить количество сантиметров
    int rem = height_cm % 100; 

    // результат преобразования роста в метры и сантиметры
    std::wcout << L"Ваш рост: " << meters << L" м " << rem << L" см" << std::endl;

    return 0;
}

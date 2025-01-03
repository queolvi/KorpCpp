#include <iostream>

int main() {
    
    std::system("chcp 1251"); 
    setlocale(LC_ALL,"RU"); 

    double h_in_feet = 0, h_in_inchs = 0, w_in_pnds = 0, w_in_kg = 0, final_h_in_inchs = 0, BMI = 0; // рост в футах, дюймах, вес в фунтах и кг, финальное знач-е в дюймах(рост) и ИМТ
    std::wcout << L"Введите рост (футы, дюймы): "; 
    std::cin >> h_in_feet >> h_in_inchs; // ввод данных от пользователя
    std::wcout << L"Введите вес (фунты): ";
    std::cin >> w_in_pnds; // ввод данных от пользователя

    // Преобразование роста в дюймы
    final_h_in_inchs = (h_in_feet * 12) + h_in_inchs;

    // Преобразование веса из фунтов в кг
    w_in_kg = w_in_pnds / 2.2;

    // Преобразование роста в метры
    double height_in_meters = final_h_in_inchs * 0.0254; 

    // Расчет ИМТ
    BMI = w_in_kg / (height_in_meters * height_in_meters);

    // Вывод ИМТ на экран
    std::wcout << L"BMI: " << BMI << std::endl;

    return 0;
}

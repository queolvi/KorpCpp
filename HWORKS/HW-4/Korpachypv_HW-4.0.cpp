#include <iostream>

int main() {

    setlocale(LC_ALL,"RU"); // функция, позволяющая отображать русский язык №1
    std::system("chcp 1251"); // надстройка(кодовая страница)

    int divisible = 0, divider = 0, priv = 0, remains = 0; // делимое, делитель, частное и остаток

    std::wcout << L"Введите делимое: ";
    std::cin >> divisible;

    std::wcout << L"Введите делитель: ";
    std::cin >> divider;

    if (divider == 0) 
{
    std::wcout << L"Деление на ноль невозможно!" << std::endl;
    return 1; // При ошибке возвращаем 1
}

    // Вычисление частного и остатка
    priv = divisible / divider; // делимое / делитель
    remains = divisible % divider; // делимое % делитель

     // Вывод результатов
    std::wcout << L"Частное: " << priv << std::endl;
    std::wcout << L"Остаток: " << remains << std::endl;


    return 0;
}

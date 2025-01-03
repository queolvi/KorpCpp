#include<iostream>

int main()
{

    setlocale(LC_ALL,"RU"); // функция, позволяющая отображать русский язык
    std::system("chcp 1251"); // надстройка(кодовая страница)

    float side_of_a_cube = 0; // создаём переменную, несущую в себе значение стороны куба
    std::wcout << L"Введите известную вам сторону куба! " << std::endl;
    std::cin >> side_of_a_cube; // ввод стороны куба

    float volume_of_a_cube = 0; // создаём переменную, обозначающую объём куба
    volume_of_a_cube = side_of_a_cube * 3; // операция возведения стороны куба в куб
    std::wcout << L"Объём куба со стороной " << side_of_a_cube << L" = " << volume_of_a_cube << std::endl;
     
     return 0;
}
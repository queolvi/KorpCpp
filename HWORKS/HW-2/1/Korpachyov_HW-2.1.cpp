#include<iostream>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"RU"); // функция, позволяющая отображать русский язык №1
    std::system("chcp 1251"); // надстройка(кодовая страница)

    int price_per_liter_of_paint = 0; // цена литра краски
    int the_amount_of_paint = 0; // количество краски
    int wall = 0; // переменная, отвечающая за кол-во стен
    float width = 0, length = 0, high = 0; // длина, ширина и высота стен

    std::wcout << L"Введите количество стен, их ширину и длину: " << std::endl;
    std::cin >> wall >> width >> length; // ввод пользователем величин

    std::wcout << L"Введите высоту стен: ";
    std::cin >> high; // ввод размера высоты стен

    std::wcout << L"Введите цену краски за 1 литр: ";
    std::cin >> price_per_liter_of_paint; // ввод цены за литр краски

    float square_of_walls = 2 * (length + width) * high; // операция вычисления площади стен

    float square_of_windows = 0; // площадь окон
    float square_of_doors = 0; // площадь дверей

    std::wcout << L"Введите площадь окон и дверей: " << std::endl;
    std::cin >> square_of_windows >> square_of_doors;

    float square_of_wall_painting = square_of_walls - square_of_windows - square_of_doors; // нахождение конечной площади покраски
    float square_of_a_liter_of_paint = 10;

    float the_final_amount_of_paint = square_of_wall_painting / square_of_a_liter_of_paint; // необходимое воличество краски
    float total_cost = the_final_amount_of_paint * price_per_liter_of_paint;
    
    std::wcout << L"Необходимое количество краски: " << the_final_amount_of_paint << L" литров" << std::endl;
    std::wcout << L"Общая стоимость: " << total_cost << L" рублей" << std::endl;

    return 0;
}

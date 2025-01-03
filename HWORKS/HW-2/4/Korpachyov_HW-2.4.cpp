#include<iostream>

int main()
{
    setlocale(LC_ALL,"RU"); 
    std::system("chcp 1251"); 

    int angles_of_a_triangle = 180; // сумма углов треугольника
    int frst_angl = 0, scnd_angl = 0; // первый и второй угол треугольника
    int third_angl = 0;  // третий угол

    std::wcout << L"Введите 2 известные вам углы треугольника" << std::endl;
    std::cin >> frst_angl >> scnd_angl; // ввод данных пользователем

    // проверка на логичность введения данных пользователем
    if (frst_angl + scnd_angl >= angles_of_a_triangle) {
        std::wcout << L"Неверные данные! Сумма двух углов треугольника не может быть больше или равна 180 градусов." << std::endl;
        return 1; // возвращается один, в случае ошибки
    }

    third_angl = angles_of_a_triangle - frst_angl - scnd_angl; // операция нахождения третьего угла
    std::wcout << L"Третий угол треугольника = " << third_angl << std::endl;

    return 0; 
}

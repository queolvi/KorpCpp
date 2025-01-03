#include<iostream>


int main()
{

    std::system("chcp 1251"); // кодировка для консоли
    setlocale(LC_ALL,"RU"); // устанавливаем локаль

    double distance_in_km = 0; // расстояние, пройденное в пути в км
    double nmbr_of_liters_of_gas = 0; // кол-во бензина
    double gas_consumption = 0; // расход топлива

    std::wcout << L"Введите расстояние, которые вы проехали:" << std::endl;
    std::cin >> distance_in_km; // ввод данных от пользователя

    std::wcout << L"Введите кол-во литров бензина:" << std::endl;
    std::cin >> nmbr_of_liters_of_gas; // ввод данных от пользователя

    
    gas_consumption = (distance_in_km / nmbr_of_liters_of_gas) * 100; // формула расчёта топлива

    std::wcout << L"На дорогу вы потратили " << gas_consumption << L" литров бензина" << std::endl; 



    return 0;
}
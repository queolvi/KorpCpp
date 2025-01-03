#include <iostream>
#include <locale.h> 

int main() {
    
    std::system("chcp 1251"); // кодировка для консоли
    setlocale(LC_ALL,"RU"); // устанавливаем локаль

    // переменная для хранения количества секунд, введенного пользователем
    long seconds = 0;
    std::wcout << L"Введите кол-во секунд:" << std::endl; 
    // ввод кол-ва секунд
    std::cin >> seconds;
    // вывод
    std::wcout << L"Вы ввели " << seconds << L" секунд" << std::endl;

    // опр-м константы для кол-ва ч-в в сутках, минут в часе и секунд в минуте
    const int HOURS_IN_DAY = 24;
    const int MINUTES_IN_HOUR = 60;
    const int SECONDS_IN_MINUTE = 60;

    // объ-м переменные для хранения количества дней, часов и минут
    int days = 0, hours = 0, minutes = 0; 

    // вычисляем кол-во дней, используя целочисл-е деление
    days = seconds / (HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE); 
    // исп-м опер-р остатка от деления для получения кол-ва секунд, оставшихся после перевода в дни
    seconds %= (HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE); 

    // вычисл-м кол-во ч, используя целочисл-е деление
    hours = seconds / (MINUTES_IN_HOUR * SECONDS_IN_MINUTE); 
    // исп-м опер-р остатка от деления для получения кол-ва секунд, оставшихся после перевода в часы
    seconds %= (MINUTES_IN_HOUR * SECONDS_IN_MINUTE); 

    // вычисл кол-во минут, используя целочисленное деление
    minutes = seconds / SECONDS_IN_MINUTE;
    // исп-м опер-р остатка от деления для получения кол-ва с, оставшихся после перевода в минуты
    seconds %= SECONDS_IN_MINUTE; 

    // Выводим на экран сообщение о том, сколько секунд, введённых пользователем, есть в:
    std::wcout << L"Вот, сколько секунд, введённых вами есть в:" << std::endl;
    // Выводим количество дней
    std::wcout << L"Сутках = " << days << std::endl;
    // Выводим количество часов
    std::wcout << L"Часах = " << hours << std::endl;
    // Выводим количество минут
    std::wcout << L"Минутах = " << minutes << std::endl;
    // Выводим количество секунд
    std::wcout << L"Секундах = " << seconds << std::endl;

    return 0;
}

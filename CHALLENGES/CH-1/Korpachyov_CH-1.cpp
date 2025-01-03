#include<iostream>
#include<locale.h>
int main()

{
    setlocale(LC_ALL,"RU"); 
    std::system("chcp 1251"); 

    std::wcout << L"Введите желаемое расстояние в фарлонгах, что бы перевести его в ядры!" << std::endl;
    
    float Farl = 0;
    float dist = 0;
    float Yard = 220;

    std::cin >> Farl;
    Farl = Farl * Yard;
    dist = Farl;
    
    std::cout<< dist;
    return 0;
}
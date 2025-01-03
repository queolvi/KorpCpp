#include <iostream>
#include <typeinfo>
#include <locale.h>
#include <string>
#include <cwchar> 
#include <map>

template <typename T>
void showTypeAndSize() {
    setlocale(LC_ALL, "RU");

    std::map<std::string, std::wstring> typeNames = {
        {"c", L"char"},
        {"s", L"short int"},
        {"i", L"int"},
        {"x", L"long long int"},
        {"f", L"float"},
        {"d", L"double"},
        {"e", L"long double"},
        {"b", L"bool"},
        {"w", L"wchar_t"},
        {"y", L"size_t"},
        {"x", L"ptrdiff_t"} 
    };

    std::string typeName = typeid(T).name(); 
    std::wcout << L"Тип данных: " << typeNames[typeName] << L"\t"; 

    if (std::is_same_v<T, void>) {
        std::wcout << L"Размер: Неприменимо (void)" << std::endl;
    } else {
        std::wcout << L"Размер: " << sizeof(T) << L" байт" << std::endl;
    }
}

int main() {
    std::system("chcp 1251"); 
    setlocale(LC_ALL, "RU"); 
    std::wcout << L"---------------------------------------" << std::endl;
    std::wcout << L"|     Тип данных     |   Размер (байт) |" << std::endl;
    std::wcout << L"---------------------------------------" << std::endl;

    showTypeAndSize<char>();
    showTypeAndSize<short int>();
    showTypeAndSize<int>();
    showTypeAndSize<long long int>();
    showTypeAndSize<float>();
    showTypeAndSize<double>();
    showTypeAndSize<long double>();
    showTypeAndSize<bool>();
    showTypeAndSize<wchar_t>();
    showTypeAndSize<size_t>();
    showTypeAndSize<ptrdiff_t>();

    std::wcout << L"---------------------------------------" << std::endl;

    return 0;
}

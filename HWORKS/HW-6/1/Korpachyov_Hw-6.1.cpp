#include <iostream>
#include <algorithm>
#include <string>

int ret_happy_year(int year);


int main() {
  int year = 0;
  std::cout << "Bye! See ya on happy next year!" << std::endl;
  std::cout << "Wait...What year is it now?" << std::endl;
  std::cin >> year;
  std::cout << "Aaa, so that's how it is!, see ya in " << ret_happy_year(year) << std::endl;

  return 0;
}

 int ret_happy_year(int year) {
  while (true) {
    year++;
    std::string yearStr = std::to_string(year); //записываем значение в строку 

    // Проверка на уникальность цифр без сортировки и без break
    bool unique = true; // создаём и инициализируем булевую переменную unique со значением true
    for (int i = 0; i < yearStr.size() && unique; ++i) { // пока i < yeariStr.size() && unique; i++ 
      for (int j = i + 1; j < yearStr.size() && unique; ++j) {
        if (yearStr[i] == yearStr[j]) { // проверяем, есть ли одинаковые цифры в году
          unique = false; // если найдены повторяющиеся цифры, устанавливаем unique в false
        }
      }
    }


    if (unique) {
      return year; // Возвращаем счастливый год
    }

  }
 }
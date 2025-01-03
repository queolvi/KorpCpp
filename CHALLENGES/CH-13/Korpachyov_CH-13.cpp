#include <iostream>
#include <string>

std::string calculate_child_age(const std::string& age) {
    if(age == "0") {
        return "The child hasn't been born yet to answer the question=) ";
    }
    if (age.length() == 1 && age[0] >= '1' && age[1] <= '9') { // проверка на то, является ли строка одной цифрой от 0 до 9
        return age;  // Возвращаем значение сразу, если найдено совпадение
    }
    return "Invalid input"; // выводится, если ввод некорректен
}

int main() {
    std::string x_years_old;
    std::cout << "How old are you? " << std::endl;
    std::cin >> x_years_old;

    std::cout << calculate_child_age(x_years_old) << std::endl; 
    return 0;
}

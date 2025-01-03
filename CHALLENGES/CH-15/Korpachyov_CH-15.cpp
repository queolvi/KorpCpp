#include <iostream>
#include <string>

int count_char_occurrences(const std::string& line, char symbol);

int main() {
    char a; 
    std::string line;

    std::cout << "Enter symbol and string: " << std::endl;
    std::cin >> a >> line;
    std::cout << count_char_occurrences(line, a) << std::endl;

    return 0;
}

int count_char_occurrences(const std::string& line, char symbol) {
    int count = 0;

    for (char c : line) {
        if (c == symbol) {
            count++;
        }
    }
    return count; 
}
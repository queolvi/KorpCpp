#include<iostream>
#include<string>
#include<cctype>
std::string swap_to_down_register(const std::string& line);


int main() {
    std::string input;
    std::cout << "Enter string: ";
    std::getline(std::cin, input);

    
    std::string result = swap_to_down_register(input);
    std::cout << "String in down register: " << result << std::endl;

    return 0;
}

std::string swap_to_down_register(const std::string& line){
std::string lower_case_line;
for(char c : line){
     lower_case_line += std::tolower(c);
    }
return lower_case_line;
}

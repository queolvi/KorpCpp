#include<iostream>
#include<string>
#include<cctype>
std::string swap_to_up_register(const std::string& line);


int main() {
    std::string input;
    std::cout << "Enter string: ";
    std::getline(std::cin, input);

    
    std::string result = swap_to_up_register(input);
    std::cout << "String in up register: " << result << std::endl;

    return 0;
}

std::string swap_to_up_register(const std::string& line){
std::string upper_case_line;
for(char c : line){
     upper_case_line += std::toupper(c);
    }
return upper_case_line;
}

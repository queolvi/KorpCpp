#include<iostream>
#include<string>

std::string jump_calculation(int num);


int main(){

int number_of_jumps = 0;
std::cout << "Enter number of jumps: " << std::endl; 
std::cin >> number_of_jumps;

std::cout << "Alexandra's result:\t" << jump_calculation(number_of_jumps);


}


std::string jump_calculation(int num){
    if(num >= 15) return "Great, now move on to tricks";
    else return "Keep at it until you get it";
}
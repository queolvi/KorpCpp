#include<iostream>
#include<string>
#include<algorithm>

std::string output_month(int day, int amount);

int main() {

int n = 0, a = 0;
std::cin >> n >> a; 
std::cout << output_month;
    return 0;
}

std::string output_month(int day, int amount){

if(day >= 1 && day <= 7){
    if(amount >= 1 && amount <= 99){
        if(day <= amount){
            for(int i = 0; i < day; ++i){
                for(int j = 1; j < amount; ++j){
                    std::cout << j+1 << " ";
                    }
                if(amount == 1 && day == 1){
                std::cout << std::endl;
                if(amount >= 2 && day == 8){
                std::cout << std::endl;
                if(amount >= 3 && day == 15){
                std::cout << std::endl;
                } else if(amount <= 7 && day <= 99 ){
                    std::cout << std::endl;
                            }
                        }
                    }
                }
            } 
        }
    }
    return "UNDEFINED";
}
#include<iostream>
#include<string>
std::string love_fortune(int size);

int main(){

    int petals = 0;
    std::cout << "Enter the number of petals torn off: " << std::endl;
    std::cin >> petals;

    if(petals <=0) {
        std::cout << "Invalid input. Number of petals must be greater than zero." << std::endl;
    } else{
        std::cout << "Your result is: " << love_fortune(petals) << std::endl;
    }


    return 0;
}

std::string love_fortune(int petals){

    std::string states[] = {
    "I love you",
    "a little",
    "a lot",
    "passionately",
    "madly",
    "not at all"
  };

  int  stateIndex = (petals - 1) % 6; 

  return states[stateIndex];

    
}

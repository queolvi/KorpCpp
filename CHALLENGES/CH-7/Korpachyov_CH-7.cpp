#include<iostream>
#include<string>
std::string love_fortune(int size);

int main(){

    int a = 0;
    std::cout << "Enter the number of petals torn off: " << std::endl;
    std::cin >> a;
    std::cout << "Result: " <<  love_fortune(a);


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
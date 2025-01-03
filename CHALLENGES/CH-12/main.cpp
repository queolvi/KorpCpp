#include<iostream>
#include<string>

std::string traffic_light(const std::string& current_light) {
if(current_light == "green") { 
    return "yellow";
} else if(current_light == "yellow") {
    return "red";
} else if(current_light == "red") {
    return "green";
} else {
    return "This is invalid input";
    }
}


int main(){

std::string lights_of_traffic;
std::cout << "Enter the current traffic lights: (ONLY!!! green, yellow and red lights): ";
std::cin >> lights_of_traffic;

std::cout << "Next light is: " << traffic_light(lights_of_traffic) << std::endl;

    return 0;
}
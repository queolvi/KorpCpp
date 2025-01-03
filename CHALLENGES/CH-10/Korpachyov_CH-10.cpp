#include<iostream>
#include<string>
std::string eu_plane(int x, int y);

int main(){

    int x = 0, y = 0;

    std::cout << "Enter x and y coordinates for the Euclid plane:" << std::endl;
    std::cin >> x >> y;

    std::string quadrant_f_plane = eu_plane(x, y); 
    std::cout << eu_plane(x, y); 

    return 0;
}
std::string eu_plane(int x, int y){

    if(x > 0 && y > 0) return "I";
    else if(x < 0 && y > 0) return "II";
    else if(x < 0 && y < 0) return "III";
    else if(x > 0 && y < 0) return "IV";

    else return "Error, wrong values";
}
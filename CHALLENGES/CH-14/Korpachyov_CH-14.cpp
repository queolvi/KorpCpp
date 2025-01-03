#include <iostream>

double xp_check(double xp, double dmg);

int main() {
    double xp = 0; 
    double dmg = 0; 
    std::cout << "Enter the amount of health points and the damage received : ";
    std::cin >> xp >> dmg;
    std::cout << "Remaining health: " << xp_check(xp, dmg) << std::endl;

    return 0;
}

double xp_check(double xp, double dmg) {
    
    if (xp < 0) return 0;
    xp -= dmg;
    return (xp < 0) ? 0 : xp;
}

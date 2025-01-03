#include <iostream>
#include <cmath>

double calc_max_diameter(int n, double a) {
    double pi = 3.14159265358979323846; // не стал из cmath вытаскивать M_PI
    double radius = a / (2 * tan(pi / n));
    return 2 * radius; 
}

int main() {
    int n = 0;
    double a = 0;

    std::cout << "Enter the number of sides (n) and side length (a):" << std::endl;
    std::cin >> n >> a;
    std::cout << "Maximum diameter of the cylinder: " << calc_max_diameter(n, a) << std::endl;

    return 0;
}

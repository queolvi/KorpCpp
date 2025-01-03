#include <iostream>
#include <cmath>

int main() {
  
    double p, x, y; 
    std::cin >> p >> x >> y;
    double v = x * 100 + y; 
    double god = v * (p / 100); 
    double sum = v + god;
    std::cout << trunc(sum / 100) << " " << trunc((int)sum % 100); // Округление вниз
  return 0;
}

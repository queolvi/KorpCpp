#include <iostream>
#include <iomanip> // Включаем библиотеку iomanip для 13 строки

double dist_f_t_1st_pole_to_the_last(double n, double width, double dist);

int main() {
    double width = 0, columns = 0, distance = 0;

    std::cout << "Enter width, columns and distance:" << std::endl;
    std::cin >> width >> columns >> distance;

    // Устанавливаем точность вывода до 1 знака после запятой, тк при тестах видимо идёт округление в функции и вместо, условно, 9.5 вывод 9.0 с числами 0.5 , 5 и 2
    std::cout << std::setprecision(1) << std::fixed; 
    std::cout << "Distance from the first pole to the last = " 
              << dist_f_t_1st_pole_to_the_last(columns, width, distance) << std::endl;

    return 0;
}

double dist_f_t_1st_pole_to_the_last(double n, double width, double dist) {
    if(n <= 0){
        std::cerr << "Error! N can't be <= 0!!!" << std::endl;
        return 1; }
     else{
return 2 * width + (n - 1) * dist;
    }   
}

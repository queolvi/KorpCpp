#include<iostream>

double find_1st_greater_than_a (const double& a);

int main() {

	double a = 0; 
	std::cout << "Enter number a : \n"; // Приглашение пользователя 
	

	if(!(std::cin >> a)) { // обработка невалидного ввода данных
		std::cout << "Invalid input!!! \n";
		return 1; // некорректное завершение программы
	} else {
		double res = find_1st_greater_than_a (a);
        	std::cout << "The first number greater than " << a << " == " << res << "\n"; // выводим результат функции на экран   		
	}
	

	return 0; // корректное завершение программы
}

double find_1st_greater_than_a (const double& a) {
	if(a <= 1) return 1;

	double sum = 1.0; // заводим переменную суммы
	for(double i = 2.0; sum <= a; ++i ) { // начинаем с i = 2 и продолжаем, пока сумма меньше или равна a
		sum += 1.0 / i;
	}
	return sum;
}

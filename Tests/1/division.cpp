#include<iostream>


double div(double a, double b);
//double idiv()
double mul(double a, double b);
//double imul();
double sum(const double* arr, const double sz);
double diff(const double* arr, const double sz);
//double switching();
int main () {
double a = 0, b = 0;
std::cin >> a >> b;
std::cout << div(a, b);

	return 0;
}

double div(double a, double b) {
	return a / b;
}

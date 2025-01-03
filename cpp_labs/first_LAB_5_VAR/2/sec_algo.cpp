// Даны три числа. Определить, являются ли они последовательными числами арифметичесской прогресии. Ессли да, то найти её разность.

#include<iostream> 
#include<cmath>


bool is_arifmethic_progression(double a, double b, double c);
double my_fabs(double x);
double find_the_difference_of_an_arithmethic_progression(double a, double b, double c);

int main() {

	return 0;
}

bool is_arifmethic_progression(double a, double b, double c) {
	double epsilon = 1e - 9;
	return 	my_fabs(2 * b - (a + c)) < epsilon;
}

double my_fabs(double x) {
	return x < 0.0 ? -x : x;
}

double find_the_difference_of_an_arithmetic_progression(double a, double b, double c) {
	if(is_arithmetic) 
}





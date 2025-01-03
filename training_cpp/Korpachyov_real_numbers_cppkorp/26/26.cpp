#include<iostream>

double pow_eight_a(double& a);

int main() {

double a = 0;
std::cin >> a;
std::cout << pow_eight_a(a);

	return 0;
}

double pow_eight_a(double& a) {
	double b = a + a;
	return b * b * b * b;

}

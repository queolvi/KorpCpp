#include<iostream>

double sum_of_comm(double* arr,  unsigned size);


int main() {

	unsigned size = 0;
	std::cout << "Enter size of the array: \n";
	std::cin >> size;
	std::cout << "Enter els of the array: \n";
	double* arr = new double[size];
	for(int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}

	std::cout << sum_of_comm(arr, size) << "\n";
	delete[] arr;
	return 0;
}

double sum_of_comm(double* arr, unsigned size){

	double res = 0;

	for(int i = 0; i < size; ++i) {
		res += arr[i];
	}
	return res;
}

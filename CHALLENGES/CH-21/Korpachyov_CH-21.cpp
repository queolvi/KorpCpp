#include<iostream>
#include<cmath>
int count_red_cubes(int n);

int main() {

int a = 0;
std::cout << "Enter amount of cuts of cube: " << std::endl;
std::cin >> a;
std::cout << "Result: "<< count_red_cubes(a);

    return 0;
}


int count_red_cubes(int n){

int total_cubes = (n + 1) * (n + 1) * (n + 1);
int inner_cubes = (n - 1) * (n - 1) * (n - 1) ;


    return total_cubes - inner_cubes;
}
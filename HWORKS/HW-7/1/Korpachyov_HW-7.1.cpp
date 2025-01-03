#include<iostream>
#include<algorithm>
#include<cmath>
#include<cassert> 

int lcm(int x, int y);
int eq_mod(int x, int y);
int gcd(int x, int y);


int main(){
    
    int a = 0, b = 0;
    std::cout << "Enter numbers to calculate the lcm:";
    std::cin >> a >> b;
    std::cout << lcm(a,b);

    return 0;
}

int lcm(int x, int y){
    
    return (x * y) / gcd( x,  y);
   
}

int eq_mod(int x, int y) {
    int q = x % y;
    if (q < 0) q += abs(y);
    return q;
}

int gcd(int x, int y) {
    int q;
    assert(y != 0); 
    q = eq_mod(x, y);
    if (q == 0) return y;
    return gcd(y, q);
}

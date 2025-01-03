#include<iostream>
#include<vector>
#include<string>
#include<cstdint>

int main() {

    int x = 0;
    std::vector<int> data;


    while(std::cin >> x && x != 0) {
        data.push_back(x);
    }

    while(!data.empty() && data.back() == 0) {
        data.pop_back();
    } 
    std::cout << "Elements of the vector: \n";
    for(int i = 0; i < data.size(); ++i){
        std::cout << data[i] << " \n";
    }
    std::cout << "End of the vector \n";
    return 0;
}
#include<iostream>
#include<utility>
 

int swapping_years_f_dog(int human_years);
int swapping_years_f_cat(int human_years);
 
 
    
int main(){

int human_years = 0;
std::cout << "Enter how years ago when you put yours pets to you: "; 
std::cin >> human_years;

std::cout << "The age of your cat: " << swapping_years_f_cat(human_years) << std::endl;
std::cout << "And age of your dog: " << swapping_years_f_dog(human_years) << std::endl;

    return 0;
}

int swapping_years_f_dog(int human_years){

    int dog_years = 0;


if(human_years > dog_years){
            
    if (human_years == 1) {
        dog_years = 15; 
    } 
    else if (human_years == 2) {
        dog_years = 24; 
    }
     else if (human_years > 2) {
        dog_years = 24 + (human_years - 2) * 5; 
    }

    return dog_years;
}
 return 1;    
}

    
int swapping_years_f_cat(int human_years){

    int cat_years = 0;



if(human_years > cat_years){
            
    if (human_years == 1) {
        cat_years = 15; 
    } 
    else if (human_years == 2) {
        cat_years = 24; 
    }
     else if (human_years > 2) {
        cat_years = 24 + (human_years - 2) * 4; 
    }

    return cat_years;
}
     return 1;
}


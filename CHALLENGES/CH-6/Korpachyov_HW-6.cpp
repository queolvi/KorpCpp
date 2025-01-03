#include <iostream>

int calc_grade(int a, int b, int c);

int main(){

    int score_1 = 0, score_2 = 0, score_3 = 0;
    std::cout << "Enter the scores for exams 1, 2 and 3 and the program will calculate your grade" << std::endl;
    std::cin >> score_1 >> score_2 >> score_3;
    char grade = calc_grade(score_1, score_2, score_3);
    std::cout <<"Your grade is: " << grade << std::endl;

    return 0;
}

int calc_grade(int a, int b, int c){

    int score ;
    
    score = (a + b + c) / 3 ;
     
    if(90 <=score && score <= 100 ){
        return 'A';
    } else if(80 <=score && score < 90 ){
        return 'B'; 
    } else if(70 <=score && score < 80 ){
        return 'C'; 
    } else if(60 <=score && score < 70 ){
        return 'D'; 
    } else if(0 <=score && score < 60 ){
        return 'F'; 
    } 

    return 1;
}


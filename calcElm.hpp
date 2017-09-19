#include <iostream>
#include <vector>

double sum(std::vector<double> input){
    double sum_result = 0;
    for(int i = 0;i < input.size();i++){
        sum_result += input[i];
    }
    return sum_result;
}

double backSum(std::vector<double> input){
    return 1;
}

double mult(std::vector<double> input){
    double mul_result = 1;
    for(int i = 0;i < input.size();i++){
        mul_result*=input[i];
    }
    return mul_result;
}

double backMul(std::vector<double> input){
    return 1;
}

/*
double numericDiff(double func, double input[]){
    const double dh = 0.000001;
}
*/
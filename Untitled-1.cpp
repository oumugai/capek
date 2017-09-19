#include <iostream>
#include <stdio.h>
#include "calc.hpp"

using namespace std;

std::vector<double> set(double array[], int length){
    std::vector<double> ret;
    for(int i = 0;i < length;i++){
        ret.push_back(array[i]);
    }
    return ret;
}

int main(void){
    int a;
    add test;
    mul test2;
    double input[] = {1.2, 2.3, 4.5, 2.0};
    std::vector<double> in = set(input, 4);
    cout << test.forword(in) << endl;
    cout << test.backword(in) << endl;
    cout << test2.forword(in) << endl;
    cout << test2.backword(in) << endl;
    getchar();
    return 0;
}
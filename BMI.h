#ifndef BMI_H
#define BMI_H

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class BMI
{
public:
    BMI();       
    BMI(double nw ,double nh);
   double bmi();
private:
    string name;
    double weight, height;
}; 
#endif
#ifndef A2DD_H
#define A2DD_H
#include <chrono> 
#include <ctime> 
#include<iostream>

class Math
{
  int Num1;
  int Num2;
  int Fact=1, Mul, Div, Num;

public:
  int Multiply(int Num1,int Num2);
  int Divide(int Num1, int Num2);
  int Factorial(int  Fact);
  void GetTime(void);

};

#endif
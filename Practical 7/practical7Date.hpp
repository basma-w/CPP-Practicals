#ifndef practical7Date_hpp
#define practical7Date_hpp
#include <iostream>
#include <stdio.h>
using namespace std;

class Date{
  protected: 
  int day;
  int month;
  int year;

  public:
  Date(const int, const int, const int);
  int getday();
  int getmonth();
  int getyear();
  void print();
};
#endif 
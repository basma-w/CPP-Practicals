#ifndef practical7Blood_hpp
#define practical7Blood_hpp
#include<stdio.h>
#include<iostream>
#include"practical7Date.hpp"
using namespace std;
class Blood{
  protected:
  int systolic;
  int diastolic;
  Date date;
  
  public:
  Blood(const int, const int, const Date);
  int getsystolic();
  int getdiastolic();
  Date getdate();
  void print();
};
#endif
#include "practical7Blood.hpp"
Blood::Blood(const int systolic, const int diastolic, const Date date):
date(date){
  this->systolic=systolic;
  this->diastolic=diastolic;
}
int Blood::getsystolic(){
  return this->systolic;
}
int Blood::getdiastolic(){
  return this->diastolic;
}
Date Blood::getdate(){
  return this->date;
}
void Blood::print(){
  cout<<" systolic is: "<< systolic <<"     diastolic is: "<<diastolic<<"    "<<date.getday()<<" - "<< date.getmonth()<<" - "<<date.getyear();
}
#include "practical7Date.hpp"
int Date::getday(){
  return this->day;
}
int Date::getmonth(){
  return this->month;
}
int Date::getyear(){
  return this->year;
}
Date::Date(const int day, const int month, const int year){
  this->day=day;
  this->month=month;
  this->year=year;
}
void Date::print(){
  cout<<day<<"-"<<month<<"-"<<year;
}
#include"Date.h"
#include<iostream>
using namespace std;


Date::Date()
  {
    month=0;
    year=0;
    day=0;
  }
  Date::Date(int year ,int month,int day)
  {
    if (month > 0 && month <= 12)
    this->month=month;
    
    this->year=year;
    this->day=day;
  }
  void Date::setmonth(int month)
  {
    this->month=month;
  }
  void Date::setyear(int year)
  {
    this->year=year;
  }
  void Date::setday(int day)
  {
    this->day=day;
  }
  int Date::getmonth() 
  {
    return month;
  }
  int Date::getyear() 
  {
    return year;
  }
  int Date::getday() 
  {
    return day;
  }
  void Date::print()
  {
    cout<<month<<"/"<<day<<"/"<<year;
  }
  // cpp功能檔
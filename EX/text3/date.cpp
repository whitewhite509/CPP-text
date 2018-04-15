

#include"Date.h"
#include<iostream>
using namespace std;

Date::Date()
{
	month = 0;
	year = 0;

}
Date::Date(int ny, int nm)
{
	if (nm > 0 && nm <= 12)
		month = nm;

	year = ny;
}

void Date::setYear(int ny)
{
	year = ny;
}
void Date::setMonth(int nm)
{
	month = nm;
}
int Date::getYear()
{
	return year;
}
int Date::getMonth()
{
	return month;
}
void Date::print()
{
	cout << year << "/" << month << endl;
}


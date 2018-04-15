#ifndef  Date_H
#define	 Date_H
#include<string>
using namespace std;

class Date
{
public:
	Date();
	Date(int ny,int nm);
//	~Date();
	void setYear(int ny);
	void setMonth(int nm);
	int getYear();
	int getMonth();
	void print();
private:
	int year;
	int month;

};

#endif 
//利用text3的cpp,h檔
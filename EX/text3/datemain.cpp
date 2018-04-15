
#include"Date.h"
#include<iostream>

using namespace std;


int main() {
	int year;
	int month;
	cin >> year >> month ;
	Date date1(year,month);
	cin >> year >> month ;
	Date date2(year,month);
	
	date1.print();
	date2.print();

}
//主程式輸入2組年月建立兩個Date物件date1和date2，然後以print()輸出。

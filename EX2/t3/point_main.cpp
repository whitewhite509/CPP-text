#include <iostream>
#include "Point.h"
#include<string>
using namespace std;

int main()
{

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	Point point1(a,b);
	Point point2(c,d);
	Point point3(e,f);

	cout << point1.toString() << "+" << point2.toString() << "-" << point3.toString() 
		<< "=" << ((point1.add(point2)).subtract(point3)).toString() << endl;


	system("pause");
	return 0;

}
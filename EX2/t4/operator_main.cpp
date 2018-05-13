#include <iostream>
#include "operator.h"
#include<string>
using namespace std;

int main()
{

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	Point point1(a,b);
	Point point2(c,d);
	Point point3(e,f);

	cout << point1<<"+" << point2 << "-" << point3<< "=" << (point1+point2-point3)<< endl;


	system("pause");
	return 0;

}
//利用前一題陸續完成+,-, <<的operator overloading 
//主程式輸入3組座標建構point1, point2, point3
//以operator計算point1+point2-point3並輸出
#include<iostream>
using namespace std;

template<typename T>
void reverse(const T list[], T newlist[], int size)
{
	for (int i = 0, j = size - 1; i<size; i++, j--)
	{
		newlist[j] = list[i];
	}

}
template<typename T>
void p(const T list[],int size)
{
    for (int i = 0; i<size; i++)
	{
		cout << list[i] << " ";
	}

}
int main()
{
	const int size=6;
	
	char list[] = {'a','b','c','d','e','f' };
	char newlist[size];
	reverse(list, newlist, size);
    cout<<"The original array:";
    p(list,size);
    cout<<endl;
    cout<<"The reversed array:";
    p(newlist,size);
    cout<<endl;
	
    
	float list2[] = {1.1,2.2,3.3,4.4,5.5,6.6};
	float newlist2[size];
	reverse(list2, newlist2, size);

	 cout<<"The original array:";
    p(list2,size);
    cout<<endl;
    cout<<"The reversed array:";
    p(newlist2,size);
    cout<<endl;
    
	system("pause");
	return 0;
}
  
//請將課本範例7.7 ReverseArray.cpp改成template版本,請用T代表 
//讓程式可以處理任何資料型態的反向輸出。

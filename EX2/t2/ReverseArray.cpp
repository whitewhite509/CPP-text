#include<iostream>
using namespace std;
template<typename T>
void reverse(T list[],T newlist[],int size)
{
    for(int i=0, j=size-1;i<size;i++,j--)
    {
        newlist[j]==list[i];
    }

}

int main()
{
int size=6;
double list[]={'a','b','c','d','e','f'};
double newlist[size];
reverse(list,newlist,size);

for(int i=0;i<size;i++)
{
cout<<list[i]<<" ";
}



float list2[]={1.1,2.2,3.3,4.4,5.5,6.6};
float newlist2[size];
reverse(list2,newlist2,size);

    for(int i=0;i<size;i++)
    {
    cout<<list[i]<<" ";
    }

}
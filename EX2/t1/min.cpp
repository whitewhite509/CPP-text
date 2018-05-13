#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;


int min(const vector<vector<int> > & matrix) 
{
    int a=matrix[0][0];

    for(unsigned row=0;row<matrix.size();row++)
    {
        for(unsigned column=0;column<matrix[row].size();column++)
        {
            if(matrix[row][column]<a)
                a=matrix[row][column];
        }
    }
    return a;
}

int main()
{

	int a,b,c,d,e,f,g,h,i,j,k,l;
    	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;


	//vector<vector<int> > matrix(4, vector<int>(3));

	vector<vector<int> > matrix(4); 
	for (unsigned int i = 0; i < 4; i++)
	  matrix[i] = vector<int>(3); 
  
    matrix[0][0]=a;matrix[0][1]=e;matrix[0][2]=i;
    matrix[1][0]=b;matrix[1][1]=f;matrix[1][2]=j;
    matrix[2][0]=c;matrix[2][1]=g;matrix[2][2]=k;
    matrix[3][0]=d;matrix[3][1]=h;matrix[3][2]=l;
    
	cout<< "min:"<<min(matrix)<< endl;

	system("pause");
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int i,j,c=0,a[5][5],m,n;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
			{
				m=i;
				n=j;
			}
	    }
	}
	for(j=0;j<5;j++)
		{
			if(m<2)
			{
				a[m+1][j]==a[m][j];
				m++; c++;
			}
			else if(m>2)
			{
				a[m-1][j]==a[m][j];
				m--; c++; 	
			}
			if(n<2)
			{
				a[j][n+1]==a[j][n];
				n++; c++;
			}
			else if(n>2)
			{
				a[j][n-1]==a[j][n];
				n--; c++;
			}
				
		}
	cout<<c;
	
}

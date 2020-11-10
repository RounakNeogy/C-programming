#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,x=0;
	cin>>n;
	char a[5];
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(strcmp(a,"X++")==0 || strcmp(a,"++X")==0)
			x++;
		else if(strcmp(a,"X--")==0 || strcmp(a,"--X")==0)
			x--;
	}
	cout<<x;
}

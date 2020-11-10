#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[200];
	int j;
	cin>>a;
	int n=strlen(a);
	char*b=new char[n];
	for(int i=0,j=0;i<n;i++,j++)
	{
		if(a[i]=='.')
			b[j]='0';
		else if(a[i]=='-' && a[i+1]=='.')
			{
				b[j]='1';
				i++;
			}
		else if(a[i]=='-' && a[i+1]=='-')
			{
			    b[j]='2';
			    i++;
			}
	}
	
	cout<<b;
	
}

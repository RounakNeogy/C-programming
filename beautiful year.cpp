#include<iostream>
using namespace std;
int main()
{
	int y,i;
	cin>>y;
	for (i=y+1;i<=9020;i++)
	{
		int m=i,d=0,c=0,v=0;
		d=m%10;
		m=m/10;
		c=m%10;
		m=m/10;
		v=m%10;
		m=m/10;
		if(d!=c && d!=v && d!=m && c!=v && c!=m && v!=m)
			break;
	}
	cout<<i;
}

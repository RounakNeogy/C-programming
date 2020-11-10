#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c,r,i,j;
		cin>>c>>r;
		int p=c/9;
		int q=r/9;
		int g=c%9;
		int f=r%9;
		if(g==0)
			i=p;
		else
			i=p+1;
		if(f==0)
			j=q;
		else
			j=q+1;
		if(i>=j)
			cout<<"1 "<<j<<endl;
		else
			cout<<"0 "<<i<<endl;
	}
}


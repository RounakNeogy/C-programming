#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		if((n/2)%2==0)
		{
			int s=0;
			cout<<"YES"<<endl;
			for(int j=2;j<=n;j=j+2)
			{
				cout<<j;
				s=s+j;
			}
			int j=1;
			for(int j=1,k=n+1;j<=n/2;j=j+2,k=k+2)
			{
				if()
			}
		}
		else
			cout<<"N0"<<endl;;
	}
}

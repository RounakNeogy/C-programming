#include<iostream>
using namespace std;
int main()
{
	int n,m,A[100001],b,a;
	long long k=0,t=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;	
		A[a]=i;
	}	
	cin>>m;
	while(m>0)
	{
		cin>>b;
		k+=A[b];
		t+=n+1-A[b];
		m--;
	}

	cout<<k<<" "<<t;
	
}

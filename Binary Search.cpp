#include<iostream>
using namespace std;
int main()
{
	int n,k,flag=0,mid;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	long long b[k];
	for(int i=0;i<k;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<k;i++)
	{
		int l=n-1,m=0;
		flag=0;
		while(m<=l)
		{
			mid=(l+m)/2;
			if(a[mid]==b[i])
			{
				flag=1;
				break;
			}
			else if(a[mid]<b[i])
				m=mid+1;
			else if(a[mid]>b[i])
				l=mid-1;
		}
		if(flag==1)
			cout<<mid<<" ";
		else
			cout<<"-1 ";
	}
}

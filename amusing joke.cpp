#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[101],b[101],c[101];
	cin>>a>>b>>c;
	int n=strlen(a);
	int m=strlen(b), z=strlen(c);
	if(n+m==z)
	{
		strcat(a,b);
		sort(a,a+z);
		sort(c,c+z);
		int res=strcmp(a,c);
		if(res==0)
			cout<<"YES";
		else
			cout<<"NO";
	}
	else
		cout<<"NO";
	
}

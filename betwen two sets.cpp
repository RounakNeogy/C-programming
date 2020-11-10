#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,k=0;
    cin>>m,n;
    int a[15];
    int b[15];
    int c[30];
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+m);
    sort(b,b+n);
    for(int j=0;j<m;j++)
    {
        for(int i=a[m-1];i<b[0];i++)
        {
            if(i%a[j]==0)
            {
              c[k]=i;
              k++;  
            }
        }
    }
    int p=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[j]%c[i]==0)
                p++;
        }
    }
    cout<<c;
}


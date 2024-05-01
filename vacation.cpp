#include<bits/stdc++.h>
using namespace std;

long long n,a[100005][5];

int main()
{

    ios_base::sync_with_stdio(0);

    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=3;j++)
       {
           cin>>a[i][j];
           if(j==1)
           a[i][j]+=max(a[i-1][2],a[i-1][3]);
            if(j==2)
           a[i][j]+=max(a[i-1][1],a[i-1][3]);
            if(j==3)
           a[i][j]+=max(a[i-1][2],a[i-1][1]);
       }
    cout<<max(max(a[n][1],a[n][2]),a[n][3]);



}

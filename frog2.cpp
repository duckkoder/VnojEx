#include<bits/stdc++.h>
using namespace std;

int n,a[100005],f[100005],k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;

    fill(f+1,f+n+1,99999999);
    f[1]=0;
    cin>>a[1];
    for(int i=2;i<=n;i++)
    {
        cin>>a[i];
        for(int j=max(i-k,1);j<=i-1;j++)
        {
            f[i]=min(f[i],f[j]+abs(a[j]-a[i]));
        }
    }

    if(n<=k)
        cout<<a[n]-a[1];
    else
cout<<f[n];



}


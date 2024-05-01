#include<bits/stdc++.h>
using namespace std;

long long n,a[60001],b[60001],f[60001];

int main()
{

    ios_base::sync_with_stdio(0);

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=2;i<=n;i++)
        cin>>b[i];
        f[1]=a[1];
    for(int i=2;i<=n;i++)
        f[i]=min(f[i-1]+a[i],f[i-2]+b[i]);
    cout<<f[n];

}

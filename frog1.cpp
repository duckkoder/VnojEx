#include<bits/stdc++.h>
using namespace std;

long long n,a[100005],f[100005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;

    cin>>a[1];cin>>a[2];
    f[2]=abs(a[2]-a[1]);
    for(int i=3;i<=n;i++)
    {
        cin>>a[i];
        f[i]=min(f[i-1]+abs(a[i]-a[i-1]),f[i-2]+abs(a[i]-a[i-2]));
    }
    cout<<f[n];

}

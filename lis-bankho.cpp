
#include<bits/stdc++.h>
using namespace std;

long long n,a,f[1000001],res=0,t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        t=lower_bound(f+1,f+res+1,a)-f;
        res=max(res,t);
        f[t]=a;
    }
    cout<<res;



}

#include<bits/stdc++.h>
using namespace std;

int n,k;

bool f[1000001];
long long res[1000001];

int main()
{

    ios_base::sync_with_stdio(0);
    cin>>n>>k;
    for (int i=1;i<=k;i++)
    {
        int x;
        cin>>x;
        f[x]=1;
    }
    res[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(f[i]==1)
            res[i]=0;
        else
            res[i]=(res[i-1]+res[i-2])%14062008;
    }
    cout<<res[n];
}

#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
char a[1001][1001];

long long f[1001][1001],n,m;

int main()
{

    ios_base::sync_with_stdio();

    cin>>n>>m;
    f[1][1]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
        cin>>a[i][j];
        if(a[i][j]=='.')
        {
            if(a[i-1][j]=='.') f[i][j]=f[i-1][j]%mod;
            if(a[i][j-1]=='.') f[i][j]=(f[i][j]+f[i][j-1])%mod;
        }
        }
    }
    cout<<f[n][m];

}

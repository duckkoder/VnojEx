#include<bits/stdc++.h>
using namespace std;

long long dp[101][100001],n,m,w[101],val[101];


int main()
{
    ios_base::sync_with_stdio(0);

    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>w[i]>>val[i];
    for(int i=0;i<=n;i++)
        dp[i][0]=0;
    for(int j=0;j<=m;j++)
        dp[0][j]=0;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
         dp[i][j]=dp[i-1][j];
        if(j>=w[i]&&(dp[i-1][j-w[i]]+val[i]>dp[i-1][j]))
         dp[i][j]=dp[i-1][j-w[i]]+val[i];
        }
    cout<<dp[n][m];
}

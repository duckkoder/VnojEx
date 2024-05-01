#include<bits/stdc++.h>
using namespace std;

long long n,m,maxx=-9999999,a[105][105];

int main()
{
    ios_base::sync_with_stdio(0);

    cin>>n>>m;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
         cin>>a[i][j];

     for(int j=2;j<=m;j++)
        for(int i=1;i<=n;i++)
        {
          for(int k=-1;k<=1;k++)
          {
              if(i+k>=1&&i+k<=n)
                maxx=max(maxx,a[i+k][j-1]);
          }
          a[i][j]+=maxx;
          maxx=-99999999;
        }
   for(int i=1;i<=n;i++)
    maxx=max(maxx,a[i][m]);
   cout<<maxx;

}


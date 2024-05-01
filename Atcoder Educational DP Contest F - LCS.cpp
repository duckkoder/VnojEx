#include<bits/stdc++.h>
using namespace std;
string s,t;
long long f[3001][3001];
int main()
{
    cin>>s;
    cin>>t;
    int n=s.size(),m=t.size();
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(!i||!j) f[i][j] = 0;
            else
            if(s[i-1]==t[j-1])
                f[i][j]=f[i-1][j-1]+1;
            else
                f[i][j]=max(f[i-1][j],f[i][j-1]);
        }
    }
    string res="";

    while(n&&m)
    {
        if(s[n-1]==t[m-1])
            res+=s[n-1],n--,m--;
        else
            if(f[n-1][m]>f[n][m-1]) n--;
        else
            m--;
    }
     reverse(res.begin(), res.end());
    cout<<res;
    //cout<<f[n-1][m-1]+1;
}

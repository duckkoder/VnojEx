#include<bits/stdc++.h>
using namespace std;

int a,b,c,f[100],res=100,maxx=0;

int main()
{

    ios_base::sync_with_stdio(0);
    cin>>a>>b>>c;

    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++)
            for(int k=1;k<=c;k++)
    {
        f[i+j+k]++;
        if(f[i+j+k]>maxx)
        {
            maxx=f[i+j+k];
            res=i+j+k;
        }
        else if(f[i+j+k]==maxx&&(i+j+k)<res) res=i+j+k;
    }
    cout<<res;
}

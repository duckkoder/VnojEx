#include<bits/stdc++.h>
using namespace std;

int l,r,res=0,f[1000001];

int main()
{
    cin>>l>>r;
    for(int i=2;i<=r/2;i++)
    {
        for(int j=i+i;j<=r;j=j+i)
            f[j]+=i;
    }
    for(int i=l;i<=r;i++)
        if(f[i]+1>i)
         res++;
    cout<<res;
}

#include<bits/stdc++.h>
using namespace std;

long long a,b,poww=1,f[100];

int kt(long long n)
{
    if(n==2||n==3) return 1;
    if(n%2==0||n%3==0 || n==1) return 0;
    for(int i=5;i<=(int)sqrt(n);i+=6)
    if(n%i==0||n%(i+2)==0) return 0;
    return 1;
}

int main()
{
    cin>>a>>b;
    for(int i=1;i<=32;i++)
    {
        poww*=2;
        f[i]=poww;
    }
    int t=lower_bound(f+1,f+32+1,a+1)-f;
    int tt=upper_bound(f+1,f+32+1,b+1)-f;

    if((tt-t)%2==0)
        cout<<(tt-t)/2;
    else
    {
        if(kt(f[t]-1)==0)
            cout<<(tt-t)/2;
        else cout<<(tt-t)/2+1;
    }
}

#include<bits/stdc++.h>
using namespace std;

int n;
int main()
{
    cin>>n;
    long long s=0;
    if(n==0)
        cout<<1;
    else
    {
        for(int i=1;i<=n-1;i++)
        s=s+i;
        for(int i=2;i<=n+1;i++)
        s=s+i;
        cout<<s*2+1;
    }
}

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);

    int n,a[100001],res=0;
    cin>>n;
    for(int i=1;i<=n;i++)
            cin>>a[i];
    sort(a+1,a+n+1);
    if(n%2==0)
    {
        for(int i=2;i<=n;i=i+2)
         res=res+a[i]-a[i-1];
         cout<<res;
    }
    else
    {
         for(int i=3;i<=n;i=i+2)
         res=res+a[i]-a[i-1];
         cout<<res+a[1];
    }

}

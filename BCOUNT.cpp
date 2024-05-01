#include<bits/stdc++.h>
using namespace std;

int n,t,x,a[100001][4];
int l,r;

int main()
{
    ios_base::sync_with_stdio(0);

    cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
        {
            a[i][1]=a[i-1][1]+1;
            a[i][2]=a[i-1][2];
            a[i][3]=a[i-1][3];
        }
         if(x==2)
        {
            a[i][1]=a[i-1][1];
            a[i][2]=a[i-1][2]+1;
            a[i][3]=a[i-1][3];
        }
         if(x==3)
        {
            a[i][1]=a[i-1][1];
            a[i][2]=a[i-1][2];
            a[i][3]=a[i-1][3]+1;
        }
    }
    for(int i=1;i<=t;i++)
    {
        cin>>l>>r;
        cout<<a[r][1]-a[l-1][1]<<" "<<a[r][2]-a[l-1][2]<<" "<<a[r][3]-a[l-1][3]<<endl;
    }

}

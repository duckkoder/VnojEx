#include <bits/stdc++.h>
using namespace std;
const int MAX=1000001;
int SNT[MAX],CMT[MAX];

int T,n;
void sangnt()
{
    SNT[1]=1;
    for(int i=2;i<=sqrt(MAX);i++)
    {
        if(SNT[i]==0)
        {
            int j=i*i;
            while(j<=MAX)
            {
              SNT[j]=1;
              j=j+i;
            }
        }
    }
}
void Dem()
{
    for(int i=1;i<=MAX;i++)
    {
        if(SNT[i]==0)
            CMT[i]=CMT[i-1]+1;
        else
            CMT[i]=CMT[i-1];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    sangnt();
    Dem();
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>n;
        int t=CMT[n];
        cout<<t*(t-1)*(t-2)/6+(n-t)*(n-t-1)*(n-t-2)/6<<endl;
    }


}



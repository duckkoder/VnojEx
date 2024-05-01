
#include<bits/stdc++.h>
using namespace std;



int main()
{


    ios_base::sync_with_stdio(0);
    long long n;
    cin>>n;
    map<long long,long long> snt;
    long long ch=0,l=0;

    snt[1]=1;
    for (int i=2;i<=int(sqrt(n));i++)
    {
        if(snt[i]==0)
          {
        long long j=i*i;
        while(j<=n)
            snt[j]=1,j+=i;
          }
    }


    while(n%2==0)
        ch++,n=n/2;

     int i=2;

    while(n>1)
    {
       for(int i=3;i<=n;i++)
       {
           if(snt[i]==0)
        while(n%i==0)
            l++,n=n/i;
            if(n==1)
                break;
           if(i>5000000)
           {
               cout<<ch<<endl<<l+1;
               return 0;
           }
        }
    }

    cout<<ch<<endl<<l;


}

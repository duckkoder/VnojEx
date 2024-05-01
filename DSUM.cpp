#include<bits/stdc++.h>
using namespace std;

long long a,b,res=0;

bool check(int n,int m)
{
    int dem=1,dp=0;
    while(m!=0)
    {
        m=m/10;
        dem=dem*10;
    }
    dem=dem/10;
    m=n;
    while(n!=0)
    {
        dp+=(n%10)*dem;
        dem=dem/10;
        n=n/10;
    }

    if(__gcd(dp,m)==1)
        return true;
    else return false;

}

int main()
{
  ios_base::sync_with_stdio(0);
  cin>>a>>b;

  for(int i=a;i<=b;i++)
  {
      if(check(i,i)==1)
        res++;
  }
cout<<res;
}

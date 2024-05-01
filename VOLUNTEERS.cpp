
#include<bits/stdc++.h>
using namespace std;

long long n,m,a[1000001],b[1000001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i=1;i<=n;i++)
       {
         cin>>a[i];
       }
    sort(a+1,a+n+1);
for(int i=1;i<=m;i++)
       {
         cin>>b[i];
       }
       sort(b+1,b+m+1);
   while(n>0&&m>0)
   {
       if(a[n]>b[m])
       {
           cout<<a[n];
           return 0;
       }
       n--;
       m--;
   }
   cout<<-1;

}

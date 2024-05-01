#include<bits/stdc++.h>
using namespace std;


int main()
{

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(abs(a-c)==1&&abs(b-d)==2)
    {
        cout<<"Yes";
        return 0;
    }
    if(abs(a-c)==2&&abs(b-d)==1)
      {
          cout<<"Yes";
          return 0;
      }
      cout<<"No";
}

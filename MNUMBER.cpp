#include<bits/stdc++.h>
using namespace std;


int main()
{

    long long n;
    cin>>n;
    if(n==1)
    {
        cout<<"NO";
        return 0;
    }
    if(n%2==1)
    {
        cout<<"YES"<<endl;
        cout<<(n+1)/2<<" "<<(n+1)/2-1;
        return 0;
    }
    if(n%4==0)
    {
        cout<<"YES"<<endl;
        cout<<n/4+1<<" "<<n/4-1;
    }
}

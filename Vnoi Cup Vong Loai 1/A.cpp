#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    cin>>t;
    int a[105];
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
            bool ok=0;
        for(int i=1;i<=n;i++)
        {
            if(i==a[a[a[i]]])
            {
                ok=1;
                break;
            }
        }
        if(ok==1)
            cout<<"<3"<<endl;
        else
            cout<<"</3"<<endl;
    }

}

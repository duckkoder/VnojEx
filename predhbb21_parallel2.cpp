#include<bits/stdc++.h>
using namespace std;




int main()
{

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int u,v;
        cin>>u>>v;
        if(u>=v)
        {
            if(u<=2&&v<=1)
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else
        {
            swap(u,v);
            if(u<=2&&v<=1)
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }

}

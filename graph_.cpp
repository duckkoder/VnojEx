#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);

    cin>>n>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

}

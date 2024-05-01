#include<bits/stdc++.h>
using namespace std;

string a,b;

int f[2005][2005];


int main()
{
    ios_base::sync_with_stdio(0);

    cin.tie(0);
    cout.tie(0);

    cin>>a;
    cin>>b;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
                f[i][j]=f[i-1][j-1]+1;
            else
                f[i][j]=max(f[i-1][j],f[i][j-1]);
        }
    }
    cout<<f[a.size()-1][b.size()-1];

}

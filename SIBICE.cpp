
#include<bits/stdc++.h>
using namespace std;

int N,L,R;
int x;

int main()
{
    ios_base::sync_with_stdio(0);

    cin>>N>>R>>L;
    for (int i=1;i<=N;i++)
    {
       cin>>x;
       if(x*x<=R*R+L*L)
        cout<<"DA";
        else cout<<"NE";
        cout<<endl;
    }
}

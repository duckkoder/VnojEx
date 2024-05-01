#include<bits/stdc++.h>
using namespace std;
long long st[400005];
long long n,q,x,u,v;
void update(int id,int l,int r,int i,int u)
{
    if(i<l||i>r)
        return ;
    if(l==r)
    {
        st[id]=u;
        return ;
    }
    int mid=(l+r)/2;
    update(id*2,l,mid,i,u);
    update(id*2+1,mid+1,r,i,u);
    st[id]=st[id*2]+st[id*2+1];
}

long long query(int id,int l,int r,int u,int v)
{
    if (v < l || r < u) {
        return 0;
    }
    if(u<=l&&r<=v)
        return st[id];
    int mid=(l+r)/2;
    return query(id*2,l,mid,u,v)+query(id*2+1,mid+1,r,u,v);
}

int main()
{

    ios_base::sync_with_stdio(0);

    cin>>n>>q;
    for(int i=1;i<=q;i++)
    {

        cin>>x>>u>>v;
        if(x==1)
        update(1,1,n,u,v);
        else
        {
            cout<<query(1,1,n,u,v)<<endl;
        }

    }


}

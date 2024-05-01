#include<bits/stdc++.h>
using namespace std;

long long stmax[200005],stmin[200005],n,a[50005],q;

void buildmax(int id,int l,int r)
{
    if(l==r) {
        stmax[id]=a[l];
        return ;
    }
    int mid=(l+r)/2;
    buildmax(id*2,l,mid);
    buildmax(id*2+1,mid+1,r);
    stmax[id]=max(stmax[id*2],stmax[id*2+1]);
}
void buildmin(int id,int l,int r)
{
    if(l==r) {
        stmin[id]=a[l];
        return ;
    }
    int mid=(l+r)/2;
    buildmin(id*2,l,mid);
    buildmin(id*2+1,mid+1,r);
    stmin[id]=min(stmin[id*2],stmin[id*2+1]);
}
int getmax(int id,int l,int r,int u,int v)
{
    if(l>v||u>r) return -1e9;
    if(l>=u&&v>=r) return stmax[id];
    int mid=(l+r)/2;
    return max(getmax(id*2,l,mid,u,v),getmax(id*2+1,mid+1,r,u,v));
}
int getmin(int id,int l,int r,int u,int v)
{
    if(l>v||u>r) return 1e9;
    if(l>=u&&v>=r) return stmin[id];
    int mid=(l+r)/2;
    return min(getmin(id*2,l,mid,u,v),getmin(id*2+1,mid+1,r,u,v));
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    buildmax(1,0,n);
    buildmin(1,0,n);

    for(int i=1;i<=q;i++)
    {
        int u,v;
        cin>>u>>v;
        cout<<getmax(1,0,n,u,v)-getmin(1,0,n,u,v)<<endl;
    }


}

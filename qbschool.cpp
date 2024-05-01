#define f first
#define s second

#include<bits/stdc++.h>
using namespace std;
typedef pair<long long,long long> h;
vector<h> a[200005];
priority_queue<h,vector<h>,greater<h>> q;

long long f[5050],n,k,u,v,l,m,cmt[5050];

void dijstra()
{
    while(!q.empty())
    {
        int y=q.top().f,x=q.top().s;
        q.pop();
        if(f[x]!=y)
            continue;
    for(int i=0;i<a[x].size();i++)
    {
        int u=a[x][i].f,v=a[x][i].s;
        if(f[u]>f[x]+v)
        {
                cmt[u]=cmt[x];
                f[u]=f[x]+v;
              q.push(h(f[u],u));
        } else
         if(f[u]==f[x]+v) cmt[u]+=cmt[x];
    }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>k>>u>>v>>l;

        a[u].push_back(h(v,l));
        if(k==2)
        a[v].push_back(h(u,l));
    }
    for(int i=2;i<=n;i++)
        f[i]=1e9;
    f[1]=0;
    cmt[1]=1;
    q.push(h(0,1));
    dijstra();
    cout<<f[n]<<" "<<cmt[n];
}

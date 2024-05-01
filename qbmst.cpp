#include<bits/stdc++.h>


using namespace std;


int parent[100001],rankk[100001];
int n,m,answer=0;
    vector<pair<int,pair<int,int>>> a;
    //vector<pair<int,int> > result;

void make_set(int x)
{
    parent[x]=x;
    rankk[x]=1;
}

int find_set(int x)
{
    if (x==parent[x]) return x;
    return parent[x]=find_set(parent[x]);
}

void union_set(int a, int b)
{
    a=find_set(a);
    b=find_set(b);
    if (a!=b)
    {
        if (rankk[a]<rankk[b]) swap(a,b);
        parent[b]=a;
        rankk[a]+=rankk[b];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for (int i=0;i<n;i++) make_set(i);


    for (int i=0;i<m;i++)
    {
        int x,y,s;
        cin>>x>>y>>s;
        a.push_back(make_pair(s,make_pair(x,y)));
    }

    sort(a.begin(),a.end());


    for (int i=0;i<m;i++)
    {
        int x=a[i].second.first,y=a[i].second.second,s=a[i].first;
        if (find_set(x)!=find_set(y))
        {
            answer+=s;
//            result.push_back(a[i].second);
            union_set(x,y);
        }
    }

    cout<<answer<<endl;
    /*for (int i=0;i<result.size();i++)
    {
        cout<<result[i].first<<' '<<result[i].second<<endl;
    }*/
}

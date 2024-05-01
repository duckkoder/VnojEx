#include <bits/stdc++.h>

using namespace std;

const int MAXNT=2000001;

long long a,b,snt[MAXNT];

void sangnt()
{
    snt[1]=1;
    for(int i=1;i<=sqrt(MAXNT)+1;i++)
    {
        if(snt[i]==0)
            for(int j=i*i;j<=MAXNT;j=j+i)
            snt[j]=1;
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    long long a,b;
    cin>>a>>b;
    sangnt();
    for(int i=a;i<=b;i++)
        if(snt[i]==0)
        cout<<i<<endl;

}

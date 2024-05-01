#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        float t1,t2;
        if(100/n*m>10)
        {
            t1=100/(n+m);
        }
        else
            t1=100/(n+m);
            if(100/a*b>10)
        {
            t2=100/(a+b)+(100/a*b-10)/a;
        }
        else
            t2=100/(a+b);
       if(t1==t2)
        cout<<"Draw";
       if(t1>t2)
        cout<<"Yunyun";
       else
        cout<<"Megumin";
       cout<<endl;
    }

}


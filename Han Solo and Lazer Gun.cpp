 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    v99 n,x,y;cin>>n>>x>>y;
    queue<pair<v99,v99> >q;
    while(n--)
    {
        v99 a,b;cin>>a>>b;
        queue<pair<v99,v99> >tt;tt=q;
        bool flag=false;
        while(!tt.empty())
        {
            pair<v99,v99>pi=tt.front();tt.pop();
            v99 c=pi.first,d=pi.second;
            v99 ans=(a*(d-y))-(b*(c-x))+(c*y-d*x);
            cout<<c<<whp<<d<<whp<<ans<<ses;
            if(ans==0){flag=true;break;}
        }
        if(!flag)q.push(make_pair(a,b));
        while(!tt.empty())tt.pop();
    }cout<<q.size()<<ses;
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

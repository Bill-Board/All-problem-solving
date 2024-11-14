 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 100005
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 l[mxi],r[mxi],v[mxi],p[mxi];
v99 n, tree[mxi],a[mxi];
int main()
{
    //test
    {
        memset(l,0,sizeof l);
        memset(r,0,sizeof r);
        memset(v,0,sizeof v);
        memset(tree,0,sizeof tree);
        v99 m,k;cin>>n>>m>>k;
        for(v99 i=1;i<=n;i++){cin>>a[i];}
        for(v99 i=1;i<=m;i++)cin>>l[i]>>r[i]>>v[i];
        for(v99 i=1;i<=k;i++)
        {
            v99 x,y;cin>>x>>y;
            p[x]+=1;p[y+1]-=1;
        }
        for(v99 i=1;i<=m;i++)p[i]+=p[i-1];
        for(v99 i=1;i<=m;i++)
        {
            v99 tmp=v[i]*p[i];
            tree[l[i]]+=tmp;
            tree[r[i]+1]-=tmp;
        }
        for(v99 i=1;i<=n;i++)tree[i]+=tree[i-1];
        for(v99 i=1;i<=n;i++)
        {
            cout<<a[i]+tree[i]<<whp;
        }cout<<ses;


    }
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

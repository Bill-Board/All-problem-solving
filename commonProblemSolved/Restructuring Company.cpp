 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 99999
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
map<v99,v99>rrr,ppp,sze;

v99 root2(v99 val)
{
    while(val!=ppp[val])
    {
        val=ppp[val];
    }
    return val;
}

v99 root(v99 val)
{
    while(val!=rrr[val])
    {
        val=rrr[val];
    }
    return val;
}

void dsu(v99 x,v99 y)
{
    v99 xr=root(x),yr=root(y);
    //cout<<sze[xr]<<whp<<sze[yr]<<ses;
    if(xr==yr)return ;
    if(sze[xr]>sze[yr])
    {
        rrr[yr]=rrr[xr];
        sze[xr]+=sze[yr];
    }
    else
    {
        rrr[xr]=rrr[yr];
        sze[yr]+=sze[xr];
    }
}

int main()
{
    v99 n,m;cin>>n>>m;for(v99 i=1;i<=n;i++){ppp[i]=i;rrr[i]=i;sze[i]=1; }
    while(m--)
    {
        v99 q,l,r;cin>>q;
        if(q==1)
        {
            cin>>l>>r;
            dsu(l,r);
        }
        else if(q==2)
        {
            cin>>l>>r;
            for(v99 i=root2(l);i<r;i=root2(i+1)){
                    dsu(i,r);
                    ppp[i]=ppp[r];}
            //cout<<i<<ses;
        }
        else
        {
            cin>>l>>r;
            if(root(l)==root(r))cout<<"YES"<<ses;
            else cout<<"NO"<<ses;
        }
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

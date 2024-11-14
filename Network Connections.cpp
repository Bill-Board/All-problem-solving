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
map<v99,v99>rrr;
map<v99,v99>sze;

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
{   //IOS
    v99 tt;cin>>tt; //cout<<ses;
    while(tt--)
    {
        v99 n,sc=0,u=0;cin>>n;
        for(v99 i=1;i<=n;i++){rrr[i]=i;}
        string s;getline(cin,s);
        while(getline(cin, s), s!="")
        {
            stringstream ss(s);
            char c;
            v99 l, r;ss>>c>>l>>r;
            if(c=='c')
            {
                dsu(l,r);
            }
            else
            {
                if(root(l)==root(r))++sc;
                else ++u;
            }
        }
        if(tt>0)cout<<sc<<","<<u<<ses<<ses;
        else cout<<sc<<","<<u<<ses;
        for(auto i:sze)cout<<i.second<<whp;cout<<ses;
        rrr.clear();sze.clear();
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

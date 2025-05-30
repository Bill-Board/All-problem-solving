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
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 0x3f3f3f3f
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int>> pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
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

void init(v99 n)
{
    for(v99 i=1;i<=n;i++){rrr[i]=i;sze[i]=1;}
}

int main()
{
    //test
    //while(1)
    {
        v99 n;cin>>n;init(n);
        v99 a[n+1];
        vector<v99>rt[n+1],srt[n+1];
        for(v99 i=1;i<=n;i++)cin>>a[i];
        for(v99 i=1;i<=n;i++)
        {
            for(v99 j=1;j<=n;j++)
            {
                char c;cin>>c;v99 x=c-'0';
                if(x)
                {
                    dsu(i,j);
                }
            }
        }
        for(v99 i=1;i<=n;i++)
        {
            v99 r=root(i);
            rt[r].push_back(i);
            srt[r].push_back(a[i]);
        }
        for(v99 i=1;i<=n;i++)sort(srt[i].begin(),srt[i].end());
        for(v99 i=1;i<=n;i++)sort(rt[i].begin(),rt[i].end());
        for(v99 i=1;i<=n;i++)
        {
            for(v99 j=0;j<srt[i].size();j++)
            {
                //cout<<rt[i][j]<<whp<<srt[i][j]<<ses;
                a[rt[i][j]]=srt[i][j];
            }
        }
        for(v99 i=1;i<=n;i++)cout<<a[i]<<whp;cout<<ses;

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


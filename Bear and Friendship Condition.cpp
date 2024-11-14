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
#define mxi 200003
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a) memset(a,0,sizeof(a));
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
vector<v99>b[mxi],a[mxi];
map<v99,v99>rrr;
map<v99,v99>sze;
v99 kot[mxi];
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
    if(xr==yr)return;
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
    rep1(i,0,n){rrr[i]=i;sze[i]=1;}
}

int main()
{
    //test
    //while(1)
    {
        v99 n,m;cin>>n>>m;init(n);
        rep1(i,1,m)
        {
            v99 x,y;cin>>x>>y;dsu(x,y);
            a[x].push_back(y);
            a[y].push_back(x);
        }
        rep1(i,1,n)
        {
            v99 x=root(i);
            kot[x]++;
        }
        //rep1(i,1,n)cout<< kot[i] <<whp;cout<<ses;
        rep1(i,1,n)
        {
            if(a[i].empty())continue;
            v99 x=root(i);
            v99 tom=a[i].size()+1;
            if(kot[x]!=tom)return cout<<"NO"<<ses,0;
        }
        cout<<"YES"<<ses;
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


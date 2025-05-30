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
#define CLR(a) memset(a,0,sizeof a)
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

map<pair<v99,v99>,v99>rrr;
map<pair<v99,v99>,v99>sze;

v99 root(v99 val,v99 c)
{
    while(val!=rrr[{val,c}])
    {
        val=rrr[{val,c}];
    }
    return val;
}

void dsu(v99 x,v99 y,v99 c)
{
    v99 xr=root(x,c),yr=root(y,c);
    if(xr==yr)return;
    if(sze[{xr,c}]>sze[{yr,c}])
    {
        rrr[{yr,c}]=rrr[{xr,c}];
        sze[{xr,c}]+=sze[{yr,c}];
    }
    else
    {
        rrr[{xr,c}]=rrr[{yr,c}];
        sze[{yr,c}]+=sze[{xr,c}];
    }
}
void init(v99 n,v99 m)
{
  rep1(i,1,n)
  {
      rep1(j,1,m)
      {
          sze[{i,j}]=1;
          rrr[{i,j}]=i;
      }
  }
}
int main()
{
    //test
    //while(1)
    {
        v99 n,m;cin>>n>>m;init(n,m);
        rep1(i,1,m)
        {
            v99 x,y,c;cin>>x>>y>>c;
            dsu(x,y,c);
        }
        //for(auto i:rrr)cout<<i.first.first<<whp<<i.first.second<<whp<<i.second<<ses;
        v99 q;cin>>q;
        while(q--)
        {
            v99 x,y,ans=0;cin>>x>>y;
            rep1(i,1,m)
            {
                if(root(x,i)==root(y,i))ans++;
            }cout<<ans<<ses;
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


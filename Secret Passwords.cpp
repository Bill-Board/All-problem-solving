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
#define mxi 1000001
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
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
set<v99>shali[mxi];
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
void init(v99 n)
{
    rep1(i,0,n){rrr[i]=i;sze[i]=1;}
}
int main()
{
    //test
    //while(1)
    {
        v99 n;cin>>n;init(n);
        rep1(i,1,n)
        {
            string s;cin>>s;
            rep0(j,0,s.size())
            {
                v99 x=s[j]-'a';
                shali[x].insert(i);
            }
        }
        rep0(i,0,26)
        {
            if(shali[i].empty())continue;
            v99 ogy=*(shali[i].begin());
            for(auto j:shali[i])
            {
                dsu(ogy,j);
            }
        }
        map<v99,v99>bow;
        rep1(i,1,n)
        {
           // cout<<i<<whp<<root(i)<<ses;
            bow[root(i)]++;
        }cout<<bow.size()<<ses;
    }
    return 0;
}

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
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
vector<v99>tom,ami[mxi];
v99 visi[mxi],ans[mxi];bool ok=false;
void dfs(v99 ind,v99 maa)
{
    if(ok)return;
    visi[ind]=1;
    ans[ind]=ans[maa]^1;
    tom.push_back(ind);
    for(auto i:ami[ind])
    {
        if(visi[i] && ans[ind]==ans[i]){ok=true;return;}
        if(!visi[i])dfs(i,ind);
    }
}



int main()
{
    //test
    //while(1)
    {
        v99 n,m;cin>>n>>m;
        rep0(i,0,m)
        {
            v99 x,y;cin>>x>>y;
            ami[x].push_back(y);
            ami[y].push_back(x);
        }
        rep1(i,1,n)
        {
            if(!visi[i])
            {
                if(ami[i].empty())continue;
                ok=false;
                dfs(i,1);
                if(ok)return cout<<-1<<ses,0;
            }
        }
        vector<v99>o,z;
        for(auto i:tom)
        {
            if(ans[i]==0)z.push_back(i);
            else o.push_back(i);
        }
        cout<<z.size()<<ses;
        for(auto i:z)cout<<i<<whp;cout<<ses;
        cout<<o.size()<<ses;
        for(auto i:o)cout<<i<<whp;cout<<ses;


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

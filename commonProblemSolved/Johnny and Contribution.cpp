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
#define mxi 500009
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
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
v99 a[mxi],visi[mxi];multimap<v99,v99>mpp;
vector<pair<v99,v99> >vp;
vector<v99>oma,ans,jry[mxi],tom[mxi];

void dfs(v99 ind,v99 k)
{
    visi[ind]=1;oma.push_back(ind);
    for(auto i:jry[ind])
    {
        if(!visi[i] && a[i]==k)dfs(i,k);
    }
}



int main()
{
    //test
    //while(1)
    {
        v99 n,m;cin>>n>>m;
        rep1(i,1,m)
        {
            v99 x,y;cin>>x>>y;mpp.insert(make_pair(x,y));mpp.insert(make_pair(y,x));
            vp.push_back(make_pair(x,y));
            jry[x].push_back(y);
            jry[y].push_back(x);
        }
        rep1(i,1,n)cin>>a[i];
        rep0(i,1,m)
        {
            if(a[vp[i].first]==a[vp[i].second])return cout<<-1<<ses,0;
        }
        rep1(i,1,n)tom[a[i]].push_back(i);
        rep1(i,1,n)
        {
            if(tom[i].size()==0)continue;
            for(auto j:tom[i])
            {
                if(!visi[j]){
                    dfs(j,i);
                    for(auto k:oma)ans.push_back(k);
                    oma.clear();
                }
            }
        }
        for(auto i:ans)cout<<i<<whp;cout<<ses;

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


 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test  long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 0x3f3f3f3f
#define CLR(a) memset(a,0,sizeof a)
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
vector<v99>vec,adj[mxi];
v99 visi[mxi];
bool cycle=false;

void dfs(v99 ind)
{
    if(visi[ind])return;
    visi[ind]=1;
    for(auto i:adj[ind])dfs(i);
    vec.push_back(ind);
}
void init(v99 n)
{
    CLR(visi);
    for(v99 i=0;i<=n;i++)adj[i].clear();
}


int main()
{
    test
    //while(1)
    {
        v99 n,m;cin>>n;cin>>m;
        init(n);
        for(v99 i=0;i<m;i++)
        {
            v99 x,y;cin>>x;cin>>y;
            adj[x].push_back(y);
        }
        v99 ans=0;
        for(v99 i=1;i<=n;i++)dfs(i);
        CLR(visi);
        reverse(vec.begin(),vec.end());
        for(v99 i=0;i<n;i++)
        {
            if(!visi[vec[i]])ans++,dfs(vec[i]);
        }cout<<ans<<ses;
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


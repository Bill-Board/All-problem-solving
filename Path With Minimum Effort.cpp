 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME


// Shoeb Akibul Islam
// Dept of ICE, NSTU


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define pii pair<long long, long long>
#define pf printf
#define sf scanf
#define ff first
#define sob(z)  (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
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
using namespace __gnu_pbds;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

///-------------------------------------------------------------------------------------------------------
int n,m,dp[101][101],visi[101][101];
vector<vector<int> > heights;
int dfs(int indx,int indy)
{
    if(dp[indx][indy]!=-1)return dp[indx][indy];
    cout<<indx<<whp<<indy<<ses;
    int ans=INT_MAX;
    for(int i=0;i<4;i++)
    {
        v99 x=indx+fx[i];
        v99 y=indy+fy[i];
        if(x<n and y<m and x>=0 and y>=0 and !visi[x][y])
        {
            visi[x][y]=1;
            int kot=max(abs(heights[indx][indy]-heights[x][y]),dfs(x,y));
            ans=min(ans,kot);
            visi[x][y]=0;
        }
    }
    return dp[indx][indy]=ans;
}

int minimumEffortPath() {

    }


void solve()
{
    /// code is here->
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    dp[n-1][m-1]=0;visi[0][0]=1;
    rep0(i,0,n)
    {
        vector<int>kot;
        rep0(j,0,m){int x;cin>>x;kot.pb(x);}
        heights.pb(kot);
    }
    cout<<dfs(0,0)<<ses;
    rep0(i,0,n)
    {
        rep0(j,0,m)cout<<dp[i][j]<<whp;cout<<ses;
    }

}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    //i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...

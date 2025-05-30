 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define pii pair<long long, long long>
#define pf printf
#define sf scanf
#define ff first
#define ss second
#define ALL(x) x.begin(),x.end()
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
v99 dp[2001][2001];

v99 knapSack(v99 W, v99 wt[], v99 val[], v99 n)
{

    // Base Case
    if (n == 0 || W == 0)
        return 0;
    if(dp[n][W]!=-1)return dp[n][W];
    if (wt[n-1] > W)
        return dp[n][W]=knapSack(W, wt, val, n - 1);
    else
        return dp[n][W]=max( val[n - 1] + knapSack(W - wt[n - 1],  wt, val, n - 1), knapSack(W, wt, val, n - 1));
}

v99 q=1;
void solve()
{
    v99 n,k;cin>>k>>n;
    v99 wt[n+3],val[n+2];
    rep0(i,0,n)cin>>wt[i]>>val[i];
    rep0(i,0,n+1)
    {
        rep0(j,0,k+1)dp[i][j]=-1;
    }
    //printf("Case %lld: %lld\n",q++,knapSack(k,wt,val,n));
    //cout<<"Case "<<q++<<": "<<knapSack(k,wt,val,n)<<ses;
    cout<<knapSack(k,wt,val,n)<<ses;
    //printf("%d\n",knapSack(k,wt,val,n));
    return;
}


int main()
{

    //freopen("data.out","w",stdout);
    //while(1)
    //v99 tt;cin>>tt;
    //while(tt--)
        solve();
    return 0;
}



      ///  Alhamdulillah...


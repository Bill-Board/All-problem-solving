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
typedef int v99;
typedef unsigned long long ull;
using namespace std;
using namespace __gnu_pbds;
///-------------------------------------------------------------------------------------------------------
v99 n,cr_h=0,q=1;
char board[16][16];
bool rw[30],ld[30],rd[30];
void parmu(v99 c)
{
    if(c==n){cr_h++;return;}
    for(v99 r=0;r<n;r++)
    {
        if(board[r][c]!='*' && !rw[r] && !rd[r+c] && !ld[c-r+n-1])
        {
            rw[r]=rd[r+c]=ld[c-r+n-1]=true;
            parmu(c+1);
            rw[r]=rd[r+c]=ld[c-r+n-1]=false;
        }
    }
}


void kortesitoh()
{
    rep0(i,0,n)
        rep0(j,0,n)cin>>board[i][j];
    cr_h=0;
    parmu(0);
    printf("Case %d: %d\n",q++,cr_h);
}
void solve()
{
    /// code is here->
    scanf("%d",&n);
    if(n)kortesitoh(),solve();
    else return;
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

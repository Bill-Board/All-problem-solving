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
#define mxi 100000002
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
void vout(auto a)
{
    for(auto i:a)cout<<i<<whp;cout<<ses;
}
void mout(auto a)
{
    for(auto i:a)cout<<i.ff<<whp<<i.ss<<ses;
}
void aout0(v99 a[],v99 n)
{
    rep0(i,0,n)cout<<a[i]<<whp;cout<<ses;
}
void aout1(v99 a[],v99 n)
{
    rep1(i,1,n)cout<<a[i]<<whp;cout<<ses;
}

struct ppp
{
    v99 a,b;
}ans[mxi];
v99 prime[(mxi/32)+1];
vector<v99>prm;
bool chk(v99 n,v99 pos)
{
    return (bool)(n&(1<<pos));
}
v99 sett(v99 n,v99 pos)
{
    n=n|(1<<pos);
    return n;
}
void bitwise_sieve()
{
    v99 sq=sqrt(mxi)+1;
    for(v99 i=3;i<=sq;i+=2){
        if(!chk(prime[i>>5],i&31))
        {
            for(v99 j=i*i;j<=mxi;j+=2*i)
                prime[j>>5]=sett(prime[j>>5],j&31);
        }
    }///5761455
    v99 row=1,clm=1;
    ans[2]={row,clm};
    ++clm;
    for(v99 i=3;i<=mxi;i+=2)
    {
        if(!chk(prime[i>>5],i&31))
        {
            if(row<clm)
            {
                ++row;
                clm=1;
            }
            ans[i]={row,clm};
            ++clm;
        }
    }
}
void solve()
{
    /// code is here->
    v99 n;
    scanf("%d",&n);
    if(n%2==0 && n!=2){printf("-1\n");return;}
    printf("%d %d\n",ans[n].a,ans[n].b);
    return;
}



signed main()
{
    bitwise_sieve();
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    v99 tt;scanf("%d",&tt);
    while(tt--)solve();
    return 0;
}



      ///  Alhamdulillah...

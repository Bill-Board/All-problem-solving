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
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sort2val(const pii &a,const pii &b)
{
    if(a.second==b.second)return a.first<b.first;
    return a.second<b.second;
}
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }


typedef tree< v99, null_type, less<v99>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
/// find_by_order(k) � kth index a ki ache, pointer return korbe.
/// order_of_key(x) � x kon position a ache , oita bole dibe


/**bool prime[10000020];vector<v99>prm;
void SieveOfEratosthenes(v99 n)
{
	for(v99 i=4;i<=n;i+=2)prime[i]=true;
	for (v99 p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			/// Update all multiples of p
			for (v99 i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}
	rep1(i,2,n)if(!prime[i])prm.push_back(i);

}*/
bool isPowerOfTwo (v99 x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
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



template <class T> inline T bigmod(T n,T p,T m)
{
    if(p==0)return 1;
    else if(p%2==0)
    {
        v99 val=bigmod(n,p/2,m);
        return (T)((val*val)%m);
    }
    else return (T)(((v99)n*(v99)bigmod(n,p-1,m))%m);
}
///-------------------------------------------------------------------------------------------------------

v99 a[mxi],n,dp[2][100001];

v99 dfs(v99 ind,v99 kot,v99 sum1,v99 sum2,vector<v99>q)
{

    if(ind>q.size())return 0;
    if(q[ind]==1)
    {
        if(kot)return dfs(ind+1,kot^1,sum1+1,sum2,q);
        else return dfs(ind+1,kot^1,sum1,sum2+1,q);
    }
    if(a[ind]%2==0)
    {
        return max(dfs(ind+1,))
    }











    if(ind>36)return 0;
    if(dp[kot][ind])return dp[kot][ind];
    v99 i=((ind-1)%n)+1;
    if(i==1)kot^=1;
    if(a[i]==1)
    {
        if(kot)
        {
            sum1+=1;
            if(sum1&1)dp[kot][ind]=dfs(i+1,kot^1,sum1,sum2);
            else dp[kot][ind]=dfs(i+1,kot,sum1,sum2);
        }
        else
        {
            sum2+=1;
            if(sum2&1)dp[kot][ind]=dfs(i+1,kot^1,sum1,sum2);
            else dp[kot][ind]=dfs(i+1,kot,sum1,sum2);
        }
    }
    else
    {
        if(kot)
        {
                sum1+=a[i];
                if(sum1&1)dp[kot][ind]=max(dfs(i+1,kot^1,sum1,sum2),dfs(i+1,kot^1,sum1-1,sum2));
                else dp[kot][ind]=dfs(i+1,kot,sum1,sum2),dfs(i+1,kot,sum1-1,sum2);
        }
        else
        {
                sum2+=a[i];
                if(sum2&1)dp[kot][ind]=max(dfs(i+1,kot^1,sum1,sum2),dfs(i+1,kot^1,sum1,sum2-1));
                else dp[kot][ind]=dfs(i+1,kot,sum1,sum2),dfs(i+1,kot,sum1,sum2-1);
        }
    }
    return dp[kot][ind];
}

void solve()
{
    /// code is here->
    cin>>n;vector<v99>q;q.pb(0LL);
    rep1(i,1,n)cin>>a[i];
    for(v99 i=1;i<=36;i++)q.pb(a[((i-1)%n)+1]);
    cout<<dfs(1,0,0,0)<<ses;
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


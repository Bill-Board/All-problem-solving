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

typedef long long v99;
typedef unsigned long long ull;
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define pii pair<v99, v99>
#define pf printf
#define sf scanf
#define ff first
#define sob(z)  (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(v99 i=a; i<b; i++)
#define rep1(i,a,b) for(v99 i=a; i<=b; i++)
#define rep0in(i,a,b) for(v99 i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(v99 i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
#define vc    vector<char>
#define vll    vector<v99>
#define vs    vector<string>
#define dqll   deque<v99>
#define dqc   deque<char>
#define lll   list<v99>
#define lic   list<char>

//Container Adaptors : queue,priority_queue, stack....
#define stll   stack<v99>
#define stc   stack<char>

//Associative Containers : map,set....
#define mpll  map<long long ,long long>
#define mps   map<string,string>
#define sll    set<v99>
#define sc    set<char>
#define msll   multiset<v99>
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
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

template <typename T> inline
void print(vector <T> v) {
    for (T i : v) cout << i << whp;
    cout << ses;
}

template <typename T> inline
void print(T&& t) {cout << t << ses;}


template <typename T> inline
void print(T *a, T n) {
    for(T i=0;i<n;i++)print(a[i]);
    cout<<ses;
}
template <typename T,typename Q> inline
void print(map < T, Q> v) {
    for (auto i : v) cout << i.first << whp<< i.second<<ses;
    cout << ses;
}

template <typename T>
void print(vector <vector <T>>& v) {
    for (vector <T>& vv : v) {
        for (T& i : vv)
            cout << i << whp;
        cout << ses;
    }
}
template <typename T>
inline void read(T&& t) {cin >> t;}

template <typename T> inline
void read(vector <T>& v) {for (T& i : v) cin >> i;}

template <typename T> inline
void read(T *arr,T n) {for (T i=0;i<n;i++) read(arr[i]);}

template <typename T> inline
void read(T *arr,T s, T n) {for (T i=s;i<=n;i++) read(arr[i]);}

template <typename T, typename... Args> inline
void read(T&& t, Args&&... args)
{
    cin >> t;
    read(forward<Args>(args)...);
}
template <typename T, typename... Args>
inline void print(T&& t, Args&&... args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
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
pii extendedEuclid(v99 a, v99 b) { // returns x, y | ax + by = gcd(a,b)
  if(b == 0) return pii(1, 0);
  else {
    pii d = extendedEuclid(b, a % b);
    return pii(d.second, d.first - d.second * (a / b));
  }
}
v99 modularInverse(v99 a, v99 n) {
  pii ret = extendedEuclid(a, n);
  return ((ret.first % n) + n) % n;
}
v99 mod= 1000000007LL,fact[mxi],inv[mxi];

v99 ncr(v99 n,v99 r)
{
    if(n<r)return 0LL;
    v99 invRfact=modularInverse(fact[r],mod);
    v99 invN_Rfact=modularInverse(fact[n-r],mod);
    v99 cr_h=(((fact[n]*invRfact)% mod )* invN_Rfact)%mod;
    return cr_h;
}
v99 ncr2nd(v99 n,v99 r)
{
    if(n<r)return 0LL;
    return fact[n]*inv[r]%mod * inv[n-r]%mod;
}


void solve()
{
    /// code is here->
    v99 n,m,k,cr_h=0;
    read(n,m,k);
    vll a(n);read(a);sort(sob(a));
    rep0(i,0,n)
    {
        v99 pos=upper_bound(sob(a),a[i]+k)-a.begin();
        cr_h+=ncr2nd(pos-i-1,m-1);cr_h%=mod;
    }print(cr_h);


    /**for(auto i:a)cout<<i<<whp;cout<<ses;
    for(v99 i=0,j=0;i<n;i++)
    {
        while(j<n and a[j]-a[i]<=k)j++;
        if(j-i<m)continue;
        //cout<<i<<whp<<j<<ses;
        cr_h+=ncr(j-i-1,m-1);
        cr_h%=mod;
        //cout<<cr_h<<ses;
    }
    cout<<cr_h<<ses;*/

}
void precal()
{
    fact[0]=1;v99 N=200000LL;
    rep1(i,1,N) fact[i]=(fact[i-1]*i)%mod;
    ///rep1(i,0,N) inv[i]=bigmod(fact[i],mod-2,mod);   ///emne mod ber kora jay
    inv[N]=bigmod(fact[N],mod-2,mod);
    for(v99 i=N-1;~i;--i)inv[i]=(inv[i+1]*(i+1))%mod; /// ebaveo kora jay
}


signed main()
{
    precal();
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...

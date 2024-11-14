 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test   long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 10000024
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
/// find_by_order(k) – kth index a ki ache, pointer return korbe.
/// order_of_key(x) – x kon position a ache , oita bole dibe


bool prime[mxi];v99 nth=0,prm[mxi];
void SieveOfEratosthenes(v99 n)
{
    //memset(prime, true, sizeof(prime));
    prm[2]=1;prime[1]=true;
    for (v99 p=3; p<=n; p+=2)
    {
        if (prime[p] == false)
        {
            prm[p]=1;
            /// Update all multiples of p
            for (v99 i=p*p; i<=n; i += 2*p)
                prime[i] = true;
        }
    }
    for(v99 i=3;i<=10000012;i++)
    {
        if(i%2==0)prime[i]=true;
        prm[i]+=prm[i-1];
    }
}
v99 pw(v99 a, v99 b)
{
    v99 ans = 1;
    for(v99 i = 1; i <= b; ++i)
        ans = (ans * a);
    return ans;
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

v99 z=1;
string cr1="Fardin-Khadija",cr2="Mahadi-Shanta",ans1="DOSRA number in the range",ans2="DOSRA numbers in the range";
void solve()
{
    /// code is here->
    v99 n;cin>>n;
    v99 q=sqrt(n);\
    cout<<"Case "<<z++<<":\n";
    if(q*q == n && !prime[q])cout<<cr1<<ses;
    else cout<<cr2<<ses;
    v99 pos=prm[q];
    cout<<pos<<whp;
    if(pos<=1)cout<<ans1<<ses;
    else cout<<ans2<<ses;
}






int main()
{
    SieveOfEratosthenes(10000021);
    //freopen("data.out","w",stdout);
    //while(1)
    test
    solve();

    return 0;
}



      ///  Alhamdulillah...

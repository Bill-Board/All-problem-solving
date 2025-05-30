 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test  IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 100000000
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


bool prime[100000001];v99 dp[mxi+1],q=0;
void SieveOfEratosthenes(v99 n)
{
	for (v99 p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			/// Update all multiples of p
			for (v99 i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}
	dp[2]=1;
    for(v99 i=3;i<mxi;i+=2){
        dp[i]=dp[i-1];
            if(!prime[i])dp[i]++;
        dp[i+1]=dp[i];
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
/*v99 nth=0,prime[(mxi/32)+1],tmp[(mxi/32)+1];
vector<v99>prm(5761456);
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
    v99 sq=sqrt(mxi);
    for(v99 i=3;i<=sq;i+=2){
        if(!chk(prime[i>>5],i&31))
        {
            for(v99 j=i*i;j<=mxi;j+=2*i)
                prime[j>>5]=sett(prime[j>>5],j&31);
        }
    }
    dp[2]=1;
    for(v99 i=3;i<=mxi;i+=2){
        dp[i]=dp[i-1];
            if(!chk(prime[i>>5],i&31))dp[i]++;
        dp[i+1]=dp[i];
    }
}*/



void solve()
{
    /// code is here->
    v99 a,b;cin>>a>>b;
    cout<<dp[b]-dp[a-1]<<ses;
}






int main()
{
    SieveOfEratosthenes(mxi);cout<<q<<ses;
    //freopen("data.out","w",stdout);
    //while(1)
    test
    solve();

    return 0;
}



      ///  Alhamdulillah...

/*v99 kortesi(v99 a,v99 b)
{
    v99 cr_h=0;
    if(a<=2)a=3,cr_h++;
    else if(a%2==0)a++;
    if(b%2==0)b--;
    if(abs((a>>5)-(b>>5))<2)
    {
        for(v99 i=a;i<=b;i+=2)if(!chk(prime[i>>5],i&31))cr_h++;
        return cr_h;
    }
    v99 prtm=(a>>5),seee=(b>>5);
    v99 dif1=prtm,dif2=(b>>5);
    while(dif1==prtm){if(!chk(prime[a>>5],a&31))cr_h++;a+=2;dif1=a>>5;}
    while(dif2==seee){if(!chk(prime[b>>5],b&31))cr_h++;b-=2;dif2=b>>5;}
    return cr_h+dp[seee-1]-dp[prtm];
}*/




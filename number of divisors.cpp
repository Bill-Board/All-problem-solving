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
#define mxi 1000001
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
/// find_by_order(k) � kth index a ki ache, pointer return korbe.
/// order_of_key(x) � x kon position a ache , oita bole dibe


/*bool prime[100000000];
void SieveOfEratosthenes(v99 n)
{
	//memset(prime, true, sizeof(prime));
	//for(v99 i=4;i<=n;i+=2)prime[i]=false;
	for (v99 p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			/// Update all multiples of p
			for (v99 i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}prm.push_back((v99)2);
	for(v99 i=3;i<=n;i+=2)if(!prime[i])prm.push_back(i);
}*/
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


v99 nth=0,prime[(mxi/32)+1];
vector<v99>prm(78499);
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
    prm[nth++]=2;
    for(v99 i=3;i<=mxi;i+=2){
        if(!chk(prime[i>>5],i&31))
        {
            prm[nth++]=i;
            for(v99 j=i*i;j<=mxi;j+=2*i)
                prime[j>>5]=sett(prime[j>>5],j&31);
        }
    }
}


void solve()
{
    /// code is here->
    v99 n,cr_h=1;
    cin>>n;
    v99 sq=sqrt(n)+1;
    for(auto i:prm)
    {
        if(i>sq)break;
        if(n%i==0)
        {
            v99 koita=0;
            while(n%i==0){koita++;n/=i;}
            cr_h*=koita+1;
        }
        if(n==1)break;
    }
    if(n>1)cr_h*=2;
    cout<<cr_h<<ses;
}






int main()
{
    bitwise_sieve();
    //freopen("data.out","w",stdout);
    //while(1)
    test
    solve();

    return 0;
}



      ///  Alhamdulillah...

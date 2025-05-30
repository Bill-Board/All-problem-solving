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
#define mxi 1000000001
#define mp make_pair
#define pii pair<long long,long long>
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
bool prime[100009];
vector<v99>prm;
void SieveOfEratosthenes(v99 n)
{
	for (v99 p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			for (v99 i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}prm.push_back((v99)2);
	for(v99 i=3;i<=n;i+=2)if(!prime[i])prm.push_back(i);
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




void solve(v99 tc)
{
    /// code is here->
    v99 n,m,mod=1000000007,cr_h=1;
    //scanf("%lld %lld",&n,&m);
    cin>>n;cin>>m;
    v99 sq=sqrt(n)+1;
    for(auto i:prm)
    {
        if(i>sq)break;
        if(n%i==0)
        {
            v99 koita=0;
            while(n%i==0){koita++;n/=i;}
            koita*=m;
            v99 ans1=(bigmod(i,koita+1,mod)-1);
            v99 ans2=modularInverse(i-1,mod)%mod;
            v99 kot=((ans1%mod)*(ans2%mod))%mod;
            cr_h=((cr_h%mod)*(kot%mod))%mod;
        }
        if(n==1)break;
    }
    if(n>2)
    {
                v99 i=n,koita=m;
                v99 ans1=(bigmod(i,koita+1,mod)-1LL);
                v99 ans2=modularInverse(i-1,mod)%mod;
                v99 kot=((ans1%mod)*(ans2%mod))%mod;
                cr_h=((cr_h%mod)*(kot%mod))%mod;
                if(n%mod==0)cr_h=1;
    }
    cr_h%=mod;
    printf("Case %lld: %lld\n",tc,cr_h);
}






int main()
{
    //bitwise_sieve();
    SieveOfEratosthenes(100000);
    //freopen("data.out","w",stdout);
    //while(1)
    v99 tt,q=1;
    cin>>tt;
    while(tt--) solve(q++);
    return 0;
}



      ///  Alhamdulillah...

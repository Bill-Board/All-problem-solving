 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define PII pair<long long, long long>
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
#define what_is(x) cout<<x<<ses;
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
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sort2val(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second==b.second)return a.first<b.first;
    return a.second<b.second;
}
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
bool prime[100020];vector<v99>prm;
void SieveOfEratosthenes(v99 n)
{
	memset(prime, true, sizeof(prime));
	for(v99 i=4;i<=n;i+=2)prime[i]=false;
	for (v99 p=3; p*p<=n; p+=2)
	{
		if (prime[p] == true)
		{
			/// Update all multiples of p
			for (v99 i=p*p; i<=n; i += 2*p)
				prime[i] = false;
		}
	}prm.push_back(2);
	for(v99 i=3;i<=n;i+=2)if(prime[i])prm.push_back(i);

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


v99 a[100010],dp[100010];
void solve()
{
    /// code is here->
    v99 n,o=0;cin>>n;SieveOfEratosthenes(100007);
    if(n==1){cout<<1<<ses;return;}
    rep1(i,1,n)
    {
        v99 x;
        cin>>x;
        if(x==1){o++;continue;}
        v99 sq=sqrt(x);
        for(auto j:prm)
        {
            if(j>sq)break;
            if(x%j==0)
            {
                dp[i]=max(dp[a[j]],dp[i]);a[j]=i;
                while(x%j==0)x/=j;
                //if(j*j==x)dp[i]=max(dp[i],a[j]+1),a[j]=dp[i];
                //else dp[i]=max(dp[i],a[j]+1),dp[i]=max(dp[i],a[x/j]+1),a[x/j]=dp[i],a[j]=dp[i];
            }
            if(x==1)break;
        }
        if(x>1)
        {
            dp[i]=max(dp[a[x]],dp[i]);a[x]=i;
        }dp[i]++;
        for(v99 ii=1;ii<=n;ii++)cout<<dp[ii]<<whp;cout<<ses;
    }
    if(o==n){cout<<1<<ses;return;}
    v99 cr_h=0;for(v99 ii=1;ii<=100000;ii++)cr_h=max(cr_h,dp[ii]);
    cout<<cr_h<<ses;
}






int main()
{

    //freopen("data.out","w",stdout);
    //while(1)
    //test
    solve();

    return 0;
}



      ///  Alhamdulillah...



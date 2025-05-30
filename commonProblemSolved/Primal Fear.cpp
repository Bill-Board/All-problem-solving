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
bool prime[1000020];
v99 prm[674],ind=0;
bool dure(v99 n)
{
    //cout<<n<<"\t\t\t";
    v99 ans=1,sum=0;
    while(n)
    {
        v99 rem=n%10;
        sum+=(ans*rem);
        ans*=10;
        if(prime[sum] or rem==0)return false;
        n/=10;
    }
    return true;
}


void SieveOfEratosthenes(v99 n)
{
    prime[1]=true;
    for(v99 p=4; p<=n; p+=2)prime[p]=true;
	for (v99 p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			for (v99 i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}
	//cout<<"ok"<<ses;
	prm[ind++]=2;
	for (v99 i=3; i<=n; i+=2)
	{
	    if(!prime[i])
        {
            if(dure(i))prm[ind++]=i;
        }
	}
	//for(auto i:prm)cout<<i<<whp;cout<<ses;
}


void solve()
{
    /// code is here->
    v99 n;cin>>n;
    v99 pos=upper_bound(prm,prm+ind,n)-prm;
    cout<<pos<<ses;
}



signed main()
{
    SieveOfEratosthenes(1000004);
    //632647, 32647, 2647, 647, 47, and 7
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...


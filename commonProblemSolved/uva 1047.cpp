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
#define pii pair<int, int>
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

/**bool prime[10000020];vector<v99>prm;
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
	}
	rep1(i,2,n)if(prime[i])prm.push_back(i);

}*/
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












v99 n,k,cases=1,a[22];
void kortesitoh()
{
    rep0(i,0,n)scanf("%d",&a[i]);
    v99 q;scanf("%d",&q);
    vector<pair<v99,v99> >vp;
    while(q--)
    {
        v99 qq,status=0;scanf("%d",&qq);
        while(qq--)
        {
            v99 x;scanf("%d",&x);
            status |= (1 << --x);
        }
        v99 val;scanf("%d",&val);
        vp.pb({status,val});
    }

    v99 maximumcr_h=-1,cr_h=0,loop=(1<<n);
    for(v99 i=0;i<loop;i++)
    {
        v99 ans=0, koita=0;
        for(v99 j=0;j<n;j++)if(i & (1<<j))koita++,ans+=a[j];
        if(koita!=k)continue;
        for(v99 j=0;j<vp.size();j++)
        {
            v99 match=i & vp[j].ff,kot=0;
            for(v99 p=0;p<n;p++)
            {
                if(match & (1<<p))++kot;
            }
            if(kot>1)ans-=(kot-1)*vp[j].ss;
        }
        if(ans>maximumcr_h)maximumcr_h=ans,cr_h=i;
        else if(ans==maximumcr_h)
        {
            for(v99 j=0;j<n;j++)
            {
                v99 a=i & (1<<j),b=cr_h &(1<<j);
                if(a!=b)
                {
                    if(a)maximumcr_h=ans,cr_h=i;
                    break;
                }
            }
        }
    }
    cout << "Case Number  " << cases++ << "\n";
    cout << "Number of Customers: " << maximumcr_h << "\n";
    cout << "Locations recommended:";
    for(int i = 0; i < n; ++i)
    {
        if(cr_h & (1 << i))
            cout << " " << i + 1;
    }
    cout <<"\n\n";
}
void solve()
{
    while(cin>>n>>k and (n or k))kortesitoh();
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

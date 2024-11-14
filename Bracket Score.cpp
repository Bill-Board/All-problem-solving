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
/// find_by_order(k) – kth index a ki ache, pointer return korbe.
/// order_of_key(x) – x kon position a ache , oita bole dibe


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
void output(priority_queue<pii>q)
{
    while(!q.empty())cout<<q.top().ff<<whp,q.pop();
    cout<<ses;
}


void solve()
{
    /// code is here->
    v99 n;cin>>n;v99 a[n+1],b[n+1],visi[n+1]={};
    priority_queue<pii>jor1,bijor1,jor2,bijor2;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i&1)bijor1.push({a[i],i});
        else jor1.push({a[i],i});
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        if(i&1)bijor2.push({b[i],i});
        else jor2.push({b[i],i});
    }
    output(jor1);output(bijor1);
    output(jor2);output(bijor2);
    v99 cr_h=0;
    for(int i=1;i<=n;i++)
    {
        cout<<"i "<<i<<ses;
        if(visi[i])continue;
        visi[i]=1;
        if(i&1)
        {
            while(visi[jor1.top().ss])jor1.pop();
            while(visi[jor2.top().ss])jor2.pop();
            cout<<i<<whp<<jor1.top().ff<<whp<<jor1.top().ss<<ses;
            cout<<i<<whp<<jor2.top().ff<<whp<<jor2.top().ss<<ses;
            if(a[i]+jor1.top().ff>=b[i]+jor2.top().ff)
            {
                cout<<"q "<<ses;
                cr_h+=a[i]+jor1.top().ff;
                visi[jor1.top().ss]=1;
                jor1.pop();
            }
            else
            {
                cout<<"w"<<ses;
                cr_h+=b[i]+jor2.top().ff;
                visi[jor2.top().ss]=1;
                jor2.pop();
            }
        }
        else
        {
            while(visi[bijor1.top().ss])bijor1.pop();
            while(visi[bijor2.top().ss])bijor2.pop();
            cout<<i<<whp<<bijor1.top().ff<<whp<<bijor1.top().ss<<ses;
            cout<<i<<whp<<bijor2.top().ff<<whp<<bijor2.top().ss<<ses;
            if(a[i]+bijor1.top().ff>=b[i]+bijor2.top().ff)
            {
                cout<<"e "<<ses;
                cr_h+=a[i]+bijor1.top().ff;
                visi[bijor1.top().ss]=1;
                bijor1.pop();
            }
            else
            {
                cout<<"r "<<ses;
                cr_h+=b[i]+bijor2.top().ff;
                visi[bijor2.top().ss]=1;
                bijor2.pop();
            }
        }
        cout<<"visi ";aout1(visi,n);
    }
    cout<<cr_h<<ses;

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

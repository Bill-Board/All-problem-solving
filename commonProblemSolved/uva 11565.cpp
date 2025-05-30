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
//typedef long long v99;
typedef int v99;
typedef unsigned long long ull;
using namespace std;
using namespace __gnu_pbds;

typedef tree< v99, null_type, less<v99>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
/// find_by_order(k) – kth index a ki ache, pointer return korbe.
/// order_of_key(x) – x kon position a ache , oita bole dibe


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



int main()
{
    //dua
    freopen("data.out","w",stdout);
    //while(1)
    //i_love_u_huu
    v99 k;
    //scanf("%lld",&k);
    scanf("%d",&k);
    while(k--)
    {
        v99 a,b,c;bool ok=true;
        //scanf("%lld%lld%lld",&a,&b,&c);
        scanf("%d%d%d",&a,&b,&c);
        for(v99 i=-80;i<=80 && ok;i++)
        {

                   for(v99 j=-22;j<=22 && ok;j++)
                    {
                        if((i*i+j*j+(a-i-j)*(a-i-j))==c && i!=j)
                        {
                            v99 kot=i*j;
                            if(kot==0)continue;
                            v99 ki=b/kot;
                            if((i*j*ki==b)&&ki!=i && ki!=j && i!=j && (i+j+ki)==a)
                            {
                                v99 x=i,y=j,z=ki;
                                v99 ar[4];ar[0]=x;ar[1]=y,ar[2]=z;sort(ar,ar+3);
                                //printf("%lld %lld %lld\n",ar[0],ar[1],ar[2]);
                                printf("%d %d %d\n",ar[0],ar[1],ar[2]);
                                ok=false;break;
                            }
                        }
                    }
        }
    if(ok)printf("No solution.\n");
    //printf("%.5lld / %.5lld = %lld\n",fgh,abc,n);
    //if(!ok);
    }
    return 0;
}



      ///  Alhamdulillah...

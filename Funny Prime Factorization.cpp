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

bool prime[10020];
v99 prm[500],nth=0;
void SieveOfEratosthenes(v99 n)
{
    n=sqrt(n+1)+2;
	for (v99 p=3; p*p<=n; p+=2)
	{
		if (prime[p] == false)
		{
			for (v99 i=p*p; i<=n; i += 2*p)
				prime[i] = true;
		}
	}prm[nth++]=2;
	for(v99 i=3;i<=n;i+=2)if(!prime[i])prm[nth++]=i;

}

void solve(v99 n)
{
    /// code is here->
    v99 tmp=n,st=n;bool ok=false;
    map<v99,v99>mpp;
    v99 sq=sqrt(n)+1;
    for(v99 ii=0;ii<nth;ii++)
    {
        v99 i=prm[ii];
        if(i>sq)break;
        if(n%i==0)
        {
            if(!ok)st=i,ok=true;
            while(n%i==0)n/=i,mpp[i]++;
        }if(n==1)break;
    }
    if(n!=1)mpp[n]++;
    mpp[st]--;
    printf("%d = %d",tmp,st);
    for(auto i:mpp)
    {
        v99 kot=i.ss,val=i.ff;
        while(kot--)printf(" x %d",val);
    }
    printf("\n");
}



signed main()
{
    SieveOfEratosthenes(10000002);//cout<<nth<<ses;
    //dua
    //freopen("data.out","w",stdout);
    //1while(1)
    //i_love_u_huu
    v99 n;//,tc;scanf("%d",&tc);
    while(scanf("%d",&n)==1){solve(n);}
    return 0;
}



      ///  Alhamdulillah...

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




set<v99>tom[30];
v99 n,pos[27],a[10],ans[10];
char s[100];

void build()
{
    v99 i=0,len=strlen(s);
    while(i<len)
    {
        v99 k=s[i]-'A';i+=2;
        while(isalpha(s[i]))
        {
            v99 j=s[i]-'A';
            tom[k].insert(j);
            tom[j].insert(k);
            ++i;
        }
        i++;
    }
}
v99 val()
{
    rep0(i,0,n)pos[a[i]]=i;
    v99 k=0;
    rep0(i,0,n)
    {
        for(v99 j:tom[a[i]])k=max(k,abs(pos[j]-pos[a[i]]));
    }
    return k;
}
void pri()
{
    cout<<"yres"<<ses;
    rep0(i,0,26)
    {for(v99 j:tom[i])cout<<j<<whp;
    cout<<ses;}
    cout<<ses;
}
void okkk()
{
    rep0(i,0,n)cout<<(char)(a[i]+'A')<<whp;cout<<ses;
}

void kortesitoh()
{
    rep0(i,0,26)tom[i].clear();
    build();
    n=0;
    rep0(i,0,26)if(tom[i].size())a[n++]=i;
    v99 cr_h=mxi;
    do
    {
        v99 k=val();//cout<<k<<ses;
        if(k<cr_h)
        {
            cr_h=k;
            rep0(i,0,n)ans[i]=a[i];
        }
    }while(next_permutation(a,a+n));
    rep0(i,0,n)printf("%c ",ans[i]+'A');
    printf("-> %d\n",cr_h);
    //printf("%.5lld / %.5lld = %lld\n",fgh,abc,n);
    //if(!ok)printf("There are no solutions for %lld.\n",n);
}
void solve()
{
    /// code is here->
    while(scanf("%s",s)==1 && s[0]!='#')kortesitoh();
    return;
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

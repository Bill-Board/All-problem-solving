 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test  long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 100000020
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
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
/**
bool prime[mxi+1];
void SieveOfEratosthenes(int n)
{
	memset(prime, true, sizeof(prime));
	for(v99 i=4;i<=n;i+=2)prime[i]=false;
	for (int p=3; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			/// Update all multiples of p
			for (int i=p*p; i<=n; i += 2*p)
				prime[i] = false;
		}
	}
}*/
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
v99 prime[(mxi/32)+1];
bool chk(v99 n,v99 pos)
{
    return (bool)(n&(1<<pos));
}
v99 sett(v99 n,v99 pos)
{
    n=n|(1<<pos);
    return n;
}
vector<v99>prm;
void bitwise_sieve()
{
    v99 sq=sqrt(mxi)+1;
    for(v99 i=3;i<=sq;i+=2){
        if(!chk(prime[i>>5],i&31))
        {
            for(v99 j=i*i;j<=mxi;j+=2*i)
                prime[j>>5]=sett(prime[j>>5],j&31);
        }
    }
    prm.push_back(2LL);
    for(v99 i=3;i<=mxi;i+=2)
    {
        if(!chk(prime[i>>5],i&31))prm.push_back(i);
    }
}
v99 tc=1;
void solve()
{
    /// code is here->
    v99 l,u;cin>>l>>u;
    cout<<"Case "<<tc++<<": ";
    if(l>u){cout<<0<<ses;return;}
    v99 x=upper_bound(prm.begin(),prm.end(),u)-prm.begin();
    v99 y=lower_bound(prm.begin(),prm.end(),l)-prm.begin();
    cout<<max(0LL,x-y)<<ses;
}



signed main()
{
    bitwise_sieve();
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    test
    solve();
    return 0;
}




/// Alhamdulillah


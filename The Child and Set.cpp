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
v99 getval(v99 n)
{
    v99 pos=0;
    while(n%2==0)
    {
        n/=2;
        pos++;
    }
    return pos;
}
vector<v99>tom[65550];
void init()
{
    map<v99,v99> mpp;
    rep0(i,1,100000)
    {
        v99 val=getval(i);
        mpp[i]=1<<val;
    }
    for(auto i:mpp)tom[i.second].push_back(i.first);
    /*for(v99 i=1;i<=65550;i*=2)
    {
        for(auto j:tom[i])cout<<j<<whp;
        cout<<ses;
    }*/
}



int main()
{

    //freopen("data.out","w",stdout);
    //test
    //while(1)
    {
        v99 limit,n,nn,pos=0;cin>>n>>limit;init();nn=limit;
        while(nn){pos++;nn>>=1;}
        v99 kot=1<<(pos-1),cr_h=0;
        vector<v99>ans;
        for(v99 i=kot;i>0;i/=2)
        {
            for(auto j:tom[i])
            {
                if(j>limit)break;
                if(cr_h+i>n)break;
                cr_h+=i;
                ans.push_back(j);
                if(cr_h==n)break;
            }
            if(cr_h==n)break;
        }
        if(cr_h!=n)cout<<-1<<ses;
        else
        {
            cout<<ans.size()<<ses;
            for(auto i:ans)cout<<i<<whp;
            cout<<ses;
        }
    }
    return 0;
}



      ///  Alhamdulillah...


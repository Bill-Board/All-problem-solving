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
/**
bool prime[1000020];vector<v99>prm;
void SieveOfEratosthenes(v99 n)
{
	memset(prime, true, sizeof(prime));
	for(v99 i=4;i<=n;i+=2)prime[i]=false;
	for (v99 p=3; p*p<=n; p++)
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

void get_bin(v99 n,v99 q,v99 p,vector<v99>&a)
{
    string s(p,'0');v99 i=q;a.clear();
    while(n)
    {
        if(n&1)s[i]='1';
        else s[i]='0';
        n>>=1;i--;
    }
    rep0(i,1,s.size())
    {
        if(s[i]=='1')a.push_back(i);
    }
}



int main()
{

    //freopen("data.out","w",stdout);
    //test
    //while(1)
    {
        v99 n,m,k,koita=0;cin>>n>>m>>k;char a[n+2][m+2];
        v99 p=(1<<n)-1,q=(1<<m)-1;
        rep1(i,1,n)
        {
            rep1(j,1,m)cin>>a[i][j];
        }vector<vector<v99> > tom,tom1;
        vector<v99>aa(1,0);tom.push_back(aa);tom1.push_back(aa);
        for(v99 i=1;i<=p;i++)
        {
            vector<v99>b;
            get_bin(i,n,p,b);
            tom.push_back(b);
        }
        for(v99 i=1;i<=q;i++)
        {
            vector<v99>b;
            get_bin(i,m,q,b);
            tom1.push_back(b);
        }v99 cr_h=0;
        /*for(auto i:tom)
        {
            for(auto j:i)cout<<j<<whp;
            cout<<ses;
        }cout<<ses;
        for(auto i:tom1)
        {
            for(auto j:i)cout<<j<<whp;
            cout<<ses;
        }*/
        for(auto j:tom)
        {
            map<v99,v99>mpp;
            if(j.empty())continue;
            for(auto w:j)mpp[w]++;
            for(auto i:tom1)
            {
                if(i.empty())continue;
                map<v99,v99>mpp1;
                koita=0;
                for(auto w:i)mpp1[w]++;
                rep1(x,1,n)
                {
                    if(mpp[x]!=0)continue;
                    rep1(y,1,m)
                    {
                        if(mpp1[y]!=0)continue;
                        if(a[x][y]=='#')koita++;
                    }
                }
                if(koita==k)cr_h++;
                mpp1.clear();
            }
            mpp.clear();
        }
        cout<<cr_h<<ses;


    }
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/


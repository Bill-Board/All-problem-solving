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
#define mod 1000000007
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
struct ami
{
    v99 val;
    v99 r;
    v99 l;
};
vector<ami>tom[1010];
void inti(v99 h,v99 w)
{
    rep0(i,0,h)
    {
        rep0(j,0,w)tom[i].push_back({0,0,0});
    }
}

int main()
{

    //freopen("data.out","w",stdout);
    //test
    //while(1)
    {
        v99 h,w;cin>>h>>w;inti(h+6,w+6);
        v99 p[h+1],q[w+1];
        rep0(i,0,h)
        {
            v99 x;cin>>x;p[i]=x;
            rep0(j,0,x)tom[i][j].val=1;
        }
        rep0(i,0,w)
        {
            v99 x;cin>>x;q[i]=x;
            rep0(j,0,x)tom[j][i].val=1;
        }
        rep0(i,0,h)
        {
            v99 j=0;
            while(tom[i][j].val!=0 && j<w)j++;
            if(j!=p[i])return cout<<0<<ses,0;
        }
        rep0(j,0,w)
        {
            v99 i=0;
            while(tom[i][j].val!=0 && i<h)i++;
            if(i!=q[j])return cout<<0<<ses,0;
        }
        if(h==1 || w==1)return cout<<1<<ses,0;
        rep0(i,0,h)
        {
            bool ok=false;
            rep0(j,0,w)
            {
                if(ok && tom[i][j].val==0)tom[i][j].r=1;
                if(tom[i][j].val==0)ok=true;
            }
        }
        rep0(j,0,w)
        {
            bool ok=false;
            rep0(i,0,h)
            {
                if(ok && tom[i][j].val==0)tom[i][j].l=1;
                if(tom[i][j].val==0)ok=true;
            }
        }v99 cr_h=0;
        rep0(i,1,h)
        {
            rep0(j,1,w)
            {
                if(tom[i][j].val==0 && tom[i][j].l==1 && tom[i][j].r==1)
                    cr_h++;
            }
        }v99 ans=1;
        rep1(i,1,cr_h)
        {
            ans<<=1;
            ans%=mod;
        }cout<<ans<<ses;

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


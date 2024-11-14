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
#define mxi 2000003
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

bool prime[mxi+1];
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
void SieveOfEratosthenes(int n,vector<v99>&prme)
{
	memset(prime, true, sizeof(prime));cout<<n<<ses;
	for(v99 i=4;i<=n;i+=2)prime[i]=false;
	for (int p=3; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			for (int i=p*p; i<=n; i += 2*p)
				prime[i] = false;
		}
	}
	for(v99 i=2;i<=n;i++)if(prime[i])prme.push_back(i);
	//for(auto i:prme)cout<<i<<whp;cout<<ses;
}
bool mark[mxi];
void segment_sieve(v99 l,v99 r)
{
    vector<v99>prme;v99 sq=sqrt(r)+1;cout<<sq<<ses;
    SieveOfEratosthenes(sq,prme);
    for(auto i:prme)
    {
        v99 koi_theke_start_korbo=((l+i-1)/i)*i;
        for(v99 j=koi_theke_start_korbo;j<=r;j+=i)
            mark[j-l]=true;
    }

}

int main()
{

    //freopen("data.out","w",stdout);
    //test
    //while(1)
    {
        v99 l,r;
        cin>>l>>r;
        cout<<l-r<<ses;
        segment_sieve(l,r);
        for(v99 i=l;i<=r;i++)if(!mark[i-l])cout<<i<<whp;
        cout<<ses;
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

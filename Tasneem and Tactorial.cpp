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
bool prime[1000020];vector<v99>prm;
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

}
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
v99 koita_ache(v99 n,v99 base)
{
    v99 kot=0;
    while(n>0)
    {
        n/=base;
        kot+=n;
    }
    return kot;
}


int main()
{

    //freopen("data.out","w",stdout);
    SieveOfEratosthenes(1000000);
    test
    //while(1)
    {

        v99 x,n,m;cin>>x>>n>>m;
        v99 s=n+m,cr_h=0,nn=n,mm=m,sumn=1,summ=1;
        if(n==0)sumn=0;if(m==0)summ=0;
        for(auto i:prm)
        {
            if(s<i)break;
            v99 kot=koita_ache(s,i);
            v99 kot1=koita_ache(n,i);
            v99 kot2=koita_ache(m,i);
            v99 dif=kot-(kot1+kot2);
            cout<<kot<<whp<<kot1<<whp<<kot2<<whp<<dif<<ses;
            cr_h+=pw(i,dif);
            v99 koita=0;
            while(mm%i==0)
            {
                koita++;
                mm/=i;
            }summ*=((pw(i,koita+1)-1)/(i-1) );
            koita=0;
            while(nn%i==0)
            {
                koita++;
                nn/=i;
            }sumn*=((pw(i,koita+1)-1)/(i-1) );
        }//cout<<cr_h<<ses;
        if(x!=cr_h)cout<<"NO"<<ses;
        else cout<<"YES"<<ses;
        cout<<sumn+summ<<ses;
    }
    return 0;
}



      ///  Alhamdulillah...


 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test  IOS long long t;cin >> t;while(t--)
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



int main()
{

    //freopen("data.out","w",stdout);
    test
    //while(1)
    {
        v99 n,k=LLONG_MAX;map<v99,v99>v1,v2,mot;cin>>n;
        v99 a[n+2],b[n+2];
        rep0(i,0,n)
        {
            cin>>a[i];
            v1[a[i]]++;
            mot[a[i]]++;
            k=min(k,a[i]);
        }
        rep0(i,0,n)
        {
            cin>>b[i];
            v2[b[i]]++;
            mot[b[i]]++;
            k=min(k,b[i]);
        }bool ok=false;
        for(auto i:mot)
        {
            if(i.second&1){cout<<-1<<ses;ok=true;break;}
        }
        if(!ok)
        {
            v99 total=0;map<v99,v99>dif;
            for(auto i:mot)
            {
                v99 thakbe=i.second/2;
                if(thakbe!=v1[i.first])
                {
                    dif[i.first]=abs(thakbe-v1[i.first]);
                    total+=abs(thakbe-v1[i.first]);
                }
            }
            v99 thakbe=total/2,cr_h=0;
            if(dif.empty()){cout<<0<<ses;continue;}
            for(auto i:dif)
            {
                if(thakbe<1)break;
                if(2*k>i.first)cr_h+=(i.first*min(thakbe,i.second));
                else cr_h+=(2*k*min(thakbe,i.second));
                thakbe-=i.second;
            }cout<<cr_h<<ses;
        }
    }
    return 0;
}



///                    Alhamdulillah...

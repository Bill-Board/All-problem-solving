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



int main()
{

    //freopen("data.out","w",stdout);
    test
    //while(1)
    {
        v99 n,k;cin>>n>>k;v99 a[n+2][n+2];
        CLR(a,0);
        //if(k==0){cout<<"0\n0\n";continue;}
        /*v99 cr_h=sqrt(k),baki=k-(cr_h*cr_h);
        rep1(i,1,cr_h)
        {
            rep1(j,1,cr_h)
            a[i][j]=1;
        }v99 pp=0;
        rep1(i,cr_h+1,n)
        {
            if(baki)pp++;
            rep1(j,1,cr_h)
            {
                if(baki){a[i][j]=1;baki--;}
                else break;
            }
            if(!baki)break;
        }
        rep1(j,cr_h+1,n)
        {
            rep1(i,1,cr_h+pp)
            {
                if(baki){a[i][j]=1;baki--;}
                else break;
            }
            if(!baki)break;
        }
        rep1(i,1,n)
        {
            rep1(j,1,n)
            {
                if(k){a[i][j]=1;k--;}
                else break;
            }
            if(!k)break;
        }*/
        bool ok=true;v99 lp=n;
        rep0(i,0,n)
        {

                rep1(j,1,n)
                {
                    if(k && i+j<=n){a[j][j+i]=1;k--;}
                    if(!k)break;
                }
                if(i==0)continue;
                rep1(j,1,n)
                {
                    if(k && j-i>0){a[j][j-i]=1;k--;}
                    if(!k)break;

                }
                if(!k)break;
        }

        v99 cmin=LLONG_MAX,rmin=LLONG_MAX,cmax=0,rmax=0;
        rep1(i,1,n)
        {
            v99 sum=0;
            rep1(j,1,n)sum+=a[i][j];
            rmax=max(rmax,sum);
            rmin=min(rmin,sum);
        }
        rep1(j,1,n)
        {
            v99 sum=0;
            rep1(i,1,n)sum+=a[i][j];
            cmax=max(cmax,sum);
            cmin=min(cmin,sum);
        }
        v99 ans=(cmax-cmin)*(cmax-cmin);
        v99 ans2=(rmax-rmin)*(rmax-rmin);
        //what_is(ans);what_is(ans2);
        cout<<ans+ans2<<ses;
        rep1(i,1,n)
        {
            rep1(j,1,n)cout<<a[i][j];
            cout<<ses;
        }

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
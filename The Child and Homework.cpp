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



int main()
{

    //freopen("data.out","w",stdout);
    //test
    //while(1)
    {
        string s1,s2,s3,s4,smin,smax;
        v99 mn=LLONG_MAX,mx=0;
        cin>>s1>>s2>>s3>>s4;
        v99 a=(v99)s1.size()-2,b=(v99)s2.size()-2,c=(v99)s3.size()-2,d=(v99)s4.size()-2;
        if(mn>a)
        {
            smin=s1;
            mn=a;
        }
        if(mn>b)
        {
            smin=s2;
            mn=b;
        }
        if(mn>c)
        {
            smin=s3;
            mn=c;
        }
        if(mn>d)
        {
            smin=s4;
            mn=d;
        }



        if(mx<a)
        {
            smax=s1;
            mx=a;
        }
        if(mx<b)
        {
            smax=s2;
            mx=b;
        }
        if(mx<c)
        {
            smax=s3;
            mx=c;
        }
        if(mx<d)
        {
            smax=s4;
            mx=d;
        }v99 q=0;
        if(s1==smin && 2*mn<=(b) && 2*mn<=(c) && 2*mn<=(d))q++;
        if(s2==smin && 2*mn<=(a) && 2*mn<=(c) && 2*mn<=(d))q++;
        if(s3==smin && 2*mn<=(b) && 2*mn<=(a) && 2*mn<=(d))q++;
        if(s4==smin && 2*mn<=(b) && 2*mn<=(c) && 2*mn<=(a))q++;
        if(s1==smax && mx>=(b*2) && mx>=(c*2) && mx>=(d*2))q++;
        if(s2==smax && mx>=(a*2) && mx>=(c*2) && mx>=(d*2))q++;
        if(s3==smax && mx>=(b*2) && mx>=(a*2) && mx>=(d*2))q++;
        if(s4==smax && mx>=(b*2) && mx>=(c*2) && mx>=(a*2))q++;
        if(q==1)
        {
            if(s1==smin && 2*mn<=(b) && 2*mn<=(c) && 2*mn<=(d))return cout<<s1[0]<<ses,0;
            if(s2==smin && 2*mn<=(a) && 2*mn<=(c) && 2*mn<=(d))return cout<<s2[0]<<ses,0;
            if(s3==smin && 2*mn<=(b) && 2*mn<=(a) && 2*mn<=(d))return cout<<s3[0]<<ses,0;
            if(s4==smin && 2*mn<=(b) && 2*mn<=(c) && 2*mn<=(a))return cout<<s4[0]<<ses,0;
            if(s1==smax && mx>=(b*2) && mx>=(c*2) && mx>=(d*2))return cout<<s1[0]<<ses,0;
            if(s2==smax && mx>=(a*2) && mx>=(c*2) && mx>=(d*2))return cout<<s2[0]<<ses,0;
            if(s3==smax && mx>=(b*2) && mx>=(a*2) && mx>=(d*2))return cout<<s3[0]<<ses,0;
            if(s4==smax && mx>=(b*2) && mx>=(c*2) && mx>=(a*2))return cout<<s4[0]<<ses,0;
        }
        cout<<"C"<<ses;



    }
    return 0;
}



      ///  Alhamdulillah...


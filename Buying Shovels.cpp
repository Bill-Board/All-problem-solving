 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
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
#define CLR(a) memset(a,0,sizeof(a));
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}

bool prime(v99 n)
{
    if(n==1)return false;
    if(n==2 || n==3)return true;
    if(n%2==0)return false;
    else if(n%3==0)return false;
    else
    {
        for(v99 i=5;i*i<=n;i=i+6)
        {
            if(n%i==0)return false;
            else if(n%(i+2)==0) return false;
            else if(n%(i+4)==0)return false;
        }
        return true;
    }
}


int main()
{
    test
    //while(1)
    {
        v99 n,k;cin>>n>>k;
        if(n<=k){cout<<1<<ses;continue;}
        vector<v99>tom;
        for(v99 i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                tom.push_back(i);
                tom.push_back(n/i);
            }
        }
        if(tom.empty()){cout<<n<<ses;continue;}
        sort(tom.begin(),tom.end());
        reverse(tom.begin(),tom.end());
        for(auto i:tom)
        {
            if(i<=k)
            {     cout<<n/i<<ses;
                break;
            }
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


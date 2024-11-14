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
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
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

vector<vector<v99> >ke_tumi(64,vector<v99>(mxi));
void procedure(vector<vector<v99> >&ke_tumi,v99 a[],v99 n)
{
    v99 q=1;
    rep0(i,0,64)
    {
        rep1(j,1,n)
        {
            ke_tumi[i][j]=ke_tumi[i][j-1];
            if(a[j]&q)
            {
                ke_tumi[i][j]++;
            }
        }
        q*=2;
    }
}

int main()
{
    //test
    //while(1)
    {
        v99 n;cin>>n;v99 a[n+1];
        rep1(i,1,n)cin>>a[i];
        procedure(ke_tumi,a,n);
        /*rep0(i,0,64)
        {
            rep1(j,1,n)
            cout<<ke_tumi[i][j]<<whp;
            cout<<ses;
        }*/
        v99 kot=(n*(n-1))/2;v99 q=1,cr_h=0,mod=1000000007;
        rep0(i,0,64)
        {
            v99 ek_ache=ke_tumi[i][n];
            v99 zero=n-ek_ache;
            v99 ekr_tmi=((ek_ache*(ek_ache-1))/2);
            v99 zi_tumi=((zero*(zero-1))/2);
            v99 ache=(kot-(ekr_tmi+zi_tumi))%mod;
            v99 gunfol=(q*ache)%mod;
            cr_h+=gunfol;cr_h%=mod;q*=2;q%=mod;
        }cout<<cr_h<<ses;
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


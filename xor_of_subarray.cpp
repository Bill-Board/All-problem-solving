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

void procedure(vector<vector<v99> >&ke_tumi,v99 a[],v99 n)
{
    rep0(i,0,32)
    {
        rep1(j,1,n)
        {
            ke_tumi[i][j]=ke_tumi[i][j-1];
            if(a[j]&(1<<i))
            {
                ke_tumi[i][j]++;
            }
        }
    }
}

v99 ans_hbe_eta_diye(v99 l,v99 r,vector<vector<v99> >&ke_tumi)
{
    v99 ans=0;
    rep0(i,0,32)
    {
        v99 onekoita=ke_tumi[i][r]-ke_tumi[i][l-1];
        if(onekoita&1)
        {
            ans+=(1<<i);
        }
    }return ans;
}




int main()
{
    //test
    //while(1)
    {
        v99 n;cin>>n;v99 a[n+1];
        rep1(i,1,n)cin>>a[i];
        vector<vector<v99> >ke_tumi(32,vector<v99>(n+1));
        procedure(ke_tumi,a,n);
        /*rep0(i,0,32)
        {
            rep1(j,1,n)
            cout<<ke_tumi[i][j]<<whp;
            cout<<ses;
        }*/
        v99 q;cin>>q;
        while(q--)
        {
            v99 tom,jerry;cin>>tom>>jerry;
            cout<<ans_hbe_eta_diye(tom,jerry,ke_tumi)<<ses;
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

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
#define mxi 200000
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a) memset(a,0,sizeof a)
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
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}

vector<v99>kongula,a[mxi];
v99 sum=0,visi[mxi],ache[mxi],lagbe[mxi],ans[mxi];
void dfs(v99 ind)
{
    visi[ind]=1;
    if(ache[ind]>=lagbe[ind])
    {
        v99 besi=ache[ind]-lagbe[ind];
        besi=besi/(v99)10;
        sum+=besi;
    }
    else
    {
        sum-=(lagbe[ind]-ache[ind]);
    }
    kongula.push_back(ind);
    for(auto i:a[ind])
    {
        if(!visi[i])dfs(i);
    }
}
int main()
{
    //test
    //while(1)
    {
        v99 n,q,hpy=0,unh=0;cin>>n>>q;
        rep1(i,1,n)cin>>ache[i];
        rep1(i,1,n)cin>>lagbe[i];
        rep1(i,1,q)
        {
            v99 x,y;cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        rep1(i,1,n)
        {
            if(!visi[i]){
                sum=0;kongula.clear();
                dfs(i);
                if(sum>=0)
                {
                    hpy++;
                    for(auto j:kongula)ans[j]=1;
                    //for(auto j:kongula)cout<<j<<whp;cout<<ses;
                }
                else unh++;
            }
        }
        cout<<unh+hpy<<whp<<hpy<<whp<<unh<<ses;
        rep1(i,1,n){cout<<ans[i];if(i!=n)cout<<whp;}
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


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
vector<pair<v99,v99> >vp;

v99 ami_ki_kortam(v99 l,v99 r,v99 kkk)
{
    v99 ans=0,lf=l,rf=l,dif=0,val=0;
    v99 mini=0,maxx=0;
    mini=max(mini,vp[lf].first);
    while(rf!=r)
    {
        val+=vp[rf].second;
        maxx=max(maxx,vp[rf].first);
        rf++;
        while(maxx-mini>=kkk && lf<rf)
        {
            val-=vp[lf].second;lf++;
            mini=max(mini,vp[lf].first);
        }
        ans=max(ans,val);
    }
    return ans;
}
int main()
{
    //test
    //while(1)
    {
        v99 n,m;cin>>n>>m;
        rep0(i,0,n)
        {
            v99 x,y;cin>>x>>y;
            vp.push_back(make_pair(x,y));
        }
        sort(vp.begin(),vp.end());
        //for(auto i:vp)cout<<i.first<<whp<<i.second<<ses;
        cout<<ami_ki_kortam(0,n,m)<<ses;
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

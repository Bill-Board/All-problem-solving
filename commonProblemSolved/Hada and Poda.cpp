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
#define mxi 1000005
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
v99 k,crush=0;
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
struct ami{
    v99 l;
    v99 r;
    v99 index;
};
bool cpmm(ami &a,ami &b)
{
    if(a.l/k==b.l/k)return a.r<b.r;
    return a.l<b.l;
}

vector<ami>tumi;
vector<v99>tom(mxi);
v99 a[mxi],ans[mxi];

v99 ki_korbo(v99 koita,v99 val)
{
    koita=(koita+1)/2;
    koita=koita*koita;
    return val*koita;
}
void add(v99 koi)
{
    crush-=ki_korbo(tom[a[koi]],a[koi]);
    tom[a[koi]]++;
    crush+=ki_korbo(tom[a[koi]],a[koi]);
}
void Remv(v99 koi)
{
    crush-=ki_korbo(tom[a[koi]],a[koi]);
    tom[a[koi]]--;
    crush+=ki_korbo(tom[a[koi]],a[koi]);
}


int main()
{
    //test
    //while(1)
    {
        v99 n,q;cin>>n>>q;
        rep0(i,0,n)cin>>a[i];

        for(v99 i=0;i<q;i++)
        {
            v99 x,y;cin>>x>>y;x--;y--;
            tumi.push_back({x,y,i});
        }k=sqrt(n);
        sort(tumi.begin(),tumi.end(),cpmm);
        v99 x=-1,y=0;
        rep0(i,0,q)
        {
            ami tore=tumi[i];
            while(x<tore.r)add(++x);
            while(y<tore.l)Remv(y++);
            while(x>tore.r)Remv(x--);
            while(y>tore.l)add(--y);
            ans[tumi[i].index]=crush;
        }
        rep0(i,0,q)cout<<ans[i]<<ses;
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


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
#define mxi 100
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

vector<v99>a[mxi];
v99 visi[mxi];
bool ok=false;
void dfs(v99 ind,v99 maa,v99 &bow)
{
    if(visi[ind]==0)bow++;
    if(visi[ind]==1){ok=true;return;}
    visi[ind]=1;//cout<<ind<<ses;
    for(auto i:a[ind])
    {
        if(i==maa)continue;
        dfs(i,ind,bow);
    }visi[ind]=2;
}
int main()
{
    //test
    //while(1)
    {
        v99 n,m;cin>>n>>m;
        if(n!=m)return cout<<"NO"<<ses,0;
        rep1(i,1,m)
        {
            v99 x,y;cin>>x>>y;
            //if(x>y)swap(x,y);
            a[x].push_back(y);
            a[y].push_back(x);
        }v99 bow=0;
        dfs(1,0,bow);//cout<<bow<<ses;
        if(bow==n && ok)cout<<"FHTAGN!"<<ses;
        else cout<<"NO"<<ses;
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

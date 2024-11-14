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
#define mxi 200006
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 0x3f3f3f3f
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int>> pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 val=1,visi[mxi];
vector<v99>a[mxi];

void dfs(v99 ind,map<v99,v99>&mpp)
{
    visi[ind]=1;
    mpp[ind]++;
    for(auto i:a[ind])
    {
        if(!visi[i]){dfs(i,mpp);val++;}
    }
}


void init(v99 n)
{
    memset(visi,0,sizeof visi);
    for(v99 i=1;i<=n;i++)a[i].clear();
}
int main()
{
    test
    //while(1)
    {
        v99 n;cin>>n;init(n);
        v99 ans[n+1];
        for(v99 i=1;i<=n;i++)
        {
            v99 x;cin>>x;
            a[i].push_back(x);
        }
        for(v99 i=1;i<=n;i++)
        {
            map<v99,v99>mpp;val=1;
            if(!visi[i])dfs(i,mpp);
            for(auto i:mpp)ans[i.first]=val;
        }
        for(v99 i=1;i<=n;i++)cout<<ans[i]<<whp;
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


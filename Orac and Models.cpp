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
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 0x3f3f3f3f
#define CLR(a) memset(a,0,sizeof a)
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
v99 n,visi[mxi],val[mxi],a[mxi];

void dfs(v99 ind)
{
    visi[ind]=1;
    for(v99 i=2;(i*ind)<=n;i++)
    {
        if(!visi[i*ind])dfs(i*ind);
        if(a[ind]<a[i*ind])val[ind]=max(val[ind],val[i*ind]+1);
    }
}




void init(){CLR(visi);CLR(val);
}
int main()
{
    test
    //while(1)
    {
        cin>>n;init();
        for(v99 i=1;i<=n;i++)cin>>a[i];
        for(v99 i=1;i<=n;i++)
        {
            if(!visi[i])dfs(i);
        }v99 h=0;
        for(v99 i=1;i<=n;i++){h=max(h,val[i]);}
        cout<<h+1<<ses;
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

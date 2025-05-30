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
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
map<v99,v99>level;
vector<v99>a[3000];
v99 visi[mxi];
v99 h=0;

void dfs(v99 ind,v99 level)
{
    if(visi[ind])return;
    h=max(h,level);
    visi[ind]=1;
    for(auto i:a[ind])
    {
        dfs(i,level+1);
    }
}

int main()
{
    //test
    //while(1)
    {
        memset(visi,0,sizeof visi);
        v99 n;cin>>n;v99 s[n+1];
        for(v99 i=1;i<=n;i++)
        {
            v99 x;cin>>x;s[i]=x;
            if(x==-1)continue;
            a[x].push_back(i);
            a[i].push_back(x);
        }
        for(v99 i=1;i<=n;i++)
        {
            if(s[i]==-1)dfs(i,1);
        }
        cout<<h<<ses;

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


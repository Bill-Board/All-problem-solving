 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
vector<v99>tr[103];
v99 visi[103];

void dfs(v99 ind)
{
    visi[ind]=1;
    for(v99 i=0;i<tr[ind].size();i++)
    {
        if(!visi[tr[ind][i]])dfs(tr[ind][i]);
    }
}

int main()
{
    v99 n;cin>>n;
    memset(visi,0,sizeof visi);
    vector<pair<v99,v99> >a;
    for(v99 i=0;i<n;i++){v99 x,y;cin>>x>>y;
    a.push_back(make_pair(x,y));
    }
    for(v99 i=0;i<n;i++)
    {
        v99 x=a[i].first,y=a[i].second;
        for(v99 j=i+1;j<n;j++)
        {
            if(x==a[j].first && y==a[j].second)continue;
            if(x==a[j].first || y==a[j].second)
            {
                tr[i].push_back(j);
                tr[j].push_back(i);
            }
        }
    }v99 ans=-1;
    for(v99 i=0;i<n;i++)
    {
        if(!visi[i]){dfs(i);++ans;}
    }
    cout<<ans<<ses;
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

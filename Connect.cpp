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
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 visited[60][60];
char gra[55][55];
v99 n;
void dfs(v99 c, v99 r,vector<pair<v99,v99>>&u)
{
    u.push_back(make_pair(c,r));
    visited[c][r]=1;
    for(v99 i=0;i<4;i++)
    {
        v99 x=c+fx[i];
        v99 y=r+fy[i];
        if(x>=0 && y<n && x<n && y>=0 && visited[x][y]==0 && gra[x][y]=='0')dfs(x,y,u);
    }
}




int main()
{
    cin>>n;
    v99 c1,r1,c2,r2;
    cin>>c1>>r1>>c2>>r2;
    vector<pair<v99,v99>>u,v;
    for(v99 i=0;i<n;i++)
        cin>>gra[i];
    dfs(c1-1,r1-1,u);
    dfs(c2-1,r2-1,v);
    v99 ans=9999999;
    for(auto p:u)
    {
        v99 x1=p.first,y1=p.second;
        for(auto q:v)
        {
            v99 x2=q.first,y2=q.second;
            ans=min(ans,((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
        }
    }cout<<ans<<ses;
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

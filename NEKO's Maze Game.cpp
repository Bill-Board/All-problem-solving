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
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 gra[3][99999];
bool visited[3][99999];
v99 n,m;
bool yes =false;
void dfs(v99 c, v99 r)
{
    if(!yes && c==2 && r==n){cout<<"YES"<<ses;yes=true;return;}
    visited[c][r]=1;
    for(v99 i=0;i<4;i++)
    {
        v99 x=c+fx[i];
        v99 y=r+fy[i];
        if(x>0 && y<=n && x<=2 && y>0 && visited[x][y]==0 && gra[x][y]==0)dfs(x,y);
    }
}


int main()
{
    cin>>n>>m;
    while(m--)
    {
        memset(visited,0,sizeof visited);
        v99 a,b;cin>>a>>b;yes=false;
        if(!gra[a][b])gra[a][b]=1;
        else gra[a][b]=0;
        dfs(1,1);
        if(!yes)cout<<"NO"<<ses;
    }
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

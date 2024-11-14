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
v99 n,m;
v99 visited[200][200];
char a[200][200];
bool flag=false;
void dfs(v99 x,v99 y)
{
    if(a[x][y]!='.')return;
    for(v99 i=0;i<4;i++)
    {
        if(a[x][y-1]=='B'||a[x][y+1]=='B'||a[x-1][y]=='B'||a[x+1][y]=='B')a[x][y]='W';
        else a[x][y]='B';
        v99 j=x+fx[i];
        v99 k=y+fy[i];
        if(j>0 && j<=n && k>0 && k<=m && a[j][k]=='.')
            dfs(j,k);
    }
}


int main()
{
    cin>>n>>m;
    v99 x,y;
    memset(a,'0',sizeof a);
    memset(visited,'0',sizeof visited);
    for(v99 i=0;i<=n;i++)a[i][0]='0';
    for(v99 i=0;i<=m;i++)a[0][i]='0';
    bool yes=false;
    for(v99 i=1;i<=n;i++)
    {
        for(v99 j=1;j<=m;j++)
               cin>>a[i][j];
    }
    for(v99 i=1;i<=n;i++)
    {
        for(v99 j=1;j<=m;j++)
           {
               if(a[i][j]=='.')dfs(i,j);
           }
    }
    for(v99 i=1;i<=n;i++)
    {
        for(v99 j=1;j<=m;j++)
           {
               cout<<a[i][j];
           } cout<<ses;
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

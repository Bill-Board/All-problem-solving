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
#define mxi 999999
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
v99 visited[3][mxi+5];
int main()
{
    v99 n,m,sum=0;cin>>n>>m;
    memset(visited,0,sizeof visited);
    while(m--)
    {
        v99 a,b;cin>>a>>b;
        if(!visited[a][b])
        {
            visited[a][b]=1;
            v99 x=(a==1?2:1);
            sum+=visited[x][b];
            sum+=visited[x][b-1];
            sum+=visited[x][b+1];
        }
        else if(visited[a][b])
        {
            visited[a][b]=0;
            v99 x=(a==1?2:1);
            sum-=visited[x][b];
            sum-=visited[x][b-1];
            sum-=visited[x][b+1];
        }
        if(sum==0)cout<<"YES"<<ses;
        else cout<<"NO"<<ses;
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

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
v99 arr[1000009];
v99 visited[100009];
vector<v99>conn[100009];
v99 n, m,sum=0, sum1=0, low=mxi;
void dfs(v99 ind,v99 c)
{
    visited[ind]=1;
    for(v99 i=0;i<conn[ind].size();i++)
    {
        if(!visited[conn[ind][i]])
        {
            if(conn[conn[ind][i]].size()==1) //leaf
            {
                if(c+arr[conn[ind][i]]<=m)
                {
                    sum++;
                    visited[conn[ind][i]]=1;
                }
            }
            else
            {
                if(arr[conn[ind][i]] && c+arr[conn[ind][i]]<=m)
                    dfs(conn[ind][i],c+arr[conn[ind][i]]);
                else if(!arr[conn[ind][i]])dfs(conn[ind][i],0);
            }
        }
    }
}


int main()
{
    cin>>n>>m;
    v99 n1=n-1;
    memset(visited,0,n+1);
    for(v99 i=1;i<=n;i++)cin>>arr[i];
    while(n1--)
    {
        v99 a, b;cin>>a>>b;
        conn[a].push_back(b);
        conn[b].push_back(a);
    }
    dfs(1,arr[1]);
    cout<<sum<<ses;
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

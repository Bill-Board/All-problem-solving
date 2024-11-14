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
vector<v99>arr[200];
char fss[200];
v99 visited[200];
queue<v99>q;
//void dfs()
//{}
bool yes=false;
void bfs()
{
    q.push(0);
    while(!q.empty())
    {
        v99 i=q.front();q.pop();
        char c=fss[i];visited[i]=1;
        for(v99 j=0;j<arr[i].size();j++)
        {
            if(!visited[arr[i][j]])q.push(arr[i][j]);
            char b=fss[arr[i][j]];
            if(c==b){yes=true;}
            else
            {
                fss[arr[i][j]]=(c=='w'?'b':'w');
            }
        }
    }
}





int main()
{
    //IOS
    v99 n,e;
    while(cin>>n)
    {
        if(n==0)return 0;
        cin>>e;
        for(v99 i=0;i<e;i++)
        {
            v99 a,b;cin>>a>>b;
            if(a>b)swap(a,b);
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        memset(fss,'0',sizeof fss);
        memset(visited,0,sizeof visited);
        fss[0]='b';
        bool flag=false;
        bfs();
        for(v99 i=0;i<n;i++)arr[i].clear();
        if(yes)cout<<"NOT BICOLORABLE."<<ses;
        else cout<<"BICOLORABLE."<<ses;
        yes=false;
       // while(!q.empty())q.pop();
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

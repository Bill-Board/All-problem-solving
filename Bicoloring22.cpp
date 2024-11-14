
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
queue<v99>q;
//void dfs()
//{}
bool yes=false;
void bfs(v99 i,char c)
{
    for(v99 j=0;j<arr[i].size();j++){
            if(arr[i][j]==i){yes=true;break;}
           char b=fss[arr[i][j]];
           if(c==b && fss[arr[i][j]]!='0'){yes=true;break;}
           else
           {
               if(c=='0' || b=='w')fss[arr[i][j]]='b';
                else fss[arr[i][j]]='w';
           }
    }
}



int main()
{
    //IOS
    v99 n,e;
    while(cin>>n)
    {
        if(n==0)break;
        cin>>e;
        for(v99 i=0;i<e;i++)
        {
            v99 a,b;cin>>a>>b;
            //if(a>b)swap(a,b);
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        memset(fss,'0',sizeof fss);
        /*for(v99 i=0;i<n;i++)
        {
            for(v99 j=0;j<arr[i].size();j++)cout<<arr[i][j]<<whp;
            cout<<ses;
        }*/
        fss[0]='b';
        bool flag=false;
        for(v99 i=0;i<n;i++)
            {
                //if(fss[i]=='0')fss[i]='b';
                if(arr[i].size()==0)continue;
                bfs(i,fss[i]);
                if(yes){cout<<"NOT BICOLORABLE."<<ses;flag=true;break;}
            }
            if(!flag)cout<<"BICOLORABLE."<<ses;
            for(v99 i=0;i<n;i++)arr[i].clear();
            yes=false;
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

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
#define mxi 20000
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    v99 n,m;cin>>n>>m;
    map<v99,v99>visi,level;
    queue<v99>q;
    visi[n]=0;
    level[n]=0;
    q.push(n);
    while(!q.empty())
    {
        v99 x=q.front();
        q.pop();
        if(x==m)break;
        if(x-1>0 && visi[x-1]==0)
        {
            visi[x-1]++;
            level[x-1]=level[x]+1;
            q.push(x-1);
        }
        if(visi[x*2]==0 && x*2<mxi)
        {
            visi[x*2]++;
            level[x*2]=level[x]+1;
            q.push(x*2);
        }
    }
    cout<<level[m]<<ses;
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

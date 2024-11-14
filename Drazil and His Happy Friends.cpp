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
//memset(hg,0,sizeof(hg));
int main()
{
    v99 n, m;cin>>n>>m;
    vector<bool>boy(n,false);
    vector<bool>girl(m,false);
    v99 a,b,countt=0;cin>>a;
    for(v99 i=0;i<a;i++)
    {
        v99 x;cin>>x;
        boy[x]=true;
    }
    cin>>b;
    for(v99 i=0;i<b;i++)
    {
        v99 x;cin>>x;
        girl[x]=true;
    }
   // for(v99 i=0;i<m;i++){cout<<girl[i]<<whp;}
    //cout<<ses;
    for(v99 i=0;i<1000001;i++)
    {
        if(boy[i%n] && !girl[i%m]){countt++;girl[i%m]=true;}
        if(!boy[i%n] && girl[i%m]){countt++;boy[i%n]=true;}
    }
    if((a+b+countt)==n+m)cout<<"YES\n";
    else cout<<"NO\n";

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

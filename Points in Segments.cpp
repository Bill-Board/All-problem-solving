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

int main()
{
    v99 n, m;cin>>n>>m;
    vector<v99>a(m,0);
    while(n--)
    {
        v99 x,y;cin>>x>>y;x--;
        fill_n(a.begin()+x,y-x,1);
        //for(v99 i=0;i<a.size();i++)cout<<a[i]<<whp;
          //  cout<<ses;
    }
    v99 ans=0;
    for(v99 i=0;i<a.size();i++)
    {
        if(a[i]==0)ans++;
    }
    cout<<ans<<ses;
    for(v99 i=0;i<a.size();i++)
    {
        if(a[i]==0)cout<<i+1<<whp;
    }
    cout<<ses;


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

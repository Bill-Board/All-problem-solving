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
v99 n,m,visi[mxi+1];
int main()
{
    cin>>n>>m;
    memset(visi,0,n+1);
    map<v99,v99>mpp;
    for(v99 i=1;i<=n;i++)mpp[i]=i;
    v99 l,r,x;
    while(m--)
    {
        cin>>l>>r>>x;
        vector<v99>c;
        auto low=mpp.lower_bound(l);
        for(auto it=low;it!=mpp.end();++it)
        {
            v99 a=it->second;
            if(a>r)break;
            if(a==x)continue;
            visi[a]=x;
            c.push_back(a);
        }
        for(v99 i=0;i<c.size();i++)mpp.erase(c[i]);
        //for(auto it=mpp.begin();it!=mpp.end();++it)cout<<it->second<<ses;
        c.clear();
    }
    for(v99 i=1;i<=n;i++)cout<<visi[i]<<whp;
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

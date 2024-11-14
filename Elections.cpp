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
#define mxi 9999999999
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
    v99 n,m;cin>>n>>m;
    vector<v99>vec;
    map<v99,v99>mpp;
    for(v99 i=0;i<m;i++)
    {
        v99 h=-1,pos=-1;
        for(v99 j=0;j<n;j++)
        {
            v99 x;cin>>x;
            if(h<x){h=x;pos=j;}
        }
        vec.push_back(pos+1);
        mpp[pos+1]++;
    }v99 h=-1,ans=mxi;
    for(auto it=mpp.begin();it!=mpp.end();++it)h=max(h,it->second);
    for(auto it=mpp.begin();it!=mpp.end();++it)
    {
        if(h==it->second)ans=min(ans,it->first);
    }cout<<ans<<ses;
    /*
    v99 h=-1,ans;
    for(v99 i=0;i<vec.size();i++)
    {
        v99 x=mpp[vec[i]];
        if(h<x)
        {
            h=x;
            ans=vec[i];
        }
    }
    cout<<ans<<ses;*/
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

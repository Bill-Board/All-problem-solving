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
    v99 n,q=0;cin>>n;
    v99 a[n];
    vector<v99>v;
    for(v99 i=0;i<n;i++)cin>>a[i];
    for(v99 i=0;i<n;i++)
    {
        if(a[i]==1)q++;
        else
        {
           if(q!=0)v.push_back(q);q=0;
           v.push_back(q);
        }
    }
    if(q!=0)v.push_back(q);
    v99 hig=-1;
    for(v99 i=0;i<v.size();i++)
        {hig=max(v[i],hig);}
    hig=max(hig,v[0]+v[v.size()-1]);
    cout<<hig<<ses;
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

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
    map<v99,v99>mpp;
    for(v99 i=0;i<6;i++)
    {
        v99 x;cin>>x;
        mpp[x]++;
    }
    if(mpp.size()==1)return cout<<"Elephant"<<ses,0;
    if(mpp.size()==2)
    {
        auto it=mpp.begin();
        if(it->second==2)return cout<<"Elephant"<<ses,0;
        if(it->second==3)return cout<<"Alien"<<ses,0;
        ++it;
        if(it->second==2)return cout<<"Elephant"<<ses,0;
        if(it->second==3)return cout<<"Alien"<<ses,0;
        cout<<"Bear"<<ses;
    }
    else if(mpp.size()==3)
    {
        v99 h=-1;
        auto it=mpp.begin(); h=max(h,it->second);
        ++it;h=max(h,it->second);
        ++it;h=max(h,it->second);
        if(h==4)cout<<"Bear"<<ses;
        else cout<<"Alien"<<ses;
    }
    else cout<<"Alien"<<ses;
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

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
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    v99 n,n1,countt=0,incre=0,one=0;
    vector<pair<v99,v99> >a;
    map<v99,v99>mpp;map<v99,v99>::iterator it;
    cin>>n;n1=n;
    while(n1--)
    {
        v99 l,com,high=-1,low=mxi+2;
        cin>>l;
        v99 x;cin>>x;--l;com=x;
        high=max(high,x);
        low=min(low,x);
        bool hoise = false;
        while(l--)
        {
            cin>>x;
            if(com<x){hoise=true;}
            com=x;
            high=max(high,x);
            low=min(low,x);
        }
        if(!hoise)
        {
            if(high!=low){
                a.push_back(make_pair(low,high));
                incre++;
            }
            else{
                mpp[high]++;
                one++;
            }
        }
        else countt++;
    }v99 sum=0,oneee=mpp.size(),j=0;
    for(v99 i=1;i<=countt;i++)
        sum+=((n-i)*2 +1);
        sum+=incre;
    for(it=mpp.begin();it!=mpp.end();++it)
    {
        j+=(it->second);
    }j=j-oneee;
    j=j*(oneee-1);sum+=j;
    oneee=(oneee*(oneee-1))/2;
    sum+=oneee;
    sum+=(one*incre);
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

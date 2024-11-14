 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    test
    //while(1)
    {
        v99 n,k,hh=0,sum=0;cin>>n>>k;
        v99 a[n+1];
        for(v99 i=0;i<n;i++)cin>>a[i];
        map<v99,v99>mpp;
        vector<v99>vec,vec2;
        for(v99 i=0;i<n/2;i++)
        {
            v99 x=a[i]+a[n-i-1];
            vec2.push_back(max(a[i],a[n-i-1]));
            mpp[x]++;vec.push_back(x);
        }v99 h=0;
        for(auto i:mpp){sum+=i.first;h=max(h,i.second);}//cout<<i.first<<ses;}
        //for(auto i:vec)cout<<i<<ses;
        if(h==n)cout<<0<<ses;
        else
        {
            v99 lp,nn=vec.size()/2;
            v99 x=vec2[i];

        }

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


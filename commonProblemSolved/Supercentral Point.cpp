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
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    //test
    {
        vector<pair<v99,v99> >a;
        v99 n;cin>>n;
        for(v99 i=0;i<n;i++)
        {
            v99 x,y;cin>>x>>y;
            a.push_back(make_pair(x,y));
        }v99 ans=0;
        for(v99 i=0;i<n-1;i++)
        {
            v99 p=a[i].first,q=a[i].second;
            bool l=false,r=false,u=false,d=false;
            for(v99 j=0;j<n;j++)
            {
                if(i==j)continue;
                v99 x=a[j].first,y=a[j].second;
                if(x==p && q<y)u=true;
                if(x==p && q>y)d=true;
                if(p<x && q==y)r=true;
                if(p>x && q==y)l=true;
            }
            if(u && d && l && r)ans++;
        }
        cout<<ans<<ses;

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


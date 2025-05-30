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
struct oo
{
    v99 p,q;bool r;
};


int main()
{
    //test
    {
        v99 n,x,y,h=-1,pos=n+1;cin>>n>>x>>y;
        vector<v99>a;
        for(v99 i=0;i<7;i++)a.push_back(INT_MAX);
        vector<oo>v;
        for(v99 i=0;i<n;i++){v99 qqq;cin>>qqq;a.push_back(qqq);}
        for(v99 i=0;i<7;i++)a.push_back(INT_MAX);
        for(v99 i=7;i<n+7;i++)
        {
            v99 xx=x,yy=y,ans=0;
            bool ok=false;
            for(v99 j=i-1;xx--;j--)
            {
                if(a[i]<a[j])ans++;
            }
            for(v99 j=i+1;yy--;j++)
            {
                if(a[i]<a[j])
                ans++;
            }//cout<<ans<<ses;
            v.push_back({ans,i+1,ok});
            h=max(h,ans);
            //cout<<ans<<whp<<i+1<<whp<<ok<<ses;
        }
        //;reverse(v.begin(),v.end());
        //sort(v.begin(),v.end(),);
        for(v99 i=0;i<n;i++)
        {
            if(v[i].p==h)
            {
                //if(!v[i].r) return cout<<v[i].q-7<<ses,0;
                pos=min(pos,v[i].q);
            }
            //cout<<v[i].p<<whp<<v[i].q<<whp<<v[i].r<<ses;
        }
            cout<<pos-7<<ses;
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

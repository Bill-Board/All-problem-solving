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
//set <int, greater <int> > ::iterator it;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    v99 q;cin>>q;
    while(q--)
    { ///     10 90
      ///     11 10 10 10 10 10 10 10 10 10

        v99 n, t, sum=0, h=0, countt=0, p=0, s=0;cin>>n>>t;
        bool brak=false;
        for(v99 i=1;i<=n;i++)
        {
            v99 x;cin>>x;sum+=x;
            if(h<x){h=x;p=i;}
            if(sum>t)
            {
                brak=true;
                sum-=h;countt=i-1;
                for(v99 j=i+1;j<=n;j++)
                {
                    cin>>x;sum+=x;
                    if(sum>t)continue;
                    else s++;
                }
            }
            if(brak)break;
        }
        if(!brak)cout<<0<<ses;
        else cout<<p<<ses;

    }
    return 0;
}


/*
v99 n,t;cin>>n>>t;
        v99 h=0,p=1,sum=0,m=0,d=0,d1=0,a[n];
        for(v99 i=1;i<=n;i++)cin>>a[i];
        for(v99 i=1;i<=n;i++)
        {
            sum+=a[i];
            if(h<a[i]){h=a[i],p=i;}
            if(sum>t)
            {           /// 2 9 1 3 18 1 4
                d=max(m,d);
                sum-=h;//cout<<m<<ses;
                if(p!=i)--m;//cout<<m<<ses;
                while(sum<t && i<=n)
                {
                    sum+=a[i++];
                    m++;
                }
               // d1=max(m,d);
                break;
            }
            m++;
            if(i==n)p=0;
        } //cout<<d<<whp<<m<<ses;
        if(p==0)cout<<p<<ses;
        else if(d>=m)cout<<n<<ses;
        else cout<<p<<ses;
    }*/




///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                              😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

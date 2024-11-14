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
#define mxi 999999999
//set <int, greater <int> > ::iterator it;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IOS
    v99 t;cin>>t;
    while(t--)/// 6       4 3 1 0 5 2
    {
        v99 n;cin>>n;
        v99 hp,lp,h=-1,l=mxi+1,a[n+1];
        for(v99 i=1;i<=n;i++)
        {
            cin>>a[i];
            if(h<a[i]){h=a[i];hp=i;}
            if(l>a[i]){l=a[i];lp=i;}
        }
        v99 ans=h-l;
        cout<<h<<whp<<l<<ses;
        cout<<hp<<whp<<lp<<ses;
        if(ans>=n)
        {
            if(lp>hp)swap(lp,hp);
            cout<<"YES\n"<<lp<<whp<<hp<<ses;
        }
        else
        {

            v99 x=abs(lp-hp)+1;
            if(x<n)
            {
                if(lp>hp)swap(lp,hp);
                cout<<"YES\n"<<lp<<whp<<hp<<ses;
            }

        }
    }
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

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
    v99 n,v25=0,v50=0,v100=0;cin>>n;
    v99 a[n];bool flag=false;
    for(v99 i=1;i<=n;i++)cin>>a[i];
    for(v99 i=1;i<=n;i++)
    {
        if(a[1]==50 || a[1]==100){break;}
        if(a[i]==25)v25++;
        else if(a[i]==50)
        {
            v50++;
            if(v25>0)v25--;
            else break;
        }
        else
        {
            if(v25>0 && v50>0){v25--;v50--;}
            else if(v25>2)v25-=3;
            else break;
        }
        if(i==n)flag=true;
    }
    if(flag)cout<<"YES"<<ses;
    else cout<<"NO"<<ses;
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                                😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

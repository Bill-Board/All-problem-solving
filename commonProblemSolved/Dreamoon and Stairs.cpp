
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
    v99 n,m,ans;cin>>n>>m;
    bool flag=false;
    if(n==m)ans=n;
    else if(n<m)ans=-1;
    else
    {
        v99 a=n%2==0?n/2:n/2+1;
        //cout<<a<<ses;
        for(v99 i=a;i<=n;i++)
        {
            if(i%m==0){flag=true;a=i;break;}
        }
        //cout<<a<<ses;
        ans=a;
        if(!flag)ans=-1;
    }
    cout<<ans<<ses;
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

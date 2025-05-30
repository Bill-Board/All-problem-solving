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
    v99 t;cin>>t;
    while(t--)
    {
        v99 n,k,ans;cin>>n>>k;
        if(n%k==0) ans=n;
        else
        {
            v99 a=n/k;
            v99 b=k/2;
            if(k%2==0)
            {
                ans=(a*b)+(b*(a+1));
            }
            else {b++;ans=(a*b)+((a+1)*(b-1));}
        }ans=min(n,ans);
        cout<<ans<<ses;
    }
    return 0;
}

///    9 4
///





///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

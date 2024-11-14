//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
//set <int, greater <int> > ::iterator it;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int a,b,c,d,e,f,ans=0;cin>>a>>b>>c>>d>>e>>f;
    if(e<f)
    {
        int x=min(b,min(c,d));
        ans+=(x*f);
        d=d-x;
        ans+=(min(a,d)*e);
    }
    else
    {
        int x=min(a,d);
        ans+=(x*e);
        d=d-x;
        ans+=(min(b,min(c,d))*f);
    }
    cout<<ans<<ses;




    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                                😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

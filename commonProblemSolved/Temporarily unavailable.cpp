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
    int t;cin>>t;
    while(t--)
    {
        ll a,b,c,r,ans;cin>>a>>b>>c>>r;
    if(a>b)swap(a,b);
    if(a<=c && b>=c)
    {
        ll x=c+r,y=c-r;
        if(y>=a)y=y-a;
        else y=0;
        if(x<=b)x=b-x;
        else x=0;
        ans=x+y;
    }
    else if(a>c)
    {
        ll dif=b-a;
        ll x=c+r;
        if(x<a)ans=dif;
        else if(x<b)ans=b-x;
        else ans=0;
    }
    else
    {
        ll dif=b-a;
        ll x=c-r;
        if(x>b)ans=dif;
        else if(x>a)ans=x-a;
        else ans=0;
    }
    cout<<ans<<ses;
    }
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                                😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤


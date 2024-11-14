//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ll n,k;cin>>n>>k;
    map<char,ll>m;
    string s;cin>>s;
    for(ll i=1;i<=k;i++)
    {
        char c;cin>>c;
        m.insert(make_pair(c,1));
    }
    ll countt=0,ans=0;
    for(ll i=0;i<n;i++)
    {
        char c=s[i];
        if(m.count(c)>0){countt++;//cout<<s[i]<<ses;
        }
        else
        {
            ans+=((countt*(countt+1))/2);
            //cout<<ans<<ses;
            countt=0;
        }
    }
    char c=s[n-1];
    if(m.count(c)>0)ans+=((countt*(countt+1))/2);
    cout<<ans<<ses;


    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই খাওয়া দাওয়া                    😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤


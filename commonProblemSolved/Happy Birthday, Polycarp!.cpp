//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<stdlib.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,ans;cin>>n;
        string s=to_string(n);
        //cout<<s<<ses;
        int len=s.size();
        if(len==1)ans=n;
        else if(len==2){ans=(n/11)+9;}
        else if(len==3){ans=(n/111)+(9*2);}
        else if(len==4){ans=(n/1111)+(9*3);}
        else if(len==5){ans=(n/11111)+(9*4);}
        else if(len==6){ans=(n/111111)+(9*5);}
        else if(len==7){ans=(n/1111111)+(9*6);}
        else if(len==8){ans=(n/11111111)+(9*7);}
        else {ans=(n/111111111)+(9*8);}
        //else ans=81;
        cout<<ans<<ses;
    }
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                               😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤


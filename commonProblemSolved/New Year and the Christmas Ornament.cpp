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
//vector<pair<int,int> >a;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    v99 a,b,c;cin>>a>>b>>c;
    v99 mini=min(a,min(b,c)),maxi=max(a,max(b,c));
    if(a==b && b==c)cout<<a-2+a-1+a<<ses;
    else if(mini==c)cout<<c-2+c-1+c<<ses;
    else if(maxi==b && maxi==c)
    {
        if(a+1==b)cout<<a-1+a+a+1<<ses;
        else cout<<a+a+1+a+2<<ses;
    }
    else if(mini==a && mini==b)cout<<a-1+a+a+1<<ses;
    else if(mini==b)cout<<b-1+b+b+1<<ses;
    else if(c==maxi && a==mini)cout<<a+a+1+a+2<<ses;
    else if(b==maxi && a==mini)
    {
        if(a+1==c)cout<<3*a<<ses;
        else cout<<a+a+1+a+2<<ses;
    }
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

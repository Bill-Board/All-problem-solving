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
    v99 n,m,temp,sum=0;cin>>n;
    map<v99,v99>mp;map<v99,v99>::iterator it;
    for(v99 i=1;i<=n;i++)
    {
        v99 x;cin>>x;sum+=x;
        if(i==1)mp[1]=sum;
        else
        {
            mp[temp+1]=sum;
        }
        temp=sum;
    }
    for(it=mp.begin();it!=mp.end();++it)
        cout<<it->first<<whp<<it->second<<ses;
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

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
        map<v99,v99>a;
        map<v99,v99>::iterator it;
        v99 n,m,ans=0;cin>>n>>m;
        for(v99 i=0;i<n;i++)
        {
            v99 x;cin>>x;
            a[x]=i;
        }
        //for(it=a.begin();it!=a.end();++it)cout<<it->first<<whp<<it->second<<ses;
        v99 hig=0;
        for(v99 i=0;i<m;i++)
        {
            v99 x;cin>>x;
            if(a[x]>hig){
                hig=a[x];
                v99 q=a[x]-i;
                ans+=(2*q +1);
                //cout<<"q "<<q<<"  i "<<i<<ses;
               // cout<<(2*q +1)<<" ans "<<ans<<ses;
            }
            else ans++;
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

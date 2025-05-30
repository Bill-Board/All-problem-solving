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
#define print cout<<"\n"
//set <int, greater <int> > ::iterator it;
typedef long long v99;
typedef unsigned long long u99;
using namespace std;

int main()
{
    v99 n,k,sum=0;cin>>n>>k;
    v99 a[n];
    for(v99 i=1;i<=n;i++){
        cin>>a[i];sum+=a[i];}
    for(int i=2;i<=n;i++)
    {
        if((a[i]+a[i-1])<k)
        {
            a[i]=k-a[i-1];
        }
        sum-=a[i];
    }
    sum-=a[1];sum=abs(sum);
    cout<<sum<<ses;
    for(v99 i=1;i<=n;i++)cout<<a[i]<<whp;
    print;

    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                                😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

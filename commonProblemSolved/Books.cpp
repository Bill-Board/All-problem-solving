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
    v99 n,t;cin>>n>>t;
    v99 a[n];
    for(v99 i=1;i<=n;i++)
        cin>>a[i];
    v99 sum=0,countt=0,high=0,first=1;
    for(v99 i=1;i<=n;i++)
    {      ///  3 1 2 1 10
        sum+=a[i];
        if(sum>t)
        {
            high=max(high,countt);
            while(sum>t && i>=first)
            {
                countt--;
                sum-=a[first++];
            }
            countt++;
        }
        else
        {
            countt++;
        }
    }
    high=max(high,countt);
    cout<<high<<ses;
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                                😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
#define mxi  99999
//set <int, greater <int> > ::iterator it;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IOS
    int t;cin>>t;
    while(t--)
    {
        v99 n,p,k,sum=0,ans,a[mxi+1];
        cin>>n>>p>>k;
        for(v99 i=0;i<n;i++){cin>>a[i];sum+=a[i];}
        if(sum<=p)ans=n;
        else
        {
            sort(a,a+n);sum=0;
            for(v99 j=0;j<n;j++)cout<<a[j]<<whp;cout<<ses;
            for(v99 i=0;i<n;i++)
            {
                sum+=a[i];cout<<sum<<ses;
                if(sum>p)
                {
                    if(i==0)ans=0;
                    else ans=i+1;
                    break;
                }
                ans=n;
            }
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

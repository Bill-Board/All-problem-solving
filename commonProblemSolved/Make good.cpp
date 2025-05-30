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
#define mxi 999999999
//set <int, greater <int> > ::iterator it;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IOS
    v99 t;cin>>t;
    while(t--)
    {
        v99 n;cin>>n;
        v99 xr=0,i,sum1=0,ans,a[n+1];
        for(v99 i=1;i<=n;i++)
        {
            cin>>a[i];sum1+=a[i];
            xr=xr^a[i];
        }//cout<<sum1<<whp<<xr<<ses;
        if(sum1%2==0 && (sum1/2)==xr){cout<<0<<ses;}
        else
        {
            v99 b=sum1-xr+1+999999999;if(b>mxi)b=mxi;
            for(i=(sum1-xr)+1;i<=b;i++)
            {
                v99 sum=sum1+i;
                if(sum%2!=0)continue;
                sum=sum/2;
                ans=xr^i;
                //cout<<ans<<ses;
                if(sum==ans)break;
                ans=ans*2;
                //if(ans<sum){cout<<"nai\n";break;}
            }
            cout<<1<<ses<<i;
        }
        cout<<ses;
    }
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

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
    v99 n;cin>>n;
    v99 low,q=0,high,a[n+1],b[n+1];b[0]=0;a[0]=0;
    for(v99 i=1;i<=n;i++){cin>>a[i];b[i]=a[i];}
    sort(b,b+n+1);
    if(n==2)
    {
        cout<<"yes\n"<<1<<whp;
        if(a[1]==b[1])cout<<1<<ses;
        else cout<<2<<ses;
    }
    else
    {
        bool not_ok=false;
        for(v99 r=1;r<=n;r++)
        {
            //cout<<a[r]<<whp<<b[r]<<ses;
            if(a[r]!=b[r])
            {
                not_ok=true;
                low=r;
                for(v99 i=r;i<n;i++)
                {
                    if(a[i]>a[i+1])
                    {
                        q++;i++;
                        if(q==2)break;
                        while(i<n)
                        {
                            if(a[i]<a[i+1]){high=i;break;}
                            high=i+1;
                            i++;
                        }
                    }
                }
            }
            if(not_ok)break;
        }if(q==0)cout<<"yes\n"<<1<<whp<<1<<ses;
        else if(q==1)
            {
                if(a[low]==b[high])
                    {
                        for(v99 i=high+1;i<=n;i++)
                        {
                            if(a[i]!=b[i]){cout<<"no"<<ses;return 0;}
                        }
                        cout<<"yes\n"<<low<<whp<<high;
                    }
                else
                    cout<<"no"<<ses;
            }
        else cout<<"no"<<ses;
    }
    //cout<<ses;
    return 0;
}
/**
3
3 2 1




///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤
*/

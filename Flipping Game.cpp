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
    vector<v99>a,b,c;
    v99 n,x1=0,x0=0;cin>>n;
    for(v99 i=0;i<n;i++)
    {
        v99 x;cin>>x;
        a.push_back(x);
        if(x==1){x1++;if(i!=0 && x0!=0)b.push_back(x0);x0=0;}
        else {x0--;if(i!=0 && x1!=0)b.push_back(x1);x1=0;}
    }if(x1!=0)b.push_back(x1);
    else b.push_back(x0);
    for(v99 i=0;i<b.size();i++)
        cout<<b[i]<<whp;cout<<ses;
       x1=0;x0=0;
    for(v99 i=0;i<b.size();i++)
    {
        if(b[i]<0)x1+=b[i];
        else x0+=b[i];
        if(b[i]<0)c.push_back(abs(b[i]));
        else c.push_back(-b[i]);
    }
    for(v99 i=0;i<b.size();i++)
        cout<<c[i]<<whp;cout<<ses;
    if(b.size()<4)
    {
        if(b.size()==1){if(b[0]<0)cout<<abs(b[0])<<ses;
                        else cout<<n-1<<ses;}
        else if(b.size()==2)cout<<abs(b[0])+abs(b[1])<<ses;
        else
        {
            if(b[0]<0)cout<<max((b[1]-b[0]),(b[2]-b[0]))<<ses;
            else cout<<b[0]-b[1]+b[2]<<ses;
        }
    }
    else
    {
        v99 h=0;
        for(v99 w=1;w<=2;w++)
        {
            v99  ans,loop=0,l=3;
            if(b[0]<0 && b.size()%2==0)l=2;
            for(v99 i=0;loop<b.size()-l;i+=2)
                {
                    loop++;
                    if(i==0 && b[i]<0)
                    {
                        ans=b[i+1]-b[i];i--;
                    }
                   else {ans=b[i]-b[i+1]+b[i+2];}
                   //cout<<i<<whp<<ans<<ses;
                   h=max(h,ans);
                }
            if(b[b.size()-1]<0)ans=b[b.size()-2]-b[b.size()-1];
            //cout<<"ANS "<<ans<<ses;
            h=max(ans,h);b.clear();
            b=c;
        }
        cout<<h<<ses;
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

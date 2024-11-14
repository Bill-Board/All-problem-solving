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
string b;
v99 func(string a)
{
    v99 p=0;bool qache=false;
    for(v99 i=0;i<a.size();i++)
    {
        if(a[i]=='Q')
            {
                qache=true;
                b[p]='Q';p++;
            }
        else if(a[i]=='A' && qache){b[p]='A';p++;}
    }b[p]='\0';v99 len =p;qache=false;
    //for(v99 i=0;i<len;i++)cout<<b[i];
    //cout<<ses<<len<<ses;
    for(v99 i=p-1;i>=0;i--)
    {
        if(b[i]=='Q')qache=true;
        if(!qache && b[i]=='A')len--;
    }
    //for(v99 i=0;i<len;i++)cout<<b[i];
    //cout<<ses<<len<<ses;p=len;
    //if(b[p-1]=='#')b[p-1]='Q';
    //for(v99 i=0;i<len;i++)cout<<b[i];
    //cout<<ses<<len<<ses;p=len;
    return len;
}



int main()
{
    string c;
    cin>>c;
    v99 q=1,a=0,len=func(c);
    for(v99 i=0;i<len;i++)cout<<b[i];
        cout<<ses<<len<<ses;
    for(v99 i=1;i<len-1;i++)
    {
        if(b[i]=='Q')q++;
        else a++;
    }v99 ans=a*q;
    cout<<q<<" "<<a<<ses;
    cout<<ans<<ses;
    return 0;
}
/// QAAQAAAQ





///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

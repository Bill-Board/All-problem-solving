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
    v99 t;cin>>t;
    while(t--)
    {
        v99 x00=0,jor=0,sum=0;
    string a;cin>>a;bool flag=false;
    for(v99 i=0;i<a.size();i++)
    {
        if(a[i]=='0')x00++;
        else
        {
            v99 x=a[i]-'0';
            if(x%2==0)jor++;
            sum+=x;
        }
    }
    //cout<<sum<<ses;
    if(sum%3==0 && x00>0 && jor>0)flag=true;
    else if(sum%3==0 && x00>1)flag =true;
    else if(x00==a.size())flag=true;
    else flag=false;
    if(flag)cout<<"red"<<ses;
    else cout<<"cyan"<<ses;
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


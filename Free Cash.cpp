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
    v99 n,h=0;cin>>n;
    map<string,v99>mp;
    map<string,v99>::iterator it;
    for(v99 i=0;i<n;i++)
    {
        v99 x,y;cin>>x>>y;
        string s1=to_string(x)+"."+to_string(y);
        mp[s1]++;
    }
    //for(it=mp.begin();it!=mp.end();++it)
      //  cout<<it->first<<whp<<it->second<<ses;
    for(it=mp.begin();it!=mp.end();++it)
        h=max(h,it->second);
    cout<<h<<ses;
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤


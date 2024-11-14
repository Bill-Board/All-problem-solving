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
    vector<pair<v99,v99> >a;
    v99 n;cin>>n;
    for(v99 i=0;i<n;i++)
    {
        v99 a1,b1;cin>>a1>>b1;
        a.push_back(make_pair(a1,b1));
    }
    sort(a.begin(),a.end());
    v99 h=a[0].second;//cout<<h<<ses;
    for(v99 i=1;i<n;i++)
    {
        v99 x=a[i].second;
        if(h>x){cout<<"Happy Alex"<<ses;return 0;}
        else h=x;
        //cout<<a[i].first<<whp<<a[i].second<<ses;
    }
    cout<<"Poor Alex"<<ses;
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

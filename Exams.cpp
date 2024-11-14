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
    v99 n,best=-1;cin>>n;
    vector<v99>c;
    vector<pair<v99,v99> >a;
    vector<pair<v99,v99> >::iterator it ;
    for(v99 i=0;i<n;i++)
    {
        v99 x,y;cin>>x>>y;//h=max(h,x);
        c.push_back(y);
        a.push_back(make_pair(x,y));
    }
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    for(int i = 0; i < n; i++) {
    if (best <= a[i].second) {
            best = a[i].second;
        } else {
            best = a[i].first;
        }
    }cout<<best<<ses;
   // for(it=a.begin();it!=a.end();++it);
    //{
      //  cout<<it->second<<whp<<c[i]<<ses;
        //if(it->second!=c[i]){cout<<"Yes "<<h<<ses;return 0;}
        //i++;
    //}
   // cout<<c[n-1]<<ses;
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

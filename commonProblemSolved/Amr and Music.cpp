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
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//
//memset(arr,0,sizeof(hg));
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    v99 n,k;cin>>n>>k;
    vector<pair<v99,v99> >a;
    vector<v99>ans;
    for(v99 i=0;i<n;i++)
    {
        v99 x;cin>>x;
        a.push_back(make_pair(x,i+1));
    }
    sort(a.begin(),a.end());
    v99 sum=0,i=0;
    while(sum<=k && i<n)
    {
        sum+=a[i].first;//cout<<a[i].first<<ses;
        if(sum<=k)ans.push_back(a[i].second);
        i++;
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<ses;
    for(v99 i=0;i<ans.size();i++)cout<<ans[i]<<whp;cout<<ses;

    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

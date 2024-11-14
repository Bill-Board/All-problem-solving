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
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    v99 n;cin>>n;
    v99 ans[n+1];
    vector<pair<v99,v99>>arr;
    map<v99,v99>mpp;
    for(v99 i=0;i<n;i++)
    {
        v99 x;cin>>x;
        mpp[x]++;
        arr.push_back(make_pair(x,i+1));
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    v99 q=1;
    for(v99 i=0;i<n;)
    {
        v99 y=mpp[arr[i].first],x=mpp[arr[i].first];
        while(i<n && x--)
        {
            ans[arr[i].second]=q;
            i++;
        }
        q+=y;
    }
    for(v99 i=1;i<=n;i++)cout<<ans[i]<<" "; cout<<ses;
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

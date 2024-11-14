 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 0x3f3f3f3f
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int>> pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 n,l,r,x,a[17];

v99 bina(v99 i)
{
    v99 j=n,ans=0,mm=0,mn=LLONG_MAX;
    while(i)
    {
        if(i&1)
        {
            ans+=a[j];
            mm=max(a[j],mm);
            mn=min(a[j],mn);
        }
        --j;
        i>>=1;
    }
    if((mm-mn)>=x && l<=ans && ans<=r)return 1LL;
    return 0LL;
}
int main()
{
    //test
    //while(1)
    {
        cin>>n>>l>>r>>x;
        for(v99 i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        v99 ans=0,k=(1<<n);
        for(v99 i=1;i<k;i++)ans+=bina(i);
        cout<<ans<<ses;
    }
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


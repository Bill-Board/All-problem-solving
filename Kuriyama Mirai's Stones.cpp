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
    v99 a[n+1],s[n+1];a[0]=0;s[0]=0;
    for(v99 i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=a[i];
        a[i]+=a[i-1];
    }
    //cout<<ses<<ses;for(v99 i=1;i<=n;i++)cout<<a[i]<<whp<<s[i]<<ses;cout<<ses<<ses;
    sort(s,s+n+1);
    for(v99 i=1;i<=n;i++)s[i]+=s[i-1];
    v99 q;cin>>q;
    while(q--)
    {
        v99 t,l,r;cin>>t>>l>>r;
        if(t==1)cout<<a[r]-a[l-1]<<ses;
        else cout<<s[r]-s[l-1]<<ses;
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
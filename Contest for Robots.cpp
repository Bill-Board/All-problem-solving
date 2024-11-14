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
    v99 ak=0,cnt=0,duk=0,a[n+n+1],b[n+n+1];
    for(v99 i=0;i<n;i++)cin>>a[i];
    for(v99 i=0;i<n;i++)cin>>b[i];
    for(v99 i=0;i<n;i++)
    {
        if(a[i]==b[i])cnt++;
        if(a[i]==1 && b[i]==0)ak++;
        if(b[i]==1 && a[i]==0)duk++;
    }//cout<<ak<<whp<<duk<<ses;
    if(cnt==n || ak==0)cout<<-1<<ses;
    else if(ak>duk)cout<<1<<ses;
    else
    {
        ++duk;
        v99 x=duk%ak==0? duk/ak :duk/ak +1;
        //x+=(duk%ak)+1;x=max((v99)1,x);
        cout<<x<<ses;
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


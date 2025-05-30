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
    IOS
    v99 t;cin>>t;
    while(t--)
    {
        v99 n,m;cin>>n>>m;
        v99 a[n],p[m];
        for(v99 i=1;i<=n;i++)cin>>a[i];
        for(v99 i=1;i<=m;i++)cin>>p[i];
        for(v99 i=1;i<=n;i++)
        {
            for(v99 j=1;j<=m;j++)
            {
                if(a[p[j]]>a[p[j]+1])swap(a[p[j]],a[p[j]+1]);
            }
        }bool flag=false;
        for(v99 i=1;i<n;i++)
        {
            if(a[i]>a[i+1]){flag=true;break;}
        }
        if(flag)cout<<"NO"<<ses;
        else cout<<"YES"<<ses;
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

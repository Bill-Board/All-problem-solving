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
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    test
    //while(1)
    {
        v99 n,k,ans=0,pices=0,left=1,lfans=1;cin>>n>>k;v99 a[n+2],visi[n+2];a[0]=LLONG_MAX;
        for(v99 i=1;i<=n;i++)cin>>a[i];
        memset(visi,0,sizeof visi);
        for(v99 i=2;i<n;i++){if(a[i-1]<a[i] && a[i]>a[i+1])visi[i]=1;}
        v99 i=3;
        while(i!=k+1)
        {
            if(visi[i-1])pices++;
            i++;
        }left++;ans=pices;
        while(left<=n-k+1 && i<=n)
        {
            if(visi[i-1])pices++;
            if(visi[left])pices--;
            if(ans<pices){ans=pices;lfans=left;}
            left++;i++;
        }
        cout<<ans+1<<whp<<lfans<<ses;

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


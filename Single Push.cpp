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
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    test
    {
        v99 n;cin>>n;
        v99 a[n],b[n];bool ok=false;
        for(v99 i=0;i<n;i++)cin>>a[i];
        for(v99 i=0;i<n;i++)cin>>b[i];
        for(v99 i=0;i<n;i++){b[i]=b[i]-a[i];if(b[i]<0)ok=true;}
        v99 i=0;
        if(ok){cout<<"NO"<<ses;continue;}
        while(i<n && b[i]<1){i++;}
        //cout<<i<<ses;
        if(i>=n+1){cout<<"NO"<<ses;continue;}
        v99 val=b[i];
        while(i<n && b[i]==val){if(b[i]<0)ok=true;i++;}
        if(i>=n+1){cout<<"NO"<<ses;continue;}
        while(i<n){if(b[i]!=0)ok=true;i++;}
        if(ok){cout<<"NO"<<ses;continue;}
        else {cout<<"YES"<<ses;continue;}
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


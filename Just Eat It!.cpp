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
        v99 n,yasir=0;cin>>n;v99 a[n];
        for(v99 i=0;i<n;i++){cin>>a[i];yasir+=a[i];}
        v99 sum=0;bool ok=false;
        for(v99 i=0;i<n-1;i++)
        {
            sum+=a[i];
            if(sum>=yasir){cout<<"NO"<<ses;ok=true;break;}
            if(sum<0)sum=0;
        }sum=0;
        if(ok)continue;
        for(v99 i=n-1;i>0;i--)
        {
            sum+=a[i];
            if(sum>=yasir){cout<<"NO"<<ses;ok=true;break;}
            if(sum<0)sum=0;
        }
        if(!ok)cout<<"YES"<<ses;
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

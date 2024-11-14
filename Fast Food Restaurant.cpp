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
    v99 t;cin>>t;
    while(t--)
    {
        v99 ar[4];cin>>ar[0]>>ar[1]>>ar[2];sort(ar,ar+3);
        v99 a=ar[0],b=ar[1],c=ar[2],sum=0;
        if(a>0){sum++;--a;}
        if(b>0){sum++;--b;}
        if(c>0){sum++;--c;}
        if(b>0 && c>0){sum++;--c;--b;}
        if(a>0 && c>0){sum++;--a;--c;}
        if(a>0 && b>0){sum++;--a;--b;}
        if(a>0 && c>0 && b>0){sum++;--a;--b;--c;}
        cout<<sum<<ses;
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


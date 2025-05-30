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
    v99 loop=n,spp=n-1,k=0;
    for(v99 i=1;i<=n;i++)cout<<"  ";
    cout<<0<<ses;
    for(v99 i=1;i<=n;i++)
    {
        v99 koita=i+1,value=0,spp2=spp;
        while(spp2--)cout<<"  ";
        for(v99 j=0;j<koita;j++)cout<<value++<<whp;
        value-=2;
        for(v99 j=0;j<i;j++){cout<<value--;if(j!=(i-1))cout<<whp;}
        spp--;
        cout<<ses;
    }
    for(v99 i=1;i<n;i++)
    {
        for(v99 j=1;j<=i;j++)cout<<"  ";
        v99 koita=loop,value=0;
        for(v99 j=0;j<koita;j++)cout<<value++<<whp;
        value-=2;
        for(v99 j=0;j<koita-1;j++){cout<<value--;if(j!=(koita-2))cout<<whp;}
        loop--;
        cout<<ses;
    }
    for(v99 i=1;i<=n;i++)cout<<"  ";
    cout<<0<<ses;


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

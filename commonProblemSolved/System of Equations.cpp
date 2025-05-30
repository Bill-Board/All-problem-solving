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
    v99 n,m,sum=0;cin>>n>>m;
    for(v99 i=0;i<=n;i++)
    {
        for(v99 j=0;j<=m;j++)
        {
            double i2=i,j2=j;
            v99 j1=pow(j2,2.0)+0.9;
            v99 i1=pow(i2,2.0)+0.9;
            //cout<<"p   "<<i<<whp<<j1<<ses;
                //cout<<"p   "<<i1<<whp<<j<<ses;
            if((i+j1)==n && (i1+j)==m)
            {
                sum++;
                //cout<<i<<whp<<j1<<ses;
                //cout<<i1<<whp<<j<<ses;
            }
        }
    }
    cout<<sum<<ses;
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


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
    v99 n,r=0,c=0,m;char a[20][20];
    cin>>n>>m;
    for(v99 i=0;i<n;i++)
    {
        bool flag=true;
        for(v99 j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!='.')flag=false;
        }
        if(flag)r++;

    }
    for(v99 j=0;j<m;j++)
    {
        bool flag=true;
        for(v99 i=0;i<n;i++)
        {
            if(a[i][j]!='.')flag=false;
        }
        if(flag)c++;
    }
    v99 ans=r*m;
    v99 ac=c*n-(c*r);
    cout<<ans+ac<<ses;
    //cout<<r<<whp<<c<<ses;
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


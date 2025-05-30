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
    v99 n, m,sum=0, a[505][505];
    cin>>n>>m;
    for(v99 i=1;i<=n;i++)
    {
        for(v99 j=1;j<=m;j++)cin>>a[i][j];
    }
    for(v99 i=n-1;i>1;i--)
    {
        for(v99 j=m-1;j>1;j--)
        {
            if(a[i][j]==0)
            {
                v99 m=min(a[i+1][j],a[i][j+1]);
                //cout<<"m  "<<m<<ses;
                a[i][j]=m-1;
            }
        }
    }
    /*for(v99 i=1;i<=n;i++)
    {
        for(v99 j=1;j<=m;j++)cout<<a[i][j]<<whp;
        cout<<ses;
    }*/
    for(v99 i=1;i<=n;i++)
    {
        for(v99 j=1;j<=m;j++)
        {
            sum+=a[i][j];
            if(i!=n && j!=m)
            {
                if(a[i][j]>=a[i][j+1] || a[i][j]>=a[i+1][j])
                {
                    cout<<-1<<ses;return 0;
                }
            }
            else if(i==n && j==m)continue;
            else if(i==n)
            {
                if(a[i][j]>=a[i][j+1])
                    {
                    cout<<-1<<ses;return 0;
                    }
            }
            else if(j==m)
            {
                if(a[i][j]>=a[i+1][j])
                {
                    cout<<-1<<ses;return 0;
                }
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


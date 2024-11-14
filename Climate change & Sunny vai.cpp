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
        v99 n, m;
        cin>>n>>m;
        v99 sum=0,arr[n+1][m+1];
        memset(arr,0,sizeof arr);
        for(v99 i=1;i<=n;i++)
        {
            for(v99 j=1;j<=m;j++)
            {
                cin>>arr[i][j];
                sum+=arr[i][j];
                arr[i][j]=sum+arr[i-1][j];
            }sum=0;
        }
        /**for(v99 i=1;i<=n;i++)
        {
            for(v99 j=1;j<=m;j++)
            {
                cout<<arr[i][j]<<whp;
            }cout<<ses;
        }*/

        v99 q,q1=1;cin>>q;//cout<<"Case "<<t++<<":"<<ses;
        while(q--)
        {
            v99 r1,r2,c1,c2;cin>>r1>>c1>>r2>>c2;
            v99 pos=arr[r2][c2];
            v99 ledw=(c1-1>0)?arr[r2][c1-1]:0;
            v99 riup=(r1-1>0)?arr[r1-1][c2]:0;
            v99 leup=(c1-1>0 && r1-1>0)?arr[r1-1][c1-1]:0;
            pos=pos+leup-ledw-riup;
            if(pos%2!=0)cout<<"Cinderella loves Lucifar"<<ses;
            else cout<<"Rasta Mapo :("<<ses;
        }
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

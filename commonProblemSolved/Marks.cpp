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
    //test
    //while(1)
    {
        v99 n,m;cin>>n>>m;v99 visi[n+1];memset(visi,0,sizeof visi);
        char a[n+1][m+1];
        for(v99 i=1;i<=n;i++)
        {
            for(v99 j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(v99 j=1;j<=m;j++)
        {
            v99 mx=-1;
            for(v99 i=1;i<=n;i++)
            {
                v99 n=a[i][j]-'0';
                mx=max(mx,n);
            }
            for(v99 i=1;i<=n;i++)
            {
                v99 n=a[i][j]-'0';
                if(mx==n)visi[i]++;
            }
        }
        v99 ans=0;
        for(v99 i=1;i<=n;i++){if(visi[i])ans++; }cout<<ans<<ses;
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


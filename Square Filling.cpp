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
    //test
    {
        v99 n,m;cin>>n>>m;
        vector<pair<v99,v99> >vp;
        v99 a[n+1][m+1],visi[n+1][m+1];memset(visi,0,sizeof visi);
        for(v99 i=0;i<n;i++)
        {
            for(v99 j=0;j<m;j++)cin>>a[i][j];
        }
        for(v99 i=0;i<n-1;i++)
        {
            for(v99 j=0;j<m-1;j++)
            {
                if(a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1)
                {
                    visi[i][j]=1;
                    visi[i][j+1]=1;
                    visi[i+1][j]=1;
                    visi[i+1][j+1]=1;
                    vp.push_back(make_pair(i+1,j+1));
                }
            }
        }
        for(v99 i=0;i<n;i++)
        {
            for(v99 j=0;j<m;j++)
            {
                if(a[i][j]!=visi[i][j]){return cout<<-1<<ses,0;}
            }
        }cout<<vp.size()<<ses;
        for(auto i:vp)cout<<i.first<<whp<<i.second<<ses;

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


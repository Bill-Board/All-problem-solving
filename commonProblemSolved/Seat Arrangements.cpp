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
char a[2001][2001];
int main()
{

    //memset(a,'0',sizeof a);
    v99 n, m,k,sum=0,countt=0;
    vector<v99>b[2000],c[2000];
    cin>>n>>m>>k;
    bool flag=true;
    for(v99 i=0;i<n;i++)
    {
        for(v99 j=0;j<m;j++)
            {cin>>a[i][j];if(a[i][j]=='.')sum++;}
    }
    if(k==1)
    {
        cout<<sum<<ses;return 0;
    }
    for(v99 i=0;i<n;i++)
    {
        v99 countt=0;
        for(v99 j=0;j<m;j++)
            {
                if(a[i][j]=='.')
                    countt++;
                else if(countt!=0)
                {
                    b[i].push_back(countt);
                    countt=0;
                }
            }
            if(countt!=0)b[i].push_back(countt);
    }
    for(v99 j=0;j<m;j++)
    {
        v99 countt=0;
        for(v99 i=0;i<n;i++)
            {
                if(a[i][j]=='.')
                    countt++;
                else if(countt!=0)
                {
                    c[j].push_back(countt);
                    countt=0;
                }
            }
            if(countt!=0)c[j].push_back(countt);
    }
    /*for(v99 i=0;i<n;i++){
        for(v99 j=0;j<b[i].size();j++)
        cout<<b[i][j]<<whp;cout<<ses;
    }
    for(v99 i=0;i<m;i++){
        for(v99 j=0;j<c[i].size();j++)
        cout<<c[i][j]<<whp;cout<<ses;
    }*/
    countt=0;
    if(m!=1)
    {
        for(v99 i=0;i<n;i++){
        for(v99 j=0;j<b[i].size();j++)
        {
            if(b[i][j]>=k)
            {
                countt+=(b[i][j]+1-k);
            }
        }
        }
    }
    if(n!=1)
    {
        for(v99 i=0;i<m;i++){
        for(v99 j=0;j<c[i].size();j++)
        {
            if(c[i][j]>=k)
            {
                countt+=(c[i][j]+1-k);
            }
        }
        }
    }
    cout<<countt<<ses;
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

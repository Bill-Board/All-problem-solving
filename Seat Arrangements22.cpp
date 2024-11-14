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
char a[2000][2000];

int main()
{

    //memset(a,'0',sizeof a);
    v99 n, m,k,countt=0;
    cin>>n>>m>>k;
    bool flag=true;
    for(v99 i=0;i<n;i++)
    {
        for(v99 j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(v99 i=0;i<n;i++)
    {
        for(v99 j=0;j<m;j++)
        {
            flag=true;
            if(a[i][j]=='*')continue;
            else
            {
                for(v99 t=j;t<j+k;t++)
                {
                    if(a[i][t]!='.' || t>=m)
                    {
                        flag=false;break;
                    }
                }
            }
            if(flag)countt++;
        }
    }//cout<<countt<<ses;
    for(v99 j=0;j<m;j++)
        {
            for(v99 i=0;i<n;i++)
            {
                flag=true;
                if(a[i][j]=='*')continue;
                else
                {
                    for(v99 t=i;t<i+k;t++)
                    {
                        if(a[t][j]!='.' || t>=n)
                        {
                            flag=false;break;
                        }
                    }
                }
                if(flag)countt++;
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

for(v99 i=0;i<m;i++)
    {
        for(v99 j=0;j<n;j++)
        {

            flag=true;
            if(a[j][i]=='*')continue;
            else
            {
                cout<<a[j][i]<<whp<<j<<ses;
                for(v99 t=j;t<j+k;t++)
                {
                    if(a[t][j]!='.'|| t>=n)
                    {
                        flag=false;break;
                    }
                }
            }
            if(flag)countt++;
        }
    }*/

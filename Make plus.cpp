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
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 n,m;
vector<char>s[500];
vector<pair<v99,v99> >v;
v99 visi[500][500];

void dfs(v99 c, v99 r)
{
    visi[c][r]=1;
    for(v99 i=0; i<4; i++)
    {
        v99 x=r+fx[i];
        v99 y=c+fy[i];

        if(x>=0 && x<n && y>=0 && y<n && visi[x][y]==0 && s[x][y]=='*')
        {
            dfs(x, y);
        }
    }

}


int main()
{
    v99 countt=0;
    cin>>n>>m;
    for(v99 i=0;i<n;i++)
    {
        for(v99 j=0;j<m;j++)
        {
            visi[i][j]=0;
            char f;cin>>f;
            if(f=='*'){countt++;}
            s[i].push_back(f);
        }
    }
    for(v99 i=1;i<n-1;i++)
    {
        for(v99 j=1;j<m-1;j++)
        {
            if(s[i][j]=='*' && s[i-1][j]=='*' && s[i][j-1]=='*' && s[i+1][j]=='*' && s[i][j+1]=='*')
            {
                v99 up=i,down=i,leftd=j,rightd=j;
                while(leftd>=0 && s[i][leftd]=='*'){visi[i][leftd--]=1;}
                while(rightd<m && s[i][rightd]=='*' ){visi[i][rightd++]=1;}
                while(up>=0 && s[up][j]=='*'){visi[up--][j]=1;}
                //while(down < n && s[down][j] == '*') visi[down++][j] = 1;
                while(down<n  && s[down][j]=='*' ){visi[down++][j]=1;}
                for(v99 i2=0;i2<n;i2++)
                {
                    for(v99 j2=0;j2<m;j2++)
                    {
                        if(s[i2][j2]=='*' && visi[i2][j2]==0)
                            {
                                cout<<"NO"<<ses;return 0;
                            }
                    }
                }
                cout<<"YES"<<ses;return 0;
            }
        }
    }
    cout<<"NO"<<ses;
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

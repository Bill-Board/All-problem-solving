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
char tree[501][501];
v99 n,m,k,visi[501][501];
void dfs(v99 i,v99 j)
{
    if(k<1)return;
    if(visi[i][j])return;
    --k;
    visi[i][j]=1;
    for(v99 q=0;q<4;q++)
    {
        if(k<1)return;
        v99 x=i+fx[q];
        v99 y=j+fy[q];
        if(k>0 && x<n && x>=0 && y<m && y>=0 && !visi[x][y] && tree[x][y]=='.'){dfs(x,y);}
    }
}


int main()
{
    {
        cin>>n>>m>>k;
        v99 kk=0;
        for(v99 i=0;i<n;i++)
        {
            for(v99 j=0;j<m;j++)
            {cin>>tree[i][j];if(tree[i][j]=='.')++kk;}
        }k=kk-k;
            memset(visi,0,sizeof visi);
            bool ok=false;
            for(v99 i=0;i<n;i++)
            {
                for(v99 j=0;j<m;j++)
                {
                    if(tree[i][j]=='.')
                    {
                        dfs(i,j);ok=true;
                        break;
                    }
                }
                if(ok)break;
            }
        for(v99 i=0;i<n;i++)
        {
            for(v99 j=0;j<m;j++)
            {
                char c=tree[i][j];
                if(c=='.' && !visi[i][j])c='X';
                cout<<c;
            }
            cout<<ses;
        }

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

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
map<v99,v99>rrrr,sze;


v99 root(v99 val)
{
    while(val!=rrrr[val])
    {
        val=rrrr[val];
    }
    return val;
}

void dsu(v99 x,v99 y)
{
    v99 xr=root(x),yr=root(y);
    if(xr==yr)return;
    if(sze[xr]>sze[yr])
    {
        rrrr[yr]=rrrr[xr];
        sze[xr]+=sze[yr];
    }
    else
    {
        rrrr[xr]=rrrr[yr];
        sze[yr]+=sze[xr];
    }
}

int main()
{
    //test
    {
        v99 n,nn=0,m;cin>>n>>m;
        vector<v99>tree[n+1];
        for(v99 i=1;i<=n;i++){rrrr[i]=i;sze[i]=1;}
        for(v99 i=1;i<=n;i++)
        {
            v99 k;cin>>k;if(k==0)++nn;
            while(k--)
            {
                v99 kk;cin>>kk;
                tree[i].push_back(kk);
            }
        }
        for(v99 i=1;i<=n;i++)
        {
            for(v99 j=0;j<tree[i].size();j++)
            {
                v99 val=tree[i][j];
                for(v99 k=i+1;k<=n;k++)
                {
                    for(v99 p=0;p<tree[k].size();p++)
                    {
                        if(val==tree[k][p])
                        {
                            dsu(i,k);
                            break;
                        }
                    }
                }
            }
        }
        map<v99,v99>mpp;
        for(v99 i=1;i<=n;i++){mpp[root(i)]++;}
        nn==n?cout<<n<<ses:cout<<mpp.size()-1<<ses;
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


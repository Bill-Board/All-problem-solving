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
    v99 t;cin>>t;
    while(t--)
    {
        string s;
        v99 n,m;cin>>n>>m>>s;
        v99 tree[n+1][27];
        v99 q[m],ans[27];
        memset(tree,0,sizeof tree);
        for(v99 i=0;i<m;i++){cin>>q[i];}
        s='#'+s;
        for(v99 i=1;i<s.size();i++)
        {

            for(v99 k=1;k<=26;k++){tree[i][k]+=tree[i-1][k];}
            tree[i][s[i]-'a'+1]=tree[i-1][s[i]-'a'+1] + 1;
        }
        sort(q,q+m);

        memset(ans,0,sizeof ans);
        for(v99 k=0;k<m;k++)
        {
            v99 x=q[k];
            for(v99 j=1;j<=26;j++)ans[j]+=(tree[x][j]);
        }
        for(v99 i=1;i<=26;i++)ans[i]+=(tree[s.size()-1][i]);
        for(v99 i=1;i<=26;i++)cout<<ans[i]<<whp;cout<<ses;
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

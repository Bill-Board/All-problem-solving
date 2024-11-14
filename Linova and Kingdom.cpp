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
vector<v99>a[200002];
v99 ans=0,n,visi[200002],level[200002],child[200002];
void dfs(v99 ind, v99 val)
{
    level[ind]=level[val]+1;
    visi[ind]=1;
    child[ind]=1;
    for(v99 i=0;i<a[ind].size();i++)
    {
        if(visi[a[ind][i]])continue;
        else
        {
            dfs(a[ind][i],ind);
            child[ind]+=child[a[ind][i]];
        }
    }
}
int main()
{
    //test
    //while(1)
    {
        v99 k;
        cin>>n>>k;memset(visi,0,n+2);memset(level,0,sizeof level);
        memset(child,0,sizeof child);
        for(v99 i=0;i<n-1;i++)
        {
            v99 x,y;cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        dfs(1,0);
        //for(v99 i=1;i<=n;i++)cout<<child[i]<<whp;cout<<ses;
        //for(v99 i=1;i<=n;i++)cout<<level[i]<<whp;cout<<ses;

        vector<v99>vec;
        for(v99 i=1;i<=n;i++)
        {
            vec.push_back(level[i]-child[i]);
        }sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        for(v99 i=0;i<k;i++)ans+=vec[i];
        cout<<ans<<ses;

        /*cout<<ses<<ses;
        for(v99 i=h;i>0;i--)
        {
            for(v99 j=0;j<b[i].size();j++)
            {
                visi2[b[i][j]]=1;
                kk++;
                if(kk==k)break;
            }
            if(kk==k)break;
        }
        //for(v99 i=1;i<=n;i++)cout<<visi2[i]<<whp;cout<<ses;
        dfs(1,1,0);
        cout<<ans<<ses;
        /*for(auto i:b)cout<<i<<whp;cout<<ses;
        sort(b.begin(),b.end());reverse(b.begin(),b.end());
        v99 h=0;
        v99 ans[n+1];memset(ans,0,sizeof ans);
        for(v99 j=0;j<b[0];j++)
        {
            for(v99 i=0;i<b.size();i++)
            {
                b[i]--;ans[i]++;
                h++;
                if(h==k)break;
            }
            if(h==k)break;
        }*/
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


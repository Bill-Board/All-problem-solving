//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU

#include<bits/stdc++.h>
using namespace std;

typedef long long v99;
#define vll    vector<v99>
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long tokp;cin >> tokp;while(tokp--)
#define ses   "\n"
#define whp   " "
#define sob(z)  (z).begin(), (z).end()
#define ff first
#define ss second
#define pii pair<v99, v99>
#define mxi 200005
const v99 N=200005;


/// code is here->----------------------------

vector<v99>tom[mxi];
v99 tre[mxi],visi[mxi],q=0;
v99 dfs(v99 node)
{
    visi[node]=1;
    v99 kot=1;
    for(auto i:tom[node]) if(!visi[i]) kot+=dfs(i);
    return tre[node]=kot;
}
v99 cr_h;
v99 dfs2(v99 node)
{
    visi[node]=1;
    v99 m=1LL;
    for(auto i:tom[node])
    {
        if(!visi[i])
        {
            m=max(tre[node]+dfs2(i),m);
        }
    }
    return m;
}



void solve()
{
    /// code is here->
    v99 n;cin>>n;
    cr_h=0;
    for(v99 i=0;i<=n+2;i++)tom[i].clear(),visi[i]=0,tre[i]=0;
    for(v99 i=2;i<=n;i++)
    {
        v99 x;cin>>x;
        tom[x].push_back(i);
        tom[i].push_back(x);
    }
    dfs(1LL);
    for(v99 i=0; i< n+2; i++)visi[i]=0;
    cout<<dfs2(1LL)<<ses;
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...

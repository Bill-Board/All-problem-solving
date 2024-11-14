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
const v99 N=1005;

v99 fx[4]={0, 1, -1, 0};
v99 fy[4]={1, 0, 0, -1};
/// code is here->----------------------------
v99 n, m,visi[N][N],a[N][N] ,ans [N][N] , kot[N][N];
vector <pair<v99, pii> > p;

void okay(v99 x, v99 y)
{
    if(x==n)x--;
    if(y==m)y--;
    bool ok=false;
    vll b;
    ok|=(ans[x][y]==a[x][y]);
    if(ok)b.push_back(kot[x][y]);



    ok=false;
    ok|=(ans[x][y+1]==a[x][y+1]);
    if(ok)b.push_back(kot[x][y+1]);

    ok=false;
    ok|=(ans[x+1][y]==a[x+1][y]);
    if(ok)b.push_back(kot[x=1][y]);

    ok=false;
    ok|=(ans[x+1][y+1]==a[x+1][y+1]);
    if(ok)b.push_back(kot[x+1][y+1]);
    v99 mn=b.size();
    if(b.size())mn=*min_element(sob(b));

    if(ans[x][y]!=a[x][y])
    {
        ans[x][y]=a[x][y];
        kot[x][y]=mn;
        //p.push_back({x, {y, });
    }


}

void dfs(v99 indx, v99 indy)
{
    if(visi[indx][indy])return;
    for(v99 i=0; i<4; i++)
    {
        v99 x=  indx+fx[i], y= indy+fy[i];
        if(x<=n and y<=m and x>0 and y>0)
            dfs(x,y);
    }
}



void solve()
{
    v99 n;
    cin >> n;
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    //i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...

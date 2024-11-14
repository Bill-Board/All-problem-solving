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
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};

/// code is here->----------------------------
v99 visi[N][N];
v99 n, ax, ay, bx, by, cx, cy;
bool ok(v99 x, v99 y)
{
    return (x>0 and x<=n and y>0 and y<=n);
}

void dfs(v99 indx, v99 indy)
{
    visi[indx][indy]=1;
    for(v99 i=0; i<8; i++)
    {
        v99 x= indx+ox8[i], y=indy+oy8[i];
        if(ok(x,y) and visi[x][y]==0)
            dfs(x, y);
    }
}


void solve()
{
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
    for(v99 i=0; i<8 ;i++)
    {
        v99 dx=ox8[i], dy=oy8[i];
        for(v99 j=ax, k= ay; ok(j,k); j+=dx, k+=dy)
            visi[j][k]=-1;
    }
    dfs(bx, by);
    if(visi[cx][cy]==1)cout << "YES" << ses;
    else cout << "NO" << ses;
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

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
const v99 N=200005;


/// code is here->----------------------------
v99 n=10, m=10;
char a[12][12];
bool vertival(v99 i , v99 j)
{
    v99 kot = 0, ii= i-1;
    while(a[ii][j]=='X' and ii>0) ii--, kot++;
    i++;
    while(a[i][j]=='X' and i<=n)i++, kot++;
    return kot>3;
}
bool horaijontal(v99 i , v99 j)
{
    v99 kot = 0, jj=j-1;
    while(a[i][jj]=='X' and jj>0) jj--, kot++;
    j++;
    while(a[i][j]=='X' and j<=m)j++, kot++;
    return kot>3;
}

bool dai_a (v99 i, v99 j)
{
    v99 kot = 0, ii = i-1, jj = j-1;
    while(a[ii][jj]=='X' and ii>0 and jj>0)ii--,jj--,kot++;
    i++;j++;
    while(a[i][j]=='X' and i<=n and j<=m)i++,j++,kot++;
    return kot>3;
}
bool dai_b (v99 i, v99 j)
{
    v99 kot = 0, ii = i+1, jj = j-1;
    while(a[ii][jj]=='X' and ii<=n and jj>0)ii++,jj--,kot++;
    i--;j++;
    while(a[i][j]=='X' and i>0 and j<=m)i--,j++,kot++;
    return kot>3;
}




void solve()
{
    for(v99 i=1;i<=n;i++)
        for(v99 j=1; j<=m;j++)
        cin >> a[i][j];
    for(v99 i = 1; i<= n; i++)
    {
        for(v99 j=1; j<=m ;j++)
        {
            if(a[i][j]=='O')continue;
            if(vertival(i,j) or horaijontal(i,j) or dai_a(i,j) or dai_b(i,j))
            {
                cout << "YES" <<ses;
                return;
            }
        }
    }
    cout << "NO" <<ses;
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

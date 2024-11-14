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

void solve()
{
    v99 n;
    cin >> n;
    vll cnt(n+2, 0);
    for(v99 i=0; i<n-1 ; i++)
    {
        v99 u, v;
        cin >> u >> v;
        cnt[u]++;
        cnt[v]++;
    }
    v99 cr_h=0;
    for(v99 i = 1; i <= n; i++)
        cr_h+= (cnt[i]*(cnt[i]-1))/2LL;
    cout << cr_h <<ses;
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

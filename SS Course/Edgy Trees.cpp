//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU

#include<bits/stdc++.h>
using namespace std;

typedef long long v99;
#define vll    vector<v99>
#define ses   "\n"
#define whp   " "
#define sob(z)  (z).begin(), (z).end()
#define ff first
#define ss second
#define pii pair<v99, v99>
const v99 N=200005;

v99 MOD=1e9+7;
inline void normal(v99 &a) { a %= MOD; (a < 0) && (a += MOD); }
inline v99 modMul(v99 a, v99 b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline v99 modAdd(v99 a, v99 b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline v99 modSub(v99 a, v99 b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline v99 modPow(v99 b, v99 p) { v99 r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline v99 modInverse(v99 a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline v99 modDiv(v99 a, v99 b) { return modMul(a, modInverse(b)); }

/// code is here->----------------------------
vll tom[N];
v99 visi[N];

v99 dfs(v99 ind)
{
    visi[ind] = 1;
    v99 ver=1;
    for(auto i: tom[ind])
    {
        if(visi[i]==1)continue;
        ver+=dfs( i);
    }
    return ver;
}

void solve()
{
    v99 n, k;
    cin >> n >> k;
    for(v99 i=0; i<n-1; i++)
    {
        v99 x, y, val;
        cin >> x >> y >> val;
        if(val==0)
        {
            tom[x].push_back(y);
            tom[y].push_back(x);
        }
    }
    v99 cr_h =0;
    for(v99 i=1; i<=n ;i++)
    {
        if(visi[i] == 1)continue;
        cr_h= modAdd( cr_h, modPow( dfs( i ), k) );
    }
    cout << modSub( modPow( n , k ), cr_h ) << ses;

}



signed main()
{

    v99 test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

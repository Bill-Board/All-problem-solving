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

v99 MOD=1e9+7;
inline void normal(v99 &a) { a %= MOD; (a < 0) && (a += MOD); }
inline v99 modMul(v99 a, v99 b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline v99 modAdd(v99 a, v99 b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline v99 modSub(v99 a, v99 b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline v99 modPow(v99 b, v99 p) { v99 r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline v99 modInverse(v99 a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline v99 modDiv(v99 a, v99 b) { return modMul(a, modInverse(b)); }

/// code is here->----------------------------

void solve()
{
    v99 n , k;
    cin >> n >> k;
    cout << modPow( n , k) <<ses;
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

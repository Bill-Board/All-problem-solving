//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=1000005;
inline void normal(ll &a, ll MOD) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a+b)%MOD; }
inline ll modSub(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); a -= b; normal(a,MOD); return a; }
inline ll modPow(ll b, ll p, ll MOD) { ll r = 1; while(p) { if(p&1) r = modMul(r, b,MOD); b = modMul(b, b,MOD); p >>= 1; } return r; }
inline ll modInverse(ll a, ll MOD) { return modPow(a, MOD-2,MOD); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b, ll MOD) { return modMul(a, modInverse(b, MOD),MOD); }

vector<int> g[N+10];
int n;
string s;
ll mod1 = 1e9 + 7, mod2 = 1e9 + 9, power31 = 31, power37 = 37;
int dfs(int ind, int par, ll p31, ll p37, ll hs1_31, ll hs1_37, ll hs2_31, ll hs2_37){

    int ans = (hs1_31 == hs2_31 and hs1_37 == hs2_37);
    p31 = modMul(p31, power31, mod1);
    p37 = modMul(p37, power37, mod2);
    //cout << ind << '\n';
    //cout << hs1_31 << " " << hs1_37 << " " << hs2_31 << " " << hs2_37 << '\n';

    for(auto i: g[ind]){
        if(i == par) continue;
        ll val = s[i-1] - 'A' + 1;
        ll val1_31 = modAdd(hs1_31,modMul(val, p31, mod1), mod1);
        ll val1_37 = modAdd(hs1_37, modMul(val, p37, mod2), mod2);
        //cout << val1_31 << " " << val1_37 << '\n';
        ll val2_31 = modAdd( modMul(hs2_31, power31, mod1) , modMul(val, power31, mod1), mod1);
        ll val2_37 = modAdd( modMul(hs2_37, power37, mod2) , modMul(val, power37, mod2), mod2);

        ans += dfs(i, ind, p31, p37,val1_31,val1_37,val2_31, val2_37);
    }
    return ans;
}

void solve(int tc)
{
//    power = 31
//    cr_h = modAdd(cr_h, modMul(val, power, mod), mod);
    cin >> n >> s;
    for(int i = 0; i<=n; i++)
        g[i].clear();
    for(int i = 0; i<n-1; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ll hs1_31 = (s[0] - 'A' + 1) * 31, hs1_37 = (s[0] - 'A' + 1) * 37, hs2_31 = (s[0] - 'A' + 1) * 31, hs2_37 = (s[0] - 'A' + 1) * 37;
    int ans = dfs(1, 0, 31ll, 37ll, hs1_31, hs1_37,hs2_31, hs2_37);
    int g = __gcd(n, ans);
    ans /= g; n /= g;
    cout << "Case " << tc << ": " << ans << "/" << n << '\n';


}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

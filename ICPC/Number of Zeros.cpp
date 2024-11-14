//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100005;
ll mod = 1e9+7, fact[N+2],inv[N+2];


inline void normal(ll &a, ll MOD) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a+b)%MOD; }
inline ll modSub(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); a -= b; normal(a,MOD); return a; }
inline ll modPow(ll b, ll p, ll MOD) { ll r = 1; while(p) { if(p&1) r = modMul(r, b,MOD); b = modMul(b, b,MOD); p >>= 1; } return r; }
inline ll modInverse(ll a, ll MOD) { return modPow(a, MOD-2,MOD); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b, ll MOD) { return modMul(a, modInverse(b, MOD),MOD); }



void precal()
{
    fact[0]=1;
    for(int i =1; i<=N; i++) fact[i]=modMul(fact[i-1], i,mod);
    inv[N]=modPow(fact[N],mod-2, mod);
    for(int i=N-1;~i;--i)inv[i]=modMul(inv[i+1], i+1,mod);
}
ll ncr(ll n,ll r) {
        if(n < r)return 0ll;
        ll u = fact[n];
        ll v = modMul(inv[r] , inv[n - r], mod);
        return modMul(u , v, mod);
}

ll legendra(ll n, ll p){
        ll x = 0;
        while (n>0){
            n /= p;
            x = modAdd(x, n,mod);
        }
        return x;
}

void solve()
{
    ll n, b; cin >> n >> b;
    ll answer = 0 ;
    for(ll i = 1; i<=n ; i++){
        ll kot = legendra(i, b);
        kot = modMul(kot, ncr(n-1, i-1), mod);
        answer = modAdd(answer, kot, mod);
    }
    cout << answer << '\n';
}



signed main()
{
    precal();
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

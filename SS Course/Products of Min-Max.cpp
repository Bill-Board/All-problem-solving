//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

ll MOD=998244353;
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

void solve()
{
    ll n, sum =0;
    cin >> n;
    vector < ll > a(n) ;
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    a.push_back(n);
    for(int i =1, val = 1; i<n; i++, val = modMul(val, 2ll))
        sum = modAdd(sum , modMul(val, a[i]));
    ll cr_h = 0;
    for(int i = 0; i < n ; i++){ /// (sum+a[i]) * a[i];
        cr_h = modAdd(cr_h, modMul(a[i] , modAdd(sum, a[i]) ) );
        sum = modSub(sum, a[i+1]);
        sum = modDiv(sum, 2ll);
    }
    cout << cr_h << endl;

}



signed main()
{

    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

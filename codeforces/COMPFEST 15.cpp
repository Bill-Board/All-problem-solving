//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 100005;
ll mod= 998244353;

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    map<int, ll> mpp;
    for(auto &i: a)
        cin >> i;
    for(auto &i: b)
        cin >> i;
    int m; cin >> m;
    vector<int> c(m), d(m);
    for(auto &i: c)
        cin >> i;
    for(auto &i: d)
        cin >> i;
    for(int i = 0; i<n; i++)
        mpp[a[i]] += b[i];
    for(int i = 0; i<m; i++)
        mpp[c[i]] -= d[i];
    ll ans = 1;
    for(auto i: mpp)if(i.second != 0){
        if(i.second < 0) ans = 0;
        else ans =(ans * 2) % mod;
    }
    cout << ans << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

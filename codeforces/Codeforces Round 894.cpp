//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,int>;

const int N = 100005;
ll mod= 1e9+7;


void solve(int tc)
{
    ll n, m, d; cin >> n >> m >> d;
    vector<ll> a(n), b(n), visi(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        b[i] = (a[i]-1)/d;
        cout << b[i] << ' ';
    }
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

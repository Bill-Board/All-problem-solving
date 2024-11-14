//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=200005;

void solve()
{
    ll n=10;
    vector< ll > a(n);
    for(auto &i : a) cin >> i;
    ll ans=0;
    for(ll i=0; i<3; i++)
    {
        ans= a[ans];
    }
    cout << ans << endl;
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

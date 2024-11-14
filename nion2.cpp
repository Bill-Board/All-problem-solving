//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    ll n; cin>>n;
    ll ans = 0, mx = 2*1e6;
    for(ll i = 2; i <= min(n, mx); i++){
        if(n % i ==0){
            while(n % i == 0)
                n/=i;
            ans = max(ans, i);
        }
        if(n < 2)break;
    }
    if(n > 1){
        ll kot = sqrt(n);
        if(kot * kot == n)
            ans = max(ans, kot);
        else
            ans = max(ans, n);
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

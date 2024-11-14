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
    ll n, l, r, cr_h = 0;
    cin >> n >> l >> r;
    for(ll i =0; i<63; i++){
        if( n & (1ll << i) ){
            ll rig = min( (1ll << (i+1) )-1, r );
            ll lef= max(l, 1ll<<i);
            cr_h+= max(0ll,rig - lef + 1);
        }
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

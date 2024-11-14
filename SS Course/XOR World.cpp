//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
bool isPowerOfTwo (ll x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}
ll alabu(ll a, ll b)
{
    ll bt_ = 1ll << b;
    ll rem = (a+1) % (bt_ << 1);
    ll ans = (a - rem + 1) / 2ll + max(0ll, rem - bt_);
    return ans;
}


void solve()
{
    ll l, r, cr_h =0;
    cin >> l >> r;
    for(ll b = 0 ; b<44 ; b++)
    {
        ll val = alabu(r, b)- alabu(l-1, b);
        if(val & 1)
            cr_h |= (1ll << b);
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

//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
bool alabu(ll n, ll k)
{
    ll sum =0, nn= n;
    while ( nn > 0)
    {
        sum += nn % 10;
        nn /= 10;
    }
    return k <= abs(sum -n);
}

void solve()
{
    ll n , k;
    cin >> n >> k;
    ll l=1, r=n, ans = n+1;
    while(l <= r)
    {
        ll mid = (l + r) / 2;
        if( alabu( mid, k) )
            r = mid-1, ans= mid;
        else l = mid+1;
    }
    cout << n - ans + 1 << endl;
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

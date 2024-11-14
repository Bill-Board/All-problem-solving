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
    int n, k, mod = 1e9 + 7;
    cin >> n >> k;
    ll cr_h =0, mx_sum = n*(n+1)/2ll, mn_sum = mx_sum;
    cr_h += mx_sum - mn_sum + 1;
    for(int i = n; k <= i; i--)
    {
        mn_sum -= i;
        mx_sum -= n - i;
        cr_h += mx_sum - mn_sum + 1;
    }
    cout << cr_h % mod << endl;

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

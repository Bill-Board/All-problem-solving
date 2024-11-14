//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod=1e9+7;

void solve()
{
    ll n;
    cin >> n;
    vector < ll > a(n+1), pre(n+2, 0);
    for(int i =1; i<=n ; i++)
        cin >> a[i];
    sort( a.begin()+1, a.end() );
    for(int i =1; i<=n ; i++)
    {
        pre[i] = (pre[i]+pre[i-1]+ (a[i] * a[i]) % mod )%mod;
    }

    ll cr_h = 0;

    for( int i=n; i>0 ; i--)
    {
        ll kot= ((a[i] * a[i])%mod * (i-1) ) % mod;
        kot =( ( kot - pre[i-1] )% mod + mod ) % mod;
        cr_h = (cr_h + kot )%mod;
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

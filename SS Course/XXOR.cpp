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
    ll n , k, cr_h = 0;
    cin >> n >> k;
    vector < ll > a(n);
    for(auto &i : a)
        cin >> i;
    bool ok= false, ki =false;
    for( int i = 40; ~i ; i--){
        int cnt1 = 0;
        for( int j = 0 ; j < n ; j++)
            if(a[j] & (1ll << i))cnt1++;
        int cnt0 = n - cnt1 ;
        if(k & (1ll << i))
            ok = true;
        //cout << cnt1 << " " << cnt0 << " " << ok << endl;
        if(ok and cnt0 > cnt1){
            if(!ki)
                ok = false;
            cr_h |= (1ll << i);
        }
        if(ok and cnt0 <= cnt1)
            ki =true;
    }
    ll ans = 0;
    for (auto i: a)
        ans += i^cr_h;
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

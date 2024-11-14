//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
ll leng_(ll n){
    ll cnt = 0;
    while(n){
        n/=10;
        cnt++;
    }
    return cnt;
}
ll alabu(ll val, ll length){
    ll ans = 0;
    for(ll i=0; i<length; i++)
        ans = (ans * 10) + val;
    return ans;
}

void solve()
{
    ll n; cin >> n;
    ll length = leng_(n);
    for(ll i = 1; i < 10; i++)
        if(alabu(i, length)>=n){
            cout << alabu(i, length) << '\n';
            return;
        }
}



signed main()
{
     int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

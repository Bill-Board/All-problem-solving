//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii= pair<ll,ll>;

const ll N=1e18;
ll mod= 1e9+7;
set<ll> s;

void alabu(){
    for(ll i = 2; i<=1000000; i++){
        ll start = i+1, last = i;
        while(last <= N/i){
            ll sum = (last * i);
            start += sum;
            last = sum;
            s.insert(start);
        }
    }
}
void solve(int tc)
{
    ll n; cin >> n;
    if(s.find(n) != s.end()){
        cout << "YES\n";
        return;
    }
    ll l = 1e5, r = 1e9;
    while(l <= r){
        ll m = l + (r - l)/2;
        ll kot = 1ll + m + m*m;
        cout << m << ' ' << n << '\n';
        if(kot == n){
            cout << "YES\n";
            return;
        }
        if( kot < n)
            l = m + 1;
        else
            r = m - 1;
    }
    cout << "NO\n";
}



signed main()
{
    int test_case=1;
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    alabu();
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

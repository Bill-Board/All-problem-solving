//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    ll u, v; cin >> u >> v;
    if(u > v){
        cout << -1 << '\n';
        return;
    }
    if(u == v){
        cout << 1 << '\n' << u << '\n';
        return;
    }
    if((v-u) % 2 == 0){
        ll k = (v-u)/2;
        if((k^u) + k == v){
            cout << 2 << '\n';
            cout << k << " " << (k ^ u) << '\n';
        }
        else{
            cout << 3 << '\n';
            cout << k << " " << k << ' ' << u << '\n';
        }
        return;

    }
    cout << -1 << '\n';
}



signed main()
{
    int test_case=1;
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

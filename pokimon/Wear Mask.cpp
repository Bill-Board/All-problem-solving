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
    ll n, m; cin >>n >> m;
    ll nn = n, mm = m;
    ll rem_n = nn % 3, rem_m = (mm % 3);
    nn -= rem_n; mm -= rem_m;
    ll cr_h = nn * mm; cr_h /= 9;
    //cout << cr_h << '\n';
    if(rem_n){
        ll kot  = m/3; cr_h += kot;
    }

    if(rem_m){
      ll kot  = n/3; cr_h += kot;
    }
    //cout << rem_m << " " << rem_n << '\n';
    if(rem_m and rem_n)cr_h++;
    cout << cr_h << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

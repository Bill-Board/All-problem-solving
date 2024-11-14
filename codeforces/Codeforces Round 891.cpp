//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N = 100005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n; cin >> n;
    vector<pii> a(n);
    vector<ll> ans(n), b(n), c(n+1);
    ll sum = 0;
    for(int i = 0; i<n; i++){
        cin >> b[i];
        a[i] = {b[i], i};
        sum += b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i = 0; i<n; i++){
        c[i + 1] = b[i] + c[i];
    }

    for(int i = 0; i<n; i++){
        int pos = upper_bound(b.begin(), b.end(), a[i].first) - b.begin();
        //cout << a[i].first << ' ' << pos << '\n';
        ll ok = (a[i].first*pos)-(c[pos]- pos) + (sum - c[pos]) - (a[i].first - 1)*(n - pos);
        ans[a[i].second] = ok;
    }
    for(auto i: ans)
        cout << i << ' ';cout << '\n';

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

//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N = 1005;
ll mod= 1e9+7;
map<pii, ll> dp;

ll alabu(vector<int> &a, int k, int ind){
    if(k == -1 or ind == -1) return -1;
    if(dp.find({ind, k}) != dp.end())
        return dp[{ind, k}];
    if(k )
    ll ans = max(a[ind] * alabu(a, k -1, ind -1), alabu(a, k, ind-1));
    return dp[{ind, k}] = ans;
}

void solve(int tc)
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    cout << alabu(a, k, a.size()-1) << '\n';
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

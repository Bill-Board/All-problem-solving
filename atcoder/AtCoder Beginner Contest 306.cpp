//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=300005;
ll mod= 1e9+7;
ll dp[N][2];
vector<pii> vp;
ll alabu(int ind, int k){
    if(ind<0) return 0;
    ll &ans = dp[ind][k];
    if(ans != -1) return ans;
    ll t = vp[ind].first, val = vp[ind].second;
    ans = alabu(ind - 1, k);
    if(t == 0)
        ans = max(ans, val + alabu(ind - 1, 0));
    else{
        if(k == 1)
            ans = max(ans, alabu(ind - 1, 1));
        else
            ans = max(ans, val + alabu(ind - 1, 1));
    }
    return ans;
}

void solve(int tc)
{
    memset(dp, -1, sizeof(dp));
    int n; cin >> n;
    vp.resize(n);
    for(int i = n - 1; 0 <= i; i--)
        cin >> vp[i].first >> vp[i].second;
    cout << alabu(n - 1, 0) << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

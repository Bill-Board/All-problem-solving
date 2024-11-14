//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=200;
vector < ll > tom[N], ans;

void dfs(ll ind, ll par, ll val)
{
    ans[ind]= val+1;
    for(auto i: tom[ind])
    {
        if(i==par)continue;
        dfs(i, ind, val^1);
    }
}

void solve()
{
    ll n;
    cin >> n;
    ans.clear(); ans. resize(n+2, 0);
    for(int i=0; i<=n+3; i++)
        tom[i].clear();
    for(int i=0; i<n-1; i++)
    {
        ll x, y;
        cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    dfs(1ll, 0ll, 1ll);
    for(int i=1; i<=n; i++)
        cout << ans[i] << " ";
    cout << endl;


}



signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll test_case=1;
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

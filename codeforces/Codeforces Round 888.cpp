//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;
ll visi[N], c[N];
vector<ll>g[N];

void dfs(int ind){

    if(c[ind] == 0 or visi[ind])
        return;
    visi[ind] = 1;
    ll ans = 0;
    for(auto i: g[ind]){
        dfs(i);
        ans += c[i];
    }
    if(g[ind].empty())
        ans = mod;
    c[ind] = min(c[ind], ans);
}
void solve(int tc)
{
    int n, k; cin >> n >> k;
    for(int i = 1; i<=n; i++){
        cin >> c[i];
        visi[i] = 0;
        g[i].clear();
    }

    for(int i = 0; i<k; i++){
        int x; cin >> x;
        c[x] = 0;
    }
    vector<ll> ans;
    for(int i = 1; i<=n; i++){
        int p; cin >> p;
        for(int j = 1; j<=p;j++){
            int x; cin >> x;
            g[i].push_back(x);
        }
    }
    for(int i = 1; i<=n; i++)
        dfs(i), cout << c[i] << " \n"[i==n];
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

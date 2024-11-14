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
vector<pii>vp, m;

void addd(int x, int y, int v){
    if(v == -1)
        vp[y].second = 1, vp[y].first = -1;
    else
        vp[y].first = 1, vp[y].second = -1;
    vp[y].first  = max(0, vp[x].first +vp[y].first);
    vp[y].second = max(0, vp[x].second +vp[y].second);

    m[y].first = max(vp[y].first, m[x].first);
    m[y].second = max(vp[y].second, m[x].second);

    //cout << "x y " << x << ' ' << y  << ' ' << m[y].first << ' ' << m[y].second << '\n';
}

void solve(int tc)
{
    int n, node = 1; cin >> n;
    vp.clear();vp.resize(n+2);
    m.clear();m.resize(n+2);
    addd(0, node++, 1);
    for(int i = 0; i<n; i++){
        char c;cin >> c;
        if(c == '+'){
            int x, v; cin >> x >> v;
            addd(x, node++, v);
        }
        else{
            int u, v, k; cin >> u >> v >> k;
            int l = -m[v].second , r = m[v].first;
            if(l <= k and k <= r)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
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

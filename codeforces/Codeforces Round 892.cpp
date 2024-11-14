//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 505;
ll mod= 1e9+7;

struct akib{
    vector<pii> t;
    int n;
    akib(int p){
        n = p;
        t.resize(4*n+1, {0,0});
    }
    void update(int node, int l, int r, int p, int val){
        if(l > r or p < l or r < p) return;
        if(l == r and l == p){
            t[node] = {val, val};
            return;
        }
        int m = (l + r)/2;
        update(2*node, l, m, p, val);
        update(2*node +1, m+1, r, p, val);
        t[node].first = t[2*node].first + t[2*node+1].first;
        t[node].second = max(t[2*node].second ,t[2*node+1].second);
    }
    int query(){
        return t[1].first - t[1].second;
    }
};


void solve(int tc)
{
    int n; cin >> n;

    akib s(n);
    for(int i = 1; i<=n; i++){
        s.update(1, 1, n, i, i*i);
    }

    int ans = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            s.update(1, 1, n, i, i*j);
            s.update(1, 1, n, j, i*j);
            ans = max(ans, s.query());
            s.update(1, 1, n, i, i*i);
            s.update(1, 1, n, j, j*j);
        }
    }
    cout << ans << '\n';
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

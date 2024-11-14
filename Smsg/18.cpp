//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7, inf = 1e14;
vector<int> alabu_djktra(vector<vector<pii> > &g, int n){
    priority_queue<pii, vector<pii>, greater<pii> > pq;
    vector<ll> d(n+2, inf);
    vector<int> ans(n+1), p;
    pq.push({0,1});
    d[1] = 0;
    while(pq.size()){
        int ind = pq.top().second;
        pq.pop();
        for(auto i: g[ind]){
            if(d[i.first] > d[ind]+i.second){
                d[i.first] = d[ind]+i.second;
                pq.push({d[i.first], i.first});
                ans[i.first] = ind;
            }
        }
    }
    if(d[n] == inf) return {-1};
    while(n){
        p.push_back(n);
        n = ans[n];
    }
    reverse(p.begin(), p.end());
    return p;
}


void solve(int tc)
{
    int n, m; cin >> n >> m;
    vector<vector<pii> > g(n+1);
    for(int i = 0; i<m ; i++){
        int x, y, c; cin >> x >> y >> c;
        g[x].push_back({y,c});
        g[y].push_back({x,c});
    }
    vector<int> ans = alabu_djktra(g, n);
    for(auto i: ans)
        cout << i << ' ';
    cout << '\n';
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

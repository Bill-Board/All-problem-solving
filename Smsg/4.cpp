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

bool dfs(int ind, vector<vector<int>> &g, vector<int> &visi, vector<int> &ans){
    ans.push_back(ind);
    visi[ind] = 1;
    bool bo = false;
    for(auto i: g[ind]){
        if(bo)return bo;
        if(visi[i]){
            ans.push_back(i);
            return true;
        }
        bo |= dfs(i, g, visi, ans);
    }
    if(bo) return bo;
    visi[ind] = 0;
    ans.pop_back();
    return bo;
}

void solve(int tc)
{
    int n, m; cin >> n >> m;
    vector<int> ans, visi(n+1);
    vector<vector<int>> g(n+1);
    for(int i = 1; i<=m; i++){
        int x, y; cin>> x >> y;
        g[x].push_back(y);
        //g[y].push_back(x);
    }
    for(int i = 0; i<n; i++){
        if(visi[i]== 0 and dfs(i, g, visi, ans)){
            bool ok = false;
            for(auto j: ans){
                if(j == ans.back()) ok = true;
                if(ok)cout << "-> " << j;
            }
            cout << '\n';
            return;
        }
    }
    cout << -1 << '\n';
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

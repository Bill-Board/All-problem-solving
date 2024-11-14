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


int dfs(int ind, vector<vector<int>>&g, vector<int>&visi){
    visi[ind] = 1;
    int cnt = 1;
    for(auto i: g[ind]){
        if(visi[i])continue;
        cnt += dfs(i,g,visi);
    }
    return cnt;
}

void solve(int tc)
{
    int n, k; cin >> n >> k;
    vector<int> visi(n+1);
    vector< vector<int> >g(n+1);
    for(int i =0; i<k; i++){
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int cnt = 0;
    for(int i = 1; i<=n; i++){
        if(visi[i] == 0)
            cnt += dfs(i, g, visi)-1;
    }
    cout << k - cnt << '\n';
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


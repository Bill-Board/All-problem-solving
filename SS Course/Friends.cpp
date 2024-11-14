//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
set< int >s[N];
int visi[N];
int dfs(int ind)
{
    visi[ind]=1;
    int cnt  =1;
    for(auto i: s[ind]){
        if(visi [i])continue;
        cnt +=dfs(i);
    }
    return cnt;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    for(int i = 0; i < m ; i++){
        int u, v;
        cin >> u >> v;
        if(u > v)swap(u, v);
        s[u].insert(v);
        s[v].insert(u);
    }
    int cr_h = 0;
    for(int i = 1; i<=n ; i++)
        if(!visi[i])
            cr_h = max(cr_h, dfs(i));
    cout << cr_h << endl;
}



signed main()
{

    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

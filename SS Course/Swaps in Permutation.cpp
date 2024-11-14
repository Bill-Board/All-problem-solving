//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000005;

set < int > tom [N];
vector < int > v, p , a, visi;

void dfs(int ind)
{
    p.push_back(ind);
    v.push_back(a[ind]);
    visi[ind] = 1;
    for(auto i: tom[ind])
    {
        if(visi[i]==1)continue;
        dfs(i);
    }
}

void solve()
{
    int n , m;
    cin >> n >> m;
    a.resize(n+2);
    visi.resize(n+2, 0);
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i=1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        tom[u].insert(v);
        tom[v].insert(u);
    }
    vector< int > ans(n+2);
    for(int i =1; i<=n ; i++)
    {
        if(visi[i])continue;
        v.clear();
        p.clear();
        dfs(i);
        sort( p.begin(), p.end());
        sort( v.begin(), v.end(), greater<>() );
        for(int j = 0; j < p.size() ; j++)
            a [ p[j] ] = v[j];
    }
    for(int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i==n];
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

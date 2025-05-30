//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=300005;
int n;
vector <int> a, b, tom[N];

int dfs(int ind, int par, int clor){
    int kot = 0;
    if(clor == -1 and a[ind] != b[ind]){
            clor = b[ind];
            kot++;
    }
    else if(clor != -1 and clor != b[ind]){
        clor = b[ind];
        kot++;
    }

    for(auto i: tom[ind]){
        if(i == par)continue;
        kot += dfs(i, ind, clor);
    }
    return kot;
}

void solve()
{
    cin >> n;
    a.resize(n+1);b.resize(n+1);
    for(int i =1; i<=n; i++)
        cin >> a[i];
    for(int i =1; i<=n; i++)
        cin >> b[i];
    for(int i =1 ; i < n ; i++){
        int x, y;cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    cout <<dfs(1, 0, -1) << '\n';
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

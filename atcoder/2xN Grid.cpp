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


void solve(int tc)
{
    int l, n, m; cin >> l >> n >> m;
    vector<int> a[2];
    for(int i = 0; i<n; i++){
        int val, k; cin >> val >> k;
        while(k--)
            a[0].push_back(val);
    }
    for(int i = 0; i<m; i++){
        int val, k; cin >> val >> k;
        while(k--)
            a[1].push_back(val);
    }
    int cnt = 0;
    for(int i = 0; i<l; i++)
        cnt += (a[0][i]==a[1][i]);
    cout << cnt << '\n';
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

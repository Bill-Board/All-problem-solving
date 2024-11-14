//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n; cin >> n;
    string s; cin >> s;
    vector<int> pre(n+1), suf(n+2);
    for(int i = 1; i<=n; i++){
        pre[i] = pre[i-1] + (s[i-1] == '#');
        suf[i] = (s[i-1] == '.');
    }
    for(int i = n; 0<i; i--)
        suf[i] += suf[i+1];

//    for(int i = 1; i<=n; i++)
//        cout << pre[i] << " \n"[i==n];
//    for(int i = 1; i<=n; i++)
//        cout << suf[i] << " \n"[i==n];

    int ans = min(pre[n], suf[1]);
    for(int i = 1; i<n; i++)
        ans = min(ans, suf[i+1]+pre[i]);
    cout << ans << '\n';
}



signed main()
{
    int test_case=1;
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=503;
ll mod= 1e9+7;
ll dp[N][N], a[N];



void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n+2, 1);
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    for(int len = 1; len <= n; len++){
        for(int left = 1; left+len-1<=n; left++){
            int right = left + len - 1;
            for(int last = left; last <= right; last++){
                ll &ans = dp[left][right];
                ans = max(ans, dp[left][last-1] + a[left-1] *a[last]* a[right+1] + dp[last+1][right]);
            }
        }
    }
    cout << dp[1][n] << '\n';

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

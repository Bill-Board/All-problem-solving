//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 105;
ll mod= 1e9+7;
int dp[N][N][N];
string s, t, p;
void solve(int tc)
{
    cin >> s >> t >> p;
    int n = s.size(), m = t.size(), v = p.size();
    int ans = 0, st = 0;
    for(int i = n; 0<=i; i--){
        for(int j = m; 0<=j; j--){
            for(int k = v; 0<=k; k--){
                if(i ==n || j == m || k == v)
                    dp[i][j][k] = 0;
                else if(s[i] == t[j] and t[j] and p[k]){
                    dp[i][j][k] = dp[i+1][j+1][k+1] + 1;
                    if(ans < dp[i][j][k]){
                        ans = dp[i][j][k];
                        st = i;
                    }
                }
                else
                    dp[i][j][k] = 0;
            }
        }
    }
    cout << ans << '\n';
    cout << s.substr(st, ans) << '\n';

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

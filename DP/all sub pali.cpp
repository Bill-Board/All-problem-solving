//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=2005;
ll mod= 1e9+7;
int dp[N][N];
void solve(int tc)
{
    int n,cnt = 0;
    string s; cin >> n >> s;
    for(int len = 0; len <n; len ++){
        for(int i = 0, j = len; j<n; i++,j++){
            if(i == j)
                dp[i][j] = 1;
            else if(i + 1 == j)
                dp[i][j] = (s[i]==s[j]);
            else
                dp[i][j] = (s[i] == [s[j]) & (dp[i+1][j-1]);
            cnt += dp[i][j];
        }
    }
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

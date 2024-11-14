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
    int n; string s;
    cin >> n >> s;
    vector<int> a(n+3);
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    s = '0' + s + '0';
    vector<vector<int> > dp(n+2, vector<int> (2, N));
    dp[n][1] = 0;
    for(int i = n; 0<=i ; i--){
        //dp[i][0] = max(dp[i+1][0], dp[i+1][1]);

        if(s[i] == '1'){
            dp[i][1] = max(dp[i][1], a[i] + dp[i+1][1]);
            dp[i][0] = max({dp[i][0] , dp[i+1][1], dp[i+1][0] + a[i]});
        }
        else
            dp[i][1] = max({dp[i][1] , dp[i+1][1], dp[i+1][0] + a[i]});

//        if(s[i] == '1' or s[i+1] == '1'){
//            if(s[i] == '0')
//                dp[i][1] = a[i] + dp[i+1][0];
//            else
//                dp[i][1] = a[i] + dp[i][0];
//        }
//        else
//            dp[i][1] = dp[i][0];
    }
    for(int i = 1; i<=n; i++)
        cout << dp[i][0] << ' ' << dp[i][1] << '\n';


    cout << dp[1][1] << '\n';
//    for(int i = 1; i<=n; i++){
//        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
//        if(s[i] == '1'){
//            if(s[i-1] == '0')
//                dp[i][1] = a[i] + dp[i-1][0];
//            else
//                dp[i][1] = a[i] + dp[i][0];
//        }
//        if(s[i+1] == '1')
//            dp[i][1] = a[i] + dp[i][0];
//        cout << dp[i][0] << ' ' << dp[i][1] << '\n';
//    }

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

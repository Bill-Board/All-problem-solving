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
bool is_power(int n){
    return n and !(n & (n-1));
}
vector<int> countBits(int n) {
    vector<int>dp(n+1);
    for(int i = 1, shift = 1; i<=n; i++){
        dp[i] = dp[i - shift] + 1;
        if(is_power(i+1)) shift <<= 1;
    }
    return dp;
}

void solve(int tc)
{
    int n; cin >> n;
    countBits(n);
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

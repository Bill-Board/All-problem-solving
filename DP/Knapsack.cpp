//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=2005;
int mod= 1e9+7;
int w[N], c[N], dp[N][N];

int alabu(int ind, int ache){
    if(ind < 0) return 0;
    int &ans = dp[ind][ache];
    if(ans != -1) return ans;
    if(ache >= w[ind])
        ans = c[ind] + alabu(ind - 1, ache - w[ind]);
    return ans = max(ans, alabu(ind - 1, ache));
}

void solve(int tc)
{
    int n, weight; cin >> weight >> n;
    for(int i = 0; i<n; i++)
        cin >> w[i] >> c[i];
    memset(dp, -1, sizeof(dp));
    cout << alabu(n-1, weight) << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

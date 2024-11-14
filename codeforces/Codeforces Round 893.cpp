//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N = 100005;
ll mod= 1e9+7;

void alabu(vector<vector<int> > &dp, vector<int> a, int k){
    int n = a.size();
    vector<int> pre(n+2, 0);
    for(auto i: a)
        cout << i << ' '; cout << '\n';
    for(int i = 0; i<n; i++)
        pre[i+1] = pre[i] + a[i];
    for(int l = 1;l<=n; l++){
        cout << "len " << l << '\n';
        for(int i = 1, j = l; j<=n; j++, i++){
            if(i == j){
                if(a[i-1] == 1)
                    dp[i][j] = 1;
            }
            else if(i +1 == j){
                if(l - pre[j] + pre[i-1] <= k)
                    dp[i][j] = 2;
                else
                    dp[i][j] = max(dp[i+1][j] ,dp[i][j-1]);
            }
            else{
                if(l - pre[j] + pre[i-1] <= k)
                    dp[i][j] = l;
                else
                dp[i][j] = max({dp[i+1][j], dp[i][j-1], dp[i+1][j-1]});
            }
            cout << dp[i][j] << ' ';
        }cout << '\n';
    }
    for(int i = 1; i<=n; i++)
        for(int j = i; j<=n; j++)
            cout << dp[i][j] << " \n"[j == n];
    cout << "\n\n";
}

void solve(int tc)
{
    int n, k; cin >> n >> k;
    vector<int> a, b;
    string s; cin >> s;
    for(auto i: s){
        if(i == '0')
            a.push_back(0), b.push_back(1);
        else
            a.push_back(1), b.push_back(0);
    }
    vector<vector<int>> dp1(n+5, vector<int>(n+5, 0)), dp2 = dp1;
    alabu(dp1, b, k);
    alabu(dp2, a, k);
    vector<pair<ll, pii> > vp;
    for(int i = 1; i<=n; i++){
        for(int j = i; j<=n; j++){
            int ek = dp1[i][j];
            int dui = max(dp2[1][i-1], dp2[j+1][n]);
            vp.push_back({ek+dui, {ek, dui}});
            cout << i << ' ' << j << ' ' << ek << ' ' << dui << '\n';
        }
    }
//    sort(vp.begin(),vp.end(), greater<>());
//    for(auto i: vp){
//        cout << i.first << ' ' << i.second.first << ' ' << i.second.second << '\n';
//    }
//    if(vp.size() == 1){
//        for(int i = 1; i<=n; i++)
//            cout << i * vp[0].second.first + vp[0].second.second << ' ';
//        cout << '\n';
//        return;
//    }
//    for(int i = 1; i<=n; i++){
//        ll ek = i * vp[0].second.first + vp[0].second.second;
//        ll dui = i * vp[1].second.first + vp[1].second.second;
//        cout << ek << ' ' << dui << '\n';
//        //cout << max(ek, dui) << ' ';
//    }
//    cout << '\n';

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

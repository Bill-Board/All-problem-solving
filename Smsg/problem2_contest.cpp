//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 100005;
ll mod= 1e9+7;

void solve(int tc)
{
    string s, p[] = {"blue" , "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};
    int sz = 15, ans = 0;
    cin >> s;
    map<char, int> mpp;
    for(auto i: s)
        mpp[i]++;
    for(int i = 0; i<(1<<sz); i++){
        map<char, int> m;
        int cnt = 0;
        for(int j = 0; j<sz; j++){
            if(i&(1<<j)){
                cnt ++;
                for(auto k: p[j])
                    m[k]++;
            }
        }
        bool ok = true;
        for(auto j: m)
            if(j.second > mpp[j.first])
                ok = false;
        if(ok)
            ans = max(ans, cnt);
    }
    cout << ans << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

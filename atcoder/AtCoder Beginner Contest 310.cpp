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
    int n , m; cin >> n >> m;
    vector<int> p(n);
    set<int> s[n];
    for(int i = 0; i<n; i++){
        int k; cin >> p[i] >> k;
        for(int j = 0; j<k; j++){
            int x; cin >> x;
            s[i].insert(x);
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n ; j++){
            if(p[j] > p[i] or i == j) continue;
            bool ans = true;
            for(auto k: s[i])
                ans &= (s[j].find(k) != s[j].end());
            //cout << i << ' ' << j << ' ' << ans << '\n';
            if(ans and (p[i] > p[j] or s[i].size() < s[j].size())){
                cout << "Yes\n";return;
            }
        }
    }
    cout << "No\n";
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

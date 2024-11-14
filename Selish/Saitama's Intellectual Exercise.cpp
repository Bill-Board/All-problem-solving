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
string s;

void solve()
{
    int n = s.size(), k = (n + 1)/2, cr_h = 0;
    for(int j = k, sum = 0; j<n; j++){
        int i = n - j - 1, val = s[j] - 'a' + sum;
        int kot = (((s[i] - 'a') - val) % 26 + 26 ) % 26;
        sum += kot;
        cr_h += kot;
    }
    cout << cr_h << '\n';
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(cin >> s)
        solve();
    return 0;
}



///  Alhamdulillah...

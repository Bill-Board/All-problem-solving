//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    ll n, mod =1e9 + 7, cr_h = 1;
    cin >> n;
    string s;
    cin >> s;
    vector <int > cnt(27, 1);
    for(auto i: s)
        cnt[i-'a']++;
    for(int j =0; j<26; j++)
        cr_h =(cr_h  * cnt[j])%mod;
    cout << (cr_h+mod-1)%mod << endl;
}



signed main()
{

    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

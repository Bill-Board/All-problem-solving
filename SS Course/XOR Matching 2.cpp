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
    ll n;
    cin >> n;
    vector < int > a(n), b(n), ans;
    map<int, int > mpp;
    set <int > s;
    for(auto &i : a)
        cin >> i;
    for(auto &i : b)
        cin >> i,
        mpp[i]++,
        s.insert(a[0]^i);
    for(auto i: s){
        map<int, int> p;
        for(auto j: a)
            p[i^j]++;
        if(mpp==p)
            ans.push_back(i);
    }
    cout << ans.size() << endl;
    for(auto i: ans)
        cout << i << endl;


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

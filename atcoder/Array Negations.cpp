//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=200005;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector <ll> pos, neg;
    for(int i = 0; i<n ;i++)
    {
        int x;
        cin >> x;
        if(x>0)pos.push_back(x);
        else neg.push_back(x);
    }
    sort(neg.begin(), neg.end(), greater<>());
    while(neg.size() and k>0)
    {
        pos.push_back(-neg.back());
        k--;
        neg.pop_back();
    }
    sort(pos.begin(), pos.end());
    int cr_h = accumulate(pos.begin(),pos.end(), 0ll) + accumulate(neg.begin(),neg.end(), 0ll);
    if(k&1 and k>0)
        cr_h -= 2 * pos.front();
    cout << cr_h << endl;

}



signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll test_case=1;
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

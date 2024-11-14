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
    ll n, sum =0;
    cin >> n;
    vector < ll > a(n);
    for(auto &i : a)
        cin >> i, sum +=i;
    ll psum=0 , cr_h =LLONG_MAX;
    for(ll i=0; i<n ;i++)
    {
        psum+=a[i];
        ll nw= sum - psum;
        cr_h = min(cr_h, max(psum, nw));
    }
    cout << cr_h << endl;

}



signed main()
{

    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

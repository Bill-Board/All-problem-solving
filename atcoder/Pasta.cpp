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
    ll n , m;
    cin >> n >> m;
    map< ll , ll > mpp1, mpp2;
    for(int i=0; i<n ;i++)
    {
        ll x;
        cin >> x;
        mpp1[x] ++;
    }
    for(int i=0; i<m ;i++)
    {
        ll x;
        cin >> x;
        mpp2[x] ++;
    }
    for(auto i: mpp2)
    {
        if(i.second>mpp1[i.first])
        {
            cout << "No" << endl;
            return ;
        }
    }
    cout << "Yes" << endl;
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

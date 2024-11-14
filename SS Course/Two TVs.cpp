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
    vector < pair < int , int > > a ;
    for(int i =0; i<n ; i++){
        int x, y;
        cin >> x >> y;
        a.push_back({x,1});
        a.push_back({y+1,-1});
    }
    sort(a.begin(),a.end());
    int cnt = 0;
    for(auto i: a)
    {
        cnt += i.second;
        if(cnt>2)
        {
            cout << "NO" <<endl;
            return;
        }
    }
    cout << "YES" <<endl;
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

//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n, x; cin >> n >> x;
    vector<int> a(2*n);
    for(auto &i: a)
        cin >> i;
    sort(a.begin(),a.end());

    for(int i = 0; i<n; i++)
    if(a[i]+x>a[i+n]){
        cout <<"NO\n";
        return;
    }
    cout << "YES\n";

}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

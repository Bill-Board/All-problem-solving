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
    ll n, sum; cin >> n >> sum;
    vector<int> a(n), ans;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(0 <= a[i]) sum += a[i], ans.push_back(i);
    }
    for(int i = n-1; 0<=i ; i--){
        if(0 <= a[i]) continue;
        if(0 <= sum + a[i])
            sum += a[i], ans.push_back(i);
    }
    cout << ans.size() << '\n';
    sort(ans.begin(),ans.end());
    for(auto i: ans)
        cout << i+1 << ' ';
    cout << '\n';
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

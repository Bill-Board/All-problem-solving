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

ll alabu(ll m, vector<ll> &a){
    ll sum = 0;
    bool ok = false;
    if(m <= sum) ok = true;
    //cout << "m " << m << '\n';
    for(auto i: a){
        sum += i;
        if(ok and sum<m)
            sum = m;
        if(m <= sum)
            ok = true;
    }
    //cout << sum << '\n';
    return sum;
}
ll kadane(vector<int> &a){
    ll sum = 0, m = 0;
    for(auto i:a){
        m = max(m, m+i);
        sum = max(sum , m);
    }
    return sum;
}
ll kadne(vector<int> &a){
    ll sum = 0, m = 0;
    for(auto i:a){
        m = max(m, m+i);
        sum = max(sum , m);
    }
    return sum;
}

void solve(int tc)
{
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &i: a)
        cin >> i;

    ll l = 1, r = 1e18, ans = alabu(0, a), k1 = 0;
    while(l <= r){
        ll m = l + (r - l)/2;
        ll kot = alabu(m, a);
        if(ans < kot)
            ans = kot, k1 = m, l = m + 1;
        else
            r = m - 1;
    }
    ll k2 = 0;
    for(int i = 0; i<n; i++){
        if(a[i] < 0) break;
        k2 += a[i];
    }
    ll sum = alabu(k2, a);
    if(sum > ans)
        k1 = k2, ans = sum;
    k2 = kadne(a);
    sum = alabu(k2, a);
    if(sum > ans)
        k1 = k2, ans = sum;

    cout << k1 << '\n';
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

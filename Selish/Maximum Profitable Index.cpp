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
vector<ll> a;
int n, k;

bool alabu(int pos){
    int cnt = 0;
    for(int i = pos; i<=n; i++)
        cnt += (a[pos] % a[i] == 0);
    return k <= cnt;
}

void solve(int tc)
{
    cin >> n >> k;
    a.resize(n+2);
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    int l = 1, r = n, ans = -1;
    if(!alabu(1)){
        cout << -1 << '\n';
        return;
    }
    while(l <= r){
        int mid = (l + r)/2;
        if(alabu(mid))
            l = mid + 1, ans = mid;
        else
            r = mid - 1;
    }
    cout << ans << '\n';

}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

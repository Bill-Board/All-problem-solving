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
    int n; cin >> n;
    if(n==3){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if(n % 2 == 0){
        for(int i = 0; i<n; i++){
        if(i&1)cout << "1 ";
        else cout << "-1 ";
        }
    cout << '\n'; return;
    }
    int p = n/2;
    for(int i = 0; i<n; i++){
        if(i & 1)
            cout << -p << " ";
        else
            cout << p-1 << " ";
    }
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

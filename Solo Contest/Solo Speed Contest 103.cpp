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
    ll n, p, cr_h = 1; cin >> n >> p;
    for(ll i = 2; i*i<=p; i++){
        ll cnt = 0, kot = 1;
        while(p % i == 0){
            p/=i;
            cnt++;
            if(cnt % n == 0) kot *= i;
        }
        cr_h *= kot;
    }
    if(n == 1) cr_h *= p;
    cout << cr_h << '\n';
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

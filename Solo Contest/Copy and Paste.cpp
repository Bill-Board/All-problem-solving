//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    ll n, m, one = 0; cin >> n >> m;
    string s; cin >> s;
    for(auto i: s)
        one += (i == '1');
    if((one*m) & 1){
        cout << 0 << '\n';
        return;
    }
    if(one == 0){
        cout << n*m << '\n';
        return;
    }
    ll total = (one * m) /2;
    ll rem  = total % one;
    ll o = 0, cr_h = 0;
    for(auto i: s){
        o += i == '1';
        if((o % one) == rem)
            cr_h ++;
    }
    cout << cr_h << '\n';

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

//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

vector<ll> v;
void init(){
    ll p = 2;
    for(int i = 1; i<=35; i++, p*=2)
        v.push_back(p-1);
}
int alabu(ll val){
    int pos = upper_bound(v.begin(),v.end(),val)-v.begin();
    return pos-1;
}


void solve()
{
    ll n;cin>> n;
    ll pos = alabu(n);
    string s="nunhehhe";
    for(int i = pos; ~i; i--){
        ll kot = n / v[i];
        for(int j = 0; j<kot; j++)
            s+='h';
        s+='a';
        n %= v[i];
    }
    cout << s << '\n';
}



signed main()
{
    init();
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

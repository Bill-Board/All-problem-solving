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
    vector < int > tom(1025, 0);
    vector < ll > a(n);
    for(int i = 0; i < n ; i++){
        cin >> a[i];
        ll x = a[i], y = 0;
        while(x){
                y |= (1ll << (x % 10));
                x /= 10;
        }
        tom[y]++;
    }
    ll cr_h = 0;
    for(int i =0; i < 1024 ; i++){
        cr_h += tom[i]*(tom[i]-1)/2ll;
        for(int j = i+1; j < 1024; j++)
            if(i&j)
                cr_h += tom[i]*tom[j];
    }
    cout << cr_h << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

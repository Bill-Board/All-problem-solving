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
    int n;
    cin >> n;
    vector< int > a(n) , pre(n+1), suf(n+2);
    for(int i = 0; i<n ;i++){
        cin >> a[i];
        pre[i+1] = __gcd(pre[i], a[i]);
    }
    for(int i = n-1; i>0 ;i--){
        suf[i+1]= __gcd(suf[i+2], a[i]);
    }
//    for(int i = 1; i<=n ;i++){
//        cout << pre[i] << " ";
//    }cout << endl;
//
//    for(int i = 1; i<=n ;i++){
//        cout << suf[i] << " ";
//    }cout << endl;
    int cr_h = 1;
    for(int i=1; i<=n ;i++){
        cr_h = max(cr_h, __gcd(pre[i-1], suf[i+1]) );
    }
    cout << cr_h << endl;

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

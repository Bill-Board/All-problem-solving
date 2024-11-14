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
    vector< int > pre(n+1), suf(n+1);
    for(int i =1; i<=n ;i++){
        cin >> pre[i];
        pre[i]+=pre[i-1];
    }
    for(int i =1; i<=n ;i++){
        cin >> suf[i];
    }
    for(int i =n-1; i>0 ;i--){
        suf[i] += suf[i+1];
    }
    int cr_h =0;
    for(int i =1; i<=n ;i++){
        cr_h = max(cr_h , pre[i]+suf[i]);
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

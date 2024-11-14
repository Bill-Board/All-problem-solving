//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;


int n, t[4*N],  a[N];
void build(int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build( v*2, tl, tm);
        build( v*2+1, tm+1, tr);
        t[v] = __gcd(t[v*2] , t[v*2+1]);
    }
}

int sum(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return __gcd(sum(v*2, tl, tm, l, min(r, tm)), sum(v*2+1, tm+1, tr, max(l, tm+1), r) );
}
void solve()
{
    cin >> n;
//    for(int i = 1; i<= 3*n; i++)
//        t[i] = 0;
    for(int i =1; i<=n; i++)
        cin >> a[i];
    sort(a+1, a+n+1);
//    build(1, 1, n);
//    for(int i = 1; i<=n; i++){
//        int l = (i+1)/2 , r  = l + n - i;
//        cout << sum(1, 1, n, l, r) << " \n"[i==n];
//    }
    int l = (n+1)/2, r = l, cr_h = a[l];
    vector<int> ans;
    for(int i = n; i>0 ;i--){
        int ll = (i+1)/2 , rr  = ll + n - i;
        if(ll<l )
            l--, cr_h = __gcd(cr_h, a[l]);
        if(r < rr)
            r++, cr_h = __gcd(cr_h, a[r]);
        ans.push_back(cr_h);
    }
    reverse(ans.begin(),ans.end());
    for(auto i: ans)
        cout << i << " ";cout << '\n';

}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

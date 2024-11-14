//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU

#include<bits/stdc++.h>
using namespace std;

typedef long long v99;
#define vll    vector<v99>
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long tokp;cin >> tokp;while(tokp--)
#define ses   "\n"
#define whp   " "
#define sob(z)  (z).begin(), (z).end()
#define ff first
#define ss second
#define pii pair<v99, v99>
const v99 N=200005;


/// code is here->----------------------------

void solve()
{
    v99 n , k;
    cin >> n >> k;
    vll a(n), pre(n+2, 0);
    for(auto &i : a) cin >> i;
    for(v99 i=0, j=k; j <= n ; i++, j++)
        pre[i]++, pre[j]--;
    for(v99 i=1; i <=n ;i++)
        pre[i] += pre[i-1];
    double cr_h=0, mot= n- k +1;
    for(v99 i = 0; i < n ; i++ )
        cr_h += pre[i] * a[i] ;

    cout << fixed << setprecision(10) << cr_h / mot << ses;
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    //i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...

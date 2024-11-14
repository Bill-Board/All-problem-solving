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

v99 alabu(string a,v99 n)
{
    v99 pos=n-1;
    while(a.front()==a[pos])pos--;
    return max(pos, n-1-pos );
}

void solve()
{
    string a;
    cin >> a;
    v99 n = a.size();
//    vll a(n);
//    for ( auto &i: a)cin >> i;
    v99 ans1=alabu(a,n);
    reverse(sob(a));
    cout << max(ans1, alabu(a,n) ) << ses;
}



signed main()
{
    //dua
    freopen("max-pair.in","r",stdin);
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...

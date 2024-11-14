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

v99 alabu(vll a, v99 m)
{
    v99 cnt=0;
    for(auto i:a)cnt+=(i%2==m);
    return cnt;
}


void solve()
{
    v99 n , m;
    cin >> n >> m;
    vll a(n), b(m);

    for(auto &i:a) cin >> i;
    for(auto &i:b) cin >> i;

    cout << min(alabu(a,0LL),alabu(b,1LL))+min(alabu(a,1LL),alabu(b,0LL)) << ses;

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

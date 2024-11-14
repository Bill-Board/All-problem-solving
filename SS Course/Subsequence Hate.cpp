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
    string s;
    cin >> s;
    v99 n = s.size();
    vll o(n+2,0), z (n+2,0);
    for(v99 i = 0; i < n ; i++)
    {
        o[i+1]+=s[i]=='1';
        z[i+1]+=s[i]=='0';
        o[i+1]+=o[i];
        z[i+1]+=z[i];
    }
    v99 cr_h =LLONG_MAX;
    for(v99 i = 0 ; i<=n ; i++)
    {
        /// age sunno
        v99 cnt1 = o[i] + z[n] - z[i];
        /// pore sunno
        v99 cnt2 = z[i] + o[n] - o[i];
        cr_h = min({cr_h, cnt1, cnt2 });
    }
    cout << cr_h <<ses;

}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...

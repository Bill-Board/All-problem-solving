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
    v99 one=0, cr_h = s.size();
    for(auto i: s)one += (i=='1');
    cr_h -= (one==1);
    cr_h = (cr_h + 1)/2;
    cr_h-=( one == 0);
    cout << cr_h <<ses;
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

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
    v99 h , m , a;
    char c;
    cin >> h >> c >> m >> a;
    v99 sum= h*60 + m + a;
    m = sum% 60;
    sum/=60;
    sum%=24;
    cout <<setw(2) << setfill('0') << sum <<":";
    cout <<setw(2) << setfill('0') << m<<ses;
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
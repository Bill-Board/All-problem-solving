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
    v99 n;
    cin >> n;
    string s; cin >> s;
    if(n&1)
    {
        cout << 1 << ses << s <<ses;
        return ;
    }
    v99 one = 0;
    for ( auto i: s)one+=(i=='1');
    if( one == (n - one ))
    {
        cout<< 2 <<ses;
        cout << s.substr(0,n-1) << whp;
        cout<< s.back() <<ses;
    }
    else
    {
        cout << 1 << ses << s <<ses;
    }
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

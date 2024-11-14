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
const v99 N=100005;


/// code is here->----------------------------

v99 cnt[N];
bool is_pali(string s)
{
    v99 n = s.size();
    for(v99 i = 0; i < n; i++)
    {
        if( s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

void init()
{
    for( v99 i = 1; i <= N ; i++)
    {
        if(is_pali( to_string(i) ) )
            cnt[i]+=i;
        cnt[i]+=cnt[i-1];
    }
}

void solve()
{
    v99 l , r;
    cin >> l >> r;
    cout << cnt[r] - cnt[l-1] << ses;
}



signed main()
{
    init();
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...

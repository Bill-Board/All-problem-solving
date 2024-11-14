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
    v99 n, m=LLONG_MAX;
    cin >> n;
    vll a(n), pr({2, 3, 5 ,7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47});
    for(auto &i: a)cin >> i;
    for(v99 i=1; i<(1<<15); i++)
    {
        v99 gun=1;
        for(v99 j = 0; j<pr.size() ;j++)
            if(i & (1<<j) )
                gun *= pr[j];
        bool ok=false;
        for(auto j: a)
            ok |= (__gcd(gun, j) == 1);
        //cout << ses <<gun << ses;
        if(!ok)
            m=min(m, gun);
    }
    cout << m << ses;
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

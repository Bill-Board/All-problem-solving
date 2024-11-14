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
    vll a(n),pos(n+2, 0), prm({ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 51});

    for( auto &i : a) cin >> i;

    v99 cr_h =0;

    for( v99 i = 1; i < n ; i++)
    {
        if( __gcd(a[i], a[i-1] )==1) continue;
        for(auto j : prm)
        {
            if( __gcd( a[i] , j )==1 and  __gcd( a[i-1] , j )==1)
            {
                cr_h ++;
                pos[i]=j;
                break;
            }
        }
    }
    cout << cr_h << ses;
    for(v99 i = 0; i < n ; i++)
    {
        if( pos [i] )cout << pos[i] << whp;
        cout << a[i] << whp;
    }
    cout << ses ;
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

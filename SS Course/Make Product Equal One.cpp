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
    v99 n ,pos = 0,neg = 0,zero = 0, cr_h = 0;
    cin >> n;
    for( v99 i = 0; i<n ; i++)
    {
        v99 x; cin >> x;
        if( x < 0)cr_h-=(x+1), neg++ ;
        else if( x > 0)cr_h+=(x-1), pos++;
        else cr_h++,zero++;
    }
    if( neg&1 and zero==0)cr_h+=2;
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

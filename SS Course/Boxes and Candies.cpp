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
    v99 n, x ,cr_h=0;
    cin >> n >> x;
    vll a(n);
    for( auto &i : a)cin >> i;
    if(a[0]>x)
    {
        cr_h+=( a[0] - x );
        a[0] = x;
    }
    for( v99 i = 1; i < n ; i++)
    {
        if( a[i] + a[i-1] > x)
        {
            v99 val = a[i] + a[i-1] - x ;
            cr_h+= val;
            a[i]-=val;
        }
    }
    cout<< cr_h << ses;
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

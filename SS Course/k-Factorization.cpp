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
    v99 n, k;
    cin >> n >> k;
    vll a;
    v99 temp_n=n;
    for( v99 i = 2; i*i <= n ; i++)
    {
        while( temp_n % i ==0)
        {
            temp_n /= i;
            a.push_back(i);
        }
    }
    if(temp_n>1)a.push_back(temp_n);
    if( k > a.size() )
    {
        cout << -1 << ses;
        return ;
    }
    while( k > 1)
    {
        cout << a.back() << whp;
        a.pop_back();
        k--;
    }
    v99 cr_h = 1;
    for( auto i: a) cr_h *= i;
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

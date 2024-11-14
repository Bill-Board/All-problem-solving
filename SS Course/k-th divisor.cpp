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
    v99 n , k;
    cin >> n >> k;
    vll a;
    for(v99 i =1; i*i <= n ; i++)
    {
        if(n%i==0)
        {
            a.push_back(i);
            if(n/i != i)
                a.push_back(n/i);
        }
    }
    //for ( auto i : a)cout << i <<whp ;cout <<ses;

    sort(sob(a));
    if(a.size()<k)cout << -1 << ses;
    else cout << a[k-1] <<ses;
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

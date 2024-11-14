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

v99 n, x, cnt;
bool alabu(v99 i, v99 j)
{
    return i<=n and j<=n;
}

void solve()
{
    cin >> n >> x;
    for(v99 i=1; i*i <= x ; i++)
    {
        if(x%i==0)
        {
            cnt+=alabu(i, x/i);
            if(i != x/i)cnt+=alabu(i, x/i);
        }
    }
    cout << cnt <<ses;
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

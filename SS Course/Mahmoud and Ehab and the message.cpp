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
    v99 n, m, k;
    cin >> n >> k >> m;
    map<string , v99 > mpp;
    string s[n+2];
    for(v99 i=1;i<=n ;i++)
        cin>>s[i];
    vll a(n+1);
    for(v99 i=1;i<=n ;i++)
        cin>>a[i];
    for(v99 i=0; i<k ; i++)
    {
        v99 x, val=LLONG_MAX;
        cin>>x;
        vll b(x);
        for(auto &j : b)cin >> j, val=min(val, a[j]);
        for(auto j: b)mpp[ s[j] ]=val;
    }
    //for(auto j: mpp)cout << j.ff << whp <<j.ss <<ses;


    v99 cr_h=0;
    while(m--)
    {
        string p;cin>>p;
        cr_h+=mpp[p];
    }
    cout << cr_h << ses;
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

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
    vll a(n), pre(n+2, n+2), suf(n+3, n+2);
    for(auto &i: a)
        cin >> i;
    for(v99 i= 1; i<= n ; i++)
    {
        if(a[i-1]==0)pre[i]=0;
        else pre[i]=pre[i-1]+1;
    }
    for(v99 i= n; i > 0 ; i--)
    {
        if(a[i-1]==0)suf[i]=0;
        else suf[i]=suf[i+1]+1;
    }
    for(v99 i=1; i<=n ;i++)
        cout << min(pre[i], suf[i])<< whp;
    cout <<ses;
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

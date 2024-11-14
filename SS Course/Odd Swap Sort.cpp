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

bool alabu(vll a,v99 n)
{
    if(n<2)return false;
    for(v99 i=1; i<n; i++)
        if(a[i-1] > a[i])return true;
    return false;
}


void solve()
{
    v99 n;
    cin >> n;
    vll j, b;
    for(v99 i=0; i< n ; i++)
    {
        v99 x; cin >> x;
        if(x&1)b.push_back(x);
        else j.push_back(x);
    }
    if(alabu(j,j.size()) or alabu(b, b.size()))cout << "No" <<ses;
    else cout << "Yes" <<ses;
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...

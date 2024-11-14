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
    v99 n, cr_h = 0;
    cin >> n;
    vll a(n);
    map< v99, v99 > mpp;
    for(auto &i : a)
        cin >> i, mpp[i]++;
    for(v99 i=0; i<32 ; i++)
    {
        v99 val=(1LL<<i);
        for(auto j: mpp)
        {
            if(j.ff >= val)
                break;
            if(val-j.ff < j.ff)
                cr_h += mpp[val-j.ff] * j.ss;
            else if(val- j.ff == j.ff)
                cr_h += (j.ss*(j.ss-1)) / 2LL;
            //cout << j.ff << whp << val-j.ff <<whp << cr_h <<ses;
        }
        //cout << ses << ses;
    }
    cout << cr_h  << ses ;
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

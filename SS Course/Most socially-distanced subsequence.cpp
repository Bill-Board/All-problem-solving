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
    vll a(n), p;
    for(auto &i : a) cin >> i;
    p.push_back(a.front());
    for(v99 i=1; i< n-1 ; i++)
    {
        if(a[i-1] < a[i] and a[i] < a[i+1])continue;
        if(a[i-1] > a[i] and a[i] > a[i+1])continue;
        p.push_back(a[i]);
    }
    p.push_back(a.back());
    cout << p.size() <<ses;
    for(auto i : p)cout << i <<whp;
    cout <<ses;

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

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
    vll a(n);
    set < v99 > s;
    v99 sum =0 , ok = 0;
    for(auto &i : a) cin >> i;
    sort(sob(a),greater<>());
    for(auto &i: a)
    {
        sum |= i;
        //cout << sum << whp <<i <<ses;
        if(s.find(sum)!=s.end() or s.find(i)!=s.end())
        {
            cout << "NO" <<ses;
            return;
        }
        s.insert(sum);
        s.insert(i);
    }
    //for( auto i: s)cout << i <<ses;
    cout << "YES" <<ses;
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

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
    string s; cin >> s;
    v99 m, n =  s.size();
    cin >> m;
    while(m--)
    {
        v99 l, r, k, i;
        cin >> l >> r >> k;
        string p=s.substr(l-1, r-l+1);//, q=p;
        k %= ( r - l + 1);
        for(i = 0; i <( r- l +1 ); i++)
        {
            //q [k]=p [i];
            s[ k + l - 1]=p[i];
            k=(k+1)%( r- l +1 );
        }
        //cout << s <<ses;
    }
    cout << s <<ses;
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

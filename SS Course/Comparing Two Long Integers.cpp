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
    string a, b; cin >> a >> b;
    reverse(sob(a)); reverse(sob(b));
    while(a.back()=='0' and a.size() )
        a.pop_back();
    while(b.back()=='0' and b.size() )
        b.pop_back();
    if(a.size() < b.size() )
        cout << "<" << ses;
    else if(a.size() > b.size() )
        cout << ">" << ses;
    else
    {
        if( a.empty() )
        {
            cout << "=" << ses;
            return;
        }
        for(v99 i = a.size()-1 ; i >= 0 ; i--)
        {
            if( a[i] < b[i] )
            {
                cout << "<" << ses;
                return;
            }

            else if( a[i] > b[i] )
            {
                cout << ">" << ses;
                return;
            }

        }
        cout << "=" << ses;
    }

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

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

string s , p;

bool alabu(v99 l, v99 r)
{
    for(v99 i= l, j = r ; i<j ; i++, j--)
        if(s[i]!=s[j])
            return false;
    return true;
}

void solve()
{
    cin >> s;
    v99 n =s.size();
    for(v99 i=0; i < n; i++)
    {
        if(alabu(i, n-1))
            break;
        p+=s[i];
    }
    reverse(sob(p));
    cout << s+p <<ses;

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

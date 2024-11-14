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

bool alabu(string s, string t)
{
    map<char, char> mpp;
    for(v99 i=0; i<s.size() ; i++)
    {
        if(!mpp.count(s[i]))
            mpp[s[i]] = t[i];
        else if(mpp[s[i]] != t[i])
            return true;
    }
    return false;
}


void solve()
{
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size())
    {
        cout << "No" <<ses;
        return ;
    }
    if(alabu(s,t) or alabu(t,s))cout << "No" <<ses;
    else cout << "Yes" <<ses;
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

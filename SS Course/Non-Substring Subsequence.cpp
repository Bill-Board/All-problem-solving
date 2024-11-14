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
    v99 n , q;
    cin >> n >> q;
    string s;
    cin >> s;
    vll a(n), z(n+2), one(n+2);
    for(v99 i=0; i<n; i++)
    {
        z[i+1]+=s[i]=='0';
        one[i+1]+=s[i]=='1';
        z[i+1]+=z[i];
        one[i+1]+=one[i];
    }
    while(q--)
    {
        v99 l , r;
        cin >> l >> r;
        if(s[l-1]=='0' and z[l-1])
            cout << "YES" <<ses;
        else if(s[l-1]=='1' and one[l-1])
            cout << "YES" <<ses;
        else if(s[r-1]=='1' and one[n]-one[r]>0)
            cout << "YES" <<ses;
        else if(s[r-1]=='0' and z[n]-z[r]>0)
            cout << "YES" <<ses;
        else cout<<"NO"<<ses;
    }
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

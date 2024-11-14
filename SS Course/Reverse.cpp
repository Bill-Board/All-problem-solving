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
    for(auto &i: a)cin >> i;
    v99 i=0,l=1;
    while(a[i]==i+1 and i<n)i++,l++;
    i=n-1;
    while(a[i]!=l and i>=0)i--;

    //cout << l-1 <<whp << i <<ses;
    if(l-1<i)
        reverse(a.begin()+l-1,a.begin()+i+1);
    for(auto i: a)cout << i << whp;
    cout << ses;
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

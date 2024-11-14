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
    map <v99, v99> mpp;
    for(auto &i : a)cin >> i, mpp[i]++;
    sort(sob(a));
    if(a[0]==a[1] and a[1]==a[2])
    {
        v99 val=mpp[a[0]];
        cout << (val*(val-1)*(val-2))/ 6LL << ses;
    }
    else if(a[1]==a[2])
    {
        v99 val=mpp[a[1]];
        cout << (val*(val-1))/ 2LL << ses;
    }
    else
        cout << mpp[a[2]] << ses;
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

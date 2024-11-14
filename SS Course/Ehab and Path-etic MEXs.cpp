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
    cin>>n;
    vector<pair<v99,v99>>a;
    map<v99,v99>mpp;
    for(v99 i=0; i<n-1; i++)
    {
        v99 x,y;
        cin>>x>>y;
        a.push_back(make_pair(x,y));
        mpp[x]++;
        mpp[y]++;
    }
    v99 h=n-2,l=0;
    for(v99 i=0; i<n-1; i++)
    {
        if(mpp[a[i].first]==1 || mpp[a[i].second]==1)
            cout<<l++<<ses;
        else
            cout<<h--<<ses;
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

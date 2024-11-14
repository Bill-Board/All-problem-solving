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
const v99 N=1e9;


/// code is here->----------------------------

vll alabu(v99 n, v99 r)
{
    vll p;
    v99 sum=1, vag= r / n;
    p.push_back(sum);
    while(vag >= sum)
    {
        sum *= n;
        p.push_back(sum);
    }
    return p;
}

void solve()
{
    v99 x, y , l ,r;
    cin >> x >> y >> l >> r;
    vll ek=alabu(x, r), dui= alabu(y, r), ans({l-1,r+1});
    for(auto i: ek)
    {
        for(auto j: dui)
            if(l<=i+j and i+j<=r)ans.push_back(i+j);
    }
    sort(sob(ans));
//    cout << ek.size() << whp << dui.size() <<ses;
//    for(auto i: ek)cout << i << whp ;cout <<ses;
//    for(auto i: dui)cout << i << whp ;cout <<ses;
//    for(auto i: ans)cout << i << whp ;cout <<ses;

    v99 cr_h=0;
    for(v99 i=1; i< ans.size() ;i++)
        cr_h= max(cr_h, ans[i]-ans[i-1]-1);
    cout << cr_h <<ses;


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

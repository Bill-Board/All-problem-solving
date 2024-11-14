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

vll alabu(vll a, bool ok)
{
    if(!ok)reverse(sob(a));
    v99 sum =0, last = a.front();
    vll p;
    for(v99 i =0; i< a.size(); i++)
    {
        v99 dif= abs(a[i]- last);
        sum += dif * i;
        last= a[i];

        p.push_back(sum);

    }
    if(!ok)reverse(sob(p));
    return p;
}


void solve()
{
    v99 n;
    cin >> n;
    vll a(n);
    for( auto &i : a)cin >> i;
    sort(sob(a));
    v99 m = min(0LL, *min_element(sob(a)));
    for( auto &i : a) i-=m;

    vll ek=alabu(a, true), dui= alabu(a, false);

//    for(auto i: ek)cout << i << whp ;cout << ses;
//    for(auto i: dui)cout << i << whp ;cout << ses;


    v99 cr_h =  LLONG_MAX, val;
    for(v99 i = 0; i<n ;i++)
        if(cr_h>ek[i]+dui[i])
            cr_h=ek[i]+dui[i],
                val= a[i];
    cout << val + m << ses;

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

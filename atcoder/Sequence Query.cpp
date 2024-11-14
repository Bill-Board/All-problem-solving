//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
const ll N=200005;
typedef tree< ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree< pair < ll, ll > ,null_type,less< pair < ll, ll > >,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
/// find_by_order(k)  kth index a ki ache, pointer return korbe.
/// order_of_key(x)  x kon position a ache , oita bole dibe
ordered_multiset s;


void solve()
{
    ll n , val =1;
    cin >> n;
    while(n--)
    {
        ll typ, x;
        cin >> typ >> x;
        if(typ==1)
            s.insert({x, val++});
        else if(typ == 2)
        {
            ll k , p=-1; cin >> k;
            ll j= s.find_by_order(k,p);
            //cout << *j.first << endl;
        }
    }

}



signed main()
{

    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

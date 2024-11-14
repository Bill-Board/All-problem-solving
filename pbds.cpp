//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma comment(linker, "/STACK:268435456");
using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using pii= pair<int,int>;

const int N=1000005;
ll mod= 1e9+7;
typedef tree< int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree<pii,null_type,greater<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;

ordered_multiset s;



void solve(int tc)
{
    s.insert({1,1});
    s.insert({1,2});
    s.insert({5,3});
    s.insert({7,4});
    for(auto i: s)
        cout << i.first << ' ' << i.second << '\n';
    pii k = *s.find_by_order(0);
    cout << k.first << ' ' << k.second << '\n';
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

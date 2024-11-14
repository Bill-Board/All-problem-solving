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

using ll = long long;
using pii= pair<ll,ll>;

typedef tree< pii, null_type, greater<pii>, rb_tree_tag,tree_order_statistics_node_update> ott;

/// find_by_order(k)  kth index a ki ache, pointer return korbe.
/// order_of_key(x)  x kon position a ache , oita bole dibe

const int N=100005;
ll mod= 1e9+7;

template <typename T>
struct BIT {
      T n;
      vector <pair<T, T> > Tree;
      void init(T N) {
            n = N;
            Tree = vector <pair<T, T>> (n + 1);
      }
      void update(T pos, T val) {
            while (pos <= n) {
                  Tree[pos].first += val;
                  Tree[pos].second += 1ll;
                  pos += (pos & -pos);
            }
      }
      T querysum(T pos) {
            T sum = 0;
            while (pos > 0) {
                  sum += Tree[pos].first;
                  pos -= (pos & -pos);
            }
            return sum;
      }
      T querysum(T l, T r) {
            return querysum(r) - querysum(l - 1);
      }
      T query(T pos) {
            T sum = 0;
            while (pos > 0) {
                  sum += Tree[pos].second;
                  pos -= (pos & -pos);
            }
            return sum;
      }
      T query(T l, T r) {
            return query(r) - query(l - 1);
      }

      void clear_(){ Tree.clear(); }
};
ll alabu(vector<pii> a, vector<pii> b){
    int n = a.size(), m = b.size();
    ott s;
    BIT<ll> btre; btre.init(N);
    sort(a.begin(),a.end());

    for(int i = n - 2; 0 <= i ; i--)
        a[i].second += a[i+1].second;

    ll cr_h = 0;

    for(auto &i: b)
        cr_h += i.second;

    sort(b.begin(),b.end());
    cr_h = max(cr_h, a.front().second);

    for(int i = 0, last = m; i<n; i++){
        ll ans = a[i].second, parbo = a[i].first, kot = n - i;
        while(0 < last and kot <= b[last-1].first){
            last --;
            s.insert({b[last].second, last+1});
            btre.update(b[last].second, b[last].second);
        }
        ll k = min(parbo, (ll)s.size());
        if(k <= 0) continue;
        ll val = (*s.find_by_order(k-1)).first;
        ll koita = btre.query(val + 1, N);
        ans += ( btre.querysum(val + 1, N) + max(0ll, k - koita)*val );
        cr_h = max(cr_h, ans);
    }
    btre.clear_();
    return cr_h;
}

void solve(int tc)
{
    int n, m;
    cin >> n;
    vector<pii> a(n);
    for(auto &i: a)
        cin >> i.second;
    for(auto &i: a)
        cin >> i.first;


    cin >> m;
    vector<pii> b(m);
    for(auto &i: b)
        cin >> i.second;
    for(auto &i: b)
        cin >> i.first;

    cout << max(alabu(a, b), alabu(b,a)) << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...


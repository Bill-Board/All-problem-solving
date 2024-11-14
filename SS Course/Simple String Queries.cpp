//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

template <typename T>
struct BIT {
      T n;
      vector <T> Tree;
      void init(T N) {
            n = N;
            Tree = vector <T> (n + 1);
      }
      void update(T pos, T val) {
            while (pos <= n) {
                  Tree[pos] += val;
                  pos += (pos & -pos);
            }
      }
      T query(T pos) {
            T sum = 0;
            while (pos > 0) {
                  sum += Tree[pos];
                  pos -= (pos & -pos);
            }
            return sum;
      }
      T query(T l, T r) {
            return query(r) - query(l - 1);
      }
      void clear_(){ Tree.clear(); }
};



void solve()
{
    int n, q;
    string s;
    cin >> n >> s >> q;
    BIT< int > a[27];
    for(int i =0 ; i < 26 ; i++)
        a[i].init(n);
    for(int i = 0; i < n ;i++)
        a[s[i]-'a'].update(i+1, 1);
    while(q--){
        int typ, l;
        cin >> typ >> l ;
        if(typ == 1){
            char c;
            cin >> c;
            a[s[l-1]-'a'].update(l, -1);
            s[l-1] = c;
            a[s[l-1]-'a'].update(l, 1);
        }
        else{
            int r, cr_h = 0;
            cin >> r;
            for(int i = 0; i<26; i++)
                cr_h += a[i].query(l,r)>0;
            cout << cr_h << endl;
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

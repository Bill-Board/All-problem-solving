//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    int n , cr_hs=0, cr_hd=0;
    cin >> n;
    vector < int > a(n);
    set < int > s;
    for(auto &i : a)
        cin >> i,
        s.insert(i);
    for(int i = 0; i<n ; i++){
        int x;
        cin >> x;
        if(a[i] == x)
            cr_hs++;
        else if(s.find(x) != s.end())
            cr_hd++;
    }
    cout << cr_hs << endl << cr_hd << endl;

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

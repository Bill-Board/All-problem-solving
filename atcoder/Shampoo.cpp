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
    int v, a, b, c;
    cin >> v >> a>> b >> c;
    v %= (a + b + c);
    if(v<a){
        cout << "F" << endl;
        return;
    }
    v -= a;
    if(v<b){
        cout << "M" << endl;
        return;
    }
    cout << "T" << endl;

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

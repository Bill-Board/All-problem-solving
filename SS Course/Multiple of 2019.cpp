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
    string s;
    cin >> s;
    vector <int > rem(2200);
    int m = 0, pow_10=1;
    rem[m]++;
    for(int i = s.size() -1 ; i>=0; i--){
        m += ( s[i]- '0' ) * pow_10;
        m %= 2019;
        rem[m] ++;
        pow_10 = (pow_10 * 10) % 2019;
    }
    ll cr_h = 0;
    for(int i = 0; i < 2019 ; i++)
        cr_h += rem[i] * (rem[i] - 1) /2;
    cout << cr_h << endl;

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

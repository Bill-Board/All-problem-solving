//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    double a, b , d, pi = acos(-1);
    cin >> a >> b >> d;
    d = (d * pi)/180.0;
    double x = a*cos(d) - b*sin(d);
    double y = b*cos(d) + a*sin(d);
    cout << fixed << setprecision(15) ;
    cout << x << " " << y << '\n';

}



signed main()
{
     int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

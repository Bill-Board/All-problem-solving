//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
void solve(){

    double l, a, PI = acos(-1); cin >> l >> a;
    double rad_a = (PI * a)/180.0;
    double r = l/rad_a;

    double w, h;
    //cout << fixed << setprecision(6) << r << endl;
    if(a == 180.0) {
        w = r*2.0;
        h = r;
    }
    else if(a == 360.0) {
        w = r*2.0;
        h = r*2.0;
    }
    else if(a < 180.0) {
        w = sin(rad_a/2.0)*r*2.0;
        ///h = r - cos(rad_a/2.0)*r;
        h = r - (sqrt( (r*r)  - ((w/2.0)*(w/2.0))  )) ;
    }
    else {
        rad_a = PI*2.0 - rad_a;
        r = l/rad_a;

        w = r*2.0;
        h = r + cos(rad_a/2.0)*r;
    }
    cout << fixed << setprecision(16) << w << ' ' << h << endl;

    return;
}


signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

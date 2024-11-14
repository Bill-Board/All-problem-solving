//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;

ld area(vector<ld>X,vector<ld>Y , int n){
    ld area = 0.0;

    for (int i = 0 ,j = n -1; i < n; i++, j = ( j + 1)%n)
        area += (X[j] + X[i]) * (Y[j] - Y[i]);

    return abs(area / 2.0);
}

vector<ld> x(5), y(5);
ld rect_area, ep = 0.0000001;
bool alabu(ld px, ld py){
    vector<ld> a(3);
    vector<ld> b(3);
    a[0] = px; b[0] = py;
    ld total_area = 0.0;
    for(int i = 0, j = 1; i<4; i++, j = (j + 1)%4){
        a[1] = x[i]; a[2] = x[j];
        b[1] = y[i]; b[2] = y[j];
        total_area += area(a, b, 3);
    }
    return abs(total_area-rect_area) < ep;
}

void solve(int tc)
{
    int n = 4;
    for(int i = 0; i<n; i++)
        cin >> x[i] >> y[i];
    ld px, py, w, h; cin >> px >> py >> w >> h;
    ll l = 1, r = 1e12, ans = 0;
    rect_area = area(x, y, n);
    while(l <= r){
        ll mid = (l + r)/2;
        ll ki = mid * 2;
        ll new_Width = ki * w;
        ld x_min = px - new_Width/2;
        ld x_max = px + new_Width/2;
        ll new_height = h * ki;
        ld y_min = py - new_height/2;
        ld y_max = py + new_height/2;
        int ok = alabu(x_min, y_min) + alabu(x_min, y_max) +
                  alabu(x_max, y_min) + alabu(x_max, y_max);
        if( ok == 4)
            l = mid + 1, ans = max(ans, new_height*new_height);
        else
            r = mid - 1;
    }
    cout << "Case " << tc << ": " << ans << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

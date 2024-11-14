//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;
int n, visi[N], w[N][5], ans ;

int _distance(int x1, int y1, int x2, int y2){
    return abs(x1 - x2) + abs(y1 - y2);
}

void alabu(int sx, int sy, int dx, int dy, int dis){
    ans = min(ans, _distance(sx, sy, dx, dy)+dis);
    for(int i = 0; i<n; i++){
        if(visi[i])continue;
        visi[i] = 1;
        int tmp = _distance(sx, sy, w[i][0], w[i][1]) + dis + w[i][4];
        alabu(w[i][2], w[i][3], dx, dy, tmp);
        tmp = _distance(sx, sy, w[i][2], w[i][3]) + dis + w[i][4];
        alabu(w[i][0], w[i][1], dx, dy, tmp);
        visi[i] = 0;
    }
}

void solve(int tc)
{
    cin >> n;
    int sx, sy, dx, dy;
    cin >> sx >> sy >> dx >> dy;
    for(int i = 0; i<n; i++)
        for(int j = 0; j<5; j++)
            cin >> w[i][j];
    ans = INT_MAX;
    alabu(sx, sy, dx, dy, 0);
    cout << ans << '\n';
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

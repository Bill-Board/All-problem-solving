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
int n, m, **mat;
int kjorhole(){
    int ans = 0;
    for(int i = 0; i<n; i++){
        int cnt = 0;
        for(int j =0 ; j<m; j++)
            cnt += mat[i][j];
        ans += (cnt == m);
    }
    return ans;
}

int *rowwsum(){
    int *r = new int[n];
    for(int i = 0; i<n; i++){
        int cnt = 0;
        for(int j =0 ; j<m; j++)
            cnt += mat[i][j];
        r[i] = cnt;
    }
    return r;
}

int counttoggle(int *r, int j){
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(mat[i][j] == 1)
            r[i] -= 1;
        else
            r[i] += 1;
        cnt += (r[i] == m);
        if(mat[i][j] == 1)
            r[i] += 1;
        else
            r[i] -= 1;
    }
    return cnt;
}

void solve(int tc)
{
    cin >> n >> m;
    mat = new int*[n];
    for(int i = 0; i<n; i++){
        mat[i] = new int[m];
        for(int j = 0; j<m; j++)
            cin >> mat[i][j];
    }
    int ans = kjorhole();
    if(k % 2 == 0){
        cout << ans << '\n';
        return;
    }
    int *rowsum = rowwsum();
    for(int i = 0; i<m; i++){
        ans = max(ans, counttoggle(rowsum, i));
        cout << ans << '\n';
    }

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

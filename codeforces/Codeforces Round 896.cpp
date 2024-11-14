//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N = 100005;
ll mod= 1e9+7;



void solve(int tc)
{
    int n,m,ans; cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    if(n >= m){
        for(int l = 0; l<m; l++){
            int k = 0;
            for(int i = 0, j=l;i<n; i++, j = (j + 1)%m){
                a[i][j] = l;
                k++;
                if(k + 1 == m){
                    while(i < n)
                        a[i++][j] = l;
                    break;
                }
            }
        }
        ans = m;
    }
    else{
        for(int l = 0; l<n; l++){
            for(int i = l, j = 0; i<n and j<m; i++, j++)
                a[i][j] = l;
        }
        for(int l = 1; l<m; l++){
            for(int i = 0, j = l; i<n and j<m; i++, j++)
                a[i][j] = m-l;
        }
        ans = n + 1;
    }
    if(m == 1) ans = 0;
    cout << ans << '\n';
    for(auto i: a){
        for(auto j: i)
            cout << j << ' ';
        cout << '\n';
    }

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

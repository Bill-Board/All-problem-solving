//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 300005;
ll mod= 1e9+7;
vector<int> a, visi;
void dfs(int ind, int l, int n){
    visi[ind] = 1;
    if(0 <= ind + l and ind+l <n and visi[ind+ l]==0 and a[ind])
        dfs(ind+l, l ,n);
}

void solve(int tc)
{
    int n; cin >> n;
    a.clear();visi.clear();
    a.resize(n); visi.resize(n, 0);
    for(int i =0 ; i<n; i++)
        cin >> a[i];
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(visi[i] or a[i]!=2)continue;
        /// samer dike jabo
        dfs(i, 1, n); dfs(i, -1, n);
        ans ++;
    }
    for(int i = 0; i<n; i++){
        if(visi[i] or !a[i])continue;
        /// samer dike jabo
        if(i == 0)
            dfs(i, 1, n), ans++;
        else if(visi[i-1])
            dfs(i, 1, n), ans++;
        else{
            int j = i;
            while(j < n and a[j]>0)
                j ++;
            if(0 <= j - 1 and visi[j-1] == 0)
                dfs(j-1, -1, n), ans++;
        }
    }
    for(int i = 0; i<n; i++)
        ans += !visi[i];
    cout << ans << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

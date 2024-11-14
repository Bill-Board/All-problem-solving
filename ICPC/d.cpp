//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

vector<int> tom[N];
int visi [N];
void dfs(int ind){
    visi[ind]=1;
    for(auto i: tom[ind]){
        if(visi[i])continue;
        dfs(i);
    }
}

void solve()
{
    int n; cin >> n;
    for(int i= 1; i<=n; i++){
        int x; cin >> x;
        tom[x].push_back(i);
        tom[i].push_back(x);
    }
    int cnt = 0;
    for(int i =1; i<=n; i++){
        if(visi[i])continue;
        dfs(i);
        cnt ++;
    }
    cout << cnt;
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

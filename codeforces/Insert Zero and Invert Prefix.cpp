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


void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n), ans;
    for(auto &i: a)
        cin >> i;
    if(a.back()==1){
        cout << "NO\n";
        return;
    }
    cout <<"YES\n";
    int cnt =  0;
    for(int i = 0; i<n; i++){
        if(a[i] == 0){
            ans.push_back(i - ans.size());
            for(int j = 0; j<cnt; j++)
                ans.push_back(0);
            cnt = 0;
        }
        else
            cnt++;
    }
    reverse(ans.begin(),ans.end());
    for(auto i: ans)
        cout << i << ' ';
    cout << '\n';
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

//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 100005;
ll mod= 1e9+7;

void solve(int tc)
{
    string s; cin >> s;
    int n = s.size();
    vector<int> a;
    bool ok = s.front() == 'B' || s.back()=='B';
    for(int i = 0; i<n; i++){
        int cnt = 0;
        while(i < n and s[i] == 'A')
            i++, cnt++;
        if(cnt)a.push_back(cnt);
        if(i + 1< n)
            ok |= (s[i]==s[i+1] and s[i]=='B');
    }
    if(a.empty()){
        cout << "0\n";
        return;
    }
    sort(a.begin(), a.end());
    int ans = ok ? a.front() : 0;
    for(int i = 1; i<a.size(); i++)
        ans += a[i];
    cout << ans << '\n';
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

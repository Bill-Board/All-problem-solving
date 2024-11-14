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
    string s; cin >> s;
    vector<int> pre(n+1);
    vector<pair<char, int>> p;
    for(int i = 0; i<n; i++){
        if(s[i]!='(' and s[i]!=')') continue;
        if(p.empty())
            p.push_back({s[i], i});
        else if(p.back().first == '(' and s[i] == ')')
            pre[p.back().second] += 1, pre[i+1] -= 1, p.pop_back();
        else
            p.push_back({s[i], i});
    }
    for(int i = 1; i<n; i++)
        pre[i] += pre[i-1];
    for(int i = 0; i<n ; i++)
        if(pre[i] == 0)
        cout << s[i];
    cout << '\n';
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

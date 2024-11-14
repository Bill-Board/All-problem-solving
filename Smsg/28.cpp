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

int alabu(int level, int &ind, string &s, int k){
    int val = 0, ok = 1, ans = 0, n = s.size();
    ind++;
    while(ind < n and s[ind]!= '(' and s[ind]!=')')
            val = (val * 10) + (s[ind++] - '0'), ok = 0;
    if(ok) return ans;
    if(level == k)
        ans += val;
    ans += alabu(level+1, ind, s, k);
    ind++;
    ans += alabu(level+1, ind, s, k);
    ind++;
    return ans;
}

void solve(int tc)
{
    int k; string s;
    cin >> k >> s;
    int start = 0;
    cout << alabu(0, start, s, k) << '\n';
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

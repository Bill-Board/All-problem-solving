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

bool isSubsequence(string &s, string &t) {
    int j = 0, n = s.size(), m = t.size();

    for (int i = 0; i<n && j<m; i++) {
        if (s[i] == t[j]) {
            j ++;
        }
    }

    return j == m;
}

int numMatchingSubseq(string s, vector<string>& words) {
    int ans = 0;

    map<string, bool> mpp;
    
    for (auto i: words) {
        if (mpp.find(i) == mpp.end()) {
            mpp[i] = isSubsequence(s, i);
        } 

        ans += (mpp[i] == true);
    }

    return ans;
}

void solve(int tc)
{
    string s;
    int n; cin >> s >> n;
    vector<string> words(n);
    for (auto &i: words) {
        cin >> i;
    }

    // cout << s << "\n\n" << words.size() << endl;
    // for (auto i: words) {
    //     cout << i << endl;
    // }

    cout << numMatchingSubseq(s, words) << endl;
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

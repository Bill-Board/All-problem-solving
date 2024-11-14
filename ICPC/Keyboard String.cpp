//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n; string s;
    cin >> n >> s;
    map<char, char> mpp;
    for(char i = 'A'; i<='Z'; i++)
        mpp[i] = i;
    int m; cin >> m;
    while(m--){
        char x, y; cin >> x >> y;
        mpp[x] = y;
    }
    string p;
    for(int i = 0; i<n; i++){
        char c = s[i];
        p += c;
        while(i < n and mpp[c] != c){
            c = mpp[c];
            p += c;
            i++;
        }
    }
    if(s == p) cout << "YES\n";
    else cout << "NO\n";
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

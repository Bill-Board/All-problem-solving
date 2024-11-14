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
bool ok(char c){
    return c=='a' or c=='t' or c=='c' or c=='o' or c=='d' or c=='e' or c=='r' ;
}

void solve(int tc)
{
    string s; ll n, val = 0;
    cin >> s >> n;
    reverse(s.begin(), s.end());
    for(ll i = 0; i<s.size(); i++){
        if(s[i]=='?' or s[i] == '0') continue;
        val += (1ll << i);
    }
    if(n < val){
        cout << "-1\n";
        return;
    }
    for(ll i = s.size() - 1; 0 <= i; i--){
        if(s[i]=='1' or s[i] == '0') continue;
        if(val + (1ll << i) <= n)
            val += (1ll << i);
    }
    cout << val << '\n';
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

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
    int n, cnts = 0, cntn = 0; cin >> n;
    string s; cin >> s;
    for(int i = 0, j = n-1; i<j; i++, j--){
        if(s[i] == s[j])
            cnts+=2;
        else
            cntn++;
    }
    s += '0';
    for(int i = 0; i<=n; i++){
        if(cntn <= i and (i - cntn)%2 ==0 and i<=cntn+cnts)
            s[i] = '1';
        else
            s[i] = '0';
    }
    if(n % 2){
        for(int i = n; 0<=i; i--)
            if(s[i] == '0' and 0<i and s[i-1] == '1')
                s[i] = '1';
    }
    cout << s << '\n';
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

//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    bool ok = false;
    for(int i = 0; i<n-1;i++)
        ok |= (s[i]==s[i+1]);
    if(ok)
        cout << "Change needed\n" ;
    else
        cout << "No change needed\n" ;
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

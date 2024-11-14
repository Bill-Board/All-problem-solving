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
    ll n , x;
    string s;
    cin >> n >> x;
    for(int i = 0; i<n ;i++){
        char c; cin >> c;
        if(s.empty())s+=c;
        else if(c == 'U' and (s.back() =='L' or s.back() =='R'))
            s.pop_back();
        else s+=c;
    }
    for(int i =0 ; i< s.size() ;i++){
        if(s[i]=='U' and x>1)
            x >>= 1ll;
        if(s[i]=='R')
            x <<= 1ll, x++;
        if(s[i]=='L')
            x <<= 1ll;
    }
    cout << x << endl;
}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

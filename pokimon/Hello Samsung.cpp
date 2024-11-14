//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    string s, t = "Samsung"; cin >> s;
    for(int i = s.size()-1;t.size() and  i>=0 ; i--){
        if(s[i] == t.back())
            t.pop_back();
    }
    if(t.size()==0)
        cout << "SRBD\n";
    else
        cout << "GHOST\n";
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

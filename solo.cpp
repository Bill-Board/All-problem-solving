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
string a, b;

void solve(int tc)
{
    cin >> a >> b;
    int o1 = 0, o2 = 0;
    for(auto i: a)
        o1+= i=='1';
    for(auto i: b)
        o2+= i=='1';
    if(o1 + (o1% 2) >= o2)
        cout << "YES\n";
    else
        cout << "NO\n";
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

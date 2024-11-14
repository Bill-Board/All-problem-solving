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
    int n; cin >> n;
    map<int, int > mpp;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        mpp[x]++;
    }
    int cr_h = 0;
    for(auto i: mpp){
        if(i.first <= i.second)
            cr_h += i.second - i.first;
        else
            cr_h += i.second;
    }
    cout << cr_h << '\n';
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

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

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mpp;
    for(auto &i: a)
        cin >> i, mpp[i]++;
    int cr_h = n;
    for(auto i: a){
        int kot = (i ^ 1);
        cr_h = min(cr_h, n - (mpp[i] + mpp[kot]) );
        cr_h = min(cr_h, n - mpp[i] );
    }
    cout << cr_h << '\n';

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

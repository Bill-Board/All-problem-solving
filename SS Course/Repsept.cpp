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
    int n, lop =1e7+10, sum = 0;
    cin >> n;
    for(int i = 1; i < lop; i++ )
    {
        sum = (sum * 10 + 7)% n;
        if(sum ==0)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;

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

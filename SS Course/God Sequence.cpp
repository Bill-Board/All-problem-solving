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
    int a, b;
    cin >> a >> b;
    if(a>b)
    {
        int sum= 0;
        for(int i =1; i <= a; i++)
            cout << i << " ", sum += i;
        for(int i = 1; i < b; i++)
            cout << -i << " ", sum -= i;
        cout << -sum << endl;
    }
    else
    {
        int sum= 0;
        for(int i =1; i <= b; i++)
            cout << -i << " ", sum += i;
        for(int i = 1; i < a; i++)
            cout << i << " ", sum -= i;
        cout << sum << endl;
    }

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

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
    int n , q;
    cin >> n >> q;
    vector <int > a(n+2), b(n+2);
    a[0]=-1;
    for(int i = 1; i <=n ;i++)
    {
        cin >> a[i];
        if(a[i] != a[i-1])
            b[i]=i-1;
        else
            b[i]=b[i-1];
    }
    cout << endl;
    while( q-- )
    {
        int l, r, v;
        cin >> l >> r >> v;
        if(a[l] != v)
        {
            cout << l << endl;
            continue;
        }
        if(a[r] != v)
        {
            cout << r << endl;
            continue;
        }
        if( b[r] < l)
            cout << -1 << endl;
        else
            cout << b[r] << endl;
    }
}



signed main()
{

    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

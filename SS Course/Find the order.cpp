//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU

#include<bits/stdc++.h>
using namespace std;

typedef long long v99;
#define vll    vector<v99>
#define ses   "\n"
#define whp   " "
#define sob(z)  (z).begin(), (z).end()
#define ff first
#define ss second
#define pii pair<v99, v99>
const v99 N=200005;


/// code is here->----------------------------

void solve()
{
    v99 n;
    cin >> n;
    vll a(n), ans(n);
    for(auto &i : a)
        cin >> i;
    sort(sob(a));
    for(v99 i=1; i<n; i+=2)
        ans[i]=a.back(), a.pop_back();
    for(v99 i=0; i<n; i+=2)
        ans[i]=a.back(), a.pop_back();
    for(v99 i = 1; i< n-1 ; i++)
    {
        if(i&1 and (ans[i-1] >= ans[i] or ans[i] <= ans[i+1]))
        {
            cout << -1 <<ses;
            return;
        }
        if(i%2==0 and (ans[i-1] <= ans[i] or ans[i] >= ans[i+1]))
        {
            cout << -1 <<ses;
            return;
        }
    }
    for(auto i: ans)
        cout << i <<whp;
    cout <<ses;
}



signed main()
{

    v99 test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

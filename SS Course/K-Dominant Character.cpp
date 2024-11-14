//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
vector < int > a[27];

void solve()
{
    string s;
    cin >> s;
    for(int i = 0; i<s.size() ; i++)
        a[s[i]-'a'].push_back(i);
    int cr_h = s.size();
    for(int i = 0; i< 26 ; i++)
    {
        int last = -1, dif = 0;
        for(auto j: a[i])
            dif = max(dif, j - last),
            last = j;
        dif = max(dif, (int)s.size()  - last);
        //cout << dif << endl;
        cr_h  = min(cr_h , dif);
    }
    cout << cr_h << endl;
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

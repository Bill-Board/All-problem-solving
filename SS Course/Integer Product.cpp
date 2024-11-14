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
    int n; cin >> n;
    map< pair <int , int > , int> mpp;
    for(int rep = 0; rep < n; ++rep)
    {
        double x;
        cin >> x;
        ll i = llround(x * 1e9);
        int two = 0, five = 0;
        while(i % 2 == 0)
        {
            two++;
            i /= 2;
        }
        while(i % 5 == 0)
        {
            five++;
            i /= 5;
        }
        ++mpp[ {two,five}];
    }
    ll cr_h = 0;
    for ( auto i : mpp)
    {
        for(auto j: mpp)
        {
            pair <int , int > a = i.first, b = j.first;
            if(a.first+b.first>=18 && a.second+b.second>=18)
            {
                if(i < j)
                {
                    cr_h += (ll) i.second * j.second;
                }
                else if(i == j)
                {
                    cr_h += (ll) i.second * (i.second - 1) / 2;
                }
            }
        }
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

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
    string s;
    int k ;
    cin >> s >> k;
    set < string > a;
    for(int i = 0; i < s.size() ; i++)
    {
        string p;
        for(int j = 0; j < 5; j++)
        {
            if( i+j >= s.size()) break;
            p+=s[i+j];
            a.insert(p);
        }
    }
    for(auto i: a)
    {
        if(k==1)
        {
            cout << i << endl;
            break;
        }
        k--;
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

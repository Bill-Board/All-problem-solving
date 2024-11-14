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
    int n;
    cin >> n;
    set< int > s;
    for(int i =1; i<=2*n ; i++)
        s.insert(i);
    vector<int> a;
    while(a.size()<n)
    {
        int b = *s.begin();
        a.push_back(b);
        if(a.size()==n)break;
        a.push_back(2*b);
        s.erase(s.find(b));
        s.erase(s.find(2*b));
    }
    for(auto i: a)
        cout << i << " ";
        cout << endl;

}



signed main()
{

    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

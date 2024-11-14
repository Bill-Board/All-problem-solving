//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    sort(a.begin(),a.end());
    a.push_back(a.back()+2);
    for(int i = 0; i<n; i++){
        cout << a[i] ;
        int j = i;
        while(a[j]+1 == a[j+1])
            j++;
        if(j - i> 1)
            i= j, cout << '-' << a[i];
        cout << " ";
    }
    cout << '\n';
}



signed main()
{
     int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

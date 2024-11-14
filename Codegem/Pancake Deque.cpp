//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
int tc  = 1;
void solve()
{
    int n;
    cin >> n;
    deque<int> d;
    for(int i = 0; i<n ; i++){
        int x; cin >> x;
        d.push_back(x);
    }
    int cnt  = 0, val = 0;
    while(d.size()){
        if(d.front() < d.back()){
            if(d.front() >= val)
                val = d.front(), cnt++;
            d.pop_front();
        }
        else{
            if(d.back() >= val)
                val = d.back(), cnt++;
            d.pop_back();
        }
    }
    cout << "Case #" << tc++ << ": " << cnt << endl;
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

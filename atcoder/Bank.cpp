//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n, q, a = 1; cin >> n >> q;
    set<int>s;
    while(q --){
        int t; cin >> t;
        if(t == 1)
            s.insert(a++);
        else if(t == 3)
            cout << *s.begin() << '\n';
        else{
            int x; cin >> x;
            s.erase(x);
        }
    }
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

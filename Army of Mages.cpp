//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n; cin >> n;
    vector<int> a[4];
    for(int i = 0; i<5*n; i++){
        int x, y; cin >> x >> y;
        if(x&1 and y&1)a[0].push_back(i);
        else if(x&1 and y%2 == 0)a[1].push_back(i);
        else if(x%2==0 and y&1)a[2].push_back(i);
        else a[3].push_back(i);
    }
    int l = 0, ind;
    for(int i = 0; i<4; i++){
        sort(a[i].begin(), a[i].end());
        if(l < a[i].size())
            l = a[i].size(), ind = i;
    }
    cout << "OK\n";
    for(int i = 0; i<n; i++)
        cout << a[ind][i] + 1<< " ";
    cout << '\n';
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

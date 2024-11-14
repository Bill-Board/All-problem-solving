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
vector<int> a, visi;
priority_queue <pii, vector<pii>, greater<pii> > pq1, pq2;
int alabu(int c, int s){/// s == 1 means piche theke
    if(c == 0) return 1;
    if(c < 0 or pq1.size() == 0 or pq2.size() == 0) return 0;
    int ans = 0;
    if(s == 1){
        while(pq1.size() and visi[pq1.top().second] == 1){
            pq1.pop();
        }
        if(pq1.size() == 0) return 0;
        int val = pq1.top().first, ind = pq1.top().second; pq1.pop();



        while(pq2.size() and visi[pq2.top().second] == 1){
            pq2.pop();
        }

        if(pq1.size() == 0 or pq2.size() == 0 or c - val < 0) return 0;

        int val1 = pq1.top().first;
        int val2 = pq2.top().first;
        if(val1 < val2)
            ans += alabu(c - val, 1);
        else
            ans += alabu(c - val, 0);
    }
    else{
        while(pq2.size() and visi[pq2.top().second] == 1){
            pq2.pop();
        }
        if(pq2.size() == 0) return 0;
        int val = pq2.top().first, ind = pq2.top().second; pq2.pop();



        while(pq1.size() and visi[pq1.top().second] == 1){
            pq1.pop();
        }

        if(pq1.size() == 0 or pq2.size() == 0 or c - val < 0) return 0;

        int val1 = pq1.top().first;
        int val2 = pq2.top().first;
        if(val1 < val2)
            ans += alabu(c - val, 1);
        else
            ans += alabu(c - val, 0);
    }
    return ans;
}

void solve(int tc)
{
    int n, c; cin >> n >> c;

    a.clear(); visi.clear(); a.resize(n), visi.resize(n, 0);
    for(int i = 0; i<n; i++)
        cin >> a[i], pq1.push({a[i] + i + 1, i}), pq2.push({a[i] + n - i, i});
    cout << alabu(c, 1) << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

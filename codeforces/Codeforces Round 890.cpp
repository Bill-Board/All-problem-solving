//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 100005;
ll mod= 1e9+7;


bool alabu(vector<int> &a, int m, ll k, int pos){
    ll val = 0;
    //cout << "m " << m << '\n';
    for(int i = pos; i<a.size(); i++){
        if(m > a[i]){
            val += m - a[i];
            m--;
        }
        else
            break;
    }
    //cout << "val " << val << '\n';
    return k >= val;
}

void solve(int tc)
{
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    for(auto &i: a)
        cin >> i;
    b[n-1] = a[n-1];
    for(int i = n-2; 0<=i; i--)
        b[i] = max(b[i+1] + 1, a[i]);
    int cr_h = *max_element(a.begin(),a.end());
    for(int i = 0; i<n; i++){
        int l = a[i] + 1, r = b[i], ans = a[i];
        while(l <= r){
            int m = l + (r- l)/2;
            //cout << l << ' ' << r << '\n';
            if(alabu(a, m, k, i))
                l = m + 1, ans = m;
            else
                r = m - 1;

        }
        cr_h = max(cr_h, ans);
    }
    cout << cr_h << '\n';
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

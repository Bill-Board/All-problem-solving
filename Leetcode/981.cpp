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

int alabu(vector<int> &a, vector<int> &b, int pos){
    int l = 0, r = a.size()-1;
    while(l <= r){
        int m = (l + r)/2;
        int ek = upper_bound(b.begin(),b.end(), a[m]) - b.begin() + m + 1;
        int dui = lower_bound(b.begin(),b.end(), a[m]) - b.begin() + m + 1;
//        cout << "l r " << l << ' ' << r << '\n';
//        cout << m << ' ' << a[m] << ' ' << ek << ' ' << dui << '\n';
//        cout << "\n\n";
        if(dui <= pos and pos <= ek)
            return a[m];
        if(ek < pos)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

void solve(int tc)
{
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &i: a)
        cin >> i;
    for(auto &i: b)
        cin >> i;
    double ans;
    int l = n+m;
    if(l%2==0){
        int pos1 = alabu(a, b, l/2);
        if(pos1 ==-1)
            pos1 = alabu(b,a,l/2);
        int pos2 = alabu(a, b, l/2 +1);
        if(pos2 ==-1)
            pos2 = alabu(b,a, l/2 +1);
        ans = (1.0*pos1+pos2)/2.0;
    }
    else{
        int pos1 = alabu(a, b, (l+1)/2);
        if(pos1 ==-1)
            pos1 = alabu(b,a,(l+1)/2);
        ans = 1.0*pos1;
    }
    cout << ans << '\n';
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

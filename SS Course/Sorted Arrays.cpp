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
    int n, cr_h =0;
    cin >> n;
    vector < int > a, b;
    for(int  i =0; i<n ; i++){
        int x;
        cin >> x;
        if(a.empty())a.push_back(x);
        else if(a.back() != x)a.push_back(x);
    }
    //for(auto i: a) cout << i << " ";cout << endl;
    n =a.size();
    for(int i =0; i<n; ){
        int j;
        for(j = i+1; j < n ;j++)
            if(a[j-1]>a[j])break;
        if(j-i>1){
            i = j;
            cr_h ++;
            continue;
        }
        for(j = i+1; j < n ;j++)
            if(a[j-1]<a[j])break;
        cr_h++;
        i = max(i+1, j);
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

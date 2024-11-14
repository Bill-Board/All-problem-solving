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
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    sort(a.begin(),a.end());
    if(a.front() + 1 < a.back()){
        cout << "No\n";
        return;
    }
    if(a.front()==a.back()){
        int ek = 0, dui = 0;
        for(auto i: a){
            ek += (i == n -1);
            dui += (2*i <= n);
        }
        if(ek == n or dui == n){
            cout << "Yes\n";
            return;
        }
    }
    else{
        int total = a.back();
        int eka = 0, dui = 0;
        for(int i = 0; i<n; i++){
            eka += (i == n - 1);
            dui += (i != n - 1);
        }
        cout << eka << ' ' << dui << '\n';
        dui /= 2;
        if(eka + 1 <= total and total <= eka + dui ){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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


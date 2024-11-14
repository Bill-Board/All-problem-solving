//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<int> a(n1), b(n2), c(n3);
    set<int> ek, dui;
    for(auto &i: a)
        cin >> i;
    for(auto &i: b)
        cin >> i;
    for(auto &i: c)
        cin >> i;
    for(int i = n2-1, sum = 0; i>=0; i--){
        sum+=b[i];
        ek.insert(sum);
    }
    for(int i = n3-1, sum = 0; i>=0; i--){
        sum+=c[i];
        dui.insert(sum);
    }
    int cr_h = 0;
    for(int i = n1-1,sum = 0; i>=0;i--){
        sum +=a[i];
        if(ek.find(sum) != ek.end() and dui.find(sum) != dui.end())
            cr_h = max(cr_h, sum);
    }
    cout << cr_h << '\n';
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

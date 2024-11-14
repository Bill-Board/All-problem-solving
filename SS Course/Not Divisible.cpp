//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000005;
int v[N];
void solve()
{
    int n;
    cin >> n;
    vector < int > a(n);
    map< int , int > mpp;
    for(auto &i : a)
        cin >> i, mpp[i]++;
    sort(a.begin(), a.end());
    int cr_h = 0;
    for(auto i: a){
        if(v[i]==0){
            if(mpp[i]==1)
                cr_h++;
            for(int j = i; j<=a.back(); j += i)
                v[j]=1;
        }
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

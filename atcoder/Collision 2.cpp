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
    int n;
    map< int ,set< pair <int , char > > > mpp;
    cin >> n;
    vector < pair <int , int> >p(n);
    for(auto &i : p)
        cin >> i.first >> i.second;
    string s;
    cin >> s;
    for(int i =0 ; i < n ; i++)
        mpp[p[i].second].insert({p[i].first, s[i]});
    for(auto i: mpp){
        bool r_paisi = false;
        //cout << i.first << " = "<< endl;
        for(auto j: i.second){
            //cout << j.first << " " << j.second << endl;
            if(j.second=='L' and r_paisi){
                cout << "Yes" << endl;
                return;
            }
            r_paisi |= j.second=='R';
        }
    }
    cout << "No" << endl;

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

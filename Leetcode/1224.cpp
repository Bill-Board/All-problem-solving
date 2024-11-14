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

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    map<int, int> mpp1, mpp2;
    int ans = 0;
    for(int i = 0; i<n; i++){
        int k = mpp1[a[i]];
        if(k == 0){
            mpp1[a[i]]++;
            mpp2[mpp1[a[i]]]++;
        }
        else{
            mpp2[k]--;
            if(mpp2[k] == 0)
                mpp2.erase(k);
            mpp1[a[i]]++;
            mpp2[mpp1[a[i]]]++;
        }
        if(mpp2.size() == 1){
            int ek = (mpp2.begin())->first, dui = (mpp2.begin())->second;
            if(min(ek, dui) == 1)
                ans = i;
        }
        else if(mpp2.size() == 2){
            int ek = (mpp2.begin())->first, dui = (mpp2.begin())->second;
            int lek = (mpp2.rbegin())->first, rdui = (mpp2.rbegin())->second;
            if(ek == 1){
                if(dui == 1)
                    ans = i;
                else if(lek == 2 and rdui == 1)
                    ans = i;
            }
            else if(ek +1 == lek and rdui == 1)
                ans = i;
        }
        for(auto j: mpp1)
            cout << j.first << ' ' << j.second << '\n';
        cout << "\n";
        for(auto j: mpp2)
            cout << j.first << ' ' << j.second << '\n';
        cout << "\n\n";
    }
    cout << ans + 1 << '\n';
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

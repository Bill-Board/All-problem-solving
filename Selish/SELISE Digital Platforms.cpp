//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=20005;
ll MOD= 1e9+7;
map<char, int> mpp;

bool alabu(string s){
    map<char, int > mpp1;
    for(auto i: s)
        mpp1[i]++;
    for(auto i: mpp1){
        //cout << i.first << " " << i.second << '\n';
        if(mpp[i.first] < i.second)
            return false;
    }
    return true;
}


void solve(int tc)
{
    string s;
    getline(cin , s);
    mpp.clear();
    for(auto &i: s){
        //if(i == ' ') i = '.';
        mpp[i]++;
    }
//    for(auto i: mpp)
//        cout << i.first << " " << i.second << '\n';
    //cout << "s = " << s << '\n';
    string q = "SELISE", qq = "SELISE Digital Platforms";
    bool ok1 = alabu(q), ok2 = alabu(qq);
    cout << "Case " << tc <<": ";
    if(ok1 and ok2)
        cout << "BOTH\n";
    else if(ok1)
        cout << "SELISE\n";
    else if(ok2)
        cout << "SELISE Digital Platforms\n";
    else
        cout << "NONE" << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;cin.ignore();
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

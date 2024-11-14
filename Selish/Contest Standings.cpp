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
    map<int, string> mpp;
    for(int i = 0; i<n; i++){
        int x;string s;
        cin >> s >> x;
        mpp[x] = s;
    }
    int j = 0;
    cout <<"Selise Coding Challenge 2023 Winners\n";
    for(auto i: mpp){
        if(j == 0)
            cout << "Winner: ";
        else if(j == 1)
            cout << "1st Runner Up: ";
        else
            cout << "2nd Runner Up: ";
        cout << i.second << " => " << i.first  << '\n';
        j++;
        if(j == 3) break;
    }
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

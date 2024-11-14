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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    for(int i = 0; i<n-1; i++){
        if(a[0] == a[i] and b[0]==b[i] and b[0]==a[0])
            if(a[i+1] == a[n-1] and b[i+1]==b[n-1] and b[n-1]==a[n-1])
            {
                cout << "YES\n";
                return;
            }
    }
    cout << "NO\n";
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

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
    int n;cin>> n;
    if(n== 3){
        cout <<-1 <<'\n';
        return;
    }
    vector<int>a;
    for(int i =1; i<=n ; i++){
        if(i==2)continue;
        a.push_back(i);
    }
    a.push_back(2);

    for(int i= 0; i<n; i++)
        cout << a[i] << " \n"[i==n-1];


}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

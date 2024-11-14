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
    cin>> n;
    vector<int> a(n),ans(n);
    for(auto &i: a)
        cin >> i;
    int x  = 1;

    for(int i = n-1; i>0 ; i--){
        ans[i] =x;
        if(a[i]-a[i-1]>1)
            x++;
        else
            x=1;
    }
    ans[0]=x;
    for(int i = 0; i<n; i++){
        if(ans[i]==1)ans[i] = 0;
        cout << ans[i] << "\n";
    }

}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

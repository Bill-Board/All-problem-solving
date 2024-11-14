//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll dp[35][35];
void solve()
{
    ll a , b, k;
    cin >> a >> b >> k;
    dp[0][0]=1;
    for(int i = 0; i<=a ; i++){
        for(int j = 0; j<=b ; j++){
            if(i>0)
                dp[i][j]+=dp[i-1][j];
            if(j>0)
                dp[i][j]+=dp[i][j-1];
        }
    }
    string ans;
    while(a>0 and b>0)
    {
        if(k <= dp[a-1][b])
            ans+='a',
            a--;
        else
            k -= dp[a-1][b],
            ans+='b',
            b--;
    }
    cout << ans + string(a, 'a') + string(b, 'b') << endl;

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

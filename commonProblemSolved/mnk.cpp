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
int isnmkwork(int day_n, int month, int total_days){
    int will_work = day_n & (month & (total_days % 2));
    return will_work;
}
int days(int n){
    if(n == 2) return 28;
    if(n <= 7 and n%2 == 1)
        return 31;
    if(8 < n and n % 2 == 1)
        return 30;
    return 31;
}
int alabu(){
    int total_nkm_work = 0;
    for(int i = 1; i<=12; i++){
        int totaldays = days(i);
        for(int j = 1; j<totaldays; j++)
            total_nkm_work += isnmkwork(j, i, totaldays);
        cout << i << ' ' << total_nkm_work << '\n';
    }
    return total_nkm_work;
}
void solve(int tc)
{
    cout << alabu() << '\n';
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


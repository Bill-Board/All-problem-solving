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
int a[]= {5,65,34,76,23,67,43,788,343,2,54};

void solve(int tc)
{
    int n = 11;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++)
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);
    }
    for(int i = 0; i<n ; i++)
        cout << a[i] << " \n"[i == n-1];
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

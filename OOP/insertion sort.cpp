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
int a[]={8,5,4,7,6,8,2,4,5,7};

void solve(int tc)
{
    int n = 10;
    for(int i = 1; i<n; i++){
        int key = a[i], j = i - 1;
        while(0<=j and key < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for(int i = 0; i<n; i++)
        cout << a[i] << " \n"[i==n-1];
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
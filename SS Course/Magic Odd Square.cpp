//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=205;

int a[N][N];
void solve()
{
    int n ;
    cin >> n;
    int len = (n + 1)/ 2;
    for(int i = 1; i <= len ; i++)
    {
        for(int j = len, k =i; k-- ; j-- )
        {
            a[i][j] = 1;
            a[ i ] [ n-j+1 ]= 1;
            a[ n-i+1 ] [j]= 1;
            a[ n-i+1 ] [ n-j+1 ]= 1;
        }
    }
    int even = 0, odd = -1;
    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= n;  j++ )
        {
            if(a[i][j] == 1)
                a[i][j] = odd += 2;
            else
                a[i][j] = even += 2;
        }
    }
    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= n;  j++ )
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
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

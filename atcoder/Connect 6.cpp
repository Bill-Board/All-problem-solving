//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1005;


char a[N][N];
ll n, k=3;
bool horai(ll i, ll j)
{
//    if(i==1 and j==5)
//        cout <<"yes "<< endl ;
    int kot=0;
    if(a[i][j]=='#')kot++;
    if(j+1<n and a[i][j+1]=='#')kot++;
    if(j+2<n and a[i][j+2]=='#')kot++;
    if(j+3<n and a[i][j+3]=='#')kot++;
    if(j-1>=0 and a[i][j-1]=='#')kot++;
    if(j-2>=0 and a[i][j-2]=='#')kot++;
    return k<kot;
}
bool verti(ll i, ll j)
{
    ll kot=0;
    if(a[i][j]=='#')kot++;
    if(i+1<n and a[i+1][j]=='#')kot++;
    if(i+2<n and a[i+2][j]=='#')kot++;
    if(i+3<n and a[i+3][j]=='#')kot++;
    if(i-1>=0 and a[i-1][j]=='#')kot++;
    if(i-2>=0 and a[i-2][j]=='#')kot++;
    return k<kot;
}
bool dia_a(ll i, ll j)
{
    int kot=0;
    if(a[i][j]=='#')kot++;
    if(i+1<n and j+1<n and a[i+1][j+1]=='#')kot++;
    if(i+2<n and j+2<n and a[i+2][j+2]=='#')kot++;
    if(i+3<n and  j+3<n and a[i+3][j+3]=='#')kot++;
    if(i-1>=0 and  j-1>=0 and a[i-1][j-1]=='#')kot++;
    if(i-2>=0 and  j-2>=0 and a[i-2][j-1]=='#')kot++;
    return k<kot;
}

bool dia_b(ll i, ll j)
{
    int kot=0;
    if(a[i][j]=='#')kot++;
    if(i+1<n and j-1>=0 and a[i+1][j-1]=='#')kot++;
    if(i+2<n and j-2>=0 and a[i+2][j-2]=='#')kot++;
    if(i+3<n and  j-3>=0 and a[i+3][j-3]=='#')kot++;
    if(i-1>=0 and  j+1<n and a[i-1][j+1]=='#')kot++;
    if(i-2>=0 and  j+2<n and a[i-2][j+2]=='#')kot++;
    return k<kot;
}


void solve()
{
    cin >> n ;
    for(int i=0; i<n ; i++)
        for(int j=0; j<n ; j++)
            cin >> a[i][j];
    for(int i=0; i<n ; i++)
        for(int j=0; j<n ; j++)
            if(horai(i,j) or verti(i, j) or dia_a(i, j) or dia_b(i, j))
        {
//            cout << i << " " << j << endl;
            cout << "Yes" << endl;
            return;
        }
    cout << "No" << endl;
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

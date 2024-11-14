//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
ll n, x;

ll alabu(vector<ll> a,vector<ll> b ,vector<ll> c,int pos){
    for(int i = pos; i<=n; i++){
        ll temp = a[i]+x;
        ll kot1 = 0, kot2 = 0;
        if(i != 1)
            kot1 = a[i-1] ^ temp;
        if(i !=n )
            kot2 = a[i+1] ^ temp;
        if(b[i]+c[i] <= kot1+kot2){
            a[i] = temp;

            b[i] = a[i-1]^a[i];
            b[i+1] = a[i]^a[i+1];

            c[i-1] =  b[i],
            c[i] = b[i+1];
        }
    }
//    for(int i = 1; i<=n; i++)
//        cout << a[i] << " \n"[i==n];
    ll cr_h = 0;
    for(int i = 2; i<=n; i++)
        cr_h += (a[i-1] ^ a[i]);

    return cr_h ;
}

ll alabu1(vector<ll> a, int pos){
    for(int i = pos; i<=n; i+=2){
        ll age = (a[i-1] ^a[i]) + ( a[i] ^ a[i+1]);
        ll temp = a[i] + x;
        ll ekhn = (a[i-1] ^temp) + ( temp ^ a[i+1]);
        if(age <= ekhn)
            a[i] = temp;
    }
    ll cr_h = 0;
    for(int i = 2; i<=n; i++)
        cr_h += (a[i-1] ^ a[i]);

    pos = pos == 2 ? 1 : 2;
    for(int i = pos; i<=n; i+=2){
        ll age = (a[i-1] ^a[i]) + ( a[i] ^ a[i+1]);
        ll temp = a[i] + x;
        ll ekhn = (a[i-1] ^temp) + ( temp ^ a[i+1]);
        if(age <= ekhn)
            a[i] = temp;
    }
    ll cr_h1 = 0;
    for(int i = 2; i<=n; i++)
        cr_h1 += (a[i-1] ^ a[i]);

    return max(cr_h,cr_h1);
}





void solve(int tc)
{
    cin >> n >> x;
    vector<ll> a(n+3,0),b(n+3,0), c(n+3,0);
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    a[0] =a[1];
    a[n+1] = a[n];
    ll cr_h = 0;
    for(int i = 2; i<=n; i++){
        b[i] = (a[i]^a[i-1]);/// pichone
        cr_h += b[i];
        c[i-1] = b[i];/// samne
    }
//    for(int i = 1; i<=n; i++)
//        cout << b[i] << " \n"[i==n];
//    for(int i = 1; i<=n; i++)
//        cout << c[i] << " \n"[i==n];

    cr_h = max(cr_h , alabu(a, b, c, 1));
    cr_h = max(cr_h , alabu(a, b, c, 2));
    cr_h = max(cr_h , alabu1(a, 1));
    cr_h = max(cr_h , alabu1(a, 2));
    cout << cr_h << '\n';
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

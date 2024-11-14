//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000005;
ll mod= 1e9+7;
int rrr[N], sze[N], a[N];

int root( int n ){
    while(rrr[n]!=n) {
        rrr[n] = rrr[rrr[rrr[n]]];
        n = rrr[n];
    }
    return n;
}
bool dsu(int a, int b)
{
    int u=root(a), v=root(b);
    if(u == v)
        return false;
    if(sze[u]>sze[v]){
        rrr[v]=rrr[u];
        sze[u]+=sze[v];
    }
    else{
        rrr[u]=rrr[v];
        sze[v]+=sze[u];
    }
    return true;
}

void solve(int tc)
{
    int n; cin >> n;
    for(int i = 1; i<=n; i++)
        sze[i] = 1, rrr[i] = i;
    ll g = n/2 , cr_h = 0;
    for(int i = g; i>0; i--){
        for(int j = i+i; j<=n; j+=i)
            if(dsu(i, j))
                cr_h += i;//, cout << j << '\n';
    }
    cout << "Case " << tc <<": "<< cr_h << '\n';
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

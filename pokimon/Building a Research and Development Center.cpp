//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100005;
ll mod= 1e9+7;
int rrr[N];
int sz[N];
int root( int n ){
    while(rrr[n]!=n) {
        rrr[n] = rrr[rrr[n]];
        n = rrr[n];
    }
    return n;
}

void dsu(int x,int y)
{
    int xr=root(x),yr=root(y);
    if(xr == yr){
        return;
    }
    if(sz[xr]>sz[yr]){
        rrr[yr]=xr;
        rrr[xr]=xr;
    }
    else if(sz[xr]<sz[yr]){
        rrr[xr]=yr;
        rrr[yr] =yr;
    }
    else{
        if(xr > yr)
            rrr[yr]=xr, rrr[xr] = xr;
        else
            rrr[xr]=yr,rrr[yr] = yr;
    }
}




void solve(int tc)
{
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i<n ; i++){
        cin >> a[i];
        sz[a[i]] = n - i;
        rrr[i]=i;
    }
    while(q--){
        int t; cin >> t;
        if(t == 1){
            int x, y; cin >> x >> y;
            dsu(x, y);
        }
        else if(t==2){
            int x; cin >> x;
            int rt = root(x);
            if(rt == x){
                sz[x]++;
                continue;
            }

            if(sz[rt] == sz[x]){
                rrr[rt] = x, rrr[x]=x;
            }
            else if(sz[rt] == sz[x]+1){
                if(rt > x)
                    rrr[x]=rt, rrr[rt]=rt;
                else
                    rrr[rt]=x, rrr[x]=x;
            }
            sz[x]++;
        }
        else{
            int y; cin >> y;
            cout << root(y) << '\n';
        }
//        cout << "\nsz\n";
//        for(int i = 0; i<n; i++)
//            cout << sz[i] << " \n"[i==n-1];
//        cout << "rt\n";
//        for(int i = 0; i<n; i++)
//            cout << root(i) << " \n"[i==n-1];
//        cout << "\n\n\n";

    }
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

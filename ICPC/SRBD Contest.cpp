//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int N=200005;
ll mod= 1e9+7;

template <class T> inline T bigmod(T n,T p,T m)
{
    if(p==0)return 1;
    else if(p%2==0)
    {
        ll val=bigmod(n,p/2,m);
        return (T)((val*val)%m);
    }
    else return (T)(((ll)n*(ll)bigmod(n,p-1,m))%m);
}



void solve(int tc)
{
    int n; cin >> n;
    vector< pii > a[20];
    for(int i = 1; i<=n; i++){
        a[i].push_back({0,0});
        for(int j = 1; j<=n; j++){
            int x; char c ;
            cin >> c;
            cin >> x >> c >> c;
            int ok = c == 'T' ? 1 : 0;
            a[i].push_back({x,ok});
            cin >> c;
        }
    }

//    for(int i = 1; i<=n; i++){
//        for(int j = 1; j<=n; j++)
//            cout << "(" << a[i][j].first << "," << a[i][j].second << ") ";
//        cout << '\n';
//    }

    vector<int> b;
    for(int i = 1; i <= n; i++)
        b.push_back(i);
    ll cr_h = 0;
    do{
        ll ans = 0, p = b[0], q =b[1];
        for(int i = 0; i<n-2; i++){
            ans += a[p][q].first;
            //cout << "pq " << p << " " << q << '\n';
            if(a[p][q].second == 1)
                q = b[i+2];
            else
                p = b[i+2];
        }
        ans += a[p][q].first;
        //for(auto i: b)cout << i << " "; cout << '\n';cout << ans << "\n\n\n";
        cr_h = max(cr_h, ans);
    }while(next_permutation(b.begin(),b.end()));
    cout <<"Case "<< tc << ": "<< cr_h << '\n';
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

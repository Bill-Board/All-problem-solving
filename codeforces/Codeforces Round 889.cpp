//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 100005;
ll mod= 1e9+7;

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }


vector<pii> ans;
int alabu_pos(vector<int> a, int n, int ind){
    for(int i = ind + 1; i<n; i++){
        int lop = 10;
        while(a[i-1] > a[i] and lop--)
            a[i] += a[i-1], ans.push_back({i, i-1});
    }
    for(int i = 0; i<n; i++){
        int age = ((i - 1) + n) % n, lop = 10, cnt = 0;
        while(a[age] > a[i] and lop--)
            //cout << "yes " << a[age] << ' ' << a[i] << '\n',
            a[i] += a[age], ans.push_back({i, age});
        if(a[age] > a[i]) return N;
    }
//    if(ans.size() < 32){
//        cout << "pos " << ind << "\t";
//            for(auto i: a)
//                cout << i << ' ';cout << '\n';
//    }
    return ans.size();
}
int alabu_neg(vector<int> a, int n, int ind){
    for(int i = ind - 1; 0 <= i; i--){
        int lop = 10;
        while(a[i] > a[i+1] and lop--)
            a[i] += a[i+1], ans.push_back({i, i+1});
    }
    for(int i = n-1; 0 <= i; i--){
        int pore = (i + 1) % n , cnt = 0, lop = 10;
        while(a[i] > a[pore] and lop--)
            a[i] += a[pore], ans.push_back({i, pore});
        if(a[i] > a[pore])
            return N;
    }
//    if(ans.size() < 32){
//        cout << "neg " << ind << "\t";
//            for(auto i: a)
//                cout << i << ' ';cout << '\n';
//    }
    return ans.size();
}

void pppp(){
    cout << ans.size() << '\n';
    for(auto i: ans)
        cout << i.first + 1 << ' ' << i.second + 1 << '\n';
    return;
}

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n);
    vector<pii> vp(n);
    for(int i = 0; i<n; i++)
        cin >> a[i], vp[i] = {a[i], i};

    if(is_sorted(a.begin(),a.end())){
        cout << 0 << '\n';
        return;
    }
    sort(vp.begin(),vp.end());

    for(int i = 0; i<n; i++){
        ans.clear();
        if(a[i] > 0 and alabu_pos(a, n, i) < 32){
            pppp();
            return;
        }
        ans.clear();
        if(a[i] < 0 and alabu_neg(a, n, i) < 32){
            pppp();
            return;
        }
    }
    for(int i = 0; i<n; i++){
        ans.clear();
        int tmp = a[i];
        a[i] += vp.back().first;
        ans.push_back({i, vp.back().second});
        if(a[i] > 0 and alabu_pos(a, n, i) < 32){
            pppp();
            return;
        }


        ans.clear();
        ans.push_back({i, vp.back().second});
        if(a[i] < 0 and alabu_neg(a, n, i) < 32){
            pppp();
            return;
        }
        a[i] = tmp;
    }

    for(int i = 0; i<n; i++){
        ans.clear();
        int tmp = a[i];
        a[i] += vp.front().first;
        ans.push_back({i, vp.front().second});
        if(a[i] > 0 and alabu_pos(a, n, i) < 32){
            pppp();
            return;
        }


        ans.clear();
        ans.push_back({i, vp.front().second});
        if(a[i] < 0 and alabu_neg(a, n, i) < 32){
            pppp();
            return;
        }
        a[i] = tmp;
    }
    pppp();
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

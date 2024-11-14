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
int a[N];
string s;
template <typename T>
struct st{
    #define lc (n<<1)
    #define rc ((n<<1)+1)

    vector<T> t, lazy, t2;

    st(T n){
        t.resize(4*n, 0);
        lazy.resize(4*n, 0);
        t2.resize(4*n, 0);
    }
    inline void push(int n, int b, int e){ //change here
        lazy[n] %= 2;
        if (lazy[n] == 0)
            return;
        swap(t[n], t2[n]);
        if (b != e){
            lazy[lc] += lazy[n];
            lazy[rc] += lazy[n];
        }
        lazy[n] = 0;
    }

    inline void pull(int n){ // change here
        t[n]=t[lc]^t[rc];
        t2[n]=t2[lc]^t2[rc];
    }
    void build(int n, int b, int e){
        lazy[n]=0; // change here
        if(b==e){
            if(s[b-1] == '1')
                t[n]=a[b];
            else
                t2[n]=a[b];
            //cout << b << ' ' << e << ' ' << t[n] << ' ' << t2[n] << '\n';
            //cout << a[b] << '\n';
            return;
        }
        T mid= (b+e)>>1;
        build(lc, b, mid);
        build(rc, mid+1, e);
        pull(n);
        //cout << b << ' ' << e << ' ' << t[n] << ' ' << t2[n] << '\n';
    }
    void update (int n, int b, int e, int i, int j){
        push(n, b, e);
        if(j<b || i>e) return;
        if(i<=b and j>=e){
            lazy[n] = 1; // set lazy
            push(n, b, e);
            return;
        }
        int mid=(b+e)>>1;
        update(lc, b, mid, i, j);
        update(rc, mid+1, e, i, j);
        pull(n);
    }

    T query1(int b , int e){
        push(1, b, e);
        return t[1];
    }
    T query2(int b, int e){
        push(1, b, e);
        return t2[1];
    }
};

void solve(int tc)
{
    int n, q;cin >> n;
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    cin >> s >> q;
    st<int> p(n+10);
    p.build(1, 1, n);
    while(q--){
        int typ; cin >> typ;
        if(typ == 1){
            int l, r; cin >> l >> r;
            p.update(1, 1, n, l, r);
        }
        else{
            int g; cin >> g;
            if(g == 1) // 1 er jnno
                cout << p.query1(1, n) << ' ';
            else
                cout << p.query2(1, n) << ' ';
        }
    }
    cout << '\n';
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

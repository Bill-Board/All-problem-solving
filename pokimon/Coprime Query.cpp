//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

ll lp[N+12], divv[N+12];
vector<ll> pr;
void mpf()
{
    for(int i=2;i<=N;i++)
    {
        if(lp[i]==0)lp[i]=i,pr.push_back(i);
        for(int j=0;j<pr.size() and pr[j]<=lp[i] and i*pr[j]<=N;j++)
            lp[i*pr[j]]=pr[j];
    }
}
vector<int> b;
int inc_exl()
{
    int odd = 0, even = 0, n =b.size();
    int pow_set_size = (1 << n);
    for (int i = 1; i < pow_set_size; i++) {
        ll p = 1;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                p *= b[j];
            }
        }
        if(p > N) continue;
        if (__builtin_popcount(i) & 1)
            odd += divv[p];
        else
            even += divv[p];
    }
    return odd - even;
}

void alabu(int x){
    for(int i = 1; i*i <=x; i++){
        if(x % i ==0){
            divv[i]++;
            if(x/i != i)
                divv[x/i]++;
        }
    }
}

void solve(int tc)
{
    int n, q; cin >> n >> q;
    divv[1]=n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        alabu(a[i]);
    }
    while(q--){
        int x; cin >> x;b.clear();
        while(x>1){
            int p = lp[x];
            b.push_back(p);
            while(x % p == 0)
                x/=p;
        }
        cout << n - inc_exl() << '\n';
    }
}



signed main()
{
    mpf();
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

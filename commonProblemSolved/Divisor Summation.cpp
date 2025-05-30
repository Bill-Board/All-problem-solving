//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=500002;
int lp[N+4];
ll ans[N+4];
vector<int> pr;
int kot = 0;
void mpf()
{
    for(int i=2;i<=N;i++)
    {
        if(lp[i]==0)lp[i]=i,pr.push_back(i);
        for(int j=0;j<pr.size() and pr[j]<=lp[i] and i*pr[j]<=N;j++)
            lp[i*pr[j]]=pr[j], kot++;
    }

    for(int i = 2; i < N ; i++){
        int temp = i;
        ll sod = 1;
        while(temp > 1){
            int p = lp[temp];
            ll gun = p;
            while(temp % p == 0){
                temp /= p;kot++;
                gun *= p;
            }
            if(gun > p)
                sod *= (gun - 1)/(p - 1);
        }
        ans[i] = sod - i;
    }
}
void solve()
{
    int n;
    cin >> n;
    cout << ans[n] << endl;
}



signed main()
{
    mpf();
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
